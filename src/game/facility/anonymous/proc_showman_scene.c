#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1958ed0(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_facility_ReleaseGroups(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _DWORD* GameData_2130fb8;
extern __int64 (*GameData_2042720[])();
extern __int64 (*game_facility_anonymous_ProcShowmanScene_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_212dd18[3];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2131578[2];
extern __int64* GameData_2132488;
__int64 ProcShowmanScene_Destructor(__int64* a1);
__int64 ProcShowmanScene_DeletingDestructor(__int64* a1);
__attribute__((swiftcall)) void
ForceContinueBGMBinder_1487fc0(PSEUDO_X8, __int64, unsigned __int8);
__attribute__((swiftcall)) void ShowmanSceneDiff_147baa0(PSEUDO_X8, __int64);
__int64* GameRoutine_92b0a0(_QWORD*, unsigned __int8*);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern _UNKNOWN GameData_1ac690d;
extern __int64 GameData_224ada0;
extern __int64 fw_memory_g_heap_manager;
void GameRoutine_1487cc0(__int64, __int64);
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn))
String_60a1d0_alt1(_QWORD) __asm__("String_60a1d0");
void ProcShowmanScene_147a7c0(__int64 a1, unsigned __int8* a2);
__attribute__((swiftcall)) void ProcShowmanScene_147ab40(PSEUDO_X8 x8_,
                                                         __int64 a1);
__n128 ProcShowmanScene_StartFade();

void ProcShowmanScene_147a7c0(__int64 a1, unsigned __int8* a2)
{
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;
  unsigned __int8* v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  unsigned __int64 v18;
  bool v19;
  unsigned __int64 v20;
  unsigned __int8* v21;
  unsigned __int64 v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  char* v30;
  __int64 v31;
  unsigned __int64 v32;
  bool v33;
  unsigned __int64 v34;
  unsigned __int8* v35;
  unsigned __int64 v36;
  __int64* v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  struct {
    __int64 v43;
    unsigned __int64 v44;
    char* v45;
  } v43_;

  ProcShowmanScene_147ab40((void*)(&v43_.v43), a1);
  GameRoutine_1a09ce0(&v43_.v43, &GameData_1ac690d, 1);
  v4 = *a2;
  v5 = (v4 & 1) == 0;
  v6 = v4 >> 1;
  if (v5) {
    v7 = a2 + 1;
  }
  else {
    v7 = *((unsigned __int8**)a2 + 2);
  }
  if (v5) {
    v8 = v6;
  }
  else {
    v8 = *((_QWORD*)a2 + 1);
  }
  GameRoutine_1a09ce0(&v43_.v43, v7, v8);
  v9 = GameRoutine_92b0a0((_QWORD*)(a1 + 56), (unsigned __int8*)&v43_.v43);
  v10 = v9;
  if (v9 != nullptr) {
    v11 = v9[10];
    if (v11 == 0) {
      goto LABEL_74;
    }
    (*(void (**)(__int64))(*(_QWORD*)v11 + 48LL))(v11);
  }
  if ((v43_.v43 & 1) != 0 && v43_.v45 != nullptr) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v12);
  }
  if (v10 != nullptr) {
    return;
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v13 = *(_QWORD*)(a1 + 24);
  }
  else {
    v13 = a1 + 9;
  }
  v14 = strlen(v13);
  if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_75;
  }
  v15 = v14;
  if (v14 >= 0x17) {
    if ((v14 | 7) == 0x17) {
      v17 = 26;
    }
    else {
      v17 = (v14 | 7) + 1;
    }
    v16 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v17,
                                                16, 0);
    v43_.v44 = v15;
    v43_.v45 = v16;
    v43_.v43 = v17 | 1;
    goto LABEL_27;
  }
  LOBYTE(v43_.v43) = 2 * v14;
  v16 = (char*)&v43_.v43 + 1;
  if (v14 != 0) {
  LABEL_27:
    memmove(v16, v13, v15);
  }
  v16[v15] = 0;
  GameRoutine_1a09ce0(&v43_.v43, &GameData_1ac690d, 1);
  v18 = *a2;
  v19 = (v18 & 1) == 0;
  v20 = v18 >> 1;
  if (v19) {
    v21 = a2 + 1;
  }
  else {
    v21 = *((unsigned __int8**)a2 + 2);
  }
  if (v19) {
    v22 = v20;
  }
  else {
    v22 = *((_QWORD*)a2 + 1);
  }
  GameRoutine_1a09ce0(&v43_.v43, v21, v22);
  v23 = GameRoutine_92b0a0((_QWORD*)(a1 + 56), (unsigned __int8*)&v43_.v43);
  v24 = v23;
  if (v23 != nullptr) {
    v25 = v23[10];
    if (v25 == 0) {
      goto LABEL_74;
    }
    (*(void (**)(__int64))(*(_QWORD*)v25 + 48LL))(v25);
  }
  if ((v43_.v43 & 1) != 0 && v43_.v45 != nullptr) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v26);
  }
  if (v24 != nullptr) {
    return;
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v27 = *(_QWORD*)(a1 + 48);
  }
  else {
    v27 = a1 + 33;
  }
  v28 = strlen(v27);
  if (v28 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_75:
    String_60a1d0();
  }
  v29 = v28;
  if (v28 >= 0x17) {
    if ((v28 | 7) == 0x17) {
      v31 = 26;
    }
    else {
      v31 = (v28 | 7) + 1;
    }
    v30 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v31,
                                                16, 0);
    v43_.v44 = v29;
    v43_.v45 = v30;
    v43_.v43 = v31 | 1;
  }
  else {
    LOBYTE(v43_.v43) = 2 * v28;
    v30 = (char*)&v43_.v43 + 1;
    if (v28 == 0) {
      goto LABEL_55;
    }
  }
  memmove(v30, v27, v29);
LABEL_55:
  v30[v29] = 0;
  GameRoutine_1a09ce0(&v43_.v43, &GameData_1ac690d, 1);
  v32 = *a2;
  v33 = (v32 & 1) == 0;
  v34 = v32 >> 1;
  if (v33) {
    v35 = a2 + 1;
  }
  else {
    v35 = *((unsigned __int8**)a2 + 2);
  }
  if (v33) {
    v36 = v34;
  }
  else {
    v36 = *((_QWORD*)a2 + 1);
  }
  GameRoutine_1a09ce0(&v43_.v43, v35, v36);
  v37 = GameRoutine_92b0a0((_QWORD*)(a1 + 56), (unsigned __int8*)&v43_.v43);
  v38 = v37;
  if (v37 != nullptr) {
    v39 = v37[10];
    if (v39 == 0) {
      goto LABEL_74;
    }
    (*(void (**)(__int64))(*(_QWORD*)v39 + 48LL))(v39);
  }
  if ((v43_.v43 & 1) != 0 && v43_.v45 != nullptr) {
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v40);
  }
  if (v38 == nullptr) {
    v41 = GameRoutine_92b0a0((_QWORD*)(a1 + 56), a2);
    if (v41 != nullptr) {
      v42 = v41[10];
      if (v42 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v42 + 48LL))(v42);
        return;
      }
    LABEL_74:
      GameRoutine_60a310();
    }
  }
}

__attribute__((swiftcall)) void ProcShowmanScene_147ab40(PSEUDO_X8 x8_,
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
    String_60a1d0_alt1(result);
  }
  v6 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (result | 7) + 1;
    }
    v7 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v8, 16,
                                             0);
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

__n128 ProcShowmanScene_StartFade()
{
  __int64 v0;
  __n128 result;
  __int64 v2;
  _BYTE v3[16];
  char v4;
  unsigned __int64 v5;
  _BYTE v6[15];

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  ShowmanSceneDiff_147baa0((void*)((__int64*)&v4), GameData_224ada0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  GameRoutine_1487cc0((__int64)&v4, 0x13F000000LL),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v4 & 1) != 0 && *(_QWORD*)&v6[7] != 0) {
    v0 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v0 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v0),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v6[8] = 0;
  v4 = 32;
  *(_QWORD*)v6 = 0xA483E3AC82E35FB4LL;
  v5 = 0xA0E59285E95F4553LL;
  ForceContinueBGMBinder_1487fc0((void*)((__int64)v3), (__int64)&v4, 0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v4 & 1) != 0 && *(_QWORD*)&v6[7] != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
  }
  return result;
}

__int64 ProcShowmanScene_Destructor(__int64* a1)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;

  *(a1 - 19) = (__int64)game_facility_anonymous_ProcShowmanScene_vtable;
  v2 = a1 - 19;
  *a1 = (__int64)GameData_2042720;
  v3 = GameData_2131578[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_2131578[0] + 24LL))(
      *GameData_2131578[0]);
  if (*v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 8LL))(*v3);
  }
  *v3 = 0;
  v4 = GameData_212dd18[0] + 192;
  *(a1 - 19) = GameData_212dd18[0] + 16;
  *a1 = v4;
  GameRoutine_1958ed0(a1, v2);
  *a1 = (__int64)(GameData_2132488 + 2);
  v5 = (__int64*)GameData_212dce8;
  v6 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
    v6 = *v5;
    if (*v5 != 0) {
      v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
    }
    *v5 = 0;
  }
  game_facility_ReleaseGroups(v6);
  *(a1 - 19) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 2) & 0x100) != 0) {
    *((_WORD*)a1 - 8) &= ~0x100u;
  }
  game_ProcInst_Unregister(v2);
  return GameRoutine_658c00(a1 - 8);
}

__int64 ProcShowmanScene_DeletingDestructor(__int64* a1)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v8;

  *(a1 - 19) = (__int64)game_facility_anonymous_ProcShowmanScene_vtable;
  v2 = a1 - 19;
  *a1 = (__int64)GameData_2042720;
  v3 = GameData_2131578[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_2131578[0] + 24LL))(
      *GameData_2131578[0]);
  if (*v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 8LL))(*v3);
  }
  *v3 = 0;
  v4 = GameData_212dd18[0] + 192;
  *(a1 - 19) = GameData_212dd18[0] + 16;
  *a1 = v4;
  GameRoutine_1958ed0(a1, v2);
  *a1 = (__int64)(GameData_2132488 + 2);
  v5 = (__int64*)GameData_212dce8;
  v6 = *(_QWORD*)GameData_212dce8;
  if (*(_QWORD*)GameData_212dce8 != 0 && (*GameData_2130fb8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
    v6 = *v5;
    if (*v5 != 0) {
      v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
    }
    *v5 = 0;
  }
  game_facility_ReleaseGroups(v6);
  *(a1 - 19) = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 - 2) & 0x100) != 0) {
    *((_WORD*)a1 - 8) &= ~0x100u;
  }
  game_ProcInst_Unregister(v2);
  GameRoutine_658c00(a1 - 8);
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v2);
}

#pragma GCC visibility pop
