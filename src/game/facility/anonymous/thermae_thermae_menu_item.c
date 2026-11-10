#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15e6c00(_QWORD);
__int64 GameRoutine_16ed000(void);
__int64 GameRoutine_16ed430(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_94efe0(_QWORD, _QWORD);
extern __int64 (*GameData_1faf7f8[])();
extern __int64 GameData_212c6c0[2];
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
__int64 ThermaeThermaeMenuItem_ACall(_QWORD* a1);
__int64 ThermaeThermaeMenuItem_Unknown55(__int64 a1);
__int64 GameRoutine_143de80(_QWORD);
__int64 GameRoutine_145e440(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15e7650(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee370(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee520(_QWORD);
__int64 GameRoutine_16ef210(_QWORD, _QWORD);
__int64 GameRoutine_1789cf0(_QWORD, _QWORD);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_94af40(_QWORD);
__int64 GameRoutine_9db9e0(_QWORD, _QWORD);
__int64 GameRoutine_f369a0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_212c730;
extern __int64 (*GameData_205d508[])();
extern __int64 (*GameData_205d688[])();
extern __int64 (*game_facility_anonymous_ProcThermaeUnitMenu_vtable[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr[])();
extern __int64 GameData_212ddf8[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_UnitListSet_instance_;
extern __int64* GameData_212cc58[60];
extern __int64* GameData_212dcd0;
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
extern __int64* GameData_21312e0[10];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
bool ThermaeThermaeMenuItem_94efe0(__int64 a1, __int64 a2);
__int64 ThermaeThermaeMenuItem_15e69c0(__int64 a1);
_QWORD* ThermaeThermaeMenuItem_15e6c00(__int64 a1);

bool ThermaeThermaeMenuItem_94efe0(__int64 a1, __int64 a2)
{
  unsigned __int8* v2;
  __int64 v3;
  int v4;
  _BOOL8 result;

  if (*(_BYTE*)(*(_QWORD*)a2 + 1LL) == 0) {
    return false;
  }
  v2 = (unsigned __int8*)(*(_QWORD*)a2 + 8LL);
  v3 = *(unsigned __int8*)(*(_QWORD*)a2 + 1LL) - 1LL;
  do {
    v4 = *v2;
    v2 += 24;
    result = v4 == 3;
  } while (v4 != 3 && v3-- != 0);
  return result;
}

__int64 ThermaeThermaeMenuItem_ACall(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = a1[1];
  if (*(_QWORD*)(v2 + 152) != 0) {
    v3 = *(_QWORD*)(v2 + 152);
  }
  else {
    v3 = a1[1];
  }
  GameRoutine_15e6c00(v3);
  return 9;
}

__int64 ThermaeThermaeMenuItem_Unknown55(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int16* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  __int64 v10;
  char v11;
  _QWORD v13[4];
  _QWORD* v14;
  __int64 v15;

  GameRoutine_16ed000();
  v2 = v13;
  v13[0] = GameData_1faf7f8;
  v14 = v13;
  v3 = *(_QWORD*)GameData_212c6c0[0];
  if (*(_QWORD*)GameData_212c6c0[0] == 0) {
    v11 = 0;
    v10 = 32;
    goto LABEL_18;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v4 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v4 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v5 = *(_QWORD*)(v3 + 16);
  v6 = *(_QWORD*)(v3 + 24);
  if (v5 != v6) {
    v7 = *v4;
    v8 = v4[1];
    v9 = v4[2];
    v10 = 32;
    while (v7 != *(unsigned __int16*)(v5 + 4) ||
           v8 != *(unsigned __int8*)(v5 + 6) ||
           v9 != *(unsigned __int8*)(v5 + 7)) {
      v5 += 368;
      if (v5 == v6) {
        v11 = 0;
        v2 = v13;
        goto LABEL_18;
      }
    }
  }
  v2 = v13;
  v10 = 32;
  v11 = 0;
  if (v5 == v6 || v5 == 0) {
    goto LABEL_18;
  }
  v15 = v5;
  v11 = GameRoutine_94efe0(v13, &v15);
  v2 = v14;
  if (v14 == v13) {
    v10 = 32;
    goto LABEL_18;
  }
  if (v14 != nullptr) {
    v10 = 40;
  LABEL_18:
    (*(void (**)(_QWORD*))(*v2 + v10))(v2);
  }
  return GameRoutine_16ed430(a1, v11 & 1, 1);
}

__int64 ThermaeThermaeMenuItem_15e69c0(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  const char* v5;
  int v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  bool v16;
  __int64 v17;
  int v18;
  _BYTE v20[92];
  int v21;
  int v22;
  bool v23;
  int v24;
  int v25;
  __int64 v26;
  bool v27;
  char v28;
  _QWORD v29[2];
  char v30;
  int v31;
  int v32;
  char v33;
  _QWORD* v34;
  int v35;

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 != 0 && (v3 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                                      GameData_212dff0[0], 0)) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 1112LL))(v3);
  }
  else {
    v4 = v1 + 848;
  }
  v5 = "MID_ThermaeMenu_Thermae_Help";
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v5 = "MID_ThermaeMenu_Thermae_Part3_Help";
  }
  v6 = 999999;
  v7 = GameRoutine_16ee370(v20, v4, v5);
  v8 = *(__int64**)(*GameData_212cc58[0] + 64);
  v9 = *(__int64**)(*GameData_212cc58[0] + 72);
  while (v8 != v9) {
    v10 = *v8;
    v7 = GameRoutine_9db9e0(21, *(unsigned __int16*)(*v8 + 68));
    if ((int)v7 < v6) {
      v7 = GameRoutine_9db9e0(21, *(unsigned __int16*)(v10 + 68));
      v6 = v7;
    }
    ++v8;
  }
  v11 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v11 = *(_DWORD*)(game_GameModeData_instance_ + 72);
  }
  v21 = 0;
  v22 = v6;
  v23 = v11 < v6;
  v12 = (unsigned int)GameRoutine_94af40(v7);
  v34 = nullptr;
  GameRoutine_15e7650(v20, v12, v29);
  v35 = 0;
  v13 = *(_QWORD*)(game_UnitListSet_instance_ + 24);
  v34 = v29;
  v29[0] = GameData_212ddf8[0] + 16;
  v29[1] = &v35;
  GameRoutine_145e440(v13, v29, 2);
  v14 = (__int64)v34;
  if (v34 == v29) {
    v15 = 32;
  }
  else {
    if (v34 == nullptr) {
      goto LABEL_20;
    }
    v15 = 40;
  }
  v14 = (*(__int64 (**)(void*))(*v34 + v15))(v34);

LABEL_20:
  if ((v12 & 0x40) != 0) {
    v24 = v35;
    v25 = 2;
  }
  v16 = (GameRoutine_94af40(v14) & 2) != 0;
  v17 = GameRoutine_143de80(7);
  v27 = v16;
  v28 = 0;
  v26 = v17;
  v18 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 192LL))(
      *(_QWORD*)(a1 + 8));
  v33 = 0;
  v34 = nullptr;
  v29[0] = "Tutorial";
  v29[1] = "MID_KeyHelp_Tutorial";
  v30 = 1;
  v31 = 10;
  v32 = v18;
  GameRoutine_16ef210(v20, v29);
  return GameRoutine_16ee520(v20);
}

_QWORD* ThermaeThermaeMenuItem_15e6c00(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* result;
  __int64*** v11;
  __int64** v12;
  __int64** v13;
  __int64* v14;
  __int64* v15;
  _BOOL4 v16;
  __int64 v17;
  _QWORD v18[4];
  _QWORD* v19;
  __int64 v20;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1216, 16, 0);
  GameRoutine_1789cf0(v2, "ThermaeUnitMenu");
  v3 = GameData_21312e0[0];
  *(_QWORD*)(v2 + 1184) = 0;
  *(_QWORD*)(v2 + 1192) = 0;
  *(_QWORD*)(v2 + 1200) = 0;
  *(_DWORD*)(v2 + 1208) = 0;
  *(_QWORD*)v2 = v3 + 2;
  *(_QWORD*)(v2 + 176) = v3 + 163;
  *(_QWORD*)(v2 + 1056) = v3 + 189;
  GameRoutine_f369a0(v2 + 1184, 2);
  v7 = *(_QWORD*)(v2 + 1184);
  v8 = *(_QWORD*)(v2 + 1192) - v7;
  if (v8 >= 1) {
    memset(v7, 0, v8, v4, v5, v6);
  }
  *(_QWORD*)v2 = game_facility_anonymous_ProcThermaeUnitMenu_vtable;
  *(_QWORD*)(v2 + 176) = GameData_205d508;
  *(_QWORD*)(v2 + 1056) = game_menu_GameMenuImpl_ImplUnknown00_ptr;
  *(_QWORD*)(*GameData_212dcd0 + 56) = *(_QWORD*)(*GameData_212dcd0 + 48);
  GameRoutine_657850(v2, GameData_212c730, "ProcThermaeUnitMenu", 1, a1);
  result = v18;
  v18[0] = GameData_205d688;
  v18[1] = v2;
  v11 = *(__int64****)(game_UnitListSet_instance_ + 24);
  v19 = v18;
  v12 = *v11;
  v13 = v11[1];
  if (*v11 == v13) {
    goto LABEL_21;
  }
  do {
    v14 = *v12;
    v15 = v12[1];
    if (v15 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 1), 1u,
                                memory_order_relaxed);
    }
    if (v14 != nullptr) {
      v16 = (v14[6] & 0x20) == 0;
      if (v15 == nullptr) {
        goto LABEL_13;
      }
    }
    else {
      v16 = false;
      if (v15 == nullptr) {
        goto LABEL_13;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 1),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64*))(*v15 + 16))(v15);
      std___1___shared_weak_count___release_weak(v15);
      if (!v16) {
        goto LABEL_5;
      }
      goto LABEL_14;
    }
  LABEL_13:
    if (v16) {
    LABEL_14:
      v20 = **v12;
      if (v19 == nullptr) {
        GameRoutine_60a310(0, v9);
      }
      (*(void (**)(_QWORD*, __int64*))(*v19 + 48LL))(v19, &v20);
    }
  LABEL_5:
    v12 += 2;
  } while (v12 != v13);
  result = v19;
  if (v19 != v18) {
    if (v19 != nullptr) {
      v17 = 40;
      return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v17))(result,
                                                                         v9);
    }
    return result;
  }

LABEL_21:
  v17 = 32;
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v17))(result,
                                                                     v9);
}

#pragma GCC visibility pop
