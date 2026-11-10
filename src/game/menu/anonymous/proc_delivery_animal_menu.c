#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_171e560(_QWORD);
__int64 GameRoutine_171e690(_QWORD, _QWORD);
__int64 GameRoutine_1861460(void);
__int64 GameRoutine_1862ec0(_QWORD, _QWORD);
__int64 GameRoutine_19efcc0(_QWORD, _QWORD);
__int64 GameRoutine_1a06b90(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 GameRoutine_9d0620(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_20aff00[])();
extern __int64 (*GameData_20aff80[])();
extern __int64 (*game_menu_anonymous_DeliveryMenuItem_vtable[])();
extern __int64 GameData_20afed8;
extern __int64 GameData_212cf88[4];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c8a0;
extern __int64* GameData_212e008[9];
__int64 ProcDeliveryAnimalMenu_Unknown84(__int64 a1);
__int64 ProcDeliveryAnimalMenu_Unknown100(__int64 a1);
__int64 ProcDeliveryAnimalMenu_Unknown149(__int64 a1, __int64 a2, __int64 a3,
                                          __int64 a4, int a5, int a6);
__int64 ProcDeliveryAnimalMenu_Unknown150(__int64 a1, _DWORD* a2, _DWORD* a3);
__int64 ProcDeliveryAnimalMenu_Unknown151(__int64 result);
_QWORD* ProcDeliveryAnimalMenu_171e4f0(_QWORD* result);
__int64 GameRoutine_187dc60(_QWORD, _QWORD, _QWORD);
extern __int64 GameData_212c610;
extern __int64 GameData_2131c18[55];
__int64
game_menu_anonymous_ProcDeliveryAnimalMenu_ACall_closure0_Invoke(__int64 a1);
__int64
game_menu_anonymous_ProcDeliveryAnimalMenu_BCall_closure_Invoke(__int64 a1);

__int64 ProcDeliveryAnimalMenu_Unknown84(__int64 a1)
{
  GameRoutine_1861460();
  return GameRoutine_1562cf0(a1 + 848, "Menu_Quest");
}

__int64 ProcDeliveryAnimalMenu_Unknown100(__int64 a1)
{
  __int64 result;
  unsigned int v3;
  __int64 (**v4)();
  _BYTE* v5;
  __int64 v6;
  int v7;
  void (**v8)(_BYTE*);
  void (**v9)(_BYTE*);
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD v22[4];
  _QWORD* v23;
  _QWORD v24[4];
  _QWORD* v25;
  __int64 (**v26)();
  __int64 v27;
  __int64 (***v28)();
  const char* v29;

  result = *(_QWORD*)(a1 + 336);
  if (result == 0) {
    return result;
  }
  result = __dynamic_cast(result, GameData_212e008[0], &GameData_20afed8, 0);
  if (result == 0) {
    return result;
  }
  v3 = *(_DWORD*)(result + 40);
  v4 = *(__int64 (***)())(result + 88);
  v5 = (_BYTE*)result;
  v6 = *(_QWORD*)a1;
  if (*(_BYTE*)(result + 108) != 1) {
    (*(void (**)(__int64, _QWORD))(v6 + 552))(a1, 0);
    v5[108] = 1;
    if (v5[79] == 1) {
      v9 = (void (**)(_BYTE*))(*(_QWORD*)v5 + 520LL);
    }
    else {
      v9 = (void (**)(_BYTE*))(*(_QWORD*)v5 + 504LL);
      if (*(_BYTE**)(*((_QWORD*)v5 + 1) + 336LL) == v5) {
        v9 = (void (**)(_BYTE*))(*(_QWORD*)v5 + 512LL);
      }
    }
    (*v9)(v5);
    v26 = v4;
    v27 = v3 | 0x100000000LL;
    GameRoutine_171e690(a1 + 1088, &v26);
    GameRoutine_171e560(a1);
    if (*(unsigned __int8*)(**(_QWORD**)(a1 + 1080) + 368LL) >
        (unsigned __int64)((__int64)(*(_QWORD*)(a1 + 1096) -
                                     *(_QWORD*)(a1 + 1088)) >>
                           4)) {
      return 0;
    }
    v28 = &v26;
    v24[2] = v5;
    v22[2] = v5;
    v29 = "MID_DeliveryMenu_Confirm";
    v26 = GameData_20aff00;
    v27 = a1;
    v23 = v22;
    v24[0] = GameData_20aff80;
    v24[1] = a1;
    v25 = v24;
    v22[0] = GameData_20aff80;
    v22[1] = a1;
    v15 = GameRoutine_9d0620(a1, &v29, &v26, v24, v22);
    if (v23 == v22) {
      v16 = 32;
    }
    else {
      if (v23 == nullptr) {
        goto LABEL_30;
      }
      v16 = 40;
    }
    (*(void (**)(void))(*v23 + v16))();
  LABEL_30:
    if (v25 == v24) {
      v17 = 32;
    }
    else {
      if (v25 == nullptr) {
        goto LABEL_35;
      }
      v17 = 40;
    }
    (*(void (**)(void))(*v25 + v17))();
  LABEL_35:
    if (v28 == &v26) {
      v18 = 4;
    }
    else {
      if (v28 == nullptr) {
      LABEL_40:
        v19 = *(_QWORD*)(a1 + 1088);
        v20 = *(_QWORD*)(a1 + 1096);
        if (v19 != v20) {
          v21 = GameData_212cf88[0];
          do {
            GameRoutine_1a06b90(
                v15 + 1496,
                *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v21 + 8LL) + 120LL) +
                    ((__int64)*(int*)(v19 + 8) << 6),
                1);
            v19 += 16;
          } while (v19 != v20);
        }
        return 12;
      }
      v18 = 5;
    }
    (*v28)[v18]();
    goto LABEL_40;
  }
  (*(void (**)(__int64))(v6 + 576))(a1);
  v7 = (unsigned __int8)v5[79];
  v5[108] = 0;
  if (v7 == 1) {
    v8 = (void (**)(_BYTE*))(*(_QWORD*)v5 + 520LL);
  }
  else {
    v8 = (void (**)(_BYTE*))(*(_QWORD*)v5 + 504LL);
    if (*(_BYTE**)(*((_QWORD*)v5 + 1) + 336LL) == v5) {
      v8 = (void (**)(_BYTE*))(*(_QWORD*)v5 + 512LL);
    }
  }
  (*v8)(v5);
  v10 = *(_QWORD*)(a1 + 1088);
  v11 = *(_QWORD*)(a1 + 1096);
  if (v10 != v11) {
    v12 = *(_QWORD*)(a1 + 1088);
    while (v3 != *(_DWORD*)(v12 + 8) || *(_QWORD*)v12 != (_QWORD)v4) {
      v12 += 16;
      v10 += 16;
      if (v12 == v11) {
        v10 = *(_QWORD*)(a1 + 1096);
        break;
      }
    }
  }
  v14 = v11 - (v10 + 16);
  if (v11 != v10 + 16) {
    memmove(v10, v10 + 16, v11 - (v10 + 16));
  }
  *(_QWORD*)(a1 + 1096) = v10 + v14;
  return 0;
}

__int64 ProcDeliveryAnimalMenu_Unknown149(__int64 a1, __int64 a2, __int64 a3,
                                          __int64 a4, int a5, int a6)
{
  __int64 result;

  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
  *(_DWORD*)(result + 40) = a5;
  *(_QWORD*)(result + 88) = a4;
  *(_QWORD*)(result + 96) = a3;
  *(_DWORD*)(result + 104) = a6;
  *(_WORD*)(result + 16) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_BYTE*)(result + 108) = 0;
  *(_WORD*)(result + 80) = 257;
  *(_BYTE*)(result + 82) = 1;
  *(_QWORD*)result = game_menu_anonymous_DeliveryMenuItem_vtable;
  *(_QWORD*)(result + 8) = 0;
  return result;
}

__int64 ProcDeliveryAnimalMenu_Unknown150(__int64 a1, _DWORD* a2, _DWORD* a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  char v13;
  _BYTE* v14;
  __int64 v15;
  _BYTE* v16;
  __int64 v17;
  _QWORD v19[2];
  int v20;
  int v21;
  int v22;
  char v23;
  _QWORD v24[2];
  int v25;
  int v26;
  int v27;
  char v28;
  __int64 v29;
  int v30;
  _QWORD* v31;
  _BYTE* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _BYTE* v36;
  __int64 v37;
  int v38;
  _QWORD* v39;
  _BYTE* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  _BYTE* v44;

  v6 = (*(__int64 (**)(_DWORD*))(*(_QWORD*)a2 + 560LL))(a2);
  WORD1(v37) = 0;
  HIDWORD(v37) = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = nullptr;
  v39 = &v40;
  v40 = nullptr;
  GameRoutine_930b90(&v37, v6);
  v7 = (*(__int64 (**)(_DWORD*))(*(_QWORD*)a3 + 560LL))(a3);
  WORD1(v29) = 0;
  HIDWORD(v29) = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = nullptr;
  v31 = &v32;
  v32 = nullptr;
  GameRoutine_930b90(&v29, v7);
  if (BYTE3(v37) != 0) {
    v8 = game_UnitPool_Get((char*)&v37 + 3);
    if (BYTE3(v29) != 0) {
    LABEL_3:
      v9 = game_UnitPool_Get((char*)&v29 + 3);
      goto LABEL_6;
    }
  }
  else {
    v8 = 0;
    if (BYTE3(v29) != 0) {
      goto LABEL_3;
    }
  }
  v9 = 0;

LABEL_6:
  v10 = a2[26];
  v11 = a3[26];
  v12 = GameRoutine_1862ec0(a1, &v37);
  v20 = GameRoutine_1862ec0(a1, &v29);
  v21 = v11;
  v24[0] = &v37;
  v24[1] = v8;
  v25 = v12;
  v26 = v10;
  v27 = 0;
  v28 = 0;
  v19[0] = &v29;
  v19[1] = v9;
  v22 = 0;
  v23 = 0;
  v13 = GameRoutine_19efcc0(v24, v19);
  v29 = 0;
  v30 = 0;
  if ((v34 & 1) != 0) {
    *v36 = 0;
    v35 = 0;
  }
  else {
    LOWORD(v34) = 0;
  }
  GameRoutine_6e3b50(&v31, v32);
  v32 = nullptr;
  v33 = 0;
  v31 = &v32;
  if ((v34 & 1) != 0) {
    v14 = v36;
    if (v36 != nullptr) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v36);
      v14 = v32;
    }
  }
  else {
    v14 = nullptr;
  }
  GameRoutine_6e3b50(&v31, v14);
  v37 = 0;
  v38 = 0;
  if ((v42 & 1) != 0) {
    *v44 = 0;
    v43 = 0;
  }
  else {
    LOWORD(v42) = 0;
  }
  GameRoutine_6e3b50(&v39, v40);
  v40 = nullptr;
  v41 = 0;
  v39 = &v40;
  if ((v42 & 1) != 0) {
    v16 = v44;
    if (v44 != nullptr) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v44);
      v16 = v40;
    }
  }
  else {
    v16 = nullptr;
  }
  GameRoutine_6e3b50(&v39, v16);
  return v13 & 1;
}

__int64 ProcDeliveryAnimalMenu_Unknown151(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;

  v1 = result;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = *(_QWORD*)(**(_QWORD**)(result + 1080) + 360LL);
  v6 = GameData_212cf88[0];
  v7 = GameData_212c8a0;
  do {
    v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v6 + 8LL) + 120LL);
    if (*(_BYTE*)(v8 + v2) != 0) {
      v9 =
          *(_QWORD*)(*(_QWORD*)(*v7 + 64) + 8LL * *(unsigned __int8*)(v8 + v2));
      if (*(_BYTE*)(v9 + 109) != 0 && v9 == v5) {
        if (*(_BYTE*)(v8 + v2 + 3) != 0) {
          v11 = game_UnitPool_Get(v8 + v2 + 3);
        }
        else {
          v11 = 0;
        }
        result = (*(__int64 (**)(__int64, __int64, _QWORD, __int64, _QWORD,
                                 _QWORD))(*(_QWORD*)v1 + 1192LL))(
            v1, v8 + v2, 0, v11, (unsigned int)v3, v4);
        if (result != 0) {
          result = GameRoutine_16e0c00(v1, result);
          ++v4;
        }
      }
    }
    ++v3;
    v2 += 64;
  } while (v3 != 200);
  return result;
}

_QWORD* ProcDeliveryAnimalMenu_171e4f0(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;

  if (result != nullptr) {
    v1 = result;
    ProcDeliveryAnimalMenu_171e4f0(*result);
    ProcDeliveryAnimalMenu_171e4f0(v1[1]);
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, v1);
  }
  return result;
}

__int64

game_menu_anonymous_ProcDeliveryAnimalMenu_ACall_closure0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = *(_QWORD*)(a1 + 8);
  (*(void (**)(__int64))(*(_QWORD*)(v1 + 1056) + 104LL))(v1 + 1056);
  v2 = v1;
  v3 = v1;
  v4 = GameData_212c610;
  v5 = GameData_2131c18[0];
  do {
    v6 = __dynamic_cast(v3, v4, v5, 0);
    v3 = *(_QWORD*)(v3 + 32);
    if (v6 != 0) {
      v2 = v6;
    }
  } while (v3 != 0);
  v7 = *(_QWORD*)(v2 + 152);
  if (v7 == 0) {
    v7 = v2;
  }
  GameRoutine_187dc60(*(_QWORD*)(v7 + 32), *(_QWORD*)(v1 + 1080), v1 + 1088);
  return 4;
}

__int64

game_menu_anonymous_ProcDeliveryAnimalMenu_BCall_closure_Invoke(__int64 a1)
{
  (*(void (**)(__int64))(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 1056LL) + 104LL))(
      *(_QWORD*)(a1 + 8) + 1056LL);
  return 5;
}

#pragma GCC visibility pop
