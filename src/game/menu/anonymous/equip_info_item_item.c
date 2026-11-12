#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15748c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16d2250(void);
__int64 GameRoutine_18a73c0(void);
__int64 GameRoutine_18a7690(void);
__int64 GameRoutine_6e8bc0(_QWORD);
__int64 GameRoutine_996d60(_QWORD, _QWORD, _QWORD);
__int64 Pane_58f8a0(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern _UNKNOWN* GameData_212da30;
extern __int64 game_g_empty_item;
extern __int64* GameData_212c878[6];
extern __int64* game_g_empty_item_ptr;
extern __int64* ui_LayoutAccessor_empty__ptr[3];
__int64 EquipInfoItem_Item_DrawText(__int64 a1);
unsigned __int64 EquipInfoItem_Item_IsActive(__int64 a1);
bool EquipInfoItem_Item_IsEmpty(__int64 a1);
__int64 EquipInfoItem_Item_Unknown70(__int64 a1, __int64* a2);
__int64 EquipInfoItem_Unknown17(_QWORD*);
__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
extern __int64* GameData_212d890[2];
extern __int64* GameData_2131a28[2];
extern __int64* GameData_2131a58[13];
void Element_1886580(__int64, char);
__int64* EquipInfoItem_Item_Unknown17(__int64 a1);

__int64* EquipInfoItem_Item_Unknown17(__int64 a1)
{
  __int64* result;
  __int64* v3;
  __int64* v4;
  __int64** v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int16 v12;
  char v13;
  __int64 v14;
  struct {
    __int64* v15;
    __int64 v16;
  } v15_;
  char v17;
  struct {
    __int64* v18;
    __int64* v19;
    __int64 v20;
  } v18_;

  EquipInfoItem_Unknown17((_QWORD*)a1);
  result = *(__int64**)(a1 + 112);
  v18_.v18 = nullptr;
  v18_.v19 = nullptr;
  if (result != nullptr &&
      (result =
           (__int64*)std___1___shared_weak_count_lock_alt1((__int64)result),
       v18_.v19 = result, result != nullptr) &&
      (v3 = result, result = *(__int64**)(a1 + 104), v18_.v18 = result,
       result != nullptr) &&
      (v4 = v3, (result = (__int64*)__dynamic_cast(result, GameData_2131a58[0],
                                                   GameData_2131a28[0], 0)) !=
                    nullptr)) {
    v5 = &v18_.v18;
    v15_.v15 = result;
    v15_.v16 = (__int64)v4;
  }
  else {
    v5 = &v15_.v15;
  }
  *v5 = nullptr;
  v5[1] = nullptr;
  v6 = (__int64)v18_.v19;
  if (v18_.v19 != nullptr &&
      atomic_fetch_add((atomic_ullong* volatile)(v18_.v19 + 1),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    result = (__int64*)std___1___shared_weak_count___release_weak_alt1(v6);
  }
  v7 = v15_.v15;
  if (v15_.v15 != nullptr) {
    v8 = *(_QWORD*)(a1 + 96);
    v9 = *(unsigned int*)(a1 + 40);
    v10 = game_g_empty_item_ptr;
    v15_.v15[134] = v8;
    if ((int)v9 >= 0) {
      v11 = v8 + 8 * v9 + 828;
    }
    else {
      v11 = (__int64)v10;
    }
    v12 = *(_WORD*)v11;
    *((_BYTE*)v7 + 1082) = *(_BYTE*)(v11 + 2);
    *((_WORD*)v7 + 540) = v12;
    *((_BYTE*)v7 + 1083) = *(_BYTE*)(v11 + 3);
    *((_DWORD*)v7 + 271) = *(_DWORD*)(v11 + 4);
    v13 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
    (*(void (**)(__int64*, _QWORD))(*v7 + 152))(v7, v13 & 1);
    LayoutAccessor_1562cf0((__int64)(v7 + 11), (unsigned int*)"Info");
    (*(void (**)(__int64*, __int64))(*v7 + 40))(v7, 1);
    Element_1886580((__int64)v7, 1);
    (*(void (**)(__int64*))(*v7 + 384))(v7);
    v18_.v20 = 0;
    v18_.v18 = GameData_212d890[0] + 2;
    LODWORD(v18_.v19) = 20;
    result =
        X8CALL_X0(_QWORD*, (*(__attribute__((swiftcall)) void (**)(
                               PSEUDO_X8, __int64*, __int64**))(v7[9] + 16))(
                               (void*)&v17, v7 + 9, &v18_.v18));
  }
  v14 = v15_.v16;
  if (v15_.v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15_.v16 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    return (__int64*)std___1___shared_weak_count___release_weak_alt1(v14);
  }
  return result;
}

__int64 EquipInfoItem_Item_DrawText(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  char v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  char v9;
  unsigned int v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 result;
  __int64 v17;

  GameRoutine_16d2250();
  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v4 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v17 = v3;
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  std___1___shared_weak_count___release_weak(v17);
  if (v4 == nullptr) {
  LABEL_5:
    v4 = ui_LayoutAccessor_empty__ptr[0];
  }

LABEL_6:
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
  v6 = *(unsigned int*)(a1 + 40);
  if ((int)v6 >= 0) {
    v7 = (__int64*)(*(_QWORD*)(a1 + 96) + 8 * v6 + 828);
  }
  else {
    v7 = game_g_empty_item_ptr;
  }
  v8 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                  8LL * *(unsigned __int16*)v7);
  v9 = *((_DWORD*)v7 + 1);
  v10 = *((unsigned __int8*)v7 + 2);
  v11 = (v9 & 0xF) * *(unsigned __int8*)(v8 + 87);
  v12 = 64;
  if ((v5 & 1) != 0) {
    v12 = 60;
  }
  v13 = 72;
  if ((v5 & 1) != 0) {
    v13 = 36;
  }
  if (v11 <= v10) {
    v14 = v12;
  }
  else {
    v14 = v13;
  }
  v15 = *(_DWORD*)((char*)GameData_212da30 + v14);
  result = ui_LayoutAccessor_FindTextBox(v4, "T_Num");
  if (result != 0) {
    result = Pane_58f8a0(result);
    if (result != 0) {
      *(_DWORD*)(result + 12) = v15;
    }
  }
  return result;
}

unsigned __int64 EquipInfoItem_Item_IsActive(__int64 a1)
{
  __int64 v1;
  __int64* v3;
  unsigned __int64 v4;
  char v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  unsigned int v9;
  char v10;
  __int64 v11;
  unsigned __int64 v12;
  bool v14;
  unsigned __int64 v15;
  char v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v1 = *(unsigned int*)(a1 + 40);
  if ((int)v1 >= 0) {
    v3 = (__int64*)(*(_QWORD*)(a1 + 96) + 8 * v1 + 828);
  }
  else {
    v3 = game_g_empty_item_ptr;
  }
  v20 = *v3;
  v4 = v20;
  v5 = GameRoutine_6e8bc0(&v20);
  v6 = (unsigned __int16)v4;
  v7 = GameData_212c878[0];
  v8 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                  8LL * (unsigned __int16)v4);
  if (*(_BYTE*)(v8 + 72) != 14) {
    goto LABEL_14;
  }
  v9 = *(unsigned __int8*)(v8 + 73);
  if (v9 > 0x11) {
    goto LABEL_14;
  }
  v10 = 1;
  if (((1 << v9) & 0x800C) != 0) {
    v14 = *(unsigned __int8*)(v8 + 88) >> ((v4 & 0x8000000) != 0) == 0;
    goto LABEL_16;
  }
  if (((1 << v9) & 0x10030) == 0) {
    if (v9 == 17) {
      v11 = *(_QWORD*)(v8 + 376);
      v12 = HIDWORD(v4);
      if (v11 != 0 && (v4 & 0x3FF000000000LL) != 0) {
        v17 = v5;
        v18 = GameRoutine_996d60(v11, (((unsigned int)v12 >> 4) & 0x3FF) - 1,
                                 1000);
        if (v18 != 0) {
          v19 = *(_QWORD*)(v18 + 40);
          v5 = v17;
          v14 = v19 == 0;
        LABEL_16:
          v10 = !v14;
          goto LABEL_19;
        }
        v10 = 0;
        v5 = v17;
        goto LABEL_19;
      }
    }
  LABEL_14:
    v10 = 0;
  }

LABEL_19:
  if ((unsigned int)*(
          unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v7 + 64) + 8 * v6) + 72LL) -
          5 >
      1) {
    LOBYTE(v15) = v5 | v10;
  }
  else {
    v15 = (unsigned __int64)GameRoutine_15748c0(*(_QWORD*)(a1 + 96), &v20, 0) >>
          40;
  }
  return v15 & 1;
}

bool EquipInfoItem_Item_IsEmpty(__int64 a1)
{
  __int64 v1;
  __int64* v2;

  v1 = *(unsigned int*)(a1 + 40);
  if ((int)v1 >= 0) {
    v2 = (__int64*)(*(_QWORD*)(a1 + 96) + 8 * v1 + 828);
  }
  else {
    v2 = &game_g_empty_item;
  }
  return *(unsigned __int16*)v2 == 0;
}

__int64 EquipInfoItem_Item_Unknown70(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  unsigned __int8* v9;
  unsigned int v10;
  __int64 v11;

  result = a2[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v5 = result;
      result = *a2;
      if (*a2 == 0) {
        goto LABEL_25;
      }
      v6 = *(_QWORD*)(a1 + 96);
      v7 = *(unsigned int*)(a1 + 40);
      if (v6 != 0) {
        if ((int)v7 >= 0) {
          v8 = (__int64*)(v6 + 8 * v7 + 828);
        }
        else {
          v8 = game_g_empty_item_ptr;
        }
        v9 = *(unsigned __int8**)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                  8LL * *(unsigned __int16*)v8);
        v10 = v9[72];
        if ((v9[336] & 8) != 0) {
          v11 = (1LL << v9[73]) & 0x7DC;
        }
        else {
          v11 = (1LL << v9[73]) & 0x7DC;
          if ((v10 > 7 || v11 == 0) && ((1LL << v10) & 0x20FF) != 0) {
            goto LABEL_24;
          }
        }
        if (v10 <= 7 && v11 != 0) {
        LABEL_24:
          result = GameRoutine_18a7690();
        LABEL_25:
          if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
            return std___1___shared_weak_count___release_weak(v5);
          }
          return result;
        }
      }
      result = GameRoutine_18a73c0();
      goto LABEL_25;
    }
  }
  return result;
}

#pragma GCC visibility pop
