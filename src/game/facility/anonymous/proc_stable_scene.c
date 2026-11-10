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
__int64 ProcStableScene_StartFade();
__int64 ProcStableScene_Destructor_1955bd0(__int64 a1);
__int64 ProcStableScene_DeletingDestructor_1955d80(__int64 a1);
__int64 GameRoutine_1130770(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN* GameData_2130228;
extern _UNKNOWN GameData_1ac690d;
extern _UNKNOWN GameData_1adcd05;
extern __int64* GameData_212d460[6];
extern __int64 GameData_21c9e18;
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
unsigned __int64 ProcStableScene_19550a0(__int64 a1);
__attribute__((swiftcall)) void ProcStableScene_1955550(PSEUDO_X8 x8_,
                                                        __int64 a1);

unsigned __int64 ProcStableScene_19550a0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 result;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;

  result = game_HashString(&GameData_1adcd05);
  if (result != 0) {
    v5 = *(_QWORD*)(GameData_21c9e18 + 96);
    if (v5 != 0 && *(_QWORD*)(GameData_21c9e18 + 112) != 0) {
      v7 = v5 - 1;
      if ((v5 & (v5 - 1)) != 0) {
        v8 = result;
        if (result >= v5) {
          v8 = result % v5;
        }
      }
      else {
        v8 = v7 & result;
      }
      v9 = *(_QWORD**)(*(_QWORD*)(GameData_21c9e18 + 88) + 8 * v8);
      if (v9 != nullptr) {
        v10 = (_QWORD*)*v9;
        if (v10 != nullptr) {
          if ((v5 & v7) == 0) {
            while (1) {
              v12 = v10[1];
              if (v12 == result) {
                if (v10[2] == result) {
                  goto LABEL_26;
                }
              }
              else if ((v12 & v7) != v8) {
                return result;
              }
              v10 = (_QWORD*)*v10;
              if (v10 == nullptr) {
                return result;
              }
            }
          }
          do {
            v11 = v10[1];
            if (v11 == result) {
              if (v10[2] == result) {
              LABEL_26:
                v13 = v10[3];
                if (v13 != 0) {
                  if (*GameData_212d460[0] != 0) {
                    return *GameData_212d460[0];
                  }
                  else if (*(_QWORD*)(v13 + 32) != 0) {
                    v1 = *(_QWORD*)(v13 + 32);
                    v2 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
                    GameRoutine_1130770(v2, v1, 0);
                    return ProcInst_657850(v2, GameData_2130228, "talk::Seq", 1,
                                           a1);
                  }
                  else {
                    return 0;
                  }
                }
                return result;
              }
            }
            else {
              if (v11 >= v5) {
                v11 %= v5;
              }
              if (v11 != v8) {
                return result;
              }
            }
            v10 = (_QWORD*)*v10;
          } while (v10 != nullptr);
        }
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void ProcStableScene_1955550(PSEUDO_X8 x8_,
                                                        __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  unsigned __int64 result;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;

  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 24);
  }
  else {
    v4 = a1 + 9;
  }
  result = strlen(v4);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(result);
  }
  v6 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (result | 7) + 1;
    }
    v7 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v8, 16, 0);
    a2[1] = v6;
    a2[2] = v7;
    *a2 = v8 | 1;
    goto LABEL_12;
  }
  *(_BYTE*)a2 = 2 * result;
  v7 = (__int64)a2 + 1;
  if (result != 0) {
  LABEL_12:
    result = memmove(v7, v4, v6);
  }
  *(_BYTE*)(v7 + v6) = 0;
  v9 = *(unsigned __int8*)(a1 + 32);
  if ((v9 & 1) != 0) {
    v10 = *(_QWORD*)(a1 + 40);
  }
  else {
    v10 = v9 >> 1;
  }
  if (v10 != 0) {
    GameRoutine_1a09ce0(a2, &GameData_1ac690d, 1);
    if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
      v11 = *(_QWORD*)(a1 + 48);
    }
    else {
      v11 = a1 + 33;
    }
    v12 = strlen(v11);
    {
      GameRoutine_1a09ce0(a2, v11, v12);
      return;
    }
  }
  {
    result;
    return;
  }
}

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

__int64 ProcStableScene_StartFade()
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

__int64 ProcStableScene_Destructor_1955bd0(__int64 a1)
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

  *(_QWORD*)(a1 - 152) = game_facility_anonymous_ProcStableScene_vtable;
  v2 = a1 - 152;
  *(_QWORD*)a1 = GameData_2119168;
  v3 = GameData_2132470[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_2132470[0] + 24LL))(
      *GameData_2132470[0]);
  if (*v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 8LL))(*v3);
  }
  v4 = *(_BYTE*)(a1 + 96);
  *v3 = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_DWORD*)(a1 + 64) = 0;
  if ((v4 & 1) != 0) {
    **(_BYTE**)(a1 + 112) = 0;
    *(_QWORD*)(a1 + 104) = 0;
  }
  else {
    *(_WORD*)(a1 + 96) = 0;
  }
  GameRoutine_6e3b50(a1 + 72, *(_QWORD*)(a1 + 80));
  v5 = *(_BYTE*)(a1 + 96);
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 72) = a1 + 80;
  if ((v5 & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 112);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v7);
      v6 = *(_QWORD*)(a1 + 80);
    }
  }
  else {
    v6 = 0;
  }
  GameRoutine_6e3b50(a1 + 72, v6);
  v8 = GameData_212dd18[0] + 192;
  *(_QWORD*)(a1 - 152) = GameData_212dd18[0] + 16;
  *(_QWORD*)a1 = v8;
  GameRoutine_1958ed0(a1, v2);
  *(_QWORD*)a1 = GameData_2132488 + 2;
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
  *(_QWORD*)(a1 - 152) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 16) & 0x100) != 0) {
    *(_WORD*)(a1 - 16) &= ~0x100u;
  }
  game_ProcInst_Unregister(v2);
  return GameRoutine_658c00(a1 - 64);
}

__int64 ProcStableScene_DeletingDestructor_1955d80(__int64 a1)
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

  *(_QWORD*)(a1 - 152) = game_facility_anonymous_ProcStableScene_vtable;
  v2 = a1 - 152;
  *(_QWORD*)a1 = GameData_2119168;
  v3 = GameData_2132470[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_2132470[0] + 24LL))(
      *GameData_2132470[0]);
  if (*v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 8LL))(*v3);
  }
  v4 = *(_BYTE*)(a1 + 96);
  *v3 = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_DWORD*)(a1 + 64) = 0;
  if ((v4 & 1) != 0) {
    **(_BYTE**)(a1 + 112) = 0;
    *(_QWORD*)(a1 + 104) = 0;
  }
  else {
    *(_WORD*)(a1 + 96) = 0;
  }
  GameRoutine_6e3b50(a1 + 72, *(_QWORD*)(a1 + 80));
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 72) = a1 + 80;
  v5 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 96) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 112);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v7);
      v6 = *(_QWORD*)(a1 + 80);
    }
  }
  else {
    v6 = 0;
  }
  GameRoutine_6e3b50(a1 + 72, v6);
  v8 = GameData_212dd18[0] + 192;
  *(_QWORD*)(a1 - 152) = GameData_212dd18[0] + 16;
  *(_QWORD*)a1 = v8;
  GameRoutine_1958ed0(a1, v2);
  *(_QWORD*)a1 = GameData_2132488 + 2;
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
  *(_QWORD*)(a1 - 152) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 16) & 0x100) != 0) {
    *(_WORD*)(a1 - 16) &= ~0x100u;
  }
  game_ProcInst_Unregister(v2);
  GameRoutine_658c00(a1 - 64);
  v12 = 128;
  if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
    v12 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v12);
}

#pragma GCC visibility pop
