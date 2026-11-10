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
_QWORD* GameRoutine_140ea90(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_1400c40(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1400f80(_QWORD, _QWORD);
__int64 GameRoutine_1405080(_QWORD);
__int64 GameRoutine_140f750(_QWORD, _QWORD);
__int64 GameRoutine_1412540(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1462640(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_146df70(__int64 result, __int64);
__int64 GameRoutine_148cdb0(_QWORD);
__int64 GameRoutine_7a88a0(_QWORD);
__int64 ProcClassTrialSeq_8b8140(void);
__int64 SceneCharacter_14020c0(_QWORD);
__int64 SceneManager_138c7e0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_1a8edb5;
extern __int64 (*GameData_2040ee8[])();
extern __int64 (*GameData_2041068[])();
extern __int64 GameData_21c99c0;
extern __int64 GameData_21cd0d0;
extern __int64 GameData_21f3ff8;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212d590[3];
extern __int64* GameData_212dcd0;
float ProcTheaterSceneAct_13e2420(_QWORD);
void __attribute__((noreturn)) GameRoutine_cdcc10(_QWORD);
void game_facility_anonymous_ProcClassExaminerScene_PrepareTrialResult();
void ProcClassExaminerScene_146d740(__int64 a1);
__int64 ProcClassExaminerScene_146dd50();
__int64 ProcClassExaminerScene_146dea0();
void ProcClassExaminerScene_146df30();
__int64
game_facility_anonymous_ProcClassExaminerScene_CommitCharaViewerParam_closure_Destructor(
    _QWORD* a1);
__int64
game_facility_anonymous_ProcClassExaminerScene_CommitCharaViewerParam_closure_DeletingDestructor(
    _QWORD* a1);
__int64
game_facility_anonymous_ProcClassExaminerScene_CommitCharaViewerParam_closure_Clone(
    __int64 a1);
__int64
game_facility_anonymous_ProcClassExaminerScene_CommitCharaViewerParam_closure_Destroy(
    _QWORD* a1);
__int64 ProcClassExaminerScene_146ea70(__int64 result, __int64 a2);
_QWORD* ProcClassExaminerScene_146f010(_QWORD* result, _QWORD* a2);
__int64
game_facility_anonymous_ProcClassExaminerScene_PrepareTrialResult_closure_Invoke(
    __int64 a1);
__int64 ProcClassExaminerScene_Unknown2();
__int64 ProcClassExaminerScene_Unknown6(__int64 result, char a2);
__int64
game_facility_anonymous_ProcClassExaminerScene_ChangeJobSelectCharacterAppearance_closure_Invoke_1471220(
    __int64 a1);
__int64
game_facility_anonymous_ProcClassExaminerScene_ChangeJobSelectCharacterAppearance_closure_Invoke_1471520(
    __int64 a1, __int64* a2);
__int64
game_facility_anonymous_ProcClassExaminerScene_SetJobSelectCharacterCameraMotion_closure_Invoke(
    __int64 result);
__int64 ProcClassExaminerScene_146ea70_alt1(_QWORD, _QWORD) __asm__(
    "ProcClassExaminerScene_146ea70");

void game_facility_anonymous_ProcClassExaminerScene_PrepareTrialResult()
{
  __int64 v0;
  __int64* v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _BYTE v19[20];
  char v20;
  _BYTE* v21;
  _BYTE v22[8];
  __int64 v23;
  _QWORD v24[2];
  int v25;
  char v26;

  v19[0] = 38;
  v20 = 0;
  *(_DWORD*)&v19[16] = -2004622461;
  v0 = *(_QWORD*)GameData_212dce8;
  *(_QWORD*)&v19[1] = 0xE35F93A8E9A6A9E8LL;
  *(_QWORD*)&v19[9] = 0x8383E38B83E3A683LL;
  v1 = *(__int64**)(v0 + 160);
  v2 = *(__int64**)(v0 + 168);
  if (v1 != v2) {
    while (1) {
      v4 = *v1++;
      v3 = v4;
      v5 = *(_QWORD*)(v4 + 40);
      v6 = v4 + 25;
      v7 = (*(_BYTE*)(v4 + 24) & 1) != 0 ? v5 : v6;
      v24[0] = &v19[1];
      v24[1] = (unsigned __int64)v19[0] >> 1;
      v8 = game_HashString(v7);
      if (v8 == GameRoutine_7a88a0(v24)) {
        break;
      }
      if (v1 == v2) {
        v3 = 0;
        break;
      }
    }
    if (v3 != 0) {
      v9 = *(_QWORD*)(v3 + 128);
      v10 = *(_QWORD*)(v3 + 136);
      if (v10 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                  memory_order_relaxed);
        GameRoutine_1405080(v9);
        if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          std___1___shared_weak_count___release_weak();
        }
      }
      else {
        GameRoutine_1405080(v9);
      }
      if (GameData_21f3ff8 != 0 && *(int*)(GameData_21f3ff8 + 32) >= 1) {
        v11 = *(__int64**)(GameData_21f3ff8 + 48);
        if (*(__int64**)(GameData_21f3ff8 + 56) == v11) {
          v12 = 0;
        }
        else {
          v12 = *v11;
        }
        ProcClassExaminerScene_146f010(v22, v12);
        *(_QWORD*)v19 = GameData_2041068;
        *(_QWORD*)&v19[8] = v3;
        v21 = v19;
        GameRoutine_1400c40(v3, v22, 0, v19);
        if (v21 == v19) {
          v15 = 32;
        }
        else {
          if (v21 == nullptr) {
            goto LABEL_32;
          }
          v15 = 40;
        }
        (*(void (**)(void))(*(_QWORD*)v21 + v15))();
      LABEL_32:
        v16 = v23;
        if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
          std___1___shared_weak_count___release_weak();
        }
        return;
      }
      v24[0] = SceneCharacter_14020c0(v3);
      v25 = 0;
      v26 = 1;
      GameRoutine_140ea90(&v17, v24, &v25);
      v21 = nullptr;
      GameRoutine_1400c40(v3, &v17, 0, v19);
      if (v21 == v19) {
        v13 = 32;
      }
      else {
        if (v21 == nullptr) {
          goto LABEL_22;
        }
        v13 = 40;
      }
      (*(void (**)(void))(*(_QWORD*)v21 + v13))();
    LABEL_22:
      v14 = v18;
      if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
        std___1___shared_weak_count___release_weak();
      }
      GameRoutine_1400f80(v3, 0);
    }
  }
}

void ProcClassExaminerScene_146d740(__int64 a1)
{
  int v2;
  float v3;
  float v4;

  v2 = (int)(float)(ProcTheaterSceneAct_13e2420(&GameData_1a8edb5) * 60.0);
  if (v2 >= 1) {
    v3 = *(float*)(a1 + 144);
    v4 = (float)(unsigned int)v2;
    *(_WORD*)(a1 + 136) &= 0xFF97u;
    if (v3 >= (float)(unsigned int)v2) {
      v4 = v3;
    }
    *(float*)(a1 + 144) = v4;
  }
}

__int64 ProcClassExaminerScene_146dd50()
{
  __int64 v0;
  __int64 result;
  __int64 v2;
  char v3;
  unsigned __int64 v4;
  _BYTE v5[15];

  v3 = 38;
  v5[11] = 0;
  *(_DWORD*)&v5[7] = -2004622461;
  v0 = *(_QWORD*)GameData_212dce8;
  v4 = 0xE35F93A8E9A6A9E8LL;
  *(_QWORD*)v5 = 0x8383E38B83E3A683LL;
  result = SceneManager_138c7e0(v0, &v3);
  if ((v3 & 1) != 0 && *(_QWORD*)&v5[7] != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, *(_QWORD*)&v5[7]);
  }
  return result;
}

__int64 ProcClassExaminerScene_146dea0()
{
  _QWORD* v0;
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  unsigned int v4;
  __int64 result;

  if (GameData_21f3ff8 != 0) {
    v0 = *(_QWORD**)(GameData_21f3ff8 + 48);
    if (*(_QWORD**)(GameData_21f3ff8 + 56) != v0 && *v0 != 0) {
      v1 = *(unsigned int*)(GameData_21f3ff8 + 36);
      if ((v1 & 0x80000000) == 0) {
        v2 = *(_QWORD*)(GameData_21c99c0 + 64);
        v3 = (unsigned __int64)(*(_QWORD*)(GameData_21c99c0 + 72) - v2) >> 3;
        if ((int)v1 < (int)v3 && *(_QWORD*)(v2 + 8 * v1) != 0) {
          v4 = *(_DWORD*)(GameData_21f3ff8 + 20);
          if ((v4 & 0x80000000) == 0 && v4 < (unsigned int)v3 &&
              *(_QWORD*)(v2 + 8LL * v4) != 0) {
            return ProcClassTrialSeq_8b8140();
          }
        }
      }
    }
  }
  return result;
}

void ProcClassExaminerScene_146df30()
{
  _DWORD* v0;
  int v1;

  if (GameData_21cd0d0 != 0) {
    v0 = *(_DWORD**)(GameData_21cd0d0 + 8);
    v1 = v0[2] - 1;
    v0[2] = v1;
    if (v1 == 0) {
      (*(void (**)(_DWORD*))(*(_QWORD*)v0 + 8LL))(v0);
    }
  }
}

__int64

game_facility_anonymous_ProcClassExaminerScene_CommitCharaViewerParam_closure_Destructor(
    _QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 result;

  v1 = a1[32];
  *a1 = GameData_2040ee8;
  if (v1 != 0) {
    a1[33] = v1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                  v1);
  }
  if (a1[31] != 0) {
    std___1___shared_weak_count___release_weak();
  }
  result = a1[17];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak();
  }
  return result;
}

__int64

game_facility_anonymous_ProcClassExaminerScene_CommitCharaViewerParam_closure_DeletingDestructor(
    _QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = a1[32];
  *a1 = GameData_2040ee8;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[33] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  if (a1[31] != 0) {
    std___1___shared_weak_count___release_weak();
  }
  if (a1[17] != 0) {
    std___1___shared_weak_count___release_weak();
  }
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, a1);
}

__int64

game_facility_anonymous_ProcClassExaminerScene_CommitCharaViewerParam_closure_Clone(
    __int64 a1)
{
  __int64 v2;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      336, 16, 0);
  ProcClassExaminerScene_146ea70_alt1(v2, a1 + 16);
  return v2;
}

__int64

game_facility_anonymous_ProcClassExaminerScene_CommitCharaViewerParam_closure_Destroy(
    _QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 result;

  v1 = a1[32];
  if (v1 != 0) {
    a1[33] = v1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                  v1);
  }
  if (a1[31] != 0) {
    std___1___shared_weak_count___release_weak();
  }
  result = a1[17];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak();
  }
  return result;
}

__int64 ProcClassExaminerScene_146ea70(__int64 result, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  v3 = result;
  *(_QWORD*)result = GameData_2040ee8;
  *(_QWORD*)(result + 24) = *(_QWORD*)(a2 + 8);
  *(_QWORD*)(result + 16) = *(_QWORD*)a2;
  *(_QWORD*)(result + 40) = *(_QWORD*)(a2 + 24);
  *(_QWORD*)(result + 32) = *(_QWORD*)(a2 + 16);
  *(_QWORD*)(result + 56) = *(_QWORD*)(a2 + 40);
  *(_QWORD*)(result + 48) = *(_QWORD*)(a2 + 32);
  v4 = *(_QWORD*)(a2 + 56);
  *(_QWORD*)(result + 64) = *(_QWORD*)(a2 + 48);
  *(_QWORD*)(result + 72) = v4;
  v5 = *(_QWORD*)(a2 + 64);
  *(_DWORD*)(result + 88) = *(_DWORD*)(a2 + 72);
  *(_QWORD*)(result + 80) = v5;
  v6 = *(_QWORD*)(a2 + 88);
  *(_QWORD*)(result + 96) = *(_QWORD*)(a2 + 80);
  *(_QWORD*)(result + 104) = v6;
  v7 = *(_QWORD*)(a2 + 104);
  *(_QWORD*)(result + 112) = *(_QWORD*)(a2 + 96);
  *(_QWORD*)(result + 120) = v7;
  *(_QWORD*)(result + 128) = *(_QWORD*)(a2 + 112);
  v8 = *(_QWORD*)(a2 + 120);
  *(_QWORD*)(result + 136) = v8;
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                              memory_order_relaxed);
  }
  v9 = *(_DWORD*)(a2 + 144);
  *(_QWORD*)(result + 152) = *(_QWORD*)(a2 + 136);
  v10 = *(_QWORD*)(a2 + 128);
  *(_DWORD*)(result + 160) = v9;
  *(_QWORD*)(result + 144) = v10;
  *(_QWORD*)(result + 184) = *(_QWORD*)(a2 + 168);
  *(_QWORD*)(result + 176) = *(_QWORD*)(a2 + 160);
  v12 = *(_QWORD*)(a2 + 200);
  v11 = *(_QWORD*)(a2 + 208);
  LODWORD(v10) = *(_DWORD*)(a2 + 216);
  *(_QWORD*)(result + 208) = *(_QWORD*)(a2 + 192);
  *(_DWORD*)(result + 232) = v10;
  *(_QWORD*)(result + 224) = v11;
  v14 = *(_QWORD*)(a2 + 176);
  v13 = *(_QWORD*)(a2 + 184);
  *(_QWORD*)(result + 216) = v12;
  *(_QWORD*)(result + 192) = v14;
  *(_QWORD*)(result + 200) = v13;
  *(_QWORD*)(result + 240) = *(_QWORD*)(a2 + 224);
  v15 = *(_QWORD*)(a2 + 232);
  *(_QWORD*)(result + 248) = v15;
  if (v15 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 16), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(result + 264) = 0;
  *(_QWORD*)(result + 272) = 0;
  *(_QWORD*)(result + 256) = 0;
  v17 = *(_QWORD*)(a2 + 240);
  v16 = *(_QWORD*)(a2 + 248);
  v18 = v16 - v17;
  if (v16 != v17) {
    if (v18 < 0) {
      GameRoutine_cdcc10(result);
    }
    v19 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v16 - v17, 16, 0);
    v20 = v19 + v18;
    v21 = v18 & 0x7FFFFFFFFFFFFFF0LL;
    v22 = v19;
    *(_QWORD*)(v3 + 256) = v19;
    *(_QWORD*)(v3 + 264) = v19;
    *(_QWORD*)(v3 + 272) = v20;
    result = memcpy(v19, v17, v21);
    *(_QWORD*)(v3 + 264) = v22 + v21;
  }
  *(_BYTE*)(v3 + 288) = 0;
  *(_BYTE*)(v3 + 304) = 0;
  if (*(_BYTE*)(a2 + 288) == 1) {
    *(_QWORD*)(v3 + 296) = *(_QWORD*)(a2 + 280);
    *(_QWORD*)(v3 + 288) = *(_QWORD*)(a2 + 272);
    *(_BYTE*)(v3 + 304) = 1;
  }
  *(_QWORD*)(v3 + 328) = *(_QWORD*)(a2 + 312);
  *(_QWORD*)(v3 + 320) = *(_QWORD*)(a2 + 304);
  return result;
}

_QWORD* ProcClassExaminerScene_146f010(_QWORD* result, _QWORD* a2)
{
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64* v10;
  __int64* v11;
  _QWORD v12[2];
  unsigned int v13;

  if (a2 == nullptr) {
    *result = 0;
    result[1] = 0;
    return result;
  }
  if (*GameData_212dcd0 != 0 &&
      ((v3 = *(unsigned int*)(*GameData_212dcd0 + 20)) & 0x80000000) == 0 &&
      (v4 = *(_QWORD*)(GameData_21c99c0 + 64),
       (int)v3 <
           (int)((unsigned __int64)(*(_QWORD*)(GameData_21c99c0 + 72) - v4) >>
                 3)) &&
      (v5 = *(__int64**)(v4 + 8 * v3)) != nullptr) {
    if (a2[51] != 0) {
      goto LABEL_13;
    }
  }
  else {
    if (a2[51] != 0) {
      v5 = nullptr;
    LABEL_16:
      v11 = v5;
      return (_QWORD*)GameRoutine_140f750(a2, &v11);
    }
    v5 = *(__int64**)(*(_QWORD*)(a2[50] + 24LL) + 1104LL);
  }
  if (v5 == *(__int64**)(*(_QWORD*)(a2[50] + 24LL) + 1104LL)) {
    goto LABEL_16;
  }
LABEL_13:
  v6 = *(_QWORD*)(a2[49] + 24LL);
  v7 = *(_QWORD*)(v6 + 1400);
  v12[0] = *(_QWORD*)(v6 + 1392);
  v12[1] = v7;
  if (game_GameModeData_instance_ != 0 &&
      (v8 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v6 + 1392)) != 0) {
    v9 = *(_DWORD*)(v8 + 32);
  }
  else {
    v9 = 0;
  }
  v13 = v9;
  game_VariableManager_SetFlag(v6 + 1392, 0);
  v10 = v5;
  GameRoutine_140f750(a2, &v10);
  v11 = GameData_212d590[0] + 2;
  return (_QWORD*)game_VariableManager_SetFlag(v12, v9);
}

__int64

game_facility_anonymous_ProcClassExaminerScene_PrepareTrialResult_closure_Invoke(
    __int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;

  v1 = *(_QWORD*)(a1 + 8);
  v18 = 0;
  v19 = &v18;
  result = GameRoutine_1462640(&v19, &v19, *(_QWORD*)(v1 + 8));
  v3 = v18;
  if (v18 != 0) {
    v5 = *(_QWORD*)(v18 + 48);
    v4 = *(_QWORD*)(v18 + 56);
    *(_DWORD*)(v18 + 112) = 0;
    v6 = v4 - v5;
    *(_BYTE*)(v3 + 116) = 1;
    if (v6 != 0) {
      if (v6 == 8) {
        v7 = 0;
      }
      else {
        v10 = 0;
        v7 = 0;
        do {
          v13 = *(_QWORD*)(*(_QWORD*)(v3 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v3 + 48) + 8 * v7);
          *(_QWORD*)(v3 + 96) = v13;
          v14 = *(_QWORD*)(v13 + 192);
          if ((*(_BYTE*)(v14 + 22) & 1) == 0 &&
              (*(_BYTE*)(v14 + 21) & 1) == 0) {
            *(_QWORD*)v14 = 0;
            *(_DWORD*)(v14 + 8) = 1;
          }
          *(_DWORD*)(v14 + 12) = 0;
          *(_BYTE*)(v14 + 20) = 1;
          v15 = *(_QWORD*)(v3 + 136);
          *(_QWORD*)(v3 + 96) = 0;
          *(_BYTE*)(v15 + v10) = 0;
          v16 = *(_QWORD*)(*(_QWORD*)(v3 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v3 + 48) + 8 * v7 + 8);
          *(_QWORD*)(v3 + 96) = v16;
          v17 = *(_QWORD*)(v16 + 192);
          if ((*(_BYTE*)(v17 + 22) & 1) == 0 &&
              (*(_BYTE*)(v17 + 21) & 1) == 0) {
            *(_QWORD*)v17 = 0;
            *(_DWORD*)(v17 + 8) = 1;
          }
          *(_DWORD*)(v17 + 12) = 0;
          *(_BYTE*)(v17 + 20) = 1;
          v7 += 2;
          v11 = *(_QWORD*)(v3 + 136);
          *(_QWORD*)(v3 + 96) = 0;
          v12 = v11 + v10;
          v10 += 6;
          *(_BYTE*)(v12 + 3) = 0;
        } while (((v6 >> 3) & 0xFFFFFFFFFFFFFFFELL) != v7);
      }
      if ((v6 & 8) != 0) {
        v8 = *(_QWORD*)(*(_QWORD*)(v3 + 40) + 56LL) +
             224LL * *(_QWORD*)(*(_QWORD*)(v3 + 48) + 8 * v7);
        *(_QWORD*)(v3 + 96) = v8;
        v9 = *(_QWORD*)(v8 + 192);
        if ((*(_BYTE*)(v9 + 22) & 1) == 0 && (*(_BYTE*)(v9 + 21) & 1) == 0) {
          *(_QWORD*)v9 = 0;
          *(_DWORD*)(v9 + 8) = 1;
        }
        *(_DWORD*)(v9 + 12) = 0;
        *(_BYTE*)(v9 + 20) = 1;
        *(_QWORD*)(v3 + 96) = 0;
        *(_BYTE*)(*(_QWORD*)(v3 + 136) + 3 * v7) = 0;
      }
    }
  }
  return result;
}

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

__int64 ProcClassExaminerScene_Unknown2()
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

__int64 ProcClassExaminerScene_Unknown6(__int64 result, char a2)
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
    v2 = *(_QWORD**)(result + 88);
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
    v11 = *(_QWORD*)(result - 200);
    v10 = *(_QWORD*)(result - 192);
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
      v12 = *(_QWORD**)(result + 88);
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

__int64

game_facility_anonymous_ProcClassExaminerScene_ChangeJobSelectCharacterAppearance_closure_Invoke_1471220(
    __int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;

  GameRoutine_146df70(*(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 16));
  v2 = *(_QWORD*)(a1 + 8);
  v22 = 0;
  v23 = &v22;
  GameRoutine_1462640(&v23, &v23, *(_QWORD*)(v2 + 8));
  v3 = v22;
  if (v22 != 0) {
    v5 = *(_QWORD*)(v22 + 48);
    v4 = *(_QWORD*)(v22 + 56);
    *(_DWORD*)(v22 + 112) = 0;
    v6 = v4 - v5;
    *(_BYTE*)(v3 + 116) = 1;
    if (v6 != 0) {
      if (v6 == 8) {
        v7 = 0;
      }
      else {
        v14 = 0;
        v7 = 0;
        do {
          v17 = *(_QWORD*)(*(_QWORD*)(v3 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v3 + 48) + 8 * v7);
          *(_QWORD*)(v3 + 96) = v17;
          v18 = *(_QWORD*)(v17 + 192);
          if ((*(_BYTE*)(v18 + 22) & 1) == 0 &&
              (*(_BYTE*)(v18 + 21) & 1) == 0) {
            *(_QWORD*)v18 = 0;
            *(_DWORD*)(v18 + 8) = 1;
          }
          *(_DWORD*)(v18 + 12) = 0;
          *(_BYTE*)(v18 + 20) = 1;
          v19 = *(_QWORD*)(v3 + 136);
          *(_QWORD*)(v3 + 96) = 0;
          *(_BYTE*)(v19 + v14) = 0;
          v20 = *(_QWORD*)(*(_QWORD*)(v3 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v3 + 48) + 8 * v7 + 8);
          *(_QWORD*)(v3 + 96) = v20;
          v21 = *(_QWORD*)(v20 + 192);
          if ((*(_BYTE*)(v21 + 22) & 1) == 0 &&
              (*(_BYTE*)(v21 + 21) & 1) == 0) {
            *(_QWORD*)v21 = 0;
            *(_DWORD*)(v21 + 8) = 1;
          }
          *(_DWORD*)(v21 + 12) = 0;
          *(_BYTE*)(v21 + 20) = 1;
          v7 += 2;
          v15 = *(_QWORD*)(v3 + 136);
          *(_QWORD*)(v3 + 96) = 0;
          v16 = v15 + v14;
          v14 += 6;
          *(_BYTE*)(v16 + 3) = 0;
        } while (((v6 >> 3) & 0xFFFFFFFFFFFFFFFELL) != v7);
      }
      if ((v6 & 8) != 0) {
        v8 = *(_QWORD*)(*(_QWORD*)(v3 + 40) + 56LL) +
             224LL * *(_QWORD*)(*(_QWORD*)(v3 + 48) + 8 * v7);
        *(_QWORD*)(v3 + 96) = v8;
        v9 = *(_QWORD*)(v8 + 192);
        if ((*(_BYTE*)(v9 + 22) & 1) == 0 && (*(_BYTE*)(v9 + 21) & 1) == 0) {
          *(_QWORD*)v9 = 0;
          *(_DWORD*)(v9 + 8) = 1;
        }
        *(_DWORD*)(v9 + 12) = 0;
        *(_BYTE*)(v9 + 20) = 1;
        *(_QWORD*)(v3 + 96) = 0;
        *(_BYTE*)(*(_QWORD*)(v3 + 136) + 3 * v7) = 0;
      }
    }
  }
  v10 = *(_QWORD*)(a1 + 8);
  BYTE2(v23) = 1;
  LOWORD(v23) = 1;
  v11 = *(_QWORD*)(v10 + 112);
  v12 = *(_QWORD*)(v10 + 120);
  if (v12 == 0) {
    return GameRoutine_1412540(v11, *(unsigned int*)(v11 + 108), &v23);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                            memory_order_relaxed);
  result = GameRoutine_1412540(v11, *(unsigned int*)(v11 + 108), &v23);
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    return std___1___shared_weak_count___release_weak();
  }
  return result;
}

__int64

game_facility_anonymous_ProcClassExaminerScene_ChangeJobSelectCharacterAppearance_closure_Invoke_1471520(
    __int64 a1, __int64* a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;

  v2 = (_QWORD*)*a2;
  GameRoutine_146df70(*a2, *(_QWORD*)(a1 + 8));
  v3 = v2[1];
  v22 = 0;
  v23 = &v22;
  GameRoutine_1462640(&v23, &v23, v3);
  v4 = v22;
  if (v22 != 0) {
    v6 = *(_QWORD*)(v22 + 48);
    v5 = *(_QWORD*)(v22 + 56);
    *(_DWORD*)(v22 + 112) = 0;
    v7 = v5 - v6;
    *(_BYTE*)(v4 + 116) = 1;
    if (v7 != 0) {
      if (v7 == 8) {
        v8 = 0;
      }
      else {
        v14 = 0;
        v8 = 0;
        do {
          v17 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8);
          *(_QWORD*)(v4 + 96) = v17;
          v18 = *(_QWORD*)(v17 + 192);
          if ((*(_BYTE*)(v18 + 22) & 1) == 0 &&
              (*(_BYTE*)(v18 + 21) & 1) == 0) {
            *(_QWORD*)v18 = 0;
            *(_DWORD*)(v18 + 8) = 1;
          }
          *(_DWORD*)(v18 + 12) = 0;
          *(_BYTE*)(v18 + 20) = 1;
          v19 = *(_QWORD*)(v4 + 136);
          *(_QWORD*)(v4 + 96) = 0;
          *(_BYTE*)(v19 + v14) = 0;
          v20 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8 + 8);
          *(_QWORD*)(v4 + 96) = v20;
          v21 = *(_QWORD*)(v20 + 192);
          if ((*(_BYTE*)(v21 + 22) & 1) == 0 &&
              (*(_BYTE*)(v21 + 21) & 1) == 0) {
            *(_QWORD*)v21 = 0;
            *(_DWORD*)(v21 + 8) = 1;
          }
          *(_DWORD*)(v21 + 12) = 0;
          *(_BYTE*)(v21 + 20) = 1;
          v8 += 2;
          v15 = *(_QWORD*)(v4 + 136);
          *(_QWORD*)(v4 + 96) = 0;
          v16 = v15 + v14;
          v14 += 6;
          *(_BYTE*)(v16 + 3) = 0;
        } while (((v7 >> 3) & 0xFFFFFFFFFFFFFFFELL) != v8);
      }
      if ((v7 & 8) != 0) {
        v9 = *(_QWORD*)(*(_QWORD*)(v4 + 40) + 56LL) +
             224LL * *(_QWORD*)(*(_QWORD*)(v4 + 48) + 8 * v8);
        *(_QWORD*)(v4 + 96) = v9;
        v10 = *(_QWORD*)(v9 + 192);
        if ((*(_BYTE*)(v10 + 22) & 1) == 0 && (*(_BYTE*)(v10 + 21) & 1) == 0) {
          *(_QWORD*)v10 = 0;
          *(_DWORD*)(v10 + 8) = 1;
        }
        *(_DWORD*)(v10 + 12) = 0;
        *(_BYTE*)(v10 + 20) = 1;
        *(_QWORD*)(v4 + 96) = 0;
        *(_BYTE*)(*(_QWORD*)(v4 + 136) + 3 * v8) = 0;
      }
    }
  }
  v11 = v2[14];
  v12 = v2[15];
  BYTE2(v23) = 1;
  LOWORD(v23) = 1;
  if (v12 == 0) {
    return GameRoutine_1412540(v11, *(unsigned int*)(v11 + 108), &v23);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                            memory_order_relaxed);
  result = GameRoutine_1412540(v11, *(unsigned int*)(v11 + 108), &v23);
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    return std___1___shared_weak_count___release_weak();
  }
  return result;
}

__int64

game_facility_anonymous_ProcClassExaminerScene_SetJobSelectCharacterCameraMotion_closure_Invoke(
    __int64 result)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(result + 16);
  if (v1 != 0) {
    v2 = *(_QWORD*)(v1 + 8);
    if (v2 != 0 && *(_BYTE*)(v2 + 289) == 1 && (*(_BYTE*)(v2 + 288) & 1) != 0 &&
        (*(_BYTE*)(v2 + 300) & 0xFD) != 1) {
      while (1) {
        v2 = *(_QWORD*)(v2 + 736);
        if (v2 == 0) {
          break;
        }
        if (*(_BYTE*)(v2 + 289) != 1 || *(_BYTE*)(v2 + 288) != 1 ||
            (*(_BYTE*)(v2 + 300) & 0xFD) == 1) {
          return result;
        }
      }
      return GameRoutine_148cdb0(*(_QWORD*)(*(_QWORD*)(result + 8) + 296LL));
    }
  }
  return result;
}

#pragma GCC visibility pop
