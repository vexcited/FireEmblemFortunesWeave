#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 EquipInfoItem_Unknown17(_QWORD*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern __int64* GameData_212d890[2];
extern __int64* GameData_2131a20[3];
extern __int64* GameData_2131a58[13];
void AsyncLoadThumbImage_189adc0(__int64, int, int);
void Element_1886580(__int64, char);
void MenuItemSkill_1899480(__int64, unsigned int, char, char);
__int64* EquipInfoItem_Barrier_Unknown17(__int64 a1);

__int64* EquipInfoItem_Barrier_Unknown17(__int64 a1)
{
  __int64* result;
  __int64* v3;
  __int64* v4;
  __int64** v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  __int64 v12;
  struct {
    __int64* v13;
    __int64 v14;
  } v13_;
  struct {
    __int64* v15;
    __int64* v16;
    __int64 v17;
  } v15_;
  __int64 var4;

  EquipInfoItem_Unknown17((_QWORD*)a1);
  result = *(__int64**)(a1 + 112);
  v15_.v15 = nullptr;
  v15_.v16 = nullptr;
  if (result != nullptr &&
      (result = (__int64*)std___1___shared_weak_count_lock((__int64)result),
       v15_.v16 = result, result != nullptr) &&
      (v3 = result, result = *(__int64**)(a1 + 104), v15_.v15 = result,
       result != nullptr) &&
      (v4 = v3, (result = (__int64*)__dynamic_cast(result, GameData_2131a58[0],
                                                   GameData_2131a20[0], 0)) !=
                    nullptr)) {
    v5 = &v15_.v15;
    v13_.v13 = result;
    v13_.v14 = (__int64)v4;
  }
  else {
    v5 = &v13_.v13;
  }
  *v5 = nullptr;
  v5[1] = nullptr;
  v6 = (__int64)v15_.v16;
  if (v15_.v16 != nullptr &&
      atomic_fetch_add((atomic_ullong* volatile)(v15_.v16 + 1),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    result = (__int64*)std___1___shared_weak_count___release_weak(v6);
  }
  v7 = (__int64)v13_.v13;
  if (v13_.v13 != nullptr) {
    v8 = (__int64)v13_.v13;
    v13_.v13[36] |= 0x400000000uLL;
    *(_BYTE*)(v7 + 1072) = *(_BYTE*)(a1 + 128);
    MenuItemSkill_1899480(v8, 1u, 0, 0);
    v9 = *(_DWORD*)(a1 + 132);
    if ((*(_BYTE*)(v7 + 1080) & 1) == 0) {
      *(_BYTE*)(v7 + 1080) = 1;
    }
    *(_DWORD*)(v7 + 1076) = v9;
    *(_QWORD*)(v7 + 1096) = *(_QWORD*)(a1 + 96);
    v10 = *(_DWORD*)(a1 + 140);
    v11 = *(_DWORD*)(a1 + 144);
    if (*(_QWORD*)(a1 + 140) != 0) {
      *(_BYTE*)(v7 + 1111) = 1;
      AsyncLoadThumbImage_189adc0(v7, v10, v11);
    }
    else {
      *(_BYTE*)(v7 + 1111) = 0;
    }
    (*(void (**)(__int64, __int64))(*(_QWORD*)v7 + 40LL))(v7, 1);
    Element_1886580(v7, 1);
    (*(void (**)(__int64))(*(_QWORD*)v7 + 384LL))(v7);
    v15_.v17 = 0;
    v15_.v15 = GameData_212d890[0] + 2;
    LODWORD(v15_.v16) = 20;
    result = X8CALL_X0(
        _QWORD*,
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64**))(
            *(_QWORD*)(v7 + 72) + 16LL))((void*)&var4, v7 + 72, &v15_.v15));
  }
  v12 = v13_.v14;
  if (v13_.v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13_.v14 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    return (__int64*)std___1___shared_weak_count___release_weak(v12);
  }
  return result;
}

#pragma GCC visibility pop
