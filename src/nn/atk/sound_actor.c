#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ExternalSoundPlayer_282bc0(_QWORD, _QWORD);
__int64 ExternalSoundPlayer_Destructor(_QWORD);
__int64 SoundArchivePlayer_27a400(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                  _QWORD, _QWORD, _QWORD);
extern __int64* GameData_2135030[3];
__int64 SoundActor_Destructor(__int64 a1);
__int64 SoundActor_278380(__int64 result);
__int64 SoundActor_Unknown5(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            unsigned __int8* a5);
__int64 SoundActor_Unknown6(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, unsigned __int8* a6);
__int64 SoundActor_Unknown7(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6, unsigned __int8* a7);

__int64 SoundActor_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *(_QWORD*)a1 = GameData_2135030[0] + 2;
  if ((*(_BYTE*)(a1 + 205) & 1) == 0) {
    ExternalSoundPlayer_282bc0(*(_QWORD*)(a1 + 144), a1);
    v2 = *(_QWORD*)(a1 + 152);
    *(_QWORD*)(a1 + 144) = 0;
    ExternalSoundPlayer_282bc0(v2, a1);
    v3 = *(_QWORD*)(a1 + 160);
    *(_QWORD*)(a1 + 152) = 0;
    ExternalSoundPlayer_282bc0(v3, a1);
    v4 = *(_QWORD*)(a1 + 168);
    *(_QWORD*)(a1 + 160) = 0;
    ExternalSoundPlayer_282bc0(v4, a1);
    *(_QWORD*)(a1 + 8) = 0;
    *(_QWORD*)(a1 + 188) = 0;
    *(_WORD*)(a1 + 204) = 256;
    *(_DWORD*)(a1 + 184) = 1065353216;
    *(_QWORD*)(a1 + 168) = 0;
    *(_QWORD*)(a1 + 176) = 0x3F8000003F800000LL;
    *(_QWORD*)(a1 + 196) = 0xFFFFFFFFLL;
  }
  ExternalSoundPlayer_Destructor(a1 + 112);
  ExternalSoundPlayer_Destructor(a1 + 80);
  ExternalSoundPlayer_Destructor(a1 + 48);
  return ExternalSoundPlayer_Destructor(a1 + 16);
}

__int64 SoundActor_278380(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  if ((*(_BYTE*)(result + 205) & 1) == 0) {
    v1 = result;
    ExternalSoundPlayer_282bc0(*(_QWORD*)(result + 144), result);
    v2 = *(_QWORD*)(v1 + 152);
    *(_QWORD*)(v1 + 144) = 0;
    ExternalSoundPlayer_282bc0(v2, v1);
    v3 = *(_QWORD*)(v1 + 160);
    *(_QWORD*)(v1 + 152) = 0;
    ExternalSoundPlayer_282bc0(v3, v1);
    v4 = *(_QWORD*)(v1 + 168);
    *(_QWORD*)(v1 + 160) = 0;
    result = ExternalSoundPlayer_282bc0(v4, v1);
    *(_QWORD*)(v1 + 8) = 0;
    *(_QWORD*)(v1 + 188) = 0;
    *(_WORD*)(v1 + 204) = 256;
    *(_DWORD*)(v1 + 184) = 1065353216;
    *(_QWORD*)(v1 + 168) = 0;
    *(_QWORD*)(v1 + 176) = 0x3F8000003F800000LL;
    *(_QWORD*)(v1 + 196) = 0xFFFFFFFFLL;
  }
  return result;
}

__int64 SoundActor_Unknown5(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            unsigned __int8* a5)
{
  if (*(_BYTE*)(a1 + 204) != 0) {
    return SoundArchivePlayer_27a400(*(_QWORD*)(a1 + 8), a2, a3, 0, a1, *a5, 0,
                                     a4);
  }
  else {
    return 17;
  }
}

__int64 SoundActor_Unknown6(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, unsigned __int8* a6)
{
  if (*(_BYTE*)(a1 + 204) != 0) {
    return SoundArchivePlayer_27a400(*(_QWORD*)(a1 + 8), a2, a3, 0, a1, *a6, a4,
                                     a5);
  }
  else {
    return 17;
  }
}

__int64 SoundActor_Unknown7(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6, unsigned __int8* a7)
{
  if (*(_BYTE*)(a1 + 204) != 0) {
    return SoundArchivePlayer_27a400(*(_QWORD*)(a1 + 8), a2, a3, a6, a1, *a7,
                                     a4, a5);
  }
  else {
    return 17;
  }
}

#pragma GCC visibility pop
