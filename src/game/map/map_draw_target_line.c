#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6c8a80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6c9cf0(_QWORD, _QWORD);
__int64 GameRoutine_752850(void);
__int64 GameRoutine_788a40(void);
__int64 GameRoutine_f0a0d0(__int64, int);
__int64 GameRoutine_f235c0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*GameData_1f94310[])();
extern __int64 (*game_map_MapDrawTargetLine_vtable[])();
extern __int64 GameData_212d020[5];
extern __int64 GameData_212d038[2];
extern __int64 GameData_21ca310;
extern __int64 GameData_21cd130;
extern __int64 GameData_21ed070;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern int GameData_21d92e0;
__int64 MapDrawTargetLine_Destructor(__int64 a1);
__int64 MapDrawTargetLine_f21270();
bool MapDrawTargetLine_f21470(__int64 a1, __int64 a2);
bool MapDrawTargetLine_Unknown6(__int64 a1);
__int64 game_map_MapDrawTargetLine_UpdateMesh_lambda0_Invoke(__int64 a1,
                                                             _DWORD* a2,
                                                             _DWORD* a3);
__int64 game_map_MapDrawTargetLine_UpdateMesh_lambda1_Invoke(__int64 a1,
                                                             _DWORD* a2,
                                                             _DWORD* a3);

__int64 MapDrawTargetLine_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = game_map_MapDrawTargetLine_vtable;
  v2 = a1 + 144;
  if ((snd_fnd_WeakHandle_isValid(a1 + 144) & 1) != 0) {
    v3 = snd_fnd_WeakHandle_get(v2);
    (*(void (**)(__int64))(*(_QWORD*)(v3 - 5592) + 264LL))(v3 - 5592);
  }
  v4 = *(_QWORD*)(a1 + 168);
  if (v4 != 0) {
    *(_QWORD*)(a1 + 176) = v4;
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                  v4);
  }
  if ((*(_BYTE*)(a1 + 120) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 136);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                    v6);
    }
  }
  GameRoutine_f235c0(*(_QWORD*)(a1 + 96));
  GameRoutine_f235c0(*(_QWORD*)(a1 + 72));
  GameRoutine_f235c0(*(_QWORD*)(a1 + 48));
  return GameRoutine_f235c0(*(_QWORD*)(a1 + 24));
}

__int64 MapDrawTargetLine_f21270()
{
  __int64 v0;
  __int64 v1;
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  bool v17;
  __int64 v18;

  v0 = GameData_212d038[0];
  v1 = *(_QWORD*)GameData_212d038[0];
  v2 = *(unsigned __int8*)(*GameData_212ce90[0] + 24);
  v3 = GameData_212d020[0];
  v4 = *(_QWORD*)GameData_212d038[0];
  v5 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 24LL);
  v6 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 104LL);
  if (v6 == 0) {
    goto LABEL_6;
  }
  v7 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 96LL);
  v8 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 104LL);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                            memory_order_relaxed);
  v9 = std___1___shared_weak_count_lock(v8);
  std___1___shared_weak_count___release_weak(v6);
  if (v9 == 0) {
    v4 = *(_QWORD*)v0;
  LABEL_6:
    if (*(_BYTE*)(v4 + 156) != 0) {
      v10 = 8;
    }
    else {
      v10 = 127472;
    }
    goto LABEL_14;
  }
  if (v7 != 0) {
    v10 = 254936;
  }
  else if (*(_BYTE*)(*(_QWORD*)v0 + 156LL) != 0) {
    v10 = 8;
  }
  else {
    v10 = 127472;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }

LABEL_14:
  v11 = *(_QWORD*)(v5 + v10 + 127192);
  v12 = (*(_QWORD*)(v5 + v10 + 127168) | v11) == 0 || v5 == 0;
  if (v12 || *(_DWORD*)(v5 + v10) != 0) {
    if (*(_DWORD*)(*(_QWORD*)v3 + 4368LL) != 1) {
      return GameRoutine_752850();
    }
    LODWORD(v13) = *(char*)(v1 + 82) + 32 * *(char*)(v1 + 83);
    v13 = (unsigned int)v13 >= 0x400 ? 0LL : (unsigned int)v13;
    v14 = *(_QWORD*)(*GameData_212ce98[0] + 96) + v13;
    v15 = *(unsigned __int8*)(v14 + 8);
    if (*(_BYTE*)(v14 + 8) == 0) {
      return GameRoutine_752850();
    }
    v16 = *(_QWORD*)(GameData_21ca310 + 56) +
          2224LL * *(unsigned __int8*)(v14 + 8);
    v11 = v16 - 2224;
    v17 = v15 > 0xFA || v16 == 2224;
    if (v17 || *(_QWORD*)(v16 - 1832) == 0) {
      return GameRoutine_752850();
    }
    v18 = *(_QWORD*)(v16 - 1784);
    if (v18 != 0) {
      if (*(unsigned __int8*)(v18 + 16) != v2) {
        return GameRoutine_752850();
      }
    }
    else if (v2 != 9) {
      return GameRoutine_752850();
    }
  }
  return v11;
}

bool MapDrawTargetLine_f21470(__int64 a1, __int64 a2)
{
  __int64* v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v11[4];
  _QWORD* v12;
  char v13;

  if (a1 == 0) {
    v3 = GameData_212ce90[0];
    v4 = *GameData_212ce90[0];
    if ((*(_BYTE*)(*GameData_212ce90[0] + 21) & 2) == 0) {
    LABEL_12:
      if ((*(_BYTE*)(v4 + 21) & 1) == 0 &&
          (*(_QWORD*)(a2 + 392) == 0 || (*(_BYTE*)(a2 + 417) & 0x1C) != 0 ||
           (*(float (**)(__int64))(*(_QWORD*)(a2 + 152) + 16LL))(a2 + 152) <=
               0.0f ||
           *(_BYTE*)(*(_QWORD*)(a2 + 440) + 16LL) != 1 ||
           (*(_BYTE*)(a2 + 417) & 0x20) == 0)) {
        return false;
      }
      return *(_QWORD*)(a2 + 2200) != 0;
    }
    v6 = (unsigned int)*(char*)(a2 + 584);
    v7 = (unsigned int)*(char*)(a2 + 585);
    v13 = 0;
    v12 = v11;
    v8 = *(_QWORD*)(*GameData_212ce98[0] + 160) + 8LL;
    v11[0] = GameData_1f94310;
    v11[1] = v8;
    v11[2] = &v13;
    GameRoutine_6c8a80(a2, v6, v7, v11);
    if (v12 == v11) {
      v9 = 32;
    }
    else {
      if (v12 == nullptr) {
      LABEL_10:
        if (v13 != 1) {
          return false;
        }
        v4 = *v3;
        goto LABEL_12;
      }
      v9 = 40;
    }
    (*(void (**)(__int64))(*v12 + v9))((__int64)v12);
    goto LABEL_10;
  }
  if ((GameRoutine_6c9cf0(a1, a2) & 1) == 0) {
    return false;
  }
  return *(_QWORD*)(a2 + 2200) != 0;
}

bool MapDrawTargetLine_Unknown6(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  int v6;

  v2 = GameData_212d020[0];
  v3 = *(_QWORD*)GameData_212d020[0];
  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 40LL))(a1);
  if ((GameRoutine_f0a0d0(v3, v4) & 1) == 0) {
    return false;
  }
  v5 = *(_QWORD*)v2;
  v6 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
  if (GameData_21ed070 != 0) {
    if (v6 != 0) {
      return false;
    }
  }
  else if (*(_BYTE*)(v5 + 196) == 1) {
    if (*(_DWORD*)(v5 + 192) != v6) {
      return false;
    }
  }
  else if (GameData_21d92e0 != v6) {
    return false;
  }
  return *(_DWORD*)(*(_QWORD*)v2 + 4368LL) != 7 ||
         (GameRoutine_788a40() & 1) != 0 &&
             *(_BYTE*)(*(_QWORD*)(GameData_21cd130 + 48) + 240LL) == 1;
}

__int64 game_map_MapDrawTargetLine_UpdateMesh_lambda0_Invoke(__int64 a1,
                                                             _DWORD* a2,
                                                             _DWORD* a3)
{
  return (*(_DWORD*)(**(_QWORD**)(a1 + 8) + 4LL * ((*a2 + 32 * *a3) >> 5) +
                     2120) >>
          *a2) &
         1;
}

__int64 game_map_MapDrawTargetLine_UpdateMesh_lambda1_Invoke(__int64 a1,
                                                             _DWORD* a2,
                                                             _DWORD* a3)
{
  return (*(_DWORD*)(**(_QWORD**)(a1 + 8) + 4LL * ((*a2 + 32 * *a3) >> 5) +
                     2376) >>
          *a2) &
         1;
}

#pragma GCC visibility pop
