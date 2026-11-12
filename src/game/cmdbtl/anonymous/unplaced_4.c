#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameHr_1366ac0(PSEUDO_X8, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memset(__int64, int, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
const char* game_HashString32(const char* result);
extern _UNKNOWN GameData_2174af8;
extern __int64 (*game_cmdbtl_anonymous_ProcAutoSelect_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void BasicInfo_15e5b50(__int64, __int64*, __int64);
__int64 game_cmdbtl_anonymous_16266a0(_QWORD* a1);

__int64 game_cmdbtl_anonymous_16266a0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  struct {
    __int64 v10;
    __int64 v11;
  } v10_;

  GameHr_1366ac0((void*)(&v10_.v10), (__int64)"Layout/Battle.arc",
                 (__int64)"Battle_CmdBtl_UI");
  v2 = v10_.v10;
  v3 = v10_.v11;
  v4 = a1[21];
  v10_.v10 = 0;
  v10_.v11 = 0;
  a1[20] = v2;
  a1[21] = v3;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = v10_.v11;
  if (v10_.v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10_.v11 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      416, 16, 0);
  memset(v6, 0, 0x1A0u);
  v10_.v10 = 0;
  v10_.v11 = 0;
  BasicInfo_15e5b50(v6, &v10_.v10, 0);
  v7 = v10_.v11;
  if (v10_.v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10_.v11 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  *(_QWORD*)(v6 + 384) = 0;
  *(_QWORD*)(v6 + 224) = 0;
  *(_QWORD*)(v6 + 232) = 0;
  *(_QWORD*)(v6 + 240) = 0;
  *(_DWORD*)(v6 + 264) = 0;
  *(_QWORD*)(v6 + 272) = 0;
  *(_QWORD*)(v6 + 280) = 0;
  *(_QWORD*)(v6 + 288) = 0;
  *(_QWORD*)(v6 + 336) = 0;
  *(_QWORD*)(v6 + 352) = 0;
  *(_QWORD*)(v6 + 360) = 0;
  *(_BYTE*)(v6 + 368) = 0;
  *(_QWORD*)v6 = game_cmdbtl_anonymous_ProcAutoSelect_vtable;
  *(_QWORD*)(v6 + 256) = 0xFFFFFFFFLL;
  *(_BYTE*)(v6 + 400) = 0;
  *(_BYTE*)(v6 + 404) = 0;
  *(_BYTE*)(v6 + 412) = 0;
  *(_DWORD*)(v6 + 408) = 0;
  *(_DWORD*)(v6 + 208) = 2;
  *(_DWORD*)(v6 + 296) = 2;
  *(_DWORD*)(v6 + 391) = 0;
  v8 = a1[5];
  if (v8 != 0) {
    *(_QWORD*)(v8 + 48) = v6;
    *(_QWORD*)(v6 + 56) = a1[5];
  }
  a1[5] = v6;
  *(_QWORD*)(v6 + 24) = "ProcAutoSelect";
  *(_QWORD*)(v6 + 32) = a1;
  *(_DWORD*)(v6 + 140) = (unsigned int)game_HashString32("ProcAutoSelect");
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 24;
  *(_QWORD*)(v6 + 80) = 1;
  *(_QWORD*)(v6 + 8) = &GameData_2174af8;
  *(_QWORD*)(v6 + 16) = &GameData_2174af8;
  (*(void (**)(__int64))(*(_QWORD*)v6 + 32LL))(v6);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 136LL))(v6);
  if ((result & 1) != 0 && (*(_WORD*)(v6 + 136) & 0x100) == 0) {
    *(_WORD*)(v6 + 136) |= 0x100u;
  }
  a1[246] = v6;
  return result;
}

#pragma GCC visibility pop
