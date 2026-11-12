#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_cf5c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_hub_anonymous_ProcHubSeqObeliskPerchBase_vtable[])();
extern __int64 (*game_hub_anonymous_ProcHubSeqObeliskPerchPart1_vtable[])();
extern __int64 GameData_21ec7c0;
extern __int64 GameData_21f3d08;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcHubSeqObeliskPerchPart1_Destructor_alt1(__int64 a1) __asm__(
    "ProcHubSeqObeliskPerchPart1_Destructor");
__int64 CharacterModel_cf5c00(__int64);
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcHubSeqObeliskPerchPart1_Destructor(__int64 a1);

void ProcHubSeqObeliskPerchPart1_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 i;
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  bool v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  *(_QWORD*)a1 = game_hub_anonymous_ProcHubSeqObeliskPerchPart1_vtable;
  v2 = *(_QWORD*)(GameData_21ec7c0 + 24);
  for (i = *(_QWORD*)(GameData_21ec7c0 + 32); v2 != i; v2 += 16) {
    v4 = *(_QWORD**)v2;
    if ((*(_BYTE*)(*(_QWORD*)v2 + 296LL) & 1) != 0 && v4[38] == 25) {
      v5 = (__int64*)v4[39];
      v6 = v5[2];
      v7 = *v5;
      v8 = v5[1];
      v9 = *((unsigned __int8*)v5 + 24);
      v10 = v7 == 0xE3A482E35F444950LL && v8 == 0x9E83E3A583E3B782LL;
      v11 = v10 && v6 == 0xB3E9AB83E3BC83E3LL;
      if (v11 && v9 == 165) {
        continue;
      }
    }
    v13 = *(_QWORD*)(*(_QWORD*)(v4[3] + 8LL) + 328LL);
    v14 = *(_QWORD*)(v13 + 360);
    *(_QWORD*)(v13 + 336) = 0x3F8000003F800000LL;
    *(_DWORD*)(v13 + 352) = 0;
    *(_BYTE*)(v13 + 356) = 1;
    *(_BYTE*)(v13 + 369) = 1;
    CharacterModel_cf5c00(v14);
  }
  *(_BYTE*)(GameData_21f3d08 + 146) = 0;
  v15 = *(_QWORD*)(a1 + 216);
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak_alt1(v15);
  }
  v16 = *(_QWORD*)(a1 + 200);
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak_alt1(v16);
  }
  v17 = *(_QWORD*)(a1 + 184);
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak_alt1(v17);
  }
  *(_QWORD*)a1 = game_hub_anonymous_ProcHubSeqObeliskPerchBase_vtable;
  if ((*(_BYTE*)(a1 + 152) & 1) != 0) {
    v18 = *(_QWORD*)(a1 + 168);
    if (v18 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v18);
    }
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
}

#pragma GCC visibility pop
