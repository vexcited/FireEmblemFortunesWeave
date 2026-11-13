#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1450260(_QWORD, _QWORD);
__int64 GameRoutine_1958ed0(__int64 result, __int64);
__int64 GameRoutine_658c00(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_facility_ReleaseGroups(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _DWORD* GameData_2130fb8;
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_212dd18[3];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2132488;
__int64
game_facility_anonymous_ProcOpeningCameraWork_SetConversationCamera_closure_Invoke_alt1() __asm__(
    "game_facility_anonymous_ProcOpeningCameraWork_SetConversationCamera_"
    "closure_Invoke");
__int64 ProcOpeningCameraWork_Destructor(__int64* a1);
__int64 ProcOpeningCameraWork_DeletingDestructor_alt1(__int64* a1) __asm__(
    "ProcOpeningCameraWork_DeletingDestructor");
__attribute__((swiftcall)) void
GameRoutine_1450260_alt1(PSEUDO_X8, __int64,
                         __int64) __asm__("GameRoutine_1450260");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
__int64
game_facility_ReleaseGroups_alt1() __asm__("game_facility_ReleaseGroups");
void FacilitySceneBase_1958ed0(__int64, __int64);
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__attribute__((swiftcall)) void
game_facility_anonymous_ProcOpeningCameraWork_SetConversationCamera_closure_Invoke(
    PSEUDO_X8 x8_);
void ProcOpeningCameraWork_DeletingDestructor(__int64* a1);
_QWORD* GameRoutine_14514d0(_QWORD* result, _QWORD*);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern __int64 (*GameData_211b418[])();
extern __int64 GameData_21f4000;
float GameHr_144f360(__int64);
void game_facility_anonymous_ProcOpeningCameraWork_SetConversationCamera();

void game_facility_anonymous_ProcOpeningCameraWork_SetConversationCamera()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;

  {
    v0 = *(_QWORD*)(GameData_21f4000 + 264);
    __asm__ volatile("" ::"r"(v0));
  }
  if (v0 != 0) {
    {
      v1 = *(_QWORD*)(GameData_21f4000 + 256);
      __asm__ volatile("" ::"r"(v1));
    }
    {
      v2 = *(_QWORD*)(GameData_21f4000 + 264);
      __asm__ volatile("" ::"r"(v2));
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v0 + 16), 1u,
                              memory_order_relaxed);
    v3 = std___1___shared_weak_count_lock(v2);
    std___1___shared_weak_count___release_weak(v0);
    if (v3 != 0) {
      if (v1 == 0) {
        goto LABEL_14;
      }
      GameHr_144f360(v1);
      v6_.v6[0] = GameData_211b418;
      v6_.v7 = v6_.v6;
      v8_.v9 = v8_.v8;
      v8_.v8[0] = GameData_211b418;
      GameRoutine_14514d0(v8_.v8, (_QWORD*)(v1 + 272));
      if (v8_.v9 == v8_.v8) {
        v4 = 32;
      }
      else {
        if (v8_.v9 == nullptr) {
          goto LABEL_9;
        }
        v4 = 40;
      }
      (*(void (**)(__int64))(*v8_.v9 + v4))((__int64)v8_.v9);
    LABEL_9:
      if (v6_.v7 == v6_.v6) {
        v5 = 32;
      }
      else {
        if (v6_.v7 == nullptr) {
          goto LABEL_14;
        }
        v5 = 40;
      }
      (*(void (**)(__int64))(*v6_.v7 + v5))((__int64)v6_.v7);
    LABEL_14:
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak(v3);
      }
    }
  }
}

__attribute__((swiftcall)) void

game_facility_anonymous_ProcOpeningCameraWork_SetConversationCamera_closure_Invoke(
    PSEUDO_X8 x8_)
{

#pragma clang fp contract(off)
  float32x4_t** a1 = (float32x4_t**)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  unsigned __int64 v7;
  _BYTE v8[15];
  struct {
    _QWORD v9[2];
    __int64 v10;
  } v9_;

  v2 = fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  *(_BYTE*)(v3 + 38) = 0;
  v8[13] = 0;
  v9_.v9[0] = 41;
  v9_.v9[1] = 38;
  v9_.v10 = v3;
  *(_QWORD*)(v3 + 16) = 0xA3E95FA983E3A183LL;
  *(_QWORD*)(v3 + 24) = 0x9ABCE45F82A0E59FLL;
  *(_QWORD*)(v3 + 30) = 0xADB8E4B1A9E89ABCLL;
  *(_QWORD*)v3 = 0x83E3B182E3AD83E3LL;
  *(_QWORD*)(v3 + 8) = 0xE3AB82E3BF82E3BCLL;
  v6 = 42;
  v7 = 0xE35F82A0E59FA3E9LL;
  *(_QWORD*)v8 = 0x9683E3BC83E38683LL;
  *(_QWORD*)&v8[5] = 0x305FAB83E39683E3LL;
  GameRoutine_1450260_alt1((void*)(a1), (__int64)v9_.v9, (__int64)&v6);
  if ((v6 & 1) != 0 && *(_QWORD*)&v8[7] != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v4, *(__int64*)&v8[7]);
  }
  if ((v9_.v9[0] & 1) != 0 && v9_.v10 != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v5, v9_.v10);
  }
}

__int64 ProcOpeningCameraWork_Destructor(__int64* a1)
{
  __int64 v2;
  __int64* v3;
  _QWORD* v4;
  __int64 v5;

  v2 = GameData_212dd18[0] + 192;
  *(a1 - 19) = GameData_212dd18[0] + 16;
  v3 = a1 - 19;
  *a1 = v2;
  GameRoutine_1958ed0((__int64)a1, (__int64)(a1 - 19));
  *a1 = (__int64)(GameData_2132488 + 2);
  v4 = (_QWORD*)GameData_212dce8;
  v5 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 24LL))(v5);
    if (*v4 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v4 + 8LL))(*v4);
    }
    *v4 = 0;
  }
  game_facility_ReleaseGroups();
  *(a1 - 19) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 2) & 0x100) != 0) {
    *((_WORD*)a1 - 8) &= ~0x100u;
  }
  game_ProcInst_Unregister(v3);
  return GameRoutine_658c00(a1 - 8);
}

void ProcOpeningCameraWork_DeletingDestructor(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v7;

  v2 = GameData_212dd18[0] + 192;
  *(a1 - 19) = GameData_212dd18[0] + 16;
  v3 = (__int64)(a1 - 19);
  *a1 = v2;
  FacilitySceneBase_1958ed0((__int64)a1, (__int64)(a1 - 19));
  *a1 = (__int64)(GameData_2132488 + 2);
  v4 = (_QWORD*)GameData_212dce8;
  v5 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 &&
      (signed __int32)(*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 24LL))(v5);
    if (*v4 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v4 + 8LL))(*v4);
    }
    *v4 = 0;
  }
  game_facility_ReleaseGroups_alt1();
  *(a1 - 19) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 2) & 0x100) != 0) {
    *((_WORD*)a1 - 8) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(v3);
  GameRoutine_658c00_alt1(a1 - 8);
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v7 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v3);
}

#pragma GCC visibility pop
