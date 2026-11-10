#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Executor_19449a0(_QWORD, _QWORD);
__int64 GameRoutine_18cd240(__int64);
__int64 MoviePlayer_18d2d60_alt1(_QWORD, _QWORD) __asm__("MoviePlayer_18d2d60");
__int64 MoviePlayer_18d2e60_alt1(_QWORD) __asm__("MoviePlayer_18d2e60");
__int64 movie_VideoDecoder_Flush(_QWORD);
__int64 movie_VideoDecoder_Start(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_movie_MediaExtractor_SeekTo(_QWORD, _QWORD, _QWORD);
__int64 nn_os_ClearEvent(_QWORD);
__int64 nn_os_DestroyThread(_QWORD);
__int64 nn_os_SendMessageQueue(_QWORD, _QWORD);
__int64 nn_os_SignalEvent(_QWORD);
__int64 nn_os_SignalLightEvent(_QWORD);
__int64 nn_os_TryWaitLightEvent(_QWORD);
__int64 nn_os_WaitThread(_QWORD);
__int64 pthread_cond_clockwait(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 pthread_setspecific(_QWORD, _QWORD);
__int64 std___1___assoc_sub_state___sub_wait(_QWORD, _QWORD);
__int64 std___1___assoc_sub_state_wait(void);
__int64 std___1___libcpp_verbose_abort(_QWORD);
__int64 std___1___shared_count_Destroy___shared_count(_QWORD);
__int64 std___1___thread_local_data(void);
__int64 std___1___thread_struct_Destroy___thread_struct(_QWORD);
__int64 std___1___throw_system_error(_QWORD, _QWORD);
__int64 std___1_chrono_steady_clock_now(void);
__int64 std___1_chrono_steady_clock_now_alt1(_QWORD) __asm__(
    "std___1_chrono_steady_clock_now");
__int64 std___1_mutex_lock(_QWORD);
__int64 std___1_mutex_unlock(_QWORD);
__int64 std_exception_ptr_Destroy_exception_ptr(_QWORD);
__int64 std_exception_ptr_exception_ptr(_QWORD, _QWORD);
__int64 std_rethrow_exception(_QWORD);
extern __int64 (*GameData_2109088[])();
extern __int64 GameData_2132158;
extern __int64 GameData_226b920;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
bool MoviePlayer_18d1b90(__int64 a1);
__int64 MoviePlayer_18d2310(__int64 a1);
__int64 omovie_MoviePlayer_PrepareMovie_lambda0_Unknown0(__int64 a1);
__int64 omovie_MoviePlayer_PrepareMovie_lambda0_Unknown1(__int64 a1);
__int64 omovie_MoviePlayer_PrepareMovie_lambda0_Unknown2(__int64 a1);
void __attribute__((noreturn)) MoviePlayer_18d2c80();
__int64 MoviePlayer_18d2ca0(__int64* a1);
__int64 MoviePlayer_18d2d60(__int64 a1, __int64* a2);
__int64 MoviePlayer_18d2e60(__int64 a1);
__int64 omovie_MoviePlayer_Play_lambda1_Invoke(__int64 result);

bool MoviePlayer_18d1b90(__int64 a1)
{
  __int64 v1;
  __int64 v4;
  int v5;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 4896);
  if (v1 != 0) {
    v6 = std___1_chrono_steady_clock_now();
    if ((unsigned int)MoviePlayer_18d2d60_alt1(v1, &v6) != 0) {
      return false;
    }
    v4 = *(_QWORD*)(a1 + 4896);
    *(_QWORD*)(a1 + 4896) = 0;
    v5 = MoviePlayer_18d2e60_alt1(v4);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v5 != 0) {
      LABEL_6:
        nn_os_SignalLightEvent(a1 + 684);
        return true;
      }
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      if (v5 != 0) {
        goto LABEL_6;
      }
    }
  }
  return (nn_os_TryWaitLightEvent(a1 + 684) & 1) != 0 ||
         *(_DWORD*)(a1 + 4892) > 0;
}

__int64 MoviePlayer_18d2310(__int64 a1)
{
  int v2;
  int v3;

  if (*(_DWORD*)(a1 + 4892) != 4) {
    if (*(_BYTE*)(a1 + 56) == 1) {
      v2 = atomic_load((unsigned __int8*)(a1 + 57));
      if (v2 == 1) {
        nn_os_SignalEvent(a1 + 544);
        nn_os_WaitThread(a1 + 88);
        atomic_store(0, (unsigned __int8*)(a1 + 57));
      }
      Executor_19449a0(GameData_226b920, *(_QWORD*)(a1 + 80));
      *(_QWORD*)(a1 + 80) = 0;
      nn_os_DestroyThread(a1 + 88);
      *(_BYTE*)(a1 + 56) = 0;
    }
    if (*(_BYTE*)(a1 + 680) == 1) {
      nn_os_SendMessageQueue(a1 + 3584, 4);
      if (*(_BYTE*)(a1 + 3104) == 1) {
        v3 = atomic_load((unsigned __int8*)(a1 + 3105));
        if (v3 == 1) {
          nn_os_SendMessageQueue(a1 + 3584, 10);
          nn_os_WaitThread(a1 + 3128);
          atomic_store(0, (unsigned __int8*)(a1 + 3105));
        }
        Executor_19449a0(GameData_226b920, *(_QWORD*)(a1 + 3120));
        *(_QWORD*)(a1 + 3120) = 0;
        nn_os_DestroyThread(a1 + 3128);
        *(_BYTE*)(a1 + 3104) = 0;
      }
    }
    *(_DWORD*)(a1 + 4892) = 4;
  }
  return 0;
}

__int64 omovie_MoviePlayer_PrepareMovie_lambda0_Unknown0(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)a1 = GameData_2109088;
  if ((*(_BYTE*)(a1 + 56) & 1) != 0 && *(_QWORD*)(a1 + 72) != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
  }
  *(_QWORD*)a1 = GameData_2132158 + 16;
  std_exception_ptr_Destroy_exception_ptr(a1 + 16);
  return std___1___shared_count_Destroy___shared_count(a1);
}

__int64 omovie_MoviePlayer_PrepareMovie_lambda0_Unknown1(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *(_QWORD*)a1 = GameData_2109088;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 56) & 1) != 0 && *(_QWORD*)(a1 + 72) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  *(_QWORD*)a1 = GameData_2132158 + 16;
  std_exception_ptr_Destroy_exception_ptr(a1 + 16);
  std___1___shared_count_Destroy___shared_count(a1);
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v4);
}

__int64 omovie_MoviePlayer_PrepareMovie_lambda0_Unknown2(__int64 a1)
{
  std___1___assoc_sub_state_wait();
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 8LL))(a1);
}

void __attribute__((noreturn)) MoviePlayer_18d2c80()
{
  std___1___libcpp_verbose_abort(
      "future_error was thrown in -fno-exceptions mode");
  __udf(0);
}

__int64 MoviePlayer_18d2ca0(__int64* a1)
{
  unsigned int* v2;
  __int64 v3;
  void (*v4)(_QWORD);
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = (unsigned int*)std___1___thread_local_data();
  v3 = *a1;
  *a1 = 0;
  pthread_setspecific(*v2, v3);
  v4 = (void (*)(_QWORD))a1[1];
  v5 = a1[2];
  v6 = (_QWORD*)(a1[3] + (v5 >> 1));
  if ((v5 & 1) != 0) {
    v4 = *(void (**)(_QWORD))((char*)v4 + *v6);
  }
  v4(v6);
  v7 = *a1;
  *a1 = 0;
  if (v7 != 0) {
    std___1___thread_struct_Destroy___thread_struct(v7);
    v8 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v8);
  }
  v9 = 128;
  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
    v9 = 56;
  }
  nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v9);
  return 0;
}

__int64 MoviePlayer_18d2d60(__int64 a1, __int64* a2)
{
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  _QWORD v11[2];

  v4 = std___1_mutex_lock(a1 + 24);
  v5 = *(_DWORD*)(a1 + 40);
  if ((v5 & 8) != 0) {
  LABEL_11:
    v9 = 2;
  }
  else {
    if ((v5 & 4) == 0) {
      while (1) {
        v6 = std___1_chrono_steady_clock_now_alt1(v4);
        if (v6 >= *a2) {
          break;
        }
        v4 = std___1_chrono_steady_clock_now_alt1(v6);
        v7 = *a2;
        if (*a2 > v4) {
          v11[0] = v7 / 1000000000;
          v11[1] = v7 % 1000000000;
          v8 = pthread_cond_clockwait(a1 + 32, a1 + 24, 1, v11);
          if ((_DWORD)v8 != 0 && (_DWORD)v8 != 110) {
            std___1___throw_system_error(
                v8, "condition_variable timed_wait failed");
            goto LABEL_11;
          }
          v4 = std___1_chrono_steady_clock_now_alt1(v8);
        }
        v5 = *(_DWORD*)(a1 + 40);
        if ((v5 & 4) != 0) {
          goto LABEL_13;
        }
      }
      v5 = *(_DWORD*)(a1 + 40);
    }
  LABEL_13:
    v9 = (v5 & 4) == 0;
  }
  std___1_mutex_unlock(a1 + 24);
  return v9;
}

__int64 MoviePlayer_18d2e60(__int64 a1)
{
  __int64 v2;
  unsigned int v3;
  _BYTE v5[8];
  __int64 v6;
  char v7;
  __int64 v8;

  v6 = a1 + 24;
  v7 = 1;
  std___1_mutex_lock(a1 + 24);
  std___1___assoc_sub_state___sub_wait(a1, &v6);
  v2 = *(_QWORD*)(a1 + 16);
  v8 = 0;
  std_exception_ptr_Destroy_exception_ptr(&v8);
  if (v2 != 0) {
    std_exception_ptr_exception_ptr(v5, a1 + 16);
    std_rethrow_exception(v5);
    __udf(0);
  }
  v3 = *(_DWORD*)(a1 + 44);
  if (v7 == 1) {
    std___1_mutex_unlock(v6);
  }
  return v3;
}

__int64 omovie_MoviePlayer_Play_lambda1_Invoke(__int64 result)
{
  _BYTE* v1;

  v1 = *(_BYTE**)(result + 8);
  if ((v1[681] & 1) == 0) {
    nn_os_ClearEvent(v1 + 696);
    v1[681] = 1;
    if (v1[4864] == 1) {
      if (v1[680] != 1 ||
          (_DWORD)(result = GameRoutine_18cd240((__int64)(v1 + 3096))) == 0 &&
              (_DWORD)(result = movie_VideoDecoder_Flush(v1 + 2400)) == 0) {
        result = nn_movie_MediaExtractor_SeekTo(v1 + 3968, 0, 0);
        if ((_DWORD)result == 0 && (v1[680] & 1) != 0) {
          v1[681] = 0;
          return movie_VideoDecoder_Start(v1 + 2400);
        }
      }
    }
    else {
      return nn_os_SignalLightEvent(v1 + 684);
    }
  }
  return result;
}

#pragma GCC visibility pop
