#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Format_7a7fc0(_QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_7a7e90(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Manager_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Registration_a4da40(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*ui_ILayoutControl_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char GameData_1a9f09e;
__int64 TextBoxEx_188ab20_alt1(__int64 result,
                               __int64 a2) __asm__("TextBoxEx_188ab20");
__int64 TextBoxEx_188ac20(__int64 result, __int64 a2, unsigned __int16* a3);
__int64 TextBoxEx_188aec0_alt1(__int64 result) __asm__("TextBoxEx_188aec0");
__int64 GameRoutine_188a3a0(_QWORD);
__int64 GameRoutine_188a480(_QWORD, _QWORD);
__int64 GameRoutine_576600(_QWORD, _QWORD);
__int64 LayoutEx_579160(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 nn_ui2d_Pane_GetRuntimeTypeInfoStatic(void);
__int64 strlen(_QWORD);
__int64 ui_ILayoutControl_UpdatePath(_QWORD);
extern _UNKNOWN* GameData_212dfd0;
extern _UNKNOWN* GameData_2130ea8;
extern _UNKNOWN GameData_21f8028;
extern _UNKNOWN GameData_22416d8;
extern __int64 (*GameData_20ff568[])();
extern __int64 (*TextBoxEx_188aec0_ptr[])();
extern __int64 (*ui_control_TextBoxEx_vtable[])();
extern __int64* GameData_212dfc8;
extern __int64 GameData_21f8020;
extern __int64 GameData_22416d0;
extern char* GameData_20ff340[5];
__attribute__((swiftcall)) void TextBoxEx_188a640(PSEUDO_X8 x8_, __int64 a1,
                                                  __int64 a2, __int64 a3);
__attribute__((swiftcall)) void TextBoxEx_188a7e0(PSEUDO_X8 x8_, __int64 a1,
                                                  __int64 a2);
__attribute__((swiftcall)) void TextBoxEx_188aa00(PSEUDO_X8 x8_,
                                                  __int64* result, int a2);
__int64 Registration_a4da40_alt1(__int64,
                                 __int64) __asm__("Registration_a4da40");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void TextBoxEx_188ab20(__int64 a1, _BYTE* a2);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void TextBoxEx_188aec0(__int64 a1);

__attribute__((swiftcall)) void TextBoxEx_188a640(PSEUDO_X8 x8_, __int64 a1,
                                                  __int64 a2, __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 result;

  v8 = (_QWORD*)LayoutEx_579160(112, 8);
  v8[1] = 0;
  v8[2] = 0;
  v9 = v8;
  *v8 = GameData_20ff568;
  v8[4] = a2;
  v8[5] = 0;
  v8[6] = 0;
  v8[7] = 0;
  v8[8] = 0;
  v8[9] = 0;
  v8[10] = 0;
  v8[11] = 0;
  v8[3] = &ui_ILayoutControl_vtable;
  v10 = v8 + 3;
  v11 = *(_QWORD*)(a2 + 24) + 176LL;
  v12 = strlen(v11);
  v9[5] = v11;
  v9[6] = v12;
  v13 = *(_QWORD*)(a2 + 48);
  v14 = strlen(v13);
  v9[7] = v13;
  v9[8] = v14;
  ui_ILayoutControl_UpdatePath(v10);
  v9[12] = a3;
  v9[13] = 0;
  *v10 = ui_control_TextBoxEx_vtable;
  v15 = GameRoutine_576600(a1, "Text");
  v17 = 0;
  if (a2 != 0) {
    v16 = v15;
    if (v15 != 0) {
      v17 = (*(__int64 (**)(_QWORD, __int64, __int64))(
          **(_QWORD**)(a2 + 24) + 120LL))(*(_QWORD*)(a2 + 24), v15, 1);
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22416d8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_22416d8) != 0) {
    GameData_22416d0 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
    __cxa_guard_release(&GameData_22416d8);
  }
  if (v17 == 0) {
    goto LABEL_13;
  }
  v18 = (__int64*)(*(__int64 (**)(__int64, __int64))(*(_QWORD*)v17 + 16LL))(
      v17, v16);
  if (v18 != &GameData_22416d0) {
    do {
      v18 = (__int64*)*v18;
    } while (v18 != &GameData_22416d0 && v18 != nullptr);
    if (v18 == nullptr) {
    LABEL_13:
      v17 = 0;
    }
  }
  v9[13] = v17;
  result = GameRoutine_188a3a0(v10);
  *a4 = v10;
  a4[1] = v9;
  v9[3] = TextBoxEx_188aec0_ptr;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void TextBoxEx_188a7e0(PSEUDO_X8 x8_, __int64 a1,
                                                  __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 result;

  v6 = (_QWORD*)LayoutEx_579160(112, 8);
  v6[1] = 0;
  v6[2] = 0;
  v7 = v6;
  *v6 = GameData_20ff568;
  v6[4] = a2;
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  v6[8] = 0;
  v6[9] = 0;
  v6[10] = 0;
  v6[11] = 0;
  v6[3] = &ui_ILayoutControl_vtable;
  v8 = v6 + 3;
  v9 = *(_QWORD*)(a2 + 24) + 176LL;
  v10 = strlen(v9);
  v7[5] = v9;
  v7[6] = v10;
  v11 = *(_QWORD*)(a2 + 48);
  v12 = strlen(v11);
  v7[7] = v11;
  v7[8] = v12;
  ui_ILayoutControl_UpdatePath(v8);
  *v8 = ui_control_TextBoxEx_vtable;
  v7[12] = *(_QWORD*)(a1 + 72);
  v7[13] = 0;
  v13 = *(_QWORD*)(v7[4] + 24LL);
  if (v13 != 0) {
    v14 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)v13 + 120LL))(
        v13, *(_QWORD*)(a1 + 80) + 176LL, 1);
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2130ea8,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_22416d8) != 0) {
      GameData_22416d0 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
      __cxa_guard_release(&GameData_22416d8);
    }
    if (v14 == 0) {
      goto LABEL_11;
    }
    v15 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    if (v15 != &GameData_22416d0) {
      do {
        v15 = (__int64*)*v15;
      } while (v15 != &GameData_22416d0 && v15 != nullptr);
      if (v15 == nullptr) {
      LABEL_11:
        v14 = 0;
      }
    }
    v7[13] = v14;
  }
  result = GameRoutine_188a3a0(v8);
  *a3 = v8;
  a3[1] = v7;
  v7[3] = TextBoxEx_188aec0_ptr;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void TextBoxEx_188aa00(PSEUDO_X8 x8_,
                                                  __int64* result, int a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64* v4;
  _QWORD* v5;
  __int64* v6;

  if (result[9] != 0) {
    v3 = result[1];
    v4 = result;
    if (v3 != 0) {
      result = *(__int64**)(v3 + 24);
      if (result != nullptr) {
        v5 = a3;
        result = (__int64*)(*(__int64 (**)(__int64*, char*, __int64))(
            *result + 120))(result, GameData_20ff340[a2], 1);
        v6 = result;
        if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                                  memory_order_acquire) &
             1) == 0) {
          result = (__int64*)__cxa_guard_acquire(&GameData_21f8028);
          if ((_DWORD)result != 0) {
            GameData_21f8020 = nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
            result = (__int64*)__cxa_guard_release(&GameData_21f8028);
          }
        }
        a3 = v5;
        if (v6 != nullptr) {
          result = (__int64*)(*(__int64 (**)(__int64*))(*v6 + 16))(v6);
          a3 = v5;
          if (result == GameData_212dfc8) {
            (__int64*)GameRoutine_188a480(v4[9], v6);
            return;
          }
          do {
            result = (__int64*)*result;
          } while (result != GameData_212dfc8 && result != nullptr);
          if (result != nullptr) {
            (__int64*)GameRoutine_188a480(v4[9], v6);
            return;
          }
        }
      }
    }
  }
  *a3 = 0;
  a3[1] = 0;
  {
    result;
    return;
  }
}

void TextBoxEx_188ab20(__int64 a1, _BYTE* a2)
{
  __int64* v4;
  char v5;
  __int64 v6;
  char* v7;

  if (a2 != nullptr && *(_QWORD*)(a1 + 80) != 0) {
    v4 = msg_MessageManager_instance__ptr[0];
    v5 = Registration_a4da40_alt1(*msg_MessageManager_instance__ptr[0],
                                  (__int64)a2);
    v6 = *(_QWORD*)(a1 + 80);
    if ((v5 & 1) != 0) {
      v7 = GameRoutine_a4dbe0_alt1(*v4, a2, 0);
    }
    else {
      v7 = &GameData_1a9f09e;
    }
    GameRoutine_156c5d0_alt1(v6, (__int64)v7, 0);
  }
}

__int64 TextBoxEx_188ac20(__int64 result, __int64 a2, unsigned __int16* a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64* v18;
  char v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  int v24;
  __int64* v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  int v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  int v44;

  v3 = *a3;
  v5 = result;
  v26 = 0;
  v27 = 0;
  v25 = nullptr;
  if (v3 != 0) {
    v6 = 8 * v3;
    v8 = 0;
    do {
      v9 = *(_QWORD*)(*((_QWORD*)a3 + 1) + v8);
      v24 = 0;
      v23 = v9;
      result = GameRoutine_7a7e90(&v25, &v23);
      v8 += 8;
    } while (v6 != v8);
    v10 = v25;
    if ((__int64*)v26 != v25) {
      v11 = 1;
      v12 = 0;
      v13 = msg_MessageManager_instance__ptr[0];
      do {
        v14 = Format_7a7fc0(&v10[v11 - 1]);
        v15 = *v13;
        if (v14 != 0) {
          v16 = v12;
          if (v12 > 7) {
            v16 = 0;
          }
          result = GameRoutine_60a020(v15 + 24LL * v16 + 14704, v14);
        }
        else {
          result = Manager_a51e10(v15 + 14704, (unsigned int)v12,
                                  LODWORD(v25[v11]), 0);
        }
        v10 = v25;
        ++v12;
        v11 += 2;
      } while (v12 < (__int64)(v26 - (_QWORD)v25) >> 4);
    }
    if (v10 != nullptr) {
      v26 = (unsigned __int64)v10;
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17);
    }
  }
  if (a2 != 0 && *(_QWORD*)(v5 + 80) != 0) {
    v18 = msg_MessageManager_instance__ptr[0];
    v19 = Registration_a4da40(*msg_MessageManager_instance__ptr[0]);
    v20 = *(_QWORD*)(v5 + 80);
    if ((v19 & 1) != 0) {
      v21 = *v18;
      v32 = -1;
      v33 = -1;
      v34 = -1;
      v35 = -1;
      v36 = -1;
      v37 = -1;
      v38 = -1;
      v39 = -1;
      v40 = -1;
      v41 = -1;
      v42 = -1;
      v25 = GameData_212e348 + 2;
      v26 = 0xFFFF0001FFFF0000LL;
      v27 = 0xFFFF0004FFFF0002LL;
      v28 = 0xFFFF0006FFFF0005LL;
      v29 = 0xFFFF0008FFFF0007LL;
      v31 = -1;
      v43 = 9;
      v44 = 0;
      v30 = 3;
      v22 = (char*)GameRoutine_a4dbe0(v21, a2, 0, &v25);
    }
    else {
      v22 = &GameData_1a9f09e;
    }
    return GameRoutine_156c5d0(v20, v22, 0);
  }
  return result;
}

void TextBoxEx_188aec0(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  *(_QWORD*)a1 = &ui_ILayoutControl_vtable;
  if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
    v1 = *(_QWORD*)(a1 + 64);
    if (v1 != 0) {
      v2 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v2 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, v1);
    }
  }
}

#pragma GCC visibility pop
