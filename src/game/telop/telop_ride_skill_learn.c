#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 game_telop_TelopResult_Destroy_TelopResult(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_telop_TelopRideSkillLearn_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 TelopRideSkillLearn_Unknown56(__int64 a1);
__int64 TelopRideSkillLearn_Destructor(__int64 a1);
__int64 TelopRideSkillLearn_DeletingDestructor(__int64 a1);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__attribute__((swiftcall)) void GameRoutine_9b8fe0(PSEUDO_X8, __int64*,
                                                   const char**);
__attribute__((swiftcall)) void TextBoxEx_188aa00(PSEUDO_X8, __int64, int);
__int64* GameRoutine_1760e40(__int64, unsigned int);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 EmbeddedImage_1889bf0(__int64, __int64);
__int64 GameRoutine_17644e0(__int64*, __int64, __int64, __int64);
__int64 GameRoutine_1842180(__int64, int);
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            unsigned int*) __asm__("LayoutAccessor_1562cf0");
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, const char*);
extern __int64 (*GameData_20c2520[])();
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
void GameRoutine_1768ea0(__int64, __int64*);
__int64 game_telop_TelopRideSkillLearn_BuildContents(__int64 a1);

__int64 TelopRideSkillLearn_Unknown56(__int64 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v4;
  __int128 v6;
  __int64 v7;

  v1 = *(unsigned __int8*)(a1 + 824);
  v2 = *(_QWORD*)(a1 + 832);
  v7 = 0;
  v6 = (__typeof__(v6)){0};
  if ((v1 & 1) != 0) {
    v4 = v2;
  }
  else {
    v4 = v1 >> 1;
  }
  if (v4 != 0) {
    *(_WORD*)((char*)&v6 + 9) = 28239;
    *(_QWORD*)((char*)&v6 + 1) = *(_QWORD*)"Pos_TalkOn";
  }
  else {
    DWORD2(v6) = 1717981035;
    *(_QWORD*)((char*)&v6 + 1) = *(_QWORD*)"Pos_TalkOff";
  }
  LayoutAccessor_1562cf0(a1 + 168, (const char*)&v6 + 1);
  return LayoutAccessor_1562cf0(a1 + 168, "Type_TitleOff");
}

__int64 game_telop_TelopRideSkillLearn_BuildContents(__int64 a1)
{
  __int64* v2;
  __int64* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  const char* v14[2];
  struct {
    __int64 (**v15)();
    __int64 v16;
    char gap32_[16];
    __int64 (***v17)();
  } v15_;

  v2 = GameRoutine_1760e40(a1, 0x13u);
  LayoutAccessor_1562cf0_alt1((__int64)v2, (unsigned int*)"Reliance");
  v3 = LayoutAccessor_155fbe0(v2, "L_RelianceLv");
  v4 = *(_DWORD*)(a1 + 1216);
  v5 = ui_LayoutAccessor_FindPane(v3, "Icon");
  if (v5 != 0) {
    v5 = __dynamic_cast(v5, GameData_212d670[0], GameData_212d678[0], 0);
  }
  GameRoutine_1842180(v5, v4);
  v6 = *(_QWORD*)(a1 + 1168);
  v7 = *(_QWORD*)(a1 + 1208);
  v15_.v15 = GameData_20c2520;
  v15_.v16 = a1;
  v15_.v17 = &v15_.v15;
  GameRoutine_17644e0(v2, v6, v7, (__int64)&v15_.v15);
  if (v15_.v17 == &v15_.v15) {
    v8 = 4;
  }
  else {
    if (v15_.v17 == nullptr) {
      goto LABEL_8;
    }
    v8 = 5;
  }
  ((__int64 (*)(__int64))(*v15_.v17)[v8])((__int64)v15_.v17);
LABEL_8:
  v14[0] = "L_Txt";
  v14[1] = (_BYTE*)((_UNKNOWN*)0x5LL);
  GameRoutine_9b8fe0((void*)(&v15_.v15), v2, v14);
  result = v15_.v16;
  if (v15_.v16 == 0) {
    return result;
  }
  v10 = std___1___shared_weak_count_lock(v15_.v16);
  v11 = (__int64)v15_.v15;
  result = v15_.v16;
  if (v15_.v16 != 0) {
    result = std___1___shared_weak_count___release_weak(v15_.v16);
  }
  if (v10 == 0 || v11 == 0) {
    if (v10 == 0) {
      return result;
    }
    goto LABEL_24;
  }
  GameRoutine_1768ea0(a1, v2);
  TextBoxEx_188aa00((void*)(&v15_.v15), v11, 0);
  result = v15_.v16;
  if (v15_.v16 != 0) {
    v12 = std___1___shared_weak_count_lock(v15_.v16);
    v13 = (__int64)v15_.v15;
    result = v15_.v16;
    if (v15_.v16 != 0) {
      result = std___1___shared_weak_count___release_weak(v15_.v16);
    }
    if (v12 != 0 && v13 != 0) {
      EmbeddedImage_1889bf0(v13, *(_QWORD*)(a1 + 1200));
      result =
          (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v13 + 40LL))(v13, 1);
      goto LABEL_22;
    }
    if (v12 != 0) {
    LABEL_22:
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        result = std___1___shared_weak_count___release_weak(v12);
      }
    }
  }
LABEL_24:
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    return std___1___shared_weak_count___release_weak(v10);
  }
  return result;
}

__int64 TelopRideSkillLearn_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  *(_QWORD*)a1 = game_telop_TelopRideSkillLearn_vtable;
  if ((*(_BYTE*)(a1 + 1176) & 1) != 0) {
    v1 = *(_QWORD*)(a1 + 1192);
    if (v1 != 0) {
      v2 = a1;
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v1);
      a1 = v2;
    }
  }
  return game_telop_TelopResult_Destroy_TelopResult(a1);
}

__int64 TelopRideSkillLearn_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_telop_TelopRideSkillLearn_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 1176) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 1192);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  game_telop_TelopResult_Destroy_TelopResult(a1);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v5, a1);
}

#pragma GCC visibility pop
