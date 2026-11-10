#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1958ed0(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_HashString(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_facility_ReleaseGroups(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _DWORD* GameData_2130fb8;
extern __int64 (*GameData_203be08[])();
extern __int64 (*game_facility_anonymous_ProcOpening_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_212dd18[3];
extern __int64 GameData_2241850;
extern __int64 GameData_22420e0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2132488;
__int64 ProcOpening_142ea60(__int64 a1);
void game_facility_anonymous_ProcOpening_PlaySpecialTelop_closure_Invoke();
__int64 ProcOpening_Destructor(__int64* a1);
__int64 ProcOpening_DeletingDestructor(__int64* a1);

__int64 ProcOpening_142ea60(__int64 a1)
{
  __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;

  LODWORD(v1) = 0;
  if (a1 == 0 || GameData_2241850 == 0) {
    return (unsigned int)v1;
  }
  v2 = game_HashString(a1);
  if (v2 == 0) {
    goto LABEL_9;
  }
  v3 = *(_QWORD*)(GameData_2241850 + 96);
  if (v3 == 0 || *(_QWORD*)(GameData_2241850 + 112) == 0) {
    goto LABEL_9;
  }
  v6 = v3 - 1;
  if ((v3 & (v3 - 1)) != 0) {
    v7 = v2;
    if (v2 >= v3) {
      v7 = v2 % v3;
    }
  }
  else {
    v7 = v6 & v2;
  }
  v1 = *(_QWORD*)(*(_QWORD*)(GameData_2241850 + 88) + 8 * v7);
  if (v1 != 0) {
    v8 = *(_QWORD**)v1;
    if (*(_QWORD*)v1 != 0) {
      if ((v3 & v6) == 0) {
        while (1) {
          v10 = v8[1];
          if (v10 == v2) {
            if (v8[2] == v2) {
              goto LABEL_31;
            }
          }
          else if ((v10 & v6) != v7) {
            goto LABEL_9;
          }
          v8 = (_QWORD*)*v8;
          LODWORD(v1) = 0;
          if (v8 == nullptr) {
            return (unsigned int)v1;
          }
        }
      }
      while (1) {
        v9 = v8[1];
        if (v9 == v2) {
          if (v8[2] == v2) {
          LABEL_31:
            v1 = v8[3];
            if (v1 != 0) {
              LODWORD(v1) = (int)*(float*)(v1 + 32);
            }
            return (unsigned int)v1;
          }
        }
        else {
          if (v9 >= v3) {
            v9 %= v3;
          }
          if (v9 != v7) {
            break;
          }
        }
        v8 = (_QWORD*)*v8;
        LODWORD(v1) = 0;
        if (v8 == nullptr) {
          return (unsigned int)v1;
        }
      }
    }
  LABEL_9:
    LODWORD(v1) = 0;
  }
  return (unsigned int)v1;
}

void game_facility_anonymous_ProcOpening_PlaySpecialTelop_closure_Invoke()
{
  if (GameData_22420e0 != 0) {
    *(_WORD*)(GameData_22420e0 + 880) = 1;
  }
}

__int64 ProcOpening_Destructor(__int64* a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;

  v1 = a1[6];
  *(a1 - 19) = (__int64)game_facility_anonymous_ProcOpening_vtable;
  v3 = a1 - 19;
  *a1 = (__int64)GameData_203be08;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  v4 = GameData_212dd18[0] + 192;
  *(a1 - 19) = GameData_212dd18[0] + 16;
  *a1 = v4;
  GameRoutine_1958ed0(a1, v3);
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

__int64 ProcOpening_DeletingDestructor(__int64* a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v8;

  v1 = a1[6];
  *(a1 - 19) = (__int64)game_facility_anonymous_ProcOpening_vtable;
  v3 = a1 - 19;
  *a1 = (__int64)GameData_203be08;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  v4 = GameData_212dd18[0] + 192;
  *(a1 - 19) = GameData_212dd18[0] + 16;
  *a1 = v4;
  GameRoutine_1958ed0(a1, v3);
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
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v3);
}

#pragma GCC visibility pop
