#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ConstructString_1901f0(_QWORD);
__int64 FsSoundArchive_2760a0(_QWORD);
__int64 FsSoundArchive_276120(_QWORD, _QWORD);
__int64 FsSoundArchive_2763f0(_QWORD, _QWORD, _QWORD);
__int64 FsSoundArchive_2764c0(_QWORD, _QWORD, _QWORD);
__int64 FsSoundArchive_Destructor(_QWORD);
__int64 GameRoutine_104660(_QWORD);
__int64 GameRoutine_105310(_QWORD);
__int64 GameRoutine_110280(__int64 result);
__int64 GameRoutine_111070(_QWORD);
__int64 GameRoutine_117bb0(_QWORD);
__int64 GameRoutine_118fd0(_QWORD);
__int64 GameRoutine_119020(_QWORD);
__int64 GameRoutine_13e770(_QWORD);
__int64 GameRoutine_149b20(__int64, _QWORD*);
__int64 GameRoutine_157010(void);
__int64 GameRoutine_1574a0(_QWORD, _QWORD);
__int64 GameRoutine_15a740(__int64*, __int64, __int64);
__int64 GameRoutine_164fe0(_QWORD, _QWORD);
__int64 GameRoutine_190200(_QWORD, _QWORD);
__int64 GameRoutine_190240(_QWORD);
__int64 GameRoutine_2766e0(_QWORD);
__int64 GameRoutine_276720(_QWORD, _QWORD);
__int64 GameRoutine_2767b0(_QWORD);
__int64 GameRoutine_277ea0(_QWORD);
__int64 GameRoutine_278640(_QWORD);
__int64 GameRoutine_278690(_QWORD, _QWORD);
__int64 GameRoutine_278770(_QWORD, _QWORD);
__int64 GameRoutine_278890(_QWORD, _QWORD);
__int64 GameRoutine_278f90(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2798a0(_QWORD);
__int64 GameRoutine_27b0d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_27b680(_QWORD);
__int64 GameRoutine_27cb30(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_27cb90(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_27cc40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_27dfd0(_QWORD);
__int64 GameRoutine_284370(_QWORD);
__int64 GameRoutine_2843a0(_QWORD);
__int64 GameRoutine_286270(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2878e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a1b90(_QWORD);
__int64 GameRoutine_2b9060(void);
__int64 GameRoutine_2b9950(void);
__int64 GameRoutine_6511d0(unsigned __int64);
__int64 GameRoutine_a2af20(_QWORD, _QWORD, const char*, ...);
__int64 GameRoutine_a392e0(_QWORD, const char*, ...);
__int64 SoundArchivePlayer_Destructor(_QWORD);
__int64 SoundDataManager_27b820(_QWORD);
__int64 SoundHeap_27bfd0(_QWORD, _QWORD, _QWORD);
__int64 SoundVoiceNX_14e360(_QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_audio_AcquireMemoryPool(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_audio_IsMemoryPoolAttached(_QWORD);
__int64 nn_audio_RequestAttachMemoryPool(_QWORD);
__int64 nn_fs_CloseDirectory(_QWORD);
__int64 nn_fs_OpenDirectory(_QWORD, _QWORD, _QWORD);
__int64 nn_fs_ReadDirectory(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Initialize_1a0bd50(_QWORD, _QWORD, _QWORD,
                                                    long double);
__int64 nn_os_DestroyThread(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_WaitThread(void);
__int64 strcpy(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 strstr(_QWORD, _QWORD);
__n128 GameRoutine_13e440(__int64);
__n128 nn_os_UnlockMutex(_QWORD);
extern __int64 GameData_21347c8[2];
extern __int64 snd_g_memory;
extern __int64 snd_g_proxy;
extern __int64 snd_g_proxy_ptr[2];
extern __int64 snd_target_s_platform;
extern __int64* snd_g_memory_ptr[2];
void GameRoutine_651310(void*);
void __attribute__((noreturn)) GameRoutine_a36650(_QWORD, _QWORD);
__int64 BaseNX_159820(__int64 a1);
__int64 BaseNX_1599e0(__int64 a1);
__int64 BaseNX_159a40();
__int64 BaseNX_Unknown2(__int64 result);
__int64 BaseNX_159d40(__int64 result, unsigned int* a2);
__int64 BaseNX_Unknown4(__int64 result);
__n128 BaseNX_15ad00(__int64 a1, __int64 a2);
__int64 BaseNX_Unknown12(__int64 result, const char* a2, const char* a3,
                         char a4);
__int64 BaseNX_Unknown13(__int64 result, __int64 a2, const char* a3);
__int64 BaseNX_Unknown14(__int64 result, const char* a2);
__n128 BaseNX_15b4c0(__int64 a1, __int64 a2);
__int64 BaseNX_Unknown24(__int64 a1, unsigned int a2, int a3, __int64 a4);
__int64 BaseNX_Unknown25(__int64 a1, __int64 a2);
__int64 BaseNX_15d7e0(__int64 result);
__int64 BaseNX_Unknown27(__int64 a1, __int64 a2);
__int64 BaseNX_Unknown33(__int64 a1, const char* a2);
__int64 BaseNX_Unknown35(__int64 a1, __int64 a2, __int64 a3, int a4);
__int64 BaseNX_Unknown36(__int64 a1, const char* a2, __int64 a3, int a4);
__int64 BaseNX_Unknown37(__int64 a1, const char* a2, __int64 a3, int a4);
__int64 BaseNX_Unknown40(__int64 a1, __int64 a2, int a3);
__int64 BaseNX_Unknown63(__int64 a1, __int64 a2, int a3, int a4);
__int64 BaseNX_Unknown71(__int64 a1, __int64 a2);
__int64 BaseNX_Unknown72(__int64 a1, __int64 a2);
__int64 BaseNX_Unknown73(__int64 a1, __int64 a2, __int64 a3);
__int64 BaseNX_Unknown75(__int64 a1, __int64 a2);
__int64 BaseNX_Unknown163(__int64 a1, const char* a2);

__int64 BaseNX_159820(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 4056);
  *(_QWORD*)(a1 + 4016) = GameData_21347c8[0] + 16;
  v3 = snd_g_memory_ptr[0];
  if (v2 != 0) {
    v4 = *snd_g_memory_ptr[0];
    *(_QWORD*)(a1 + 4064) = v2;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 24LL))(v4);
  }
  v5 = *(_QWORD*)(a1 + 3992);
  if (v5 != 0) {
    v6 = *v3;
    *(_QWORD*)(a1 + 4000) = v5;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
  }
  v7 = *(_QWORD*)(a1 + 3984);
  *(_QWORD*)(a1 + 3984) = 0;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
  }
  v8 = *(_QWORD*)(a1 + 3976);
  *(_QWORD*)(a1 + 3976) = 0;
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
  }
  v9 = *(_QWORD*)(a1 + 3960);
  *(_QWORD*)(a1 + 3960) = 0;
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
  }
  v10 = *(_QWORD*)(a1 + 3944);
  *(_QWORD*)(a1 + 3944) = 0;
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
  }
  v11 = *(_QWORD*)(a1 + 3936);
  *(_QWORD*)(a1 + 3936) = 0;
  if (v11 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
  }
  v12 = *(_QWORD*)(a1 + 3928);
  *(_QWORD*)(a1 + 3928) = 0;
  if (v12 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
  }
  v13 = *(_QWORD*)(a1 + 3920);
  *(_QWORD*)(a1 + 3920) = 0;
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
  }
  GameRoutine_27b680(a1 + 3152);
  SoundArchivePlayer_Destructor(a1 + 2336);
  GameRoutine_2766e0(a1 + 1584);
  result = FsSoundArchive_Destructor(a1 + 32);
  if ((*(_BYTE*)a1 & 1) != 0) {
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)*v3 + 24LL))(
        *v3, *(_QWORD*)(a1 + 16));
  }
  return result;
}

__int64 BaseNX_1599e0(__int64 a1)
{
  __int64 v2;

  v2 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 261952,
                                               32);
  GameRoutine_1574a0(v2, a1);
  snd_target_s_platform = v2;
  return v2;
}

__int64 BaseNX_159a40()
{
  __int64 result;

  (**(void (***)(__int64))snd_target_s_platform)(snd_target_s_platform);
  result = (*(__int64 (**)(_QWORD, __int64))(**(_QWORD**)snd_g_memory_ptr[0] +
                                             24LL))(*snd_g_memory_ptr[0],
                                                    snd_target_s_platform);
  snd_target_s_platform = 0;
  return result;
}

__int64 BaseNX_Unknown2(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
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
  char v19;
  __int64 v20;
  long double v21;
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
  char v33;
  __int64 v34;
  long double v35;

  if ((*(_BYTE*)(result + 16) & 1) == 0) {
    v1 = result;
    result = GameRoutine_157010();
    if ((*(_BYTE*)(v1 + 17) & 1) == 0) {
      v2 =
          (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 16LL))(snd_g_proxy);
      v3 = snd_g_memory_ptr[0];
      v4 = (*(__int64 (**)(_QWORD, __int64, __int64))(
          **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], v2,
                                                   4096);
      v5 = *(_QWORD*)(v1 + 4256);
      *(_QWORD*)(v1 + 4256) = v4;
      if (v5 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
        v6 = *(_QWORD*)(v1 + 4256);
      }
      else {
        v6 = v4;
      }
      v7 =
          (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 16LL))(snd_g_proxy);
      SoundHeap_27bfd0(v1 + 4152, v6, v7);
      v8 = (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 24LL))(
               snd_g_proxy) +
           4095;
      v9 = (*(__int64 (**)(__int64, unsigned __int64, __int64))(
          *(_QWORD*)*v3 + 16LL))(*v3, v8 & 0xFFFFFFFFFFFFF000LL, 4096);
      v10 = *(_QWORD*)(v1 + 4280);
      *(_QWORD*)(v1 + 4280) = v9;
      if (v10 != 0) {
        v9 = (*(__int64 (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
      }
      v11 = SoundVoiceNX_14e360(v9);
      v12 = nn_os_LockMutex(v11 + 1720);
      v13 = SoundVoiceNX_14e360(v12);
      nn_audio_AcquireMemoryPool(v13 + 24, v1 + 4232, *(_QWORD*)(v1 + 4280),
                                 v8 & 0xFFFFFFFFFFFFF000LL);
      v14 = nn_audio_RequestAttachMemoryPool(v1 + 4232);
      v15 = SoundVoiceNX_14e360(v14);
      nn_os_UnlockMutex(v15 + 1720);
      while (1) {
        v17 = SoundVoiceNX_14e360(v16);
        nn_os_LockMutex(v17 + 1720);
        v18 = nn_audio_IsMemoryPoolAttached(v1 + 4232);
        v19 = v18;
        v20 = SoundVoiceNX_14e360(v18);
        *(__n128*)&v21 = nn_os_UnlockMutex(v20 + 1720);
        if ((v19 & 1) != 0) {
          break;
        }
        v16 = (*(__int64 (**)(__int64, __int64, long double))(
            *(_QWORD*)v1 + 56LL))(v1, 5, v21);
      }
      nn_mem_StandardAllocator_Initialize_1a0bd50(
          v1 + 4296, *(_QWORD*)(v1 + 4280), v8 & 0xFFFFFFFFFFFFF000LL, v21);
      v22 = (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 32LL))(
                snd_g_proxy) +
            4095;
      v23 = (*(__int64 (**)(__int64, unsigned __int64, __int64))(
          *(_QWORD*)*v3 + 16LL))(*v3, v22 & 0xFFFFFFFFFFFFF000LL, 4096);
      v24 = *(_QWORD*)(v1 + 4288);
      *(_QWORD*)(v1 + 4288) = v23;
      if (v24 != 0) {
        v23 = (*(__int64 (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
      }
      v25 = SoundVoiceNX_14e360(v23);
      v26 = nn_os_LockMutex(v25 + 1720);
      v27 = SoundVoiceNX_14e360(v26);
      nn_audio_AcquireMemoryPool(v27 + 24, v1 + 4240, *(_QWORD*)(v1 + 4288),
                                 v22 & 0xFFFFFFFFFFFFF000LL);
      v28 = nn_audio_RequestAttachMemoryPool(v1 + 4240);
      v29 = SoundVoiceNX_14e360(v28);
      nn_os_UnlockMutex(v29 + 1720);
      while (1) {
        v31 = SoundVoiceNX_14e360(v30);
        nn_os_LockMutex(v31 + 1720);
        v32 = nn_audio_IsMemoryPoolAttached(v1 + 4240);
        v33 = v32;
        v34 = SoundVoiceNX_14e360(v32);
        *(__n128*)&v35 = nn_os_UnlockMutex(v34 + 1720);
        if ((v33 & 1) != 0) {
          break;
        }
        v30 = (*(__int64 (**)(__int64, __int64, long double))(
            *(_QWORD*)v1 + 56LL))(v1, 5, v35);
      }
      nn_mem_StandardAllocator_Initialize_1a0bd50(
          v1 + 4368, *(_QWORD*)(v1 + 4288), v22 & 0xFFFFFFFFFFFFF000LL, v35);
      result = GameRoutine_27dfd0(BaseNX_159d40);
      *(_BYTE*)(v1 + 16) = 1;
    }
  }
  return result;
}

__int64 BaseNX_159d40(__int64 result, unsigned int* a2)
{
  __int64 v2;
  __int64 v3;
  const char* v4;

  if ((unsigned int)(result - 1001) <= 1) {
    v2 = *a2;
    v3 = 32;
    if (*(_BYTE*)(snd_target_s_platform + 4136) != 0) {
      v3 = 1584;
    }
    v4 = (const char*)GameRoutine_278690(snd_target_s_platform + v3 + 56, v2);
    return (*(__int64 (**)(_QWORD, const char*, ...))(
        **(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(
        *(_QWORD*)snd_g_proxy_ptr[0],
        "#SoundLibrary error : Failed to PlayerHeap ... WaveFileLoadFailed : "
        "%s\n",
        v4);
  }
  return result;
}

__int64 BaseNX_Unknown4(__int64 result)
{
  _QWORD* v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
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

  if (*(_BYTE*)(result + 16) == 1) {
    v1 = (_QWORD*)result;
    v2 = result + 4096;
    v3 = snd_g_memory_ptr[0];
    if (*(_QWORD*)(result + 4448) != 0) {
      *(_BYTE*)(result + 4440) = 1;
      nn_os_WaitThread();
      nn_os_DestroyThread(v1[556]);
      v4 = *v3;
      v5 = v1[556];
      v1[556] = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v4 + 24LL))(v4, v5);
      v6 = v1[557];
      v1[557] = 0;
      if (v6 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
      }
      while (1) {
        v8 = GameRoutine_117bb0(v1[1]);
        if ((GameRoutine_111070(v8) & 1) != 0) {
          break;
        }
        v7 = GameRoutine_117bb0(v1[1]);
        GameRoutine_110280(v7);
      }
      while (1) {
        v10 = GameRoutine_118fd0(v1[1]);
        if ((GameRoutine_105310(v10) & 1) != 0) {
          break;
        }
        v9 = GameRoutine_118fd0(v1[1]);
        GameRoutine_104660(v9);
      }
      while (1) {
        v12 = GameRoutine_119020(v1[1]);
        if ((GameRoutine_13e770(v12) & 1) != 0) {
          break;
        }
        v11 = GameRoutine_119020(v1[1]);
        GameRoutine_13e440(v11);
      }
    }
    result = v1[559];
    if (result != 0) {
      *(_BYTE*)(v2 + 368) = 1;
      nn_os_WaitThread();
      nn_os_DestroyThread(v1[559]);
      v13 = *v3;
      v14 = v1[559];
      v1[559] = 0;
      result =
          (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v13 + 24LL))(v13, v14);
      v15 = v1[560];
      v1[560] = 0;
      if (v15 != 0) {
        return (*(__int64 (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
      }
    }
  }
  return result;
}

__n128 BaseNX_15ad00(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  char* v13;
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

  v4 = GameRoutine_2a1b90(a1);
  v5 = nn_os_LockMutex(v4 + 840);
  v6 = *(int*)(a2 + 12);
  v7 = *(_QWORD*)(a2 + 16);
  v8 = a1 + 4088 * v6;
  if (v7 != 0) {
    v9 = *(char**)(v8 + 4056);
    v10 = *(char**)(v8 + 4048);
    v11 = v9 - v10;
    if (v9 != v10) {
      v12 = v11 >> 3;
      v13 = v10;
      v14 = v11 >> 3;
      while (1) {
        v16 = *(_QWORD*)v13;
        v13 += 8;
        v15 = v16;
        if (*(_BYTE*)(v16 + 1440) == 1) {
          v5 = strlen(v7);
          v18 = *(_BYTE*)v15 >> 1;
          if ((*(_BYTE*)v15 & 1) != 0) {
            v18 = *(_QWORD*)(v15 + 8);
          }
          if (v5 == v18) {
            v19 = v5;
            if (v5 == -1) {
            LABEL_32:
              GameRoutine_a36650(v5, v17);
            }
            v20 = (*(_BYTE*)v15 & 1) != 0 ? *(_QWORD*)(v15 + 16) : v15 + 1;
            v5 = memcmp(v20, v7, v19);
            if ((_DWORD)v5 == 0) {
              break;
            }
          }
        }
        if (--v14 == 0) {
          goto LABEL_31;
        }
      }
      while (1) {
        v22 = *(_QWORD*)v10;
        v10 += 8;
        v21 = v22;
        if (*(_BYTE*)(v22 + 1440) == 1) {
          v5 = strlen(v7);
          v23 = *(_BYTE*)v21 >> 1;
          if ((*(_BYTE*)v21 & 1) != 0) {
            v23 = *(_QWORD*)(v21 + 8);
          }
          if (v5 == v23) {
            v24 = v5;
            if (v5 == -1) {
              goto LABEL_32;
            }
            v25 = (*(_BYTE*)v21 & 1) != 0 ? *(_QWORD*)(v21 + 16) : v21 + 1;
            v5 = memcmp(v25, v7, v24);
            if ((_DWORD)v5 == 0) {
              break;
            }
          }
        }
        if (--v12 == 0) {
          goto LABEL_27;
        }
      }
      v26 = v21 + 32;
      goto LABEL_30;
    }
  }
  else if ((*(_BYTE*)(v8 + 4137) & 1) != 0) {
  LABEL_27:
    v27 = 32;
    if (*(_BYTE*)(a1 + 4088LL * (int)v6 + 4136) != 0) {
      v27 = 1584;
    }
    v26 = a1 + 4088LL * (int)v6 + 56 + v27;
  LABEL_30:
    *(_QWORD*)(v26 + 16) = a2;
  }

LABEL_31:
  v28 = GameRoutine_2a1b90(v5);
  return nn_os_UnlockMutex(v28 + 840);
}

__int64 BaseNX_Unknown12(__int64 result, const char* a2, const char* a3,
                         char a4)
{
  __int64 v6;
  const char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  const char* v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _BYTE v22[1024];

  if ((*(_BYTE*)(result + 17) & 1) == 0) {
    v6 = result;
    if (a3 != nullptr) {
      v7 = a3;
    }
    else {
      v7 = "noname";
    }
    if (*(_BYTE*)(result + 4137) == 1) {
      v8 = strlen(v7);
      if ((*(_BYTE*)(v6 + 56) & 1) != 0) {
        v10 = *(_QWORD*)(v6 + 64);
      }
      else {
        v10 = *(_BYTE*)(v6 + 56) >> 1;
      }
      if ((v10 & v8) == 0xFFFFFFFFFFFFFFFFLL) {
        GameRoutine_a36650(v8, v9);
      }
      v11 = 0;
    }
    else {
      v11 = result + 56;
      ++*(_DWORD*)(result + 4144);
      *(_BYTE*)(result + 4137) = 1;
      GameRoutine_190200(result + 56, v7);
    }
    *(_BYTE*)(v11 + 4080) = 0;
    v12 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy +
                                                 128LL))(snd_g_proxy);
    GameRoutine_a2af20(v22, 1024, "%s%s", v12, a2);
    *(_BYTE*)(v11 + 905) = (a4 & 1) == 0;
    FsSoundArchive_276120(v11 + 32, v22);
    v13 = (unsigned int)GameRoutine_2843a0(v11 + 704);
    v14 = snd_g_memory_ptr[0];
    v15 = (*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], v13, 64);
    v16 = *(_QWORD*)(v11 + 3920);
    *(_QWORD*)(v11 + 3920) = v15;
    if (v16 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v14 + 24LL))(*v14);
      v17 = *(_QWORD*)(v11 + 3920);
    }
    else {
      v17 = v15;
    }
    FsSoundArchive_2763f0(v11 + 32, v17, v13);
    v18 = (unsigned int)GameRoutine_284370(v11 + 704);
    v19 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v14 + 16LL))(
        *v14, v18, 64);
    v20 = *(_QWORD*)(v11 + 3928);
    *(_QWORD*)(v11 + 3928) = v19;
    if (v20 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v14 + 24LL))(*v14);
      v21 = *(_QWORD*)(v11 + 3928);
    }
    else {
      v21 = v19;
    }
    FsSoundArchive_2764c0(v11 + 32, v21, v18);
    return GameRoutine_15a740((__int64*)v6, v11, v11 + 32);
  }
  return result;
}

__int64 BaseNX_Unknown13(__int64 result, __int64 a2, const char* a3)
{
  __int64 v4;
  const char* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if ((*(_BYTE*)(result + 17) & 1) == 0) {
    v4 = result;
    if (a3 != nullptr) {
      v5 = a3;
    }
    else {
      v5 = "noname";
    }
    if (*(_BYTE*)(result + 4137) == 1) {
      v6 = strlen(v5);
      if ((*(_BYTE*)(v4 + 56) & 1) != 0) {
        v8 = *(_QWORD*)(v4 + 64);
      }
      else {
        v8 = *(_BYTE*)(v4 + 56) >> 1;
      }
      if ((v8 & v6) == 0xFFFFFFFFFFFFFFFFLL) {
        GameRoutine_a36650(v6, v7);
      }
      v9 = 0;
    }
    else {
      v9 = result + 56;
      ++*(_DWORD*)(result + 4144);
      *(_BYTE*)(result + 4137) = 1;
      GameRoutine_190200(result + 56, v5);
    }
    *(_BYTE*)(v9 + 4080) = 1;
    GameRoutine_276720(v9 + 1584, a2);
    v10 = *(_QWORD*)(v9 + 3920);
    *(_QWORD*)(v9 + 3920) = 0;
    if (v10 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)snd_g_memory + 24LL))(snd_g_memory);
    }
    v11 = *(_QWORD*)(v9 + 3928);
    *(_QWORD*)(v9 + 3928) = 0;
    if (v11 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)snd_g_memory + 24LL))(snd_g_memory);
    }
    return GameRoutine_15a740((__int64*)v4, v9, v9 + 1584);
  }
  return result;
}

__int64 BaseNX_Unknown14(__int64 result, const char* a2)
{
  __int64 v2;
  const char* v3;
  __int64 v4;
  _QWORD* v5;
  __int64* v6;
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
  int v21;

  if ((*(_BYTE*)(result + 17) & 1) != 0) {
    return result;
  }
  v2 = result;
  if (a2 != nullptr) {
    v3 = a2;
  }
  else {
    v3 = "noname";
  }
  result = strlen(v3);
  if (result == -1) {
    goto LABEL_50;
  }
  BaseNX_15b4c0(v2, v2 + 4072);
  v5 = (_QWORD*)snd_g_proxy_ptr[0];
  if (*(_DWORD*)(v2 + 4144) == 1) {
    if ((*(int (**)(_QWORD))(**(_QWORD**)snd_g_proxy_ptr[0] + 304LL))(
            *(_QWORD*)snd_g_proxy_ptr[0]) >= 1) {
      GameRoutine_2b9950();
    }
    if ((*(int (**)(_QWORD))(*(_QWORD*)*v5 + 312LL))(*v5) >= 1) {
      GameRoutine_2b9060();
    }
  }
  GameRoutine_2798a0(v2 + 2392);
  GameRoutine_277ea0(v2 + 3784);
  GameRoutine_277ea0(v2 + 3880);
  SoundDataManager_27b820(v2 + 3208);
  if (*(_BYTE*)(v2 + 4136) == 1) {
    result = GameRoutine_2767b0(v2 + 1640);
    v6 = snd_g_memory_ptr[0];
    if (*(_DWORD*)(v2 + 4144) != 1) {
      goto LABEL_21;
    }
  }
  else {
    result = FsSoundArchive_2760a0(v2 + 88);
    v6 = snd_g_memory_ptr[0];
    if (*(_DWORD*)(v2 + 4144) != 1) {
      goto LABEL_21;
    }
  }
  if ((*(int (**)(_QWORD))(*(_QWORD*)*v5 + 304LL))(*v5) >= 1 &&
      *(_QWORD*)(v2 + 4264) != 0) {
    v7 = *v6;
    *(_QWORD*)(v2 + 4264) = 0;
    (*(void (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7);
  }
  result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v5 + 312LL))(*v5);
  if ((int)result >= 1 && *(_QWORD*)(v2 + 4272) != 0) {
    v8 = *v6;
    *(_QWORD*)(v2 + 4272) = 0;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 24LL))(v8);
  }

LABEL_21:
  if (*(_QWORD*)(v2 + 4032) != 0) {
    v9 = *v6;
    *(_QWORD*)(v2 + 4032) = 0;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 24LL))(v9);
  }
  if (*(_QWORD*)(v2 + 4040) != 0) {
    v10 = *v6;
    *(_QWORD*)(v2 + 4040) = 0;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 24LL))(v10);
  }
  if (*(_QWORD*)(v2 + 4000) != 0) {
    v11 = *v6;
    *(_QWORD*)(v2 + 4000) = 0;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 24LL))(v11);
  }
  if (*(_QWORD*)(v2 + 4024) != 0) {
    v12 = *(_QWORD*)v2;
    *(_QWORD*)(v2 + 4024) = 0;
    result = (*(__int64 (**)(__int64))(v12 + 360))(v2);
  }
  if (*(_QWORD*)(v2 + 4016) != 0) {
    v13 = *v6;
    *(_QWORD*)(v2 + 4016) = 0;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 24LL))(v13);
  }
  if (*(_QWORD*)(v2 + 4008) != 0) {
    v14 = *(_QWORD*)v2;
    *(_QWORD*)(v2 + 4008) = 0;
    result = (*(__int64 (**)(__int64))(v14 + 360))(v2);
  }
  if (*(_QWORD*)(v2 + 3992) != 0) {
    v15 = *v6;
    *(_QWORD*)(v2 + 3992) = 0;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 24LL))(v15);
  }
  if (*(_QWORD*)(v2 + 3984) != 0) {
    v16 = *v6;
    *(_QWORD*)(v2 + 3984) = 0;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 24LL))(v16);
  }
  if (*(_QWORD*)(v2 + 3976) != 0) {
    v17 = *v6;
    *(_QWORD*)(v2 + 3976) = 0;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 24LL))(v17);
  }
  if (*(_BYTE*)(v2 + 4137) == 1) {
    result = strlen(v3);
    v18 = *(_BYTE*)(v2 + 56) >> 1;
    if ((*(_BYTE*)(v2 + 56) & 1) != 0) {
      v18 = *(_QWORD*)(v2 + 64);
    }
    if (result == v18) {
      v19 = result;
      if (result != -1) {
        if ((*(_BYTE*)(v2 + 56) & 1) != 0) {
          v20 = *(_QWORD*)(v2 + 72);
        }
        else {
          v20 = v2 + 57;
        }
        result = memcmp(v20, v3, v19);
        if ((_DWORD)result == 0) {
          v21 = *(_DWORD*)(v2 + 4144);
          *(_BYTE*)(v2 + 4137) = 0;
          *(_DWORD*)(v2 + 4144) = v21 - 1;
        }
        return result;
      }
    LABEL_50:
      GameRoutine_a36650(result, v4);
    }
  }
  return result;
}

__n128 BaseNX_15b4c0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  char* v13;
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

  v4 = GameRoutine_2a1b90(a1);
  v5 = nn_os_LockMutex(v4 + 840);
  v6 = *(int*)(a2 + 12);
  v7 = *(_QWORD*)(a2 + 16);
  v8 = a1 + 4088 * v6;
  if (v7 != 0) {
    v9 = *(char**)(v8 + 4056);
    v10 = *(char**)(v8 + 4048);
    v11 = v9 - v10;
    if (v9 != v10) {
      v12 = v11 >> 3;
      v13 = v10;
      v14 = v11 >> 3;
      while (1) {
        v16 = *(_QWORD*)v13;
        v13 += 8;
        v15 = v16;
        if (*(_BYTE*)(v16 + 1440) == 1) {
          v5 = strlen(v7);
          v18 = *(_BYTE*)v15 >> 1;
          if ((*(_BYTE*)v15 & 1) != 0) {
            v18 = *(_QWORD*)(v15 + 8);
          }
          if (v5 == v18) {
            v19 = v5;
            if (v5 == -1) {
            LABEL_32:
              GameRoutine_a36650(v5, v17);
            }
            v20 = (*(_BYTE*)v15 & 1) != 0 ? *(_QWORD*)(v15 + 16) : v15 + 1;
            v5 = memcmp(v20, v7, v19);
            if ((_DWORD)v5 == 0) {
              break;
            }
          }
        }
        if (--v14 == 0) {
          goto LABEL_31;
        }
      }
      while (1) {
        v22 = *(_QWORD*)v10;
        v10 += 8;
        v21 = v22;
        if (*(_BYTE*)(v22 + 1440) == 1) {
          v5 = strlen(v7);
          v23 = *(_BYTE*)v21 >> 1;
          if ((*(_BYTE*)v21 & 1) != 0) {
            v23 = *(_QWORD*)(v21 + 8);
          }
          if (v5 == v23) {
            v24 = v5;
            if (v5 == -1) {
              goto LABEL_32;
            }
            v25 = (*(_BYTE*)v21 & 1) != 0 ? *(_QWORD*)(v21 + 16) : v21 + 1;
            v5 = memcmp(v25, v7, v24);
            if ((_DWORD)v5 == 0) {
              break;
            }
          }
        }
        if (--v12 == 0) {
          goto LABEL_27;
        }
      }
      v26 = v21 + 32;
      goto LABEL_30;
    }
  }
  else if ((*(_BYTE*)(v8 + 4137) & 1) != 0) {
  LABEL_27:
    v27 = 32;
    if (*(_BYTE*)(a1 + 4088LL * (int)v6 + 4136) != 0) {
      v27 = 1584;
    }
    v26 = a1 + 4088LL * (int)v6 + 56 + v27;
  LABEL_30:
    *(_QWORD*)(v26 + 16) = 0;
  }

LABEL_31:
  v28 = GameRoutine_2a1b90(v5);
  return nn_os_UnlockMutex(v28 + 840);
}

__int64 BaseNX_Unknown24(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
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
  unsigned int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64* v36;
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
  __int64 v49;
  __int64 v50;

  v8 = GameRoutine_2a1b90(a1);
  nn_os_LockMutex(v8 + 840);
  if (a4 == 0) {
    v32 = 32;
    if (*(_BYTE*)(a1 + 4088LL * a3 + 4136) != 0) {
      v32 = 1584;
    }
    GameRoutine_278890(a1 + 4088LL * a3 + 56 + v32, a2);
    goto LABEL_34;
  }
  v9 = a1 + 4088LL * a3;
  v10 = *(__int64**)(v9 + 4048);
  v11 = *(_QWORD*)(v9 + 4056) - (_QWORD)v10;
  if (v11 == 0) {
  LABEL_16:
    v23 = 32;
    if (*(_BYTE*)(a1 + 4088LL * a3 + 4136) != 0) {
      v23 = 1584;
    }
    GameRoutine_278890(a1 + 4088LL * a3 + 56 + v23, a2);
    v24 = v9 + 4048;
    v20 = *(__int64**)(v9 + 4048);
    v22 = *(_QWORD*)(v24 + 8) - (_QWORD)v20;
    if (v22 == 0) {
      goto LABEL_34;
    }
  LABEL_19:
    v25 = v22 >> 3;
    while (1) {
      v27 = *v20++;
      v26 = v27;
      if (*(_BYTE*)(v27 + 1440) == 1) {
        v15 = strlen(a4);
        v28 = *(_BYTE*)v26 >> 1;
        if ((*(_BYTE*)v26 & 1) != 0) {
          v28 = *(_QWORD*)(v26 + 8);
        }
        if (v15 == v28) {
          v29 = v15;
          if (v15 == -1) {
            goto LABEL_54;
          }
          v30 = (*(_BYTE*)v26 & 1) != 0 ? *(_QWORD*)(v26 + 16) : v26 + 1;
          if ((unsigned int)memcmp(v30, a4, v29) == 0) {
            break;
          }
        }
      }
      if (--v25 == 0) {
        goto LABEL_34;
      }
    }
    v31 = GameRoutine_278770(v26 + 32, a2);
    v49 = -1;
    v50 = 0;
    goto LABEL_37;
  }
  v12 = v11 >> 3;
  while (1) {
    v14 = *v10++;
    v13 = v14;
    if (*(_BYTE*)(v14 + 1440) == 1) {
      v15 = strlen(a4);
      v17 = *(_BYTE*)v13 >> 1;
      if ((*(_BYTE*)v13 & 1) != 0) {
        v17 = *(_QWORD*)(v13 + 8);
      }
      if (v15 == v17) {
        v18 = v15;
        if (v15 == -1) {
        LABEL_54:
          GameRoutine_a36650(v15, v16);
        }
        v19 = (*(_BYTE*)v13 & 1) != 0 ? *(_QWORD*)(v13 + 16) : v13 + 1;
        if ((unsigned int)memcmp(v19, a4, v18) == 0) {
          break;
        }
      }
    }
    if (--v12 == 0) {
      goto LABEL_16;
    }
  }
  GameRoutine_278890(v13 + 32, a2);
  v21 = v9 + 4048;
  v20 = *(__int64**)(v9 + 4048);
  v22 = *(_QWORD*)(v21 + 8) - (_QWORD)v20;
  if (v22 != 0) {
    goto LABEL_19;
  }

LABEL_34:
  v33 = 32;
  if (*(_BYTE*)(a1 + 4088LL * a3 + 4136) != 0) {
    v33 = 1584;
  }
  v31 = GameRoutine_278770(a1 + 4088LL * a3 + 56 + v33, a2);
  v49 = -1;
  v50 = 0;
  if (a4 == 0) {
    goto LABEL_50;
  }

LABEL_37:
  v34 = a1 + 4088LL * a3;
  v35 = *(__int64**)(v34 + 4056);
  v36 = *(__int64**)(v34 + 4048);
  if (v35 == v36) {
  LABEL_50:
    v44 = 32;
    if (*(_BYTE*)(a1 + 4088LL * a3 + 4136) != 0) {
      v44 = 1584;
    }
    v43 = a1 + 4088LL * a3 + 56 + v44;
    goto LABEL_53;
  }
  v37 = v35 - v36;
  while (1) {
    v39 = *v36++;
    v38 = v39;
    if (*(_BYTE*)(v39 + 1440) == 1) {
      v15 = strlen(a4);
      v40 = *(_BYTE*)v38 >> 1;
      if ((*(_BYTE*)v38 & 1) != 0) {
        v40 = *(_QWORD*)(v38 + 8);
      }
      if (v15 == v40) {
        v41 = v15;
        if (v15 == -1) {
          goto LABEL_54;
        }
        v42 = (*(_BYTE*)v38 & 1) != 0 ? *(_QWORD*)(v38 + 16) : v38 + 1;
        if ((unsigned int)memcmp(v42, a4, v41) == 0) {
          break;
        }
      }
    }
    if (--v37 == 0) {
      goto LABEL_50;
    }
  }
  v43 = v38 + 32;

LABEL_53:
  v45 = GameRoutine_278f90(v43, v31, &v49);
  v46 = v50;
  v47 = GameRoutine_2a1b90(v45);
  nn_os_UnlockMutex(v47 + 840);
  return v46;
}

__int64 BaseNX_Unknown25(__int64 a1, __int64 a2)
{
  unsigned int v2;
  unsigned int v3;
  __int64 v4;
  __int64 v6;

  v2 = *(_DWORD*)(a2 + 5768);
  v3 = *(_DWORD*)(a2 + 5772);
  v4 = *(_QWORD*)(a2 + 5776);
  v6 = GameRoutine_190240(a2 + 5712);
  return (*(__int64 (**)(__int64, _QWORD, _QWORD, __int64, __int64))(
      *(_QWORD*)a1 + 208LL))(a1, v2, v3, v4, v6);
}

__int64 BaseNX_15d7e0(__int64 result)
{
  __int64 v1;
  __int64* v2;

  v1 = result;
  v2 = snd_g_memory_ptr[0];
  if ((*(_BYTE*)(result + 152) & 1) != 0) {
    result = (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)snd_g_memory_ptr[0] +
                                              24LL))(*snd_g_memory_ptr[0],
                                                     *(_QWORD*)(result + 168));
    if ((*(_BYTE*)(v1 + 128) & 1) == 0) {
    LABEL_3:
      if ((*(_BYTE*)(v1 + 104) & 1) == 0) {
        goto LABEL_4;
      }
      goto LABEL_11;
    }
  }
  else if ((*(_BYTE*)(result + 128) & 1) == 0) {
    goto LABEL_3;
  }
  result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)*v2 + 24LL))(
      *v2, *(_QWORD*)(v1 + 144));
  if ((*(_BYTE*)(v1 + 104) & 1) == 0) {
  LABEL_4:
    if ((*(_BYTE*)(v1 + 80) & 1) == 0) {
      goto LABEL_5;
    }
    goto LABEL_12;
  }

LABEL_11:
  result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)*v2 + 24LL))(
      *v2, *(_QWORD*)(v1 + 120));
  if ((*(_BYTE*)(v1 + 80) & 1) == 0) {
  LABEL_5:
    if ((*(_BYTE*)(v1 + 56) & 1) == 0) {
      goto LABEL_6;
    }
    goto LABEL_13;
  }

LABEL_12:
  result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)*v2 + 24LL))(
      *v2, *(_QWORD*)(v1 + 96));
  if ((*(_BYTE*)(v1 + 56) & 1) == 0) {
  LABEL_6:
    if ((*(_BYTE*)(v1 + 32) & 1) == 0) {
      goto LABEL_7;
    }
    goto LABEL_14;
  }

LABEL_13:
  result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)*v2 + 24LL))(
      *v2, *(_QWORD*)(v1 + 72));
  if ((*(_BYTE*)(v1 + 32) & 1) == 0) {
  LABEL_7:
    if ((*(_BYTE*)(v1 + 8) & 1) == 0) {
      return result;
    }
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)*v2 + 24LL))(
        *v2, *(_QWORD*)(v1 + 24));
  }

LABEL_14:
  result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)*v2 + 24LL))(
      *v2, *(_QWORD*)(v1 + 48));
  if ((*(_BYTE*)(v1 + 8) & 1) != 0) {
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)*v2 + 24LL))(
        *v2, *(_QWORD*)(v1 + 24));
  }
  return result;
}

__int64 BaseNX_Unknown27(__int64 a1, __int64 a2)
{
  unsigned int v2;
  unsigned int v3;
  __int64 v4;
  __int64 v6;

  v2 = *(_DWORD*)(a2 + 5768);
  v3 = *(_DWORD*)(a2 + 5772);
  v4 = *(_QWORD*)(a2 + 5776);
  v6 = GameRoutine_190240(a2 + 5712);
  return (*(__int64 (**)(__int64, _QWORD, _QWORD, __int64, __int64))(
      *(_QWORD*)a1 + 224LL))(a1, v2, v3, v4, v6);
}

__int64 BaseNX_Unknown33(__int64 a1, const char* a2)
{
  const char* v3;
  __int64 v4;
  __int64 v5;
  char v6;
  _BYTE v8[16];
  __int64 v9;

  ConstructString_1901f0(v8);
  v3 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 128LL))(
      snd_g_proxy);
  GameRoutine_a392e0(v8, "%s%s", v3, a2);
  v4 = snd_g_proxy;
  v5 = GameRoutine_190240(v8);
  v6 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v4 + 536LL))(v4, v5);
  if ((v8[0] & 1) != 0) {
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0], v9);
  }
  return v6 & 1;
}

__int64 BaseNX_Unknown35(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  unsigned int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  __int64 v22;

  result = 0;
  if (a4 != 0 && (*(_BYTE*)(a1 + 4137) & 1) != 0) {
    v9 = 32;
    if (*(_BYTE*)(a1 + 4136) != 0) {
      v9 = 1584;
    }
    v10 = a1 + v9;
    v11 = GameRoutine_278640(a1 + v9 + 56);
    if (v11 < 1) {
      v13 = 0;
    LABEL_12:
      v16 = *(_QWORD*)(a1 + 4048);
      if (*(_QWORD*)(a1 + 4056) == v16) {
        return v13;
      }
      else {
        v17 = 0;
        while (1) {
          v18 = *(_QWORD*)(v16 + 8 * v17);
          if (*(_BYTE*)(v18 + 1440) == 1) {
            v19 = GameRoutine_278640(v18 + 32);
            if (v19 >= 1) {
              break;
            }
          }
        LABEL_14:
          v16 = *(_QWORD*)(a1 + 4048);
          ++v17;
          result = v13;
          if (v17 >= (*(_QWORD*)(a1 + 4056) - v16) >> 3) {
            return result;
          }
        }
        v20 = v19;
        v21 = 0;
        while (1) {
          v22 = GameRoutine_278690(v18 + 32, v21 | 0x1000000u);
          if (strstr(v22, a2) != 0) {
            result = v13 + 1;
            *(_QWORD*)(a3 + 8LL * (int)v13) = v22;
            v13 = result;
            if ((int)result >= a4) {
              break;
            }
          }
          if (v20 == ++v21) {
            goto LABEL_14;
          }
        }
      }
    }
    else {
      v12 = v11;
      v13 = 0;
      v14 = 0;
      while (1) {
        v15 = GameRoutine_278690(v10 + 56, v14 | 0x1000000u);
        if (strstr(v15, a2) != 0) {
          result = v13 + 1;
          *(_QWORD*)(a3 + 8LL * (int)v13) = v15;
          v13 = result;
          if ((int)result >= a4) {
            break;
          }
        }
        if (v12 == ++v14) {
          goto LABEL_12;
        }
      }
    }
  }
  return result;
}

__int64 BaseNX_Unknown36(__int64 a1, const char* a2, __int64 a3, int a4)
{
  const char* v7;
  __int64 v8;
  __int64 v9;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  _BYTE v19[16];
  __int64 v20;
  __int64 v21;

  ConstructString_1901f0(v19);
  v7 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 128LL))(
      snd_g_proxy);
  GameRoutine_a392e0(v19, "%s%s", v7, a2);
  v8 = GameRoutine_190240(v19);
  if ((unsigned int)nn_fs_OpenDirectory(&v21, v8, 1) != 0) {
    LODWORD(v9) = 0;
    if ((v19[0] & 1) != 0) {
    LABEL_3:
      (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
          *snd_g_memory_ptr[0], v20);
    }
  }
  else {
    v11 = (char*)GameRoutine_6511d0(0xC400u);
    memset(v11, 0, 50176, v12, v13, v14);
    v15 = nn_fs_ReadDirectory(&v18, v11, v21, 64);
    nn_fs_CloseDirectory(v21);
    LODWORD(v9) = 0;
    if (v15 == 0) {
      v9 = v18;
      if (v18 > a4) {
        v18 = a4;
        v9 = a4;
      }
      if (v9 >= 1) {
        v16 = v9;
        v17 = v11;
        do {
          strcpy(a3, v17);
          v17 += 784;
          a3 += 256;
          --v16;
        } while (v16 != 0);
      }
    }
    GameRoutine_651310(v11);
    if ((v19[0] & 1) != 0) {
      goto LABEL_3;
    }
  }
  return (unsigned int)v9;
}

__int64 BaseNX_Unknown37(__int64 a1, const char* a2, __int64 a3, int a4)
{
  const char* v7;
  __int64 v8;
  __int64 v9;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  _BYTE v19[16];
  __int64 v20;
  __int64 v21;

  ConstructString_1901f0(v19);
  v7 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 128LL))(
      snd_g_proxy);
  GameRoutine_a392e0(v19, "%s%s", v7, a2);
  v8 = GameRoutine_190240(v19);
  if ((unsigned int)nn_fs_OpenDirectory(&v21, v8, 2) != 0) {
    LODWORD(v9) = 0;
    if ((v19[0] & 1) != 0) {
    LABEL_3:
      (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
          *snd_g_memory_ptr[0], v20);
    }
  }
  else {
    v11 = (char*)GameRoutine_6511d0(0xC400u);
    memset(v11, 0, 50176, v12, v13, v14);
    v15 = nn_fs_ReadDirectory(&v18, v11, v21, 64);
    nn_fs_CloseDirectory(v21);
    LODWORD(v9) = 0;
    if (v15 == 0) {
      v9 = v18;
      if (v18 > a4) {
        v18 = a4;
        v9 = a4;
      }
      if (v9 >= 1) {
        v16 = v9;
        v17 = v11;
        do {
          strcpy(a3, v17);
          v17 += 784;
          a3 += 256;
          --v16;
        } while (v16 != 0);
      }
    }
    GameRoutine_651310(v11);
    if ((v19[0] & 1) != 0) {
      goto LABEL_3;
    }
  }
  return (unsigned int)v9;
}

__int64 BaseNX_Unknown40(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4;
  __int64 v5;
  __int64 result;

  v4 = a2;
  v5 = a1 + 4088LL * a3;
  result = GameRoutine_2878e0(v5 + 3232, a2, 0xFFFFFFFFLL);
  if ((result & 1) == 0) {
    return GameRoutine_286270(v5 + 3232, v4, a1 + 4152, 0xFFFFFFFFLL, 0);
  }
  return result;
}

__int64 BaseNX_Unknown63(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4;

  v4 = a1 + 4088LL * a3 + 96LL * a4;
  *(_QWORD*)(v4 + 3840) = *(_QWORD*)(a2 + 24);
  return v4 + 3784;
}

__int64 BaseNX_Unknown71(__int64 a1, __int64 a2)
{
  __int64 v4;
  int v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;

  v4 = GameRoutine_2a1b90(a1);
  nn_os_LockMutex(v4 + 840);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1200LL))(a1);
  if (v5 < (*(int (**)(_QWORD))(**(_QWORD**)snd_g_proxy_ptr[0] + 168LL))(
               *(_QWORD*)snd_g_proxy_ptr[0]) ||
      ((v6 = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)a1 + 232LL))(a1, *(unsigned int*)(a2 + 24),
                                   *(unsigned int*)(a2 + 8),
                                   *(_QWORD*)(a2 + 16))) &
       1) != 0) {
    v6 = GameRoutine_27cb30(a1 + 4088LL * *(int*)(a2 + 8) + 2392, a2 + 32,
                            *(unsigned int*)(a2 + 24), *(_QWORD*)(a2 + 16), 0);
    v7 = v6;
  }
  else {
    v7 = 128;
  }
  v8 = GameRoutine_2a1b90(v6);
  nn_os_UnlockMutex(v8 + 840);
  return v7;
}

__int64 BaseNX_Unknown72(__int64 a1, __int64 a2)
{
  __int64 v4;
  int v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;

  v4 = GameRoutine_2a1b90(a1);
  nn_os_LockMutex(v4 + 840);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1200LL))(a1);
  if (v5 < (*(int (**)(_QWORD))(**(_QWORD**)snd_g_proxy_ptr[0] + 168LL))(
               *(_QWORD*)snd_g_proxy_ptr[0]) ||
      ((v6 = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)a1 + 232LL))(a1, *(unsigned int*)(a2 + 24),
                                   *(unsigned int*)(a2 + 8),
                                   *(_QWORD*)(a2 + 16))) &
       1) != 0) {
    v6 = GameRoutine_27cb90(a1 + 4088LL * *(int*)(a2 + 8) + 2392, a2 + 32,
                            *(unsigned int*)(a2 + 24), *(_QWORD*)(a2 + 16), 0);
    v7 = v6;
  }
  else {
    v7 = 128;
  }
  v8 = GameRoutine_2a1b90(v6);
  nn_os_UnlockMutex(v8 + 840);
  return v7;
}

__int64 BaseNX_Unknown73(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  int v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;

  v6 = GameRoutine_2a1b90(a1);
  nn_os_LockMutex(v6 + 840);
  v7 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1200LL))(a1);
  if (v7 < (*(int (**)(_QWORD))(**(_QWORD**)snd_g_proxy_ptr[0] + 168LL))(
               *(_QWORD*)snd_g_proxy_ptr[0]) ||
      ((v8 = (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)a1 + 232LL))(a1, *(unsigned int*)(a2 + 24),
                                   *(unsigned int*)(a2 + 8),
                                   *(_QWORD*)(a2 + 16))) &
       1) != 0) {
    v8 = GameRoutine_27cc40(a1 + 4088LL * *(int*)(a2 + 8) + 2392, a2 + 32,
                            *(unsigned int*)(a2 + 24), *(_QWORD*)(a2 + 16),
                            a3 + 8);
    v9 = v8;
  }
  else {
    v9 = 128;
  }
  v10 = GameRoutine_2a1b90(v8);
  nn_os_UnlockMutex(v10 + 840);
  return v9;
}

__int64 BaseNX_Unknown75(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  float v11;
  __int64 v12;
  __int64 v13;
  __int64 i;
  float v15;
  void (***v16)(_QWORD, _QWORD);
  void (***v17)(_QWORD, _QWORD);
  void (***v18)(_QWORD, _QWORD);
  void (***v19)(_QWORD, _QWORD);
  void (**v20)(_QWORD, _QWORD);
  bool v21;
  __int64 v22;
  void (***v23)(_QWORD, _QWORD);
  void (***v24)(_QWORD, _QWORD);
  __int64 v25;

  result =
      (*(__int64 (**)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)a1 + 232LL))(
          a1, *(unsigned int*)(a2 + 5768), *(unsigned int*)(a2 + 5772),
          *(_QWORD*)(a2 + 5776));
  if ((result & 1) != 0) {
    v5 = snd_g_memory_ptr[0];
    result = (*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 4352,
                                                 32);
    if (result != 0) {
      v6 = *(_DWORD*)(a2 + 5772);
      v7 = *(unsigned int*)(a2 + 5768);
      v8 = result;
      LODWORD(v23) = 0;
      if ((unsigned int)GameRoutine_27b0d0(a1 + 4088LL * v6 + 2392, result,
                                           &v23, 64, v7) != 0) {
        v9 = 0xFFFFFFFFLL;
      }
      else {
        v9 = (unsigned int)v23;
      }
      if ((v9 & 0x80000000) == 0) {
        v10 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 + 5664) + 88LL))(
            *(_QWORD*)(a2 + 5664));
        v24 = nullptr;
        v25 = 0;
        v23 = nullptr;
        if ((_DWORD)v9 != 0) {
          v11 = (float)v10;
          GameRoutine_164fe0(&v23, v9);
          v12 = v8 + 4;
          v13 = 4;
          for (i = v9; i != 0; --i) {
            v15 = (float)*(unsigned int*)(v12 - 4) / v11;
            GameRoutine_190200(&v23[v13 - 3], v12);
            v12 += 68;
            *(float*)&v23[v13] = v15 * 1000.0;
            v13 += 5;
          }
        }
        GameRoutine_149b20(a2, &v23);
        *(_DWORD*)(a2 + 6032) = v9;
        v16 = v23;
        if (v23 != nullptr) {
          v17 = v23;
          if (v23 != v24) {
            v18 = v24 - 5;
            v19 = v24 - 5;
            do {
              v20 = *v19;
              v19 -= 5;
              (*v20)(v18, v17);
              v21 = v18 == v16;
              v18 = v19;
            } while (!v21);
            v17 = v23;
          }
          v22 = *v5;
          v24 = v16;
          (*(void (**)(__int64, _QWORD))(*(_QWORD*)v22 + 24LL))(v22, v17);
        }
      }
      return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)*v5 + 24LL))(*v5, v8);
    }
  }
  return result;
}

__int64 BaseNX_Unknown163(__int64 a1, const char* a2)
{
  const char* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if (*(_BYTE*)(a1 + 4137) == 1) {
    if (a2 != nullptr) {
      v3 = a2;
    }
    else {
      v3 = "noname";
    }
    v4 = strlen(v3);
    if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
      v6 = *(_QWORD*)(a1 + 64);
    }
    else {
      v6 = *(_BYTE*)(a1 + 56) >> 1;
    }
    if ((v4 & v6) == 0xFFFFFFFFFFFFFFFFLL) {
      GameRoutine_a36650(v4, v5);
    }
  }
  return 0;
}

#pragma GCC visibility pop
