#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_FinalizeEvent(_QWORD);
extern __int64 (*nn_atk_detail_driver_BasicSoundPlayer_vtable)();
__int64 BasicSoundPlayer_Unknown2(__int64 result, __int64 a2, __int64 a3);
__int64 BasicSoundPlayer_Destructor(_QWORD* a1);
__int64 BasicSoundPlayer_282aa0(__int64 result, char a2, float a3);
__int64 GameRoutine_28b4e0(__int64, __int64);
__int64 nn_os_SignalEvent(_QWORD);
void* SoundVoiceNX_14e360();
void __attribute__((noreturn)) GameRoutine_1196920();
__int64 BasicSoundPlayer_Unknown3(__int64 a1);

__int64 BasicSoundPlayer_Unknown2(__int64 result, __int64 a2, __int64 a3)
{
  *(_BYTE*)(result + 68) = 0;
  *(_DWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 48) = a2;
  *(_QWORD*)(result + 56) = a3;
  *(_QWORD*)(result + 92) = 0;
  *(_DWORD*)(result + 108) = 0;
  *(_QWORD*)(result + 160) = 0;
  *(_QWORD*)(result + 168) = 0;
  *(_QWORD*)(result + 176) = 0;
  *(_QWORD*)(result + 192) = 0;
  *(_QWORD*)(result + 72) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 80) = 0;
  *(_BYTE*)(result + 88) = -1;
  *(_QWORD*)(result + 100) = 0x3F80000000000001LL;
  return result;
}

__int64 BasicSoundPlayer_Unknown3(__int64 a1)
{
  int v1;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned int v6;
  void* v7;
  __int64 v8;
  int v9;

  v1 = *(_DWORD*)(a1 + 56);
  if (v1 == 0) {
    v4 = *(_QWORD*)(a1 + 48);
    v5 = HIDWORD(v4);
    if (SHIDWORD(v4) >= 1) {
      do {
        v6 = __clz(__rbit32(v4));
        if ((((unsigned int)v4 >> v6) & 1) != 0) {
          v7 = SoundVoiceNX_14e360();
          v8 = GameRoutine_28b4e0((__int64)v7, v6);
          (*(void (**)(__int64, __int64))(*(_QWORD*)v8 + 24LL))(v8,
                                                                0xFFFFFFFFLL);
        }
        v9 = v4 & -(int)v4;
        if ((_DWORD)v4 == v9) {
          break;
        }
        LODWORD(v4) = v9 ^ v4;
        LODWORD(v5) = v5 - 1;
      } while ((_DWORD)v5 != 0);
    }
    goto LABEL_10;
  }
  if (v1 != 1) {
    GameRoutine_1196920();
  }
  v3 = *(_QWORD*)(a1 + 48);
  if (v3 != 0) {
    (*(void (**)(__int64, __int64))(*(_QWORD*)v3 + 24LL))(v3, 0xFFFFFFFFLL);
  LABEL_10:
    if (*(_DWORD*)(a1 + 56) != 1) {
      *(_DWORD*)(a1 + 56) = 1;
    }
  }
  *(_QWORD*)(a1 + 48) = 0;
  return nn_os_SignalEvent(a1 + 8);
}

__int64 BasicSoundPlayer_282aa0(__int64 result, char a2, float a3)
{
  *(_BYTE*)(result + 88) = a2;
  *(float*)(result + 84) = a3;
  return result;
}

__int64 BasicSoundPlayer_Destructor(_QWORD* a1)
{
  *a1 = &nn_atk_detail_driver_BasicSoundPlayer_vtable;
  return nn_os_FinalizeEvent(a1 + 1);
}

void __attribute__((noreturn)) BasicSoundPlayer_DeletingDestructor()
{
  __udf(0x8002u);
}

#pragma GCC visibility pop
