#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5fc1f0(__int64);
__int64 GameRoutine_5fc450(__int64 result);
__int64 GameRoutine_5fe310(__int64, _QWORD*, __int64);
__int64 GameRoutine_5fe3b0(__int64);
__int64 GameRoutine_6063a0(__int64, __int64*, __int64, _QWORD*, __int64,
                           __int64);
__int64 GameRoutine_6064a0(__int64);
__int64 GameRoutine_606510(__int64, __int64, unsigned __int8*);
__int64 GameRoutine_606650(_QWORD, _QWORD);
__int64 GameRoutine_616200(_QWORD, _QWORD);
__int64 GameRoutine_6163e0(_QWORD, _QWORD);
__int64 GameRoutine_6315e0(_QWORD);
__int64 nn_os_AcquireReadLock(_QWORD);
__int64 nn_os_AcquireWriteLock(_QWORD);
__int64 nn_os_ReleaseReadLock(_QWORD);
__int64 nn_os_ReleaseWriteLock(_QWORD);
__int64 nn_util_BinaryBlockHeader_GetBlockSize(_QWORD);
extern __int64 (*fs_BntxFile_vtable[])();
extern __int64* game_g_frame_clock_ptr[3];
__int64 BntxFile_Destructor(__int64 a1);
__int64 BntxFile_Unknown2(__int64 result);

__int64 BntxFile_Destructor(__int64 a1)
{
  int v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = fs_BntxFile_vtable;
  if (*(_QWORD*)(a1 + 592) != 0) {
    nn_os_AcquireReadLock(a1 + 696);
    v2 = *(_DWORD*)(a1 + 656);
    nn_os_ReleaseReadLock(a1 + 696);
    if ((v2 & 0x20) != 0) {
      v3 = (_QWORD*)GameRoutine_5fc1f0(*(_QWORD*)(a1 + 592));
      v4 = *game_g_frame_clock_ptr[0];
      GameRoutine_6163e0(*(_QWORD*)(*game_g_frame_clock_ptr[0] + 552), v3);
      v5 = *(unsigned int*)(v3[7] + 4LL);
      if ((int)v5 >= 1) {
        v6 = 8 * v5;
        v7 = 0;
        do {
          v8 = *(_QWORD*)(v3[5] + v7);
          GameRoutine_6064a0(*(_QWORD*)(v8 + 128));
          GameRoutine_606650(*(_QWORD*)(v8 + 136), v4 + 568);
          v7 += 8;
        } while (v6 != v7);
      }
      v9 = v3[8];
      if (v3[9] == v9) {
        GameRoutine_5fe3b0(v9);
      }
      v3[9] = 0;
      nn_os_AcquireWriteLock(a1 + 696);
      *(_DWORD*)(a1 + 656) &= ~0x20u;
      nn_os_ReleaseWriteLock(a1 + 696);
    }
  }
  return GameRoutine_6315e0(a1);
}

__int64 BntxFile_Unknown2(__int64 result)
{
  __int64 v1;
  int v2;
  _QWORD* v3;
  __int64* v4;
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
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  if (*(_QWORD*)(result + 592) != 0) {
    v1 = result;
    nn_os_AcquireReadLock(result + 696);
    v2 = *(_DWORD*)(v1 + 656);
    result = nn_os_ReleaseReadLock(v1 + 696);
    if ((v2 & 0x20) == 0) {
      v3 = (_QWORD*)GameRoutine_5fc1f0(*(_QWORD*)(v1 + 592));
      v4 = game_g_frame_clock_ptr[0];
      v5 = v3[6];
      v21 = 0;
      LODWORD(v18) = 33;
      v6 = *game_g_frame_clock_ptr[0];
      v7 = v5 + 16;
      v8 = nn_util_BinaryBlockHeader_GetBlockSize(v5) - 16;
      v9 = v3[8];
      HIDWORD(v18) = v8;
      v19 = v7;
      v20 = v8;
      GameRoutine_5fe310(v9, (_QWORD*)(v6 + 568), (__int64)&v18);
      v10 = v3[7];
      v3[9] = v3[8];
      v3[10] = 0;
      v11 = *(unsigned int*)(v10 + 4);
      if ((int)v11 >= 1) {
        v12 = 8 * v11;
        v13 = 0;
        do {
          v14 = *(_QWORD*)(v3[5] + v13);
          GameRoutine_6063a0(*(_QWORD*)(v14 + 128), (__int64*)(v6 + 568),
                             v14 + 16,
                             *(_QWORD**)(*(_QWORD*)(v14 + 104) + 40LL),
                             *(_QWORD*)(*(_QWORD*)(v14 + 104) + 48LL) -
                                 *(_QWORD*)(*(_QWORD*)(v14 + 104) + 16LL) +
                                 **(_QWORD**)(v14 + 112) - 16LL,
                             *(unsigned int*)(v14 + 80));
          v24 = 0;
          v25 = 0;
          v22 = 0;
          v23 = 0;
          v20 = 0;
          v21 = 0;
          v18 = 0;
          v19 = 0;
          GameRoutine_5fc450((__int64)&v18);
          v15 = *(_DWORD*)(v14 + 28);
          LOBYTE(v18) = *(_BYTE*)(v14 + 92);
          v16 = *(_DWORD*)(v14 + 88);
          HIDWORD(v18) = v15;
          LODWORD(v19) = v16;
          v17 = *(_QWORD*)(v14 + 136);
          v24 = *(_QWORD*)(v14 + 128);
          HIDWORD(v22) = *(_DWORD*)(v14 + 48);
          WORD1(v20) = *(_WORD*)(v14 + 22);
          GameRoutine_606510(v17, v6 + 568, (unsigned __int8*)&v18);
          v13 += 8;
        } while (v12 != v13);
      }
      GameRoutine_616200(*(_QWORD*)(*v4 + 552), v3);
      nn_os_AcquireWriteLock(v1 + 696);
      *(_DWORD*)(v1 + 656) |= 0x20u;
      return nn_os_ReleaseWriteLock(v1 + 696);
    }
  }
  return result;
}

#pragma GCC visibility pop
