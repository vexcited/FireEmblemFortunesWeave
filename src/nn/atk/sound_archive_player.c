#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_278890(__int64);
__int64 BasicSound_2807c0(_QWORD, _QWORD);
__int64 BasicSound_282410(_QWORD);
__int64 BasicSound_282840(_QWORD, _QWORD);
__int64 BasicSound_282870(_QWORD, _QWORD);
__int64 ExternalSoundPlayer_282cc0(_QWORD, _QWORD);
__int64 GameRoutine_278650(_QWORD);
__int64 GameRoutine_278690(__int64);
__int64 GameRoutine_278700(_QWORD, _QWORD);
__int64 GameRoutine_278920(__int64, __int64, unsigned int);
__int64 GameRoutine_278be0(__int64, __int64, unsigned int);
__int64 GameRoutine_278c70(__int64, __int64);
__int64 GameRoutine_279c80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD);
__int64 GameRoutine_27a220(_QWORD);
__int64 GameRoutine_27ae80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_27b070(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_27bd30(_QWORD);
__int64 GameRoutine_27bdc0(_QWORD, _QWORD);
__int64 GameRoutine_27c280(_QWORD, _QWORD);
__int64 GameRoutine_27c340(_QWORD);
__int64 GameRoutine_27c6a0(_QWORD, _QWORD);
__int64 GameRoutine_27c920(_QWORD, _QWORD);
__int64 GameRoutine_27c9c0(_QWORD);
__int64 GameRoutine_27c9e0(_QWORD, _QWORD);
__int64 GameRoutine_27ca80(_QWORD, _QWORD);
__int64 GameRoutine_27db80(void);
__int64 GameRoutine_27db90(_QWORD, _QWORD);
__int64 GameRoutine_27dc10(void);
__int64 GameRoutine_27e2b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_27e460(_QWORD);
__int64 GameRoutine_27e480(_QWORD, _QWORD);
__int64 GameRoutine_27e590(_QWORD, _QWORD);
__int64 GameRoutine_27e5c0(_QWORD);
__int64 GameRoutine_27e9a0(_QWORD, _QWORD);
__int64 GameRoutine_27ea60(_QWORD);
__int64 GameRoutine_27ece0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 GameRoutine_27ed50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 GameRoutine_281e50(_QWORD);
__int64 GameRoutine_282880(_QWORD, _QWORD);
__int64 GameRoutine_2832c0(_QWORD, _QWORD);
__int64 GameRoutine_283380(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2840f0(_QWORD);
__int64 GameRoutine_285f20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_285f80(_QWORD, _QWORD);
__int64 GameRoutine_286080(_QWORD, _QWORD);
__int64 GameRoutine_2860e0(_QWORD);
__int64 GameRoutine_286200(_QWORD);
__int64 GameRoutine_288380(_QWORD, _QWORD);
__int64 GameRoutine_2883d0(_QWORD, _QWORD);
__int64 GameRoutine_2890a0(_QWORD);
__int64 GameRoutine_28b3a0(void);
__int64 GameRoutine_291e10(_QWORD);
__int64 GameRoutine_292970(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_29eca0(_QWORD);
__int64 GameRoutine_29ee90(_QWORD);
__int64 GameRoutine_29f0e0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_29f280(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_29f560(_QWORD, _QWORD);
__int64 GameRoutine_29f6a0(_QWORD);
__int64 GameRoutine_29f920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 GameRoutine_29f990(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 GameRoutine_2a0c40(void);
__int64 GameRoutine_2a0cc0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a1860(_QWORD, _QWORD);
__int64 GameRoutine_2a5800(_QWORD);
__int64 GameRoutine_2a5840(_QWORD);
__int64 GameRoutine_2ae3d0(_QWORD);
__int64 GameRoutine_2ae9a0(_QWORD, _QWORD);
__int64 GameRoutine_2aea80(_QWORD);
__int64 GameRoutine_2aed00(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 GameRoutine_2aed70(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 PlayerHeap_284190(_QWORD);
__int64 SequenceNoteOnCallback_2925c0(_QWORD, _QWORD);
__int64 SequenceNoteOnCallback_292660(_QWORD, _QWORD);
__int64 SequenceNoteOnCallback_292680(_QWORD);
__int64 SequenceNoteOnCallback_292900(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                      _QWORD, _QWORD);
__int64 SoundVoiceNX_14e360(_QWORD, _QWORD);
__int64 nn_os_GetSystemTick(_QWORD);
extern _UNKNOWN* GameData_2135058;
extern _UNKNOWN* GameData_2135068;
extern __int64* GameData_2135040;
extern char* GameData_2135060;
extern char* GameData_2135070;
_QWORD* SoundArchivePlayer_Destructor(_QWORD* a1);
__int64 SoundArchivePlayer_279750_alt1(__int64 a1, __int64* a2) __asm__(
    "SoundArchivePlayer_279750");
unsigned __int64 SoundArchivePlayer_2799e0(__int64 a1, __int64 a2, int a3);
unsigned __int64 SoundArchivePlayer_279b80(__int64 a1);
__int64
SoundArchivePlayer_279c00_alt1(__int64 a1) __asm__("SoundArchivePlayer_279c00");
__int64 SoundArchivePlayer_279ee0(__int64 a1, __int64 a2, _WORD* a3,
                                  __int64 a4);
__int64 SoundArchivePlayer_27a160(__int64 a1);
__int64 SoundArchivePlayer_27a2a0(__int64 a1, __int64 a2);
__int64 SoundArchivePlayer_27a2c0(__int64 a1, __int64 a2, __int64 a3);
__int64 SoundArchivePlayer_27a360(__int64 result, __int64 a2);
__int64 SoundArchivePlayer_27a400(__int64 a1, _QWORD* a2, unsigned int a3,
                                  __int64 a4, __int64 a5, char a6, __int64 a7,
                                  __int64 a8);
__int64 SoundArchivePlayer_Unknown4(__int64 a1, __int64 a2, __int64 a3);
__int64 SoundArchivePlayer_Unknown3(__int64 a1, __int64 a2);
_QWORD* SoundArchivePlayer_286020(_QWORD* result);
__int64* SoundArchivePlayer_27bd30(__int64* result);
__int64 BaseNx_27e870(__int64*);
__int64 BaseNx_2a0cc0(__int64, char);
__int64 BaseNx_2a0de0(__int64, int);
__int64 BasicSound_2806e0(__int64, int);
__int64 GameRoutine_27bd80(_QWORD*, __int64);
__int64 SequenceSoundRuntime_2922e0(_QWORD*);
__int64 SoundArchivePlayer_27c2e0(__int64 result, unsigned int);
__int64 SoundArchivePlayer_27dbe0(__int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 nn_atk_2ae7a0(_QWORD*);
__int64 nn_atk_detail_29f320(_QWORD*);
__int64 nn_detail_UnexpectedDefaultImpl(_QWORD);
__int64 nn_os_ConvertToTimeSpan(_QWORD);
extern _UNKNOWN* GameData_2135048;
extern _UNKNOWN* GameData_2135050;
void* BaseNx_2a1860();
__int64 SoundArchivePlayer_2798a0(__int64 result);
void* SoundArchivePlayer_27a220();
__int64 SoundArchivePlayer_27ae80(__int64 a1, __int64 a2, int a3, void* a4,
                                  __int64 a5);
__int64 BaseNx_285600(__int64, __int64, __int64);
__int64 BaseNx_285e40(__int64);
__int64 FileStreamImpl_2b3530(__int64);
__int64 FileStreamImpl_Unknown12(__int64, __int64, int);
__int64 FileStreamImpl_Unknown2(__int64);
__int64 FileStreamImpl_Unknown4(_QWORD*, __int64, __int64, __int64);
__int64 FileStreamImpl_Unknown6(__int64, __int64, unsigned int);
__int64 FileStreamImpl_Unknown8(__int64);
__int64 StreamHeaderLoadTask_2967a0(__int64);
__int64 StreamHeaderLoadTask_2968c0(__int64);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 strncat(_QWORD, _QWORD, _QWORD);
bool BaseNx_2853e0(__int64, __int64, __int64);
bool StreamHeaderLoadTask_296720(__int64);
_BYTE* SoundArchivePlayer_279260(__int64 a1, _BYTE* a2, _BYTE* a3,
                                 unsigned __int64 a4);
__int64 SoundArchivePlayer_279410(__int64 a1, _BYTE* a2, unsigned __int64 a3,
                                  unsigned int a4);
__int64
SoundArchivePlayer_27b0d0_alt1(__int64 a1, __int64 a2, unsigned int* a3,
                               __int64 a4,
                               __int64 a5) __asm__("SoundArchivePlayer_27b0d0");
__int64* SoundArchivePlayer_285f20(__int64* result, __int64, __int64);
__int64 BaseNx_278c70(__int64, __int64);
__int64 BaseNx_2832c0(unsigned int*, char);
__int64 BaseNx_2a0c40(__int64);
__int64 FileStreamImpl_Unknown12_alt1(__int64, const char*,
                                      int) __asm__("FileStreamImpl_Unknown12");
__int64 GameHr_27e9a0(__int64, __int64);
__int64 GameHr_2ae9a0(__int64, int);
__int64 SequenceNoteOnCallback_2925c0_alt1(int*, int) __asm__(
    "SequenceNoteOnCallback_2925c0");
__int64 SequenceNoteOnCallback_292660_alt1(__int64, int) __asm__(
    "SequenceNoteOnCallback_292660");
__int64 SequenceNoteOnCallback_292680_alt1(__int64 result) __asm__(
    "SequenceNoteOnCallback_292680");
__int64 SoundArchivePlayer_279410_alt1(
    __int64, const char*, unsigned __int64,
    unsigned int) __asm__("SoundArchivePlayer_279410");
__int64 SoundArchivePlayer_279c80(__int64, __int64, __int64, __int64, __int64,
                                  int, __int64, __int64);
__int64 SoundArchivePlayer_27c340(__int64 result);
__int64 SoundArchivePlayer_27db80();
__int64 SoundArchivePlayer_27db90(__int64, __int64, __int64);
__int64 SoundArchivePlayer_27e460(__int64 result);
__int64 SoundArchivePlayer_27ea60(__int64 result);
__int64 SoundArchivePlayer_29f6a0(__int64 result);
__int64 SoundArchivePlayer_2a5800(__int64 result);
__int64 SoundArchivePlayer_2a5840(__int64 result);
__int64 SoundArchivePlayer_2aea80(__int64 result);
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 nn_atk_detail_29f280(__int64, __int64, __int64, unsigned __int64);
bool GameHr_29f0e0(__int64, __int64, __int64, unsigned __int64);
unsigned __int64 GameHr_29ee90(int);
unsigned __int64 GameHr_29f560(__int64, int);
unsigned __int64 SoundArchivePlayer_27dc10();
__int64 SoundArchivePlayer_279750(__int64 a1, __int64 a2);
unsigned __int64 SoundArchivePlayer_279c00(__int64 a1);
__int64 SoundArchivePlayer_27b0d0(__int64 a1, __int64 a2, unsigned int* a3,
                                  int a4, unsigned int a5);

_BYTE* SoundArchivePlayer_279260(__int64 a1, _BYTE* a2, _BYTE* a3,
                                 unsigned __int64 a4)
{
  _BYTE* v4;
  unsigned __int8* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  bool v11;
  int v12;
  _BYTE* v13;
  char v14;
  int v15;
  __int64 v16;
  __int64 v17;

  if (*a2 == 47) {
    return a2;
  }
  v4 = a3;
  v7 = (unsigned __int8*)(a1 + 24);
  v8 = strlen(a2);
  v9 = strlen(v7);
  if (v9 + v8 >= a4) {
    return nullptr;
  }
  if (v9 + 1 < a4) {
    v10 = v9 + 1;
  }
  else {
    v10 = a4;
  }
  v11 = __OFSUB__(v10, 1);
  v12 = v10 - 1;
  if (v12 < 0 == v11) {
    v13 = v4;
    if (v12 != 0) {
      v13 = v4;
      do {
        v15 = *v7++;
        v14 = v15;
        if (v15 == 0) {
          break;
        }
        *v13++ = v14;
        --v12;
      } while (v12 != 0);
    }
    *v13 = 0;
  }
  v16 = strlen(v4);
  if (a4 > v16 + v8 + 1) {
    v17 = v8 + 1;
  }
  else {
    v17 = a4 + ~v16;
  }
  strncat(v4, a2, v17);
  v4[a4 - 1] = 0;
  return v4;
}

__int64 SoundArchivePlayer_279410(__int64 a1, _BYTE* a2, unsigned __int64 a3,
                                  unsigned int a4)
{
  _BYTE* v5;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  _BOOL4 v14;
  _QWORD* v15;
  unsigned int v16;
  __int64 v17;
  _BYTE* v18;
  _BYTE* v19;
  unsigned __int8* v20;
  __int64 v21;
  __int64 v22;
  int v23;
  bool v24;
  int v25;
  _BYTE* v26;
  char v27;
  int v28;
  __int64 v29;
  __int64 v30;
  struct {
    __int64 v32;
    _BYTE* v33;
  } v32_;
  struct {
    _QWORD v34[3];
    int v35;
  } v34_;

  v5 = *(_BYTE**)(a1 + 16);
  if (v5 != nullptr && v5[8] == 1 &&
      (v9 = (*(__int64 (**)(_BYTE*, _QWORD))(*(_QWORD*)v5 + 24LL))(v5, a4)) !=
          0 &&
      (v10 = v9, *(_BYTE*)((v11 = *(_QWORD*)(a1 + 16)) + 8) == 1) &&
      (v12 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v11 + 40LL))(
           v11, v10)) != 0) {
    if (v12 != 2) {
      return 0;
    }
  }
  else if ((unsigned int)BaseNx_285e40(*(_QWORD*)(a1 + 8)) != 2) {
    return 0;
  }
  v13 = *(_QWORD*)(a1 + 8);
  v34_.v35 = 0;
  __builtin_memset(v34_.v34, 0, sizeof(v34_.v34));
  v14 = BaseNx_2853e0(v13, a4, (__int64)v34_.v34);
  v15 = *(_QWORD**)(a1 + 16);
  if (v15 != nullptr) {
    if (*((_BYTE*)v15 + 8) == 1) {
      if (((v14 |
            (unsigned int)X8CALL_X0(
                _QWORD*, (*(__attribute__((swiftcall)) void (**)(
                             PSEUDO_X8, _QWORD, _QWORD, _QWORD*))(*v15 + 48LL))(
                             (void*)v15, *(_QWORD*)(a1 + 16), a4, v34_.v34))) &
           1) == 0) {
        return 0;
      }
    }
    else if (!v14) {
      return 0;
    }
  }
  else if (!v14) {
    return 0;
  }
  v16 = v34_.v34[0];
  v17 = *(_QWORD*)(a1 + 8);
  v32_.v32 = -1;
  v32_.v33 = nullptr;
  if ((BaseNx_285600(v17, LODWORD(v34_.v34[0]), (__int64)&v32_.v32) & 1) != 0) {
    v18 = *(_BYTE**)(a1 + 16);
    if (v18 != nullptr && v18[8] == 1) {
      (*(void (**)(_BYTE*, _QWORD, __int64*, _QWORD))(*(_QWORD*)v18 + 96LL))(
          v18, v16, &v32_.v32, 0);
    }
    v19 = v32_.v33;
    if (v32_.v33 != nullptr) {
      if (*v32_.v33 == 47) {
        return 1;
      }
      v20 = (unsigned __int8*)(a1 + 24);
      v21 = strlen(v32_.v33);
      v22 = strlen(v20);
      if (v22 + v21 < a3) {
        if (v22 + 1 < a3) {
          v23 = v22 + 1;
        }
        else {
          v23 = a3;
        }
        v24 = __OFSUB__(v23, 1);
        v25 = v23 - 1;
        if (v25 < 0 == v24) {
          v26 = a2;
          if (v25 != 0) {
            v26 = a2;
            do {
              v28 = *v20++;
              v27 = v28;
              if (v28 == 0) {
                break;
              }
              *v26++ = v27;
              --v25;
            } while (v25 != 0);
          }
          *v26 = 0;
        }
        v29 = strlen(a2);
        if (a3 > v29 + v21 + 1) {
          v30 = v21 + 1;
        }
        else {
          v30 = a3 + ~v29;
        }
        strncat(a2, v19, v30);
        a2[a3 - 1] = 0;
        return 1;
      }
    }
  }
  return 0;
}

_QWORD* SoundArchivePlayer_Destructor(_QWORD* a1)
{
  *a1 = GameData_2135040 + 2;
  GameRoutine_29eca0(a1 + 66);
  GameRoutine_27e5c0(a1 + 58);
  GameRoutine_2ae3d0(a1 + 40);
  GameRoutine_291e10(a1 + 10);
  return a1 + 1;
}

__int64 SoundArchivePlayer_279750(__int64 a1, __int64 a2)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    __int64 v16;
    __int64 v17;
    __int64 v18;
    __int64 v19;
    __int64 v20;
  } v16_;

  if ((*(_BYTE*)(a1 + 793) & 1) != 0) {
    return 0;
  }
  if ((SoundArchivePlayer_27db80() & 1) == 0) {
    return 0;
  }
  v7 = *(_QWORD*)(a2 + 16);
  v8 = *(_QWORD*)(a2 + 24);
  if (*(_BYTE*)(a2 + 64) == 1) {
    v9 = *(_QWORD*)a2;
    v16_.v19 = 0;
    v16_.v20 = 0;
    v16_.v17 = 0;
    v16_.v18 = 0;
    v16_.v16 = 0;
    if ((BaseNx_278c70(v9, (__int64)&v16_.v16) & 1) != 0 &&
        (v10 = (GameHr_29ee90(v16_.v17) + 4095) & 0xFFFFFFFFFFFFF000LL) != 0) {
      v11 = v7 + v10;
      v8 -= v10;
      v12 = v10;
      SoundArchivePlayer_27db90(a1 + 752, v7, v10);
      v13 = v11;
      v14 = v12;
      *(_BYTE*)(a1 + 760) = 1;
    }
    else {
      v14 = 0;
      v13 = v7;
    }
  }
  else {
    v13 = *(_QWORD*)(a2 + 16);
    v7 = *(_QWORD*)(a2 + 72);
    v14 = *(_QWORD*)(a2 + 80);
  }
  if ((SoundArchivePlayer_279c80(a1, *(_QWORD*)a2, v13, v8, *(_QWORD*)(a2 + 88),
                                 *(_DWORD*)(a2 + 96), v7, v14) &
       1) == 0) {
    return 0;
  }
  if (!GameHr_29f0e0(a1 + 528, *(_QWORD*)a2, *(_QWORD*)(a2 + 32),
                     *(_QWORD*)(a2 + 40))) {
    return 0;
  }
  SoundArchivePlayer_285f20((__int64*)(a1 + 8), *(_QWORD*)a2,
                            *(_QWORD*)(a2 + 8));
  *(_QWORD*)(a1 + 744) = 0;
  *(_QWORD*)(a1 + 304) = a1 + 8;
  v15 = *(_QWORD*)(a2 + 48);
  if (v15 != 0 &&
      (nn_atk_detail_29f280(a1 + 528, *(_QWORD*)a2, v15, *(_QWORD*)(a2 + 56)) &
       1) == 0) {
    return 0;
  }
  *(_BYTE*)(a1 + 793) = 1;
  return 1;
}

__int64 SoundArchivePlayer_2798a0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  void* v4;
  int v5;

  if (*(_BYTE*)(result + 793) != 1) {
    return result;
  }
  v1 = result;
  if (*(_DWORD*)(result + 64) != 0) {
    v2 = 0;
    v3 = 0;
    do {
      SoundArchivePlayer_27c2e0(*(_QWORD*)(v1 + 72) + v2, 0);
      ++v3;
      v2 += 136;
    } while (v3 < *(unsigned int*)(v1 + 64));
  }
  v4 = BaseNx_2a1860();
  v5 = BaseNx_2a0cc0((__int64)v4, 1);
  BaseNx_2a0de0((__int64)v4, v5);
  *(_QWORD*)(v1 + 736) = 0;
  *(_DWORD*)(v1 + 728) = 0;
  *(_DWORD*)(v1 + 64) = 0;
  *(_QWORD*)(v1 + 72) = 0;
  SoundArchivePlayer_286020((_QWORD*)(v1 + 8));
  SequenceSoundRuntime_2922e0((_QWORD*)(v1 + 80));
  if (*(_BYTE*)(v1 + 794) == 1) {
    BaseNx_27e870((__int64*)(v1 + 464));
    result = nn_atk_detail_29f320((_QWORD*)(v1 + 528));
    if (*(_BYTE*)(v1 + 760) != 1) {
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  nn_atk_2ae7a0((_QWORD*)(v1 + 320));
  result = nn_atk_detail_29f320((_QWORD*)(v1 + 528));
  if (*(_BYTE*)(v1 + 760) == 1) {
  LABEL_9:
    result = SoundArchivePlayer_27dbe0(v1 + 752);
    *(_BYTE*)(v1 + 760) = 0;
  }
LABEL_10:
  if (*(_BYTE*)(v1 + 776) == 1) {
    result = SoundArchivePlayer_27dbe0(v1 + 768);
    *(_BYTE*)(v1 + 776) = 0;
  }
  *(_QWORD*)(v1 + 800) = 0;
  *(_BYTE*)(v1 + 793) = 0;
  return result;
}

unsigned __int64 SoundArchivePlayer_2799e0(__int64 a1, __int64 a2, int a3)
{
  int v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  int i;
  unsigned __int64 v12;
  char v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 result;
  struct {
    unsigned __int64 v18;
    __int64 v19;
    __int64 v20;
    __int64 v21;
    __int64 v22;
  } v18_;
  __int64 v23;

  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v18_.v18 = SoundArchivePlayer_27dc10(),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LODWORD(v18_.v19) = v6;
  WORD2(v18_.v18) = 0;
  v7 = GameRoutine_278650(a1),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v8 = BaseNx_2832c0((unsigned int*)&v18_.v18, 0),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = v8 + 184;
  if (v8 == 0) {
    v9 = 136;
  }
  v10 = (v9 * v7 + 4095) & 0xFFFFFFFFFFFFF000LL;
  if (v7 != 0) {
    for (i = 0; i != v7; ++i) {
      v23 = 0;
      if ((GameRoutine_278be0(a1, (__int64)&v23, i | 0x4000000u) & 1) != 0 &&
          HIDWORD(v23) != 0 && (int)v23 >= 1) {
        v10 += ((HIDWORD(v23) + 4095) & 0xFFFFF000) + 4096LL +
               (((HIDWORD(v23) + 4095) & 0xFFFFF000) + 4096LL) *
                   (unsigned int)(v23 - 1);
      }
    }
  }
  v18_.v21 = 0;
  v18_.v22 = 0;
  v18_.v19 = 0;
  v18_.v20 = 0;
  v18_.v18 = 0;
  if ((BaseNx_278c70(a1, (__int64)&v18_.v18) & 1) != 0) {
    v12 = GameHr_29f560((__int64)&v18_.v18, 64),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v13 = v18_.v22;
    v14 = v12 + SequenceNoteOnCallback_2925c0_alt1((int*)&v18_.v18, 64) + v10,
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v13 & 1) != 0) {
      v15 = GameHr_27e9a0((__int64)&v18_.v18, 64),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      v15 = GameHr_2ae9a0((__int64)&v18_.v18, 64),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v10 =
        v14 + v15 + SequenceNoteOnCallback_292660_alt1((__int64)&v18_.v18, 64),
    v6 = COERCE_AS(__typeof__(v6),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v16 = (112LL * (unsigned int)a3 + 63) & 0x7FFFFFFFC0LL;
  if (a3 <= 0) {
    v16 = 0;
  }
  result = v10 + v16;
  if (a2 != 0) {
    result += ((a2 + 3) & 0xFFFFFFFFFFFFFFFCLL) *
              (unsigned int)(HIDWORD(v18_.v20) + v18_.v18 + v18_.v19);
  }
  return result;
}

unsigned __int64 SoundArchivePlayer_279b80(__int64 a1)
{
  __int64 v1;
  char v2;
  unsigned __int64 result;
  unsigned __int64 v4;
  char v5;
  unsigned __int64 v6;
  struct {
    __int64 v7;
    __int64 v8;
    __int64 v9;
    __int64 v10;
    __int64 v11;
  } v7_;

  v1 = *(_QWORD*)a1;
  v2 = *(_BYTE*)(a1 + 64);
  result = SoundArchivePlayer_2799e0(*(_QWORD*)a1, *(_QWORD*)(a1 + 88),
                                     *(_DWORD*)(a1 + 96));
  if ((v2 & 1) == 0) {
    v4 = result;
    v7_.v10 = 0;
    v7_.v11 = 0;
    v7_.v8 = 0;
    v7_.v9 = 0;
    v7_.v7 = 0;
    v5 = BaseNx_278c70(v1, (__int64)&v7_.v7);
    v6 = 0;
    if ((v5 & 1) != 0) {
      v6 = (GameHr_29ee90(v7_.v8) + 4095) & 0xFFFFFFFFFFFFF000LL;
    }
    return v4 - v6;
  }
  return result;
}

unsigned __int64 SoundArchivePlayer_279c00(__int64 a1)
{
  char v1;
  unsigned __int64 result;
  struct {
    __int64 v3;
    __int64 v4;
    __int64 v5;
    __int64 v6;
    __int64 v7;
  } v3_;

  v3_.v6 = 0;
  v3_.v7 = 0;
  v3_.v4 = 0;
  v3_.v5 = 0;
  v3_.v3 = 0;
  v1 = BaseNx_278c70(a1, (__int64)&v3_.v3);
  result = 0;
  if ((v1 & 1) != 0) {
    return GameHr_29ee90(v3_.v4);
  }
  return result;
}

__int64 SoundArchivePlayer_279ee0(__int64 a1, __int64 a2, _WORD* a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 result;
  int v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  bool v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  _QWORD* v21;
  _QWORD* v22;
  int v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD v32[4];

  if ((*a3 & 0xFFF) != 0) {
    return 0;
  }
  v32[2] = v4;
  v32[3] = v5;
  v32[0] = GameRoutine_27dc10();
  LODWORD(v32[1]) = v11;
  WORD2(v32[0]) = 0;
  v12 = GameRoutine_2832c0(v32, 0);
  v13 = GameRoutine_278650(a2);
  v14 = GameRoutine_2832c0(v32, 0);
  v15 = v14 + 184;
  v16 = v14 == 0;
  v17 = 136;
  v18 = *(_QWORD*)a3;
  result = 0;
  if (!v16) {
    v17 = v15;
  }
  v19 = v18 + ((v17 * v13 + 4095) & 0xFFFFFFFFFFFFF000LL);
  if (v19 - a4 <= 0) {
    v29 = v18 + ((v17 * v13 + 4095) & 0xFFFFFFFFFFFFF000LL);
    *(_QWORD*)a3 = v19;
    *(_QWORD*)(a1 + 72) = v18;
    *(_DWORD*)(a1 + 64) = v13;
    if (v13 == 0) {
    LABEL_24:
      result = 1;
      if (*(_QWORD*)a3 != v29) {
        GameRoutine_27db90(a1 + 768, v29);
        *(_BYTE*)(a1 + 776) = 1;
        return 1;
      }
      return result;
    }
    v20 = 0;
    v30 = v12;
    v28 = a1;
    v21 = (_QWORD*)(v18 + 136LL * v13);
    while (1) {
      if (v12 != 0) {
        v21[4] = 0;
        v21[5] = 0;
        v21[2] = 0;
        v21[3] = 0;
        *v21 = 0;
        v21[1] = 0;
        GameRoutine_283380(v21, v21 + 6, v30, v32, 0);
        v22 = v21;
        v21 = (_QWORD*)((char*)v21 + v30 + 48);
        v12 = v30;
      }
      else {
        v22 = nullptr;
      }
      GameRoutine_27c280(v18, v22);
      v31 = 0;
      if ((GameRoutine_278be0(a2, (__int64)&v31, v20 | 0x4000000u) & 1) != 0) {
        GameRoutine_27c920(v18, (unsigned int)v31);
        if (HIDWORD(v31) != 0) {
          if ((int)v31 >= 1) {
            v23 = 0;
            while (1) {
              v24 = *(_QWORD*)a3;
              if ((*(_QWORD*)a3 & 0xFFFLL) != 0) {
                return 0;
              }
              v25 = (v24 + 4175) & 0xFFFFFFFFFFFFF000LL;
              if ((__int64)(v25 - a4) > 0) {
                return 0;
              }
              v26 = HIDWORD(v31);
              *(_QWORD*)a3 = v25;
              GameRoutine_2840f0(v24);
              v27 = *(_QWORD*)a3 + ((v26 + 4095) & 0x1FFFFF000LL);
              if (v27 - a4 > 0) {
                return 0;
              }
              *(_QWORD*)a3 = v27;
              if ((PlayerHeap_284190(v24) & 1) == 0) {
                return 0;
              }
              GameRoutine_27ca80(v18, v24);
              if (++v23 >= (int)v31) {
                a1 = v28;
                v12 = v30;
                break;
              }
            }
          }
          GameRoutine_27c9c0(v18);
        }
      }
      ++v20;
      v18 += 136;
      if (v20 == v13) {
        goto LABEL_24;
      }
    }
  }
  return result;
}

__int64 SoundArchivePlayer_27a160(__int64 a1)
{
  void* v2;
  void* v3;
  unsigned int v4;
  void* v5;

  v2 = SoundArchivePlayer_27a220();
  SoundArchivePlayer_2a5800((__int64)v2);
  if (*(_BYTE*)(a1 + 792) == 1) {
    v3 = SoundArchivePlayer_27a220();
    SoundArchivePlayer_2a5840((__int64)v3);
  }
  if (*(_DWORD*)(a1 + 64) != 0) {
    v4 = 0;
    do {
      SoundArchivePlayer_27c340(*(_QWORD*)(a1 + 72) +
                                136LL * (v4++ & 0xFFFFFF));
    } while (v4 < *(_DWORD*)(a1 + 64));
  }
  SequenceNoteOnCallback_292680_alt1(a1 + 80);
  if ((*(_BYTE*)(a1 + 794) & 1) != 0) {
    SoundArchivePlayer_27ea60(a1 + 464);
  }
  else {
    SoundArchivePlayer_2aea80(a1 + 320);
  }
  SoundArchivePlayer_29f6a0(a1 + 528);
  v5 = BaseNx_2a1860();
  BaseNx_2a0c40((__int64)v5);
  return BaseNx_2a0cc0((__int64)v5, 0);
}

void* SoundArchivePlayer_27a220()
{
  void* v1;

  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2135048,
                            memory_order_acquire) &
       1) != 0) {
    return GameData_2135050;
  }
  if ((unsigned int)__cxa_guard_acquire(GameData_2135048) != 0) {
    v1 = GameData_2135050;
    *(_DWORD*)((char*)((_UNKNOWN*)0x300LL) + (_QWORD)GameData_2135050) = 0;
    *(_DWORD*)((char*)((_UNKNOWN*)0x604LL) + (_QWORD)v1) = 0;
    *(_QWORD*)((char*)((_UNKNOWN*)0x608LL) + (_QWORD)v1) = v1;
    __cxa_guard_release(GameData_2135048);
  }
  return GameData_2135050;
}

__int64 SoundArchivePlayer_27a2a0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v2 = a1 + 8;
  if (a2 == 0) {
    return 0;
  }
  v3 = *(_QWORD*)(v2 + 24);
  v4 = v2 + 16;
  if (v3 == v2 + 16) {
    return 0;
  }
  while ((GameRoutine_27e480(v3, a2) & 1) == 0) {
    v3 = *(_QWORD*)(v3 + 8);
    if (v3 == v4) {
      return 0;
    }
  }
  return *(_QWORD*)(v3 + 24);
}

__int64 SoundArchivePlayer_27a2c0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v6;
  __int64 v7;
  __int64 result;
  __int64 SystemTickEv;

  v3 = *(unsigned int*)(a1 + 728);
  if ((int)v3 < 1) {
  LABEL_5:
    v6 = 0;
  }
  else {
    v6 = *(_QWORD*)(a1 + 736);
    while ((*(_BYTE*)(v6 + 16) & 1) != 0) {
      v6 += 112;
      if (--v3 == 0) {
        goto LABEL_5;
      }
    }
  }
  GameRoutine_27e2b0(v6, a2, a3);
  *(_QWORD*)(a3 + 16) = GameRoutine_286200(a1 + 8);
  v7 = GameRoutine_286080(a1 + 8, v6);
  SystemTickEv = nn_os_GetSystemTick(v7);
  result = GameRoutine_27e590(v6, &SystemTickEv);
  *(_QWORD*)(a1 + 744) = SystemTickEv;
  return result;
}

__int64 SoundArchivePlayer_27a360(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 i;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;

  v2 = *(unsigned int*)(result + 728);
  if ((int)v2 >= 1) {
    for (i = *(_QWORD*)(result + 736);
         *(_BYTE*)(i + 16) != 1 || *(_QWORD*)(i + 24) != a2; i += 112) {
      if (--v2 == 0) {
        return result;
      }
    }
    *(_QWORD*)(a2 + 16) = 0;
    v4 = result;
    SoundArchivePlayer_27e460(i);
    result = v4 + 8;
    v5 = (__int64*)(v4 + 24);
    while (1) {
      v5 = (__int64*)v5[1];
      if (v5 == (__int64*)(v4 + 24)) {
        break;
      }
      if (v5 == (__int64*)i) {
        v6 = (__int64*)v5[1];
        v7 = *v6;
        *(_QWORD*)(*v5 + 8) = v6;
        *v6 = *v5;
        *(_QWORD*)(v7 + 8) = v5;
        *v5 = v7;
        return result;
      }
    }
  }
  return result;
}

__int64 SoundArchivePlayer_27a400(__int64 a1, _QWORD* a2, unsigned int a3,
                                  __int64 a4, __int64 a5, char a6, __int64 a7,
                                  __int64 a8)
{
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  _BYTE* v20;
  _BYTE* v21;
  _BYTE* v22;
  __int64 result;
  unsigned int v24;
  char v25;
  int v26;
  _BYTE* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned int v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  unsigned int v38;
  int v39;
  unsigned int v40;
  unsigned int v41;
  __int64 v42;
  _BYTE* v43;
  __int64 v44;
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  _QWORD* v48;
  _QWORD* v49;
  _QWORD* v50;
  _BYTE* v51;
  _BYTE* v52;
  _BYTE* v53;
  _BYTE* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned int v59;
  _QWORD* v60;
  __int64 v61;
  _BYTE* v62;
  unsigned int v63;
  unsigned int v64;
  _BYTE* v65;
  _BYTE* v66;
  __int64 v67;
  unsigned int v68;
  __int64 v69;
  unsigned int v70;
  unsigned __int64 v71;
  __int64 v72;
  _QWORD* v73;
  unsigned int v74;
  unsigned int v75;
  int v76;
  char v77;
  __int64 SystemTickEv;
  _QWORD v80[2];
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  int v96;
  _QWORD v97[5];

  GameRoutine_285f80(a1 + 8, a7);
  v16 = *(_QWORD*)(a1 + 8);
  v15 = *(_QWORD*)(a1 + 16);
  v17 = *(_QWORD**)(a1 + 40);
  v18 = *(_QWORD*)(a1 + 48);
  v97[0] = v16;
  v97[1] = v15;
  v97[2] = v17;
  v97[3] = v18;
  if ((GameRoutine_2860e0(a1 + 8) & 1) == 0) {
    return 12;
  }
  v77 = a6;
  if (*a2 != 0) {
    GameRoutine_27bd30(a2);
  }
  v19 = GameRoutine_278690((__int64)v17);
  v20 = *(_BYTE**)(a1 + 784);
  if (v20 != nullptr && v19 != 0 && (v20[8] & 1) != 0) {
    (*(void (**)(_BYTE*))(*(_QWORD*)v20 + 24LL))(v20);
    v21 = *(_BYTE**)(a1 + 784);
    if (v21[8] != 1 ||
        ((*(__int64 (**)(_BYTE*, __int64))(*(_QWORD*)v21 + 16LL))(v21, v19) &
         1) == 0) {
      *(_BYTE*)(v17[2] + 8LL) = 0;
      *(_BYTE*)(*(_QWORD*)(a1 + 784) + 8LL) = 0;
      v24 = (unsigned int)GameRoutine_278890((__int64)v17);
      v96 = 0;
      v94 = 0;
      v95 = 0;
      v93 = 0;
      if ((GameRoutine_278920((__int64)v17, (__int64)&v93, a3) & 1) == 0) {
        goto LABEL_92;
      }
      goto LABEL_19;
    }
    v22 = (_BYTE*)v17[2];
    if (v22[8] == 1) {
      v74 = (*(__int64 (**)(_BYTE*, __int64))(*(_QWORD*)v22 + 40LL))(v22, v19);
    }
    else {
      v74 = 0;
    }
    if (a7 != 0) {
      v52 = (_BYTE*)v17[2];
      if (v52[8] == 1) {
        a3 = (*(__int64 (**)(_BYTE*, __int64))(*(_QWORD*)v52 + 32LL))(v52, v19);
      }
      else {
        a3 = -1;
      }
    }
    v24 = v74;
    if (v74 != 3) {
      if (v74 != 1) {
        goto LABEL_14;
      }
      v53 = *(_BYTE**)(a1 + 784);
      if (v53[8] == 1 &&
          (*(__int64 (**)(_BYTE*, __int64, void*, char*, _QWORD))(
              *(_QWORD*)v53 + 48LL))(v53, v19, GameData_2135058,
                                     GameData_2135060, 0) != 0) {
        v24 = 1;
        goto LABEL_14;
      }
    LABEL_91:
      v55 = v17[2];
      v93 = 0;
      *(_BYTE*)(v55 + 8) = 0;
      *(_BYTE*)(*(_QWORD*)(a1 + 784) + 8LL) = 0;
      v96 = 0;
      v94 = 0;
      v95 = 0;
      if ((GameRoutine_278920((__int64)v17, (__int64)&v93, a3) & 1) == 0) {
      LABEL_92:
        *(_BYTE*)(v17[2] + 8LL) = 1;
        *(_BYTE*)(*(_QWORD*)(a1 + 784) + 8LL) = 1;
        v27 = *(_BYTE**)(a1 + 784);
        if (v27 == nullptr) {
          return 3;
        }
      LABEL_93:
        if (v27[8] == 1) {
          (*(void (**)(_BYTE*))(*(_QWORD*)v27 + 32LL))(v27);
        }
        return 3;
      }
    LABEL_19:
      v26 = 1;
      goto LABEL_20;
    }
    v54 = *(_BYTE**)(a1 + 784);
    if (v54[8] != 1 || (*(__int64 (**)(_BYTE*, __int64, void*, char*, _QWORD))(
                           *(_QWORD*)v54 + 48LL))(v54, v19, GameData_2135068,
                                                  GameData_2135070, 0) == 0) {
      goto LABEL_91;
    }
    v24 = 3;
  }
  else {
    if (a3 == -1) {
      return 2;
    }
    v24 = (unsigned int)GameRoutine_278890((__int64)v17);
  }

LABEL_14:
  v96 = 0;
  v94 = 0;
  v95 = 0;
  v93 = 0;
  v25 = GameRoutine_278920((__int64)v17, (__int64)&v93, a3);
  v26 = 0;
  if ((v25 & 1) == 0) {
    goto LABEL_15;
  }

LABEL_20:
  v75 = v24;
  v76 = v26;
  v91 = 0;
  v92 = 0;
  v89 = 0;
  v90 = 0;
  v87 = 0;
  v88 = 0;
  v85 = 0;
  v86 = 0;
  v83 = 0;
  v84 = 0;
  v81 = 0;
  v82 = 0;
  v80[0] = 0;
  v80[1] = 0;
  GameRoutine_288380(v80, &v93);
  v28 = GameRoutine_2883d0(v80, a8);
  v29 = *(_QWORD*)(a1 + 800);
  v31 = SoundVoiceNX_14e360(v28, v30);
  if (*(_BYTE*)(v31 + 1697) == 1) {
    if ((v89 & 0x80000000) != 0) {
      v32 = v91;
      v71 = v91 & 0xFFFFFFFF00000000LL;
      v72 = v90;
      v33 = v82;
      v34 = *(_QWORD*)(a1 + 784);
      if (v34 == 0) {
        goto LABEL_34;
      }
    }
    else {
      v31 = GameRoutine_28b3a0();
      v71 = 0;
      v72 = v31;
      v32 = 1;
      v33 = v82;
      v34 = *(_QWORD*)(a1 + 784);
      if (v34 == 0) {
        goto LABEL_34;
      }
    }
  LABEL_33:
    if ((*(_BYTE*)(v34 + 8) & 1) != 0) {
      goto LABEL_36;
    }
    goto LABEL_34;
  }
  v32 = v91;
  if ((_DWORD)v91 == 1 && v90 == 0) {
    v35 = v31 + 1384;
    v32 = 1;
    if (v29 != 0) {
      v35 = v29;
    }
    v71 = 0;
    v72 = v35;
    v33 = v82;
    v34 = *(_QWORD*)(a1 + 784);
    if (v34 == 0) {
      goto LABEL_34;
    }
    goto LABEL_33;
  }
  v72 = v90;
  v71 = v91 & 0xFFFFFFFF00000000LL;
  v33 = v82;
  v34 = *(_QWORD*)(a1 + 784);
  if (v34 != 0) {
    goto LABEL_33;
  }

LABEL_34:
  v31 = (*(__int64 (**)(_QWORD*))(*v17 + 48LL))(v17);
  if ((v31 & 1) != 0) {
    v36 = GameRoutine_278690((__int64)v17);
    v31 = GameRoutine_278700(v16, v36);
    v33 = v31;
  }

LABEL_36:
  if (HIDWORD(v95) != 0) {
    result = GameRoutine_27ae80(v31, &v93, a3, v17,
                                *(_QWORD*)(a1 + 72) + 136LL * (v33 & 0xFFFFFF));
    if ((_DWORD)result != 0) {
      goto LABEL_38;
    }
  }
  v39 = HIDWORD(v81) - (v77 & 1);
  if (a4 != 0) {
    v40 = BasicSound_282840(a4, a3);
  }
  else {
    v40 = 0;
  }
  v70 = v39;
  if ((int)((v40 + v39) & ~((int)(v40 + v39) >> 31)) >= 127) {
    v41 = 127;
  }
  else {
    v41 = (v40 + v39) & ~((int)(v40 + v39) >> 31);
  }
  if (a5 != 0) {
    if (HIDWORD(v82) > 3 ||
        (v42 = *(_QWORD*)(a5 + 8LL * HIDWORD(v82) + 144)) == 0) {
      if (v76 != 0) {
        *(_BYTE*)(v17[2] + 8LL) = 1;
        *(_BYTE*)(*(_QWORD*)(a1 + 784) + 8LL) = 1;
      }
      v43 = *(_BYTE**)(a1 + 784);
      if (v43 == nullptr || v43[8] != 1) {
        return 15;
      }
    LABEL_71:
      (*(void (**)(_BYTE*))(*(_QWORD*)v43 + 32LL))(v43);
      return 15;
    }
  }
  else {
    v42 = 0;
  }
  if (v33 == -1) {
    if (v76 != 0) {
      *(_BYTE*)(v17[2] + 8LL) = 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 784) + 8LL) = 1;
    }
    v43 = *(_BYTE**)(a1 + 784);
    if (v43 == nullptr || v43[8] != 1) {
      return 15;
    }
    goto LABEL_71;
  }
  v69 = v42;
  v68 = v40;
  v44 = *(_QWORD*)(a1 + 72) + 136LL * (v33 & 0xFFFFFF);
  if ((GameRoutine_27c9e0(v44, v41) & 1) == 0) {
    if (v76 != 0) {
      *(_BYTE*)(v17[2] + 8LL) = 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 784) + 8LL) = 1;
    }
    v51 = *(_BYTE**)(a1 + 784);
    if (v51 != nullptr && v51[8] == 1) {
      goto LABEL_101;
    }
    return 1;
  }
  if (v69 != 0 &&
      ((*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v69 + 16LL))(v69, v41) &
       1) == 0) {
    if (v76 != 0) {
      *(_BYTE*)(v17[2] + 8LL) = 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 784) + 8LL) = 1;
    }
    v51 = *(_BYTE**)(a1 + 784);
    if (v51 != nullptr && v51[8] == 1) {
    LABEL_101:
      (*(void (**)(_BYTE*))(*(_QWORD*)v51 + 32LL))(v51);
      return 1;
    }
    return 1;
  }
  if (v75 != 3) {
    if (v75 != 2) {
      if (v75 != 1) {
        if (v76 != 0) {
          *(_BYTE*)(v17[2] + 8LL) = 1;
          *(_BYTE*)(*(_QWORD*)(a1 + 784) + 8LL) = 1;
        }
      LABEL_15:
        v27 = *(_BYTE**)(a1 + 784);
        if (v27 == nullptr) {
          return 3;
        }
        goto LABEL_93;
      }
      v45 = SequenceNoteOnCallback_292900(a1 + 80, a3, v70, v68, a4, v72,
                                          v71 | v32);
      if (v45 != 0) {
        v46 = (_QWORD*)v45;
        v47 = v44;
        v48 = nullptr;
        v73 = nullptr;
        v49 = nullptr;
        v50 = v46;
        goto LABEL_112;
      }
      GameRoutine_2890a0(1);
      if (v76 != 0) {
        *(_BYTE*)(v17[2] + 8LL) = 1;
        *(_BYTE*)(*(_QWORD*)(a1 + 784) + 8LL) = 1;
      }
    LABEL_132:
      v62 = *(_BYTE**)(a1 + 784);
      if (v62 == nullptr || v62[8] != 1) {
        return 14;
      }
      (*(void (**)(_BYTE*))(*(_QWORD*)v62 + 32LL))(v62);
      return 14;
    }
    v56 = GameRoutine_29f920(a1 + 528, a3, v70, v68, a4, v72, v71 | v32);
    if (v56 != 0) {
      v46 = (_QWORD*)v56;
      v47 = v44;
      v50 = nullptr;
      v73 = nullptr;
      v49 = nullptr;
      v48 = v46;
      goto LABEL_112;
    }
    GameRoutine_2890a0(2);
    if (v76 == 0) {
      goto LABEL_132;
    }
  LABEL_129:
    *(_BYTE*)(v17[2] + 8LL) = 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 784) + 8LL) = 1;
    goto LABEL_132;
  }
  if (*(_BYTE*)(a1 + 794) == 1) {
    v57 = GameRoutine_27ece0(a1 + 464, a3, v70, v68, a4, v72, v71 | v32);
    if (v57 != 0) {
      v46 = (_QWORD*)v57;
      v47 = v44;
      v50 = nullptr;
      v48 = nullptr;
      v73 = nullptr;
      v49 = v46;
      goto LABEL_112;
    }
  LABEL_128:
    GameRoutine_2890a0(3);
    if (v76 == 0) {
      goto LABEL_132;
    }
    goto LABEL_129;
  }
  v58 = GameRoutine_2aed00(a1 + 320, a3, v70, v68, a4, v72, v71 | v32);
  if (v58 == 0) {
    goto LABEL_128;
  }
  v46 = (_QWORD*)v58;
  v47 = v44;
  v50 = nullptr;
  v48 = nullptr;
  v49 = nullptr;
  v73 = v46;

LABEL_112:
  if ((GameRoutine_27c6a0(v47, v46) & 1) == 0) {
    (*(void (**)(_QWORD*))(*v46 + 32LL))(v46);
    if (v76 != 0) {
      *(_BYTE*)(v17[2] + 8LL) = 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 784) + 8LL) = 1;
    }
    v60 = *(_QWORD**)(a1 + 784);
    if (v60 == nullptr || *((_BYTE*)v60 + 8) != 1) {
      return 255;
    }
    v61 = *v60;
    goto LABEL_162;
  }
  if (a8 != 0 && (*(_BYTE*)(a8 + 1) & 2) != 0) {
    v46[61] = *(_QWORD*)(a8 + 328);
  }
  BasicSound_282410(v46);
  if (v75 != 3) {
    if (v75 != 2) {
      v63 = GameRoutine_292970(a1 + 80, v97, a3, v50, &v93, v80);
      if (v63 == 0) {
        goto LABEL_148;
      }
      v64 = v63;
      (*(void (**)(_QWORD*))(*v50 + 32LL))(v50);
      if (v76 != 0) {
        goto LABEL_144;
      }
      goto LABEL_145;
    }
    v59 = GameRoutine_29f990(a1 + 528, v17, v18, a3, v48, &v93, v80);
    if (v59 == 0) {
      goto LABEL_148;
    }
  LABEL_143:
    v64 = v59;
    (*(void (**)(_QWORD*))(*v48 + 32LL))(v48);
    if (v76 != 0) {
    LABEL_144:
      *(_BYTE*)(v17[2] + 8LL) = 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 784) + 8LL) = 1;
    }
  LABEL_145:
    v65 = *(_BYTE**)(a1 + 784);
    if (v65 == nullptr || v65[8] != 1) {
      return v64;
    }
    (*(void (**)(_BYTE*))(*(_QWORD*)v65 + 32LL))(v65);
    return v64;
  }
  if (*(_BYTE*)(a1 + 794) != 1) {
    v48 = v73;
    v59 = GameRoutine_2aed70(a1 + 320, v17, v18, a3, v73, &v93, v80);
    if (v59 == 0) {
      goto LABEL_148;
    }
    goto LABEL_143;
  }
  result = GameRoutine_27ed50(a1 + 464, v17, v18, a3, v49, &v93, v80);
  if ((_DWORD)result != 0) {
  LABEL_38:
    if (v76 != 0) {
      *(_BYTE*)(v17[2] + 8LL) = 1;
      *(_BYTE*)(*(_QWORD*)(a1 + 784) + 8LL) = 1;
    }
    v37 = *(_QWORD**)(a1 + 784);
    if (v37 != nullptr && *((_BYTE*)v37 + 8) == 1) {
      v38 = result;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
          *v37 + 32LL))((void*)v37, v37);
      return v38;
    }
    return result;
  }

LABEL_148:
  if (v76 != 0) {
    *(_BYTE*)(v17[2] + 8LL) = 1;
    *(_BYTE*)(*(_QWORD*)(a1 + 784) + 8LL) = 1;
  }
  v66 = *(_BYTE**)(a1 + 784);
  if (v66 != nullptr && v66[8] == 1) {
    v66 = (_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v66 + 32LL))(v66);
  }
  GameRoutine_27b070(v66, v46, &v93);
  if (v69 != 0 && (ExternalSoundPlayer_282cc0(v69, v46) & 1) == 0) {
    v61 = *v46;
    v60 = v46;
  LABEL_162:
    (*(void (**)(_QWORD*))(v61 + 32))(v60);
    return 255;
  }
  if (a5 != 0) {
    GameRoutine_281e50(v46);
  }
  if ((v77 & 1) != 0) {
    BasicSound_2807c0(v46, HIDWORD(v81));
  }
  v67 = GameRoutine_282880(v46, v17);
  SystemTickEv = nn_os_GetSystemTick(v67);
  BasicSound_282870(v46, &SystemTickEv);
  GameRoutine_27bdc0(a2, v46);
  return 0;
}

__int64 SoundArchivePlayer_27ae80(__int64 a1, __int64 a2, int a3, void* a4,
                                  __int64 a5)
{
  __int64 SystemTickEv;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  SystemTickEv = nn_os_GetSystemTick(a1);
  v11 = *(_DWORD*)(a2 + 20);
  v12 = SystemTickEv;
  if (v11 <= 1) {
    if (v11 == 0) {
      return 0;
    }
    if (v11 != 1) {
    LABEL_35:
      nn_detail_UnexpectedDefaultImpl(SystemTickEv);
      __udf(0);
    }
    v13 = 31536000000000000LL;
  }
  else {
    v13 = 1000000LL * *(unsigned __int16*)(a2 + 24);
    if (v11 != 2) {
      if (v11 == 3) {
        v13 = 31536000000000000LL;
      }
      else if (v11 != 4) {
        goto LABEL_35;
      }
      v19 = *(_QWORD*)(a5 + 8);
      while (1) {
        if (v19 == a5) {
          return 0;
        }
        v20 = v19 - 496;
        v19 = *(_QWORD*)(v19 + 8);
        v21 = 0;
        GameRoutine_27bd80(&v21, v20);
        if (v21 != 0) {
          if (*(_DWORD*)((char*)((_UNKNOWN*)0x118LL) + v21) != a3) {
            goto LABEL_24;
          }
        }
        else if (a3 != -1) {
          goto LABEL_24;
        }
        if (*(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + v21) == a4 &&
            nn_os_ConvertToTimeSpan(
                v12 - *(_QWORD*)((char*)((_UNKNOWN*)0x120LL) + v21)) < v13 &&
            v21 != 0) {
          BasicSound_2806e0(v21, 0);
        }
      LABEL_24:
        SoundArchivePlayer_27bd30(&v21);
      }
    }
  }
  v14 = *(_QWORD*)(a5 + 8);
  if (v14 == a5) {
    return 0;
  }
  v15 = 0;
  v16 = 0;
  do {
    while (1) {
      v17 = v14 - 496;
      v14 = *(_QWORD*)(v14 + 8);
      v21 = 0;
      GameRoutine_27bd80(&v21, v17);
      if (v21 != 0) {
        if (*(_DWORD*)((char*)((_UNKNOWN*)0x118LL) + v21) != a3) {
          break;
        }
      }
      else if (a3 != -1) {
        break;
      }
      if (*(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + v21) != a4) {
        break;
      }
      v16 = *(_QWORD*)((char*)((_UNKNOWN*)0x120LL) + v21);
      SoundArchivePlayer_27bd30(&v21);
      v15 = 1;
      if (v14 == a5) {
        goto LABEL_20;
      }
    }
    SoundArchivePlayer_27bd30(&v21);
  } while (v14 != a5);
  if ((v15 & 1) == 0) {
    return 0;
  }
LABEL_20:
  if (nn_os_ConvertToTimeSpan(v12 - v16) < v13) {
    return 4;
  }
  return 0;
}

__int64 SoundArchivePlayer_27b0d0(__int64 a1, __int64 a2, unsigned int* a3,
                                  int a4, unsigned int a5)
{
  void* v7;
  unsigned __int64 v8;
  void* v9;
  __int64 v11;
  unsigned __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  unsigned int v25;
  __int64 v26;
  __int64 v27;
  _BYTE* v28;
  __int64 v29;
  unsigned __int8* v30;
  __int64 v31;
  int v32;
  __int64 v33;
  int v34;
  __int64 v35;
  int v36;
  __int64 v37;
  int v38;
  __int64 v39;
  int v40;
  __int64 v41;
  int v42;
  __int64 v43;
  int v44;
  __int64 v45;
  int v46;
  __int64 v47;
  int v48;
  __int64 v49;
  int v50;
  int v51;
  __int64 v52;
  _QWORD v54[9];
  int v55;
  _QWORD v56[10];
  _QWORD v57[16];
  __int64 v58[98];

  v7 = *(void**)(a1 + 8);
  v8 = *(unsigned int*)(a1 + 64);
  v9 = v7;
  LODWORD(v11) = a4;
  if ((_DWORD)v8 == 0) {
    goto LABEL_15;
  }
  v14 = 0;
  v15 = 0;
  do {
    v16 = *(_QWORD*)(a1 + 72) + 136 * v14;
    v17 = *(_QWORD*)(v16 + 8);
    if (v17 != v16) {
      while (1) {
        v18 = *(_QWORD*)(v17 + 8);
        v58[0] = 0;
        GameRoutine_27bd80(v58, v17 - 496);
        if (v58[0] != 0) {
          if (*(_DWORD*)((char*)((_UNKNOWN*)0x114LL) + v58[0] + 4) == a5) {
            goto LABEL_12;
          }
        }
        else if (a5 == -1) {
        LABEL_12:
          v15 |= *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + v58[0]) == v9;
        }
        SoundArchivePlayer_27bd30(v58);
        v17 = v18;
        if (v18 == v16) {
          v8 = *(unsigned int*)(a1 + 64);
          break;
        }
      }
    }
    ++v14;
  } while (v14 < v8);
  if ((v15 & 1) != 0) {
    return 53969;
  }
LABEL_15:
  memset_alt1((__int64)v58, 0, 0x301u);
  if ((SoundArchivePlayer_279410_alt1((__int64)v9, (const char*)v58, 0x301u,
                                      a5) &
       1) == 0) {
    return 54481;
  }
  __builtin_memset(v57, 0, sizeof(v57));
  FileStreamImpl_2b3530((__int64)v57);
  if ((FileStreamImpl_Unknown12_alt1((__int64)v57, (const char*)v58, 1) &
       0x80000000) != 0) {
    goto LABEL_18;
  }
  v20 = FileStreamImpl_Unknown8((__int64)v57);
  __builtin_memset(v56, 0, sizeof(v56));
  if (v20 <= 0x4F) {
    goto LABEL_18;
  }
  v21 = v20;
  FileStreamImpl_Unknown4(v57, (__int64)v56, 80, 0);
  if (StreamHeaderLoadTask_296720((__int64)v56)) {
    v22 = (unsigned int)StreamHeaderLoadTask_2968c0((__int64)v56) + 8;
    v23 = v22 + 4;
    if (v21 < v22 + 4) {
    LABEL_18:
      FileStreamImpl_Unknown2((__int64)v57);
      return 55505;
    }
    FileStreamImpl_Unknown6((__int64)v57, v22, 0);
    v55 = 0;
    FileStreamImpl_Unknown4(v57, (__int64)&v55, 4, 0);
    v24 = (unsigned int)StreamHeaderLoadTask_2967a0((__int64)v56) / 0x48;
    *a3 = v24;
    if ((int)v24 >= (int)v11) {
      v11 = (unsigned int)v11;
    }
    else {
      v11 = v24;
    }
    if (v21 >= v23 + 72LL * (int)v11) {
      if ((int)v11 >= 1) {
        v26 = 0;
        v27 = a2;
        do {
          __builtin_memset(v54, 0, sizeof(v54));
          FileStreamImpl_Unknown4(v57, (__int64)v54, 72, 0);
          v29 = 0;
          *(_DWORD*)(a2 + 68 * v26) = v54[0];
          while (1) {
            v30 = (unsigned __int8*)&v54[1] + v29;
            v31 = v27 + v29;
            if (*((_BYTE*)&v54[1] + v29) == 0) {
              v28 = (_BYTE*)(v31 + 4);
              goto LABEL_31;
            }
            v32 = v30[1];
            *(_BYTE*)(v31 + 4) = *((_BYTE*)&v54[1] + v29);
            if (v32 == 0) {
              v28 = (_BYTE*)(v27 + v29 + 5);
              goto LABEL_31;
            }
            *(_BYTE*)(v31 + 5) = v32;
            v33 = v27 + v29;
            if (v30[2] == 0) {
              v28 = (_BYTE*)(v33 + 6);
              goto LABEL_31;
            }
            v34 = v30[3];
            *(_BYTE*)(v33 + 6) = v30[2];
            if (v34 == 0) {
              v28 = (_BYTE*)(v27 + v29 + 7);
              goto LABEL_31;
            }
            *(_BYTE*)(v33 + 7) = v34;
            v35 = v27 + v29;
            if (v30[4] == 0) {
              v28 = (_BYTE*)(v35 + 8);
              goto LABEL_31;
            }
            v36 = v30[5];
            *(_BYTE*)(v35 + 8) = v30[4];
            if (v36 == 0) {
              v28 = (_BYTE*)(v27 + v29 + 9);
              goto LABEL_31;
            }
            *(_BYTE*)(v35 + 9) = v36;
            v37 = v27 + v29;
            if (v30[6] == 0) {
              v28 = (_BYTE*)(v37 + 10);
              goto LABEL_31;
            }
            v38 = v30[7];
            *(_BYTE*)(v37 + 10) = v30[6];
            if (v38 == 0) {
              v28 = (_BYTE*)(v27 + v29 + 11);
              goto LABEL_31;
            }
            *(_BYTE*)(v37 + 11) = v38;
            v39 = v27 + v29;
            if (v30[8] == 0) {
              v28 = (_BYTE*)(v39 + 12);
              goto LABEL_31;
            }
            v40 = v30[9];
            *(_BYTE*)(v39 + 12) = v30[8];
            if (v40 == 0) {
              v28 = (_BYTE*)(v27 + v29 + 13);
              goto LABEL_31;
            }
            *(_BYTE*)(v39 + 13) = v40;
            v41 = v27 + v29;
            if (v30[10] == 0) {
              v28 = (_BYTE*)(v41 + 14);
              goto LABEL_31;
            }
            v42 = v30[11];
            *(_BYTE*)(v41 + 14) = v30[10];
            if (v42 == 0) {
              v28 = (_BYTE*)(v27 + v29 + 15);
              goto LABEL_31;
            }
            *(_BYTE*)(v41 + 15) = v42;
            v43 = v27 + v29;
            if (v30[12] == 0) {
              v28 = (_BYTE*)(v43 + 16);
              goto LABEL_31;
            }
            v44 = v30[13];
            *(_BYTE*)(v43 + 16) = v30[12];
            if (v44 == 0) {
              v28 = (_BYTE*)(v27 + v29 + 17);
              goto LABEL_31;
            }
            *(_BYTE*)(v43 + 17) = v44;
            v45 = v27 + v29;
            if (v30[14] == 0) {
              v28 = (_BYTE*)(v45 + 18);
              goto LABEL_31;
            }
            v46 = v30[15];
            *(_BYTE*)(v45 + 18) = v30[14];
            if (v46 == 0) {
              v28 = (_BYTE*)(v27 + v29 + 19);
              goto LABEL_31;
            }
            *(_BYTE*)(v45 + 19) = v46;
            v47 = v27 + v29;
            if (v30[16] == 0) {
              v28 = (_BYTE*)(v47 + 20);
              goto LABEL_31;
            }
            v48 = v30[17];
            *(_BYTE*)(v47 + 20) = v30[16];
            if (v48 == 0) {
              v28 = (_BYTE*)(v27 + v29 + 21);
              goto LABEL_31;
            }
            *(_BYTE*)(v47 + 21) = v48;
            v49 = v27 + v29;
            if (v30[18] == 0) {
              v28 = (_BYTE*)(v49 + 22);
              goto LABEL_31;
            }
            v50 = v30[19];
            *(_BYTE*)(v49 + 22) = v30[18];
            if (v50 == 0) {
              v28 = (_BYTE*)(v27 + v29 + 23);
              goto LABEL_31;
            }
            v51 = v30[20];
            v52 = v27 + v29;
            *(_BYTE*)(v49 + 23) = v50;
            if (v51 == 0) {
              break;
            }
            v29 += 21;
            *(_BYTE*)(v52 + 24) = v51;
            if ((_DWORD)v29 == 63) {
              v28 = (_BYTE*)(v27 + v29 + 4);
              goto LABEL_31;
            }
          }
          v28 = (_BYTE*)(v52 + 24);
        LABEL_31:
          ++v26;
          v27 += 68;
          *v28 = 0;
        } while (v26 != v11);
      }
      v25 = 0;
    }
    else {
      v25 = 55505;
    }
    FileStreamImpl_Unknown2((__int64)v57);
    return v25;
  }
  else {
    FileStreamImpl_Unknown2((__int64)v57);
    return 52945;
  }
}

__int64 SoundArchivePlayer_Unknown3(__int64 a1, __int64 a2)
{
  return (*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)a1 + 32LL))(
      a1, a2, 0);
}

__int64 SoundArchivePlayer_Unknown4(__int64 a1, __int64 a2, __int64 a3)
{
  GameRoutine_285f80(a1 + 8, a3);
  return GameRoutine_278700(*(_QWORD*)(a1 + 40), a2);
}

#pragma GCC visibility pop
