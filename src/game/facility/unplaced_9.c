#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* game_facility_1705ea0(__int64* result, __int64*, __int64*, __int64*,
                               __int64*);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_VariableManager_SetFlag(__int64 result, int);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
extern _UNKNOWN GameData_1aac13e;
extern _UNKNOWN GameData_1ada52a;
extern _UNKNOWN GameData_1af8fda;
extern __int64 GameData_21c6980;
extern __int64 game_GameModeData_instance_;
extern __int64 ui_LayoutAccessor_empty_;
extern char GameData_226b338;
__int64 game_facility_929a00(__int64 a1);
bool game_facility_1706020(__int64* a1, __int64* a2);
__int64 game_facility_1866960(__int64 a1);
__int64 game_facility_1866b00(__int64 a1);

__int64 game_facility_929a00(__int64 a1)
{
  int v1;
  void* v2;
  __int64 result;
  unsigned __int64 v4[2];

  {
    v1 = *(unsigned __int8*)(a1 + 68);
    __asm__ volatile("" ::"r"(v1));
  }
  if (v1 == 2) {
    v2 = &GameData_1aac13e;
  }
  else if (v1 == 1) {
    v2 = &GameData_1af8fda;
  }
  else {
    if (*(_BYTE*)(a1 + 68) != 0) {
      return 0;
    }
    v2 = &GameData_1ada52a;
  }
  v4[1] = (unsigned __int64)v2;
  v4[0] = game_HashString((__int64)v2);
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD**)(game_GameModeData_instance_ + 48), v4);
  if (result != 0) {
    return *(unsigned int*)(result + 32);
  }
  return result;
}

bool game_facility_1706020(__int64* a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  int v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;

  v2 = a2 - a1;
  if (v2 > 2) {
    if (v2 == 3) {
      {
        v5 = *a1;
        __asm__ volatile("" ::"r"(v5));
      }
      {
        v6 = a1[1];
        __asm__ volatile("" ::"r"(v6));
      }
      {
        v7 = *(a2 - 1);
        __asm__ volatile("" ::"r"(v7));
      }
      {
        v8 = *(_DWORD*)(v6 + 40);
        __asm__ volatile("" ::"r"(v8));
      }
      {
        v9 = *(_DWORD*)(v7 + 40);
        __asm__ volatile("" ::"r"(v9));
      }
      if (v8 > (signed __int32)*(_DWORD*)(*a1 + 40)) {
        if (v9 <= v8) {
          *a1 = v6;
          a1[1] = v5;
          {
            v22 = *(a2 - 1);
            __asm__ volatile("" ::"r"(v22));
          }
          if ((signed __int32)*(_DWORD*)(v22 + 40) >
              (signed __int32)*(_DWORD*)(v5 + 40)) {
            a1[1] = v22;
            *(a2 - 1) = v5;
          }
        }
        else {
          *a1 = v7;
          *(a2 - 1) = v5;
        }
        return true;
      }
      if (v9 <= v8) {
        return true;
      }
      a1[1] = v7;
      *(a2 - 1) = v6;
      {
        v21 = a1[1];
        __asm__ volatile("" ::"r"(v21));
      }
    LABEL_49:
      {
        v34 = *a1;
        __asm__ volatile("" ::"r"(v34));
      }
      if ((signed __int32)*(_DWORD*)(v21 + 40) >
          (signed __int32)*(_DWORD*)(*a1 + 40)) {
        *a1 = v21;
        a1[1] = v34;
      }
      return true;
    }
    if (v2 != 4) {
      if (v2 != 5) {
        goto LABEL_13;
      }
      game_facility_1705ea0(a1, a1 + 1, a1 + 2, a1 + 3, a2 - 1);
      return true;
    }
    {
      v17 = *a1;
      __asm__ volatile("" ::"r"(v17));
    }
    {
      v16 = a1[1];
      __asm__ volatile("" ::"r"(v16));
    }
    {
      v18 = a1[2];
      __asm__ volatile("" ::"r"(v18));
    }
    {
      v19 = *(_DWORD*)(v16 + 40);
      __asm__ volatile("" ::"r"(v19));
    }
    {
      v20 = *(_DWORD*)(v18 + 40);
      __asm__ volatile("" ::"r"(v20));
    }
    if (v19 <= (signed __int32)*(_DWORD*)(*a1 + 40)) {
      if (v20 > v19) {
        a1[1] = v18;
        a1[2] = v16;
        if ((signed __int32)*(_DWORD*)(v18 + 40) >
            (signed __int32)*(_DWORD*)(v17 + 40)) {
          *a1 = v18;
          a1[1] = v17;
        }
        goto LABEL_46;
      }
    }
    else {
      if (v20 > v19) {
        *a1 = v18;
      LABEL_44:
        a1[2] = v17;
        v16 = v17;
        goto LABEL_46;
      }
      *a1 = v16;
      a1[1] = v17;
      if ((signed __int32)*(_DWORD*)(v18 + 40) >
          (signed __int32)*(_DWORD*)(v17 + 40)) {
        a1[1] = v18;
        goto LABEL_44;
      }
    }
    v16 = v18;
  LABEL_46:
    {
      v32 = *(a2 - 1);
      __asm__ volatile("" ::"r"(v32));
    }
    if ((signed __int32)*(_DWORD*)(v32 + 40) <=
        (signed __int32)*(_DWORD*)(v16 + 40)) {
      return true;
    }
    a1[2] = v32;
    *(a2 - 1) = v16;
    {
      v33 = a1[1];
      __asm__ volatile("" ::"r"(v33));
    }
    {
      v21 = a1[2];
      __asm__ volatile("" ::"r"(v21));
    }
    if ((signed __int32)*(_DWORD*)(v21 + 40) <=
        (signed __int32)*(_DWORD*)(v33 + 40)) {
      return true;
    }
    a1[1] = v21;
    a1[2] = v33;
    goto LABEL_49;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 == 2) {
    {
      v3 = *(a2 - 1);
      __asm__ volatile("" ::"r"(v3));
    }
    {
      v4 = *a1;
      __asm__ volatile("" ::"r"(v4));
    }
    if ((signed __int32)*(_DWORD*)(v3 + 40) >
        (signed __int32)*(_DWORD*)(*a1 + 40)) {
      *a1 = v3;
      *(a2 - 1) = v4;
    }
    return true;
  }
LABEL_13:
  v11 = a1 + 2;
  {
    v10 = a1[2];
    __asm__ volatile("" ::"r"(v10));
  }
  {
    v12 = *a1;
    __asm__ volatile("" ::"r"(v12));
  }
  {
    v13 = a1[1];
    __asm__ volatile("" ::"r"(v13));
  }
  {
    v14 = *(_DWORD*)(v13 + 40);
    __asm__ volatile("" ::"r"(v14));
  }
  {
    v15 = *(_DWORD*)(v10 + 40);
    __asm__ volatile("" ::"r"(v15));
  }
  if (v14 <= (signed __int32)*(_DWORD*)(*a1 + 40)) {
    if (v15 > v14) {
      a1[1] = v10;
      a1[2] = v13;
      if ((signed __int32)*(_DWORD*)(v10 + 40) >
          (signed __int32)*(_DWORD*)(v12 + 40)) {
        *a1 = v10;
        a1[1] = v12;
      }
    }
  }
  else {
    if (v15 <= v14) {
      *a1 = v13;
      a1[1] = v12;
      if ((signed __int32)*(_DWORD*)(v10 + 40) <=
          (signed __int32)*(_DWORD*)(v12 + 40)) {
        goto LABEL_32;
      }
      a1[1] = v10;
    }
    else {
      *a1 = v10;
    }
    a1[2] = v12;
  }
LABEL_32:
  v23 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v24 = 24;
  v25 = 0;
  while (1) {
    {
      v27 = *v23;
      __asm__ volatile("" ::"r"(v27));
    }
    {
      v28 = *v11;
      __asm__ volatile("" ::"r"(v28));
    }
    if ((signed __int32)*(_DWORD*)(*v23 + 40) >
        (signed __int32)*(_DWORD*)(v28 + 40)) {
      v29 = v24;
      do {
        v30 = v29 - 8;
        *(__int64*)((char*)a1 + v29) = v28;
        if (v29 == 8) {
          v26 = a1;
          goto LABEL_35;
        }
        v31 = (char*)a1 + v29;
        v29 -= 8;
        {
          v28 = *((_QWORD*)v31 - 2);
          __asm__ volatile("" ::"r"(v28));
        }
      } while ((signed __int32)*(_DWORD*)(v27 + 40) >
               (signed __int32)*(_DWORD*)(v28 + 40));
      v26 = (__int64*)((char*)a1 + v30);
    LABEL_35:
      ++v25;
      *v26 = v27;
      if (v25 == 8) {
        return v23 + 1 == a2;
      }
    }
    v11 = v23++;
    v24 += 8;
    if (v23 == a2) {
      return true;
    }
  }
}

__int64 game_facility_1866960(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  unsigned __int64* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  unsigned __int64* v13;
  __int64 v14;
  __int64 v15;
  char v16;
  __int64 v18;

  v2 = 504;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  (*(void (**)(__int64))(*(_QWORD*)a1 + v2))((__int64)a1);
  if ((GameData_226b338 & 1) != 0 || (*(_BYTE*)(a1 + 137) & 1) != 0) {
    goto LABEL_16;
  }
  {
    v3 = *(_QWORD**)(a1 + 120);
    __asm__ volatile("" ::"r"(v3));
  }
  if (v3[1] == *v3) {
    v4 = (unsigned __int64*)&GameData_21c6980;
    v5 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
    LABEL_11:
      v7 = 128;
      goto LABEL_12;
    }
  }
  else {
    {
      v4 = (unsigned __int64*)(*(_QWORD*)(*(_QWORD*)*v3 + 24LL) + 32LL);
      __asm__ volatile("" ::"r"(v4));
    }
    v5 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_11;
    }
  }
  v6 = game_GameVariableTable_Find(*(_QWORD**)(v5 + 48), v4);
  if (v6 == 0) {
    goto LABEL_11;
  }
  {
    v7 = *(_DWORD*)(v6 + 32) | 0x80;
    __asm__ volatile("" ::"r"(v7));
  }
LABEL_12:
  if (v3[1] == *v3) {
    v8 = &GameData_21c6980;
  }
  else {
    v8 = (__int64*)(*(_QWORD*)(*(_QWORD*)*v3 + 24LL) + 32LL);
    __asm__ volatile("" ::"r"(v8));
  }
  game_VariableManager_SetFlag((__int64)v8, v7);
LABEL_16:
  {
    v9 = *(_QWORD*)(a1 + 56);
    __asm__ volatile("" ::"r"(v9));
  }
  if (v9 == 0) {
    goto LABEL_20;
  }
  v10 = std___1___shared_weak_count_lock(v9);
  if (v10 == 0) {
    goto LABEL_20;
  }
  {
    v11 = *(__int64**)(a1 + 48);
    __asm__ volatile("" ::"r"(v11));
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v11 != nullptr) {
      goto LABEL_21;
    }
    goto LABEL_20;
  }
  v18 = v10;
  (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
  std___1___shared_weak_count___release_weak(v18);
  if (v11 == nullptr) {
  LABEL_20:
    v11 = &ui_LayoutAccessor_empty_;
  }
LABEL_21:
  {
    v12 = **(_QWORD**)(a1 + 120);
    __asm__ volatile("" ::"r"(v12));
  }
  if (*(_QWORD*)(*(_QWORD*)(a1 + 120) + 8LL) == v12) {
    v13 = (unsigned __int64*)&GameData_21c6980;
    v14 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
    LABEL_27:
      v16 = 1;
      return ui_LayoutAccessor_SetPaneVisible((__int64)v11, (__int64)"IconNew",
                                              v16);
    }
  }
  else {
    {
      v13 = (unsigned __int64*)(*(_QWORD*)(*(_QWORD*)v12 + 24LL) + 32LL);
      __asm__ volatile("" ::"r"(v13));
    }
    v14 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_27;
    }
  }
  v15 = game_GameVariableTable_Find(*(_QWORD**)(v14 + 48), v13);
  if (v15 == 0) {
    goto LABEL_27;
  }
  {
    v16 = (*(_BYTE*)(v15 + 32) & 0x80) == 0;
    __asm__ volatile("" ::"r"(v16));
  }
  return ui_LayoutAccessor_SetPaneVisible((__int64)v11, (__int64)"IconNew",
                                          v16);
}

__int64 game_facility_1866b00(__int64 a1)
{
  _QWORD* v2;
  unsigned __int64* v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  unsigned __int64* v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v17;

  if ((GameData_226b338 & 1) == 0 && (*(_BYTE*)(a1 + 137) & 1) == 0) {
    {
      v2 = *(_QWORD**)(a1 + 120);
      __asm__ volatile("" ::"r"(v2));
    }
    if (v2[1] == *v2) {
      v3 = (unsigned __int64*)&GameData_21c6980;
      v4 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_9;
      }
    }
    else {
      {
        v3 = (unsigned __int64*)(*(_QWORD*)(*(_QWORD*)*v2 + 24LL) + 32LL);
        __asm__ volatile("" ::"r"(v3));
      }
      v4 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_9;
      }
    }
    v5 = game_GameVariableTable_Find(*(_QWORD**)(v4 + 48), v3);
    if (v5 != 0) {
      {
        v6 = *(_DWORD*)(v5 + 32) | 0x80;
        __asm__ volatile("" ::"r"(v6));
      }
    LABEL_10:
      if (v2[1] == *v2) {
        v7 = &GameData_21c6980;
      }
      else {
        v7 = (__int64*)(*(_QWORD*)(*(_QWORD*)*v2 + 24LL) + 32LL);
        __asm__ volatile("" ::"r"(v7));
      }
      game_VariableManager_SetFlag((__int64)v7, v6);
      goto LABEL_14;
    }
  LABEL_9:
    v6 = 128;
    goto LABEL_10;
  }
LABEL_14:
  {
    v8 = *(_QWORD*)(a1 + 56);
    __asm__ volatile("" ::"r"(v8));
  }
  if (v8 == 0) {
    goto LABEL_18;
  }
  v9 = std___1___shared_weak_count_lock(v8);
  if (v9 == 0) {
    goto LABEL_18;
  }
  {
    v10 = *(__int64**)(a1 + 48);
    __asm__ volatile("" ::"r"(v10));
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v10 != nullptr) {
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  v17 = v9;
  (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
  std___1___shared_weak_count___release_weak(v17);
  if (v10 == nullptr) {
  LABEL_18:
    v10 = &ui_LayoutAccessor_empty_;
  }
LABEL_19:
  {
    v11 = **(_QWORD**)(a1 + 120);
    __asm__ volatile("" ::"r"(v11));
  }
  if (*(_QWORD*)(*(_QWORD*)(a1 + 120) + 8LL) == v11) {
    v12 = (unsigned __int64*)&GameData_21c6980;
    v13 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
    LABEL_25:
      v15 = 1;
      return ui_LayoutAccessor_SetPaneVisible((__int64)v10, (__int64)"IconNew",
                                              v15);
    }
  }
  else {
    {
      v12 = (unsigned __int64*)(*(_QWORD*)(*(_QWORD*)v11 + 24LL) + 32LL);
      __asm__ volatile("" ::"r"(v12));
    }
    v13 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_25;
    }
  }
  v14 = game_GameVariableTable_Find(*(_QWORD**)(v13 + 48), v12);
  if (v14 == 0) {
    goto LABEL_25;
  }
  {
    v15 = (*(_BYTE*)(v14 + 32) & 0x80) == 0;
    __asm__ volatile("" ::"r"(v15));
  }
  return ui_LayoutAccessor_SetPaneVisible((__int64)v10, (__int64)"IconNew",
                                          v15);
}

#pragma GCC visibility pop
