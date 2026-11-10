#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* BaseNx_2ac830(_QWORD* result, __int64);
_QWORD* GameRoutine_2abdc0(_QWORD* result);
_QWORD* GameRoutine_2b2d10(__int64, __int64);
__attribute__((swiftcall)) void SequenceSoundPlayer_28e690(PSEUDO_X8,
                                                           __int64 result, int);
__int64* SoundHeap_2a4300(__int64, __int64, __int64, __int64);
__int64 BaseNx_278770(_QWORD, _QWORD);
__int64 BaseNx_278b50(__int64, unsigned int, __int64);
__int64 BaseNx_278c70(__int64, __int64);
__int64 BaseNx_278e00(__int64, unsigned int, __int64);
__int64 BaseNx_285190(unsigned __int16*);
__int64 BaseNx_2851c0(__int64);
__int64 BaseNx_2851e0(__int64);
__int64 BaseNx_286c40(_QWORD*, unsigned int, __int64, __int64, char);
__int64 BaseNx_286d50(_QWORD*, __int64, unsigned int, __int64, __int64);
__int64 BaseNx_2a7d60(__int64 result);
__int64 GameRoutine_279010(_QWORD, _QWORD);
__int64 GameRoutine_28b4e0(__int64, __int64);
__int64 GameRoutine_290820(__int64, unsigned int, __int64);
__int64 GameRoutine_29e630(__int64 result);
__int64 GameRoutine_2a3470(__int64 result, int);
__int64 GameRoutine_2a3510(_QWORD, _QWORD, float);
__int64 GameRoutine_2a3750();
__int64 GameRoutine_2a3780();
__int64 GameRoutine_2a37b0();
__int64 GameRoutine_2a37c0();
__int64 GameRoutine_2a37e0();
__int64 GameRoutine_2a4fe0(float);
__int64 GameRoutine_2a54e0();
__int64 GameRoutine_2a6460(__int64);
__int64 GameRoutine_2a64c0(__int64 result);
__int64 GameRoutine_2a6900(__int64 result, int, char, float);
__int64 GameRoutine_2a6af0(__int64 result);
__int64 GameRoutine_2a6bf0(__int64);
__int64 GameRoutine_2ac000(__int64 result, char, __int16);
__int64 GameRoutine_2b2d90(__int64);
__int64 GameRoutine_2b2ec0(__int64, char);
__int64 SequenceSoundPlayer_294c60();
__int64 SoundArchivePlayer_29f420(__int64*);
__int64 SoundHeap_2a4a30(__int64 result);
__int64 StreamHeaderLoadTask_296920(__int64);
__int64 StreamSoundPlayer_29b900(_QWORD*);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_atk_detail_2a7b20(__int64 result);
__int64 nn_audio_GetRequiredBufferSizeForCircularBufferSink(_QWORD, _QWORD,
                                                            _QWORD, _QWORD);
__int64 nn_detail_UnexpectedDefaultImpl(_QWORD, _QWORD);
__int64 nn_os_AcquireWriteLock(_QWORD);
__int64 nn_os_ReleaseWriteLock(_QWORD);
__int64 nn_os_SleepThread(_QWORD);
__n128 SoundThread_2a1f40(__int64, __int64);
bool BaseNx_2ac9a0(__int64, __int64, unsigned int, unsigned int);
bool GameRoutine_2785c0(__int64);
char* BaseNx_284790(__int64, int);
char* GameRoutine_2846f0(__int64, unsigned int);
char* StreamHeaderLoadTask_296960(unsigned int*, unsigned int);
extern _UNKNOWN* GameData_2135448;
extern _UNKNOWN GameData_1b0fc18;
extern _UNKNOWN GameData_1b0fd08;
extern _UNKNOWN GameData_21a3020;
extern __int64* GameData_2135328[2];
extern __int64 GameData_21a2ff8;
extern __int64 GameData_21a3000;
extern __int64 GameData_21a3008;
extern __int64 GameData_21a3010;
extern __int64 GameData_21a3018;
extern char* GameData_2135468;
float BaseNx_28b580(__int64);
float GameRoutine_2a3450(__int64, int);
float GameRoutine_2a3490(__int64, int);
float GameRoutine_2a3520(__int64, int);
float MmlSequenceTrack_293db0(unsigned __int8);
unsigned __int64 GameRoutine_2b2dc0(__int64, unsigned __int64, int);
void* BaseNx_2a1b90();
void* SoundVoiceNX_14e360();
void GameRoutine_2894d0();
void __attribute__((noreturn)) GameRoutine_1196920();
unsigned __int16* nn_atk_detail_285570(__int64 a1, unsigned int a2, _DWORD* a3);
__int64 nn_atk_detail_2860e0(__int64* a1);
__int64 nn_atk_detail_286700(_QWORD* a1, __int64 a2, __int64 a3, char a4,
                             __int64 a5, unsigned int a6);
__int64 nn_atk_detail_288260(_QWORD* a1, __int64 a2, unsigned int a3,
                             __int64 a4);
__int64 nn_atk_detail_289840(__int64 a1, __int64 a2);
__int64 nn_atk_detail_28c800(__int64 a1, __int64* a2, __int64 a3, __int64 a4,
                             int a5);
void nn_atk_detail_28db20();
__attribute__((swiftcall)) void nn_atk_detail_294f30(PSEUDO_X8 x8_,
                                                     __int64 result, int a2);
__int64 nn_atk_detail_294f60(__int64 a1, int a2, int a3, int a4, char a5,
                             float a6);
unsigned int* nn_atk_detail_297130(__int64 a1, char* a2, signed int a3);
__int64 nn_atk_detail_29f280(__int64 a1, __int64 a2, __int64 a3,
                             unsigned __int64 a4);
__n128 nn_atk_detail_29f320(__int64* a1);
__int64 nn_atk_detail_2a36e0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                             __int64 a5, __int64 a6);
__int64* nn_atk_detail_2a4220(__int64* a1, __int64 a2, __int64 a3, __int64 a4);
__int64 nn_atk_detail_2a5060(__int64 a1, __int64 a2, char a3);
__int64 nn_atk_detail_2a64a0(__int64 result, int a2);
void nn_atk_detail_2a78c0(__int64 a1);
_QWORD* nn_atk_detail_2aae00(_QWORD* result, unsigned __int64 a2, int a3);
__attribute__((swiftcall)) void GameRoutine_283950(PSEUDO_X8, __int64 result,
                                                   __int64);
__int64 BaseNx_2891a0(_QWORD);
__int64 BaseNx_2891c0(_QWORD);
__int64 BaseNx_2a0820(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 BaseNx_2a0e80(_QWORD, _QWORD);
__int64 BaseNx_2a1860(_QWORD, _QWORD);
__int64 BaseNx_2b65b0(_QWORD);
__int64 BaseNx_2b6650_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD) __asm__("BaseNx_2b6650");
__int64 BaseNx_2b6740(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                      _QWORD, _QWORD);
__int64 BaseNx_2b74c0(_QWORD, _QWORD);
__int64 BaseNx_2b7720(_QWORD, _QWORD, _QWORD, double);
__int64 FinalMix_2b4c20(int, int, unsigned int);
__int64 FinalMix_2b4c20_alt1(_QWORD, _QWORD, _QWORD) __asm__("FinalMix_2b4c20");
__int64 FinalMix_2b4c30(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 FinalMix_2b5a60(_QWORD);
__int64 GameRoutine_28ad60(_QWORD);
__int64 GameRoutine_28bb20(_QWORD);
__int64 GameRoutine_2ab7c0(_QWORD, _QWORD);
__int64 GameRoutine_2ab7e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2abff0(__int64, int, __int64*);
__int64 GameRoutine_2b4e20(_QWORD);
__int64 GameRoutine_2b79c0(_QWORD, _QWORD);
__int64 SequenceNoteOnCallback_28bb40(__int64 result, __int64);
__int64 SequenceNoteOnCallback_28be40(__int64);
__int64 SoundArchivePlayer_289c80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 SoundArchivePlayer_289d60(_QWORD, long double);
__int64 SoundVoiceNX_14e360_alt1(_QWORD) __asm__("SoundVoiceNX_14e360");
__int64 SoundVoiceNx_289b50(_QWORD, _QWORD, _QWORD);
__int64 nn_audio_AddCircularBufferSink(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                       _QWORD, _QWORD, _QWORD);
__int64 nn_audio_AddDeviceSink(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_audio_GetAudioRendererConfigWorkBufferSize(_QWORD);
__int64 nn_audio_GetAudioRendererWorkBufferSize(_QWORD);
__int64 nn_audio_GetRequiredBufferSizeForPerformanceFrames(_QWORD);
__int64 nn_audio_InitializeAudioRendererConfig(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_audio_IsValidAudioRendererParameter(_QWORD);
__int64 nn_audio_OpenAudioRenderer(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_audio_SetDownMixParameter(_QWORD, _QWORD);
__int64 nn_audio_SetDownMixParameterEnabled(_QWORD, _QWORD);
__int64 nn_audio_StartAudioRenderer(_QWORD, _QWORD);
__int64 nn_detail_UnexpectedDefaultImpl_alt1(_QWORD) __asm__(
    "nn_detail_UnexpectedDefaultImpl");
__int64 nn_diag_detail_AbortImpl_1a0a080(_QWORD);
__int64 nn_diag_detail_AbortImpl_1a0a590(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN GameData_1b0c5e8;
extern _UNKNOWN GameData_1b0c5ee;
extern __int64 (**GameData_2140b90[])();
extern __int64 (
    **nn_atk_detail_BiquadFilterBpf1024Nw4fCompatible48k_vtable_ptr[])();
extern __int64 (**nn_atk_detail_BiquadFilterBpf1024_vtable_ptr[])();
extern __int64 (
    **nn_atk_detail_BiquadFilterBpf2048Nw4fCompatible48k_vtable_ptr)();
extern __int64 (**nn_atk_detail_BiquadFilterBpf2048_vtable_ptr[])();
extern __int64 (
    **nn_atk_detail_BiquadFilterBpf512Nw4fCompatible48k_vtable_ptr[])();
extern __int64 (**nn_atk_detail_BiquadFilterBpf512_vtable_ptr[])();
extern __int64 (
    **nn_atk_detail_BiquadFilterHpfNw4fCompatible48k_vtable_ptr[])();
extern __int64 (**nn_atk_detail_BiquadFilterHpf_vtable_ptr[])();
extern __int64 (
    **nn_atk_detail_BiquadFilterLpfNw4fCompatible48k_vtable_ptr[])();
unsigned __int64 BaseNx_2b6650(unsigned int, unsigned int, unsigned int,
                               unsigned int, char);
void BaseNx_2a8b80(_DWORD*, __int64, __int64, __int64, int, __int64);
void BaseNx_2a9140(__int64, __int64, char, float*, __int64, __int64, __int64);
unsigned int* nn_atk_detail_288140(_QWORD* a1, __int64 a2, __int64 a3);
__int64 nn_atk_detail_289600(__int64 a1, __int64 a2);
unsigned __int64 nn_atk_detail_289ff0(__int64 a1, __int64 a2);
__int64 nn_atk_detail_28a040(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                             __int64 a5, unsigned __int64 a6, __int64 a7,
                             __int64 a8);

unsigned __int16* nn_atk_detail_285570(__int64 a1, unsigned int a2, _DWORD* a3)
{
  unsigned __int16* result;
  int v6;
  __int64 v7;
  int v8;
  int v9;

  result = (unsigned __int16*)GameRoutine_2846f0(*(_QWORD*)(a1 + 64), a2);
  if (result != nullptr) {
    v6 = *(_DWORD*)result;
    *a3 = *(_DWORD*)result;
    result = (unsigned __int16*)BaseNx_284790(*(_QWORD*)(a1 + 64), v6);
    if (result != nullptr) {
      v7 = (__int64)result;
      v8 = BaseNx_285190(result);
      if (v8 == 1) {
        BaseNx_2851e0(v7);
        v9 = -1;
      }
      else {
        if (v8 != 0) {
          return nullptr;
        }
        v9 = *(_DWORD*)(BaseNx_2851c0(v7) + 8);
      }
      result = (_WORD*)(((_UNKNOWN*)0x0LL) + 1);
      a3[1] = v9;
    }
  }
  return result;
}

__int64 nn_atk_detail_2860e0(__int64* a1)
{
  __int64 v2;
  bool v3;
  __int64 v4;
  __int64* v5;
  char v6;
  bool i;
  bool v8;

  v2 = *a1;
  if (v2 == 0) {
    return 0;
  }
  v3 = GameRoutine_2785c0(v2);
  v4 = a1[3];
  v5 = a1 + 2;
  v6 = 1;
  for (i = v3; (__int64*)v4 != v5; v6 &= v8) {
    v8 = GameRoutine_2785c0(*(_QWORD*)(v4 + 24));
    v4 = *(_QWORD*)(v4 + 8);
  }
  return i & (unsigned __int8)v6 & 1;
}

__int64 nn_atk_detail_286700(_QWORD* a1, __int64 a2, __int64 a3, char a4,
                             __int64 a5, unsigned int a6)
{
  unsigned int v11;
  unsigned int v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  unsigned int* v23;
  unsigned int* v24;
  __int64 v25;
  unsigned int v26;
  __int64 v27;
  unsigned int v28;
  __int128 v29;
  __int64 v30;
  _QWORD v31[2];

  v11 = a2;
  v12 = BaseNx_278770(a1[1], a2);
  if ((a4 & 2) == 0 || (result = BaseNx_286c40(a1, v12, a3, a5, 0)) != 0) {
    if ((a4 & 8) == 0) {
      return 1;
    }
    v14 = (*(__int64 (**)(_QWORD*, _QWORD))(*a1 + 32LL))(a1, v12);
    if (v14 != 0) {
      v15 = v14;
      v16 = a1[1];
      DWORD2(v29) = 0;
      *(_QWORD*)&v29 = 0;
      if ((BaseNx_278b50(v16, v11, (__int64)&v29) & 1) == 0) {
        return 0;
      }
      v17 = v29;
      v31[0] = 0;
      v31[1] = 0;
      BaseNx_2ac830(v31, v15);
      v30 = 0;
      v29 = (__typeof__(v29)){0};
      if (!BaseNx_2ac9a0((__int64)v31, (__int64)&v29, v17, 0)) {
        return 0;
      }
      v18 = v29;
      v19 = DWORD1(v29);
      v20 = a1[1];
      v21 = v29;
      *(_QWORD*)((char*)&v29 + 4) = 0;
      LODWORD(v29) = -1;
      if ((BaseNx_278e00(v20, v21, (__int64)&v29) & 1) == 0) {
        return 0;
      }
      if (BYTE8(v29) == 1) {
        return (BaseNx_286d50(a1, v18, v19, a3, a5) & 1) != 0;
      }
      v28 = BaseNx_278770(a1[1], v18);
      result = BaseNx_286c40(a1, v28, a3, a5, 1);
      if (result != 0) {
        return 1;
      }
    }
    else {
      if (a6 == -1) {
        v22 = v11;
      }
      else {
        v22 = a6;
      }
      v23 = (unsigned int*)GameRoutine_279010(a1[1], v22);
      if (*v23 == 0) {
        return 1;
      }
      v24 = v23;
      v25 = 1;
      do {
        v26 = BaseNx_278770(a1[1], v24[v25]);
        v27 = BaseNx_286c40(a1, v26, a3, a5, 1);
        result = v27 != 0;
        if (v27 == 0) {
          break;
        }
        ++v25;
      } while (v25 - 1 < (unsigned __int64)*v24);
    }
  }
  return result;
}

unsigned int* nn_atk_detail_288140(_QWORD* a1, __int64 a2, __int64 a3)
{
  unsigned int* result;
  unsigned int* v6;
  unsigned int* v7;
  __int64 v8;
  unsigned int v9;
  unsigned int v10;
  __int64 v11;
  unsigned int v12;
  _QWORD v13[3];
  struct {
    char gap32_[4];
    int v14;
    __int64 v15;
  } v14_;

  if (a2 == 0) {
    return nullptr;
  }
  __builtin_memset(v13, 0, sizeof(v13));
  SequenceNoteOnCallback_28bb40((__int64)v13, a2);
  result = (unsigned int*)SequenceNoteOnCallback_28be40((__int64)v13);
  if (result != nullptr) {
    v6 = result;
    if (*result != 0) {
      v7 = result + 2;
      v8 = 0;
      while (1) {
        v9 = *(v7 - 1);
        v10 = *v7;
        v11 = a1[1];
        v14_.v15 = 0;
        v14_.v14 = -1;
        if ((BaseNx_278e00(v11, v9, (__int64)&v14_.v14) & 1) == 0) {
          break;
        }
        if (BYTE4(v14_.v15) == 1) {
          if ((BaseNx_286d50(a1, v9, v10, a3, 0) & 1) == 0) {
            return nullptr;
          }
        }
        else {
          v12 = BaseNx_278770(a1[1], v9);
          if (BaseNx_286c40(a1, v12, a3, 0, 1) == 0) {
            return nullptr;
          }
        }
        v7 += 2;
        if (++v8 >= (unsigned __int64)*v6) {
          return (_DWORD*)(((_UNKNOWN*)0x0LL) + 1);
        }
      }
      return nullptr;
    }
    else {
      return (_DWORD*)(((_UNKNOWN*)0x0LL) + 1);
    }
  }
  return result;
}

__int64 nn_atk_detail_288260(_QWORD* a1, __int64 a2, unsigned int a3,
                             __int64 a4)
{
  unsigned int v7;
  unsigned int v8;
  __int64 v9;
  unsigned int v10;
  __int64 result;
  unsigned int v12;
  __int128 v13;
  __int64 v14;
  _QWORD v15[2];

  if (a2 == 0) {
    return 0;
  }
  v15[0] = 0;
  v15[1] = 0;
  BaseNx_2ac830(v15, a2);
  v14 = 0;
  v13 = (__typeof__(v13)){0};
  if (!BaseNx_2ac9a0((__int64)v15, (__int64)&v13, a3, 0)) {
    return 0;
  }
  v7 = v13;
  v8 = DWORD1(v13);
  v9 = a1[1];
  v10 = v13;
  *(_QWORD*)((char*)&v13 + 4) = 0;
  LODWORD(v13) = -1;
  if ((BaseNx_278e00(v9, v10, (__int64)&v13) & 1) == 0) {
    return 0;
  }
  if (BYTE8(v13) == 1) {
    if ((BaseNx_286d50(a1, v7, v8, a4, 0) & 1) == 0) {
      return 0;
    }
  }
  else {
    v12 = BaseNx_278770(a1[1], v7);
    result = BaseNx_286c40(a1, v12, a4, 0, 1);
    if (result == 0) {
      return result;
    }
  }
  return 1;
}

__int64 nn_atk_detail_289600(__int64 a1, __int64 a2)
{
  unsigned int v2;
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  int v8;
  signed int v9;
  __int64 v10;
  unsigned int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  unsigned __int64 v16;
  unsigned int v17;
  _QWORD v19[7];

  v2 = *(unsigned __int8*)(a2 + 35);
  __builtin_memset(v19, 0, sizeof(v19));
  ((void (*)(__int64, _QWORD*, __int64))GameRoutine_2894d0)(a1, v19, a2);
  v4 = nn_audio_GetAudioRendererWorkBufferSize(v19);
  v5 = nn_audio_GetAudioRendererConfigWorkBufferSize(v19);
  v6 = *(unsigned __int8*)(a2 + 39);
  v7 = *(_DWORD*)(a2 + 28) + v6;
  v8 = *(_DWORD*)(a2 + 24) + (v6 ^ 1);
  v9 = v8 + v7;
  v10 = v5 + v4 + FinalMix_2b4c20(v8, v7, v2) + 40LL * (v8 + v7);
  if (*(_BYTE*)(a2 + 38) == 1) {
    if (*(_BYTE*)(a2 + 35) != 0) {
      v11 = 4;
    }
    else {
      v11 = 1;
    }
    if (*(_DWORD*)(a2 + 28) + *(_DWORD*)(a2 + 24) != 0) {
      v10 += (__int64)v9 << 8;
      if (*(_BYTE*)(a2 + 39) != 0) {
        v17 = 2;
      }
      else {
        v17 = 6;
      }
      if (v8 >= 1) {
        do {
          --v8;
          v10 += BaseNx_2b6650(v11, 6u, v9, v17, v2) + 8;
        } while (v8 != 0);
      }
      if (v7 >= 1) {
        do {
          --v7;
          v10 += BaseNx_2b6650(v11, 2u, v9, v17, v2) + 8;
        } while (v7 != 0);
      }
    }
    else {
      v12 = *(unsigned __int8*)(a2 + 34);
      v13 = 1;
      if (*(_BYTE*)(a2 + 34) != 0) {
        v13 = 2;
      }
      v14 = v10 + ((v13 + *(unsigned __int8*)(a2 + 33)) << 8) + 8;
      if (*(_BYTE*)(a2 + 39) != 0) {
        v15 = 2;
      }
      else {
        v15 = 6;
      }
      v16 = BaseNx_2b6650(v11, v15, 1u, v15, v2);
      if (v12 != 0) {
        v10 = v14 + v16 + BaseNx_2b6650(1u, v15, 1u, v15, v2) + 8;
        if (*(_BYTE*)(a2 + 33) != 1) {
          return v10;
        }
        goto LABEL_23;
      }
      v10 = v16 + v14;
      if (*(_BYTE*)(a2 + 33) == 1) {
      LABEL_23:
        v10 += BaseNx_2b6650(3u, 2u, 1u, v15, v2) + 8;
      }
    }
  }
  return v10;
}

__int64 nn_atk_detail_289840(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  struct {
    __int64 v9;
    __int64 v10;
    __int64 v11;
    __int64 v12;
    __int64 v13;
    __int64 v14;
    __int64 v15;
  } v9_;

  v9_.v14 = 0;
  v9_.v15 = 0;
  v9_.v12 = 0;
  v9_.v13 = 0;
  v9_.v10 = 0;
  v9_.v11 = 0;
  v9_.v9 = 0;
  ((void (*)(__int64, __int64*, __int64))GameRoutine_2894d0)(a1, &v9_.v9, a2);
  if (*(_BYTE*)(a1 + 1700) != 0) {
    v4 = 2;
  }
  else {
    v4 = 6;
  }
  v5 = nn_audio_GetRequiredBufferSizeForCircularBufferSink(
      &v9_.v9, v4, *(unsigned int*)(a2 + 12), 2);
  v9_.v14 = 0;
  v9_.v15 = 0;
  v9_.v12 = 0;
  v9_.v13 = 0;
  v6 = (v5 + 4095) & 0xFFFFFFFFFFFFF000LL;
  v9_.v10 = 0;
  v9_.v11 = 0;
  v9_.v9 = 0;
  ((void (*)(void))GameRoutine_2894d0)();
  if (*(_BYTE*)(a1 + 1700) != 0) {
    v7 = 2;
  }
  else {
    v7 = 6;
  }
  return v6 +
         nn_audio_GetRequiredBufferSizeForCircularBufferSink(
             &v9_.v9, v7, *(unsigned int*)(a2 + 12), 2) +
         4096;
}

unsigned __int64 nn_atk_detail_289ff0(__int64 a1, __int64 a2)
{
  _QWORD v3[7];

  __builtin_memset(v3, 0, sizeof(v3));
  ((void (*)(__int64, _QWORD*, __int64))GameRoutine_2894d0)(a1, v3, a2);
  return (nn_audio_GetRequiredBufferSizeForPerformanceFrames(v3) + 63) &
         0xFFFFFFFFFFFFFFC0LL;
}

__int64 nn_atk_detail_28a040(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                             __int64 a5, unsigned __int64 a6, __int64 a7,
                             __int64 a8)
{
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  long double v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  unsigned __int64 v41;
  int v42;
  unsigned int v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  int v48;
  __int64 v49;
  unsigned int v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  int v55;
  unsigned __int64 v56;
  unsigned int v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  int v62;
  unsigned __int64 v63;
  __int64 v64;
  unsigned int v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  int v75;
  __int64 v76;
  __int64 v77;
  __int64 i;
  int v79;
  unsigned int v80;
  unsigned int v81;
  unsigned int v82;
  int v83;
  int v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  unsigned __int64 v92;
  __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  double v96;
  unsigned int k;
  unsigned __int64 v98;
  unsigned int v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  __int64 v107;
  int v108;
  unsigned int v109;
  unsigned __int64 v110;
  __int64 v111;
  __int64 v112;
  int v113;
  int v114;
  double v115;
  int v116;
  unsigned int v117;
  int v118;
  int v119;
  int v120;
  unsigned int j;
  double v122;
  unsigned int m;
  __int64 v124;
  __int64 v125;
  double v126;
  double v127;
  double v128;
  __int64 v129;
  unsigned int v130;
  unsigned int v131;
  _QWORD v132[8];

  if ((*(_BYTE*)a1 & 1) != 0) {
    return 721;
  }
  *(_BYTE*)(a1 + 1696) = *(_BYTE*)(a8 + 35);
  *(_BYTE*)(a1 + 1697) = *(_BYTE*)(a8 + 38);
  *(_BYTE*)(a1 + 1698) = *(_BYTE*)(a8 + 33);
  *(_BYTE*)(a1 + 1699) = *(_BYTE*)(a8 + 34);
  *(_BYTE*)(a1 + 1700) = *(_BYTE*)(a8 + 39);
  *(_BYTE*)(a1 + 1703) = *(_BYTE*)(a8 + 49);
  *(_DWORD*)(a1 + 1712) =
      *(_DWORD*)(a8 + 24) + (*(unsigned __int8*)(a8 + 39) ^ 1);
  *(_DWORD*)(a1 + 1716) = *(_DWORD*)(a8 + 28) + *(unsigned __int8*)(a8 + 39);
  *(_DWORD*)(a1 + 1708) = *(_DWORD*)(a8 + 24) + *(_DWORD*)(a8 + 28) + 1;
  ((void (*)(void))GameRoutine_2894d0)();
  v14 = nn_audio_IsValidAudioRendererParameter(a1 + 1552);
  if ((v14 & 1) == 0) {
    nn_diag_detail_AbortImpl_1a0a590(v14);
    goto LABEL_120;
  }
  v15 = nn_audio_GetAudioRendererWorkBufferSize(a1 + 1552);
  *(_QWORD*)(a1 + 208) = a2;
  result = nn_audio_OpenAudioRenderer(a1 + 8, a1 + 144, a1 + 1552, a2, v15);
  if ((_DWORD)result != 0) {
    *(_QWORD*)(a1 + 208) = 0;
    return result;
  }
  v16 = a2 + v15;
  atomic_store(0, (unsigned __int64*)(a1 + 200));
  v17 = nn_audio_GetAudioRendererConfigWorkBufferSize(a1 + 1552);
  v18 = v16 + v17;
  *(_QWORD*)(a1 + 216) = v16;
  nn_audio_InitializeAudioRendererConfig(a1 + 24, a1 + 1552, v16, v17);
  LODWORD(v16) = *(unsigned __int8*)(a1 + 1696);
  v19 = FinalMix_2b4c20_alt1(*(unsigned int*)(a1 + 1712),
                             *(unsigned int*)(a1 + 1716),
                             *(unsigned __int8*)(a1 + 1696));
  v131 = v16;
  FinalMix_2b4c30(a1 + 1384, a1 + 24, *(unsigned int*)(a1 + 1712),
                  *(unsigned int*)(a1 + 1716), (unsigned int)v16, v18, v19);
  v21 = v18 + v19;
  if ((*(_BYTE*)(a8 + 47) & 1) == 0) {
    if (*(_BYTE*)(a1 + 1700) != 0) {
      v22 = 2;
    }
    else {
      v22 = 6;
    }
    nn_audio_AddDeviceSink(a1 + 24, a1 + 1608, a1 + 1456, &GameData_1b0c5ee,
                           v22, "MainAudioOut");
    if (*(_BYTE*)(a8 + 42) == 1) {
      __builtin_memset(&v132[2], 0, 48);
      v132[0] = 1065353216;
      v132[1] = 0x3F80000000000000LL;
      nn_audio_SetDownMixParameter(a1 + 1608, v132);
      v23 = a1 + 1608;
      v24 = 1;
    }
    else {
      v23 = a1 + 1608;
      v24 = 0;
    }
    nn_audio_SetDownMixParameterEnabled(v23, v24);
  }
  if (*(_BYTE*)(a8 + 36) == 1) {
    v25 = (v21 + 4095) & 0xFFFFFFFFFFFFF000LL;
    if (*(_BYTE*)(a1 + 1700) != 0) {
      v26 = 2;
    }
    else {
      v26 = 6;
    }
    v27 = nn_audio_GetRequiredBufferSizeForCircularBufferSink(
        a1 + 1552, v26, *(unsigned int*)(a8 + 12), 2);
    *(_QWORD*)(a1 + 1928) = v27;
    *(_QWORD*)(a1 + 1904) = v25;
    v28 = (v27 + 4095) & 0xFFFFFFFFFFFFF000LL;
    v29 = SoundArchivePlayer_289c80(a1, a1 + 1896, v25, v28, 0);
    v30 = SoundVoiceNX_14e360_alt1(v29);
    nn_os_LockMutex(v30 + 1720);
    if (*(_BYTE*)(a1 + 1700) != 0) {
      v31 = 2;
    }
    else {
      v31 = 6;
    }
    v32 = nn_audio_AddCircularBufferSink(
        a1 + 24, a1 + 1880, a1 + 1456, &GameData_1b0c5e8, v31,
        *(_QWORD*)(a1 + 1904), *(_QWORD*)(a1 + 1928), 2);
    LODWORD(v132[0]) = v32;
    if ((_DWORD)v32 != 0) {
      goto LABEL_121;
    }
    v33 = SoundVoiceNX_14e360_alt1(v32);
    *(__n128*)&v20 = nn_os_UnlockMutex(v33 + 1720);
    v34 = *(_QWORD*)(a1 + 1928);
    *(_DWORD*)(a1 + 1888) = 1;
    *(_QWORD*)(a1 + 1920) = v25 + v28;
    v21 = v25 + v28 + v34;
  }
  v35 = *(int*)(a1 + 1708);
  *(_QWORD*)(a1 + 1944) = v21;
  *(_DWORD*)(a1 + 1952) = v35;
  v36 = v21 + 40 * v35;
  if ((_DWORD)v35 != 0) {
    v37 = 40 * v35 - 40;
    if ((~(v37 / 0x28) & 7) != 0) {
      v38 = ((unsigned __int8)(v37 / 0x28) + 1) & 7;
      do {
        *(_DWORD*)(v21 + 32) = 0;
        *(_QWORD*)(v21 + 16) = 0;
        *(_QWORD*)(v21 + 24) = 0;
        --v38;
        *(_QWORD*)v21 = 0;
        *(_QWORD*)(v21 + 8) = 0;
        v21 += 40;
      } while (v38 != 0);
    }
    if (v37 >= 0x118) {
      do {
        *(_DWORD*)(v21 + 32) = 0;
        *(_QWORD*)(v21 + 16) = 0;
        *(_QWORD*)(v21 + 24) = 0;
        *(_QWORD*)v21 = 0;
        *(_QWORD*)(v21 + 8) = 0;
        *(_QWORD*)(v21 + 40) = 0;
        *(_QWORD*)(v21 + 48) = 0;
        *(_QWORD*)(v21 + 56) = 0;
        *(_QWORD*)(v21 + 64) = 0;
        *(_DWORD*)(v21 + 72) = 0;
        *(_QWORD*)(v21 + 80) = 0;
        *(_QWORD*)(v21 + 88) = 0;
        *(_QWORD*)(v21 + 96) = 0;
        *(_QWORD*)(v21 + 104) = 0;
        *(_DWORD*)(v21 + 112) = 0;
        *(_QWORD*)(v21 + 120) = 0;
        *(_QWORD*)(v21 + 128) = 0;
        *(_QWORD*)(v21 + 136) = 0;
        *(_QWORD*)(v21 + 144) = 0;
        *(_DWORD*)(v21 + 152) = 0;
        *(_DWORD*)(v21 + 192) = 0;
        *(_QWORD*)(v21 + 176) = 0;
        *(_QWORD*)(v21 + 184) = 0;
        *(_QWORD*)(v21 + 160) = 0;
        *(_QWORD*)(v21 + 168) = 0;
        *(_DWORD*)(v21 + 232) = 0;
        *(_QWORD*)(v21 + 216) = 0;
        *(_QWORD*)(v21 + 224) = 0;
        *(_QWORD*)(v21 + 200) = 0;
        *(_QWORD*)(v21 + 208) = 0;
        *(_DWORD*)(v21 + 272) = 0;
        *(_QWORD*)(v21 + 256) = 0;
        *(_QWORD*)(v21 + 264) = 0;
        *(_QWORD*)(v21 + 240) = 0;
        *(_QWORD*)(v21 + 248) = 0;
        *(_DWORD*)(v21 + 312) = 0;
        *(_QWORD*)(v21 + 296) = 0;
        *(_QWORD*)(v21 + 304) = 0;
        *(_QWORD*)(v21 + 280) = 0;
        *(_QWORD*)(v21 + 288) = 0;
        v21 += 320;
      } while (v21 != v36);
    }
    v39 = *(_DWORD*)(a1 + 1708);
    if (v39 >= 1) {
      if (*(_BYTE*)(a8 + 37) == 1) {
        v40 = *(_QWORD*)(a1 + 1944);
        v41 = (a6 + 4095) & 0xFFFFFFFFFFFFF000LL;
        v42 = *(_DWORD*)(a1 + 1712);
        if ((*(_DWORD*)(a1 + 1716) + v42 < 0) ^
                __OFADD__(*(_DWORD*)(a1 + 1716), v42) |
            (*(_DWORD*)(a1 + 1716) + v42 == 0)) {
          v43 = 0;
        }
        else {
          v43 = 2;
        }
        if (v42 <= 0) {
          v44 = v43;
        }
        else {
          v44 = 6;
        }
        v45 = nn_audio_GetRequiredBufferSizeForCircularBufferSink(
            a1 + 1552, v44, *(unsigned int*)(a8 + 12), 2);
        *(_QWORD*)(v40 + 16) = v41;
        *(_QWORD*)(v40 + 24) = v45;
        v46 = (a6 + 4095) & 0xFFFFFFFFFFFFF000LL;
        v47 = (v45 + 4095) & 0xFFFFFFFFFFFFF000LL;
        SoundArchivePlayer_289c80(a1, v40 + 8, v46, v47, 0);
        SoundVoiceNx_289b50(a1, 0, 1);
        v39 = *(_DWORD*)(a1 + 1708);
        a6 = v41 + v47;
      }
      if (v39 >= 2) {
        v48 = *(_DWORD*)(a1 + 1712);
        v49 = *(_QWORD*)(a1 + 1944);
        v50 = 1 - v48 >= *(_DWORD*)(a1 + 1716) ? 0 : 2;
        v51 = v48 <= 1 ? v50 : 6LL;
        v52 = (a6 + 4095) & 0xFFFFFFFFFFFFF000LL;
        v53 = nn_audio_GetRequiredBufferSizeForCircularBufferSink(
            a1 + 1552, v51, *(unsigned int*)(a8 + 12), 2);
        *(_QWORD*)(v49 + 56) = v52;
        *(_QWORD*)(v49 + 64) = v53;
        v54 = (v53 + 4095) & 0xFFFFFFFFFFFFF000LL;
        SoundArchivePlayer_289c80(a1, v49 + 48, v52, v54, 0);
        SoundVoiceNx_289b50(a1, 1, 1);
        if (*(int*)(a1 + 1708) >= 3) {
          v55 = *(_DWORD*)(a1 + 1712);
          v56 = v52 + v54;
          v57 = 2 - v55 >= *(_DWORD*)(a1 + 1716) ? 0 : 2;
          v58 = *(_QWORD*)(a1 + 1944);
          v59 = v55 <= 2 ? v57 : 6LL;
          v60 = nn_audio_GetRequiredBufferSizeForCircularBufferSink(
              a1 + 1552, v59, *(unsigned int*)(a8 + 12), 2);
          *(_QWORD*)(v58 + 96) = v56;
          *(_QWORD*)(v58 + 104) = v60;
          v61 = (v60 + 4095) & 0xFFFFFFFFFFFFF000LL;
          SoundArchivePlayer_289c80(a1, v58 + 88, v56, v61, 0);
          SoundVoiceNx_289b50(a1, 2, 1);
          if (*(int*)(a1 + 1708) >= 4) {
            v62 = *(_DWORD*)(a1 + 1712);
            v63 = v56 + v61;
            v64 = *(_QWORD*)(a1 + 1944);
            v65 = 3 - v62 >= *(_DWORD*)(a1 + 1716) ? 0 : 2;
            v66 = v62 <= 3 ? v65 : 6LL;
            v67 = nn_audio_GetRequiredBufferSizeForCircularBufferSink(
                a1 + 1552, v66, *(unsigned int*)(a8 + 12), 2);
            *(_QWORD*)(v64 + 136) = v63;
            *(_QWORD*)(v64 + 144) = v67;
            SoundArchivePlayer_289c80(a1, v64 + 128, v63,
                                      (v67 + 4095) & 0xFFFFFFFFFFFFF000LL, 0);
            v68 = SoundVoiceNx_289b50(a1, 3, 1);
            if (*(int*)(a1 + 1708) > 4) {
            LABEL_122:
              nn_detail_UnexpectedDefaultImpl_alt1(v68);
              __udf(0);
            }
          }
        }
      }
    }
  }
  *(_BYTE*)(a1 + 1702) = *(_BYTE*)(a8 + 43);
  *(_BYTE*)(a1 + 1701) = *(_BYTE*)(a8 + 40);
  *(_BYTE*)(a1 + 1960) = *(_BYTE*)(a8 + 45);
  *(_BYTE*)(a1 + 1961) = *(_BYTE*)(a8 + 46);
  *(_BYTE*)(a1 + 1962) = *(_BYTE*)(a8 + 47);
  *(_BYTE*)(a1 + 1704) = *(_BYTE*)(a8 + 50);
  LODWORD(v132[0]) = SoundArchivePlayer_289d60(a1, v20);
  if (LODWORD(v132[0]) != 0) {
  LABEL_120:
    nn_diag_detail_AbortImpl_1a0a080(v132);
  LABEL_121:
    v68 = nn_diag_detail_AbortImpl_1a0a080(v132);
    goto LABEL_122;
  }
  v69 =
      GameRoutine_2ab7c0(*(unsigned int*)(a1 + 1708), *(unsigned int*)(a8 + 8));
  GameRoutine_2ab7e0(a1 + 1328, *(unsigned int*)(a1 + 1708),
                     *(unsigned int*)(a8 + 8), a4, v69);
  nn_audio_StartAudioRenderer(*(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 16));
  *(_DWORD*)(a1 + 192) = 0;
  v73 = memset(a1 + 272, 0, 1024, v70, v71, v72);
  *(_QWORD*)(a1 + 280) = GameData_2140b90;
  *(_QWORD*)(a1 + 288) = nn_atk_detail_BiquadFilterHpf_vtable_ptr;
  *(_QWORD*)(a1 + 296) = nn_atk_detail_BiquadFilterBpf512_vtable_ptr;
  *(_QWORD*)(a1 + 304) = nn_atk_detail_BiquadFilterBpf1024_vtable_ptr;
  *(_QWORD*)(a1 + 312) = nn_atk_detail_BiquadFilterBpf2048_vtable_ptr;
  *(_QWORD*)(a1 + 320) =
      nn_atk_detail_BiquadFilterLpfNw4fCompatible48k_vtable_ptr;
  *(_QWORD*)(a1 + 328) =
      nn_atk_detail_BiquadFilterHpfNw4fCompatible48k_vtable_ptr;
  *(_QWORD*)(a1 + 336) =
      nn_atk_detail_BiquadFilterBpf512Nw4fCompatible48k_vtable_ptr;
  *(_QWORD*)(a1 + 344) =
      nn_atk_detail_BiquadFilterBpf1024Nw4fCompatible48k_vtable_ptr;
  *(_QWORD*)(a1 + 352) =
      &nn_atk_detail_BiquadFilterBpf2048Nw4fCompatible48k_vtable_ptr;
  v75 = *(_DWORD*)(a1 + 224);
  *(_DWORD*)(a1 + 228) = 2;
  if (v75 != 2) {
    *(_DWORD*)(a1 + 224) = 2;
    v76 = BaseNx_2a1860(v73, v74);
    v77 = BaseNx_2a0820(v76, 32, 8, 1);
    *(_DWORD*)(v77 + 24) = 8;
    *(_DWORD*)(v77 + 8) = 80;
    v73 = BaseNx_2a0e80(v76, v77);
    if (*(_BYTE*)(a1 + 1696) == 1) {
      LOBYTE(v132[0]) = 0;
      BaseNx_2891a0(v132);
      for (i = *(_QWORD*)(a1 + 1512); i != a1 + 1504; i = *(_QWORD*)(i + 8)) {
        FinalMix_2b5a60(i - 72);
      }
      BaseNx_2891c0(v132);
      v73 = FinalMix_2b5a60(a1 + 1384);
    }
  }
  *(_QWORD*)(a1 + 1320) = 0;
  *(_BYTE*)(a1 + 1296) = 1;
  *(_BYTE*)a1 = 1;
  v79 = *(unsigned __int8*)(a1 + 1697);
  *(_QWORD*)(a1 + 1297) = 0;
  *(_QWORD*)(a1 + 1305) = 0;
  *(_QWORD*)(a1 + 1313) = 0;
  if (v79 == 1) {
    v80 = *(unsigned __int8*)(a8 + 44);
    if (*(_BYTE*)(a8 + 35) != 0) {
      v81 = 4;
    }
    else {
      v81 = 1;
    }
    if (*(_BYTE*)(a1 + 1700) != 0) {
      v82 = 2;
    }
    else {
      v82 = 6;
    }
    if (*(_DWORD*)(a8 + 28) + *(_DWORD*)(a8 + 24) != 0) {
      v99 = *(_DWORD*)(a1 + 1708);
      v100 = *(int*)(a1 + 1496);
      if ((_DWORD)v100 != 0) {
        v101 = *(_QWORD*)(a1 + 1488);
        v102 = v100 << 8;
        do {
          v73 = (*(__int64 (**)(__int64))(*(_QWORD*)v101 + 88LL))(v101);
          v101 += 256;
          v102 -= 256;
        } while (v102 != 0);
      }
      v130 = v80;
      *(_QWORD*)(a1 + 1488) = v36;
      *(_DWORD*)(a1 + 1496) = v99;
      if (v99 != 0) {
        v103 = (__int64)(int)v99 << 8;
        v104 = v36;
        do {
          v73 = BaseNx_2b65b0(v104);
          v104 += 256;
          v103 -= 256;
        } while (v103 != 0);
      }
      if (*(int*)(a1 + 1708) >= 1) {
        v105 = v36 + ((__int64)(int)v99 << 8);
        v106 = 0;
        do {
          v107 = *(int*)(a1 + 1712);
          if ((int)v106 - (int)v107 >= *(_DWORD*)(a1 + 1716)) {
            v108 = 0;
          }
          else {
            v108 = 2;
          }
          if (v106 >= v107) {
            v109 = v108;
          }
          else {
            v109 = 6;
          }
          v110 = (v105 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          v111 = *(_QWORD*)(a1 + 1488) + (v106 << 8);
          v112 = BaseNx_2b6650_alt1(v81, v109, v99, v82, v131, 1);
          BaseNx_2b6740(v111, v81, v109, v99, v82, v131, 1, v110, v112);
          GameRoutine_2b79c0(v111, v130);
          BaseNx_2b74c0(v111, a1 + 1384);
          v113 = (*(__int64 (**)(__int64))(*(_QWORD*)v111 + 16LL))(v111);
          v114 = GameRoutine_2b4e20(a1 + 1384);
          if (v114 >= v113) {
            v116 = v113;
          }
          else {
            v116 = v114;
          }
          if (v116 >= 1) {
            v117 = 0;
            do {
              BaseNx_2b7720(v111, v117, v117, 0.0);
              ++v117;
              v118 = (*(__int64 (**)(__int64))(*(_QWORD*)v111 + 16LL))(v111);
              v119 = GameRoutine_2b4e20(a1 + 1384);
              if (v119 >= v118) {
                v120 = v118;
              }
              else {
                v120 = v119;
              }
            } while ((int)v117 < v120);
          }
          v105 = v110 + v112;
          for (j = 0; j != v81; ++j) {
            LODWORD(v115) = 0x1.0000000000000p+0;
            v73 = BaseNx_2b7720(v111, j, (unsigned int)v106, v115);
          }
          ++v106;
        } while (v106 < *(int*)(a1 + 1708));
      }
    }
    else {
      if (*(_BYTE*)(a8 + 34) != 0) {
        v83 = 2;
      }
      else {
        v83 = 1;
      }
      v84 = v83 + *(unsigned __int8*)(a8 + 33);
      v85 = *(int*)(a1 + 1496);
      v86 = (unsigned int)(v84 << 8);
      if ((_DWORD)v85 != 0) {
        v87 = *(_QWORD*)(a1 + 1488);
        v88 = v85 << 8;
        do {
          (*(void (**)(__int64))(*(_QWORD*)v87 + 88LL))(v87);
          v87 += 256;
          v88 -= 256;
        } while (v88 != 0);
      }
      v89 = v36 + v86;
      *(_QWORD*)(a1 + 1488) = v36;
      *(_DWORD*)(a1 + 1496) = v84;
      do {
        BaseNx_2b65b0(v36);
        v36 += 256;
        v86 -= 256;
      } while (v86 != 0);
      v90 = *(unsigned __int8*)(a8 + 34);
      v91 = *(_QWORD*)(a1 + 1488);
      v92 = (v89 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      v93 = BaseNx_2b6650_alt1(v81, v82, 1, v82, v131, 1);
      BaseNx_2b6740(v91, v81, v82, 1, v82, v131, 1, v92, v93);
      GameRoutine_2b79c0(v91, v80);
      if ((v90 & 1) != 0) {
        v94 = (v92 + v93 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        v95 = BaseNx_2b6650_alt1(1, v82, 1, v82, v131, 1);
        BaseNx_2b6740(*(_QWORD*)(a1 + 1488) +
                          ((__int64)*(int*)(a1 + 1496) << 8) - 256,
                      1, v82, 1, v82, v131, 1, v94, v95);
        GameRoutine_2b79c0(*(_QWORD*)(a1 + 1488) +
                               ((__int64)*(int*)(a1 + 1496) << 8) - 256,
                           v80);
        BaseNx_2b74c0(v91, *(_QWORD*)(a1 + 1488) +
                               ((__int64)*(int*)(a1 + 1496) << 8) - 256);
        BaseNx_2b74c0(*(_QWORD*)(a1 + 1488) +
                          ((__int64)*(int*)(a1 + 1496) << 8) - 256,
                      a1 + 1384);
        for (k = 0; k != v81; ++k) {
          LODWORD(v96) = 0x1.0000000000000p+0;
          BaseNx_2b7720(v91, k, 0, v96);
        }
        LODWORD(v96) = 0x1.0000000000000p+0;
        v98 = v94 + v95;
        v73 = BaseNx_2b7720(*(_QWORD*)(a1 + 1488) +
                                ((__int64)*(int*)(a1 + 1496) << 8) - 256,
                            0, 0, v96);
      }
      else {
        BaseNx_2b74c0(v91, a1 + 1384);
        for (m = 0; m != v81; ++m) {
          LODWORD(v122) = 0x1.0000000000000p+0;
          v73 = BaseNx_2b7720(v91, m, 0, v122);
        }
        v98 = v92 + v93;
      }
      if (*(_BYTE*)(a8 + 33) == 1) {
        v124 = *(_QWORD*)(a1 + 1488);
        v125 = BaseNx_2b6650_alt1(3, 2, 1, v82, v131, 1);
        BaseNx_2b6740(v124 + 256, 3, 2, 1, v82, v131, 1,
                      (v98 + 7) & 0xFFFFFFFFFFFFFFF8LL, v125);
        GameRoutine_2b79c0(v124 + 256, v80);
        BaseNx_2b74c0(v124 + 256, a1 + 1384);
        LODWORD(v126) = 0x1.0000000000000p+0;
        BaseNx_2b7720(v124 + 256, 0, 0, v126);
        LODWORD(v127) = 0x1.0000000000000p+0;
        BaseNx_2b7720(v124 + 256, 1, 0, v127);
        LODWORD(v128) = 0x1.0000000000000p+0;
        v73 = BaseNx_2b7720(v124 + 256, 2, 0, v128);
      }
    }
  }
  v129 = GameRoutine_28ad60(v73);
  GameRoutine_28bb20(v129);
  return 0;
}

__int64 nn_atk_detail_28c800(__int64 a1, __int64* a2, __int64 a3, __int64 a4,
                             int a5)
{
  __int64 result;
  unsigned __int8* v6;
  unsigned int v7;
  __int16* v8;
  unsigned __int8* v9;
  __int64 v10;
  int v11;
  int v12;
  __int64 v13;
  char v14;
  unsigned __int8* v15;
  __int64 v16;
  int v17;
  int v18;
  int v19;
  int v20;
  unsigned __int16 v21;
  unsigned __int8* v22;
  __int64 v23;
  unsigned int v24;
  struct {
    __int16* v25;
    __int64 v26;
  } v25_;

  result = 0;
  if (a5 <= 2) {
    if (a5 == 1) {
      v22 = (unsigned __int8*)(*a2)++;
      return *v22;
    }
    else if (a5 == 2) {
      v9 = (unsigned __int8*)*a2;
      v10 = *a2 + 2;
      ++*a2;
      v11 = *v9;
      *a2 = v10;
      return v11 | (v9[1] << 8);
    }
    return result;
  }
  switch (a5) {
  case 3:
    v12 = 0;
    v13 = *a2 + 1;
    do {
      *a2 = v13;
      v14 = *(_BYTE*)(v13++ - 1);
      result = v14 & 0x7F | (unsigned int)(v12 << 7);
      v12 = v14 & 0x7F | (v12 << 7);
    } while (v14 < 0);
    return result;
  case 4:
    v15 = (unsigned __int8*)*a2;
    v16 = *a2 + 2;
    ++*a2;
    v17 = *v15;
    *a2 = v16;
    v18 = (__int16)(v15[1] << 8) | v17;
    *a2 = (__int64)(v15 + 3);
    v19 = v15[2];
    *a2 = (__int64)(v15 + 4);
    v20 = (__int16)(v15[3] << 8) | v19;
    v21 = GameRoutine_2a54e0();
    return (unsigned int)(v18 + ((v21 + v21 * (v20 - v18)) >> 16));
  case 5:
    v6 = (unsigned __int8*)(*a2)++;
    v7 = *v6;
    v25_.v25 = nullptr;
    v25_.v26 = 0;
    if (v7 > 0x1F) {
      if (v7 > 0x2F ||
          (X8CALL_X0(__int64,
                     nn_atk_detail_294f30((void*)(&v25_.v25), a4, v7 - 32)),
           v8 = v25_.v25, v25_.v25 == nullptr)) {
      LABEL_20:
        result = 0;
        v23 = v25_.v26;
        if (v25_.v26 != 0) {
          goto LABEL_21;
        }
        return result;
      }
    }
    else {
      SequenceSoundPlayer_28e690((void*)(&v25_.v25), a3, v7);
      v8 = v25_.v25;
      if (v25_.v25 == nullptr) {
        goto LABEL_20;
      }
    }
    result = (unsigned int)*v8;
    v23 = v25_.v26;
    if (v25_.v26 != 0) {
    LABEL_21:
      v24 = result;
      nn_os_ReleaseWriteLock(v23);
      return v24;
    }
    break;
  default:
    break;
  }
  return result;
}

void nn_atk_detail_28db20()
{
  __int64* v0;

  v0 = GameData_2135328[0];
  *(__int64*)((char*)GameData_2135328[0] +
              (unsigned __int64)((__int128*)0x10LL)) = -1;
  *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v0 + 8) = -1;
  *v0 = -1;
  v0[1] = -1;
}

__attribute__((swiftcall)) void nn_atk_detail_294f30(PSEUDO_X8 x8_,
                                                     __int64 result, int a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;

  if (a2 > 15) {
    *a3 = 0;
    a3[1] = 0;
  }
  else {
    v3 = result + 2LL * a2;
    v4 = result + 520;
    *a3 = v3 + 568;
    a3[1] = v4;
    {
      nn_os_AcquireWriteLock(v4);
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 nn_atk_detail_294f60(__int64 a1, int a2, int a3, int a4, char a5,
                             float a6)
{

#pragma clang fp contract(off)
  __int64 v6;
  int v11;
  __int64 v12;
  int v13;
  int v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v21;
  int v22;
  __int64 v23;
  int v24;
  int v25;
  float v26;
  float v27;
  char v28;
  __int64 v29;
  int v30;
  char v31;
  unsigned int v32;
  unsigned int v33;
  int v34;
  struct {
    _QWORD v36[2];
    int v37;
    int v38;
    __int64 (*v39)();
    __int64 v40;
    __int64 v41;
    __int64 v42;
    __int64 v43;
  } v36_;

  v6 = *(_QWORD*)(a1 + 600);
  v11 = a3 * *(unsigned __int8*)(a1 + 488) / 127;
  if ((a5 & 1) == 0) {
    v12 = 0;
    if (*(_BYTE*)(a1 + 203) == 1) {
      goto LABEL_5;
    }
  LABEL_9:
    if (v12 != 0) {
      goto LABEL_25;
    }
    goto LABEL_10;
  }
  v12 = *(_QWORD*)(a1 + 608);
  if (v12 != 0) {
    *(_BYTE*)(v12 + 368) = a2;
    a6 = MmlSequenceTrack_293db0(v11);
    *(float*)(v12 + 376) = a6;
  }
  if (*(_BYTE*)(a1 + 203) != 1) {
    goto LABEL_9;
  }
LABEL_5:
  v12 = *(_QWORD*)(a1 + 608);
  if (v12 != 0) {
    if (*(_DWORD*)(v12 + 32) != 4) {
      *(_BYTE*)(v12 + 368) = a2;
      a6 = MmlSequenceTrack_293db0(v11);
      *(float*)(v12 + 376) = a6;
      *(_DWORD*)(v12 + 356) = a4;
      v21 = *(char*)(a1 + 496);
      if (v21 < 0) {
        goto LABEL_27;
      }
      goto LABEL_26;
    }
    GameRoutine_2a6460(*(_QWORD*)(a1 + 608));
    GameRoutine_2a6af0(v12);
    GameRoutine_2a6bf0(v12);
  }
LABEL_10:
  v13 = *(unsigned __int8*)(a1 + 493) + *(unsigned __int8*)(v6 + 296);
  LODWORD(v36_.v36[0]) = *(_DWORD*)(a1 + 380);
  HIDWORD(v36_.v36[0]) = a2;
  if ((a5 & 1) != 0) {
    v14 = -1;
  }
  else {
    v14 = a4;
  }
  v36_.v43 = 0;
  v36_.v36[1] = __PAIR64__(v14, v11);
  v36_.v37 = *(char*)(a1 + 490);
  v36_.v38 = v13;
  v15 = *(_QWORD*)(a1 + 600);
  v16 = *(unsigned __int8*)(a1 + 379);
  v36_.v39 = SequenceSoundPlayer_294c60;
  v36_.v40 = a1;
  v17 = *(_QWORD*)(v15 + 56);
  v36_.v41 = *(_QWORD*)(v15 + 48);
  v36_.v42 = v17;
  LODWORD(v36_.v43) = *(_DWORD*)(v15 + 936);
  v18 = GameRoutine_290820(v15, v16, (__int64)v36_.v36);
  v12 = v18;
  if (v18 == 0) {
    return v12;
  }
  v19 = *(_QWORD*)(a1 + 608);
  if (*(_BYTE*)(v18 + 370) != 0 && v19 != 0) {
    do {
      if (*(unsigned __int8*)(v19 + 370) == *(unsigned __int8*)(v12 + 370)) {
        GameRoutine_2a3520(v19 + 32, 126);
        GameRoutine_2a64c0(v19);
      }
      v19 = *(_QWORD*)(v19 + 408);
    } while (v19 != 0);
    v19 = *(_QWORD*)(a1 + 608);
  }
  *(_QWORD*)(v12 + 408) = v19;
  *(_QWORD*)(a1 + 608) = v12;
LABEL_25:
  v21 = *(char*)(a1 + 496);
  if ((v21 & 0x80000000) == 0) {
  LABEL_26:
    a6 = GameRoutine_2a3450(v12 + 32, v21);
  }
LABEL_27:
  v22 = *(char*)(a1 + 497);
  if ((v22 & 0x80000000) == 0) {
    a6 = GameRoutine_2a3490(v12 + 32, v22);
  }
  v23 = (unsigned int)*(char*)(a1 + 498);
  if ((v23 & 0x80000000) == 0) {
    GameRoutine_2a3510(v12 + 32, v23, a6);
  }
  v24 = *(char*)(a1 + 499);
  if ((v24 & 0x80000000) == 0) {
    GameRoutine_2a3520(v12 + 32, v24);
  }
  v25 = *(__int16*)(a1 + 500);
  if (v25 <= 127) {
    GameRoutine_2a3470(v12 + 32, v25);
  }
  v26 = *(float*)(a1 + 384);
  if (*(_BYTE*)(a1 + 377) != 0) {
    v26 = v26 + (float)(*(unsigned __int8*)(a1 + 494) - a2);
  }
  if (*(_BYTE*)(a1 + 495) != 0) {
    v27 = -v26;
    v28 = 1;
    v29 = v12;
    if (v26 >= 0x0.0p+0f) {
      v27 = v26;
    }
    v30 = 5 * ((int)(float)(v27 * (float)(*(unsigned __int8*)(a1 + 495) *
                                          (unsigned int)*(
                                              unsigned __int8*)(a1 + 495))) >>
               5);
  }
  else {
    v29 = v12;
    v30 = a4;
    v28 = 0;
  }
  GameRoutine_2a6900(v29, v30, v28, v26);
  *(_BYTE*)(a1 + 494) = a2;
  v31 = *(_BYTE*)(a1 + 371);
  v32 = *(unsigned __int16*)(v12 + 344);
  v33 = *(unsigned __int16*)(v12 + 342);
  if (v32 >= v33) {
    LOBYTE(v34) = *(_BYTE*)(v12 + 341);
  }
  else {
    v34 = *(unsigned __int8*)(v12 + 340) +
          (int)((*(unsigned __int8*)(v12 + 341) -
                 *(unsigned __int8*)(v12 + 340)) *
                v32) /
              (int)v33;
  }
  *(_BYTE*)(v12 + 340) = v34;
  *(_BYTE*)(v12 + 341) = v31 - 1;
  *(_DWORD*)(v12 + 342) = 0;
  *(_BYTE*)(v12 + 196) = *(_BYTE*)(*(_QWORD*)(a1 + 600) + 248LL);
  *(_DWORD*)(v12 + 360) = *(_DWORD*)(*(_QWORD*)(a1 + 600) + 92LL);
  *(_DWORD*)(v12 + 364) = *(_DWORD*)(*(_QWORD*)(a1 + 600) + 96LL);
  return v12;
}

unsigned int* nn_atk_detail_297130(__int64 a1, char* a2, signed int a3)
{
  unsigned int* result;
  char* v6;
  int v7;

  result = (unsigned int*)StreamHeaderLoadTask_296920(*(_QWORD*)(a1 + 8));
  if (result != nullptr) {
    if (a3 >= (int)*result) {
      return nullptr;
    }
    else {
      v6 = StreamHeaderLoadTask_296960(result, a3);
      *a2 = *v6;
      a2[1] = v6[1];
      a2[2] = v6[2];
      a2[3] = v6[3];
      v7 = (unsigned __int8)*(_DWORD*)&v6[*((int*)v6 + 2)];
      a2[4] = *(_DWORD*)&v6[*((int*)v6 + 2)];
      if (v7 != 0) {
        a2[5] = v6[*((int*)v6 + 2) + 4];
        if (v7 != 1) {
          a2[6] = v6[*((int*)v6 + 2) + 5];
        }
      }
      return (_DWORD*)(((_UNKNOWN*)0x0LL) + 1);
    }
  }
  return result;
}

__int64 nn_atk_detail_29f280(__int64 a1, __int64 a2, __int64 a3,
                             unsigned __int64 a4)
{
  char v7;
  _QWORD* v8;
  unsigned __int64 v9;
  struct {
    __int64 v11;
    __int64 v12;
    __int64 v13;
    __int64 v14;
    __int64 v15;
  } v11_;

  v11_.v14 = 0;
  v11_.v15 = 0;
  v11_.v12 = 0;
  v11_.v13 = 0;
  v11_.v11 = 0;
  v7 = BaseNx_278c70(a2, (__int64)&v11_.v11);
  if ((v7 & 1) != 0) {
    v8 = *(_QWORD**)(a1 + 56);
    if (v8 != (_QWORD*)(a1 + 48)) {
      v9 = a4 / (int)v11_.v12;
      do {
        v8[22] = a3;
        v8[23] = v9;
        v8 = (_QWORD*)v8[1];
        a3 += v9;
      } while (v8 != (_QWORD*)(a1 + 48));
    }
  }
  return v7 & 1;
}

__n128 nn_atk_detail_29f320(__int64* a1)
{
  unsigned __int64 v2;
  _QWORD* v3;
  __int64* i;
  __int64* v5;
  __int64 v6;
  void* v7;

  GameRoutine_29e630((__int64)(a1 + 17));
  SoundArchivePlayer_29f420(a1);
  while ((__int64*)a1[16] != a1 + 15) {
    nn_os_SleepThread(5000000);
  }
  v2 = a1[12] / 0x3680uLL;
  if ((int)v2 >= 1) {
    v3 = (_QWORD*)a1[11];
    do {
      StreamSoundPlayer_29b900(v3);
      v3 += 1744;
      LODWORD(v2) = v2 - 1;
    } while ((_DWORD)v2 != 0);
  }
  for (i = (__int64*)a1[14]; i != a1 + 13; i = (__int64*)a1[14]) {
    v5 = (__int64*)i[1];
    v6 = *v5;
    *(_QWORD*)(*i + 8) = v5;
    *v5 = *i;
    *(_QWORD*)(v6 + 8) = i;
    *i = v6;
  }
  v7 = BaseNx_2a1b90();
  return SoundThread_2a1f40((__int64)v7, (__int64)(a1 + 8));
}

__int64 nn_atk_detail_2a36e0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                             __int64 a5, __int64 a6)
{
  __int64 result;

  result = memset(&GameData_21a3020, 0, 984, a4, a5, a6);
  GameData_21a2ff8 = (__int64)GameRoutine_2a3750;
  GameData_21a3000 = (__int64)GameRoutine_2a3780;
  GameData_21a3008 = (__int64)GameRoutine_2a37b0;
  GameData_21a3010 = (__int64)GameRoutine_2a37c0;
  GameData_21a3018 = (__int64)GameRoutine_2a37e0;
  return result;
}

__int64* nn_atk_detail_2a4220(__int64* a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v7;
  __int64* result;
  __int64* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;

  if (*a1 != 0) {
    SoundHeap_2a4300((__int64)a1, a2, a3, a4);
    GameRoutine_2b2ec0(*a1, 3);
    GameRoutine_2b2d90(*a1);
    *a1 = 0;
  }
  v7 = (a2 + 3) & 0xFFFFFFFFFFFFFFFCLL;
  if (a2 + a3 < v7) {
    return nullptr;
  }
  result = GameRoutine_2b2d10(v7, a2 + a3 - v7);
  *a1 = (__int64)result;
  if (result != nullptr) {
    result = (__int64*)GameRoutine_2b2dc0((__int64)result, 0x28u, 4);
    if (result != nullptr) {
      result[3] = 0;
      result[4] = 0;
      result[1] = 0;
      result[2] = 0;
      v9 = result;
      *result = 0;
      SoundHeap_2a4a30((__int64)result);
      v10 = *v9;
      v12 = a1[1];
      v11 = a1 + 1;
      *v9 = v12;
      *(_QWORD*)(v10 + 8) = v11;
      *(_QWORD*)(*v11 + 8) = v9;
      *v11 = v10;
      return (_QWORD*)(((_UNKNOWN*)0x0LL) + 1);
    }
  }
  return result;
}

__int64 nn_atk_detail_2a5060(__int64 a1, __int64 a2, char a3)
{
  int v3;
  int v4;
  signed int v5;
  int v6;
  char* v7;
  float v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;

  if ((a3 & 1) != 0) {
    v3 = 23;
    v4 = 0;
    do {
      while (1) {
        v5 = (unsigned int)(v4 + v3) >> 1;
        v6 = *(unsigned __int16*)&GameData_2135468[2 * v5];
        if ((int)a1 <= v6) {
          break;
        }
        v4 = v5 + 1;
        if (v5 + 1 > v3) {
          goto LABEL_7;
        }
      }
      if ((int)a1 >= v6) {
        goto LABEL_8;
      }
      v3 = v5 - 1;
    } while (v4 <= v5 - 1);
  LABEL_7:
    v5 = -1;
  LABEL_8:
    if ((_DWORD)a2 == 32000) {
      v7 = (char*)&GameData_1b0fc18;
    }
    else {
      if ((_DWORD)a2 != 48000) {
        nn_detail_UnexpectedDefaultImpl(a1, a2);
        __udf(0);
      }
      v7 = (char*)&GameData_1b0fd08;
    }
    v12 = *(_QWORD*)&v7[10 * v5];
    v11 = HIWORD(v12);
    v9 = v12 & 0xFFFF00000000LL;
    v10 = (unsigned int)v12 & 0xFFFF0000;
  }
  else {
    v8 = 0x1.0000000000000p+1f -
         (float)(*((float*)GameData_2135448 +
                   4 * ((unsigned int)((a1 << 32) / (int)a2) >> 24)) +
                 (float)(*((float*)GameData_2135448 +
                           4 * ((unsigned int)((a1 << 32) / (int)a2) >> 24) +
                           2) *
                         vcvts_n_f32_u32(((a1 << 32) / (int)a2) & 0xFFFFFF,
                                         0x18u)));
    v9 = 0;
    v10 = 0;
    v11 = (unsigned int)(int)(float)((float)(sqrtf((float)(v8 * v8) +
                                                   -0x1.0000000000000p+0f) -
                                             v8) *
                                     -0x1.0000000000000p+14f);
    LOWORD(v12) = 0x4000 - v11;
  }
  return v9 | (v11 << 48) | v10 | (unsigned __int16)v12;
}

__int64 nn_atk_detail_2a64a0(__int64 result, int a2)
{
  int v2;

  v2 = *(_DWORD*)(result + 320) + a2;
  if (v2 >= *(_DWORD*)(result + 324)) {
    v2 = *(_DWORD*)(result + 324);
  }
  *(_DWORD*)(result + 320) = v2;
  return result;
}

void nn_atk_detail_2a78c0(__int64 a1)
{

#pragma clang fp contract(off)
  __int16 v1;
  int v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _DWORD* v8;
  __int64 v9;
  _DWORD* v10;
  float v11;
  void* v12;
  float v13;
  int v14;
  float v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  float* v19;
  __int64 v20;
  float* v21;
  unsigned __int16 v22;
  __int16 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int16 v28;

  if (*(_BYTE*)(a1 + 217) != 1) {
    return;
  }
  v1 = *(_WORD*)(a1 + 232);
  if ((v1 & 4) == 0) {
    if ((v1 & 0x40) == 0) {
      goto LABEL_4;
    }
    goto LABEL_19;
  }
  v3 = *(_DWORD*)(a1 + 196);
  if (v3 >= 1) {
    v4 = *(_DWORD*)(a1 + 240);
    v5 = v3 & 7;
    if ((unsigned int)v3 < 8) {
      v6 = 0;
      if ((v3 & 7) == 0) {
        goto LABEL_18;
      }
      goto LABEL_16;
    }
    v7 = 0;
    v8 = (_DWORD*)a1;
    v9 = -(__int64)(v3 & 0x7FFFFFF8);
    do {
      v8[3] = v4;
      v8[27] = v4;
      v7 -= 8;
      v8[51] = v4;
      v8[75] = v4;
      v8[99] = v4;
      v8[123] = v4;
      v8[147] = v4;
      v8[171] = v4;
      v8 += 192;
    } while (v9 != v7);
    v6 = -v7;
    if (v5 != 0) {
    LABEL_16:
      v10 = (_DWORD*)(a1 + 96 * v6 + 12);
      do {
        *v10 = v4;
        v10 += 24;
        --v5;
      } while (v5 != 0);
    }
  }
LABEL_18:
  v1 &= ~4u;
  *(_WORD*)(a1 + 232) = v1;
  if ((v1 & 0x40) == 0) {
  LABEL_4:
    if ((v1 & 8) == 0) {
      goto LABEL_5;
    }
  LABEL_29:
    nn_atk_detail_2a7b20(a1);
    v1 = *(_WORD*)(a1 + 232) & 0xFFF7;
    *(_WORD*)(a1 + 232) = v1;
    if ((v1 & 0x10) == 0) {
    LABEL_6:
      if ((v1 & 0x20) == 0) {
        return;
      }
      goto LABEL_7;
    }
    goto LABEL_30;
  }
LABEL_19:
  v11 = *(float*)(a1 + 236);
  v12 = SoundVoiceNX_14e360();
  v13 = BaseNx_28b580((__int64)v12);
  v14 = *(_DWORD*)(a1 + 196);
  if (v14 < 1) {
    goto LABEL_28;
  }
  v15 = v11 * v13;
  v16 = v14 & 7;
  if ((unsigned int)v14 < 8) {
    v17 = 0;
    if ((v14 & 7) == 0) {
      goto LABEL_28;
    }
    goto LABEL_26;
  }
  v18 = 0;
  v19 = (float*)a1;
  v20 = -(__int64)(v14 & 0x7FFFFFF8);
  do {
    v19[2] = v15;
    v19[26] = v15;
    v18 -= 8;
    v19[50] = v15;
    v19[74] = v15;
    v19[98] = v15;
    v19[122] = v15;
    v19[146] = v15;
    v19[170] = v15;
    v19 += 192;
  } while (v20 != v18);
  v17 = -v18;
  if (v16 != 0) {
  LABEL_26:
    v21 = (float*)(a1 + 96 * v17 + 8);
    do {
      *v21 = v15;
      v21 += 24;
      --v16;
    } while (v16 != 0);
  }
LABEL_28:
  v1 = *(_WORD*)(a1 + 232) & 0xFFBF;
  *(_WORD*)(a1 + 232) = v1;
  if ((v1 & 8) != 0) {
    goto LABEL_29;
  }
LABEL_5:
  if ((v1 & 0x10) == 0) {
    goto LABEL_6;
  }
LABEL_30:
  v22 = GameRoutine_2a4fe0(*(float*)(a1 + 252));
  if (*(int*)(a1 + 196) >= 1) {
    v23 = v22;
    if ((unsigned __int16)(v22 >> 7) <= 0x7Cu) {
      v26 = 0;
      v27 = a1;
      do {
        GameRoutine_2ac000(v27, 1, v23);
        ++v26;
        v27 += 96;
      } while (v26 < *(int*)(a1 + 196));
    }
    else {
      v24 = 0;
      v25 = a1;
      do {
        GameRoutine_2ac000(v25, 0, 0);
        ++v24;
        v25 += 96;
      } while (v24 < *(int*)(a1 + 196));
    }
  }
  v28 = *(_WORD*)(a1 + 232) & 0xFFEF;
  *(_WORD*)(a1 + 232) = v28;
  if ((v28 & 0x20) != 0) {
  LABEL_7:
    BaseNx_2a7d60(a1);
    *(_WORD*)(a1 + 232) &= ~0x20u;
  }
}

__int64 nn_atk_detail_2a7b20(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  int v9;
  __int64 v10;
  int v11;
  bool v12;
  unsigned int v13;
  void* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD v21[12];
  struct {
    __int64 v22[2];
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
  } v22_;
  struct {
    _QWORD v33[2];
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
  } v33_;

  if (*(int*)(result + 196) >= 1) {
    v1 = result + 268;
    v2 = result;
    v3 = 0;
    do {
      v4 = *(_DWORD*)(v2 + 392);
      __builtin_memset(v21, 0, sizeof(v21));
      if (v4 != 0) {
        if (v4 != 1) {
          GameRoutine_1196920();
        }
        v5 = *(_QWORD*)(v2 + 384);
        BaseNx_2a8b80((_DWORD*)v2, (__int64)v21, v1, *(_QWORD*)(v2 + 352), v3,
                      v5);
        v6 = *(_QWORD*)(v2 + 352);
        v22_.v31 = 0;
        v22_.v32 = 0;
        v22_.v29 = 0;
        v22_.v30 = 0;
        v22_.v27 = 0;
        v22_.v28 = 0;
        v22_.v25 = 0;
        v22_.v26 = 0;
        v22_.v23 = 0;
        v22_.v24 = 0;
        v22_.v22[0] = 0;
        v22_.v22[1] = 0;
        BaseNx_2a9140(v2, (__int64)v22_.v22, 0, (float*)v1, v6, (__int64)v21,
                      v5);
        result = GameRoutine_2abff0(v2 + 96 * v3, 0, v22_.v22);
      }
      else {
        v7 = *(_QWORD*)(v2 + 384);
        v8 = HIDWORD(v7);
        if (SHIDWORD(v7) >= 1) {
          v9 = 0;
          do {
            v13 = __clz(__rbit32(v7));
            if ((((unsigned int)v7 >> v13) & 1) != 0) {
              v14 = SoundVoiceNX_14e360();
              v15 = GameRoutine_28b4e0((__int64)v14, v13);
              v33_.v40 = 0;
              v33_.v41 = 0;
              v33_.v34 = 0x3F8000003F800000LL;
              v33_.v35 = 0x3F8000003F800000LL;
              v33_.v33[0] = 0;
              v33_.v33[1] = 0x3F8000003F800000LL;
              v33_.v38 = 0x3F8000003F800000LL;
              v33_.v39 = 0;
              v33_.v36 = 0x3F8000003F800000LL;
              v33_.v37 = 0x3F8000003F800000LL;
              if (v13 != 0) {
                GameRoutine_283950((void*)(v33_.v33), *(_QWORD*)(v2 + 352),
                                   v13);
              }
              else {
                v16 = *(_QWORD*)(v1 + 56);
                v33_.v38 = *(_QWORD*)(v1 + 48);
                v33_.v39 = v16;
                v17 = *(_QWORD*)(v1 + 72);
                v33_.v40 = *(_QWORD*)(v1 + 64);
                v33_.v41 = v17;
                v18 = *(_QWORD*)(v1 + 24);
                v33_.v34 = *(_QWORD*)(v1 + 16);
                v33_.v35 = v18;
                v19 = *(_QWORD*)(v1 + 40);
                v33_.v36 = *(_QWORD*)(v1 + 32);
                v33_.v37 = v19;
                v20 = *(_QWORD*)(v1 + 8);
                v33_.v33[0] = *(_QWORD*)v1;
                v33_.v33[1] = v20;
              }
              BaseNx_2a8b80((_DWORD*)v2, (__int64)v21, (__int64)v33_.v33,
                            *(_QWORD*)(v2 + 352), v3, v15);
              v10 = *(_QWORD*)(v2 + 352);
              v22_.v31 = 0;
              v22_.v32 = 0;
              v22_.v29 = 0;
              v22_.v30 = 0;
              v22_.v27 = 0;
              v22_.v28 = 0;
              v22_.v25 = 0;
              v22_.v26 = 0;
              v22_.v23 = 0;
              v22_.v24 = 0;
              v22_.v22[0] = 0;
              v22_.v22[1] = 0;
              BaseNx_2a9140(v2, (__int64)v22_.v22, 0, (float*)v33_.v33, v10,
                            (__int64)v21, v15);
              result = GameRoutine_2abff0(v2 + 96 * v3, v9, v22_.v22);
            }
            ++v9;
            v11 = v7 & -(int)v7;
            v12 = (_DWORD)v7 == v11;
            LODWORD(v7) = v11 ^ v7;
            v12 = v12 || (_DWORD)v8 == v9;
          } while (!v12);
        }
      }
      ++v3;
    } while (v3 < *(int*)(v2 + 196));
  }
  return result;
}

_QWORD* nn_atk_detail_2aae00(_QWORD* result, unsigned __int64 a2, int a3)
{
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  int* v7;
  int v8;
  __int64* v9;
  __int64 v10;
  int v11;
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
  unsigned __int64 v23;
  unsigned int v24;
  void* v25;
  __int64 v26;
  int* v27;
  int v28;
  __int64* v29;
  __int64 v30;
  int v31;
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
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  struct {
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
    __int64 v56;
    __int64 v57;
    __int64 v58;
  } v46_;

  v3 = result[10];
  v4 = a2;
  v5 = result;
  v6 = *(_QWORD*)(v3 + 32);
  *(_DWORD*)(v3 + 4) = 0;
  *(_QWORD*)(v3 + 24) = v6;
  if (a3 == 0) {
    v23 = HIDWORD(a2);
    if (SHIDWORD(a2) < 1) {
      return result;
    }
    while (1) {
      v24 = __clz(__rbit32(v4));
      if ((((unsigned int)v4 >> v24) & 1) == 0) {
        goto LABEL_21;
      }
      v25 = SoundVoiceNX_14e360();
      v26 = GameRoutine_28b4e0((__int64)v25, v24);
      v46_.v57 = 0;
      v46_.v58 = 0;
      v46_.v55 = 0;
      v46_.v56 = 0;
      v46_.v53 = 0;
      v46_.v54 = 0;
      v46_.v51 = 0;
      v46_.v52 = 0;
      v46_.v49 = 0;
      v46_.v50 = 0;
      v46_.v47 = 0;
      v46_.v48 = 0;
      v46_.v46 = 0;
      result = GameRoutine_2abdc0(&v46_.v46);
      v27 = (int*)v5[10];
      v46_.v46 = v26;
      v28 = *v27;
      if (*v27 == 0) {
        goto LABEL_21;
      }
      v29 = *((__int64**)v27 + 4);
      v30 = v46_.v50;
      v31 = v27[1];
      v33 = v46_.v47;
      v32 = v46_.v48;
      v29[3] = v46_.v49;
      v29[4] = v30;
      v29[1] = v33;
      v29[2] = v32;
      v34 = v46_.v54;
      v36 = v46_.v51;
      v35 = v46_.v52;
      v29[7] = v46_.v53;
      v29[8] = v34;
      v29[5] = v36;
      v29[6] = v35;
      v37 = v46_.v58;
      v39 = v46_.v55;
      v38 = v46_.v56;
      v29[11] = v46_.v57;
      v29[12] = v37;
      v29[9] = v39;
      v29[10] = v38;
      *v29 = v46_.v46;
      v40 = *((_QWORD*)v27 + 4) + 104LL;
      v41 = *((_QWORD*)v27 + 2);
      *((_QWORD*)v27 + 4) = v40;
      if (v28 != v31) {
        if (v40 == v41) {
          *((_QWORD*)v27 + 4) = *((_QWORD*)v27 + 1);
        }
        ++v27[1];
        goto LABEL_21;
      }
      if (v40 == v41) {
        v43 = *((_QWORD*)v27 + 1);
        v44 = *((_QWORD*)v27 + 3) + 104LL;
        *((_QWORD*)v27 + 3) = v44;
        *((_QWORD*)v27 + 4) = v43;
        if (v44 != v41) {
          goto LABEL_21;
        }
      }
      else {
        v42 = *((_QWORD*)v27 + 3) + 104LL;
        *((_QWORD*)v27 + 3) = v42;
        if (v42 != v41) {
          goto LABEL_21;
        }
      }
      *((_QWORD*)v27 + 3) = *((_QWORD*)v27 + 1);
    LABEL_21:
      v45 = v4 & -(int)v4;
      if ((_DWORD)v4 != v45) {
        LODWORD(v4) = v45 ^ v4;
        LODWORD(v23) = v23 - 1;
        if ((_DWORD)v23 != 0) {
          continue;
        }
      }
      return result;
    }
  }
  if (a3 != 1) {
    GameRoutine_1196920();
  }
  v46_.v57 = 0;
  v46_.v58 = 0;
  v46_.v55 = 0;
  v46_.v56 = 0;
  v46_.v53 = 0;
  v46_.v54 = 0;
  v46_.v51 = 0;
  v46_.v52 = 0;
  v46_.v49 = 0;
  v46_.v50 = 0;
  v46_.v47 = 0;
  v46_.v48 = 0;
  v46_.v46 = 0;
  result = GameRoutine_2abdc0(&v46_.v46);
  v7 = (int*)v5[10];
  v46_.v46 = v4;
  v8 = *v7;
  if (*v7 != 0) {
    v9 = *((__int64**)v7 + 4);
    v10 = v46_.v50;
    v11 = v7[1];
    v13 = v46_.v47;
    v12 = v46_.v48;
    v9[3] = v46_.v49;
    v9[4] = v10;
    v9[1] = v13;
    v9[2] = v12;
    v14 = v46_.v54;
    v16 = v46_.v51;
    v15 = v46_.v52;
    v9[7] = v46_.v53;
    v9[8] = v14;
    v9[5] = v16;
    v9[6] = v15;
    v17 = v46_.v58;
    v19 = v46_.v55;
    v18 = v46_.v56;
    v9[11] = v46_.v57;
    v9[12] = v17;
    v9[9] = v19;
    v9[10] = v18;
    *v9 = v46_.v46;
    v20 = *((_QWORD*)v7 + 4) + 104LL;
    v21 = *((_QWORD*)v7 + 2);
    *((_QWORD*)v7 + 4) = v20;
    if (v8 == v11) {
      if (v20 == v21) {
        *((_QWORD*)v7 + 4) = *((_QWORD*)v7 + 1);
      }
      v22 = *((_QWORD*)v7 + 3) + 104LL;
      *((_QWORD*)v7 + 3) = v22;
      if (v22 == v21) {
        *((_QWORD*)v7 + 3) = *((_QWORD*)v7 + 1);
      }
    }
    else {
      if (v20 == v21) {
        *((_QWORD*)v7 + 4) = *((_QWORD*)v7 + 1);
      }
      ++v7[1];
    }
  }
  return result;
}

#pragma GCC visibility pop
