#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* Image_72b6c0(_QWORD*);
__int64 GameRoutine_6c51e0(_QWORD);
__int64 GameRoutine_6c6da0(_QWORD);
__int64 GameRoutine_6c6ec0(_QWORD);
__int64 GameRoutine_757430(__int64 result);
__int64 GameRoutine_7c9660(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_81a990(_QWORD);
__int64 GameRoutine_97ec90(_QWORD, _QWORD);
__int64 GameRoutine_c8b5a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 Image_72a260(__int64, __int64, __int64, __int64, __int64, __int64);
__int64 Image_72b4a0(__int64, __int64, __int64, __int64, __int64, __int64);
extern __int64 GameData_21ca300;
extern __int64 GameData_22400f8;
extern __int64 game_map_UnitFlags_instance_;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212d000[2];
__int64 ProcUnitDead_76ecf0(__int64 result);
__int64 ProcUnitDead_76ed60(__int64 result);
__int64 game_map_anonymous_ProcUnitDead_DeadDrop(__int64 result);
__int64 ProcUnitDead_76f480(__int64 a1);
__int64 ProcUnitDead_76f4e0(__int64 result);
__int64 ProcUnitDead_76f540(__int64 result);
__int64 ProcUnitDead_76f5d0_alt1(__int64 result) __asm__("ProcUnitDead_76f5d0");
__int64
game_map_anonymous_ProcUnitDead_DeadDrop_closure_Invoke(__int64 result,
                                                        unsigned __int16* a2);
__int64 GameRoutine_c8b5a0_alt1(__int64, unsigned int, __int64, unsigned int,
                                unsigned int, unsigned int,
                                unsigned int) __asm__("GameRoutine_c8b5a0");
__int64 Image_72b4a0_alt1(__int64) __asm__("Image_72b4a0");
__int64 MapUtil_757430(__int64 result);
__int64 game_97ec90(__int64);
void Image_72a260_alt1(__int64) __asm__("Image_72a260");
void ProcUnitDead_76f5d0(__int64 a1);

__int64 ProcUnitDead_76ecf0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  if (*(_BYTE*)(result + 160) != 0 && GameData_22400f8 != 0) {
    v1 = *(_QWORD*)(result + 152);
    if (v1 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
        (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
      v2 = *(_QWORD*)(v1 + 440);
      if (v2 != 0 && *(unsigned __int8*)(v2 + 16) <= 8u &&
          game_map_UnitFlags_instance_ != 0) {
        v3 = *(unsigned __int8*)(v1 + 2088);
        if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v3) & 1) != 0) {
          *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v3) |= 2u;
        }
      }
    }
  }
  return result;
}

__int64 ProcUnitDead_76ed60(__int64 result)
{
  unsigned int v1;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;

  v1 = *(unsigned __int8*)(result + 160);
  if (v1 <= 3 && v1 != 1) {
    v3 = *(_QWORD*)(result + 152);
    if (v3 == 0) {
      return game_97ec90(result);
    }
    v4 = *(_QWORD*)(v3 + 440);
    if (v4 != 0) {
      v5 = *(unsigned __int8*)(v4 + 16);
    }
    else {
      v5 = 9;
    }
    v6 = result;
    result = GameRoutine_c8b5a0_alt1(
        result, 0x10u, v3, *(unsigned __int16*)(*(_QWORD*)(v3 + 392) + 16LL),
        v5, 0xFFFFFFFF, 0xFFFFFFFF);
    if ((result & 1) == 0) {
      result = v6;
      return game_97ec90(result);
    }
  }
  return result;
}

__int64 game_map_anonymous_ProcUnitDead_DeadDrop(__int64 result)
{
  __int64 v1;
  bool v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = *(_QWORD*)(result + 152);
  v3 = v1 == 0 || *GameData_212d000[0] == 0;
  if (*(_BYTE*)(result + 160) == 1) {
    if (!v3) {
      v4 = *(unsigned __int16*)(*(_QWORD*)(v1 + 392) + 16LL);
      v5 = *(_QWORD*)(v1 + 440);
      if (v5 != 0) {
        v6 = *(unsigned __int8*)(v5 + 16);
      }
      else {
        v6 = 9;
      }
      v8 = 17;
      return GameRoutine_c8b5a0(result, v8, v1, v4, v6, 0xFFFFFFFFLL,
                                0xFFFFFFFFLL);
    }
  }
  else if (!v3) {
    v4 = *(unsigned __int16*)(*(_QWORD*)(v1 + 392) + 16LL);
    v7 = *(_QWORD*)(v1 + 440);
    if (v7 != 0) {
      v6 = *(unsigned __int8*)(v7 + 16);
    }
    else {
      v6 = 9;
    }
    v8 = 14;
    return GameRoutine_c8b5a0(result, v8, v1, v4, v6, 0xFFFFFFFFLL,
                              0xFFFFFFFFLL);
  }
  return result;
}

__int64 ProcUnitDead_76f480(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;

  v2 = *(_QWORD*)(a1 + 152);
  v3 = *(_DWORD*)(v2 + 416);
  if ((v3 & 0x10000000) == 0) {
    v4 = v2;
    *(_DWORD*)(v2 + 416) = v3 | 0x10000000;
    GameRoutine_6c51e0(v2);
    GameRoutine_6c6da0(v4);
    GameRoutine_6c6ec0(v4);
    *(_DWORD*)(v4 + 416) &= ~0x10000000u;
    v2 = *(_QWORD*)(a1 + 152);
  }
  return GameRoutine_81a990(v2);
}

__int64 ProcUnitDead_76f4e0(__int64 result)
{
  unsigned __int8* v1;
  unsigned int v2;
  bool v3;
  int v4;

  if (*(float*)(*(_QWORD*)(result + 152) + 164LL) ==
      *(float*)(*(_QWORD*)(result + 152) + 160LL)) {
    v1 = *(unsigned __int8**)(result + 16);
    if (v1 != nullptr) {
      v2 = *v1;
      v3 = v2 > 0x10;
      v4 = (1 << v2) & 0x1CE00;
      if (!v3 && v4 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    *(_WORD*)(result + 136) |= 8u;
  }
  return result;
}

__int64 ProcUnitDead_76f540(__int64 result)
{
  __int64 v1;
  bool v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = *(_QWORD*)(result + 152);
  v3 = v1 == 0 || *GameData_212d000[0] == 0;
  if (*(_BYTE*)(result + 160) == 1) {
    if (!v3) {
      v4 = *(unsigned __int16*)(*(_QWORD*)(v1 + 392) + 16LL);
      v5 = *(_QWORD*)(v1 + 440);
      if (v5 != 0) {
        v6 = *(unsigned __int8*)(v5 + 16);
      }
      else {
        v6 = 9;
      }
      v8 = 18;
      return GameRoutine_c8b5a0(result, v8, v1, v4, v6, 0xFFFFFFFFLL,
                                0xFFFFFFFFLL);
    }
  }
  else if (!v3) {
    v4 = *(unsigned __int16*)(*(_QWORD*)(v1 + 392) + 16LL);
    v7 = *(_QWORD*)(v1 + 440);
    if (v7 != 0) {
      v6 = *(unsigned __int8*)(v7 + 16);
    }
    else {
      v6 = 9;
    }
    v8 = 15;
    return GameRoutine_c8b5a0(result, v8, v1, v4, v6, 0xFFFFFFFFLL,
                              0xFFFFFFFFLL);
  }
  return result;
}

void ProcUnitDead_76f5d0(__int64 a1)
{
  __int64 v1;
  _QWORD* v2;

  if (*(_BYTE*)(a1 + 160) == 0) {
    MapUtil_757430(*(_QWORD*)(a1 + 152));
    v1 = GameData_21ca300;
    v2 = *(_QWORD**)(GameData_21ca300 + 96);
    Image_72b4a0_alt1((__int64)v2);
    Image_72b6c0(v2);
    Image_72a260_alt1(*(_QWORD*)(v1 + 152));
  }
}

__int64

game_map_anonymous_ProcUnitDead_DeadDrop_closure_Invoke(__int64 result,
                                                        unsigned __int16* a2)
{
  if ((~*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                              8LL * *a2) +
                   336LL) &
       0x300) == 0) {
    return GameRoutine_7c9660(
        *(_QWORD*)(*GameData_212cfb8[0] + 16),
        (unsigned int)*(char*)(*(_QWORD*)(*(_QWORD*)(result + 8) + 152LL) +
                               584LL),
        (unsigned int)*(char*)(*(_QWORD*)(*(_QWORD*)(result + 8) + 152LL) +
                               585LL));
  }
  return result;
}

#pragma GCC visibility pop
