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
_QWORD* GameRoutine_1964940(_QWORD* result, __int64);
__int64 GameRoutine_1450640(_QWORD);
__int64 GameRoutine_196abd0(void);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_7a88a0(_QWORD);
__int64 GameRoutine_94b9a0(_QWORD);
__int64 GameRoutine_a0d9a0(_QWORD);
__int64 SceneCharacter_1401850(float);
__int64 SceneCharacter_1401b10(_QWORD, _QWORD, _QWORD);
__int64 SceneCharacter_1401e50(_QWORD, float);
__int64 SceneManager_138c360(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SceneManager_138c7e0(_QWORD, _QWORD);
__int64 VolunteerArgs_9476c0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_1ab613e;
extern _UNKNOWN GameData_1aefb8d;
extern _UNKNOWN* GameData_2176158;
extern _UNKNOWN* GameData_2176160;
extern __int64 GameData_21f4000;
extern __int64 GameData_226dcb0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_GameModeData_instance_;
extern __int64 game_UnitListSet_instance_;
extern int game_script_hub_talk_g_choice_menu_result;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 ProcDivinationSceneHost_1966760(__int64 a1);
__int64 ProcDivinationSceneHost_19668a0(__int64 a1);
__int64 ProcDivinationSceneHost_1966af0();
__int64 ProcDivinationSceneHost_1966f00(__int64 result);
__int64 ProcDivinationSceneHost_1966fa0(__int64 result);
void ProcDivinationSceneHost_19673b0();
__int64 ProcDivinationSceneHost_1967670(__int64 a1);
__int64 ProcDivinationSceneHost_19677e0(__int64 a1);
__int64 ProcDivinationSceneHost_19678b0() { return GameRoutine_196abd0(); };
__int64 ProcDivinationSceneHost_19678c0(__int64 result);
_QWORD* ProcDivinationSceneHost_1967920(__int64 a1);
__int64
game_facility_anonymous_ProcDivinationSceneHost_PrepareScene_closure_Invoke();
__int64 ProcDivinationSceneHost_1967c00();
__int64 ProcDivinationSceneHost_1967da0();
__int64 ProcDivinationSceneHost_Destructor(__int64* a1);
__int64 ProcDivinationSceneHost_DeletingDestructor_1968600(__int64* a1);

__int64 ProcDivinationSceneHost_1966760(__int64 a1)
{
  __int64*** v2;
  __int64 v3;
  __int64** i;
  __int64* v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  _QWORD* v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  _QWORD* v15;

  v2 = *(__int64****)(game_UnitListSet_instance_ + 8);
  v3 = GameRoutine_94b9a0(a1);
  for (i = *v2;; i += 2) {
    if (i == v2[1]) {
      v6 = 0;
      goto LABEL_10;
    }
    if (v3 != 0) {
      v5 = *i;
      v6 = **i;
      if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v6 + 392) + 24LL) + 1672LL) ==
          *(_QWORD*)(*(_QWORD*)(v3 + 24) + 1672LL)) {
        break;
      }
    }
  }
  v7 = i[1];
  if (v7 != nullptr) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 1), 1u,
                              memory_order_relaxed);
    v6 = *v5;
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 1),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64*))(*v7 + 16))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
  }
LABEL_10:
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  v13 = v9;
  *v9 = v6;
  v14 = v9 + 1;
  v15 = v9 + 1;
  result = VolunteerArgs_9476c0(a1, &v13);
  if (v13 != nullptr) {
    v11 = *v8;
    v14 = v13;
    v12 = 128;
    if (*(_QWORD*)(v11 + 200) == 0) {
      v12 = 56;
    }
    return nn_mem_StandardAllocator_Free(v11 + v12);
  }
  return result;
}

__int64 ProcDivinationSceneHost_19668a0(__int64 a1)
{
  __int64 v2;
  void* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD v15[2];
  char* v16;
  _QWORD v17[2];
  char* v18;
  _QWORD v19[2];
  char v20;
  __int64 v21;
  char v22[199];
  __int64 v23;

  v19[0] = 0;
  v19[1] = 0;
  v22[23] = 0;
  v20 = 20;
  v22[135] = 0;
  v22[151] = 0;
  v23 = 0;
  strcpy(v22, "_D");
  v21 = 0x335FAC9CE6BA9FE5LL;
  GameRoutine_60a020(&v20, &GameData_1aefb8d);
  v2 = GameData_21f4000;
  v3 = GameData_2176160;
  v4 = strlen(GameData_2176160);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_30:
    String_60a1d0(v4);
  }
  v5 = v4;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v4 | 7) + 1;
    }
    v6 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16,
                                               0);
    v17[1] = v5;
    v18 = v6;
    v17[0] = v7 | 1;
    goto LABEL_9;
  }
  LOBYTE(v17[0]) = 2 * v4;
  v6 = (char*)v17 + 1;
  if (v4 != 0) {
  LABEL_9:
    memmove(v6, v3, v5);
  }
  v6[v5] = 0;
  v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 232) + 40LL) + 8LL);
  v4 = strlen(v8);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_30;
  }
  v9 = v4;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v4 | 7) + 1;
    }
    v10 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v11,
                                                16, 0);
    v15[1] = v9;
    v16 = v10;
    v15[0] = v11 | 1;
  }
  else {
    LOBYTE(v15[0]) = 2 * v4;
    v10 = (char*)v15 + 1;
    if (v4 == 0) {
      goto LABEL_19;
    }
  }
  memmove(v10, v8, v9);
LABEL_19:
  v10[v9] = 0;
  SceneManager_138c360(v2, v17, v15, v19);
  if ((v15[0] & 1) != 0 && v16 != nullptr) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v12);
  }
  if ((v17[0] & 1) != 0 && v18 != nullptr) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
  }
  return GameRoutine_a0d9a0(v19);
}

__int64 ProcDivinationSceneHost_1966af0()
{
  __int64 v0;
  void* v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  char* v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  _QWORD v8[2];
  char* v9;

  v0 = GameData_21f4000;
  v1 = GameData_2176160;
  v2 = strlen(GameData_2176160);
  if (v2 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v2);
  }
  v3 = v2;
  if (v2 >= 0x17) {
    if ((v2 | 7) == 0x17) {
      v5 = 26;
    }
    else {
      v5 = (v2 | 7) + 1;
    }
    v4 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v5, 16,
                                               0);
    v8[1] = v3;
    v9 = v4;
    v8[0] = v5 | 1;
  }
  else {
    LOBYTE(v8[0]) = 2 * v2;
    v4 = (char*)v8 + 1;
    if (v2 == 0) {
      goto LABEL_10;
    }
  }
  memmove(v4, v1, v3);
LABEL_10:
  v4[v3] = 0;
  result = SceneManager_138c7e0(v0, v8);
  if ((v8[0] & 1) != 0 && v9 != nullptr) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
  }
  return result;
}

__int64 ProcDivinationSceneHost_1966f00(__int64 result)
{
  __int64 v1;

  v1 = *(_QWORD*)(result + 8);
  if (*(_QWORD*)(*(_QWORD*)(result + 232) + 88LL) != 0 && v1 != 0) {
    while (1) {
      if (*(_BYTE*)v1 == 2) {
        if (*(_DWORD*)(v1 + 32) == 6) {
          *(_QWORD*)(result + 16) = v1;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v1 == 0) {
        return result;
      }
      v1 += 64;
    }
  }
  return result;
}

__int64 ProcDivinationSceneHost_1966fa0(__int64 result)
{
  int v1;
  __int64 v2;

  if (game_script_hub_talk_g_choice_menu_result != 0) {
    v1 = 5;
  }
  else {
    v1 = 4;
  }
  v2 = *(_QWORD*)(result + 8);
  if (v2 != 0) {
    while (1) {
      if (*(_BYTE*)v2 == 2) {
        if (*(_DWORD*)(v2 + 32) == v1) {
          *(_QWORD*)(result + 16) = v2;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v2 == 0) {
        return result;
      }
      v2 += 64;
    }
  }
  return result;
}

void ProcDivinationSceneHost_19673b0()
{
  if (GameData_226dcb0 != 0) {
    *(_BYTE*)(GameData_226dcb0 + 216) = 1;
  }
}

__int64 ProcDivinationSceneHost_1967670(__int64 a1)
{
  __int64 result;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  result = ProcDivinationSceneHost_1967c00(a1);
  if (result != 0) {
    v2 = result;
    SceneCharacter_1401850(180.0);
    v3 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        40, 16, 0);
    *(_BYTE*)(v4 + 32) = 0;
    v8 = 41;
    v9 = 32;
    v10 = v4;
    *(_QWORD*)v4 = 0xE35F8481E3A08DE5LL;
    *(_QWORD*)(v4 + 8) = 0x8383E38B83E3A683LL;
    *(_QWORD*)(v4 + 16) = 0x5FA2AEE55F8883E3LL;
    *(_QWORD*)(v4 + 24) = 0x315F97BAE58080E9LL;
    SceneCharacter_1401b10(v2, &v8, 0);
    if ((v8 & 1) != 0 && v10 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*v3 + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*v3 + v5);
    }
    SceneCharacter_1401e50(v2, 1.5);
    v6 = fw_memory_HeapManager_Allocate(*v3, 40, 16, 0);
    *(_BYTE*)(v6 + 32) = 0;
    v8 = 41;
    v9 = 32;
    v10 = v6;
    *(_QWORD*)v6 = 0xE35F8481E3A08DE5LL;
    *(_QWORD*)(v6 + 8) = 0x8383E38B83E3A683LL;
    *(_QWORD*)(v6 + 16) = 0x5FA2AEE55F8883E3LL;
    *(_QWORD*)(v6 + 24) = 0x325F97BAE58080E9LL;
    result = SceneCharacter_1401b10(v2, &v8, 0);
    if ((v8 & 1) != 0 && v10 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*v3 + 200LL) == 0) {
        v7 = 56;
      }
      return nn_mem_StandardAllocator_Free(*v3 + v7);
    }
  }
  return result;
}

__int64 ProcDivinationSceneHost_19677e0(__int64 a1)
{
  int v1;
  __int64 result;
  int v4;
  __int64 v6;
  _QWORD v7[2];

  v1 = *(_DWORD*)(a1 + 184);
  v7[1] = &GameData_1ab613e;
  result = game_HashString(&GameData_1ab613e);
  v7[0] = result;
  v4 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v7);
    if (result != 0) {
      v4 = *(_DWORD*)(result + 32);
    }
    else {
      v4 = 0;
    }
  }
  if (v1 >= v4 || *(_BYTE*)(a1 + 240) == 3) {
    v6 = *(_QWORD*)(a1 + 8);
    if (v6 != 0) {
      while (1) {
        if (*(_BYTE*)v6 == 2) {
          if (*(_DWORD*)(v6 + 32) == 9) {
            *(_QWORD*)(a1 + 16) = v6;
            *(_WORD*)(a1 + 136) &= ~0x80u;
            break;
          }
        }
        else if (*(_BYTE*)v6 == 0) {
          break;
        }
        v6 += 64;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return result;
}

__int64 ProcDivinationSceneHost_19678c0(__int64 result)
{
  __int64 v1;

  v1 = *(_QWORD*)(result + 8);
  if (game_script_hub_talk_g_choice_menu_result != 0 && v1 != 0) {
    while (1) {
      if (*(_BYTE*)v1 == 2) {
        if (*(_DWORD*)(v1 + 32) == 9) {
          *(_QWORD*)(result + 16) = v1;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v1 == 0) {
        return result;
      }
      v1 += 64;
    }
  }
  return result;
}

_QWORD* ProcDivinationSceneHost_1967920(__int64 a1)
{
  _QWORD* result;

  result = GameRoutine_1964940((_QWORD*)(a1 + 184), *(_QWORD*)(a1 + 232));
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_DWORD*)(a1 + 244) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_BYTE*)(a1 + 240) = 3;
  return result;
}

__int64

game_facility_anonymous_ProcDivinationSceneHost_PrepareScene_closure_Invoke()
{
  __int64 v0;
  __int64 v1;
  __int64 result;
  __int64 v3;
  _QWORD v4[2];
  __int64 v5;

  v0 = fw_memory_g_heap_manager_ptr;
  v1 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      40, 16, 0);
  *(_BYTE*)(v1 + 32) = 0;
  v4[0] = 41;
  v4[1] = 32;
  v5 = v1;
  *(_QWORD*)v1 = 0x83E3BC83E3B782E3LL;
  *(_QWORD*)(v1 + 8) = 0xE3A183E3AB82E3B3LL;
  *(_QWORD*)(v1 + 16) = 0x81E3A08DE55FA983LL;
  *(_QWORD*)(v1 + 24) = 0xA2AEE5A58EE65F84LL;
  result = GameRoutine_1450640(v4);
  if ((v4[0] & 1) != 0 && v5 != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) == 0) {
      v3 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v0 + v3);
  }
  return result;
}

__int64 ProcDivinationSceneHost_1967c00()
{
  __int64 v0;
  void* v1;
  unsigned __int64 v2;
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
  __int64 v18;
  unsigned __int64 v19;
  char* v20;
  _QWORD v21[2];

  v0 = GameData_21f4000;
  v1 = GameData_2176160;
  v2 = strlen(GameData_2176160);
  if (v2 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v2);
  }
  v3 = v2;
  if (v2 >= 0x17) {
    if ((v2 | 7) == 0x17) {
      v5 = 26;
    }
    else {
      v5 = (v2 | 7) + 1;
    }
    v4 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v5, 16,
                                               0);
    v19 = v3;
    v20 = v4;
    v18 = v5 | 1;
    goto LABEL_9;
  }
  LOBYTE(v18) = 2 * v2;
  v4 = (char*)&v18 + 1;
  if (v2 != 0) {
  LABEL_9:
    memmove(v4, v1, v3);
  }
  v4[v3] = 0;
  v6 = *(__int64**)(v0 + 160);
  v7 = *(__int64**)(v0 + 168);
  if (v6 == v7) {
    v8 = 0;
    if ((v18 & 1) == 0) {
      return v8;
    }
    goto LABEL_23;
  }
  while (1) {
    v9 = *v6++;
    v8 = v9;
    v10 = *(_QWORD*)(v9 + 40);
    v11 = v9 + 25;
    v12 = (*(_BYTE*)(v9 + 24) & 1) != 0 ? v10 : v11;
    v13 = v20;
    v14 = (unsigned __int64)(unsigned __int8)v18 >> 1;
    if ((v18 & 1) != 0) {
      v14 = v19;
    }
    else {
      v13 = (char*)&v18 + 1;
    }
    v21[0] = v13;
    v21[1] = v14;
    v15 = game_HashString(v12);
    if (v15 == GameRoutine_7a88a0(v21)) {
      break;
    }
    if (v6 == v7) {
      v8 = 0;
      break;
    }
  }
  if ((v18 & 1) != 0) {
  LABEL_23:
    if (v20 != nullptr) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v16);
    }
  }
  return v8;
}

__int64 ProcDivinationSceneHost_1967da0()
{
  __int64 v0;
  void* v1;
  unsigned __int64 v2;
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
  __int64 v18;
  unsigned __int64 v19;
  char* v20;
  _QWORD v21[2];

  v0 = GameData_21f4000;
  v1 = GameData_2176158;
  v2 = strlen(GameData_2176158);
  if (v2 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v2);
  }
  v3 = v2;
  if (v2 >= 0x17) {
    if ((v2 | 7) == 0x17) {
      v5 = 26;
    }
    else {
      v5 = (v2 | 7) + 1;
    }
    v4 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v5, 16,
                                               0);
    v19 = v3;
    v20 = v4;
    v18 = v5 | 1;
    goto LABEL_9;
  }
  LOBYTE(v18) = 2 * v2;
  v4 = (char*)&v18 + 1;
  if (v2 != 0) {
  LABEL_9:
    memmove(v4, v1, v3);
  }
  v4[v3] = 0;
  v6 = *(__int64**)(v0 + 160);
  v7 = *(__int64**)(v0 + 168);
  if (v6 == v7) {
    v8 = 0;
    if ((v18 & 1) == 0) {
      return v8;
    }
    goto LABEL_23;
  }
  while (1) {
    v9 = *v6++;
    v8 = v9;
    v10 = *(_QWORD*)(v9 + 40);
    v11 = v9 + 25;
    v12 = (*(_BYTE*)(v9 + 24) & 1) != 0 ? v10 : v11;
    v13 = v20;
    v14 = (unsigned __int64)(unsigned __int8)v18 >> 1;
    if ((v18 & 1) != 0) {
      v14 = v19;
    }
    else {
      v13 = (char*)&v18 + 1;
    }
    v21[0] = v13;
    v21[1] = v14;
    v15 = game_HashString(v12);
    if (v15 == GameRoutine_7a88a0(v21)) {
      break;
    }
    if (v6 == v7) {
      v8 = 0;
      break;
    }
  }
  if ((v18 & 1) != 0) {
  LABEL_23:
    if (v20 != nullptr) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v16);
    }
  }
  return v8;
}

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

__int64 ProcDivinationSceneHost_Destructor(__int64* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;

  v1 = a1[5];
  *(a1 - 19) = (__int64)&game_facility_anonymous_ProcDivinationScene_vtable;
  v3 = (__int64)(a1 - 19);
  *a1 = (__int64)&GameData_211a498;
  if (v1 != 0) {
    a1[6] = v1;
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  v5 = GameData_212dd18[0] + 192;
  *(a1 - 19) = GameData_212dd18[0] + 16;
  *a1 = v5;
  GameRoutine_1958ed0((__int64)a1, v3);
  *a1 = (__int64)(GameData_2132488 + 2);
  v6 = (_QWORD*)GameData_212dce8;
  v7 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7);
    if (*v6 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v6 + 8LL))(*v6);
    }
    *v6 = 0;
  }
  game_facility_ReleaseGroups();
  *(a1 - 19) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 2) & 0x100) != 0) {
    *((_WORD*)a1 - 8) &= ~0x100u;
  }
  game_ProcInst_Unregister(v3);
  return GameRoutine_658c00(a1 - 8);
}

__int64 ProcDivinationSceneHost_DeletingDestructor_1968600(__int64* a1)
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

  v1 = a1[5];
  *(a1 - 19) = (__int64)&game_facility_anonymous_ProcDivinationScene_vtable;
  v3 = (__int64)(a1 - 19);
  *a1 = (__int64)&GameData_211a498;
  v4 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v5 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[6] = v1;
    v6 = 128;
    if (*(_QWORD*)(v5 + 200) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(v5 + v6);
  }
  v7 = GameData_212dd18[0] + 192;
  *(a1 - 19) = GameData_212dd18[0] + 16;
  *a1 = v7;
  GameRoutine_1958ed0((__int64)a1, v3);
  *a1 = (__int64)(GameData_2132488 + 2);
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
  *(a1 - 19) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 2) & 0x100) != 0) {
    *((_WORD*)a1 - 8) &= ~0x100u;
  }
  game_ProcInst_Unregister(v3);
  GameRoutine_658c00(a1 - 8);
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v11 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v11);
}

#pragma GCC visibility pop
