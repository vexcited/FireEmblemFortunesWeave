#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 StateMachines_e32520(__int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
char* GameRoutine_e37f80(__int64*, char*, char*);
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*game_combat_LegionStackDelay_vtable[])();
extern __int64 (*game_combat_LegionStackMotion_vtable[])();
extern __int64 (*game_combat_LegionStackWaitAnimComplate_vtable[])();
extern __int64* GameData_212f3d0[5];
extern __int64* GameData_212f3d8[4];
extern __int64* GameData_212f3e8[2];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_21ec7b0;
extern __int64 fw_memory_g_heap_manager_ptr;
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 LegionStateEnd_Unknown3(__int64 a1);

__int64 LegionStateEnd_Unknown3(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  int v3;
  unsigned int v4;
  unsigned int v5;
  int v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  char* v22;
  __int64 result;
  __int64 v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  __int64 v29;
  _QWORD* v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  char* v36;
  __int64 v37;
  struct {
    __int64 v38;
    __int64 v39;
  } v38_;
  _QWORD v40[3];
  struct {
    __int64 v41;
    __int64 v42;
  } v41_;
  struct {
    __int64 v43;
    __int64 v44;
  } v43_;

  nn_os_LockMutex((__int64)&game_g_random_mutex);
  v2 = game_map_MapRandom_instance__ptr[0];
  v3 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((_UNKNOWN**)0x8LL));
  v4 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
  v5 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
       (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
  *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
      *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
  *((_DWORD*)v2 + 1) = v3;
  v6 = (v5 >> 8) ^ (v4 >> 19) ^ v5 ^ v4;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2) = v4;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2 + 4) = v6;
  nn_os_UnlockMutex((__int64)&game_g_random_mutex);
  v7 = *(_QWORD*)(a1 + 8);
  v9 = *(_QWORD*)(v7 + 136);
  v8 = (__int64*)(v7 + 136);
  v10 = v8[5];
  v11 = (__int64*)fw_memory_g_heap_manager_ptr;
  v12 = v8[1] - v9;
  v13 = v12 >> 4;
  v14 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       80, 16, 0);
  *(_QWORD*)(v14 + 16) = 0;
  v15 = GameData_212f3d8[0];
  *(_WORD*)(v14 + 32) = 0;
  *(_QWORD*)(v14 + 64) = v10;
  *(_DWORD*)(v14 + 72) = 0;
  *(_QWORD*)v14 = v15 + 2;
  *(_QWORD*)(v14 + 8) = 0;
  strcpy((char*)(v14 + 40), "\nDelay");
  *(float*)(v14 + 76) =
      vcvts_n_f32_u32((unsigned __int16)v6, 0x10u) * 0x1.8000000000000p+0f;
  v43_.v44 = v14;
  *(_QWORD*)(v14 + 24) = game_combat_LegionStackDelay_vtable;
  v16 = *v8;
  v43_.v43 = v14 + 24;
  if ((int)(v12 >> 4) <= 0) {
    v17 = (char*)v16;
  }
  else {
    v17 = (char*)(v16 + ((v12 + 0xFFFFFFFF0LL) & 0xFFFFFFFF0LL) + 16);
  }
  GameRoutine_e37f80(v8, v17, (char*)&v43_.v43);
  v18 = v43_.v44;
  if (v43_.v44 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v43_.v44 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak(v18);
  }
  v19 = fw_memory_HeapManager_Allocate(*v11, 88, 16, 0);
  *(_QWORD*)(v19 + 16) = 0;
  v20 = GameData_212f3e8[0];
  *(_WORD*)(v19 + 32) = 0;
  *(_QWORD*)v19 = v20 + 2;
  *(_QWORD*)(v19 + 8) = 0;
  strcpy((char*)(v19 + 40), " WaitAnimComplate");
  *(_QWORD*)(v19 + 64) = v10;
  *(_QWORD*)(v19 + 72) = 0x3FC0000000000000LL;
  *(_BYTE*)(v19 + 80) = 1;
  *(_DWORD*)(v19 + 84) = 0;
  v41_.v42 = v19;
  *(_QWORD*)(v19 + 24) = game_combat_LegionStackWaitAnimComplate_vtable;
  v21 = *v8;
  v41_.v41 = v19 + 24;
  if ((v13 & 0x80000000) == 0LL) {
    v22 = (char*)(v21 + (v12 & 0xFFFFFFFF0LL) + 16);
  }
  else {
    v22 = (char*)v21;
  }
  result = (__int64)GameRoutine_e37f80(v8, v22, (char*)&v41_.v41);
  v24 = v41_.v42;
  if (v41_.v42 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v41_.v42 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
    result = std___1___shared_weak_count___release_weak(v24);
  }
  if ((GameData_21ec7b0 == 0 ||
       (*(_BYTE*)(*(_QWORD*)(GameData_21ec7b0 + 8) + 112LL) & 0x40) == 0) &&
      (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 176LL) +
                                       64LL) +
                            8LL) +
                 110LL) &
       1) == 0 &&
      (*(_DWORD*)(*(_QWORD*)(GameData_21ec7b0 + 8) + 112LL) & 0x20001) == 1) {
    nn_os_LockMutex((__int64)&game_g_random_mutex);
    v25 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2);
    v26 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2 + 4);
    v27 = *(_DWORD*)v2 ^ (*(_DWORD*)v2 << 11);
    *(_DWORD*)v2 = *((_DWORD*)v2 + 1);
    *((_DWORD*)v2 + 1) = v25;
    v28 = (v27 >> 8) ^ (v26 >> 19) ^ v27 ^ v26;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2) = v26;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2 + 4) = v28;
    result = nn_os_UnlockMutex((__int64)&game_g_random_mutex);
    if (vcvts_n_f32_u32((unsigned __int16)v28, 0x10u) < 0x1.3333340000000p-2f) {
      v29 = *(_QWORD*)(a1 + 8);
      v30 = (_QWORD*)fw_memory_HeapManager_Allocate(*v11, 8, 16, 0);
      v40[0] = v30;
      *v30 = 0xDDC747D82451873LL;
      v40[1] = v30 + 1;
      v40[2] = v30 + 1;
      v31 = StateMachines_e32520(v29, (__int64)v40);
      v32 = 128;
      if (*(_QWORD*)(*v11 + 200) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free(*v11 + v32, (__int64)v30);
      v33 = fw_memory_HeapManager_Allocate(*v11, 120, 16, 0);
      *(_QWORD*)(v33 + 16) = 0;
      v34 = GameData_212f3d0[0];
      *(_WORD*)(v33 + 32) = 0;
      *(_QWORD*)(v33 + 64) = v10;
      *(_QWORD*)v33 = v34 + 2;
      *(_QWORD*)(v33 + 8) = 0;
      *(_BYTE*)(v33 + 40) = 12;
      strcpy((char*)(v33 + 41), "Motion");
      *(_BYTE*)(v33 + 80) = 0;
      *(_BYTE*)(v33 + 84) = 0;
      *(_BYTE*)(v33 + 88) = 0;
      *(_BYTE*)(v33 + 92) = 0;
      *(_BYTE*)(v33 + 96) = 0;
      *(_BYTE*)(v33 + 100) = 0;
      *(_BYTE*)(v33 + 104) = 0;
      *(_QWORD*)(v33 + 108) = 0;
      *(_BYTE*)(v33 + 116) = 0;
      *(_DWORD*)(v33 + 72) = 0;
      *(_DWORD*)(v33 + 76) = v31;
      v38_.v39 = v33;
      *(_QWORD*)(v33 + 24) = game_combat_LegionStackMotion_vtable;
      v35 = *v8;
      v38_.v38 = v33 + 24;
      if ((int)v13 <= -2) {
        v36 = (char*)v35;
      }
      else {
        v36 = (char*)(v35 + ((v12 + 16) & 0xFFFFFFFF0LL) + 16);
      }
      result = (__int64)GameRoutine_e37f80(v8, v36, (char*)&v38_.v38);
      v37 = v38_.v39;
      if (v38_.v39 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v38_.v39 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
        return std___1___shared_weak_count___release_weak(v37);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
