#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_18cd4a0(__int64, __int64);
__int64 GameRoutine_18cf910(__int64, _QWORD*);
__int64 GameRoutine_18d04c0(_QWORD);
__int64 GameRoutine_18d0c60(_QWORD, _QWORD);
__int64 GameRoutine_18d0ec0(_QWORD);
__int64 GameRoutine_18d1570(_QWORD);
__int64 GameRoutine_18d1c50(_QWORD);
__int64 Manager_18cfce0_alt1(_QWORD) __asm__("Manager_18cfce0");
__int64 MoviePlayer_18d1b90(_QWORD);
__int64 MoviePlayer_18d2310(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindBlendState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindDepthStencilState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindMultisampleState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_BindPolygonState(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_ClearCommandList(_QWORD);
__int64 gxc_NvnStateCache_Reset(_QWORD);
__int64 gxc_NvnStateCache_SetCommandList(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_SleepThread(_QWORD);
extern _UNKNOWN** GameData_212e778[2];
extern _UNKNOWN** GameData_212e780;
extern __int64 (*GameData_2108fc8[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* game_g_frame_clock_ptr[3];
extern int GameData_21fdeb8;
extern int GameData_21fdee0;
extern int GameData_21fdf08;
extern int GameData_21fdf14;
__int64 Manager_18cf680(__int64 a1);
__int64 Manager_18cfa40(__int64 a1, _QWORD* a2);
__int64 Manager_18cfba0(__int64 a1);
__int64 Manager_18cfcb0(__int64 a1);
__int64 Manager_18cfce0(__int64 result);
void omovie_Manager_SetupGfxResources_lambda0_Invoke(__int64 a1, _WORD* a2);
_QWORD* Manager_18cff90(_QWORD* result);
__int64 Manager_18d0010(_QWORD* a1);
__int64 Manager_18d00b0(__int64 result);
__int64 omovie_Manager_Main_lambda0_Invoke(__int64 a1, _QWORD* a2, __int64 a3,
                                           __int64 a4, __int64 a5, __int64* a6);

__int64 Manager_18cf680(__int64 a1)
{
  _QWORD* v1;
  __int64* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 result;

  v1 = *(_QWORD**)(a1 + 160);
  if (v1 != nullptr) {
    v3 = game_g_frame_clock_ptr[0];
    v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      MoviePlayer_18d2310(v1[5]);
      v5 = *v3;
      v6 = *v3 + 16592;
      v7 = fw_memory_HeapManager_Allocate(*v4, 24, 16, 0);
      *(_DWORD*)(v7 + 8) = 2;
      *(_QWORD*)v7 = GameData_2108fc8;
      v8 = v7;
      v9 = v1[5];
      v1[5] = 0;
      *(_QWORD*)(v7 + 16) = v9;
      v10 = (_QWORD*)fw_memory_HeapManager_Allocate(*v4, 24, 16, 0);
      v10[1] = v6;
      v10[2] = v8;
      v11 = *(_QWORD*)(v5 + 16592);
      *v10 = v11;
      *(_QWORD*)(v11 + 8) = v10;
      *(_QWORD*)(v5 + 16592) = v10;
      ++*(_QWORD*)(v5 + 16608);
      v1 = (_QWORD*)*v1;
    } while (v1 != nullptr);
  }
  result = Manager_18cfce0_alt1(a1 + 144);
  *(_DWORD*)(a1 + 184) = 3;
  return result;
}

__int64 Manager_18cfa40(__int64 a1, _QWORD* a2)
{
  __int64 result;
  __int64 v5;

  if (GameRoutine_18d04c0(a1 + 144) == 0) {
    GameRoutine_18cf910(a1, a2);
  }
  result = GameRoutine_18d04c0(a1 + 144);
  if (result != 0) {
    v5 = result;
    if ((MoviePlayer_18d1b90(*(_QWORD*)(result + 40)) & 1) == 0) {
      nn_os_SleepThread(100000000);
      if ((MoviePlayer_18d1b90(*(_QWORD*)(v5 + 40)) & 1) == 0) {
        nn_os_SleepThread(100000000);
        if ((MoviePlayer_18d1b90(*(_QWORD*)(v5 + 40)) & 1) == 0) {
          nn_os_SleepThread(100000000);
          if ((MoviePlayer_18d1b90(*(_QWORD*)(v5 + 40)) & 1) == 0) {
            nn_os_SleepThread(100000000);
            if ((MoviePlayer_18d1b90(*(_QWORD*)(v5 + 40)) & 1) == 0) {
              nn_os_SleepThread(100000000);
              if ((MoviePlayer_18d1b90(*(_QWORD*)(v5 + 40)) & 1) == 0) {
                nn_os_SleepThread(100000000);
                if ((MoviePlayer_18d1b90(*(_QWORD*)(v5 + 40)) & 1) == 0) {
                  nn_os_SleepThread(100000000);
                  if ((MoviePlayer_18d1b90(*(_QWORD*)(v5 + 40)) & 1) == 0) {
                    nn_os_SleepThread(100000000);
                    if ((MoviePlayer_18d1b90(*(_QWORD*)(v5 + 40)) & 1) == 0) {
                      nn_os_SleepThread(100000000);
                      if ((MoviePlayer_18d1b90(*(_QWORD*)(v5 + 40)) & 1) == 0) {
                        nn_os_SleepThread(100000000);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return GameRoutine_18d1c50(*(_QWORD*)(v5 + 40));
  }
  return result;
}

__int64 Manager_18cfba0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;

  result = GameRoutine_18d04c0(a1 + 144);
  if (result != 0) {
    v3 = result;
    MoviePlayer_18d2310(*(_QWORD*)(result + 40));
    v4 = *game_g_frame_clock_ptr[0];
    v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v6 = *game_g_frame_clock_ptr[0] + 16592;
    v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        24, 16, 0);
    *(_DWORD*)(v7 + 8) = 2;
    *(_QWORD*)v7 = GameData_2108fc8;
    v8 = *(_QWORD*)(v3 + 40);
    *(_QWORD*)(v3 + 40) = 0;
    *(_QWORD*)(v7 + 16) = v8;
    v9 = (_QWORD*)fw_memory_HeapManager_Allocate(*v5, 24, 16, 0);
    v9[1] = v6;
    v9[2] = v7;
    v10 = *(_QWORD*)(v4 + 16592);
    *v9 = v10;
    *(_QWORD*)(v10 + 8) = v9;
    *(_QWORD*)(v4 + 16592) = v9;
    ++*(_QWORD*)(v4 + 16608);
    result = GameRoutine_18d04c0(a1 + 144);
    if (result != 0) {
      result = GameRoutine_18d0c60(a1 + 144, result);
    }
    *(_DWORD*)(a1 + 184) = 3;
  }
  return result;
}

__int64 Manager_18cfcb0(__int64 a1)
{
  __int64 result;

  result = GameRoutine_18d0ec0(a1 + 144);
  if (result != 0) {
    return MoviePlayer_18d1b90(*(_QWORD*)(result + 40));
  }
  return result;
}

__int64 Manager_18cfce0(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;

  if (*(_QWORD*)(result + 24) != 0) {
    v1 = *(_QWORD**)(result + 16);
    v2 = (_QWORD*)result;
    if (v1 != nullptr) {
      v3 = fw_memory_g_heap_manager_ptr;
      do {
        v5 = v1;
        v1 = (_QWORD*)*v1;
        v6 = v5[5];
        v5[5] = 0;
        if (v6 != 0) {
          GameRoutine_18d1570(v6);
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v7 = 128;
          }
          else {
            v7 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
        }
        if ((v5[2] & 1) != 0 && v5[4] != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8);
        }
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v4 = 128;
        }
        else {
          v4 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4);
      } while (v1 != nullptr);
    }
    v9 = v2[1];
    v2[2] = 0;
    if (v9 != 0) {
      v10 = v9 & 7;
      if (v9 >= 8) {
        v12 = v9 & 0xFFFFFFFFFFFFFFF8LL;
        v11 = 0;
        do {
          *(_QWORD*)(*v2 + 8 * v11) = 0;
          *(_QWORD*)(*v2 + 8 * v11 + 8) = 0;
          *(_QWORD*)(*v2 + 8 * v11 + 16) = 0;
          *(_QWORD*)(*v2 + 8 * v11 + 24) = 0;
          *(_QWORD*)(*v2 + 8 * v11 + 32) = 0;
          *(_QWORD*)(*v2 + 8 * v11 + 40) = 0;
          *(_QWORD*)(*v2 + 8 * v11 + 48) = 0;
          v13 = *v2 + 8 * v11;
          v11 += 8;
          *(_QWORD*)(v13 + 56) = 0;
        } while (v12 != v11);
      }
      else {
        v11 = 0;
      }
      if (v10 != 0) {
        v14 = 8 * v11;
        do {
          --v10;
          *(_QWORD*)(*v2 + v14) = 0;
          v14 += 8;
        } while (v10 != 0);
      }
    }
    v2[3] = 0;
  }
  return result;
}

void omovie_Manager_SetupGfxResources_lambda0_Invoke(__int64 a1, _WORD* a2)
{
  a2[3] = 42;
  *a2 = 514;
}

_QWORD* Manager_18cff90(_QWORD* result)
{
  __int64 v1;
  __int64 v2;

  v1 = result[2];
  result[2] = 0;
  *result = GameData_2108fc8;
  if (v1 != 0) {
    GameRoutine_18d1570(v1);
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
  }
  return result;
}

__int64 Manager_18d0010(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v1 = a1[2];
  a1[2] = 0;
  *a1 = GameData_2108fc8;
  v2 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    GameRoutine_18d1570(v1);
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v3);
  }
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v4);
}

__int64 Manager_18d00b0(__int64 result)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(result + 16);
  *(_QWORD*)(result + 16) = 0;
  if (v1 != 0) {
    GameRoutine_18d1570(v1);
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
  }
  return result;
}

__int64 omovie_Manager_Main_lambda0_Invoke(__int64 a1, _QWORD* a2, __int64 a3,
                                           __int64 a4, __int64 a5, __int64* a6)
{
  __int64 v6;
  __int64 v7;
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 (**v20)(__int64);
  unsigned int v21;
  __int64 (**v22)(__int64);
  unsigned int v23;
  __int64 v24;
  unsigned int v25;
  unsigned int v26;
  __int64 v27;
  _QWORD v28[2];

  v6 = *a6;
  v7 = *(_QWORD*)(a1 + 8);
  result = GameRoutine_18cd4a0(*a6 + 3096, (__int64)a2);
  if ((_DWORD)result == 0) {
    if ((*(_BYTE*)(v6 + 4320) & 1) != 0) {
      if (*(_BYTE*)(v6 + 4865) == 1) {
        (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)*a2 + 72LL))(*a2, 0, 0, *(unsigned int*)(a5 + 16),
                                   *(unsigned int*)(a5 + 20));
        (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)*a2 + 88LL))(*a2, 0, 0, *(unsigned int*)(a5 + 16),
                                   *(unsigned int*)(a5 + 20));
        (*(void (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 96LL))(
            *a2, *(_QWORD*)a5, *(_QWORD*)(a5 + 8));
        gxc_NvnStateCache_Reset(a2[1]);
        gxc_NvnStateCache_SetCommandList(a2[1], *a2);
        v11 = a2[1];
        gxc_NvnStateCache_BindDepthStencilState(v11,
                                                (unsigned int)GameData_21fdeb8);
        gxc_NvnStateCache_BindBlendState(v11, (unsigned int)GameData_21fdee0);
        gxc_NvnStateCache_BindPolygonState(v11, (unsigned int)GameData_21fdf08);
        gxc_NvnStateCache_BindMultisampleState(v11,
                                               (unsigned int)GameData_21fdf14);
        gxc_NvnStateCache_ClearCommandList(a2[1]);
        v12 = *a2;
        v13 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v6 + 4176) + 40LL))(
            *(_QWORD*)(v6 + 4176));
        (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
            *(_QWORD*)v12 + 248LL))(v12, 2, 0, v13, v14,
                                    *(unsigned int*)(v7 + 120));
        (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
            *a2, 3, *(_QWORD*)(*(_QWORD*)(v7 + 128) + 144LL));
        (*(void (**)(_QWORD, __int64))(*(_QWORD*)*a2 + 264LL))(*a2, 1);
        return (*(__int64 (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 +
                                                         272LL))(*a2, 3, 0);
      }
    }
    else {
      result = *(_QWORD*)(v6 + 4176);
      if (result != 0) {
        v15 = (*(__int64 (**)(__int64))(*(_QWORD*)result + 32LL))(result);
        v16 = *a2;
        v17 = v15;
        v19 = v18;
        v20 = (__int64 (**)(__int64))GameData_212e778[0];
        v21 = (*(__int64 (**)(void))GameData_212e778[0])();
        v22 = (__int64 (**)(__int64))GameData_212e780;
        v23 = ((__int64 (*)(__int64))*GameData_212e780)(v17);
        (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)v16 + 72LL))(v16, 0, 0, v21, v23);
        v24 = *a2;
        v25 = (*v20)(v17);
        v26 = (*v22)(v17);
        (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)v24 + 88LL))(v24, 0, 0, v25, v26);
        (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a2 + 96LL))(*a2, v17,
                                                                       v19);
        v27 = *a2;
        v28[0] = 0;
        v28[1] = 0;
        return (*(__int64 (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v27 +
                                                          144LL))(v27, 0, v28);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
