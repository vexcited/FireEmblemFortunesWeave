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
game_facility_anonymous_ProcOpeningCameraWork_SetConversationCamera_closure_Invoke();
__int64 ProcOpeningCameraWork_Destructor(__int64* a1);
__int64 ProcOpeningCameraWork_DeletingDestructor(__int64* a1);
__int64

game_facility_anonymous_ProcOpeningCameraWork_SetConversationCamera_closure_Invoke()
{
  __int64 v0;
  __int64 v1;
  __int64 result;
  __int64 v3;
  __int64 v4;
  char v5;
  unsigned __int64 v6;
  _BYTE v7[15];
  _QWORD v8[2];
  __int64 v9;

  v0 = fw_memory_g_heap_manager_ptr;
  v1 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      40, 16, 0);
  *(_BYTE*)(v1 + 38) = 0;
  v7[13] = 0;
  v8[0] = 41;
  v8[1] = 38;
  v9 = v1;
  *(_QWORD*)(v1 + 16) = 0xA3E95FA983E3A183LL;
  *(_QWORD*)(v1 + 24) = 0x9ABCE45F82A0E59FLL;
  *(_QWORD*)(v1 + 30) = 0xADB8E4B1A9E89ABCLL;
  *(_QWORD*)v1 = 0x83E3B182E3AD83E3LL;
  *(_QWORD*)(v1 + 8) = 0xE3AB82E3BF82E3BCLL;
  v5 = 42;
  v6 = 0xE35F82A0E59FA3E9LL;
  *(_QWORD*)v7 = 0x9683E3BC83E38683LL;
  *(_QWORD*)&v7[5] = 0x305FAB83E39683E3LL;
  result = GameRoutine_1450260(v8, &v5);
  if ((v5 & 1) != 0 && *(_QWORD*)&v7[7] != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) == 0) {
      v3 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v0 + v3);
  }
  if ((v8[0] & 1) != 0 && v9 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) == 0) {
      v4 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v0 + v4);
  }
  return result;
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

__int64 ProcOpeningCameraWork_DeletingDestructor(__int64* a1)
{
  __int64 v2;
  __int64* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v7;

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
  GameRoutine_658c00(a1 - 8);
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v7);
}

#pragma GCC visibility pop
