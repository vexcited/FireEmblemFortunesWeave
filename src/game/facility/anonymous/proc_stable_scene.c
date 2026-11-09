#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14877f0(_QWORD, _QWORD);
__int64 GameRoutine_1958ed0(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_facility_ReleaseGroups(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _DWORD* GameData_2130fb8;
extern _UNKNOWN GameData_1a87a71;
extern __int64 (*GameData_2119168[])();
extern __int64 (*game_facility_anonymous_ProcStableScene_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_212dd18[3];
extern __int64 GameData_21f4010;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2132470[2];
extern __int64* GameData_2132488;
__int64 ProcStableScene_Destructor(__int64 a1);
__int64 ProcStableScene_DeletingDestructor(__int64 a1);
__int64 ProcStableScene_Unknown18();

__int64 ProcStableScene_Destructor(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  char v4;
  char v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;

  *(_QWORD*)a1 = game_facility_anonymous_ProcStableScene_vtable;
  *(_QWORD*)(a1 + 152) = GameData_2119168;
  v2 = a1 + 152;
  v3 = GameData_2132470[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_2132470[0] + 24LL))(
      *GameData_2132470[0]);
  if (*v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 8LL))(*v3);
  }
  v4 = *(_BYTE*)(a1 + 248);
  *v3 = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_DWORD*)(a1 + 216) = 0;
  if ((v4 & 1) != 0) {
    **(_BYTE**)(a1 + 264) = 0;
    *(_QWORD*)(a1 + 256) = 0;
  }
  else {
    *(_WORD*)(a1 + 248) = 0;
  }
  GameRoutine_6e3b50(a1 + 224, *(_QWORD*)(a1 + 232));
  v5 = *(_BYTE*)(a1 + 248);
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 224) = a1 + 232;
  if ((v5 & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 264);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v7);
      v6 = *(_QWORD*)(a1 + 232);
    }
  }
  else {
    v6 = 0;
  }
  GameRoutine_6e3b50(a1 + 224, v6);
  v8 = GameData_212dd18[0] + 192;
  *(_QWORD*)a1 = GameData_212dd18[0] + 16;
  *(_QWORD*)(a1 + 152) = v8;
  GameRoutine_1958ed0(v2, a1);
  *(_QWORD*)(a1 + 152) = GameData_2132488 + 2;
  v9 = (_QWORD*)GameData_212dce8;
  v10 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 24LL))(v10);
    if (*v9 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v9 + 8LL))(*v9);
    }
    *v9 = 0;
  }
  game_facility_ReleaseGroups();
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcStableScene_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  char v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v12;

  *(_QWORD*)a1 = game_facility_anonymous_ProcStableScene_vtable;
  *(_QWORD*)(a1 + 152) = GameData_2119168;
  v2 = a1 + 152;
  v3 = GameData_2132470[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_2132470[0] + 24LL))(
      *GameData_2132470[0]);
  if (*v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 8LL))(*v3);
  }
  v4 = *(_BYTE*)(a1 + 248);
  *v3 = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_DWORD*)(a1 + 216) = 0;
  if ((v4 & 1) != 0) {
    **(_BYTE**)(a1 + 264) = 0;
    *(_QWORD*)(a1 + 256) = 0;
  }
  else {
    *(_WORD*)(a1 + 248) = 0;
  }
  GameRoutine_6e3b50(a1 + 224, *(_QWORD*)(a1 + 232));
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 224) = a1 + 232;
  v5 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 248) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 264);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v7);
      v6 = *(_QWORD*)(a1 + 232);
    }
  }
  else {
    v6 = 0;
  }
  GameRoutine_6e3b50(a1 + 224, v6);
  v8 = GameData_212dd18[0] + 192;
  *(_QWORD*)a1 = GameData_212dd18[0] + 16;
  *(_QWORD*)(a1 + 152) = v8;
  GameRoutine_1958ed0(v2, a1);
  *(_QWORD*)(a1 + 152) = GameData_2132488 + 2;
  v9 = (_QWORD*)GameData_212dce8;
  v10 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 24LL))(v10);
    if (*v9 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v9 + 8LL))(*v9);
    }
    *v9 = 0;
  }
  game_facility_ReleaseGroups();
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v12 = 128;
  if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
    v12 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v12);
}

__int64 ProcStableScene_Unknown18()
{
  unsigned __int64 v0;
  unsigned __int64 v1;
  unsigned __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;

  v0 = game_HashString(&GameData_1a87a71);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21f4010 + 96);
    if (v1 != 0 && *(_QWORD*)(GameData_21f4010 + 112) != 0) {
      v3 = v1 - 1;
      if ((v1 & (v1 - 1)) != 0) {
        v4 = v0;
        if (v0 >= v1) {
          v4 = v0 % v1;
        }
      }
      else {
        v4 = v3 & v0;
      }
      v5 = *(_QWORD**)(*(_QWORD*)(GameData_21f4010 + 88) + 8 * v4);
      if (v5 != nullptr) {
        v6 = (_QWORD*)*v5;
        if (v6 != nullptr) {
          if ((v1 & v3) == 0) {
            while (1) {
              v9 = v6[1];
              if (v9 == v0) {
                if (v6[2] == v0) {
                  goto LABEL_27;
                }
              }
              else if ((v9 & v3) != v4) {
                goto LABEL_25;
              }
              v6 = (_QWORD*)*v6;
              v8 = 0;
              if (v6 == nullptr) {
                return GameRoutine_14877f0(v8, 0x13F000000LL);
              }
            }
          }
          do {
            v7 = v6[1];
            if (v7 == v0) {
              if (v6[2] == v0) {
              LABEL_27:
                v8 = v6[3];
                return GameRoutine_14877f0(v8, 0x13F000000LL);
              }
            }
            else {
              if (v7 >= v1) {
                v7 %= v1;
              }
              if (v7 != v4) {
                break;
              }
            }
            v6 = (_QWORD*)*v6;
          } while (v6 != nullptr);
        }
      }
    }
  }

LABEL_25:
  v8 = 0;
  return GameRoutine_14877f0(v8, 0x13F000000LL);
}

#pragma GCC visibility pop
