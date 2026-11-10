#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BufferAllocator_5b57b0(__int64);
__int64 BufferAllocator_Unknown2(__int64, __int64);
__int64 GameRoutine_5b9980(void);
__int64 GameRoutine_5c01b0(_QWORD);
__int64 GameRoutine_5c0260(_QWORD);
__int64 GameRoutine_5c0270(_QWORD);
__int64 GameRoutine_5c02c0(const char*, ...);
__int64 GameRoutine_5c03e0();
__int64 GameRoutine_5c5590();
__int64 GameRoutine_5ca6f0(__int64);
__int64 GameRoutine_5cde10(__int64);
__int64 GameRoutine_5dbab0(_QWORD);
__int64 GameRoutine_5de4f0(_QWORD, _QWORD);
__int64 GameRoutine_5debc0(_QWORD, _QWORD);
__int64 GameRoutine_5deed0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5dfc90(_QWORD);
__int64 GameRoutine_5fca00(_QWORD);
__int64 GameRoutine_5fe300(_QWORD);
__int64 Resource_5c6100(__int64, __int64);
__int64 nn_os_FinalizeMutex(_QWORD);
extern __int64 (*nn_vfx_detail_BufferAllocator_vtable[])();
extern __int64* GameData_21364f8[3];
extern __int64* GameData_2136500[2];
__int64 System_Destructor(__int64 a1);

__int64 System_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 i;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  *(_QWORD*)a1 = GameData_21364f8[0] + 2;
  if (*(int*)(a1 + 108) >= 1) {
    v2 = 0;
    v3 = 0;
    do {
      BufferAllocator_5b57b0(*(_QWORD*)(a1 + 160) + v2);
      ++v3;
      v2 += 624;
    } while (v3 < *(int*)(a1 + 108));
  }
  v4 = *(_DWORD*)(a1 + 100);
  if (v4 >= 1) {
    for (i = 0; i < v4; ++i) {
      v6 = *(_QWORD*)(*(_QWORD*)(a1 + 152) + 8 * i);
      if (v6 != 0) {
        Resource_5c6100(v6, 0);
        GameRoutine_5c02c0(
            "vfx system deleted the registered binary. resource id : %d.", i);
        v4 = *(_DWORD*)(a1 + 100);
      }
    }
  }
  v7 = BufferAllocator_Unknown2(a1 + 5320, *(_QWORD*)(a1 + 56));
  v8 = GameRoutine_5c0270(v7);
  v9 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v8 + 24LL))(
      v8, *(_QWORD*)(a1 + 5808));
  v10 = GameRoutine_5c0270(v9);
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v10 + 24LL))(v10,
                                                        *(_QWORD*)(a1 + 5816));
  GameRoutine_5deed0(a1 + 4888, *(_QWORD*)(a1 + 56), a1 + 64);
  if (*(int*)(a1 + 112) >= 1) {
    v11 = 2088;
    v12 = 0;
    v13 = GameData_2136500[0] + 2;
    do {
      ++v12;
      *(_QWORD*)(*(_QWORD*)(a1 + 168) + v11) = v13;
      v11 += 2112;
    } while (v12 < *(int*)(a1 + 112));
  }
  if (*(_QWORD*)(a1 + 2240) != 0) {
    GameRoutine_5b9980();
  }
  if (*(int*)(a1 + 8) >= 1) {
    v14 = 272;
    v15 = 0;
    do {
      GameRoutine_5de4f0(*(_QWORD*)(a1 + 16) + v14, *(_QWORD*)(a1 + 56));
      ++v15;
      v14 += 2536;
    } while (v15 < *(int*)(a1 + 8));
  }
  v16 = *(_QWORD*)(a1 + 72);
  v17 = *(_QWORD*)(a1 + 4616);
  --*(_DWORD*)(a1 + 88);
  (*(void (**)(__int64, __int64))(*(_QWORD*)v16 + 24LL))(v16, v17);
  GameRoutine_5dfc90(*(_QWORD*)(a1 + 56));
  GameRoutine_5c5590();
  GameRoutine_5c03e0();
  GameRoutine_5debc0(*(_QWORD*)(a1 + 56), a1 + 64);
  GameRoutine_5c01b0(0);
  GameRoutine_5c0260(0);
  GameRoutine_5ca6f0(a1 + 64);
  GameRoutine_5cde10(a1 + 64);
  GameRoutine_5dbab0(a1 + 64);
  nn_os_FinalizeMutex(a1 + 5856);
  nn_os_FinalizeMutex(a1 + 5824);
  *(_QWORD*)(a1 + 5320) = nn_vfx_detail_BufferAllocator_vtable;
  GameRoutine_5fe300(a1 + 5400);
  GameRoutine_5fca00(a1 + 5328);
  GameRoutine_5fe300(a1 + 4976);
  return GameRoutine_5fca00(a1 + 4888);
}

#pragma GCC visibility pop
