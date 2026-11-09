#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_120e680(_QWORD);
__int64 GameRoutine_1487cc0(_QWORD, _QWORD);
__int64 GameRoutine_1958ed0(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_9a28e0(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 game_facility_ReleaseGroups(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern _DWORD* GameData_2130fb8;
extern __int64 (*GameData_20411a8[])();
extern __int64 (*GameData_2041270[])();
extern __int64 (*GameData_2041320[])();
extern __int64 (*GameData_2041368[])();
extern __int64 (*GameData_20414b0[])();
extern __int64 (*game_facility_anonymous_ProcClassExaminerScene_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_21f3d10;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_UnitListSet_instance_;
extern __int64 game_facility_FacilityView_instance_;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern __int64* GameData_2132488;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 ProcClassExaminerScene_Destructor(__int64 a1);
void ProcClassExaminerScene_146fec0();
__int64 ProcClassExaminerScene_Unknown18();
_QWORD* ProcClassExaminerScene_Unknown20(_QWORD* result, char a2);

__int64 ProcClassExaminerScene_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64*** v6;
  __int64** v7;
  __int64** v8;
  __int64* v9;
  __int64* v10;
  _BOOL4 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  _QWORD* v20;
  __int64 v21;
  _QWORD v23[4];
  _QWORD* v24;
  __int64 v25;

  *(_QWORD*)a1 = game_facility_anonymous_ProcClassExaminerScene_vtable;
  *(_QWORD*)(a1 + 208) = GameData_20411a8;
  v2 = a1 + 208;
  if (*(_BYTE*)(a1 + 240) == 1) {
    v3 = GameRoutine_9a28e0(1);
    v4 = game_VariableManager_SetFlag(v3, 0);
    GameRoutine_120e680(v4);
  }
  v5 = v23;
  v23[0] = GameData_20414b0;
  v6 = *(__int64****)(game_UnitListSet_instance_ + 24);
  v24 = v23;
  v7 = *v6;
  v8 = v6[1];
  if (*v6 == v8) {
    goto LABEL_21;
  }
  do {
    v9 = *v7;
    v10 = v7[1];
    if (v10 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 1), 1u,
                                memory_order_relaxed);
    }
    if (v9 != nullptr) {
      v11 = (v9[6] & 0x20) == 0;
      if (v10 == nullptr) {
        goto LABEL_13;
      }
    }
    else {
      v11 = false;
      if (v10 == nullptr) {
        goto LABEL_13;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 1),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64*))(*v10 + 16))(v10);
      std___1___shared_weak_count___release_weak();
      if (!v11) {
        goto LABEL_5;
      }
      goto LABEL_14;
    }
  LABEL_13:
    if (v11) {
    LABEL_14:
      v25 = **v7;
      if (v24 == nullptr) {
        GameRoutine_60a310(0);
      }
      (*(void (**)(_QWORD*, __int64*))(*v24 + 48LL))(v24, &v25);
    }
  LABEL_5:
    v7 += 2;
  } while (v7 != v8);
  v5 = v24;
  if (v24 != v23) {
    if (v24 != nullptr) {
      v12 = 40;
      goto LABEL_22;
    }
    goto LABEL_23;
  }

LABEL_21:
  v12 = 32;

LABEL_22:
  (*(void (**)(_QWORD*))(*v5 + v12))(v5);

LABEL_23:
  v13 = *(_QWORD*)(a1 + 304);
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak();
  }
  v14 = *(_QWORD*)(a1 + 288);
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak();
  }
  v15 = *(_QWORD*)(a1 + 272);
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak();
  }
  v16 = *(_QWORD*)(a1 + 256);
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak();
  }
  *(_QWORD*)a1 = GameData_2041270;
  *(_QWORD*)(a1 + 208) = GameData_2041320;
  GameRoutine_1958ed0(v2, a1);
  *(_QWORD*)(a1 + 208) = GameData_2132488 + 2;
  v17 = (__int64*)GameData_212dce8;
  v18 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 24LL))(v18);
    v18 = *v17;
    if (*v17 != 0) {
      v18 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 8LL))(v18);
    }
    *v17 = 0;
  }
  game_facility_ReleaseGroups(v18);
  v20 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_2041368;
  if (v20 == (_QWORD*)(a1 + 160)) {
    v21 = 32;
  LABEL_45:
    (*(void (**)(_QWORD*))(*v20 + v21))(v20);
  }
  else if (v20 != nullptr) {
    v21 = 40;
    goto LABEL_45;
  }
  game_facility_FacilityView_instance_ = 0;
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

void ProcClassExaminerScene_146fec0()
{
  if (GameData_21f3d10 != 0 && *(int*)(GameData_21f3d10 + 152) >= 1) {
    *(_DWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 156LL) =
        1065353216;
  }
}

__int64 ProcClassExaminerScene_Unknown18()
{
  __int64 result;
  __int64 v1;
  char v2;
  unsigned __int64 v3;
  __int16 v4;
  char v5;
  __int64 v6;

  v5 = 0;
  v2 = 20;
  v4 = -27736;
  v3 = 0xE9A6A9E85F4D4742LL;
  result = GameRoutine_1487cc0(&v2, 0x13F000000LL);
  if ((v2 & 1) != 0 && v6 != 0) {
    v1 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v1 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v1, v6);
  }
  return result;
}

_QWORD* ProcClassExaminerScene_Unknown20(_QWORD* result, char a2)
{
  _QWORD* v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  if ((a2 & 1) != 0) {
    v2 = (_QWORD*)result[37];
    if (v2 != nullptr) {
      v3 = v2[2];
      if (v2[3] != v3) {
        v4 = v2[5];
        v5 = v2[6];
        v6 = (_QWORD*)(v3 + 8 * (v4 >> 4));
        v7 = *v6 + 368 * (v4 & 0xF);
        v8 = *(_QWORD*)(v3 + 8 * ((v5 + v4) >> 4)) +
             368LL * (((_DWORD)v5 + (_DWORD)v4) & 0xF);
        while (v7 != v8) {
          *(_BYTE*)(v7 + 68) = 0;
          v7 += 368;
          if (v7 - *v6 == 5888) {
            v9 = v6[1];
            ++v6;
            v7 = v9;
          }
        }
      }
    }
  }
  else {
    v11 = result[1];
    v10 = result[2];
    if (v11 > v10) {
      goto LABEL_12;
    }
    while (*(_BYTE*)v10 != 2) {
      v10 -= 64LL;
      if (v11 > v10) {
        goto LABEL_12;
      }
    }
    if (*(_DWORD*)(v10 + 32) != 5) {
    LABEL_12:
      v12 = (_QWORD*)result[37];
      if (v12 != nullptr) {
        v13 = v12[2];
        if (v12[3] != v13) {
          v14 = v12[5];
          v15 = v12[6];
          v16 = (_QWORD*)(v13 + 8 * (v14 >> 4));
          v17 = *v16 + 368 * (v14 & 0xF);
          v18 = *(_QWORD*)(v13 + 8 * ((v15 + v14) >> 4)) +
                368LL * (((_DWORD)v15 + (_DWORD)v14) & 0xF);
          while (v17 != v18) {
            *(_BYTE*)(v17 + 68) = 1;
            v17 += 368;
            if (v17 - *v16 == 5888) {
              v19 = v16[1];
              ++v16;
              v17 = v19;
            }
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
