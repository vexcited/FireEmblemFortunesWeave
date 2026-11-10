#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 FacilityUnitList_145d160(_QWORD, _QWORD);
__int64 FacilityUnitList_145d420(_QWORD, _QWORD);
__int64 GameRoutine_145c3e0(void);
__int64 GameRoutine_1464a50(_QWORD);
__int64 GameRoutine_19537e0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_809dc0(_QWORD, _QWORD, float);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _DWORD* GameData_212dcd8;
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_212c960;
extern __int64 (*GameData_2119060[])();
extern __int64 (*UIVisibleBinder_Destructor_195a940_ptr[])();
extern __int64 (*game_facility_anonymous_UIVisibleBinder_vtable[])();
extern __int64* GameData_212c628;
extern __int64* GameData_212dcc8[2];
extern __int64* GameData_212dcd0;
extern __int64* GameData_2131320[2];
extern __int64 GameData_226d110;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_UnitListSet_instance_;
void __attribute__((noreturn)) GameRoutine_1953ad0(long double);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__attribute__((swiftcall)) void game_facility_18754f0(PSEUDO_X8 x8_,
                                                      __int64 a1);
__attribute__((swiftcall)) void game_facility_1953090(PSEUDO_X8 x8_, _QWORD* a1,
                                                      _QWORD* a2, __int64 a3,
                                                      float a5);
void game_facility_1958220(__int64 a1);
__int64 game_facility_195a410(void (***a1)(_QWORD));

__attribute__((swiftcall)) void game_facility_18754f0(PSEUDO_X8 x8_, __int64 a1)
{
  bool a2 = (bool)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;
  bool v4;
  int v6;
  int v7;

  v2 = *(_QWORD*)(a1 + 88);
  if (v2 != 0) {
    v3 = game_g_shared_system_skills_ptr;
    v6 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                    game_g_shared_system_skills_ptr) &
         0xFFF;
    a2 = false;
    if ((game_HasSkill(v2 + 1744, &v6) & 1) == 0) {
      v4 = *(_WORD*)(v2 + 492) == 0 && *(_BYTE*)(v2 + 496) == 0;
      if (!v4 || (v7 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v3) & 0xFFF,
                  (game_HasSkill(v2 + 1744, &v7) & 1) == 0)) {
        a2 = true;
      }
    }
  }
  {
    (v2 == 0) | (unsigned int)a2;
    return;
  }
}

__attribute__((swiftcall)) void game_facility_1953090(PSEUDO_X8 x8_, _QWORD* a1,
                                                      _QWORD* a2, __int64 a3,
                                                      float a5)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v10;
  _QWORD* v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  float v15;
  __int64 v16;
  __int64 v17;
  long double v18;
  _QWORD* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  char* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD v34[2];

  v10 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v11 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 176, 16, 0);
  v12 = v11 + 4;
  v13 = v11;
  v11[1] = 0;
  v11[2] = 0;
  *v11 = GameData_2119060;
  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(v11 + 4, a2[2], a2[1]);
  }
  else {
    v14 = a2[1];
    *v12 = *a2;
    v11[5] = v14;
    v11[6] = a2[2];
  }
  v15 = 0.0;
  *(_QWORD*)((char*)v13 + 68) = 0;
  v13[10] = 0;
  *((_DWORD*)v13 + 22) = 2;
  if (a5 >= 0.0) {
    v15 = a5;
  }
  *((float*)v13 + 16) = v15;
  *((float*)v13 + 19) = v15;
  v16 = *(_QWORD*)(a3 + 32);
  v13[7] = GameData_2131320[0] + 2;
  if (v16 != 0) {
    if (v16 == a3) {
      v13[16] = v13 + 12;
      (*(void (**)(__int64))(*(_QWORD*)v16 + 24LL))(v16);
    }
    else {
      v13[16] = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    }
  }
  else {
    v13[16] = 0;
  }
  *((_BYTE*)v13 + 168) = 0;
  v13[19] = 0;
  v13[20] = 0;
  v13[18] = 0;
  *a4 = v12;
  a4[1] = v13;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 2), 1u,
                            memory_order_relaxed);
  v34[0] = v12;
  v34[1] = v13;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 2), 1u,
                            memory_order_relaxed);
  GameRoutine_19537e0(a1, v34);
  *(__n128*)&v18 = std___1___shared_weak_count___release_weak(v13);
  v19 = (_QWORD*)a1[2];
  v20 = a1[3];
  if ((unsigned __int64)v19 >= v20) {
    v22 = a1[1];
    v23 = (char*)v19 - v22;
    v24 = ((__int64)v19 - v22) >> 4;
    v25 = v24 + 1;
    if ((unsigned __int64)(v24 + 1) >> 60 != 0) {
      GameRoutine_1953ad0(v18);
    }
    v26 = v20 - v22;
    if (v26 >> 3 > v25) {
      v25 = v26 >> 3;
    }
    if ((unsigned __int64)v26 >= 0x7FFFFFFFFFFFFFF0LL) {
      v27 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v27 = v25;
    }
    if (v27 >> 60 != 0) {
      GameRoutine_60a210(v17);
    }
    v28 = fw_memory_HeapManager_Allocate(*v10, 16 * v27, 16, 0);
    v29 = &v23[v28];
    v30 = v28 + 16 * v27;
    *(_QWORD*)v29 = v12;
    *((_QWORD*)v29 + 1) = v13;
    v31 = (__int64)&v23[v28 + -16 * v24];
    v21 = (__int64)&v23[v28 + 16];
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 2), 1u,
                              memory_order_relaxed);
    memcpy(v31, v22, v23);
    a1[1] = v31;
    a1[2] = v21;
    a1[3] = v30;
    if (v22 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*v10 + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free(*v10 + v32);
    }
  }
  else {
    *v19 = v12;
    v19[1] = v13;
    v21 = (__int64)(v19 + 2);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 2), 1u,
                              memory_order_relaxed);
  }
  a1[2] = v21;
  {
    std___1___shared_weak_count___release_weak(v13);
    return;
  }
}

void game_facility_1958220(__int64 a1)
{
  unsigned __int64 v2;
  __int128 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int128 v7;
  float v8;
  __int128* v9;
  __int128 v10;

  if (game_ProcFadeView_instance_ == 0) {
  LABEL_16:
    *(_BYTE*)(a1 + 240) = 1;
    return;
  }
  v2 = game_ProcFadeView_instance_ +
       ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ + 480)
        << 6);
  if (*(float*)(v2 + 172) == *(float*)(v2 + 168)) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)(v2 + 160) + 16LL))(v2 + 160);
  }
  else {
    v3 = *(_OWORD*)(v2 + 208);
  }
  if (*((float*)&v3 + 3) != 1.0f ||
      LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                   (_QWORD*)(*(_QWORD*)(v2 + 160) + 16LL))(v2 + 160,
                                                           *((float*)&v3 + 3)))
              .n128_f32[3] != 1.0f) {
    v4 = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      v5 = game_ProcFadeView_instance_ +
           ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                  480)
            << 6);
      if (*(float*)(v5 + 172) == *(float*)(v5 + 168) &&
          (v6 = v5 + 160,
           LANES128_OF(((__n128 (*)(unsigned __int64)) *
                        (_QWORD*)(*(_QWORD*)(v5 + 160) + 16LL))(v5 + 160))
                   .n128_f32[3] == 1.0f)) {
        if (*(float*)(v6 + 12) == *(float*)(v6 + 8)) {
          (*(void (**)(unsigned __int64))(*(_QWORD*)v6 + 16LL))(v6);
        }
        else {
          v7 = *(_OWORD*)(v6 + 48);
        }
        v10 = v7;
        v8 = 0.5f;
        v9 = &v10;
      }
      else {
        v8 = 0.5f;
        v9 = (__int128*)GameData_212c960;
      }
      game_809dc0(v4, v9, v8);
    }
    goto LABEL_16;
  }
}

__int64 game_facility_195a410(void (***a1)(_QWORD))
{
  __int64* v2;
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  _BYTE v12[48];
  __int64 v13;

  v2 = GameData_212dcd0;
  v3 = *GameData_212dcd0;
  v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (*GameData_212dcd0 != 0) {
    ++*GameData_212dcd8;
  }
  else {
    v5 = (__int64*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
    v6 = v5;
    if (*v2 == 0) {
      *v2 = (__int64)v5;
      *GameData_212dcd8 = 1;
    }
    v7 = GameData_212dcc8[0];
    v5[6] = 0;
    v5[7] = 0;
    v5[8] = 0;
    v5[9] = 0;
    v5[10] = 0;
    v5[11] = 0;
    v5[2] = -1;
    v5[3] = -1;
    v5[4] = -1;
    v5[5] = -1;
    *v5 = (__int64)(v7 + 2);
    v5[1] = -1;
    GameRoutine_145c3e0();
    v8 = *v6;
    *v2 = (__int64)v6;
    (*(void (**)(__int64*))(v8 + 16))(v6);
    v3 = *v2;
  }
  *(_DWORD*)(v3 + 8) = -1;
  *(_DWORD*)(v3 + 44) = -1;
  *(_QWORD*)(v3 + 56) = *(_QWORD*)(v3 + 48);
  *(_QWORD*)(v3 + 80) = *(_QWORD*)(v3 + 72);
  *(_QWORD*)(v3 + 12) = -1;
  *(_QWORD*)(v3 + 20) = -1;
  *(_QWORD*)(v3 + 28) = -1;
  *(_QWORD*)(v3 + 36) = -1;
  GameRoutine_1464a50(
      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c628));
  v13 = 0;
  v9 = *(_QWORD*)game_UnitListSet_instance_;
  v12[0] = 1;
  FacilityUnitList_145d160(v9, v12);
  v13 = 0;
  v12[0] = 0;
  FacilityUnitList_145d420(*(_QWORD*)(game_UnitListSet_instance_ + 8), v12);
  (**a1)(a1);
  result = fw_memory_HeapManager_Allocate(*v4, 24, 16, 0);
  *(_DWORD*)(result + 16) = 0;
  *(_BYTE*)(result + 20) = 0;
  v11 = GameData_226d110;
  *(_QWORD*)result = game_facility_anonymous_UIVisibleBinder_vtable;
  *(_QWORD*)(result + 8) = UIVisibleBinder_Destructor_195a940_ptr;
  if (v11 == 0) {
    v11 = result;
  }
  if (*(int*)(v11 + 16) >= 1) {
    *(_DWORD*)(v11 + 16) = 0;
  }
  GameData_226d110 = result;
  return result;
}

#pragma GCC visibility pop
