#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1841930(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18aadd0(void);
__int64 GameRoutine_18ab160(void);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64* GameData_212c998[148];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
bool IconLegion_19abe40(__int64 a1, __int64 a2);
bool IconLegion_19ac160(__int64 a1);
__int64 IconLegion_19ac290(__int64 result, __int64* a2);
__int64 GameRoutine_1888c80(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18b26a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_576600(_QWORD, _QWORD);
__int64 LayoutEx_579160(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strlen(_QWORD);
extern __int64 (*GameData_211fa68[])();
extern __int64 (*GameData_211fa90[])();
extern __int64 (*GameData_211fab8[])();
extern __int64 (*GameData_211fc90[])();
extern __int64 (*GameData_211fcb8[])();
extern __int64 (
    *game_gameui_control_HelpableElement_Destroy_HelpableElement_18b3360_ptr
        [])();
extern __int64 (*game_gameui_control_IconLegion_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__attribute__((swiftcall)) void IconLegion_19abb70(PSEUDO_X8 x8_, __int64 a1,
                                                   __int64 a2, __int64 a3);

__attribute__((swiftcall)) void IconLegion_19abb70(PSEUDO_X8 x8_, __int64 a1,
                                                   __int64 a2, __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 result;
  __int64 v20;
  __int64 v21;

  v8 = (_QWORD*)LayoutEx_579160(1144, 8);
  v9 = v8 + 3;
  v10 = v8;
  v8[1] = 0;
  v8[2] = 0;
  *v8 = GameData_211fab8;
  GameRoutine_18b26a0(v8 + 3, a1, a2, a3);
  v10[138] = 0;
  v10[139] = 0;
  v10[140] = 0;
  v10[3] = game_gameui_control_IconLegion_vtable;
  v10[141] = 0;
  *((_BYTE*)v10 + 1136) = 0;
  v10[12] = GameData_211fa68;
  v10[132] = GameData_211fa90;
  v11 = fw_memory_g_heap_manager_ptr;
  v12 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0);
  *v12 = "Img";
  v12[1] = 3;
  v13 = GameRoutine_576600(a1, "Img");
  if (v13 != 0) {
    v20 = v13;
    v21 = strlen(v13);
    if (v21 != 0) {
      GameRoutine_1888c80(v10 + 29, v12, &v20);
    }
  }
  v14 = v10 + 138;
  v15 = ui_LayoutAccessor_FindPane(v10 + 14, "Img");
  if (v15 != 0) {
    v16 = __dynamic_cast(v15, GameData_212d670[0], GameData_212d678[0], 0);
    *v14 = v16;
    if (v16 != 0) {
      goto LABEL_11;
    }
  }
  else {
    *v14 = 0;
  }
  v17 = ui_LayoutAccessor_FindPane(v10 + 14, "Icon");
  if (v17 != 0) {
    v17 = __dynamic_cast(v17, GameData_212d670[0], GameData_212d678[0], 0);
  }
  *v14 = v17;
LABEL_11:
  (*(void (**)(_QWORD*, _QWORD))(v10[3] + 40LL))(v9, 0);
  v18 = 128;
  if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
    v18 = 56;
  }
  result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v18);
  *a4 = v9;
  a4[1] = v10;
  v10[3] =
      game_gameui_control_HelpableElement_Destroy_HelpableElement_18b3360_ptr;
  v10[12] = GameData_211fc90;
  v10[132] = GameData_211fcb8;
  {
    result;
    return;
  }
}

bool IconLegion_19abe40(__int64 a1, __int64 a2)
{
  int v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  const char* v10;
  __int64 v11;

  v2 = *(unsigned __int8*)(*(_QWORD*)(a2 + 400) + 96LL);
  if (v2 != 1) {
    return v2 == 1;
  }
  v5 = ui_LayoutAccessor_FindPane(a1 + 88, "Img");
  if (v5 == 0) {
    v6 = 0;
    v7 = *(unsigned __int8*)(a2 + 1944);
    if (*(_BYTE*)(a2 + 1944) != 0) {
      goto LABEL_4;
    }
  LABEL_7:
    LayoutAccessor_155e830(a1 + 88, 0);
    return v2 == 1;
  }
  v6 = __dynamic_cast(v5, GameData_212d670[0], GameData_212d678[0], 0);
  v7 = *(unsigned __int8*)(a2 + 1944);
  if (*(_BYTE*)(a2 + 1944) == 0) {
    goto LABEL_7;
  }
LABEL_4:
  v8 = GameData_212c998[0];
  v9 = *GameData_212c998[0];
  if (*(_QWORD*)(a2 + 408) != 0) {
    v10 = "Disable";
    v11 = *(_QWORD*)(*(_QWORD*)(v9 + 64) + 8 * v7);
  }
  else {
    v11 = *(_QWORD*)(*(_QWORD*)(v9 + 64) + 8 * v7);
    if (*(_WORD*)(v11 + 18) != 0) {
      v10 = "Enable";
    }
    else {
      v10 = "Disable";
    }
  }
  *(_QWORD*)(a1 + 1104) = v11;
  LayoutAccessor_155e830(a1 + 88, 1);
  LayoutAccessor_1562680(a1 + 88, "BgLegion", 1.0);
  LayoutAccessor_1562cf0(a1 + 88, v10);
  GameRoutine_1841930(
      v6,
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                            8LL * *(unsigned __int8*)(a2 + 1944)) +
                 64LL),
      0);
  return v2 == 1;
}

bool IconLegion_19ac160(__int64 a1)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 144LL))(a1) & 1) == 0 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1) & 1) == 0) {
    return false;
  }
  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL);
  while (1) {
    v2 = *(_QWORD*)(v2 + 24);
    if (v2 == 0) {
      break;
    }
    if ((*(_BYTE*)(v2 + 88) & 1) == 0) {
      return false;
    }
  }
  v4 = *(_QWORD*)(a1 + 320);
  if (v4 == 0) {
    return *(_OWORD*)(a1 + 1096) != 0;
  }
  v5 = *(_QWORD*)(a1 + 312);
  v6 = *(_QWORD*)(a1 + 320);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v7 = std___1___shared_weak_count_lock(v6);
  std___1___shared_weak_count___release_weak(v4);
  if (v7 == 0) {
    return *(_OWORD*)(a1 + 1096) != 0;
  }
  if (v5 != 0) {
    v8 = ((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 144LL))(v5) & 1) != 0
             ? (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5)
             : 0;
  }
  else {
    v8 = 1;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  return (v8 & 1) != 0 && *(_OWORD*)(a1 + 1096) != 0;
}

__int64 IconLegion_19ac290(__int64 result, __int64* a2)
{
  __int64 v2;
  __int64* v4;
  __int64 v5;

  if (*(_OWORD*)(result + 1096) != 0 && a2[1] != 0) {
    v2 = result;
    result = std___1___shared_weak_count_lock(a2[1]);
    if (result != 0) {
      v4 = a2;
      v5 = result;
      result = *v4;
      if (*v4 != 0) {
        if (*(_QWORD*)(v2 + 1096) != 0) {
          result = GameRoutine_18ab160();
        }
        else {
          result = GameRoutine_18aadd0();
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        return std___1___shared_weak_count___release_weak(v5);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
