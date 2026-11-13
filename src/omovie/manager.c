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
__int64 Manager_18cfba0(__int64 a1, _QWORD* a2);
__int64 Manager_18cfcb0(__int64 a1);
__int64 Manager_18cfce0_alt2(__int64 result) __asm__("Manager_18cfce0");
void omovie_Manager_SetupGfxResources_lambda0_Invoke(__int64 a1, _WORD* a2);
_QWORD* Manager_18cff90_alt1(_QWORD* result) __asm__("Manager_18cff90");
__int64 Manager_18d0010_alt1(_QWORD* a1) __asm__("Manager_18d0010");
__int64 Manager_18d00b0_alt1(__int64 result) __asm__("Manager_18d00b0");
__int64 omovie_Manager_Main_lambda0_Invoke_alt1(
    __int64 a1, _QWORD* a2, __int64 a3, __int64 a4, __int64 a5,
    __int64* a6) __asm__("omovie_Manager_Main_lambda0_Invoke");
__int64 GameRoutine_beefc0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_2109008[])();
extern __int64 (*GameData_2109ae8[])();
extern __int64 (*GameData_2109b78[])();
extern __int64 GameData_212c638;
__int64 Manager_18cf780(__int64 result);
__int64 gxc_NvnStateCache_BindBlendState_alt1(__int64 result, int) __asm__(
    "gxc_NvnStateCache_BindBlendState");
__int64 gxc_NvnStateCache_BindDepthStencilState_alt1(
    __int64 result, int) __asm__("gxc_NvnStateCache_BindDepthStencilState");
__int64 gxc_NvnStateCache_BindMultisampleState_alt1(
    __int64 result, int) __asm__("gxc_NvnStateCache_BindMultisampleState");
__int64 gxc_NvnStateCache_BindPolygonState_alt1(__int64 result, int) __asm__(
    "gxc_NvnStateCache_BindPolygonState");
__int64
gxc_NvnStateCache_Reset_alt1(__int64 result) __asm__("gxc_NvnStateCache_Reset");
__int64 omovie_18cd4a0(__int64, __int64);
__int64 omovie_Manager_Main_lambda0_Invoke(__int64 a1, __int64* a2, __int64 a3,
                                           __int64 a4, __int64 a5, __int64* a6);
_QWORD* GameRoutine_18d0660(__int64, unsigned __int8*, __int64, __int64**);
_QWORD* GameRoutine_ad5000(_QWORD*, __int64, unsigned __int64, int);
__attribute__((swiftcall)) void
gfx_shader_Archive_CreateShader(PSEUDO_X8, __int64*, __int64, unsigned __int64,
                                __int64, unsigned __int64);
__int64*
GameRoutine_18d04c0_alt1(_QWORD*,
                         unsigned __int8*) __asm__("GameRoutine_18d04c0");
__int64 GameHr_ad5280(_QWORD*);
__int64 GameRoutine_18d1060(__int64);
__int64 GameRoutine_5fc230(__int64 result);
__int64 GameRoutine_604060(__int64, __int64*, __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_615760(__int64, __int64);
__int64 omovie_MoviePlayer_PrepareMovie(__int64, const char*);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern __int64 (*GameData_2108f48[])();
void GameRoutine_18d1570_alt1(__int64) __asm__("GameRoutine_18d1570");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 omovie_Manager_SetupGfxResources(_QWORD* a1);
void Manager_18cf910(__int64 a1, __int64 a2);
extern __int64 (*Manager_18cff90_ptr[])();
void GameHr_18d1570(__int64);
void Manager_18cfce0(_QWORD* a1);
void Manager_18cff90(_QWORD* a1);
void Manager_18d0010(_QWORD* a1);
void Manager_18d00b0(__int64 a1);

__int64 omovie_Manager_SetupGfxResources(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 (**v4)();
  __int64 v5;
  __int64 v6;
  __int64 v7;
  struct {
    __int64 (**v9)();
    __int64 v10;
    char gap16_[16];
    __int64 (***v11)();
  } v9_;
  _QWORD v12[4];

  memset(v12, 0, sizeof(v12));
  v9_.v9 = GameData_2108f48;
  v9_.v11 = &v9_.v9;
  GameRoutine_5fc230((__int64)v12);
  if (v9_.v11 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v9_.v11)[6])(v9_.v11, v12);
  }
  v2 = game_g_frame_clock_ptr[0];
  GameRoutine_604060((__int64)a1, (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)v12);
  a1[15] = game_615760(*(_QWORD*)(*v2 + 552), (__int64)a1);
  if (v9_.v11 == &v9_.v9) {
    v3 = 4;
    goto LABEL_7;
  }
  if (v9_.v11 != nullptr) {
    v3 = 5;
  LABEL_7:
    ((__int64 (*)(__int64))(*v9_.v11)[v3])((__int64)v9_.v11);
  }
  gfx_shader_Archive_CreateShader((void*)(&v9_.v9), *(__int64**)(*v2 + 13408),
                                  (__int64)"ui", 2u, (__int64)"movie", 5u);
  v4 = v9_.v9;
  v5 = v9_.v10;
  v6 = a1[17];
  v9_.v9 = nullptr;
  v9_.v10 = 0;
  a1[16] = v4;
  a1[17] = v5;
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = v9_.v10;
  if (v9_.v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9_.v10 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  GameRoutine_ad5000((_QWORD*)a1[16], (__int64)"use_yuv", 7u, 0);
  return GameHr_ad5280((_QWORD*)a1[16]);
}

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

__int64 Manager_18cf780(__int64 result)
{
  int v1;
  __int64 v2;
  bool v3;
  int v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD v15[4];
  _QWORD* v16;
  _QWORD v17[4];
  _QWORD* v18;
  _QWORD v19[4];
  _QWORD* v20;

  v1 = *(_DWORD*)(result + 184);
  v2 = result;
  v3 = __OFSUB__(v1, 1);
  v4 = v1 - 1;
  if (v4 < 0 == v3) {
    *(_DWORD*)(result + 184) = v4;
  }
  v5 = *(_QWORD*)GameData_212c638;
  if (*(_QWORD*)GameData_212c638 != 0) {
    v6 = *(_QWORD*)(v5 + 32);
    if (v6 != *(_QWORD*)(v5 + 24) && *(_QWORD*)(v6 - 8) != 0) {
      v7 = *(_QWORD**)(result + 160);
      if (v7 != nullptr) {
        v8 = game_g_frame_clock_ptr[0];
        do {
          v10 = *v8;
          v11 = v7[5];
          v15[0] = GameData_2109008;
          v15[1] = v2;
          v16 = v15;
          v19[0] = GameData_2109ae8;
          v20 = v19;
          v12 = *(_QWORD*)(v10 + 16664);
          v17[0] = GameData_2109b78;
          v18 = v17;
          ((void (*)(__int64, _QWORD*, _QWORD*, _QWORD*, __int64, _QWORD,
                     __int64))GameRoutine_beefc0)(v12, v15, v19, v17, 4, 0,
                                                  v11);
          if (v18 == v17) {
            v13 = 32;
          }
          else {
            if (v18 == nullptr) {
              goto LABEL_16;
            }
            v13 = 40;
          }
          (*(void (**)(__int64))(*v18 + v13))((__int64)v18);
        LABEL_16:
          if (v20 == v19) {
            v14 = 32;
          }
          else {
            if (v20 == nullptr) {
              goto LABEL_21;
            }
            v14 = 40;
          }
          (*(void (**)(__int64))(*v20 + v14))((__int64)v20);
        LABEL_21:
          result = (__int64)v16;
          if (v16 == v15) {
            v9 = 32;
          }
          else {
            if (v16 == nullptr) {
              goto LABEL_10;
            }
            v9 = 40;
          }
          result = (*(__int64 (**)(__int64))(*v16 + v9))((__int64)v16);
        LABEL_10:
          v7 = (_QWORD*)*v7;
        } while (v7 != nullptr);
      }
    }
  }
  return result;
}

void Manager_18cf910(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  const char* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  struct {
    __int64 v12[2];
    const char* v13;
  } v12_;
  __int64* v14;

  if (GameRoutine_18d04c0_alt1((_QWORD*)(a1 + 144), (unsigned __int8*)a2) ==
      nullptr) {
    if ((*(_BYTE*)a2 & 1) != 0) {
      fw_text_String_CopyTerminated(v12_.v12, *(_QWORD*)(a2 + 16),
                                    *(_QWORD*)(a2 + 8));
    }
    else {
      v4 = *(_QWORD*)(a2 + 8);
      v12_.v12[0] = *(_QWORD*)a2;
      v12_.v12[1] = v4;
      v12_.v13 = *(const char**)(a2 + 16);
    }
    v5 = fw_memory_g_heap_manager_ptr;
    v6 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 4904, 16, 0);
    GameRoutine_18d1060(v6);
    if ((v12_.v12[0] & 1) != 0) {
      v7 = v12_.v13;
    }
    else {
      v7 = (char*)v12_.v12 + 1;
    }
    omovie_MoviePlayer_PrepareMovie(v6, v7);
    v14 = (__int64*)a2;
    v8 = GameRoutine_18d0660(a1 + 144, (unsigned __int8*)a2,
                             (__int64)std___1_piecewise_construct_ptr, &v14);
    v9 = v8[5];
    v8[5] = v6;
    if (v9 != 0) {
      GameRoutine_18d1570_alt1(v9);
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v10, v9);
    }
    if ((v12_.v12[0] & 1) != 0 && v12_.v13 != nullptr) {
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v11, (__int64)v12_.v13);
    }
  }
}

__int64 Manager_18cfa40(__int64 a1, _QWORD* a2)
{
  __int64 result;
  __int64 v5;

  if (GameRoutine_18d04c0_alt1((_QWORD*)(a1 + 144), (unsigned __int8*)a2) ==
      0) {
    GameRoutine_18cf910(a1, a2);
  }
  result = (__int64)GameRoutine_18d04c0_alt1((_QWORD*)(a1 + 144),
                                             (unsigned __int8*)a2);
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

__int64 Manager_18cfba0(__int64 a1, _QWORD* a2)
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

  result = (__int64)GameRoutine_18d04c0_alt1((_QWORD*)(a1 + 144),
                                             (unsigned __int8*)a2);
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
    result = (__int64)GameRoutine_18d04c0_alt1((_QWORD*)(a1 + 144),
                                               (unsigned __int8*)a2);
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

void Manager_18cfce0(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;

  if (a1[3] != 0) {
    v1 = (_QWORD*)a1[2];
    if (v1 != nullptr) {
      v3 = fw_memory_g_heap_manager_ptr;
      do {
        v5 = (__int64)v1;
        v1 = (_QWORD*)*v1;
        v6 = *(_QWORD*)(v5 + 40);
        *(_QWORD*)(v5 + 40) = 0;
        if (v6 != 0) {
          GameHr_18d1570(v6);
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v7 = 128;
          }
          else {
            v7 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v7, v6);
        }
        if ((*(_BYTE*)(v5 + 16) & 1) != 0) {
          v8 = *(_QWORD*)(v5 + 32);
          if (v8 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
              v9 = 128;
            }
            else {
              v9 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v9, v8);
          }
        }
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v4 = 128;
        }
        else {
          v4 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v4, v5);
      } while (v1 != nullptr);
    }
    v10 = a1[1];
    a1[2] = 0;
    if (v10 != 0) {
      v11 = v10 & 7;
      if (v10 >= 8) {
        v13 = v10 & 0xFFFFFFFFFFFFFFF8LL;
        v12 = 0;
        do {
          *(_QWORD*)(*a1 + 8 * v12) = 0;
          *(_QWORD*)(*a1 + 8 * v12 + 8) = 0;
          *(_QWORD*)(*a1 + 8 * v12 + 16) = 0;
          *(_QWORD*)(*a1 + 8 * v12 + 24) = 0;
          *(_QWORD*)(*a1 + 8 * v12 + 32) = 0;
          *(_QWORD*)(*a1 + 8 * v12 + 40) = 0;
          *(_QWORD*)(*a1 + 8 * v12 + 48) = 0;
          v14 = *a1 + 8 * v12;
          v12 += 8;
          *(_QWORD*)(v14 + 56) = 0;
        } while (v13 != v12);
      }
      else {
        v12 = 0;
      }
      if (v11 != 0) {
        v15 = 8 * v12;
        do {
          --v11;
          *(_QWORD*)(*a1 + v15) = 0;
          v15 += 8;
        } while (v11 != 0);
      }
    }
    a1[3] = 0;
  }
}

void omovie_Manager_SetupGfxResources_lambda0_Invoke(__int64 a1, _WORD* a2)
{
  a2[3] = 42;
  *a2 = 514;
}

void Manager_18cff90(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;

  v1 = a1[2];
  a1[2] = 0;
  *a1 = Manager_18cff90_ptr;
  if (v1 != 0) {
    GameHr_18d1570(v1);
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, v1);
  }
}

void Manager_18d0010(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = a1[2];
  a1[2] = 0;
  *a1 = Manager_18cff90_ptr;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    GameHr_18d1570(v1);
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v4, v1);
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v5, (__int64)a1);
}

void Manager_18d00b0(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 16) = 0;
  if (v1 != 0) {
    GameHr_18d1570(v1);
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, v1);
  }
}

__int64 omovie_Manager_Main_lambda0_Invoke(__int64 a1, __int64* a2, __int64 a3,
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

  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v6 = *a6;
  v7 = *(_QWORD*)(a1 + 8);
  result = omovie_18cd4a0(*a6 + 3096, (__int64)a2),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((_DWORD)result == 0) {
    if ((*(_BYTE*)(v6 + 4320) & 1) != 0) {
      if (*(_BYTE*)(v6 + 4865) == 1) {
        (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)*a2 + 72LL))(*a2, 0, 0, *(unsigned int*)(a5 + 16),
                                   *(unsigned int*)(a5 + 20)),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)*a2 + 88LL))(*a2, 0, 0, *(unsigned int*)(a5 + 16),
                                   *(unsigned int*)(a5 + 20)),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)*a2 + 96LL))(
            *a2, *(_QWORD*)a5, *(_QWORD*)(a5 + 8)),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        gxc_NvnStateCache_Reset_alt1(a2[1]),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        gxc_NvnStateCache_SetCommandList(a2[1], *a2),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v11 = a2[1];
        gxc_NvnStateCache_BindDepthStencilState_alt1(v11, GameData_21fdeb8),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        gxc_NvnStateCache_BindBlendState_alt1(v11, GameData_21fdee0),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        gxc_NvnStateCache_BindPolygonState_alt1(v11, GameData_21fdf08),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        gxc_NvnStateCache_BindMultisampleState_alt1(v11, GameData_21fdf14),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        gxc_NvnStateCache_ClearCommandList(a2[1]),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v12 = *a2;
        v13 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v6 + 4176) + 40LL))(
            *(_QWORD*)(v6 + 4176)),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
            *(_QWORD*)v12 + 248LL))(v12, 2, 0, v13, v14,
                                    *(unsigned int*)(v7 + 120)),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
            *a2, 3, *(_QWORD*)(*(_QWORD*)(v7 + 128) + 144LL)),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64))(*(_QWORD*)*a2 + 264LL))(*a2, 1),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        return (*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a2 +
                                                          272LL))(*a2, 3, 0);
      }
    }
    else {
      result = *(_QWORD*)(v6 + 4176);
      if (result != 0) {
        v15 = (*(__int64 (**)(__int64))(*(_QWORD*)result + 32LL))(result),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v16 = *a2;
        v17 = v15;
        v19 = v18;
        v20 = (__int64 (**)(__int64))GameData_212e778[0],
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v21 = (*(__int64 (**)(void))GameData_212e778[0])(),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v22 = (__int64 (**)(__int64))GameData_212e780,
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v23 = ((__int64 (*)(__int64))*GameData_212e780)(v17),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)v16 + 72LL))(v16, 0, 0, v21, v23),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v24 = *a2;
        v25 = (*v20)(v17);
        v26 = (*v22)(v17);
        (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)v24 + 88LL))(v24, 0, 0, v25, v26),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)*a2 + 96LL))(
            *a2, v17, v19),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
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
