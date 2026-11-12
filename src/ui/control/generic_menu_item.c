#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Element_18863e0(__int64, _QWORD*, char);
__int64 GenericMenuItem_188d1f0(_QWORD* a1);
__int64* GameRoutine_1889230(__int64, __int64, __int64);
__int64 GameRoutine_5766a0(_QWORD, _QWORD);
__int64 LayoutEx_579160(_QWORD, _QWORD);
__int64 MenuItem_188afa0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_20ffc38[])();
extern __int64 (*GameData_20ffcb8[])();
extern __int64 (*GameData_20ffeb8[])();
extern __int64 (*MenuItem_188d320_ptr[])();
extern __int64 (*ui_control_GenericMenuItem_vtable[])();
extern __int64 GameData_20ffc58;
extern __int64 GameData_20ffc68;
extern __int64 GameData_20ffc78;
extern __int64 GameData_20ffc88;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* GameData_20ffc50;
extern char* GameData_20ffc60;
extern char* GameData_20ffc70;
extern char* GameData_20ffc80;
__attribute__((swiftcall)) void
GenericMenuItem_188ce90(PSEUDO_X8 x8_, __int64 a1, __int64 a2, __int64 a3);
__int64 GameRoutine_5766a0_alt1(__int64,
                                const char*) __asm__("GameRoutine_5766a0");
__int64 LayoutEx_579160_alt1(__int64, __int64) __asm__("LayoutEx_579160");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 ui_control_1889230(__int64, __int64, __int64);
void MenuItem_188afa0_alt1(_QWORD*, __int64, __int64,
                           __int64) __asm__("MenuItem_188afa0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__attribute__((swiftcall)) void

GenericMenuItem_188ce90(PSEUDO_X8 x8_, __int64 a1, __int64 a2, __int64 a3)
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
  __int64 v18;

  v8 = (_QWORD*)LayoutEx_579160_alt1(1088, 8);
  v9 = v8 + 3;
  v10 = v8;
  v8[1] = 0;
  v8[2] = 0;
  *v8 = GameData_20ffcb8;
  MenuItem_188afa0_alt1(v8 + 3, a1, a2, a3);
  v10[3] = ui_control_GenericMenuItem_vtable;
  v10[12] = GameData_20ffc38;
  v11 = fw_memory_g_heap_manager_ptr;
  v12 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  v13 = GameData_20ffc78;
  *(_QWORD*)(v12 + 32) = GameData_20ffc70;
  *(_QWORD*)(v12 + 40) = v13;
  v14 = GameData_20ffc88;
  *(_QWORD*)(v12 + 48) = GameData_20ffc80;
  *(_QWORD*)(v12 + 56) = v14;
  v15 = GameData_20ffc58;
  *(_QWORD*)v12 = GameData_20ffc50;
  *(_QWORD*)(v12 + 8) = v15;
  v16 = GameData_20ffc68;
  *(_QWORD*)(v12 + 16) = GameData_20ffc60;
  *(_QWORD*)(v12 + 24) = v16;
  v18 = GameRoutine_5766a0_alt1(a1, "Default");
  if (v18 != 0) {
    ui_control_1889230((__int64)(v10 + 34), v12, (__int64)&v18);
  }
  v18 = GameRoutine_5766a0_alt1(a1, *(const char**)(v12 + 16));
  if (v18 != 0) {
    ui_control_1889230((__int64)(v10 + 34), v12 + 16, (__int64)&v18);
  }
  v18 = GameRoutine_5766a0_alt1(a1, *(const char**)(v12 + 32));
  if (v18 != 0) {
    ui_control_1889230((__int64)(v10 + 34), v12 + 32, (__int64)&v18);
  }
  v18 = GameRoutine_5766a0_alt1(a1, *(const char**)(v12 + 48));
  if (v18 != 0) {
    ui_control_1889230((__int64)(v10 + 34), v12 + 48, (__int64)&v18);
  }
  v10[39] &= 0xFFFFFFFCFFFFFFFFLL;
  v17 = 128;
  if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
    v17 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v11 + v17, v12);
  *a4 = v9;
  a4[1] = v10;
  v10[3] = MenuItem_188d320_ptr;
  v10[12] = GameData_20ffeb8;
}

__int64 GenericMenuItem_188d1f0(_QWORD* a1)
{
  char v2;
  __int64 v3;
  const char* v4;
  __int64 v5;
  _QWORD v7[2];

  v2 = (*(__int64 (**)(_QWORD*))(*a1 + 144LL))(a1);
  v3 = a1[36];
  if ((v3 & 0x200000000LL) != 0) {
    v4 = "Decide";
    v5 = 6;
  }
  else if ((v3 & 0x100000000LL) != 0) {
    v4 = "Select";
    v5 = 6;
  }
  else {
    if ((v2 & 1) != 0) {
      v4 = "Default";
    }
    else {
      v4 = "Disable";
    }
    v5 = 7;
  }
  v7[0] = v4;
  v7[1] = v5;
  return Element_18863e0((__int64)a1, v7, 0);
}

#pragma GCC visibility pop
