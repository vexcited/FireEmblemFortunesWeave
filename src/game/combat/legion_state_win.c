#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 StateMachines_e32520(__int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
char* GameRoutine_e37f80(__int64*, char*, char*);
extern _UNKNOWN game_g_random_mutex;
extern __int64* GameData_212f368[9];
extern __int64* GameData_212f388[5];
extern __int64* GameData_212f398[3];
extern __int64* GameData_212f3d0[5];
extern __int64* GameData_212f3d8[4];
extern __int64* GameData_212f3e8[2];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 fw_memory_g_heap_manager_ptr;
void nn_mem_StandardAllocator_Free(__int64, __int64);
char* LegionStateWin_Unknown3(__int64 a1);

char* LegionStateWin_Unknown3(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64* v3;
  _QWORD* v4;
  int v5;
  __int64 v6;
  __int64* v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  __int64 v12;
  float v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64* v27;
  __int64 v28;
  char* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64* v37;
  __int64* v38;
  __int64* v39;
  __int64 v40;
  char* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  char* v45;
  char* result;
  __int64 v47;
  struct {
    __int64 v48;
    __int64 v49;
  } v48_;
  struct {
    __int64 v50;
    __int64 v51;
  } v50_;
  struct {
    __int64 v52;
    __int64 v53;
  } v52_;
  struct {
    __int64 v54;
    __int64 v55;
  } v54_;
  struct {
    __int64 v56;
    __int64 v57;
  } v56_;
  _QWORD v58[3];

  v1 = *(_QWORD*)(a1 + 8);
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  v4 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  v58[0] = v4;
  *v4 = 0x783C0ED4436C6B70LL;
  v58[1] = v4 + 1;
  v58[2] = v4 + 1;
  v5 = StateMachines_e32520(v1, (__int64)v58);
  v6 = 128;
  if (*(_QWORD*)(*v3 + 200) == 0) {
    v6 = 56;
  }
  nn_mem_StandardAllocator_Free(*v3 + v6, (__int64)v4);
  nn_os_LockMutex((__int64)&game_g_random_mutex);
  v7 = game_map_MapRandom_instance__ptr[0];
  v8 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((_UNKNOWN**)0x8LL));
  v9 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
  v10 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
        (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
  *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
      *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
  *((_DWORD*)v7 + 1) = v8;
  v11 = (v10 >> 8) ^ (v9 >> 19) ^ v10 ^ v9;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v7) = v9;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v7 + 4) = v11;
  nn_os_UnlockMutex((__int64)&game_g_random_mutex);
  v12 = *(_QWORD*)(a1 + 8);
  v13 = vcvts_n_f32_u32((unsigned __int16)v11, 0x10u);
  v15 = *(_QWORD*)(v12 + 136);
  v14 = (__int64*)(v12 + 136);
  v16 = v14[5];
  v17 = v14[1] - v15;
  v18 = v17 >> 4;
  v19 = fw_memory_HeapManager_Allocate(*v3, 80, 16, 0);
  *(_QWORD*)(v19 + 16) = 0;
  v20 = GameData_212f3d8[0];
  *(_WORD*)(v19 + 32) = 0;
  *(_QWORD*)(v19 + 64) = v16;
  *(_DWORD*)(v19 + 72) = 0;
  *(_QWORD*)v19 = v20 + 2;
  *(_QWORD*)(v19 + 8) = 0;
  strcpy((char*)(v19 + 40), "\nDelay");
  v21 = GameData_212f368[0];
  *(float*)(v19 + 76) = v13 * 0x1.8000000000000p+0f;
  v56_.v57 = v19;
  *(_QWORD*)(v19 + 24) = v21 + 2;
  v22 = *v14;
  v56_.v56 = v19 + 24;
  if ((int)(v17 >> 4) <= 0) {
    v23 = (char*)v22;
  }
  else {
    v23 = (char*)(v22 + ((v17 + 0xFFFFFFFF0LL) & 0xFFFFFFFF0LL) + 16);
  }
  GameRoutine_e37f80(v14, v23, (char*)&v56_.v56);
  v24 = v56_.v57;
  if (v56_.v57 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v56_.v57 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
    std___1___shared_weak_count___release_weak(v24);
  }
  v25 = fw_memory_HeapManager_Allocate(*v3, 88, 16, 0);
  *(_QWORD*)(v25 + 16) = 0;
  v26 = GameData_212f3e8[0];
  *(_WORD*)(v25 + 32) = 0;
  *(_QWORD*)v25 = v26 + 2;
  *(_QWORD*)(v25 + 8) = 0;
  strcpy((char*)(v25 + 40), " WaitAnimComplate");
  *(_QWORD*)(v25 + 64) = v16;
  *(_QWORD*)(v25 + 72) = 0x3F80000000000000LL;
  v27 = GameData_212f398[0];
  *(_BYTE*)(v25 + 80) = 1;
  *(_DWORD*)(v25 + 84) = 0;
  v54_.v55 = v25;
  *(_QWORD*)(v25 + 24) = v27 + 2;
  v28 = *v14;
  v54_.v54 = v25 + 24;
  if ((v18 & 0x80000000) == 0LL) {
    v29 = (char*)(v28 + (v17 & 0xFFFFFFFF0LL) + 16);
  }
  else {
    v29 = (char*)v28;
  }
  GameRoutine_e37f80(v14, v29, (char*)&v54_.v54);
  v30 = v54_.v55;
  if (v54_.v55 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v54_.v55 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    std___1___shared_weak_count___release_weak(v30);
  }
  v31 = fw_memory_HeapManager_Allocate(*v3, 80, 16, 0);
  *(_QWORD*)(v31 + 8) = 0;
  *(_QWORD*)(v31 + 16) = 0;
  *(_WORD*)(v31 + 32) = 0;
  *(_QWORD*)v31 = v20 + 2;
  *(_QWORD*)(v31 + 64) = v16;
  *(_DWORD*)(v31 + 72) = 0;
  *(float*)(v31 + 76) = v13 * 0x1.0000000000000p-1f;
  v52_.v53 = v31;
  strcpy((char*)(v31 + 40), "\nDelay");
  *(_QWORD*)(v31 + 24) = v21 + 2;
  v32 = *v14;
  v52_.v52 = v31 + 24;
  if ((int)v18 <= -2) {
    v33 = (char*)v32;
  }
  else {
    v33 = (char*)(v32 + ((v17 + 16) & 0xFFFFFFFF0LL) + 16);
  }
  GameRoutine_e37f80(v14, v33, (char*)&v52_.v52);
  v34 = v52_.v53;
  if (v52_.v53 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v52_.v53 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
    std___1___shared_weak_count___release_weak(v34);
  }
  v35 = fw_memory_HeapManager_Allocate(*v3, 120, 16, 0);
  *(_QWORD*)(v35 + 16) = 0;
  v36 = GameData_212f3d0[0];
  *(_WORD*)(v35 + 32) = 0;
  *(_BYTE*)(v35 + 40) = 12;
  v37 = v36 + 2;
  strcpy((char*)(v35 + 41), "Motion");
  *(_QWORD*)(v35 + 64) = v16;
  *(_QWORD*)v35 = v36 + 2;
  *(_QWORD*)(v35 + 8) = 0;
  v38 = GameData_212f388[0];
  *(_BYTE*)(v35 + 80) = 0;
  *(_BYTE*)(v35 + 84) = 0;
  *(_BYTE*)(v35 + 88) = 0;
  *(_BYTE*)(v35 + 92) = 0;
  *(_BYTE*)(v35 + 96) = 0;
  *(_BYTE*)(v35 + 100) = 0;
  *(_BYTE*)(v35 + 104) = 0;
  *(_QWORD*)(v35 + 108) = 0;
  v39 = v38 + 2;
  *(_BYTE*)(v35 + 116) = 0;
  *(_DWORD*)(v35 + 72) = 0;
  *(_DWORD*)(v35 + 76) = v5;
  v50_.v51 = v35;
  *(_QWORD*)(v35 + 24) = v38 + 2;
  v40 = *v14;
  v50_.v50 = v35 + 24;
  if ((int)v18 <= -3) {
    v41 = (char*)v40;
  }
  else {
    v41 = (char*)(v40 + ((v17 + 32) & 0xFFFFFFFF0LL) + 16);
  }
  GameRoutine_e37f80(v14, v41, (char*)&v50_.v50);
  v42 = v50_.v51;
  if (v50_.v51 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v50_.v51 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
    std___1___shared_weak_count___release_weak(v42);
  }
  v43 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       120, 16, 0);
  *(_QWORD*)(v43 + 8) = 0;
  *(_QWORD*)(v43 + 16) = 0;
  *(_QWORD*)v43 = v37;
  *(_WORD*)(v43 + 32) = 0;
  *(_BYTE*)(v43 + 40) = 12;
  strcpy((char*)(v43 + 41), "Motion");
  *(_QWORD*)(v43 + 64) = v16;
  *(_BYTE*)(v43 + 80) = 0;
  *(_BYTE*)(v43 + 84) = 0;
  *(_BYTE*)(v43 + 88) = 0;
  *(_BYTE*)(v43 + 92) = 0;
  *(_BYTE*)(v43 + 96) = 0;
  *(_BYTE*)(v43 + 100) = 0;
  *(_BYTE*)(v43 + 104) = 0;
  *(_QWORD*)(v43 + 108) = 0;
  *(_BYTE*)(v43 + 116) = 0;
  v48_.v49 = v43;
  *(_DWORD*)(v43 + 72) = 0;
  *(_DWORD*)(v43 + 76) = -574916402;
  *(_QWORD*)(v43 + 24) = v39;
  v44 = v43 + 24;
  if ((int)v18 <= -4) {
    v45 = (char*)*v14;
  }
  else {
    v45 = (char*)(*v14 + ((v17 + 48) & 0xFFFFFFFF0LL) + 16);
  }
  v48_.v48 = v44;
  result = GameRoutine_e37f80(v14, v45, (char*)&v48_.v48);
  v47 = v48_.v49;
  if (v48_.v49 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v48_.v49 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47);
    return (char*)std___1___shared_weak_count___release_weak(v47);
  }
  return result;
}

#pragma GCC visibility pop
