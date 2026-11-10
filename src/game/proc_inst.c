#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_oe_SetCpuBoostMode(_QWORD);
__int64 nn_os_ClearEvent(_QWORD);
__int64 nn_os_SignalEvent(_QWORD);
extern __int64 GameData_212c638;
extern __int64 snd_g_fileIndex;
extern char GameData_21c9699;
__int64 ProcInst_Destructor();
__int64 ProcInst_DeletingDestructor();
__int64 GameRoutine_658d60(_QWORD);
__int64 ProcInst_657a50_alt1(_QWORD, _QWORD) __asm__("ProcInst_657a50");
__int64 ProcInst_657b10_alt1(_QWORD) __asm__("ProcInst_657b10");
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_HashString32(_QWORD);
extern _UNKNOWN GameData_21c6868;
extern __int64 GameData_21c67b0;
extern __int64 GameData_21c67b8;
extern __int64 GameData_21c67c0;
extern __int64 GameData_21c67d0;
extern __int64 GameData_21c67e0;
extern __int64 GameData_21c67f0;
extern __int64 GameData_21c67f8;
extern __int64 GameData_21c6800;
extern __int64 GameData_21c6810;
extern __int64 GameData_21c6820;
extern __int64 GameData_21c6830;
extern __int64 GameData_21c6838;
extern __int64 GameData_21c6840;
extern __int64 GameData_21c6850;
extern __int64 GameData_21c6860;
extern __int64 game_ProcGameSkipView_instance_;
extern char GameData_21c67a8;
extern char GameData_21c67e8;
extern char GameData_21c6828;
extern int GameData_21c67c8;
extern int GameData_21c67d8;
extern int GameData_21c6808;
extern int GameData_21c6818;
extern int GameData_21c6848;
extern int GameData_21c6858;
__int64 ProcInst_657850(__int64 a1, __int64 a2, __int64 a3, char a4,
                        __int64 a5);
__int64 ProcInst_657950(__int64 a1, __int64 a2, char a3, __int64 a4);
_BYTE* ProcInst_657a50(__int64 a1, char a2);
__int64 ProcInst_657b10(__int64 a1);
_QWORD* ProcInst_657b80(_QWORD* result, int a2);
__int64 ProcInst_657c40(__int64 result);
__int64 ProcInst_657ca0(__int64 result, char a2, float a3);
__int64 ProcInst_657d40(__int64 result, int a2, char a3);

__int64 ProcInst_657850(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  __int64 v6;
  _BYTE* v9;
  char v10;

  if (a5 != 0) {
    v6 = *(_QWORD*)(a5 + 40);
    if (v6 != 0) {
      *(_QWORD*)(v6 + 48) = a1;
      *(_QWORD*)(a1 + 56) = *(_QWORD*)(a5 + 40);
    }
    *(_QWORD*)(a5 + 40) = a1;
    *(_QWORD*)(a1 + 24) = a3;
    *(_QWORD*)(a1 + 32) = a5;
    *(_DWORD*)(a1 + 140) = game_HashString32(a3);
    *(_QWORD*)(a1 + 8) = a2;
    *(_QWORD*)(a1 + 16) = a2;
    *(_QWORD*)(a1 + 64) = 0;
    *(_QWORD*)(a1 + 72) = 24;
    *(_QWORD*)(a1 + 80) = 1;
    (*(void (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 136LL))(a1) & 1) != 0 &&
        (*(_WORD*)(a1 + 136) & 0x100) == 0) {
      *(_WORD*)(a1 + 136) |= 0x100u;
    }
    if ((a4 & 1) != 0) {
      v9 = *(_BYTE**)(a1 + 32);
      v10 = v9[138];
      if (v10 == 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)v9 + 64LL))(*(_QWORD*)(a1 + 32));
        v10 = v9[138];
      }
      v9[138] = v10 + 1;
      *(_WORD*)(a1 + 136) |= 2u;
    }
  }
  else if ((*(_WORD*)(a1 + 136) & 1) == 0) {
    ProcInst_657a50_alt1(a1, 1);
  }
  return a1;
}

__int64 ProcInst_657950(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  int v7;
  int v8;
  char v11;
  __int64 v12;

  v4 = a4;
  v5 = a2;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                            memory_order_acquire) &
       1) == 0) {
    v12 = a1;
    v11 = a3;
    v7 = __cxa_guard_acquire(&GameData_21c6868);
    a3 = v11;
    v5 = a2;
    v4 = a4;
    v8 = v7;
    a1 = v12;
    if (v8 != 0) {
      GameData_21c67a8 = 3;
      GameData_21c67d0 = 0;
      GameData_21c67d8 = 0;
      GameData_21c67e0 = 0;
      GameData_21c67b0 = 0;
      GameData_21c67b8 = 0;
      GameData_21c67c0 = 0;
      GameData_21c67c8 = 0;
      GameData_21c6808 = 0;
      GameData_21c6810 = 0;
      GameData_21c6818 = 0;
      GameData_21c6820 = 0;
      GameData_21c6828 = 0;
      GameData_21c6850 = 0;
      GameData_21c6858 = 0;
      GameData_21c6860 = 0;
      GameData_21c6848 = 0;
      GameData_21c6838 = 0;
      GameData_21c6840 = 0;
      GameData_21c6830 = 0;
      GameData_21c67e8 = 14;
      GameData_21c67f0 = 0;
      GameData_21c67f8 = 16;
      GameData_21c6800 = 1;
      __cxa_guard_release(&GameData_21c6868);
      a1 = v12;
      a3 = v11;
      v5 = a2;
      v4 = a4;
    }
  }
  return ProcInst_657850(a1, (__int64)&GameData_21c67a8, v5, a3 & 1, v4);
}

_BYTE* ProcInst_657a50(__int64 a1, char a2)
{
  __int64 v3;
  _BYTE* result;
  __int16 v5;
  char v6;
  __int16 v7;

  if ((a2 & 1) == 0) {
    v3 = *(_QWORD*)(a1 + 56);
    if (v3 != 0) {
      ProcInst_657a50(v3, 0);
    }
  }
  result = *(_BYTE**)(a1 + 40);
  if (result != nullptr) {
    result = (_BYTE*)ProcInst_657a50(result, 0);
  }
  v5 = *(_WORD*)(a1 + 136);
  if ((v5 & 1) != 0) {
    if ((v5 & 2) == 0) {
      goto LABEL_8;
    }
  }
  else {
    result = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 40LL))(a1);
    v5 = *(_WORD*)(a1 + 136) | 1;
    *(_WORD*)(a1 + 136) = v5;
    if ((v5 & 2) == 0) {
    LABEL_8:
      if ((v5 & 0x10) == 0) {
        return result;
      }
      goto LABEL_9;
    }
  }
  result = *(_BYTE**)(a1 + 32);
  v6 = result[138] - 1;
  result[138] = v6;
  if (v6 == 0) {
    result = (_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)result + 72LL))(result);
  }
  v7 = *(_WORD*)(a1 + 136) & 0xFFFD;
  *(_WORD*)(a1 + 136) = v7;
  if ((v7 & 0x10) != 0) {
  LABEL_9:
    result = (_BYTE*)ProcInst_657b10_alt1(*(_QWORD*)(a1 + 32));
    *(_WORD*)(a1 + 136) &= ~0x10u;
  }
  return result;
}

__int64 ProcInst_657b10(__int64 a1)
{
  __int64 result;
  char v3;

  result = *(_QWORD*)(a1 + 32);
  if (result != 0) {
    result = ProcInst_657b10(result);
  }
  v3 = *(_BYTE*)(a1 + 139) - 1;
  *(_BYTE*)(a1 + 139) = v3;
  if (v3 == 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
  }
  return result;
}

_QWORD* ProcInst_657b80(_QWORD* result, int a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;

  v2 = result[12];
  v3 = result[13];
  v5 = result;
  v6 = ((v3 - v2) << 6) - 1;
  if (v3 == v2) {
    v6 = 0;
  }
  v7 = result[16] + result[15];
  if (v6 == v7) {
    result = (_QWORD*)GameRoutine_658d60(result + 11);
    v2 = v5[12];
    v7 = v5[16] + v5[15];
  }
  *(_QWORD*)(*(_QWORD*)(v2 + 8 * (v7 >> 9)) + 8 * (v7 & 0x1FF)) = v5[2];
  ++v5[16];
  v8 = v5[1];
  if (v8 != 0) {
    while (1) {
      if (*(_BYTE*)v8 == 2) {
        if (*(_DWORD*)(v8 + 32) == a2) {
          v5[2] = v8;
          *((_WORD*)v5 + 68) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v8 == 0) {
        return result;
      }
      v8 += 64;
    }
  }
  return result;
}

__int64 ProcInst_657c40(__int64 result)
{
  int v1;
  int v2;
  float v3;

  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v1 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v2 = 2)
           : (v2 = 3),
       (v2 & v1) != 0)) {
    v3 = *(float*)(result + 144);
    if (v3 < 1.0) {
      v3 = 1.0;
    }
    *(_WORD*)(result + 136) = *(_WORD*)(result + 136) & 0xFF97 | 0x20;
    *(float*)(result + 144) = v3;
  }
  return result;
}

__int64 ProcInst_657ca0(__int64 result, char a2, float a3)
{
  int v3;
  int v4;
  int v5;
  float v6;
  __int16 v7;
  __int16 v8;

  v3 = (int)(float)(a3 * 60.0);
  if (v3 >= 1) {
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v5 = 2)
             : (v5 = 3),
         a2 == 0 || (v5 & v4) != 0)) {
      v6 = (float)(unsigned int)v3;
      v7 = *(_WORD*)(result + 136);
      v8 = v7 | 0x60;
      if (*(float*)(result + 144) >= v6) {
        v6 = *(float*)(result + 144);
      }
      if (a2 == 0) {
        v7 = *(_WORD*)(result + 136) & 0xFF9F;
      }
      if (a2 == 1) {
        v7 = *(_WORD*)(result + 136) & 0xFF9F | 0x20;
      }
      *(float*)(result + 144) = v6;
      if (a2 == 2) {
        v7 = v8;
      }
      *(_WORD*)(result + 136) = v7 & 0xFFF7;
    }
  }
  return result;
}

__int64 ProcInst_657d40(__int64 result, int a2, char a3)
{
  int v3;
  int v4;
  int v5;
  float v6;
  __int16 v7;
  __int16 v8;

  v3 = (int)(float)((float)a2 * 0.06f);
  if (v3 >= 1) {
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v5 = 2)
             : (v5 = 3),
         a3 == 0 || (v5 & v4) != 0)) {
      v6 = (float)(unsigned int)v3;
      v7 = *(_WORD*)(result + 136);
      v8 = v7 | 0x60;
      if (*(float*)(result + 144) >= v6) {
        v6 = *(float*)(result + 144);
      }
      if (a3 == 0) {
        v7 = *(_WORD*)(result + 136) & 0xFF9F;
      }
      if (a3 == 1) {
        v7 = *(_WORD*)(result + 136) & 0xFF9F | 0x20;
      }
      *(float*)(result + 144) = v6;
      if (a3 == 2) {
        v7 = v8;
      }
      *(_WORD*)(result + 136) = v7 & 0xFFF7;
    }
  }
  return result;
}

__int64 ProcInst_Destructor()
{
  __int64 result;
  __int64 v1;

  if ((GameData_21c9699 & 1) == 0) {
    *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                              GameData_212c638 +
                                                          32LL) -
                                               8LL) +
                                    40LL) +
                         16LL) +
              48LL) = 0;
    result = nn_oe_SetCpuBoostMode(1);
    v1 = snd_g_fileIndex;
    if (*(_DWORD*)(snd_g_fileIndex + 4736) != 1 &&
        (*(_BYTE*)(snd_g_fileIndex + 4742) & 1) == 0) {
      *(_DWORD*)(snd_g_fileIndex + 4736) = 1;
      result = nn_os_SignalEvent(v1 + 4144);
    }
    GameData_21c9699 = 1;
  }
  return result;
}

__int64 ProcInst_DeletingDestructor()
{
  __int64 result;
  __int64 v1;

  if (GameData_21c9699 == 1) {
    result = nn_oe_SetCpuBoostMode(0);
    v1 = snd_g_fileIndex;
    if (*(_DWORD*)(snd_g_fileIndex + 4736) != 0) {
      *(_DWORD*)(snd_g_fileIndex + 4736) = 0;
      result = nn_os_ClearEvent(v1 + 4144);
    }
    GameData_21c9699 = 0;
    *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                              GameData_212c638 +
                                                          32LL) -
                                               8LL) +
                                    40LL) +
                         16LL) +
              48LL) = 1;
  }
  return result;
}

#pragma GCC visibility pop
