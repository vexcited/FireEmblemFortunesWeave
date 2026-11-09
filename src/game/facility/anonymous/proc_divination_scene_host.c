#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1389160(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_138a920(_QWORD, _QWORD);
__int64 GameRoutine_14877f0(_QWORD, _QWORD);
__int64 GameRoutine_1958ed0(__int64 result, __int64);
__int64 GameRoutine_19688e0(_QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_HashString(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_facility_ReleaseGroups(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _DWORD* GameData_2130fb8;
extern _UNKNOWN GameData_1a9b081;
extern _UNKNOWN GameData_1ae4353;
extern __int64 (*GameData_211a498)();
extern __int64 (*game_facility_SceneManager_FacilityMapArgs_vtable[])();
extern __int64 (*game_facility_SceneManager_IMapArgs_vtable)();
extern __int64 (*game_facility_anonymous_ProcDivinationScene_vtable)();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_212dd18[3];
extern __int64 GameData_21f4010;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2132488;
unsigned __int64 GameRoutine_19513c0(unsigned __int64 result);
__int64 ProcDivinationSceneHost_DeletingDestructor(__int64 a1);
__int64 ProcDivinationSceneHost_1968280();
__int64 ProcDivinationSceneHost_Unknown22();

__int64 ProcDivinationSceneHost_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v11;

  v1 = *(_QWORD*)(a1 + 192);
  *(_QWORD*)a1 = &game_facility_anonymous_ProcDivinationScene_vtable;
  *(_QWORD*)(a1 + 152) = &GameData_211a498;
  v3 = a1 + 152;
  v4 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v5 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 200) = v1;
    v6 = 128;
    if (*(_QWORD*)(v5 + 200) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(v5 + v6);
  }
  v7 = GameData_212dd18[0] + 192;
  *(_QWORD*)a1 = GameData_212dd18[0] + 16;
  *(_QWORD*)(a1 + 152) = v7;
  GameRoutine_1958ed0(v3, a1);
  *(_QWORD*)(a1 + 152) = GameData_2132488 + 2;
  v8 = (_QWORD*)GameData_212dce8;
  v9 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 24LL))(v9);
    if (*v8 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v8 + 8LL))(*v8);
    }
    *v8 = 0;
  }
  game_facility_ReleaseGroups();
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v11 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v11);
}

__int64 ProcDivinationSceneHost_1968280()
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

  v0 = game_HashString(&GameData_1ae4353);
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

__int64 ProcDivinationSceneHost_Unknown22()
{
  __int64 v0;
  unsigned __int64 v1;
  __int64 v2;
  _QWORD v4[2];
  _QWORD v5[4];
  _QWORD* v6;
  __int64 v7;
  __int64 v8;

  v6 = nullptr;
  v7 = 0;
  memset(v5, 0, sizeof(v5));
  v8 = 0;
  v4[0] = game_facility_SceneManager_FacilityMapArgs_vtable;
  v4[1] = 0;
  GameRoutine_1389160(v4, &GameData_1a9b081, 6);
  GameRoutine_138a920(*(_QWORD*)GameData_212dce8, v4);
  v4[0] = &game_facility_SceneManager_IMapArgs_vtable;
  if (v6 == v5) {
    v0 = 32;
    goto LABEL_5;
  }
  if (v6 != nullptr) {
    v0 = 40;
  LABEL_5:
    (*(void (**)(_QWORD*))(*v6 + v0))(v6);
  }
  HIBYTE(v4[0]) = 0;
  LOBYTE(v4[0]) = 12;
  *(_DWORD*)((char*)v4 + 1) = -476017179;
  *(_WORD*)((char*)v4 + 5) = -31615;
  v1 = GameRoutine_19513c0((unsigned __int64)v4);
  if ((v4[0] & 1) != 0 && v5[0] != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    v1 = nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v2);
  }
  return GameRoutine_19688e0(v1);
}

#pragma GCC visibility pop
