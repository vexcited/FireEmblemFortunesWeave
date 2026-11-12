#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d9eb80(_QWORD);
__int64 GameRoutine_d9fe20(_QWORD);
__int64 GameRoutine_d9fe20_alt1(_QWORD*) __asm__("GameRoutine_d9fe20");
__int64 GameRoutine_f482e0(void);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_1ab0c08;
extern _UNKNOWN GameData_1adebe5;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dc58[3];
extern __int64 GameData_21c9608;
extern __int64 GameData_21f3ce0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
__int64
ScheduleManager_d9ead0_alt1(__int64 a1) __asm__("ScheduleManager_d9ead0");
void ScheduleManager_d9ed40();
__int64 ScheduleManager_d9efa0(__int64 result);
__int64 ScheduleManager_d9fd60();
_QWORD* ScheduleManager_da0320(__int64 a1);
__int64 game_hub_ScheduleManager_SetDateChangeEvent_lambda0_Invoke(__int64 a1);
__attribute__((swiftcall)) void Manager_d9ae80(PSEUDO_X8, __int64, __int64,
                                               __int64, unsigned int);
__int16* game_8697c0(__int16* result, char, float);
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 ScheduleManager_da03e0_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                    _QWORD) __asm__("ScheduleManager_da03e0");
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 sprintf(_QWORD, const char*, ...);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_1ad3661;
extern __int64 (*GameData_1fdef40[])();
extern __int64 (*GameData_1fdef70[])();
extern __int64 (*GameData_212f0b0)();
extern __int64 (*game_hub_ScheduleManager_vtable[])();
extern __int64 GameData_212c060;
extern __int64 GameData_21f3ce8;
extern __int64 GameData_22127a8;
extern int GameData_22127dc;
void ScheduleManager_da03e0_alt2(
    _QWORD*, __int64*, __int64 (**)(__int64*, __int64*), unsigned __int64,
    __int64*, signed __int64) __asm__("ScheduleManager_da03e0");
void ScheduleManager_da03e0_alt3(
    __int64*, __int64*, __int64 (**)(__int64*, __int64*), unsigned __int64,
    __int64*, signed __int64) __asm__("ScheduleManager_da03e0");
void ScheduleManager_da0880_alt1(__int64*, __int64*,
                                 __int64 (**)(__int64*, __int64*),
                                 unsigned __int64,
                                 __int64*) __asm__("ScheduleManager_da0880");
void ScheduleManager_da0c00_alt1(char*, char*, char*,
                                 __int64 (**)(char*, __int64*), __int64,
                                 __int64, char*,
                                 __int64) __asm__("ScheduleManager_da0c00");
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_da01f0(_QWORD);
void __attribute__((noreturn))
GameRoutine_da01f0_alt1() __asm__("GameRoutine_da01f0");
void ScheduleManager_Destructor(_QWORD* a1);
__int64 ScheduleManager_d9eb80(__int64 result);
__int16* ScheduleManager_d9edf0();
__attribute__((swiftcall)) void ScheduleManager_d9f100(PSEUDO_X8 x8_,
                                                       _QWORD* a1, __int16* a2);
__int64 ScheduleManager_d9f4e0(__int64 a1);
void ScheduleManager_da03e0(__int64* a1, __int64* a2,
                            __int64 (**a3)(__int64*, __int64*),
                            unsigned __int64 a4, __int64* a5,
                            signed __int64 a6);
void ScheduleManager_da0880(__int64* a1, __int64* a2,
                            __int64 (**a3)(__int64*, __int64*),
                            unsigned __int64 a4, __int64* a5);
void ScheduleManager_da0c00(char* a1, char* a2, char* a3,
                            __int64 (**a4)(char*, __int64*), __int64 a5,
                            __int64 a6, char* a7, __int64 a8);
__attribute__((swiftcall)) void
ScheduleManager_d9f100_alt1(__attribute__((swift_indirect_result)) void*,
                            _QWORD*,
                            __int16*) __asm__("ScheduleManager_d9f100");
__int64 Dir_70d7a0(_QWORD);
__int64 GameRoutine_654050(_QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*GameData_1fdefc0[])();
__int64 game_hub_ScheduleManager_SetDateChangeEvent(_QWORD* a1);
__int64 GameRoutine_1a09d20_alt1(unsigned __int64,
                                 __int64) __asm__("GameRoutine_1a09d20");
__int64 ScheduleManager_da03e0_alt4(
    __int64 result, _QWORD*, __int64 (**)(__int64*, __int64), unsigned __int64,
    __int64*, signed __int64) __asm__("ScheduleManager_da03e0");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64
game_VariableManager_SetFlag_alt1(__int64 result,
                                  int) __asm__("game_VariableManager_SetFlag");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
int sprintf_alt1(__int64, const char*, ...) __asm__("sprintf");
void ScheduleManager_d9eb80_alt1(__int64) __asm__("ScheduleManager_d9eb80");
void game_hub_ScheduleManager_SetDateChangeEvent_alt1(_QWORD*) __asm__(
    "game_hub_ScheduleManager_SetDateChangeEvent");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ScheduleManager_d9ead0(_QWORD* a1);

void ScheduleManager_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *a1 = game_hub_ScheduleManager_vtable;
  if (game_gmap_GmapClock_instance_ != 0) {
    *(_DWORD*)(game_gmap_GmapClock_instance_ + 48) = 0;
  }
  v2 = a1[12];
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = a1[7];
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = a1[3];
  if (v4 != 0) {
    v5 = a1[4];
    if (v4 == v5) {
      goto LABEL_16;
    }
    do {
      v6 = *(_QWORD*)(v5 - 8);
      if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak(v6);
      }
      v5 -= 16;
    } while (v5 != v4);
    v7 = a1[3];
    a1[4] = v4;
    if (v7 != 0) {
    LABEL_16:
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
    }
  }
  *a1 = GameData_1fdef40;
  if ((_QWORD*)GameData_21f3ce8 == a1) {
    GameData_21f3ce8 = 0;
    GameData_22127dc = 0;
  }
}

void ScheduleManager_d9ead0(_QWORD* a1)
{
  __int64 v2;
  struct {
    __int64 v3;
    void* v4;
  } v3_;

  ScheduleManager_d9eb80_alt1((__int64)a1);
  if (game_gmap_GmapClock_instance_ != 0 &&
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
          0) {
    v3_.v4 = &GameData_1ab0c08;
    v3_.v3 = game_HashString_alt1((__int64)&GameData_1ab0c08);
    if (game_GameModeData_instance_ == 0 ||
        (v2 = game_GameVariableTable_Find_alt1(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)&v3_.v3)) == 0 ||
        *(_DWORD*)(v2 + 32) == 0) {
      v3_.v4 = &GameData_1ab0c08;
      v3_.v3 = game_HashString_alt1((__int64)&GameData_1ab0c08);
      game_VariableManager_SetFlag_alt1((__int64)&v3_.v3, 1);
    }
  }
  game_hub_ScheduleManager_SetDateChangeEvent_alt1(a1);
}

__int64 ScheduleManager_d9eb80(__int64 result)
{
  _QWORD* v1;
  __int64 v2;
  __int64* v4;
  __int64 v5;
  char* v6;
  char* v7;
  char* v8;
  char* v9;
  __int64 v11;
  __int64 v12;
  _BOOL4 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  char* v19;
  char* v20;

  v1 = *(_QWORD**)GameData_212dbb8[0];
  v2 = game_gmap_GmapClock_instance_;
  if (*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 10LL) != 1 ||
      *(_DWORD*)(result + 16) > 0) {
    if (game_gmap_GmapClock_instance_ == 0) {
      return result;
    }
  LABEL_38:
    *(_DWORD*)(v2 + 48) = 0;
    return result;
  }
  if (game_gmap_GmapClock_instance_ == 0) {
    return result;
  }
  if (*(__int16*)(game_gmap_GmapClock_instance_ + 22) *
          *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
          *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
      0) {
    goto LABEL_38;
  }
  v4 = v1 + 8;
  if ((v1[8] & 1) != 0) {
    result = fw_text_String_CopyTerminated(&v18, v1[10], v1[9]);
  }
  else {
    v5 = *v4;
    v6 = (char*)v4[1];
    v7 = (char*)v4[2];
    v18 = v5;
    v19 = v6;
    v20 = v7;
  }
  v8 = v19;
  if ((v18 & 1) == 0) {
    v8 = (char*)((unsigned __int8)v18 >> 1);
  }
  if (v8 == (_BYTE*)((_UNKNOWN**)0x8LL) + 2) {
    v9 = v20;
    if ((v18 & 1) == 0) {
      v9 = (char*)&v18 + 1;
    }
    if (*(_QWORD*)v9 == *(_QWORD*)"Hub_100_A1" &&
        *((unsigned __int16*)v9 + 4) ==
            (unsigned __int64)*(unsigned __int16*)"A1") {
      v14 = true;
      if ((v18 & 1) == 0) {
        goto LABEL_36;
      }
    }
    else {
      v11 = *(_QWORD*)v9;
      v12 = *((unsigned __int16*)v9 + 4);
      v14 = v11 == *(_QWORD*)"Hub_101_A1" && v12 == *(unsigned __int16*)"A1";
      if ((v18 & 1) == 0) {
        goto LABEL_36;
      }
    }
  }
  else {
    v14 = false;
    if ((v18 & 1) == 0) {
      goto LABEL_36;
    }
  }
  if (v20 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v20);
  }
LABEL_36:
  if (v14) {
    v2 = game_gmap_GmapClock_instance_;
    if (game_gmap_GmapClock_instance_ == 0) {
      return result;
    }
    goto LABEL_38;
  }
  v19 = (char*)&GameData_1ad3661;
  result = game_HashString(&GameData_1ad3661);
  v16 = game_gmap_GmapClock_instance_;
  v18 = result;
  if (game_gmap_GmapClock_instance_ != 0) {
    v17 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      result = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &v18);
      if (result != 0) {
        v17 = *(_DWORD*)(result + 32);
      }
      else {
        v17 = 0;
      }
    }
    *(_DWORD*)(v16 + 48) = v17;
  }
  return result;
}

void ScheduleManager_d9ed40()
{
  __int64 v0;
  struct {
    __int64 v1;
    void* v2;
  } v1_;

  if (game_gmap_GmapClock_instance_ != 0 &&
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
          0) {
    v1_.v2 = &GameData_1ab0c08;
    v1_.v1 = game_HashString_alt1((__int64)&GameData_1ab0c08);
    if (game_GameModeData_instance_ == 0 ||
        (v0 = game_GameVariableTable_Find_alt1(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)&v1_.v1)) == 0 ||
        *(_DWORD*)(v0 + 32) == 0) {
      v1_.v2 = &GameData_1ab0c08;
      v1_.v1 = game_HashString_alt1((__int64)&GameData_1ab0c08);
      game_VariableManager_SetFlag_alt1((__int64)&v1_.v1, 1);
    }
  }
}

__int16* ScheduleManager_d9edf0()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int16 v1;
  __int16 v2;
  float v3;
  __int64 v4;
  char* v5;
  __int64 v6;
  char* v7;
  __int64 v9;
  __int64 v10;
  _BOOL4 v12;
  __int64 v13;
  struct {
    __int64 v15;
    int v16;
  } v15_;
  struct {
    __int64 v17;
    __int64 v18;
    char* v19;
  } v17_;

  v0 = game_gmap_GmapClock_instance_ + 8;
  if (game_gmap_GmapClock_instance_ == 0) {
    v0 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v15_.v15 = *(_QWORD*)v0;
  v1 = *(_WORD*)(v0 + 8);
  v2 = *(_WORD*)(v0 + 10);
  LOWORD(v15_.v16) = v1;
  HIWORD(v15_.v16) = v2;
  if (game_gmap_GmapClock_instance_ != 0) {
    v3 = *(float*)(game_gmap_GmapClock_instance_ + 44);
  }
  else {
    v3 = 0x0.0p+0f;
  }
  if ((*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 64LL) & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(
        &v17_.v17, *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 80LL),
        *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 72LL));
  }
  else {
    v4 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 72LL);
    v5 = *(char**)(*(_QWORD*)GameData_212dbb8[0] + 80LL);
    v17_.v17 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 64LL);
    v17_.v18 = v4;
    v17_.v19 = v5;
  }
  v6 = v17_.v18;
  if ((v17_.v17 & 1) == 0) {
    v6 = (unsigned __int8)v17_.v17 >> 1;
  }
  if (v6 == 10) {
    v7 = v17_.v19;
    if ((v17_.v17 & 1) == 0) {
      v7 = (char*)&v17_.v17 + 1;
    }
    if (*(_QWORD*)v7 == *(_QWORD*)"Hub_100_A1" &&
        *((unsigned __int16*)v7 + 4) ==
            (unsigned __int64)*(unsigned __int16*)"A1") {
      v12 = true;
      if ((v17_.v17 & 1) == 0) {
        goto LABEL_33;
      }
    }
    else {
      v9 = *(_QWORD*)v7;
      v10 = *((unsigned __int16*)v7 + 4);
      v12 = v9 == *(_QWORD*)"Hub_101_A1" && v10 == *(unsigned __int16*)"A1";
      if ((v17_.v17 & 1) == 0) {
        goto LABEL_33;
      }
    }
  }
  else {
    v12 = false;
    if ((v17_.v17 & 1) == 0) {
      goto LABEL_33;
    }
  }
  if (v17_.v19 != nullptr) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v13);
  }
LABEL_33:
  if (v12) {
    v15_.v16 = 55;
    v15_.v15 = 0xB0014000C05ADLL;
  }
  return game_8697c0((__int16*)&v15_.v15, 0, v3);
}

__int64 ScheduleManager_d9efa0(__int64 result)
{
  __int64 v1;
  __int16* v2;
  __int64 v3;
  int v4;
  __int64 v5;

  v1 = result;
  if (game_gmap_GmapClock_instance_ != 0) {
    v2 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v2 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if (*(_BYTE*)(result + 116) != 1) {
    goto LABEL_12;
  }
  if (((__int64)v2[1] << 24) + ((__int64)*v2 << 32) + ((__int64)v2[2] << 18) +
          ((__int64)v2[3] << 12) + ((__int64)v2[4] << 6) + v2[5] >=
      (unsigned __int64)(((__int64)*(__int16*)(result + 106) << 24) +
                         ((__int64)*(__int16*)(result + 104) << 32) +
                         ((__int64)*(__int16*)(result + 108) << 18) +
                         ((__int64)*(__int16*)(result + 110) << 12) +
                         ((__int64)*(__int16*)(result + 112) << 6) +
                         *(__int16*)(result + 114))) {
    goto LABEL_11;
  }
  v3 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 216LL);
  if ((*(_BYTE*)(*(_QWORD*)GameData_212dc58[0] + 80LL) & 1) == 0) {
    *(_BYTE*)(*(_QWORD*)GameData_212dc58[0] + 80LL) = 1;
  }
  v4 = *(_DWORD*)(v3 + 232);
  if (v4 <= 2) {
    v4 = 2;
  }
  *(_DWORD*)(v3 + 232) = v4;
  GameRoutine_f482e0();
  result = GameRoutine_d9fe20(v1);
  if (*(_BYTE*)(v1 + 116) == 1) {
  LABEL_11:
    v5 = *(_QWORD*)v2;
    *(_DWORD*)(v1 + 112) = *((_DWORD*)v2 + 2);
    *(_QWORD*)(v1 + 104) = v5;
  }
  else {
  LABEL_12:
    *(_WORD*)(v1 + 104) = *v2;
    *(_WORD*)(v1 + 106) = v2[1];
    *(_WORD*)(v1 + 108) = v2[2];
    *(_WORD*)(v1 + 110) = v2[3];
    *(_WORD*)(v1 + 112) = v2[4];
    *(_WORD*)(v1 + 114) = v2[5];
    *(_BYTE*)(v1 + 116) = 1;
  }
  return result;
}

__attribute__((swiftcall)) void ScheduleManager_d9f100(PSEUDO_X8 x8_,
                                                       _QWORD* a1, __int16* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int16* v12;
  __int64* v13;
  unsigned __int64 v14;
  _QWORD* v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64* v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int16* v34;
  __int16* v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64* v39;
  signed __int64 v40;
  bool v41;
  __int64 v42;
  __int64 v43;
  char v44[256];
  __int64 (*v45[33])(__int64*, __int64);

  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16, 0);
  v8 = v7;
  *(_QWORD*)(v7 + 8) = 0;
  *(_QWORD*)(v7 + 16) = 0;
  *(_QWORD*)v7 = GameData_1fdef70;
  *(_QWORD*)(v7 + 32) = *(_QWORD*)a2;
  v9 = v7 + 32;
  *(_DWORD*)(v7 + 40) = *((_DWORD*)a2 + 2);
  if ((a2[8] & 1) != 0) {
    fw_text_String_CopyTerminated_alt1((__int64*)(v7 + 48), *((_QWORD*)a2 + 4),
                                       *((_QWORD*)a2 + 3));
    v12 = *((__int16**)a2 + 10);
    if (v12 == nullptr) {
      goto LABEL_3;
    }
  }
  else {
    v10 = *((_QWORD*)a2 + 3);
    v11 = *((_QWORD*)a2 + 4);
    *(_QWORD*)(v7 + 48) = *((_QWORD*)a2 + 2);
    *(_QWORD*)(v7 + 56) = v10;
    *(_QWORD*)(v7 + 64) = v11;
    v12 = *((__int16**)a2 + 10);
    if (v12 == nullptr) {
    LABEL_3:
      *(_QWORD*)(v8 + 112) = 0;
      goto LABEL_8;
    }
  }
  if (v12 == a2 + 24) {
    *(_QWORD*)(v8 + 112) = v8 + 80;
    (*(void (**)(__int16*))(*(_QWORD*)v12 + 24LL))(v12);
  }
  else {
    *(_QWORD*)(v8 + 112) =
        (*(__int64 (**)(__int16*))(*(_QWORD*)v12 + 16LL))(v12);
  }
LABEL_8:
  *(_DWORD*)(v8 + 128) = *((_DWORD*)a2 + 24);
  *(_BYTE*)(v8 + 132) = *((_BYTE*)a2 + 100);
  v13 = (__int64*)a1[4];
  v14 = a1[5];
  if ((unsigned __int64)v13 >= v14) {
    v16 = a1[3];
    v17 = (unsigned __int64)v13 - v16;
    v18 = ((__int64)v13 - v16) >> 4;
    v19 = v18 + 1;
    if ((unsigned __int64)(v18 + 1) >> 60 != 0) {
      GameRoutine_da01f0_alt1();
    }
    v20 = v14 - v16;
    if (v20 >> 3 > v19) {
      v19 = v20 >> 3;
    }
    if ((unsigned __int64)v20 >= 0x7FFFFFFFFFFFFFF0LL) {
      v21 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v21 = v19;
    }
    if (v21 >> 60 != 0) {
      GameRoutine_60a210_alt1();
    }
    v22 = fw_memory_HeapManager_Allocate_alt1(*v6, 16 * v21, 16, 0);
    v23 = (__int64*)(v22 + v17);
    v24 = v22 + 16 * v21;
    *v23 = v9;
    v23[1] = v8;
    v25 = v22 + v17 - 16 * v18;
    v15 = (_QWORD*)(v22 + v17 + 16);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
    memcpy_alt1(v25, v16, v17);
    a1[3] = v25;
    a1[4] = v15;
    a1[5] = v24;
    v6 = (__int64*)fw_memory_g_heap_manager_ptr;
    if (v16 != 0) {
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v16);
    }
  }
  else {
    *v13 = v9;
    v13[1] = v8;
    v15 = v13 + 2;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
  }
  a1[4] = v15;
  v27 = game_gmap_GmapClock_kDefaultTime_ptr;
  v28 = a2[1];
  v29 = *a2;
  v30 = a2[2];
  v31 = a2[3];
  v32 = a2[4];
  v33 = a2[5];
  if (game_gmap_GmapClock_instance_ != 0) {
    v34 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v34 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if ((v28 << 24) + (v29 << 32) + (v30 << 18) + (v31 << 12) + (v32 << 6) + v33 <
      (unsigned __int64)(((__int64)v34[1] << 24) + ((__int64)*v34 << 32) +
                         ((__int64)v34[2] << 18) + ((__int64)v34[3] << 12) +
                         ((__int64)v34[4] << 6) + v34[5])) {
    sprintf_alt1((__int64)v45, "%04d/%02d/%02d %02d:%02d:%02d", v29, v28, v30,
                 v31, v32, v33);
    if (game_gmap_GmapClock_instance_ != 0) {
      v35 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
    }
    else {
      v35 = (__int16*)v27;
    }
    sprintf_alt1((__int64)v44, "%04d/%02d/%02d %02d:%02d:%02d",
                 (unsigned int)*v35, (unsigned int)v35[1], (unsigned int)v35[2],
                 (unsigned int)v35[3], (unsigned int)v35[4],
                 (unsigned int)v35[5]);
    v15 = (_QWORD*)a1[4];
  }
  v36 = a1[3];
  v45[0] = (__int64 (*)(__int64*, __int64))GameData_212f0b0;
  if (((__int64)v15 - v36) >> 4 < 1) {
    v40 = 0;
  LABEL_35:
    ScheduleManager_da03e0_alt4(v36, v15, v45, ((__int64)v15 - v36) >> 4,
                                nullptr, v40);
  }
  else {
    v37 = ((__int64)v15 - v36) >> 4;
    v38 = GameData_212c060;
    while (1) {
      v39 = (__int64*)GameRoutine_1a09d20_alt1(16 * v37, v38);
      if (v39 != nullptr) {
        break;
      }
      v40 = v37 >> 1;
      v41 = v37 > 1;
      v37 >>= 1;
      if (!v41) {
        goto LABEL_35;
      }
    }
    v42 = (__int64)v39;
    ScheduleManager_da03e0_alt4(v36, v15, v45, ((__int64)v15 - v36) >> 4, v39,
                                v37);
    v43 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v6 + v43, v42);
  }
  *a3 = v9;
  a3[1] = v8;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                            memory_order_relaxed);
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt1(v8);
  }
}

__int64 ScheduleManager_d9f4e0(__int64 a1)
{
  __int16** v1;
  __int16** v2;
  __int16** v4;
  __int16** v5;
  __int16* v7;
  __int16* v8;
  __int16* v9;
  __int64 v10;
  __int16* v11;
  __int64* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int16* v16;
  signed __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64* v22;
  __int16* v23;
  __int64* v24;
  __int64 v25;
  signed __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64* v29;
  signed __int64 v30;
  bool v31;
  __int64* v32;
  __int64 v33;
  __int64* i;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64* v43;
  __int64* v44;
  __int64* j;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64* v49;
  atomic_ullong* v50;
  unsigned int v51;
  __int64 v52;
  __int64 v53;
  unsigned int v54;
  __int64 v55;
  __int64* v57;
  __int64 (*v58[3])(__int64*, __int64*);

  v1 = *(__int16***)(a1 + 24);
  v2 = *(__int16***)(a1 + 32);
  v4 = v1;
  if (v1 != v2) {
    v4 = *(__int16***)(a1 + 24);
    while (((*v4)[50] & 1) == 0) {
      v4 += 2;
      if (v4 == v2) {
        goto LABEL_19;
      }
    }
  }
  v5 = v4 + 2;
  if (v4 != v2 && v5 != v2) {
    do {
      v7 = *v5;
      if (((*v5)[50] & 1) == 0) {
        v8 = v5[1];
        *v5 = nullptr;
        v5[1] = nullptr;
        v9 = v4[1];
        *v4 = v7;
        v4[1] = v8;
        if (v9 != nullptr && atomic_fetch_add((atomic_ullong* volatile)(v9 + 4),
                                              0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int16*))(*(_QWORD*)v9 + 16LL))(v9);
          std___1___shared_weak_count___release_weak(v9);
        }
        v4 += 2;
      }
      v5 += 2;
    } while (v5 != v2);
    v1 = *(__int16***)(a1 + 24);
    v2 = *(__int16***)(a1 + 32);
  }
  if (v4 == v2) {
  LABEL_19:
    v4 = v2;
  }
  else {
    do {
      v10 = (__int64)*(v2 - 1);
      if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
      v2 -= 2;
    } while (v2 != v4);
    v1 = *(__int16***)(a1 + 24);
    *(_QWORD*)(a1 + 32) = v4;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v11 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v11 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if (v1 == v4) {
    v12 = nullptr;
    v57 = nullptr;
  }
  else {
    v12 = nullptr;
    v13 = 0;
    v57 = nullptr;
    v14 = ((__int64)v11[1] << 24) + ((__int64)*v11 << 32) +
          ((__int64)v11[2] << 18) + ((__int64)v11[3] << 12) +
          ((__int64)v11[4] << 6) + v11[5];
    do {
      v15 = (__int64)*v1;
      if (((__int64)(*v1)[1] << 24) + ((__int64)**v1 << 32) +
              ((__int64)(*v1)[2] << 18) + ((__int64)(*v1)[3] << 12) +
              ((__int64)(*v1)[4] << 6) + (*v1)[5] <=
          v14) {
        if ((unsigned __int64)v12 >= v13) {
          v17 = (char*)v12 - (char*)v57;
          v18 = ((char*)v12 - (char*)v57) >> 4;
          v19 = v18 + 1;
          if ((unsigned __int64)(v18 + 1) >> 60 != 0) {
            GameRoutine_da01f0_alt1();
          }
          if ((__int64)(v13 - (_QWORD)v57) >> 3 > v19) {
            v19 = (__int64)(v13 - (_QWORD)v57) >> 3;
          }
          if (v13 - (unsigned __int64)v57 >= 0x7FFFFFFFFFFFFFF0LL) {
            v20 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v20 = v19;
          }
          if (v20 >> 60 != 0) {
            GameRoutine_60a210_alt1();
          }
          v21 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v20, 16, 0);
          v22 = (__int64*)(v21 + v17);
          *v22 = v15;
          v23 = v1[1];
          v22[1] = (__int64)v23;
          if (v23 != nullptr) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 4), 1u,
                                      memory_order_relaxed);
          }
          v24 = &v22[-2 * v18];
          v13 = v21 + 16 * v20;
          v12 = v22 + 2;
          memcpy(v24, v57, v17);
          if (v57 != nullptr) {
            v25 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v25 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v25);
          }
          v57 = v24;
        }
        else {
          *v12 = v15;
          v16 = v1[1];
          v12[1] = (__int64)v16;
          if (v16 != nullptr) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 4), 1u,
                                      memory_order_relaxed);
          }
          v12 += 2;
        }
      }
      v1 += 2;
    } while (v1 != v4);
  }
  v58[0] = (__int64 (*)(__int64*, __int64*))GameData_212f0b0;
  v26 = ((char*)v12 - (char*)v57) >> 4;
  if (v26 < 1) {
    v30 = 0;
  LABEL_58:
    v32 = v57;
    ScheduleManager_da03e0_alt2(v57, v12, v58, v26, nullptr, v30);
  }
  else {
    v27 = ((char*)v12 - (char*)v57) >> 4;
    v28 = GameData_212c060;
    while (1) {
      v29 = (__int64*)GameRoutine_1a09d20(16 * v27, v28);
      if (v29 != nullptr) {
        break;
      }
      v30 = v27 >> 1;
      v31 = v27 > 1;
      v27 >>= 1;
      if (!v31) {
        goto LABEL_58;
      }
    }
    ScheduleManager_da03e0_alt2(v57, v12, v58, v26, v29, v27);
    v32 = v57;
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v33);
  }
  *(_BYTE*)(a1 + 64) = 0;
  if (v32 == v12) {
    v54 = 0;
    v51 = 0;
    if (v12 != nullptr) {
      goto LABEL_121;
    }
    return v51;
  }
  for (i = v32; i != v12; i += 2) {
    v35 = *i;
    if ((*(_BYTE*)(*i + 100) & 1) == 0) {
      v36 = *(unsigned __int8*)(v35 + 16);
      if ((v36 & 1) != 0) {
        v37 = *(_QWORD*)(v35 + 24);
      }
      else {
        v37 = v36 >> 1;
      }
      if (v37 != 0) {
        if (*(_QWORD*)GameData_212dbb8[0] != 0) {
          v38 = *(_QWORD*)GameData_212dbb8[0] + 248LL;
        }
        else {
          v38 = 0;
        }
        if (GameData_22127a8 != 0) {
          v39 = GameData_22127a8;
        }
        else {
          v39 = v38;
        }
        if ((v36 & 1) != 0) {
          v40 = *(_QWORD*)(v35 + 32);
        }
        else {
          v40 = v35 + 17;
        }
        Manager_d9ae80((void*)((__int64)v58), v39, v40, v37, 0);
      }
      v41 = *(_QWORD*)(v35 + 80);
      if (v41 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v41 + 48LL))(v41);
      }
      *(_BYTE*)(v35 + 100) = 1;
      v35 = *i;
    }
    v42 = i[1];
    if (v42 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v42 + 8), 1u,
                                memory_order_relaxed);
      v44 = *(__int64**)(a1 + 24);
      v43 = *(__int64**)(a1 + 32);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v42 + 8), 1u,
                                memory_order_relaxed);
      if (v44 != v43) {
        goto LABEL_86;
      }
    }
    else {
      v44 = *(__int64**)(a1 + 24);
      v43 = *(__int64**)(a1 + 32);
      if (v44 != v43) {
      LABEL_86:
        while (*v44 != v35) {
          v44 += 2;
          if (v44 == v43) {
            v44 = v43;
            goto LABEL_98;
          }
        }
      }
    }
    if (v44 != v43) {
      for (j = v44 + 2; j != v43; j += 2) {
        v46 = *j;
        if (*j != v35) {
          v47 = j[1];
          *j = 0;
          j[1] = 0;
          v48 = v44[1];
          *v44 = v46;
          v44[1] = v47;
          if (v48 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
            std___1___shared_weak_count___release_weak(v48);
          }
          v44 += 2;
        }
      }
    }
  LABEL_98:
    v49 = *(__int64**)(a1 + 32);
    if (v44 != v49) {
      do {
        v52 = *(v49 - 1);
        if (v52 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52);
          std___1___shared_weak_count___release_weak(v52);
        }
        v49 -= 2;
      } while (v49 != v44);
      *(_QWORD*)(a1 + 32) = v44;
    }
    if (v42 == 0) {
    LABEL_104:
      v51 = *(unsigned __int8*)(a1 + 64);
      if ((v51 & 1) != 0) {
        break;
      }
      continue;
    }
    v50 = (atomic_ullong*)(v42 + 8);
    if (atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (atomic_fetch_add(v50, 0xFFFFFFFFFFFFFFFFLL) != 0) {
        goto LABEL_104;
      }
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
      std___1___shared_weak_count___release_weak(v42);
      if (atomic_fetch_add(v50, 0xFFFFFFFFFFFFFFFFLL) != 0) {
        goto LABEL_104;
      }
    }
    (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
    std___1___shared_weak_count___release_weak(v42);
    v51 = *(unsigned __int8*)(a1 + 64);
    if ((v51 & 1) != 0) {
      break;
    }
  }
  if (v57 != nullptr) {
    do {
      v53 = *(v12 - 1);
      if (v53 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v53 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
        std___1___shared_weak_count___release_weak(v53);
      }
      v12 -= 2;
    } while (v12 != v57);
    v54 = v51;
  LABEL_121:
    v55 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v55 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v55);
    return v54;
  }
  return v51;
}

__int64 ScheduleManager_d9fd60()
{
  unsigned __int64 v0;
  unsigned __int64 v1;
  __int64 result;
  unsigned __int64 v3[4];

  if (*(_BYTE*)(GameData_21c9608 + 304) != 1) {
    return 0;
  }
  if (game_gmap_GmapClock_instance_ != 0 &&
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
          0) {
    return 1;
  }
  v3[2] = v0;
  v3[3] = v1;
  v3[1] = (unsigned __int64)&GameData_1adebe5;
  v3[0] = game_HashString_alt1((__int64)&GameData_1adebe5);
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  result = game_GameVariableTable_Find_alt1(
      *(_QWORD**)(game_GameModeData_instance_ + 48), v3);
  if (result != 0) {
    return *(_DWORD*)(result + 32) != 0;
  }
  return result;
}

__int64 game_hub_ScheduleManager_SetDateChangeEvent(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64* i;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  atomic_ullong* v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int16 v18;
  __int64 v19;
  __int64 v20;
  __n128 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 result;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _BYTE v32[32];
  _BYTE* v33;
  int v34;
  char v35;
  __int64 v36;
  int v37;
  __int64 (**v38)();
  _QWORD* v39;
  __int64* v40;

  v2 = a1[7];
  if (v2 == 0) {
    a1[6] = 0;
    a1[7] = 0;
    goto LABEL_31;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 != 0) {
    v4 = a1[6];
    v5 = v3;
    if (v4 == 0) {
      goto LABEL_27;
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    v6 = (__int64*)a1[3];
    v7 = (__int64*)a1[4];
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    if (v6 != v7) {
      while (*v6 != v4) {
        v6 += 2;
        if (v6 == v7) {
          v6 = v7;
          goto LABEL_18;
        }
      }
    }
    if (v6 != v7) {
      for (i = v6 + 2; i != v7; i += 2) {
        v9 = *i;
        if (*i != v4) {
          v10 = i[1];
          *i = 0;
          i[1] = 0;
          v11 = v6[1];
          *v6 = v9;
          v6[1] = v10;
          if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
            std___1___shared_weak_count___release_weak(v11);
          }
          v6 += 2;
        }
      }
    }
  LABEL_18:
    v12 = (__int64*)a1[4];
    if (v6 != v12) {
      do {
        v13 = *(v12 - 1);
        if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          std___1___shared_weak_count___release_weak(v13);
        }
        v12 -= 2;
      } while (v12 != v6);
      a1[4] = v6;
    }
    v14 = (atomic_ullong*)(v5 + 8);
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (atomic_fetch_add(v14, 0xFFFFFFFFFFFFFFFFLL) != 0) {
        goto LABEL_27;
      }
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak(v5);
      if (atomic_fetch_add(v14, 0xFFFFFFFFFFFFFFFFLL) != 0) {
        goto LABEL_27;
      }
    }
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  LABEL_27:
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak(v5);
    }
  }
  v15 = a1[7];
  a1[6] = 0;
  a1[7] = 0;
  if (v15 != 0) {
    std___1___shared_weak_count___release_weak(v15);
  }
LABEL_31:
  if (game_gmap_GmapClock_instance_ != 0) {
    v16 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v16 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v17 = *(_DWORD*)v16;
  v18 = *(_WORD*)(v16 + 4);
  v37 = 0;
  LODWORD(v36) = v17;
  HIDWORD(v36) = (unsigned __int16)(v18 + 1);
  Dir_70d7a0(&v36);
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v33 = nullptr;
  v34 = 0;
  v35 = 0;
  v40 = (__int64*)&v38;
  v27 = v36;
  v28 = v37;
  v38 = GameData_1fdefc0;
  v39 = a1;
  GameRoutine_654050(&v38, v32);
  if (v40 == (__int64*)&v38) {
    v20 = 32;
  }
  else {
    if (v40 == nullptr) {
      goto LABEL_39;
    }
    v20 = 40;
  }
  (*(void (**)(__int64*, __int64))(*v40 + v20))(v40, v19);
LABEL_39:
  v34 = 0;
  v21 = X8CALL_V0(__n128, ScheduleManager_d9f100_alt1((void*)((__int64*)&v38),
                                                      a1, (__int16*)&v27));
  v22 = v39;
  v23 = a1[7];
  a1[6] = v38;
  a1[7] = v22;
  if (v23 != 0) {
    v21 = std___1___shared_weak_count___release_weak(v23);
  }
  result = (__int64)v33;
  if (v33 == v32) {
    v25 = 32;
    goto LABEL_45;
  }
  if (v33 != nullptr) {
    v25 = 40;
  LABEL_45:
    result = (*(__int64 (**)(void*))(*(_QWORD*)v33 + v25))((void*)v33);
  }
  if ((v29 & 1) != 0 && v31 != 0) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v31);
  }
  return result;
}

_QWORD* ScheduleManager_da0320(__int64 a1)
{
  _QWORD* v2;
  _QWORD* result;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v2 = (_QWORD*)(a1 + 80);
  result = *(_QWORD**)(a1 + 112);
  if (result == v2) {
    v4 = 32;
    goto LABEL_5;
  }
  if (result != nullptr) {
    v4 = 40;
  LABEL_5:
    result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v4))((__int64)result);
  }
  if ((*(_BYTE*)(a1 + 48) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 64);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v5);
    }
  }
  return result;
}

void ScheduleManager_da03e0(__int64* a1, __int64* a2,
                            __int64 (**a3)(__int64*, __int64*),
                            unsigned __int64 a4, __int64* a5, signed __int64 a6)
{

#pragma clang fp contract(off)
  __int64* v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v14;
  __int64* v16;
  __int64 v17;
  __int64* v18;
  __int64* v19;
  __n128 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64* v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64* v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64* v52;
  __int64 v53;
  __int64 v54;
  struct {
    __int64 v55;
    __int64 v56;
  } v55_;

  if (a4 >= 2) {
    v8 = a1;
    if (a4 == 2) {
      if ((((__int64 (*)(__int64*, __int64*, __int64 (**)(__int64*, __int64*),
                         __int64, __int64*, signed __int64))*a3)(a2 - 2, a1, a3,
                                                                 2, a5, a6) &
           1) != 0) {
        v9 = *v8;
        *v8 = *(a2 - 2);
        *(a2 - 2) = v9;
        v10 = v8[1];
        v8[1] = *(a2 - 1);
        *(a2 - 1) = v10;
      }
    }
    else {
      v11 = a4;
      if ((__int64)a4 <= 0) {
        if (a1 != a2) {
          v16 = a1 + 2;
          if (a1 + 2 != a2) {
            v17 = 0;
            v18 = a1;
            do {
              v19 = v16;
              if ((((__int64 (*)(
                       __int64*, __int64*, __int64 (**)(__int64*, __int64*),
                       unsigned __int64, __int64*, signed __int64))*a3)(
                       v16, v18, a3, a4, a5, a6) &
                   1) != 0) {
                v21 = *v19;
                v22 = v18[3];
                *v19 = 0;
                v19[1] = 0;
                v23 = v17;
                v55_.v55 = v21;
                v55_.v56 = v22;
                while (1) {
                  v24 = (__int64*)((char*)v8 + v23);
                  v25 = *(__int64*)((char*)v8 + v23);
                  v26 = *(__int64*)((char*)v8 + v23 + 8);
                  v27 = *(__int64*)((char*)v8 + v23 + 24);
                  *v24 = 0;
                  v24[1] = 0;
                  v24[2] = v25;
                  v24[3] = v26;
                  if (v27 != 0 &&
                      atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
                    v20 = std___1___shared_weak_count___release_weak(v27);
                  }
                  if (v23 == 0) {
                    break;
                  }
                  v23 -= 16;
                  if ((((__int64 (*)(__int64*, char*, long double))*a3)(
                           &v55_.v55, (char*)v8 + v23, *(long double*)&v20) &
                       1) == 0) {
                    v28 = (__int64*)((char*)v8 + v23 + 16);
                    goto LABEL_22;
                  }
                }
                v28 = v8;
              LABEL_22:
                v29 = v55_.v55;
                v30 = v55_.v56;
                v31 = v28[1];
                v55_.v55 = 0;
                v55_.v56 = 0;
                *v28 = v29;
                v28[1] = v30;
                if (v31 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
                  v20 = std___1___shared_weak_count___release_weak(v31);
                }
                v32 = v55_.v56;
                if (v55_.v56 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v55_.v56 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64, long double))(*(_QWORD*)v32 + 16LL))(
                      v32, *(long double*)&v20);
                  std___1___shared_weak_count___release_weak(v32);
                }
              }
              v16 = v19 + 2;
              v17 += 16;
              v18 = v19;
            } while (v19 + 2 != a2);
          }
        }
      }
      else {
        v12 = a4 >> 1;
        v14 = a4 - (a4 >> 1);
        if ((__int64)a4 <= a6) {
          ScheduleManager_da0880_alt1(a1, &a1[2 * v12], a3, a4 >> 1, a5);
          v33 = &a5[2 * v12];
          ScheduleManager_da0880_alt1(&v8[2 * v12], a2, a3, v11 - (v11 >> 1),
                                      v33);
          v34 = &a5[2 * v11];
          v38 = v33;
          v39 = a5;
          while (v38 != v34) {
            if (((*a3)(v38, v39) & 1) != 0) {
              v40 = *v38;
              v41 = v38[1];
              *v38 = 0;
              v38[1] = 0;
              v42 = v8[1];
              *v8 = v40;
              v8[1] = v41;
              if (v42 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
                std___1___shared_weak_count___release_weak(v42);
              }
              v38 += 2;
            }
            else {
              v43 = *v39;
              v44 = v39[1];
              *v39 = 0;
              v39[1] = 0;
              v45 = v8[1];
              *v8 = v43;
              v8[1] = v44;
              if (v45 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
                std___1___shared_weak_count___release_weak(v45);
              }
              v39 += 2;
            }
            v8 += 2;
            if (v39 == v33) {
              for (; v38 != v34; v8 += 2) {
                v35 = *v38;
                v36 = v38[1];
                *v38 = 0;
                v38[1] = 0;
                v37 = v8[1];
                *v8 = v35;
                v8[1] = v36;
                if (v37 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
                  std___1___shared_weak_count___release_weak(v37);
                }
                v38 += 2;
              }
              goto LABEL_52;
            }
          }
          if (v39 != v33) {
            v46 = 0;
            do {
              v47 = &v39[v46];
              v48 = &v8[v46];
              v49 = v39[v46];
              v50 = v39[v46 + 1];
              *v47 = 0;
              v47[1] = 0;
              v51 = v8[v46 + 1];
              *v48 = v49;
              v48[1] = v50;
              if (v51 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51);
                std___1___shared_weak_count___release_weak(v51);
              }
              v46 += 2;
            } while (v47 + 2 != v33);
          }
        LABEL_52:
          v52 = a5 + 1;
          do {
            v54 = *v52;
            v52 += 2;
            v53 = v54;
            if (v54 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v53 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
              std___1___shared_weak_count___release_weak(v53);
            }
            --v11;
          } while (v11 != 0);
        }
        else {
          ScheduleManager_da03e0(a1, &a1[2 * v12], a3, a4 >> 1, a5, a6);
          ScheduleManager_da03e0(&v8[2 * v12], a2, a3, v14, a5, a6);
          ScheduleManager_da0c00_alt1((char*)v8, (char*)&v8[2 * v12], (char*)a2,
                                      (__int64 (**)(char*, __int64*))a3, v12,
                                      v14, (char*)a5, a6);
        }
      }
    }
  }
}

void ScheduleManager_da0880(__int64* a1, __int64* a2,
                            __int64 (**a3)(__int64*, __int64*),
                            unsigned __int64 a4, __int64* a5)
{
  __int64* v5;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64* v28;
  unsigned __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64* v32;
  __int64* v33;

  if (a4 != 0) {
    v5 = a5;
    v8 = a1;
    if (a4 == 2) {
      v9 = a2 - 2;
      if (((*a3)(a2 - 2, a1) & 1) != 0) {
        *v5 = *(a2 - 2);
        v5[1] = *(a2 - 1);
        *v9 = 0;
        *(a2 - 1) = 0;
        v5[2] = *v8;
        v10 = v8[1];
      }
      else {
        *v5 = *v8;
        v5[1] = v8[1];
        *v8 = 0;
        v8[1] = 0;
        v8 = a2 - 2;
        v5[2] = *(a2 - 2);
        v10 = *(a2 - 1);
      }
      v5[3] = v10;
      goto LABEL_27;
    }
    if (a4 == 1) {
      *a5 = *a1;
      a5[1] = a1[1];
    LABEL_27:
      *v8 = 0;
      v8[1] = 0;
      return;
    }
    if ((__int64)a4 > 8) {
      v26 = a4 >> 1;
      v28 = &a1[2 * (a4 >> 1)];
      v29 = 16 * (a4 >> 1);
      ScheduleManager_da03e0_alt3(a1, v28, a3, v26, a5, v26);
      ScheduleManager_da03e0_alt3(v28, a2, a3, a4 - v26, &v5[2 * v26],
                                  a4 - v26);
      if (v29 != 0) {
        v30 = v28;
        while (v30 != a2) {
          if (((*a3)(v30, v8) & 1) != 0) {
            *v5 = *v30;
            v5[1] = v30[1];
            *v30 = 0;
            v30[1] = 0;
            v30 += 2;
          }
          else {
            *v5 = *v8;
            v5[1] = v8[1];
            *v8 = 0;
            v8[1] = 0;
            v8 += 2;
          }
          v5 += 2;
          if (v8 == v28) {
            goto LABEL_38;
          }
        }
        if (v8 != v28) {
          v31 = 0;
          do {
            v32 = &v8[v31];
            v33 = &v5[v31];
            v31 += 2;
            *v33 = *v32;
            v33[1] = v32[1];
            *v32 = 0;
            v32[1] = 0;
          } while (v32 + 2 != v28);
        }
      }
      else {
        v30 = v28;
      LABEL_38:
        while (v30 != a2) {
          *v5 = *v30;
          v5[1] = v30[1];
          *v30 = 0;
          v30[1] = 0;
          v30 += 2;
          v5 += 2;
        }
      }
    }
    else if (a1 != a2) {
      *a5 = *a1;
      a5[1] = a1[1];
      v11 = a1 + 2;
      *a1 = 0;
      a1[1] = 0;
      if (a1 + 2 != a2) {
        v12 = 0;
        v13 = a5;
        do {
          v14 = v8;
          v8 = v11;
          if (((*a3)(v11, v13) & 1) != 0) {
            v15 = *v13;
            v16 = v13[1];
            *v13 = 0;
            v13[1] = 0;
            v17 = v5;
            v13[2] = v15;
            v13[3] = v16;
            if (v13 != v5) {
              v18 = v12;
              while (1) {
                v17 = (__int64*)((char*)v5 + v18);
                v19 = (__int64*)((char*)v5 + v18 - 16);
                if (((*a3)(v8, v19) & 1) == 0) {
                  break;
                }
                v20 = *v19;
                v21 = *(v17 - 1);
                *v19 = 0;
                *(__int64*)((char*)v5 + v18 - 8) = 0;
                v22 = v17[1];
                *v17 = v20;
                v17[1] = v21;
                if (v22 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
                  std___1___shared_weak_count___release_weak(v22);
                }
                v18 -= 16;
                if (v18 == 0) {
                  v17 = v5;
                  break;
                }
              }
            }
            v23 = *v8;
            v24 = v14[3];
            *v8 = 0;
            v8[1] = 0;
            v25 = v17[1];
            *v17 = v23;
            v17[1] = v24;
            if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
              std___1___shared_weak_count___release_weak(v25);
            }
          }
          else {
            v13[2] = *v8;
            v13[3] = v14[3];
            *v8 = 0;
            v8[1] = 0;
          }
          v13 += 2;
          v11 = v8 + 2;
          v12 += 16;
        } while (v8 + 2 != a2);
      }
    }
  }
}

void ScheduleManager_da0c00(char* a1, char* a2, char* a3,
                            __int64 (**a4)(char*, __int64*), __int64 a5,
                            __int64 a6, char* a7, __int64 a8)
{
  __int64 v10;
  char* v16;
  __int64 v17;
  char* v18;
  char* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 (*v22)(char*, __int64*);
  unsigned __int64 v23;
  char* v24;
  __int64 v25;
  __int64 v26;
  char* i;
  __int64 v28;
  __int64 v29;
  char* v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  _BOOL4 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  char* v39;
  __int64 v40;
  char* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  char* v45;
  char* v46;
  char* v47;
  char* v48;
  char* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  char* v55;
  char* v56;
  __int64* v57;
  char* v58;
  char* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64* v72;
  char* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  char* v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  char* v81;
  char* v82;
  char* v83;
  __int64 v84;
  __int64 v85;

  if (a6 == 0) {
    return;
  }
  v10 = a6;
  do {
    if (a5 <= a8 || v10 <= a8) {
      if (a5 <= v10) {
        if (a1 == a2) {
          return;
        }
        v44 = 0;
        v83 = a7;
        v55 = a7;
        v56 = a1;
        do {
          ++v44;
          *(_QWORD*)v55 = *(_QWORD*)v56;
          *((_QWORD*)v55 + 1) = *((_QWORD*)v56 + 1);
          *(_QWORD*)v56 = 0;
          *((_QWORD*)v56 + 1) = 0;
          v56 += 16;
          v55 += 16;
        } while (v56 != a2);
        v57 = (__int64*)a7;
        v58 = v55 - 16;
        while (a2 != a3) {
          v59 = a3;
          if (((*a4)(a2, v57) & 1) != 0) {
            v60 = *(_QWORD*)a2;
            v61 = *((_QWORD*)a2 + 1);
            *(_QWORD*)a2 = 0;
            *((_QWORD*)a2 + 1) = 0;
            v62 = *((_QWORD*)a1 + 1);
            *(_QWORD*)a1 = v60;
            *((_QWORD*)a1 + 1) = v61;
            if (v62 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v62 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v62 + 16LL))(v62);
              std___1___shared_weak_count___release_weak(v62);
            }
            a2 += 16;
          }
          else {
            v63 = *v57;
            v64 = v57[1];
            *v57 = 0;
            v57[1] = 0;
            v65 = *((_QWORD*)a1 + 1);
            *(_QWORD*)a1 = v63;
            *((_QWORD*)a1 + 1) = v64;
            if (v65 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v65 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v65 + 16LL))(v65);
              std___1___shared_weak_count___release_weak(v65);
            }
            v57 += 2;
          }
          a1 += 16;
          a3 = v59;
          if (v55 == (char*)v57) {
            goto LABEL_92;
          }
        }
        v71 = 0;
        do {
          v72 = &v57[v71];
          v73 = &a1[v71 * 8];
          v74 = v57[v71];
          v75 = v57[v71 + 1];
          *v72 = 0;
          v72[1] = 0;
          v76 = *(_QWORD*)&a1[v71 * 8 + 8];
          *(_QWORD*)v73 = v74;
          *((_QWORD*)v73 + 1) = v75;
          if (v76 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v76 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v76 + 16LL))(v76);
            std___1___shared_weak_count___release_weak(v76);
          }
          v71 += 2;
        } while (v58 != (char*)v72);
      LABEL_92:
        a7 = v83;
        goto LABEL_93;
      }
      if (a2 == a3) {
        return;
      }
      v43 = 0;
      v44 = 0;
      do {
        v45 = &a2[v43];
        v46 = &a7[v43];
        ++v44;
        v43 += 16;
        *(_QWORD*)v46 = *(_QWORD*)v45;
        *((_QWORD*)v46 + 1) = *((_QWORD*)v45 + 1);
        *(_QWORD*)v45 = 0;
        *((_QWORD*)v45 + 1) = 0;
      } while (v45 + 16 != a3);
      v47 = a3 - 8;
      v48 = &a7[v43];
      while (1) {
        if (a2 == a1) {
          for (; v48 != a7; v47 -= 16) {
            v68 = *((_QWORD*)v48 - 2);
            v69 = *((_QWORD*)v48 - 1);
            v48 -= 16;
            *(_QWORD*)v48 = 0;
            *((_QWORD*)v48 + 1) = 0;
            v70 = *(_QWORD*)v47;
            *((_QWORD*)v47 - 1) = v68;
            *(_QWORD*)v47 = v69;
            if (v70 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v70 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v70 + 16LL))(v70);
              std___1___shared_weak_count___release_weak(v70);
            }
          }
        LABEL_93:
          if (a7 != nullptr) {
            v77 = a7 + 8;
            do {
              v79 = *(_QWORD*)v77;
              v77 += 16;
              v78 = v79;
              if (v79 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v78 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v78 + 16LL))(v78);
                std___1___shared_weak_count___release_weak(v78);
              }
              --v44;
            } while (v44 != 0);
          }
          return;
        }
        v49 = v48 - 16;
        if (((*a4)(v48 - 16, (__int64*)a2 - 2) & 1) == 0) {
          break;
        }
        v50 = *((_QWORD*)a2 - 2);
        v51 = *((_QWORD*)a2 - 1);
        *((_QWORD*)a2 - 2) = 0;
        *((_QWORD*)a2 - 1) = 0;
        v52 = *(_QWORD*)v47;
        *((_QWORD*)v47 - 1) = v50;
        *(_QWORD*)v47 = v51;
        if (v52 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          a2 -= 16;
          v49 = v48;
        LABEL_64:
          (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52);
          std___1___shared_weak_count___release_weak(v52);
          goto LABEL_56;
        }
        a2 -= 16;
        v49 = v48;
      LABEL_56:
        v47 -= 16;
        v48 = v49;
        if (v49 == a7) {
          goto LABEL_93;
        }
      }
      v53 = *((_QWORD*)v48 - 2);
      v54 = *((_QWORD*)v48 - 1);
      *(_QWORD*)v49 = 0;
      *((_QWORD*)v48 - 1) = 0;
      v52 = *(_QWORD*)v47;
      *((_QWORD*)v47 - 1) = v53;
      *(_QWORD*)v47 = v54;
      if (v52 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) != 0) {
        goto LABEL_56;
      }
      goto LABEL_64;
    }
    if (a5 == 0) {
      return;
    }
    v16 = a1;
    while (((*a4)(a2, (__int64*)a1) & 1) == 0) {
      a1 += 16;
      --a5;
      v16 += 16;
      if (a5 == 0) {
        return;
      }
    }
    v84 = v10;
    v85 = a8;
    if (a5 >= v10) {
      if (a5 == 1) {
        v66 = *(_QWORD*)a1;
        *(_QWORD*)a1 = *(_QWORD*)a2;
        *(_QWORD*)a2 = v66;
        v67 = *((_QWORD*)a1 + 1);
        *((_QWORD*)a1 + 1) = *((_QWORD*)a2 + 1);
        *((_QWORD*)a2 + 1) = v67;
        return;
      }
      v21 = a5 / 2;
      v19 = &a1[16 * (a5 / 2)];
      if (a3 == a2) {
        v18 = a3;
      }
      else {
        v22 = *a4;
        v82 = a7;
        v23 = (a3 - a2) >> 4;
        v18 = a2;
        do {
          if ((v22(&v18[16 * (v23 >> 1)], (__int64*)&a1[16 * (a5 / 2)]) & 1) !=
              0) {
            v18 += 16 * (v23 >> 1) + 16;
            v23 += ~(v23 >> 1);
          }
          else {
            v23 >>= 1;
          }
        } while (v23 != 0);
        a7 = v82;
        v21 = a5 / 2;
      }
      v17 = (v18 - a2) >> 4;
    }
    else {
      v17 = v10 / 2;
      v18 = &a2[16 * (v10 / 2)];
      if (a1 == a2) {
        v19 = a2;
      }
      else {
        v81 = a7;
        v80 = v17;
        v19 = a1;
        v20 = (a2 - v16) >> 4;
        do {
          if (((*a4)(v18, (__int64*)&v19[16 * (v20 >> 1)]) & 1) != 0) {
            v20 >>= 1;
          }
          else {
            v19 += 16 * (v20 >> 1) + 16;
            v20 += ~(v20 >> 1);
          }
        } while (v20 != 0);
        a7 = v81;
        v17 = v80;
      }
      v21 = (v19 - v16) >> 4;
    }
    v24 = v18;
    if (v19 != a2) {
      v24 = v19;
      if (a2 != v18) {
        v25 = *(_QWORD*)v19;
        v24 = v19 + 16;
        *(_QWORD*)v19 = *(_QWORD*)a2;
        *(_QWORD*)a2 = v25;
        v26 = *((_QWORD*)v19 + 1);
        *((_QWORD*)v19 + 1) = *((_QWORD*)a2 + 1);
        *((_QWORD*)a2 + 1) = v26;
        for (i = a2 + 16; i != v18; i += 16) {
          v28 = *(_QWORD*)v24;
          if (v24 == a2) {
            a2 = i;
          }
          *(_QWORD*)v24 = *(_QWORD*)i;
          *(_QWORD*)i = v28;
          v29 = *((_QWORD*)v24 + 1);
          *((_QWORD*)v24 + 1) = *((_QWORD*)i + 1);
          *((_QWORD*)i + 1) = v29;
          v24 += 16;
        }
        if (v24 != a2) {
          v30 = v24;
          v31 = a2;
          while (1) {
            v32 = *(_QWORD*)v30;
            *(_QWORD*)v30 = *(_QWORD*)v31;
            *(_QWORD*)v31 = v32;
            v33 = *((_QWORD*)v30 + 1);
            *((_QWORD*)v30 + 1) = *((_QWORD*)v31 + 1);
            v30 += 16;
            *((_QWORD*)v31 + 1) = v33;
            v31 += 16;
            v34 = v30 == a2;
            if (v31 == v18) {
              if (v30 == a2) {
                break;
              }
              v31 = a2 + 16;
              while (1) {
                v35 = *(_QWORD*)v30;
                *(_QWORD*)v30 = *(_QWORD*)a2;
                *(_QWORD*)a2 = v35;
                v36 = *((_QWORD*)v30 + 1);
                *((_QWORD*)v30 + 1) = *((_QWORD*)a2 + 1);
                v30 += 16;
                *((_QWORD*)a2 + 1) = v36;
                v34 = v30 == a2;
                if (v31 != v18) {
                  break;
                }
                if (v30 == a2) {
                  goto LABEL_45;
                }
              }
            }
            if (v34) {
              a2 = v31;
            }
          }
        }
      }
    }
  LABEL_45:
    v37 = a5 - v21;
    v38 = v84 - v17;
    if (v21 + v17 >= v84 - (v21 + v17) + a5) {
      v40 = v21;
      v41 = a3;
      v42 = v17;
      ScheduleManager_da0c00(v24, v18, v41, a4, v37, v84 - v17, a7, v85);
      v18 = v19;
      a8 = v85;
      v38 = v42;
      v37 = v40;
      a3 = v24;
    }
    else {
      v39 = v19;
      a8 = v85;
      ScheduleManager_da0c00(a1, v39, v24, a4, v21, v17, a7, v85);
      a1 = v24;
    }
    a5 = v37;
    a2 = v18;
    v10 = v38;
  } while (v38 != 0);
}

__int64 game_hub_ScheduleManager_SetDateChangeEvent_lambda0_Invoke(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;
  int v3;

  v1 = *(_QWORD**)(a1 + 8);
  v2 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 216LL);
  if ((*(_BYTE*)(GameData_21f3ce0 + 80) & 1) == 0) {
    *(_BYTE*)(GameData_21f3ce0 + 80) = 1;
  }
  v3 = *(_DWORD*)(v2 + 232);
  if (v3 <= 2) {
    v3 = 2;
  }
  *(_DWORD*)(v2 + 232) = v3;
  GameRoutine_f482e0();
  return GameRoutine_d9fe20_alt1(v1);
}

#pragma GCC visibility pop
