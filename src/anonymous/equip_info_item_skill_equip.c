#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_18a7ae0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern char GameData_1a9f09e;
const char* EquipInfoItem_SkillEquip_16d3f00(__int64* a1);
__int64 EquipInfoItem_SkillEquip_16d3fa0(__int64 a1, __int64* a2);
__int64 EquipInfoItem_Unknown17(_QWORD*);
__int64 Pane_58f8a0(__int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_159d390(__int64, _DWORD*, char);
__int64 game_menu_16d2250(__int64);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindTextBox(__int64*, const char*);
extern _UNKNOWN* GameData_212da30;
extern __int64* GameData_212d890[2];
extern __int64* GameData_2131a20[3];
extern __int64* GameData_2131a58[13];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
void Element_1886580(__int64, char);
void MenuItemSkill_1899480(__int64, unsigned int, char, char);
__int64* EquipInfoItem_SkillEquip_16d3b20(__int64 a1);
__int64 EquipInfoItem_SkillEquip_16d3ce0(__int64 a1);

__int64* EquipInfoItem_SkillEquip_16d3b20(__int64 a1)
{
  __int64* result;
  __int64* v3;
  __int64* v4;
  __int64** v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  int v10;
  __int64 v11;
  struct {
    __int64* v12;
    __int64 v13;
  } v12_;
  struct {
    __int64* v14;
    __int64* v15;
    __int64 v16;
  } v14_;
  __int64 var4;

  EquipInfoItem_Unknown17((_QWORD*)a1);
  result = *(__int64**)(a1 + 112);
  v14_.v14 = nullptr;
  v14_.v15 = nullptr;
  if (result != nullptr &&
      (result =
           (__int64*)std___1___shared_weak_count_lock_alt1((__int64)result),
       v14_.v15 = result, result != nullptr) &&
      (v3 = result, result = *(__int64**)(a1 + 104), v14_.v14 = result,
       result != nullptr) &&
      (v4 = v3, (result = (__int64*)__dynamic_cast(result, GameData_2131a58[0],
                                                   GameData_2131a20[0], 0)) !=
                    nullptr)) {
    v5 = &v14_.v14;
    v12_.v12 = result;
    v12_.v13 = (__int64)v4;
  }
  else {
    v5 = &v12_.v12;
  }
  *v5 = nullptr;
  v5[1] = nullptr;
  v6 = (__int64)v14_.v15;
  if (v14_.v15 != nullptr &&
      atomic_fetch_add((atomic_ullong* volatile)(v14_.v15 + 1),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    result = (__int64*)std___1___shared_weak_count___release_weak_alt1(v6);
  }
  v7 = (__int64)v12_.v12;
  if (v12_.v12 != nullptr) {
    v8 = (__int64)v12_.v12;
    v12_.v12[36] &= ~0x400000000uLL;
    MenuItemSkill_1899480(v8, 1u, *(_BYTE*)(a1 + 136), 0);
    v9 = *(_BYTE*)(v7 + 1080);
    *(_BYTE*)(v7 + 1072) = *(_BYTE*)(a1 + 128);
    v10 = *(_DWORD*)(a1 + 132);
    if ((v9 & 1) == 0) {
      *(_BYTE*)(v7 + 1080) = 1;
    }
    *(_DWORD*)(v7 + 1076) = v10;
    *(_QWORD*)(v7 + 1096) = *(_QWORD*)(a1 + 96);
    (*(void (**)(__int64, __int64))(*(_QWORD*)v7 + 40LL))(v7, 1);
    Element_1886580(v7, 1);
    (*(void (**)(__int64))(*(_QWORD*)v7 + 384LL))(v7);
    v14_.v16 = 0;
    v14_.v14 = GameData_212d890[0] + 2;
    LODWORD(v14_.v15) = 20;
    result = X8CALL_X0(
        _QWORD*,
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64**))(
            *(_QWORD*)(v7 + 72) + 16LL))((void*)&var4, v7 + 72, &v14_.v14));
  }
  v11 = v12_.v13;
  if (v12_.v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12_.v13 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    return (__int64*)std___1___shared_weak_count___release_weak_alt1(v11);
  }
  return result;
}

__int64 EquipInfoItem_SkillEquip_16d3ce0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64** v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  int v16;
  char v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 result;
  struct {
    __int64 v22;
    __int64 v23;
  } v22_;
  struct {
    __int64* v24;
    __int64 v25;
    __int64 v26;
  } v24_;
  __int64 var4;

  game_menu_16d2250(a1);
  v2 = *(_QWORD*)(a1 + 112);
  v24_.v24 = nullptr;
  v24_.v25 = 0;
  if (v2 != 0 &&
      (v3 = std___1___shared_weak_count_lock_alt1(v2), v24_.v25 = v3,
       v3 != 0) &&
      (v4 = v3, v5 = *(__int64**)(a1 + 104), v24_.v24 = v5, v5 != nullptr) &&
      (v6 = v4, (v7 = __dynamic_cast(v5, GameData_2131a58[0],
                                     GameData_2131a20[0], 0)) != 0)) {
    v8 = &v24_.v24;
    v22_.v22 = v7;
    v22_.v23 = v6;
  }
  else {
    v8 = (__int64**)&v22_.v22;
  }
  *v8 = nullptr;
  v8[1] = nullptr;
  v9 = v24_.v25;
  if (v24_.v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24_.v25 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak_alt1(v9);
  }
  v10 = v22_.v22;
  if (v22_.v22 != 0) {
    (*(void (**)(__int64, bool))(*(_QWORD*)v22_.v22 + 152LL))(
        v22_.v22, (*(_BYTE*)(a1 + 136) & 1) == 0);
    v24_.v26 = 0;
    v24_.v24 = GameData_212d890[0] + 2;
    LODWORD(v24_.v25) = 20;
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64**))(
        *(_QWORD*)(v10 + 72) + 16LL))((void*)(&var4), v10 + 72, &v24_.v24);
  }
  v11 = v22_.v23;
  if (v22_.v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22_.v23 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak_alt1(v11);
    v12 = *(_QWORD*)(a1 + 56);
    if (v12 == 0) {
      goto LABEL_22;
    }
  }
  else {
    v12 = *(_QWORD*)(a1 + 56);
    if (v12 == 0) {
      goto LABEL_22;
    }
  }
  v13 = std___1___shared_weak_count_lock_alt1(v12);
  if (v13 != 0) {
    v14 = *(__int64**)(a1 + 48);
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v14 != nullptr) {
        goto LABEL_23;
      }
    }
    else {
      v15 = v13;
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak_alt1(v15);
      if (v14 != nullptr) {
        goto LABEL_23;
      }
    }
  }
LABEL_22:
  v14 = ui_LayoutAccessor_empty__ptr[0];
LABEL_23:
  v16 = *(unsigned __int8*)(a1 + 136);
  v17 = game_159d390(*(_QWORD*)(a1 + 96), (_DWORD*)(a1 + 132),
                     *(_BYTE*)(a1 + 128));
  v18 = 60;
  if (v16 != 0) {
    v18 = 64;
  }
  v19 = 36;
  if (v16 != 0) {
    v19 = 72;
  }
  if ((v17 & 1) == 0) {
    v18 = v19;
  }
  v20 = *(_DWORD*)((char*)GameData_212da30 + v18);
  result = ui_LayoutAccessor_FindTextBox(v14, "T_Cost");
  if (result != 0) {
    result = Pane_58f8a0(result);
    if (result != 0) {
      *(_DWORD*)(result + 12) = v20;
    }
  }
  return result;
}

bool EquipInfoItem_SkillEquip_16d3ef0(__int64 a1)
{
  return (*(_WORD*)(a1 + 132) & 0xFFF) == 0;
}

const char* EquipInfoItem_SkillEquip_16d3f00(__int64* a1)
{
  char v2;
  __int64 v3;
  char v4;
  const char* v5;
  char* v6;

  v2 = (*(__int64 (**)(__int64*))(*a1 + 488))(a1);
  v3 = *a1;
  if ((v2 & 1) != 0) {
    v4 = (*(__int64 (**)(__int64*))(v3 + 464))(a1);
    v5 = "FixedDisable";
    v6 = "Fixed";
  }
  else {
    if (((*(__int64 (**)(__int64*))(v3 + 480))(a1) & 1) != 0) {
      return "Empty";
    }
    v4 = (*(__int64 (**)(__int64*))(*a1 + 464))(a1);
    v5 = "Disable";
    v6 = &GameData_1a9f09e;
  }
  if ((v4 & 1) != 0) {
    return v6;
  }
  else {
    return v5;
  }
}

__int64 EquipInfoItem_SkillEquip_16d3fa0(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;

  result = a2[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v5 = result;
      result = *a2;
      if (*a2 != 0) {
        result = GameRoutine_18a7ae0(result, a1 + 132, *(_QWORD*)(a1 + 96), 0,
                                     0, 0, 0);
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
