#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1450640(_QWORD);
__int64 GameRoutine_14869b0(_QWORD);
__int64 GameRoutine_14877f0(_QWORD, _QWORD);
__int64 SceneCharacter_1400a90(_QWORD, _QWORD);
__int64 SceneManager_138a5a0(_QWORD);
__int64 SceneManager_138e5e0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_1afa9c7;
extern __int64 (*GameData_203c258[])();
extern __int64 (*GameData_203c2d8[])();
extern __int64 GameData_212dce8;
extern __int64 GameData_21f3d10;
extern __int64 GameData_21f4000;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern __int64* GameData_21311d8;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
_QWORD* game_facility_anonymous_ProcImpression_ResetMotion(__int64 a1);
unsigned __int64 game_facility_anonymous_ProcImpression_HideMob(__int64 a1);
__int64 ProcImpression_14312d0(__int64 result);
__int64 game_facility_anonymous_ProcImpression_PrepareCamera_closure_Invoke();
__int64 ProcImpression_1432340();
void ProcImpression_1432370();

__int64 ProcImpression_14324c0()
{
  return GameRoutine_14877f0(0, 0x13F000000LL);
};

__int64 ProcImpression_1432780()
{
  return GameRoutine_14877f0(0, 0x13F000000LL);
};

_QWORD* game_facility_anonymous_ProcImpression_ResetMotion(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD v13[4];
  _QWORD* v14;

  v2 = (_QWORD*)GameData_212dce8;
  v3 = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8, 0);
  if (v3 != 0) {
    LOWORD(v13[0]) = 257;
    BYTE2(v13[0]) = 1;
    SceneCharacter_1400a90(v3, v13);
  }
  v4 = SceneManager_138e5e0(*v2, 1);
  if (v4 != 0) {
    LOWORD(v13[0]) = 257;
    BYTE2(v13[0]) = 1;
    SceneCharacter_1400a90(v4, v13);
  }
  result = v13;
  v6 = *(_QWORD*)(*(_QWORD*)(a1 + 240) + 32LL);
  v14 = v13;
  v13[0] = GameData_203c258;
  if (*(_WORD*)(v6 + 160) == 0) {
    goto LABEL_10;
  }
  v7 = 8LL * *(unsigned __int16*)(v6 + 160);
  v8 = 0;
  do {
    v9 = v14;
    if (v14 == nullptr) {
    LABEL_21:
      GameRoutine_60a310(v9);
    }
    (*(void (**)(_QWORD*, __int64))(*v14 + 48LL))(v14,
                                                  *(_QWORD*)(v6 + 168) + v8);
    v8 += 8;
  } while (v7 != v8);
  result = v14;
  if (v14 != nullptr) {
  LABEL_10:
    if (*(_WORD*)(v6 + 192) != 0) {
      v10 = 8LL * *(unsigned __int16*)(v6 + 192);
      v11 = 0;
      do {
        v9 = v14;
        if (v14 == nullptr) {
          goto LABEL_21;
        }
        (*(void (**)(_QWORD*, __int64))(*v14 + 48LL))(
            v14, *(_QWORD*)(v6 + 200) + v11);
        v11 += 8;
      } while (v10 != v11);
      result = v14;
    }
    if (result == v13) {
      v12 = 32;
    }
    else {
      if (result == nullptr) {
        return result;
      }
      v12 = 40;
    }
    return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v12))(result);
  }
  return result;
}

unsigned __int64 game_facility_anonymous_ProcImpression_HideMob(__int64 a1)
{
  __int64* v2;
  unsigned __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD v20[4];
  _QWORD* v21;

  v2 = GameData_21311d8;
  if (*GameData_21311d8 == 0) {
    goto LABEL_29;
  }
  result = game_HashString(&GameData_1afa9c7);
  if (result == 0) {
    goto LABEL_29;
  }
  v4 = *(_QWORD*)(*v2 + 96);
  if (v4 == 0 || *(_QWORD*)(*v2 + 112) == 0) {
    goto LABEL_29;
  }
  v6 = v4 - 1;
  if ((v4 & (v4 - 1)) != 0) {
    v7 = result;
    if (result >= v4) {
      v7 = result % v4;
    }
  }
  else {
    v7 = v6 & result;
  }
  v8 = *(_QWORD**)(*(_QWORD*)(*v2 + 88) + 8 * v7);
  if (v8 == nullptr) {
    goto LABEL_29;
  }
  v9 = (_QWORD*)*v8;
  if (v9 == nullptr) {
    goto LABEL_29;
  }
  if ((v4 & v6) == 0) {
    while (1) {
      v11 = v9[1];
      if (v11 == result) {
        if (v9[2] == result) {
          goto LABEL_27;
        }
      }
      else if ((v11 & v6) != v7) {
        goto LABEL_29;
      }
      v9 = (_QWORD*)*v9;
      if (v9 == nullptr) {
        goto LABEL_29;
      }
    }
  }
  while (1) {
    v10 = v9[1];
    if (v10 == result) {
      break;
    }
    if (v10 >= v4) {
      v10 %= v4;
    }
    if (v10 != v7) {
      goto LABEL_29;
    }
  LABEL_16:
    v9 = (_QWORD*)*v9;
    if (v9 == nullptr) {
      goto LABEL_29;
    }
  }
  if (v9[2] != result) {
    goto LABEL_16;
  }
LABEL_27:
  v12 = v9[3];
  if (v12 == 0 || *(float*)(v12 + 32) <= 0.0) {
  LABEL_29:
    result = (unsigned __int64)v20;
    v13 = *(_QWORD*)(*(_QWORD*)(a1 + 240) + 32LL);
    v21 = v20;
    v20[0] = GameData_203c2d8;
    if (*(_WORD*)(v13 + 160) == 0) {
      goto LABEL_34;
    }
    v14 = 8LL * *(unsigned __int16*)(v13 + 160);
    v15 = 0;
    do {
      v16 = v21;
      if (v21 == nullptr) {
      LABEL_45:
        GameRoutine_60a310(v16);
      }
      (*(void (**)(_QWORD*, __int64))(*v21 + 48LL))(v21, *(_QWORD*)(v13 + 168) +
                                                             v15);
      v15 += 8;
    } while (v14 != v15);
    result = (unsigned __int64)v21;
    if (v21 != nullptr) {
    LABEL_34:
      if (*(_WORD*)(v13 + 192) != 0) {
        v17 = 8LL * *(unsigned __int16*)(v13 + 192);
        v18 = 0;
        do {
          v16 = v21;
          if (v21 == nullptr) {
            goto LABEL_45;
          }
          (*(void (**)(_QWORD*, __int64))(*v21 + 48LL))(
              v21, *(_QWORD*)(v13 + 200) + v18);
          v18 += 8;
        } while (v17 != v18);
        result = (unsigned __int64)v21;
      }
      if ((_QWORD*)result == v20) {
        v19 = 32;
        return (*(__int64 (**)(unsigned __int64))(*(_QWORD*)result + v19))(
            result);
      }
      else if (result != 0) {
        v19 = 40;
        return (*(__int64 (**)(unsigned __int64))(*(_QWORD*)result + v19))(
            result);
      }
    }
  }
  return result;
}

__int64 ProcImpression_14312d0(__int64 result)
{
  if (*(_QWORD*)(*(_QWORD*)(result + 240) + 56LL) != 0) {
    *(_DWORD*)(result + 152) = 2;
  }
  return result;
}

__int64 game_facility_anonymous_ProcImpression_PrepareCamera_closure_Invoke()
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
  *(_BYTE*)(v1 + 38) = 0;
  v4[0] = 41;
  v4[1] = 38;
  v5 = v1;
  *(_QWORD*)(v1 + 16) = 0x8AE5B3A6E85FA983LL;
  *(_QWORD*)(v1 + 24) = 0xB682E3AA83E35F87LL;
  *(_QWORD*)(v1 + 30) = 0x8883E3AB83E3B682LL;
  *(_QWORD*)v1 = 0x83E3BC83E3B782E3LL;
  *(_QWORD*)(v1 + 8) = 0xE3A183E3AB82E3B3LL;
  result = GameRoutine_1450640(v4);
  if ((v4[0] & 1) != 0 && v5 != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) == 0) {
      v3 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v0 + v3, v5);
  }
  return result;
}

__int64 ProcImpression_1432340()
{
  __int64 v0;

  v0 = SceneManager_138a5a0(GameData_21f4000);
  return GameRoutine_14869b0(v0);
}

void ProcImpression_1432370()
{
  if (GameData_21f3d10 != 0 && *(int*)(GameData_21f3d10 + 152) >= 1) {
    *(_DWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 156LL) =
        1065353216;
  }
}

#pragma GCC visibility pop
