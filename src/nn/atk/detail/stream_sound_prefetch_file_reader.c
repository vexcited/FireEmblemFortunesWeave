#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_29ec30(void);
__int64 GameRoutine_29ec40(_QWORD);
__int64 StreamHeaderLoadTask_296900(__int64);
__int64 StreamHeaderLoadTask_296940(__int64);
__int64 StreamHeaderLoadTask_2969e0(__int64);
__int64 StreamSoundPlayer_29eae0(_QWORD);
__int64 StreamSoundPlayer_29eb20(_QWORD);
__int64 StreamSoundPlayer_29eb80(void);
__int64 StreamSoundPlayer_29ebe0(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
char* StreamHeaderLoadTask_2969a0(unsigned int*, unsigned int);
extern __int64 (*GameData_1f7fab8[])();
_QWORD* StreamSoundPrefetchFileReader_Destructor(_QWORD* result);
__int64 StreamSoundPrefetchFileReader_29e7f0(__int64 result, __int64 a2);
bool StreamSoundPrefetchFileReader_29e900(__int64 a1);
bool StreamSoundPrefetchFileReader_29e920(__int64 a1);
bool StreamSoundPrefetchFileReader_29e940(__int64 a1);
__int64 StreamSoundPrefetchFileReader_29e960(__int64 a1, _QWORD* a2);
bool StreamSoundPrefetchFileReader_29e9c0(__int64 a1, _QWORD* a2, __int64 a3,
                                          unsigned int a4);
__int64 StreamSoundPrefetchFileReader_29ea40(__int64 a1, __int64 a2,
                                             unsigned int a3);
__int64 StreamSoundPrefetchFileReader_Unknown2(__int64 a1, __int64 a2,
                                               unsigned int a3);

_QWORD* StreamSoundPrefetchFileReader_Destructor(_QWORD* result)
{
  result[2] = 0;
  result[3] = 0;
  *(_QWORD*)((char*)result + 30) = 0;
  *result = GameData_1f7fab8;
  result[1] = 0;
  return result;
}

__int64 StreamSoundPrefetchFileReader_29e7f0(__int64 result, __int64 a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  _QWORD* v11;

  if (*(_DWORD*)a2 == 1347703622 && *(__int16*)(a2 + 4) == -257 &&
      (unsigned int)(*(_DWORD*)(a2 + 8) - 0x10000) <= 0x40300) {
    *(_QWORD*)(result + 8) = a2;
    v2 = (_QWORD*)result;
    result = StreamSoundPlayer_29eae0(a2);
    if (*(_DWORD*)result == 1330007625) {
      v3 = result;
      result = StreamSoundPlayer_29eb20(v2[1]);
      if (*(_DWORD*)result == 1413563472) {
        v4 = result + 8;
        v5 = v2[1];
        v6 = v2;
        v2[2] = v3 + 8;
        v2[3] = v4;
        if (v5 != 0) {
          if ((StreamSoundPlayer_29eb80() & 1) != 0) {
            v7 = StreamSoundPlayer_29ebe0(v2[1]);
            v8 = StreamHeaderLoadTask_296900(v2[2]);
            v6 = v2;
            v9 = v7 + *(_DWORD*)(v8 + 64) + 8;
          }
          else {
            v9 = 0;
            v6 = v2;
          }
        }
        else {
          v9 = 0;
        }
        v10 = v6[2];
        *((_DWORD*)v6 + 8) = v9;
        v11 = v6;
        result = StreamHeaderLoadTask_296900(v10);
        *((_WORD*)v11 + 18) = *(_WORD*)(result + 56);
      }
    }
  }
  return result;
}

bool StreamSoundPrefetchFileReader_29e900(__int64 a1)
{
  return *(unsigned __int16*)(*(_QWORD*)(a1 + 8) + 10LL) > 2u;
}

bool StreamSoundPrefetchFileReader_29e920(__int64 a1)
{
  return (*(_WORD*)(*(_QWORD*)(a1 + 8) + 10LL) & 0xFFFC) != 0;
}

bool StreamSoundPrefetchFileReader_29e940(__int64 a1)
{
  return *(_DWORD*)(*(_QWORD*)(a1 + 8) + 8LL) >> 8 > 0x500u;
}

__int64 StreamSoundPrefetchFileReader_29e960(__int64 a1, _QWORD* a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v3 = (_QWORD*)StreamHeaderLoadTask_296900(*(_QWORD*)(a1 + 16));
  v4 = v3[1];
  *a2 = *v3;
  a2[1] = v4;
  v5 = v3[5];
  v7 = v3[2];
  v6 = v3[3];
  a2[4] = v3[4];
  a2[5] = v5;
  a2[2] = v7;
  a2[3] = v6;
  v8 = v3[8];
  v9 = v3[9];
  v11 = v3[6];
  v10 = v3[7];
  a2[8] = v8;
  a2[9] = v9;
  a2[6] = v11;
  a2[7] = v10;
  return 1;
}

bool StreamSoundPrefetchFileReader_29e9c0(__int64 a1, _QWORD* a2, __int64 a3,
                                          unsigned int a4)
{
  unsigned int* v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v7 = (unsigned int*)StreamHeaderLoadTask_296940(*(_QWORD*)(a1 + 16));
  v8 = StreamHeaderLoadTask_2969a0(v7, a4);
  v9 = StreamHeaderLoadTask_2969e0((__int64)v8);
  if (v9 != 0) {
    *a2 = *(_QWORD*)v9;
    v10 = *(_QWORD*)(v9 + 8);
    v11 = *(_QWORD*)(v9 + 16);
    v12 = *(_QWORD*)(v9 + 24);
    *(_QWORD*)((char*)a2 + 30) = *(_QWORD*)(v9 + 30);
    a2[2] = v11;
    a2[3] = v12;
    a2[1] = v10;
    LODWORD(v10) = *(_DWORD*)(v9 + 38);
    *(_WORD*)(a3 + 4) = *(_WORD*)(v9 + 42);
    *(_DWORD*)a3 = v10;
  }
  return v9 != 0;
}

__int64 StreamSoundPrefetchFileReader_29ea40(__int64 a1, __int64 a2,
                                             unsigned int a3)
{
  __int64 v4;
  __int64 v5;

  v4 = *(_QWORD*)(a1 + 24) + 20LL * a3;
  *(_DWORD*)a2 = *(_DWORD*)(v4 + 4);
  *(_DWORD*)(a2 + 4) = *(_DWORD*)(v4 + 8);
  v5 = GameRoutine_29ec30();
  *(_QWORD*)(a2 + 8) = GameRoutine_29ec40(v5);
  return 1;
}

__int64 StreamSoundPrefetchFileReader_Unknown2(__int64 a1, __int64 a2,
                                               unsigned int a3)
{
  __int64 v3;

  v3 = *(unsigned int*)(a1 + 32);
  if ((_DWORD)v3 == 0 || *(_WORD*)(a1 + 36) == 0) {
    return 0;
  }
  memcpy(a2,
         *(_QWORD*)(a1 + 8) +
             *(unsigned __int16*)(a1 + 36) * (unsigned __int64)a3 + v3,
         256);
  return 1;
}

#pragma GCC visibility pop
