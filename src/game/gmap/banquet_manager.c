#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_gmap_BanquetManager_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* BanquetManager_Destructor_alt1(_QWORD* result) __asm__(
    "BanquetManager_Destructor");
__int64 BanquetManager_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "BanquetManager_DeletingDestructor");
__int64 Troop_133ed80(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_1aa85de;
extern _UNKNOWN GameData_1ade171;
extern _UNKNOWN GameData_21f4970;
extern _UNKNOWN GameData_21f4988;
extern __int64 (*GameData_1fb0900[])();
extern __int64 GameData_21f4960;
extern __int64 GameData_21f4968;
extern __int64 GameData_21f4978;
extern __int64 GameData_21f4980;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c790;
extern __int64* GameData_212c878[6];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6c1f60(_QWORD);
bool BanquetManager_96bae0(__int64 a1);
__int64 BanquetManager_96c9e0(__int64* a1, int* a2);
__int64 game_gmap_BanquetManager_GetHealHp_lambda0_Invoke(__int64 result,
                                                          unsigned __int16* a2,
                                                          _DWORD* a3);
__int64 game_gmap_BanquetManager_GetHealMagic_lambda0_Invoke(
    __int64 result, unsigned __int16* a2, _DWORD* a3);
__int64 game_gmap_BanquetManager_GetTaste_lambda0_Invoke(__int64 result,
                                                         unsigned __int16* a2,
                                                         _DWORD* a3);
__int64 game_gmap_BanquetManager_GetFood_lambda0_Invoke(__int64 result,
                                                        unsigned __int16* a2,
                                                        _DWORD* a3);
__int64 game_gmap_BanquetManager_GetUnits_lambda0_Invoke_alt1(
    __int64 result,
    __int64* a2) __asm__("game_gmap_BanquetManager_GetUnits_lambda0_Invoke");
__int64 game_gmap_BanquetManager_GetUnits_lambda1_Invoke(__int64 a1,
                                                         __int64* a2);
__attribute__((swiftcall)) void TransporterConst_89cb30(PSEUDO_X8,
                                                        __int64 result, int);
__int64 BanquetManager_96a680(__int64, __int64, __int64*);
__int64 BanquetManager_96bae0_alt1(void) __asm__("BanquetManager_96bae0");
__int64 GameRoutine_975940(__int64);
__int64 UnitItemList_711470(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_Unit_GetParam(__int64);
__int64 game_Unit_GetParam_alt1(_QWORD, _QWORD,
                                _QWORD) __asm__("game_Unit_GetParam");
__int64 game_Unit_OnHpChanged(_QWORD);
__int64 game_gmap_BanquetManager_EachItem(__int64, __int64);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
char* game_util_Format(const char*, __int64, __int64, __int64, __int64, __int64,
                       __int64, __int64, char);
extern _UNKNOWN GameData_1aa0ae7;
extern __int64 (*GameData_1fb0600[])();
extern __int64 (*GameData_1fb0690[])();
extern __int64 (*GameData_1fb0710[])();
extern __int64 (*GameData_1fb0790[])();
extern __int64 (*GameData_1fb0990[])();
extern const char GameData_1aa4876[];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_96d280();
void __attribute__((noreturn)) GameRoutine_96d3e0();
__int64 BanquetManager_96a420(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void game_gmap_BanquetManager_GetFood(PSEUDO_X8 x8_,
                                                                 __int64 a1);
__attribute__((swiftcall)) void game_gmap_BanquetManager_GetTaste(PSEUDO_X8 x8_,
                                                                  __int64 a1);
__int64 BanquetManager_96af60(__int64 a1, __int64 a2, __int64 a3,
                              unsigned __int8** a4);
__int64 BanquetManager_96b520(__int64 a1, __int64 a2, __int64 a3,
                              unsigned __int8** a4);
bool game_gmap_BanquetManager_Exec(__int64 a1, __int64 a2);
__int64 game_gmap_BanquetManager_Exec_lambda0_Invoke(__int64 a1,
                                                     unsigned int* a2, int* a3);
__int64 UnitItemList_711470_alt1(__int64 result,
                                 int) __asm__("UnitItemList_711470");
__int64 game_Unit_OnHpChanged_alt1(__int64) __asm__("game_Unit_OnHpChanged");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_6c1f60_alt1() __asm__("GameRoutine_6c1f60");
void game_gmap_BanquetManager_GetUnits_lambda0_Invoke(__int64 a1, __int64* a2);
void BanquetManager_Destructor(_QWORD* a1);
void BanquetManager_DeletingDestructor(_QWORD* a1);

__int64 BanquetManager_96a420(__int64 a1, __int64 a2)
{
  __int64* v3;
  __int64* v4;
  int v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  __int64 v10;
  int v11;
  unsigned int v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  int v16;
  int v17;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int8* v27[3];
  __int64 v28[3];
  struct {
    __int64* v29;
    __int64 v30;
    __int64 v31;
  } v29_;
  struct {
    __int64 (**v32)();
    int* v33;
    char gap96_[16];
    unsigned __int64* v34;
  } v32_;
  int v35;

  v29_.v30 = 0;
  v29_.v31 = 0;
  v29_.v29 = nullptr;
  BanquetManager_96a680(a1, a2, (__int64*)&v29_.v29);
  game_gmap_BanquetManager_GetFood((void*)(v28), a1);
  game_gmap_BanquetManager_GetTaste((void*)((__int64*)v27), a1);
  v3 = v29_.v29;
  v4 = (__int64*)v29_.v30;
  v5 = 0x7FFFFFFF;
  if (v29_.v29 != (__int64*)v29_.v30) {
    do {
      v6 = *v3++;
      v7 = BanquetManager_96af60(a1, v6, (__int64)v28, v27);
      v8 = *(__int16*)(v6 + 492);
      LOBYTE(v32_.v32) = 0;
      v9 = v7 + v8 - game_Unit_GetParam(v6);
      if (v9 < v5) {
        v5 = v9;
      }
    } while (v3 != v4);
    if (v5 < 0) {
      v12 = 0;
      goto LABEL_27;
    }
  }
  v32_.v33 = (int*)&GameData_1aa0ae7;
  v32_.v32 =
      (__int64 (**)(void))game_HashString_alt1((__int64)&GameData_1aa0ae7);
  if (game_GameModeData_instance_ != 0 &&
      (v10 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v32_.v32)) != 0) {
    v11 = *(_DWORD*)(v10 + 32);
    if (v5 <= v11) {
    LABEL_9:
      v12 = 2;
      goto LABEL_27;
    }
  }
  else {
    v11 = 0;
    if (v5 <= 0) {
      goto LABEL_9;
    }
  }
  v35 = 0;
  v32_.v32 = GameData_1fb0600;
  v32_.v33 = &v35;
  v32_.v34 = (unsigned __int64*)&v32_.v32;
  game_gmap_BanquetManager_EachItem(a1, (__int64)&v32_.v32);
  if (v32_.v34 == (unsigned __int64*)&v32_.v32) {
    v13 = 32;
    goto LABEL_16;
  }
  if (v32_.v34 != nullptr) {
    v13 = 40;
  LABEL_16:
    (*(void (**)(__int64))(*v32_.v34 + v13))((__int64)v32_.v34);
  }
  v14 = v29_.v29;
  v15 = (__int64*)v29_.v30;
  if (v29_.v29 == (__int64*)v29_.v30) {
    v17 = 0x7FFFFFFF;
  }
  else {
    v16 = v35;
    v17 = 0x7FFFFFFF;
    do {
      v18 = *v14++;
      LOBYTE(v32_.v32) = 0;
      v19 = v16 + *(__int16*)(v18 + 492);
      v20 = v19 - game_Unit_GetParam(v18);
      if (v20 < v17) {
        v17 = v20;
      }
    } while (v14 != v15);
  }
  if (v17 > v11) {
    v12 = 1;
  }
  else {
    v12 = 2;
  }
LABEL_27:
  v21 = fw_memory_g_heap_manager_ptr;
  if (v27[0] != nullptr) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, (__int64)v27[0]);
  }
  if (v28[0] != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v21 + v23, v28[0]);
  }
  if (v29_.v29 != nullptr) {
    v24 = *(_QWORD*)v21;
    v29_.v30 = (__int64)v29_.v29;
    v25 = 128;
    if (*(_QWORD*)(v24 + 200) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v24 + v25, (__int64)v29_.v29);
  }
  return v12;
}

__attribute__((swiftcall)) void game_gmap_BanquetManager_GetFood(PSEUDO_X8 x8_,
                                                                 __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v4;
  _DWORD* v5;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  int* v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  int v28;
  int* v29;
  int v30;
  int v31;
  _BYTE* v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  _BYTE* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  struct {
    _QWORD v44[4];
    _QWORD* v45;
  } v44_;
  struct {
    __int64 v46;
    __int64 v47;
    __int64 v48;
  } v46_;

  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = (_DWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 4, 16, 0);
  *v5 = 0;
  v6 = (__int64*)fw_memory_HeapManager_Allocate_alt1(*v4, 8, 16, 0);
  v7 = *v4;
  *v6 = 0;
  v8 = v6;
  if (*(_QWORD*)(v7 + 200) != 0) {
    v9 = 128;
  }
  else {
    v9 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(v7 + v9, (__int64)v5);
  v10 = fw_memory_HeapManager_Allocate_alt1(*v4, 16, 16, 0);
  v11 = *v8;
  *(_DWORD*)(v10 + 8) = 0;
  v12 = v10;
  v46_.v46 = v10;
  v46_.v48 = v10 + 16;
  v13 = *v4;
  *(_QWORD*)v10 = v11;
  if (*(_QWORD*)(v13 + 200) != 0) {
    v14 = 128;
  }
  else {
    v14 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(v13 + v14, (__int64)v8);
  v46_.v47 = v12 + 12;
  v44_.v45 = v44_.v44;
  v44_.v44[0] = GameData_1fb0790;
  v44_.v44[1] = &v46_.v46;
  game_gmap_BanquetManager_EachItem(a1, (__int64)v44_.v44);
  if (v44_.v45 == v44_.v44) {
    v15 = 32;
  }
  else {
    if (v44_.v45 == nullptr) {
      goto LABEL_12;
    }
    v15 = 40;
  }
  (*(void (**)(__int64))(*v44_.v45 + v15))((__int64)v44_.v45);
LABEL_12:
  v16 = v46_.v46;
  v17 = v46_.v47;
  a2[1] = 0;
  a2[2] = 0;
  v18 = v17 - v16;
  *a2 = 0;
  if (v17 == v16) {
    goto LABEL_62;
  }
  v19 = v18 >> 2;
  v20 = (v18 >> 2) & 7;
  if (v19 < 8) {
    v21 = 0;
    v22 = 0;
    if (v20 == 0) {
      goto LABEL_40;
    }
    goto LABEL_36;
  }
  v23 = (int*)(v16 + 16);
  v24 = 0;
  v22 = 0;
  v25 = -(__int64)(v19 & 0xFFFFFFFFFFFFFFF8LL);
  do {
    v26 = *(v23 - 4);
    v24 -= 8;
    if (v22 > v26) {
      v26 = v22;
    }
    if (v26 <= *(v23 - 3)) {
      v26 = *(v23 - 3);
    }
    if (v26 <= *(v23 - 2)) {
      v26 = *(v23 - 2);
    }
    if (v26 <= *(v23 - 1)) {
      v26 = *(v23 - 1);
    }
    if (v26 <= *v23) {
      v26 = *v23;
    }
    if (v26 <= v23[1]) {
      v26 = v23[1];
    }
    v27 = v23[2];
    v28 = v23[3];
    v23 += 8;
    if (v26 <= v27) {
      v26 = v27;
    }
    if (v26 <= v28) {
      v22 = v28;
    }
    else {
      v22 = v26;
    }
  } while (v25 != v24);
  v21 = -v24;
  if (v20 != 0) {
  LABEL_36:
    v29 = (int*)(v16 + 4 * v21);
    do {
      v31 = *v29++;
      v30 = v31;
      if (v22 <= v31) {
        v22 = v30;
      }
      --v20;
    } while (v20 != 0);
  }
LABEL_40:
  if (v22 >= 1) {
    v32 = nullptr;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    do {
      if (*(_DWORD*)(v16 + 4 * v35) == v22) {
        if ((unsigned __int64)v32 < v34) {
          *v32++ = v35;
        }
        else {
          v36 = &v32[-v33];
          v37 = (__int64)&v32[-v33 + 1];
          if (v37 < 0) {
            a2[1] = (__int64)v32;
            a2[2] = v34;
            *a2 = v33;
            GameRoutine_96d3e0();
          }
          if (2 * (v34 - v33) > v37) {
            v37 = 2 * (v34 - v33);
          }
          if (v34 - v33 >= 0x3FFFFFFFFFFFFFFFLL) {
            v38 = 0x7FFFFFFFFFFFFFFFLL;
          }
          else {
            v38 = v37;
          }
          if (v38 != 0) {
            v39 = fw_memory_HeapManager_Allocate_alt1(*v4, v38, 16, 0);
          }
          else {
            v39 = 0;
          }
          v34 = v39 + v38;
          v40 = (unsigned __int64)&v32[-v33];
          v36[v39] = v35;
          v32 = &v36[v39 + 1];
          memcpy_alt1(v39, v33, v40);
          if (v33 != 0) {
            v41 = 128;
            if (*(_QWORD*)(*v4 + 200) == 0) {
              v41 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v4 + v41, v33);
          }
          v33 = v39;
        }
        v16 = v46_.v46;
        v17 = v46_.v47;
      }
      ++v35;
    } while (v35 < (v17 - v16) >> 2);
    a2[1] = (__int64)v32;
    a2[2] = v34;
    *a2 = v33;
  LABEL_62:
    if (v16 == 0) {
      return;
    }
  }
  v42 = *v4;
  v46_.v47 = v16;
  v43 = 128;
  if (*(_QWORD*)(v42 + 200) == 0) {
    v43 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(v42 + v43, v16);
}

__attribute__((swiftcall)) void game_gmap_BanquetManager_GetTaste(PSEUDO_X8 x8_,
                                                                  __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v4;
  _DWORD* v5;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  int* v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  int v28;
  int* v29;
  int v30;
  int v31;
  _BYTE* v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  _BYTE* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  struct {
    _QWORD v44[4];
    _QWORD* v45;
  } v44_;
  struct {
    __int64 v46;
    __int64 v47;
    __int64 v48;
  } v46_;

  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = (_DWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 4, 16, 0);
  *v5 = 0;
  v6 = (__int64*)fw_memory_HeapManager_Allocate_alt1(*v4, 8, 16, 0);
  v7 = *v4;
  *v6 = 0;
  v8 = v6;
  if (*(_QWORD*)(v7 + 200) != 0) {
    v9 = 128;
  }
  else {
    v9 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(v7 + v9, (__int64)v5);
  v10 = fw_memory_HeapManager_Allocate_alt1(*v4, 16, 16, 0);
  v11 = *v8;
  *(_DWORD*)(v10 + 8) = 0;
  v12 = v10;
  v13 = v10 + 16;
  v46_.v46 = v10;
  v46_.v48 = v10 + 16;
  *(_QWORD*)v10 = v11;
  if (*(_QWORD*)(*v4 + 200) != 0) {
    v14 = 128;
  }
  else {
    v14 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*v4 + v14, (__int64)v8);
  *(_DWORD*)(v12 + 12) = 0;
  v46_.v47 = v13;
  v44_.v44[0] = GameData_1fb0710;
  v44_.v44[1] = &v46_.v46;
  v44_.v45 = v44_.v44;
  game_gmap_BanquetManager_EachItem(a1, (__int64)v44_.v44);
  if (v44_.v45 == v44_.v44) {
    v15 = 32;
  }
  else {
    if (v44_.v45 == nullptr) {
      goto LABEL_12;
    }
    v15 = 40;
  }
  (*(void (**)(__int64))(*v44_.v45 + v15))((__int64)v44_.v45);
LABEL_12:
  v16 = v46_.v46;
  v17 = v46_.v47;
  a2[1] = 0;
  a2[2] = 0;
  v18 = v17 - v16;
  *a2 = 0;
  if (v17 == v16) {
    goto LABEL_62;
  }
  v19 = v18 >> 2;
  v20 = (v18 >> 2) & 7;
  if (v19 < 8) {
    v21 = 0;
    v22 = 0;
    if (v20 == 0) {
      goto LABEL_40;
    }
    goto LABEL_36;
  }
  v23 = (int*)(v16 + 16);
  v24 = 0;
  v22 = 0;
  v25 = -(__int64)(v19 & 0xFFFFFFFFFFFFFFF8LL);
  do {
    v26 = *(v23 - 4);
    v24 -= 8;
    if (v22 > v26) {
      v26 = v22;
    }
    if (v26 <= *(v23 - 3)) {
      v26 = *(v23 - 3);
    }
    if (v26 <= *(v23 - 2)) {
      v26 = *(v23 - 2);
    }
    if (v26 <= *(v23 - 1)) {
      v26 = *(v23 - 1);
    }
    if (v26 <= *v23) {
      v26 = *v23;
    }
    if (v26 <= v23[1]) {
      v26 = v23[1];
    }
    v27 = v23[2];
    v28 = v23[3];
    v23 += 8;
    if (v26 <= v27) {
      v26 = v27;
    }
    if (v26 <= v28) {
      v22 = v28;
    }
    else {
      v22 = v26;
    }
  } while (v25 != v24);
  v21 = -v24;
  if (v20 != 0) {
  LABEL_36:
    v29 = (int*)(v16 + 4 * v21);
    do {
      v31 = *v29++;
      v30 = v31;
      if (v22 <= v31) {
        v22 = v30;
      }
      --v20;
    } while (v20 != 0);
  }
LABEL_40:
  if (v22 >= 1) {
    v32 = nullptr;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    do {
      if (*(_DWORD*)(v16 + 4 * v35) == v22) {
        if ((unsigned __int64)v32 < v34) {
          *v32++ = v35;
        }
        else {
          v36 = &v32[-v33];
          v37 = (__int64)&v32[-v33 + 1];
          if (v37 < 0) {
            a2[1] = (__int64)v32;
            a2[2] = v34;
            *a2 = v33;
            GameRoutine_96d280();
          }
          if (2 * (v34 - v33) > v37) {
            v37 = 2 * (v34 - v33);
          }
          if (v34 - v33 >= 0x3FFFFFFFFFFFFFFFLL) {
            v38 = 0x7FFFFFFFFFFFFFFFLL;
          }
          else {
            v38 = v37;
          }
          if (v38 != 0) {
            v39 = fw_memory_HeapManager_Allocate_alt1(*v4, v38, 16, 0);
          }
          else {
            v39 = 0;
          }
          v34 = v39 + v38;
          v40 = (unsigned __int64)&v32[-v33];
          v36[v39] = v35;
          v32 = &v36[v39 + 1];
          memcpy_alt1(v39, v33, v40);
          if (v33 != 0) {
            v41 = 128;
            if (*(_QWORD*)(*v4 + 200) == 0) {
              v41 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v4 + v41, v33);
          }
          v33 = v39;
        }
        v16 = v46_.v46;
        v17 = v46_.v47;
      }
      ++v35;
    } while (v35 < (v17 - v16) >> 2);
    a2[1] = (__int64)v32;
    a2[2] = v34;
    *a2 = v33;
  LABEL_62:
    if (v16 == 0) {
      return;
    }
  }
  v42 = *v4;
  v46_.v47 = v16;
  v43 = 128;
  if (*(_QWORD*)(v42 + 200) == 0) {
    v43 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(v42 + v43, v16);
}

__int64 BanquetManager_96af60(__int64 a1, __int64 a2, __int64 a3,
                              unsigned __int8** a4)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned __int8* v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  unsigned int v26;
  unsigned __int8* v27;
  unsigned __int8* v28;
  __int64 v29;
  __int64 i;
  int v31;
  int v32;
  unsigned int v33;
  int v34;
  __int64 v35;
  int v36;
  unsigned __int64 v38;
  int v39;
  int v40;
  unsigned int v41;
  int v42;
  int v43;
  unsigned int v44;
  int v45;
  int v46;
  unsigned int v47;
  int v48;
  int v49;
  unsigned int v50;
  int v51;
  int v52;
  unsigned int v53;
  int v54;
  int v55;
  unsigned int v56;
  int v57;
  int v58;
  unsigned int v59;
  int v60;
  int v61;
  unsigned int v62;
  struct {
    __int64 (**v63)();
    char* v64;
    char gap16_[16];
    unsigned __int64* v65;
  } v63_;
  int v66;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
  v66 = 0;
  v63_.v63 = GameData_1fb0600;
  v63_.v64 = (char*)&v66;
  v63_.v65 = (unsigned __int64*)&v63_.v63;
  game_gmap_BanquetManager_EachItem(a1, (__int64)&v63_.v63),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
  if (v63_.v65 == (unsigned __int64*)&v63_.v63) {
    v13 = 32;
    goto LABEL_5;
  }
  if (v63_.v65 != nullptr) {
    v13 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v63_.v65 + v13))((__int64)v63_.v65),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
  }
  v14 = v66;
  if (a2 == 0 || (v15 = *(_QWORD*)(*(_QWORD*)(a2 + 392) + 288LL)) == 0 ||
      (v16 = GameRoutine_975940(v15)) == 0) {
    v23 = 0;
    goto LABEL_46;
  }
  v17 = *(unsigned __int8**)a3;
  v18 = *(_QWORD*)(a3 + 8);
  v19 = *(_QWORD*)a3 - v18;
  if (*(_QWORD*)a3 != v18) {
    v20 = v18 - (_QWORD)v17;
    v21 = v16 + 168;
    v22 = (v18 - (_QWORD)v17) & 3;
    if (v19 > 0xFFFFFFFFFFFFFFFCLL) {
      LODWORD(v19) = 0;
    LABEL_12:
      if (v22 != 0) {
        while (1) {
          v26 = *(unsigned __int8*)(v21 + *v17);
          if (v26 > 3) {
            if (v26 == 4) {
              v25 = -2;
              goto LABEL_17;
            }
            if (v26 == 5) {
              v25 = 4;
              goto LABEL_17;
            }
          }
          else {
            if (v26 == 2) {
              v24 = 1;
              goto LABEL_16;
            }
            if (v26 == 3) {
              v24 = 2;
              goto LABEL_16;
            }
          }
          v24 = 0;
        LABEL_16:
          v25 = (__PAIR64__(v24, (unsigned __int8)v26 & 0xFB) - 1) >> 32;
        LABEL_17:
          LODWORD(v19) = v25 + v19;
          ++v17;
          if (--v22 == 0) {
            goto LABEL_27;
          }
        }
      }
      goto LABEL_27;
    }
    v38 = v20 & 0xFFFFFFFFFFFFFFFCLL;
    LODWORD(v19) = 0;
    while (1) {
      v41 = *(unsigned __int8*)(v21 + *v17);
      if (v41 <= 3) {
        break;
      }
      if (v41 != 5) {
        if (v41 == 4) {
          v43 = -2;
          goto LABEL_66;
        }
      LABEL_62:
        v42 = 0;
      LABEL_64:
        v43 = (__PAIR64__(v42, (unsigned __int8)v41 & 0xFB) - 1) >> 32;
        goto LABEL_66;
      }
      v43 = 4;
    LABEL_66:
      v44 = *(unsigned __int8*)(v21 + v17[1]);
      if (v44 <= 3) {
        if (v44 == 2) {
          v45 = 1;
        }
        else {
          if (v44 != 3) {
            goto LABEL_73;
          }
          v45 = 2;
        }
        goto LABEL_75;
      }
      if (v44 != 4) {
        if (v44 == 5) {
          v46 = 4;
          goto LABEL_77;
        }
      LABEL_73:
        v45 = 0;
      LABEL_75:
        v46 = (__PAIR64__(v45, (unsigned __int8)v44 & 0xFB) - 1) >> 32;
        goto LABEL_77;
      }
      v46 = -2;
    LABEL_77:
      v47 = *(unsigned __int8*)(v21 + v17[2]);
      if (v47 <= 3) {
        if (v47 == 2) {
          v48 = 1;
        }
        else {
          if (v47 != 3) {
            goto LABEL_84;
          }
          v48 = 2;
        }
        goto LABEL_86;
      }
      if (v47 != 4) {
        if (v47 == 5) {
          v49 = 4;
          goto LABEL_88;
        }
      LABEL_84:
        v48 = 0;
      LABEL_86:
        v49 = (__PAIR64__(v48, (unsigned __int8)v47 & 0xFB) - 1) >> 32;
        goto LABEL_88;
      }
      v49 = -2;
    LABEL_88:
      v50 = *(unsigned __int8*)(v21 + v17[3]);
      if (v50 > 3) {
        if (v50 == 4) {
          v40 = -2;
          goto LABEL_54;
        }
        if (v50 == 5) {
          v40 = 4;
          goto LABEL_54;
        }
      }
      else {
        if (v50 == 2) {
          v39 = 1;
          goto LABEL_53;
        }
        if (v50 == 3) {
          v39 = 2;
          goto LABEL_53;
        }
      }
      v39 = 0;
    LABEL_53:
      v40 = (__PAIR64__(v39, (unsigned __int8)v50 & 0xFB) - 1) >> 32;
    LABEL_54:
      v17 += 4;
      v38 -= 4LL;
      LODWORD(v19) = v40 + v49 + v46 + v43 + v19;
      if (v38 == 0) {
        goto LABEL_12;
      }
    }
    if (v41 == 2) {
      v42 = 1;
    }
    else {
      if (v41 != 3) {
        goto LABEL_62;
      }
      v42 = 2;
    }
    goto LABEL_64;
  }
LABEL_27:
  v27 = *a4;
  v28 = a4[1];
  if (*a4 != v28) {
    v29 = v16 + 171;
    for (i = ((_BYTE)v28 - (_BYTE)v27) & 3; i != 0; --i) {
      v33 = *(unsigned __int8*)(v29 + *v27);
      if (v33 > 3) {
        if (v33 == 4) {
          v32 = -2;
          goto LABEL_32;
        }
        if (v33 == 5) {
          v32 = 4;
          goto LABEL_32;
        }
      }
      else {
        if (v33 == 2) {
          v31 = 1;
          goto LABEL_31;
        }
        if (v33 == 3) {
          v31 = 2;
          goto LABEL_31;
        }
      }
      v31 = 0;
    LABEL_31:
      v32 = (__PAIR64__(v31, (unsigned __int8)v33 & 0xFB) - 1) >> 32;
    LABEL_32:
      LODWORD(v19) = v32 + v19;
      ++v27;
    }
    if ((unsigned __int64)(*a4 - v28) <= 0xFFFFFFFFFFFFFFFCLL) {
      while (1) {
        v53 = *(unsigned __int8*)(v29 + *v27);
        if (v53 <= 3) {
          break;
        }
        if (v53 != 5) {
          if (v53 == 4) {
            v55 = -2;
            goto LABEL_112;
          }
        LABEL_108:
          v54 = 0;
        LABEL_110:
          v55 = (__PAIR64__(v54, (unsigned __int8)v53 & 0xFB) - 1) >> 32;
          goto LABEL_112;
        }
        v55 = 4;
      LABEL_112:
        v56 = *(unsigned __int8*)(v29 + v27[1]);
        if (v56 <= 3) {
          if (v56 == 2) {
            v57 = 1;
          }
          else {
            if (v56 != 3) {
              goto LABEL_119;
            }
            v57 = 2;
          }
          goto LABEL_121;
        }
        if (v56 != 4) {
          if (v56 == 5) {
            v58 = 4;
            goto LABEL_123;
          }
        LABEL_119:
          v57 = 0;
        LABEL_121:
          v58 = (__PAIR64__(v57, (unsigned __int8)v56 & 0xFB) - 1) >> 32;
          goto LABEL_123;
        }
        v58 = -2;
      LABEL_123:
        v59 = *(unsigned __int8*)(v29 + v27[2]);
        if (v59 <= 3) {
          if (v59 == 2) {
            v60 = 1;
          }
          else {
            if (v59 != 3) {
              goto LABEL_130;
            }
            v60 = 2;
          }
          goto LABEL_132;
        }
        if (v59 != 4) {
          if (v59 == 5) {
            v61 = 4;
            goto LABEL_134;
          }
        LABEL_130:
          v60 = 0;
        LABEL_132:
          v61 = (__PAIR64__(v60, (unsigned __int8)v59 & 0xFB) - 1) >> 32;
          goto LABEL_134;
        }
        v61 = -2;
      LABEL_134:
        v62 = *(unsigned __int8*)(v29 + v27[3]);
        if (v62 > 3) {
          if (v62 == 4) {
            v52 = -2;
            goto LABEL_100;
          }
          if (v62 == 5) {
            v52 = 4;
            goto LABEL_100;
          }
        }
        else {
          if (v62 == 2) {
            v51 = 1;
            goto LABEL_99;
          }
          if (v62 == 3) {
            v51 = 2;
            goto LABEL_99;
          }
        }
        v51 = 0;
      LABEL_99:
        v52 = (__PAIR64__(v51, (unsigned __int8)v62 & 0xFB) - 1) >> 32;
      LABEL_100:
        v27 += 4;
        LODWORD(v19) = v52 + v61 + v58 + v55 + v19;
        if (v27 == v28) {
          goto LABEL_43;
        }
      }
      if (v53 == 2) {
        v54 = 1;
      }
      else {
        if (v53 != 3) {
          goto LABEL_108;
        }
        v54 = 2;
      }
      goto LABEL_110;
    }
  }
LABEL_43:
  v34 = v19 & ~((int)v19 >> 31);
  if (v34 >= 4) {
    v23 = 4;
  }
  else {
    v23 = (unsigned int)v34;
  }
LABEL_46:
  v63_.v64 = game_util_Format(GameData_1aa4876, v23, v7, v8, v9, v10, v11, v12,
                              (char)v63_.v63),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
  v63_.v63 = (__int64 (**)(void))game_HashString_alt1((__int64)v63_.v64),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x4", "=r"));
  if (game_GameModeData_instance_ != 0 &&
      (v35 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v63_.v63)) != 0) {
    v36 = *(_DWORD*)(v35 + 32) + 100;
  }
  else {
    v36 = 100;
  }
  return (unsigned int)(v36 * v14 / 100);
}

__int64 BanquetManager_96b520(__int64 a1, __int64 a2, __int64 a3,
                              unsigned __int8** a4)
{
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  unsigned __int8* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  int v19;
  unsigned int v20;
  unsigned __int8* v21;
  unsigned __int8* v22;
  __int64 v23;
  __int64 i;
  int v25;
  int v26;
  unsigned int v27;
  int v28;
  __int64 v29;
  int v30;
  unsigned __int64 v32;
  int v33;
  int v34;
  unsigned int v35;
  int v36;
  int v37;
  unsigned int v38;
  int v39;
  int v40;
  unsigned int v41;
  int v42;
  int v43;
  unsigned int v44;
  int v45;
  int v46;
  unsigned int v47;
  int v48;
  int v49;
  unsigned int v50;
  int v51;
  int v52;
  unsigned int v53;
  int v54;
  int v55;
  unsigned int v56;
  struct {
    __int64 (**v57)();
    char* v58;
    char gap16_[16];
    unsigned __int64* v59;
  } v57_;
  int v60;

  v60 = 0;
  v57_.v57 = GameData_1fb0690;
  v57_.v58 = (char*)&v60;
  v57_.v59 = (unsigned __int64*)&v57_.v57;
  game_gmap_BanquetManager_EachItem(a1, (__int64)&v57_.v57);
  if (v57_.v59 == (unsigned __int64*)&v57_.v57) {
    v7 = 32;
    goto LABEL_5;
  }
  if (v57_.v59 != nullptr) {
    v7 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v57_.v59 + v7))((__int64)v57_.v59);
  }
  v8 = v60;
  if (a2 == 0 || (v9 = *(_QWORD*)(*(_QWORD*)(a2 + 392) + 288LL)) == 0 ||
      (v10 = GameRoutine_975940(v9)) == 0) {
    v17 = 0;
    goto LABEL_46;
  }
  v11 = *(unsigned __int8**)a3;
  v12 = *(_QWORD*)(a3 + 8);
  v13 = *(_QWORD*)a3 - v12;
  if (*(_QWORD*)a3 != v12) {
    v14 = v12 - (_QWORD)v11;
    v15 = v10 + 168;
    v16 = (v12 - (_QWORD)v11) & 3;
    if (v13 > 0xFFFFFFFFFFFFFFFCLL) {
      LODWORD(v13) = 0;
    LABEL_12:
      if (v16 != 0) {
        while (1) {
          v20 = *(unsigned __int8*)(v15 + *v11);
          if (v20 > 3) {
            if (v20 == 4) {
              v19 = -2;
              goto LABEL_17;
            }
            if (v20 == 5) {
              v19 = 4;
              goto LABEL_17;
            }
          }
          else {
            if (v20 == 2) {
              v18 = 1;
              goto LABEL_16;
            }
            if (v20 == 3) {
              v18 = 2;
              goto LABEL_16;
            }
          }
          v18 = 0;
        LABEL_16:
          v19 = (__PAIR64__(v18, (unsigned __int8)v20 & 0xFB) - 1) >> 32;
        LABEL_17:
          LODWORD(v13) = v19 + v13;
          ++v11;
          if (--v16 == 0) {
            goto LABEL_27;
          }
        }
      }
      goto LABEL_27;
    }
    v32 = v14 & 0xFFFFFFFFFFFFFFFCLL;
    LODWORD(v13) = 0;
    while (1) {
      v35 = *(unsigned __int8*)(v15 + *v11);
      if (v35 <= 3) {
        break;
      }
      if (v35 != 5) {
        if (v35 == 4) {
          v37 = -2;
          goto LABEL_66;
        }
      LABEL_62:
        v36 = 0;
      LABEL_64:
        v37 = (__PAIR64__(v36, (unsigned __int8)v35 & 0xFB) - 1) >> 32;
        goto LABEL_66;
      }
      v37 = 4;
    LABEL_66:
      v38 = *(unsigned __int8*)(v15 + v11[1]);
      if (v38 <= 3) {
        if (v38 == 2) {
          v39 = 1;
        }
        else {
          if (v38 != 3) {
            goto LABEL_73;
          }
          v39 = 2;
        }
        goto LABEL_75;
      }
      if (v38 != 4) {
        if (v38 == 5) {
          v40 = 4;
          goto LABEL_77;
        }
      LABEL_73:
        v39 = 0;
      LABEL_75:
        v40 = (__PAIR64__(v39, (unsigned __int8)v38 & 0xFB) - 1) >> 32;
        goto LABEL_77;
      }
      v40 = -2;
    LABEL_77:
      v41 = *(unsigned __int8*)(v15 + v11[2]);
      if (v41 <= 3) {
        if (v41 == 2) {
          v42 = 1;
        }
        else {
          if (v41 != 3) {
            goto LABEL_84;
          }
          v42 = 2;
        }
        goto LABEL_86;
      }
      if (v41 != 4) {
        if (v41 == 5) {
          v43 = 4;
          goto LABEL_88;
        }
      LABEL_84:
        v42 = 0;
      LABEL_86:
        v43 = (__PAIR64__(v42, (unsigned __int8)v41 & 0xFB) - 1) >> 32;
        goto LABEL_88;
      }
      v43 = -2;
    LABEL_88:
      v44 = *(unsigned __int8*)(v15 + v11[3]);
      if (v44 > 3) {
        if (v44 == 4) {
          v34 = -2;
          goto LABEL_54;
        }
        if (v44 == 5) {
          v34 = 4;
          goto LABEL_54;
        }
      }
      else {
        if (v44 == 2) {
          v33 = 1;
          goto LABEL_53;
        }
        if (v44 == 3) {
          v33 = 2;
          goto LABEL_53;
        }
      }
      v33 = 0;
    LABEL_53:
      v34 = (__PAIR64__(v33, (unsigned __int8)v44 & 0xFB) - 1) >> 32;
    LABEL_54:
      v11 += 4;
      v32 -= 4LL;
      LODWORD(v13) = v34 + v43 + v40 + v37 + v13;
      if (v32 == 0) {
        goto LABEL_12;
      }
    }
    if (v35 == 2) {
      v36 = 1;
    }
    else {
      if (v35 != 3) {
        goto LABEL_62;
      }
      v36 = 2;
    }
    goto LABEL_64;
  }
LABEL_27:
  v21 = *a4;
  v22 = a4[1];
  if (*a4 != v22) {
    v23 = v10 + 171;
    for (i = ((_BYTE)v22 - (_BYTE)v21) & 3; i != 0; --i) {
      v27 = *(unsigned __int8*)(v23 + *v21);
      if (v27 > 3) {
        if (v27 == 4) {
          v26 = -2;
          goto LABEL_32;
        }
        if (v27 == 5) {
          v26 = 4;
          goto LABEL_32;
        }
      }
      else {
        if (v27 == 2) {
          v25 = 1;
          goto LABEL_31;
        }
        if (v27 == 3) {
          v25 = 2;
          goto LABEL_31;
        }
      }
      v25 = 0;
    LABEL_31:
      v26 = (__PAIR64__(v25, (unsigned __int8)v27 & 0xFB) - 1) >> 32;
    LABEL_32:
      LODWORD(v13) = v26 + v13;
      ++v21;
    }
    if ((unsigned __int64)(*a4 - v22) <= 0xFFFFFFFFFFFFFFFCLL) {
      while (1) {
        v47 = *(unsigned __int8*)(v23 + *v21);
        if (v47 <= 3) {
          break;
        }
        if (v47 != 5) {
          if (v47 == 4) {
            v49 = -2;
            goto LABEL_112;
          }
        LABEL_108:
          v48 = 0;
        LABEL_110:
          v49 = (__PAIR64__(v48, (unsigned __int8)v47 & 0xFB) - 1) >> 32;
          goto LABEL_112;
        }
        v49 = 4;
      LABEL_112:
        v50 = *(unsigned __int8*)(v23 + v21[1]);
        if (v50 <= 3) {
          if (v50 == 2) {
            v51 = 1;
          }
          else {
            if (v50 != 3) {
              goto LABEL_119;
            }
            v51 = 2;
          }
          goto LABEL_121;
        }
        if (v50 != 4) {
          if (v50 == 5) {
            v52 = 4;
            goto LABEL_123;
          }
        LABEL_119:
          v51 = 0;
        LABEL_121:
          v52 = (__PAIR64__(v51, (unsigned __int8)v50 & 0xFB) - 1) >> 32;
          goto LABEL_123;
        }
        v52 = -2;
      LABEL_123:
        v53 = *(unsigned __int8*)(v23 + v21[2]);
        if (v53 <= 3) {
          if (v53 == 2) {
            v54 = 1;
          }
          else {
            if (v53 != 3) {
              goto LABEL_130;
            }
            v54 = 2;
          }
          goto LABEL_132;
        }
        if (v53 != 4) {
          if (v53 == 5) {
            v55 = 4;
            goto LABEL_134;
          }
        LABEL_130:
          v54 = 0;
        LABEL_132:
          v55 = (__PAIR64__(v54, (unsigned __int8)v53 & 0xFB) - 1) >> 32;
          goto LABEL_134;
        }
        v55 = -2;
      LABEL_134:
        v56 = *(unsigned __int8*)(v23 + v21[3]);
        if (v56 > 3) {
          if (v56 == 4) {
            v46 = -2;
            goto LABEL_100;
          }
          if (v56 == 5) {
            v46 = 4;
            goto LABEL_100;
          }
        }
        else {
          if (v56 == 2) {
            v45 = 1;
            goto LABEL_99;
          }
          if (v56 == 3) {
            v45 = 2;
            goto LABEL_99;
          }
        }
        v45 = 0;
      LABEL_99:
        v46 = (__PAIR64__(v45, (unsigned __int8)v56 & 0xFB) - 1) >> 32;
      LABEL_100:
        v21 += 4;
        LODWORD(v13) = v46 + v55 + v52 + v49 + v13;
        if (v21 == v22) {
          goto LABEL_43;
        }
      }
      if (v47 == 2) {
        v48 = 1;
      }
      else {
        if (v47 != 3) {
          goto LABEL_108;
        }
        v48 = 2;
      }
      goto LABEL_110;
    }
  }
LABEL_43:
  v28 = v13 & ~((int)v13 >> 31);
  if (v28 >= 4) {
    v17 = 4;
  }
  else {
    v17 = (unsigned int)v28;
  }
LABEL_46:
  v57_.v58 = game_util_Format_alt1(GameData_1aa4876, v17);
  v57_.v57 = (__int64 (**)(void))game_HashString_alt1((__int64)v57_.v58);
  if (game_GameModeData_instance_ != 0 &&
      (v29 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v57_.v57)) != 0) {
    v30 = *(_DWORD*)(v29 + 32) + 100;
  }
  else {
    v30 = 100;
  }
  return (unsigned int)(v30 * v8 / 100);
}

bool BanquetManager_96bae0(__int64 a1)
{
  int v2;
  __int64 v3;
  int v4;
  int v6;
  __int64 v7;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4970,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21f4970) != 0) {
    GameData_21f4968 = (__int64)&GameData_1ade171;
    GameData_21f4960 = game_HashString_alt1((__int64)&GameData_1ade171);
    __cxa_guard_release_alt1((__int64)&GameData_21f4970);
  }
  v2 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v3 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&GameData_21f4960);
    if (v3 != 0) {
      v2 = *(_DWORD*)(v3 + 32);
    }
    else {
      v2 = 0;
    }
  }
  v4 = *(_DWORD*)(a1 + 8);
  if (v2 > v4) {
    return false;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4988,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21f4988) != 0) {
    GameData_21f4980 = (__int64)&GameData_1aa85de;
    GameData_21f4978 = game_HashString_alt1((__int64)&GameData_1aa85de);
    __cxa_guard_release_alt1((__int64)&GameData_21f4988);
  }
  v6 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v7 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&GameData_21f4978);
    if (v7 != 0) {
      v6 = *(_DWORD*)(v7 + 32);
    }
    else {
      v6 = 0;
    }
  }
  return v4 <= v6;
}

bool game_gmap_BanquetManager_Exec(__int64 a1, __int64 a2)
{
  _BOOL8 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v17;
  __int64* v18;
  _QWORD* v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  struct {
    _QWORD v28[4];
    _QWORD* v29;
  } v28_;
  unsigned __int8* v30[3];
  __int64 v31[3];
  struct {
    __int64* v32;
    __int64 v33;
    __int64 v34;
  } v32_;
  int v35;
  int v36;

  v4 = BanquetManager_96bae0(a1);
  if (!v4) {
    return false;
  }
  v32_.v33 = 0;
  v32_.v34 = 0;
  v32_.v32 = nullptr;
  BanquetManager_96a680(v4, a2, (__int64*)&v32_.v32);
  v6 = (__int64)v32_.v32;
  v5 = v32_.v33;
  v7 = fw_memory_g_heap_manager_ptr;
  if ((__int64*)v32_.v33 == v32_.v32) {
    v24 = (__int64)v32_.v32;
    if (v32_.v32 == nullptr) {
      return v5 != v6;
    }
    goto LABEL_41;
  }
  game_gmap_BanquetManager_GetFood((void*)(v31), a1);
  game_gmap_BanquetManager_GetTaste((void*)((__int64*)v30), a1);
  v8 = v32_.v32;
  v9 = (__int64*)v32_.v33;
  while (v8 != v9) {
    v10 = *v8;
    v11 = BanquetManager_96af60(a1, *v8, (__int64)v31, v30);
    v12 = BanquetManager_96b520(a1, v10, (__int64)v31, v30);
    if (v11 >= 1) {
      if (*(_WORD*)(v10 + 494) != 0) {
        *(_WORD*)(v10 + 494) = 0;
      }
      if ((*(_BYTE*)(v10 + 416) & 8) == 0) {
        v13 = *(__int16*)(v10 + 492);
        LOBYTE(v28_.v28[0]) = 0;
        v14 = v11 + v13;
        v15 = game_Unit_GetParam(v10);
        if (*(_WORD*)(v10 + 494) != 0 && v14 != *(__int16*)(v10 + 494)) {
          *(_WORD*)(v10 + 494) = 0;
        }
        if (v15 >= v14) {
          v17 = v14;
        }
        else {
          v17 = v15;
        }
        if (v14 < 0) {
          v17 = 0;
        }
        if (v17 != *(__int16*)(v10 + 492)) {
          *(_WORD*)(v10 + 492) = v17;
          game_Unit_OnHpChanged_alt1(v10);
        }
      }
    }
    if (v12 >= 1) {
      UnitItemList_711470_alt1(v10 + 828, v12);
    }
    ++v8;
  }
  v18 = *(__int64**)(a1 + 32);
  v19 = v28_.v28;
  v28_.v28[0] = GameData_1fb0990;
  v28_.v29 = v28_.v28;
  if (v18 == nullptr) {
    goto LABEL_30;
  }
  do {
    v20 = *((_DWORD*)v18 + 4);
    v35 = *((_DWORD*)v18 + 5);
    v36 = v20;
    if (v28_.v29 == nullptr) {
      GameRoutine_60a310_alt1();
    }
    (*(void (**)(_QWORD*, int*, int*))(*v28_.v29 + 48LL))(v28_.v29, &v36, &v35);
    v18 = (__int64*)*v18;
  } while (v18 != nullptr);
  v19 = v28_.v29;
  if (v28_.v29 == v28_.v28) {
  LABEL_30:
    v21 = 32;
  }
  else {
    if (v28_.v29 == nullptr) {
      goto LABEL_32;
    }
    v21 = 40;
  }
  (*(void (**)(_QWORD*))(*v19 + v21))(v19);
LABEL_32:
  if (v30[0] != nullptr) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v7 + v22, (__int64)v30[0]);
  }
  if (v31[0] != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v7 + v23, v31[0]);
  }
  v24 = (__int64)v32_.v32;
  if (v32_.v32 != nullptr) {
  LABEL_41:
    v25 = *(_QWORD*)v7;
    v32_.v33 = v24;
    v26 = 128;
    if (*(_QWORD*)(v25 + 200) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v25 + v26, v24);
  }
  return v5 != v6;
}

__int64 BanquetManager_96c9e0(__int64* a1, int* a2)
{
  unsigned __int64 v2;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;

  v2 = a1[1];
  if (v2 == 0 || a1[3] == 0) {
    return 0;
  }
  v5 = *a2;
  v6 = v2 - 1;
  if ((v2 & (v2 - 1)) != 0) {
    v7 = *a2;
    if (v2 <= v5) {
      v7 = v5 % v2;
    }
  }
  else {
    v7 = v6 & v5;
  }
  v8 = *a1;
  v9 = *(__int64**)(*a1 + 8 * v7);
  if (v9 == nullptr) {
    return 0;
  }
  v10 = *v9;
  if (*v9 == 0) {
    return 0;
  }
  if ((v2 & v6) == 0) {
    while (1) {
      v12 = *(_QWORD*)(v10 + 8);
      if (v12 == v5) {
        if (*(_DWORD*)(v10 + 16) == (_DWORD)v5) {
          goto LABEL_28;
        }
      }
      else if ((v12 & v6) != v7) {
        return 0;
      }
      v10 = *(_QWORD*)v10;
      if (v10 == 0) {
        return 0;
      }
    }
  }
  while (1) {
    v11 = *(_QWORD*)(v10 + 8);
    if (v11 == v5) {
      break;
    }
    if (v11 >= v2) {
      v11 %= v2;
    }
    if (v11 != v7) {
      return 0;
    }
  LABEL_16:
    v10 = *(_QWORD*)v10;
    if (v10 == 0) {
      return 0;
    }
  }
  if (*(_DWORD*)(v10 + 16) != (_DWORD)v5) {
    goto LABEL_16;
  }
LABEL_28:
  if ((v2 & v6) != 0) {
    if (v2 <= v5) {
      v5 %= v2;
    }
  }
  else {
    v5 &= v6;
  }
  v13 = *(__int64**)(v8 + 8 * v5);
  do {
    v14 = v13;
    v13 = (__int64*)*v13;
  } while (v13 != (__int64*)v10);
  if (v14 == a1 + 2) {
    goto LABEL_45;
  }
  v15 = v14[1];
  if ((v2 & v6) != 0) {
    if (v15 >= v2) {
      v15 %= v2;
    }
  }
  else {
    v15 &= v6;
  }
  if (v15 != v5) {
  LABEL_45:
    if (*(_QWORD*)v10 == 0) {
      goto LABEL_46;
    }
    v16 = *(_QWORD*)(*(_QWORD*)v10 + 8LL);
    if ((v2 & v6) != 0) {
      if (v16 >= v2) {
        v16 %= v2;
      }
    }
    else {
      v16 &= v6;
    }
    if (v16 != v5) {
    LABEL_46:
      *(_QWORD*)(v8 + 8 * v5) = 0;
    }
  }
  v17 = *(_QWORD*)v10;
  if (*(_QWORD*)v10 != 0) {
    v18 = *(_QWORD*)(v17 + 8);
    if ((v2 & v6) != 0) {
      if (v18 >= v2) {
        v18 %= v2;
      }
    }
    else {
      v18 &= v6;
    }
    if (v18 != v5) {
      *(_QWORD*)(*a1 + 8 * v18) = v14;
      v17 = *(_QWORD*)v10;
    }
  }
  *v14 = v17;
  *(_QWORD*)v10 = 0;
  --a1[3];
  v19 = 128;
  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
    v19 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v19, v10);
  return 1;
}

__int64 game_gmap_BanquetManager_GetHealHp_lambda0_Invoke(__int64 result,
                                                          unsigned __int16* a2,
                                                          _DWORD* a3)
{
  **(_DWORD**)(result + 8) +=
      *a3 *
      *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL * *a2) +
                          97LL);
  return result;
}

__int64 game_gmap_BanquetManager_GetHealMagic_lambda0_Invoke(
    __int64 result, unsigned __int16* a2, _DWORD* a3)
{
  **(_DWORD**)(result + 8) +=
      *a3 *
      *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL * *a2) +
                          98LL);
  return result;
}

__int64 game_gmap_BanquetManager_GetTaste_lambda0_Invoke(__int64 result,
                                                         unsigned __int16* a2,
                                                         _DWORD* a3)
{
  __int64 v3;

  v3 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                      8LL * *a2) +
                           95LL);
  *(_DWORD*)(**(_QWORD**)(result + 8) + 4 * v3) += *a3;
  return result;
}

__int64 game_gmap_BanquetManager_GetFood_lambda0_Invoke(__int64 result,
                                                        unsigned __int16* a2,
                                                        _DWORD* a3)
{
  __int64 v3;

  v3 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                      8LL * *a2) +
                           94LL);
  *(_DWORD*)(**(_QWORD**)(result + 8) + 4 * v3) += *a3;
  return result;
}

void game_gmap_BanquetManager_GetUnits_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;

  v2 = *(__int64**)(a1 + 8);
  v3 = *a2;
  v4 = *v2;
  v5 = (_QWORD*)v2[1];
  v6 = (_QWORD*)*v2;
  if ((_QWORD*)*v2 == v5) {
    goto LABEL_17;
  }
  v7 = (unsigned __int64)v5 - v4 - 8;
  v6 = (_QWORD*)*v2;
  if ((~(_BYTE)v7 & 0x18) != 0) {
    v8 = ((unsigned __int8)((unsigned int)v7 >> 3) + 1) & 3;
    v6 = (_QWORD*)*v2;
    while (*v6 != v3) {
      ++v6;
      if (--v8 == 0) {
        goto LABEL_6;
      }
    }
  LABEL_17:
    if (v6 != v5) {
      return;
    }
    goto LABEL_18;
  }
LABEL_6:
  if (v7 >= 0x18) {
    v6 += 2;
    while (1) {
      if (*(v6 - 2) == v3) {
        if (v6 - 2 != v5) {
          return;
        }
        goto LABEL_18;
      }
      if (*(v6 - 1) == v3) {
        --v6;
        goto LABEL_17;
      }
      if (*v6 == v3) {
        goto LABEL_17;
      }
      if (v6[1] == v3) {
        break;
      }
      v9 = v6 + 2;
      v6 += 4;
      if (v9 == v5) {
        goto LABEL_18;
      }
    }
    if (v6 + 1 != v5) {
      return;
    }
  }
LABEL_18:
  v10 = v2[2];
  if ((unsigned __int64)v5 >= v10) {
    v12 = (char*)v5 - v4;
    v13 = ((__int64)v5 - v4) >> 3;
    v14 = v13 + 1;
    if ((unsigned __int64)(v13 + 1) >> 61 != 0) {
      GameRoutine_6c1f60_alt1();
    }
    v15 = v10 - v4;
    v16 = fw_memory_g_heap_manager_ptr;
    if (v15 >> 2 > v14) {
      v14 = v15 >> 2;
    }
    if ((unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFF8LL) {
      v17 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v17 = v14;
    }
    if (v17 != 0) {
      if (v17 >> 61 != 0) {
        GameRoutine_60a210_alt1();
      }
      v18 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v17, 16, 0);
    }
    else {
      v18 = 0;
    }
    v19 = v18 + 8 * v17;
    v20 = (unsigned __int64)v5 - v4;
    v21 = (__int64)&v12[v18 + -8 * v13];
    *(_QWORD*)&v12[v18] = v3;
    v11 = (__int64)&v12[v18 + 8];
    memcpy_alt1(v21, v4, v20);
    *v2 = v21;
    v2[1] = v11;
    v2[2] = v19;
    if (v4 != 0) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v16 + v22, v4);
    }
  }
  else {
    *v5 = v3;
    v11 = (__int64)(v5 + 1);
  }
  v2[1] = v11;
}

__int64 game_gmap_BanquetManager_GetUnits_lambda1_Invoke(__int64 a1,
                                                         __int64* a2)
{
  __int64 result;
  __int64 v4;
  int v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[4];
  _QWORD* v13;

  result = *a2;
  v4 = *(_QWORD*)(*GameData_212c790 + 8);
  v5 = *(_DWORD*)(v4 + 56);
  v6 = *(__int64**)(v4 + 8);
  v7 = *(__int64**)(v4 + 16);
  if (v5 < 0) {
    if (v6 == v7) {
    LABEL_7:
      if (result == 0) {
        return result;
      }
      goto LABEL_15;
    }
    while (1) {
      v8 = *v6;
      if (*(_QWORD*)(*v6 + 96) == 0 && *(_QWORD*)(v8 + 552) == 0) {
        break;
      }
      if (++v6 == v7) {
        goto LABEL_7;
      }
    }
  }
  else if (v6 == v7) {
    v8 = 0;
  }
  else {
    while (1) {
      v9 = *v6++;
      v8 = v9;
      if (*(_DWORD*)(v9 + 84) == v5) {
        break;
      }
      if (v6 == v7) {
        goto LABEL_7;
      }
    }
  }
  if (v8 == result) {
    return result;
  }
LABEL_15:
  v10 = *(_QWORD*)(a1 + 8);
  v13 = v12;
  v12[0] = GameData_1fb0900;
  v12[1] = v10;
  Troop_133ed80(result, v12);
  result = (__int64)v13;
  if (v13 == v12) {
    v11 = 32;
  }
  else {
    if (v13 == nullptr) {
      return result;
    }
    v11 = 40;
  }
  return (*(__int64 (**)(__int64))(*v13 + v11))((__int64)v13);
}

__int64 game_gmap_BanquetManager_Exec_lambda0_Invoke(__int64 a1,
                                                     unsigned int* a2, int* a3)
{
  _BYTE v4[8];

  return X8CALL_X0(__int64,
                   TransporterConst_89cb30((void*)((__int64)v4), *a2, *a3));
}

void BanquetManager_Destructor(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = (_QWORD*)a1[4];
  *a1 = game_gmap_BanquetManager_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    do {
      v4 = (_QWORD*)*v1;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v5 = 128;
      }
      else {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v5, (__int64)v1);
      v1 = v4;
    } while (v4 != nullptr);
  }
  v6 = a1[2];
  a1[2] = 0;
  if (v6 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v7, v6);
  }
}

void BanquetManager_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = (_QWORD*)a1[4];
  *a1 = game_gmap_BanquetManager_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    do {
      v4 = (_QWORD*)*v1;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v5 = 128;
      }
      else {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v5, (__int64)v1);
      v1 = v4;
    } while (v4 != nullptr);
  }
  v6 = a1[2];
  a1[2] = 0;
  if (v6 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v7, v6);
  }
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v8 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v8, (__int64)a1);
}

#pragma GCC visibility pop
