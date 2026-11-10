#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1958ed0(__int64 result, __int64);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_7a88a0(_QWORD);
__int64 SceneCharacter_1400a90(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_facility_ReleaseGroups(void);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
extern _DWORD* GameData_2130fb8;
extern _UNKNOWN* GameData_2176158;
extern __int64 (*GameData_211b828[])();
extern __int64 (*game_facility_anonymous_ProcDivinePerformance_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_212dd18[3];
extern __int64 GameData_21f4000;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64* GameData_2132488;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 ProcDivinePerformance_196d6e0(__int64 result);
unsigned __int64 ProcDivinePerformance_196d760();
__int64 ProcDivinePerformance_Destructor(__int64* a1);
__int64 ProcDivinePerformance_DeletingDestructor(__int64* a1);
__attribute__((swiftcall)) void
GameRoutine_1950740(__attribute__((swift_indirect_result)) void*, _QWORD*,
                    __int64, unsigned int);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__n128
game_facility_anonymous_ProcDivinePerformance_StartPerformance_closure_Invoke();

__int64 ProcDivinePerformance_196d6e0(__int64 result)
{
  int v1;
  int v2;
  int v3;
  __int64 v4;

  if (game_ProcGameSkipView_instance_ != 0 &&
      (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ + 152) -
              1 <=
          2) {
    v1 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v2 = (v1 & 8) != 0 ? 2 : 3;
    v3 = v2 & v1;
    v4 = *(_QWORD*)(result + 8);
    if (v3 == 0 && v4 != 0) {
      while (1) {
        if (*(_BYTE*)v4 == 2) {
          if (*(_DWORD*)(v4 + 32) == 0) {
            *(_QWORD*)(result + 16) = v4;
            *(_WORD*)(result + 136) &= ~0x80u;
            return result;
          }
        }
        else if (*(_BYTE*)v4 == 0) {
          return result;
        }
        v4 += 64;
      }
    }
  }
  return result;
}

unsigned __int64 ProcDivinePerformance_196d760()
{
  __int64 v0;
  void* v1;
  unsigned __int64 result;
  unsigned __int64 v3;
  char* v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  char* v19;
  _QWORD v20[2];

  v0 = GameData_21f4000;
  v1 = GameData_2176158;
  result = strlen(GameData_2176158);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(result);
  }
  v3 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v5 = 26;
    }
    else {
      v5 = (result | 7) + 1;
    }
    v4 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v5, 16,
                                               0);
    v18 = v3;
    v19 = v4;
    v17 = v5 | 1;
    goto LABEL_9;
  }
  LOBYTE(v17) = 2 * result;
  v4 = (char*)&v17 + 1;
  if (result != 0) {
  LABEL_9:
    result = memmove(v4, v1, v3);
  }
  v4[v3] = 0;
  v6 = *(__int64**)(v0 + 160);
  v7 = *(__int64**)(v0 + 168);
  if (v6 == v7) {
    v8 = 0;
    if ((v17 & 1) == 0) {
      goto LABEL_27;
    }
    goto LABEL_23;
  }
  while (1) {
    v9 = *v6++;
    v8 = v9;
    v10 = *(_QWORD*)(v9 + 40);
    v11 = v9 + 25;
    v12 = (*(_BYTE*)(v9 + 24) & 1) != 0 ? v10 : v11;
    v13 = v19;
    v14 = (unsigned __int64)(unsigned __int8)v17 >> 1;
    if ((v17 & 1) != 0) {
      v14 = v18;
    }
    else {
      v13 = (char*)&v17 + 1;
    }
    v20[0] = v13;
    v20[1] = v14;
    v15 = game_HashString(v12);
    result = GameRoutine_7a88a0(v20);
    if (v15 == result) {
      break;
    }
    if (v6 == v7) {
      v8 = 0;
      break;
    }
  }
  if ((v17 & 1) != 0) {
  LABEL_23:
    if (v19 != nullptr) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16);
    }
  }
LABEL_27:
  if (v8 != 0) {
    BYTE2(v17) = 1;
    LOWORD(v17) = 257;
    return SceneCharacter_1400a90(v8, &v17);
  }
  return result;
}

__n128

game_facility_anonymous_ProcDivinePerformance_StartPerformance_closure_Invoke()
{
  __n128 result;
  __int64 v1;
  __int64 v2;
  char v3;
  _BYTE v4[13];
  char v5;
  __int64 v6;
  char v7;
  unsigned __int64 v8;
  _BYTE v9[11];
  char v10;
  __int64* v11;
  __int64 v12;

  v10 = 0;
  v5 = 0;
  v7 = 38;
  *(_DWORD*)&v9[7] = -1699813958;
  *(_QWORD*)v9 = 0xBAA2E79C9EE690B5LL;
  v8 = 0xE75F8481E3A08DE5LL;
  v3 = 26;
  *(_QWORD*)v4 = 0xE75F8481E3A08DE5LL;
  *(_QWORD*)&v4[5] = 0x8AB8E4A49BE75F84LL;
  GameRoutine_1950740((void*)(&v11), &v7, (__int64)&v3, 1u);
  v1 = v12;
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    result = std___1___shared_weak_count___release_weak_alt1(v1);
    if ((v3 & 1) == 0) {
      return result;
    }
  }
  else if ((v3 & 1) == 0) {
    return result;
  }
  if (v6 != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
  }
  return result;
}

__int64 ProcDivinePerformance_Destructor(__int64* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;

  v1 = a1[5];
  *(a1 - 19) = (__int64)game_facility_anonymous_ProcDivinePerformance_vtable;
  v3 = (__int64)(a1 - 19);
  *a1 = (__int64)GameData_211b828;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  v4 = GameData_212dd18[0] + 192;
  *(a1 - 19) = GameData_212dd18[0] + 16;
  *a1 = v4;
  GameRoutine_1958ed0((__int64)a1, v3);
  *a1 = (__int64)(GameData_2132488 + 2);
  v5 = (_QWORD*)GameData_212dce8;
  v6 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
    if (*v5 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v5 + 8LL))(*v5);
    }
    *v5 = 0;
  }
  game_facility_ReleaseGroups();
  *(a1 - 19) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 2) & 0x100) != 0) {
    *((_WORD*)a1 - 8) &= ~0x100u;
  }
  game_ProcInst_Unregister(v3);
  return GameRoutine_658c00(a1 - 8);
}

__int64 ProcDivinePerformance_DeletingDestructor(__int64* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v8;

  v1 = a1[5];
  *(a1 - 19) = (__int64)game_facility_anonymous_ProcDivinePerformance_vtable;
  v3 = (__int64)(a1 - 19);
  *a1 = (__int64)GameData_211b828;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  v4 = GameData_212dd18[0] + 192;
  *(a1 - 19) = GameData_212dd18[0] + 16;
  *a1 = v4;
  GameRoutine_1958ed0((__int64)a1, v3);
  *a1 = (__int64)(GameData_2132488 + 2);
  v5 = (_QWORD*)GameData_212dce8;
  v6 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
    if (*v5 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v5 + 8LL))(*v5);
    }
    *v5 = 0;
  }
  game_facility_ReleaseGroups();
  *(a1 - 19) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 2) & 0x100) != 0) {
    *((_WORD*)a1 - 8) &= ~0x100u;
  }
  game_ProcInst_Unregister(v3);
  GameRoutine_658c00(a1 - 8);
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v8);
}

#pragma GCC visibility pop
