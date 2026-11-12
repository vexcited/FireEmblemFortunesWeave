#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 Dir_70dd80(_QWORD, _QWORD);
__int64 GameRoutine_12274e0(_QWORD, _QWORD);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_682bc0(_QWORD, _QWORD);
__int64 GameRoutine_82cfe0(__int64, __int16*);
__int64 GameRoutine_82d270(__int64 result, __int16*);
__int64 GameRoutine_867df0(__int64);
__int64 GameRoutine_86ad40(void);
__int64 GameRoutine_8aef60(_QWORD, _QWORD);
__int64 GameRoutine_9a28e0(_QWORD);
__int64 ProcProgress_86b660(_QWORD, _QWORD);
__int64 SendUnitItemMenu_8af6e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 StringIsEmpty_25eef0(_QWORD);
__int64 UnitItem_6e8800(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 as_string_c_str(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_ProcInst_Register(_QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 game_script_StartWaitProc(_QWORD);
__int64 game_script_WaitProc(void);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern _DWORD game_script_hub_schedule_kHourCycles[24];
extern _DWORD* game_g_shared_system_skills_ptr;
extern _UNKNOWN GameData_21c6868;
extern __int64 (*game_ProcProgress_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212eb20[2];
extern __int64 GameData_212eb28;
extern __int64 GameData_21c67b0;
extern __int64 GameData_21c67b8;
extern __int64 GameData_21c67c0;
extern __int64 GameData_21c67d0;
extern __int64 GameData_21c67e0;
extern __int64 GameData_21c67f0;
extern __int64 GameData_21c67f8;
extern __int64 GameData_21c6800;
extern __int64 GameData_21c6810;
extern __int64 GameData_21c6820;
extern __int64 GameData_21c6830;
extern __int64 GameData_21c6838;
extern __int64 GameData_21c6840;
extern __int64 GameData_21c6850;
extern __int64 GameData_21c6860;
extern __int64 GameData_21ca310;
extern __int64 GameData_22400f8;
extern __int64 as_g_thread_info;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64* GameData_212cfb0[12];
extern __int64* as_g_script_manager_ptr;
extern __int64* game_vstring_kEmpty_ptr[2];
extern char GameData_21c67a8;
extern char GameData_21c67e8;
extern char GameData_21c6828;
extern int GameData_21c67c8;
extern int GameData_21c67d8;
extern int GameData_21c6808;
extern int GameData_21c6818;
extern int GameData_21c6848;
extern int GameData_21c6858;
extern int GameData_21caa04;
struct PseudoSret GameRoutine_70ea50(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 ScheduleNatives_869280(__int64 result, __int16* a2);
__int64 ScheduleNatives_869ba0(__int64 result, char a2);
__int64 ScheduleNatives_869ec0();
__int64 ScheduleNatives_86a070_alt1(__int64 a1,
                                    int a2) __asm__("ScheduleNatives_86a070");
_QWORD* ScheduleNatives_11c05d0(char a1, __int64 a2, char a3, char a4,
                                __int64 a5);
_QWORD*
ScheduleNatives_11c0b80_alt1(__int64 a1, __int64 a2, char a3, char a4,
                             __int64 a5) __asm__("ScheduleNatives_11c0b80");
__attribute__((swiftcall)) void Dir_70ea50(PSEUDO_X8, __int16* result,
                                           __int16*);
__int16* Dir_70dd80_alt1(__int16* result, __int16*) __asm__("Dir_70dd80");
_QWORD* game_script_WaitProc_alt1() __asm__("game_script_WaitProc");
__int64* game_8aef60(__int64, unsigned __int16*);
__int64* game_9a28e0(int);
__int64* game_UnitPool_Get_alt1(_BYTE*) __asm__("game_UnitPool_Get");
__int64
GameRoutine_12274e0_alt1(__int64 result,
                         unsigned __int64*) __asm__("GameRoutine_12274e0");
__int64 GameRoutine_867df0_alt1() __asm__("GameRoutine_867df0");
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 ProcProgress_86b660_alt1(__int16*, int,
                                 long double) __asm__("ProcProgress_86b660");
__int64 UnitItem_6e8800_alt1(__int64 result,
                             unsigned __int64*) __asm__("UnitItem_6e8800");
__int64 as_string_c_str_alt1(__int64) __asm__("as_string_c_str");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_82cfe0(__int64, __int16*);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HasSkill_alt1(_QWORD*, unsigned int*) __asm__("game_HasSkill");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_ItemSeq_GainBind(__int64, __int64**, __int64, __int64*, __int64*);
__int64 game_ProcInst_Register_alt1(__int64) __asm__("game_ProcInst_Register");
__int64
game_script_StartWaitProc_alt1(__int64) __asm__("game_script_StartWaitProc");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
bool StringIsEmpty_25eef0_alt1(unsigned __int8*) __asm__(
    "StringIsEmpty_25eef0");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
unsigned __int64 GameRoutine_682bc0_alt1(_QWORD*,
                                         __int64) __asm__("GameRoutine_682bc0");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 ScheduleNatives_86a070(__int64 a1, int a2, long double a3);
_QWORD* ScheduleNatives_11c0b80(unsigned __int8* a1, __int64 a2, char a3,
                                char a4, __int64 a5);

__int64 ScheduleNatives_869280(__int64 result, __int16* a2)
{
  __int64 v2;
  int v3;
  __int16* v4;
  int v5;
  __int16 v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  if (a2[1] * *a2 * a2[2] != 0) {
    v2 = *(_QWORD*)a2;
    v3 = *(__int16*)(result + 10);
    v4 = (__int16*)result;
    v5 = *(__int16*)(result + 12);
    v6 = *(_WORD*)(result + 14);
    v7 = *(__int16*)(result + 8);
    *(_DWORD*)(result + 16) = *((_DWORD*)a2 + 2);
    *(_QWORD*)(result + 8) = v2;
    GameRoutine_86ad40();
    if (v3 * v7 * v5 != 0) {
      v8 = game_script_hub_schedule_kHourCycles[v6 % 24];
    }
    else {
      v8 = -1;
    }
    v9 = v4[4];
    v10 = v4[6];
    v11 = 40000 * v7 + 400 * v3 + 4 * v5 + v8;
    v12 = v4[5];
    if (v12 * v9 * v10 != 0) {
      v13 = game_script_hub_schedule_kHourCycles[v4[7] % 24];
    }
    else {
      v13 = -1;
    }
    return ScheduleNatives_869ba0(v4, v11 != 40000 * v9 + 400 * v12 + 4 * v10 +
                                                 v13);
  }
  return result;
}

__int64 ScheduleNatives_869ba0(__int64 result, char a2)
{
  __int64 v2;
  __int16* v3;
  __int64* v4;
  int v5;
  int v6;
  int v7;
  int v8;
  __int64 v9;
  unsigned __int64* v10;
  unsigned __int64 i;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64* v14;

  v2 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v3 = (__int16*)result;
    if ((a2 & 1) != 0) {
      *(_BYTE*)(*(_QWORD*)(game_GameModeData_instance_ + 48) + 3932768LL) |= 8u;
      game_82cfe0(*(_QWORD*)(v2 + 48), (__int16*)(result + 8));
      *(_BYTE*)(*(_QWORD*)(v2 + 48) + 3932768LL) &= ~8u;
    }
    else {
      GameRoutine_82d270(game_GameModeData_instance_ + 40,
                         (__int16*)(result + 8));
    }
    v4 = game_9a28e0(17);
    v5 = v3[10];
    v6 = v3[11];
    v7 = v3[12];
    v8 = v6 * v5 * v7 != 0 &&
         10000 * v5 + 100 * v6 + v7 == 10000 * v3[4] + 100 * v3[5] + v3[6];
    v9 = *(_QWORD*)(v2 + 48);
    result =
        game_GameVariableTable_Find_alt1((_QWORD*)v9, (unsigned __int64*)v4);
    if (result != 0) {
      v10 = (unsigned __int64*)result;
      if (*(_DWORD*)(result + 32) != v8) {
        *(_DWORD*)(result + 32) = v8;
        if ((*(_BYTE*)(v9 + 3932768) & 0xAE) == 0) {
          result = GameData_22400f8;
          if (GameData_22400f8 != 0) {
            result = GameRoutine_12274e0_alt1(GameData_22400f8, v10);
          }
        }
        v12 = v10[11];
        for (i = v10[12]; v12 != i; v12 += 48LL) {
          v14 = v10;
          v13 = *(_QWORD*)(v12 + 32);
          if (v13 == 0) {
            GameRoutine_60a310_alt1();
          }
          result = (*(__int64 (**)(__int64, unsigned __int64**))(
              *(_QWORD*)v13 + 48LL))(v13, &v14);
        }
      }
    }
  }
  return result;
}

__int64 ScheduleNatives_869ec0()
{
  __int64 v0;
  int v1;
  int v2;
  int v3;
  __int16 v4;
  __int16 v5;
  __int16 v6;
  __int16 v7;
  __int16 v8;
  __int16 v9;
  __int16 v10;
  struct {
    __int16 v12;
    __int16 v13;
    __int16 v14;
    _BYTE v15[6];
  } v12_;

  v0 = game_gmap_GmapClock_instance_;
  if (game_gmap_GmapClock_instance_ == 0) {
    return 0;
  }
  v1 = *(__int16*)(game_gmap_GmapClock_instance_ + 8);
  v2 = *(__int16*)(game_gmap_GmapClock_instance_ + 10);
  v3 = *(__int16*)(game_gmap_GmapClock_instance_ + 12);
  if (v2 * v1 * v3 != 0) {
    v4 = *(_WORD*)(game_gmap_GmapClock_instance_ + 14);
    *(_DWORD*)&v12_.v15[2] = 0;
    v12_.v12 = v1;
    v12_.v13 = v2;
    v12_.v14 = v3;
    *(_DWORD*)v12_.v15 =
        6 * game_script_hub_schedule_kHourCycles[v4 % 24] % 0x18u;
    Dir_70dd80_alt1(&v12_.v12, (__int16*)(game_gmap_GmapClock_instance_ + 20));
    v5 = v12_.v12;
    v6 = v12_.v13;
    v7 = v12_.v14;
    v8 = *(_WORD*)v12_.v15;
    v9 = *(_WORD*)&v12_.v15[2];
    v10 = *(_WORD*)&v12_.v15[4];
  }
  else {
    v5 = game_gmap_GmapClock_kDefaultTime;
    v6 = WORD1(game_gmap_GmapClock_kDefaultTime);
    v7 = WORD2(game_gmap_GmapClock_kDefaultTime);
    v8 = HIWORD(game_gmap_GmapClock_kDefaultTime);
    v9 = GameData_21caa04;
    v10 = HIWORD(GameData_21caa04);
  }
  Dir_70ea50((void*)((__int64)&v12_.v12), (__int16*)(v0 + 8),
             (__int16*)(v0 + 20));
  if (((__int64)v6 << 24) + ((__int64)v5 << 32) + ((__int64)v7 << 18) +
          ((__int64)v8 << 12) + ((__int64)v9 << 6) + v10 >=
      (unsigned __int64)(((__int64)v12_.v13 << 24) + ((__int64)v12_.v12 << 32) +
                         ((__int64)v12_.v14 << 18) +
                         ((__int64)*(__int16*)v12_.v15 << 12) +
                         ((__int64)*(__int16*)&v12_.v15[2] << 6) +
                         *(__int16*)&v12_.v15[4])) {
    return 0;
  }
  Dir_70ea50((void*)((__int64)&v12_.v12), (__int16*)(v0 + 8),
             (__int16*)(v0 + 20));
  ScheduleNatives_869280(v0, &v12_.v12);
  return 1;
}

__int64 ScheduleNatives_86a070(__int64 a1, int a2, long double a3)
{

#pragma clang fp contract(off)
  int v5;
  int v6;
  float v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  _WORD* v11;
  __int16 v12;
  __int16* v13;

  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v5 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v6 = 2)
           : (v6 = 3),
       (v6 & v5) != 0)) {
    *(float*)&a3 = (float)a2 * 0x1.e000000000000p+4f;
    v7 = *(float*)&a3 / 0x1.e000000000000p+5f;
    if (game_ProcFadeView_instance_ == 0) {
      goto LABEL_19;
    }
    v8 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v8 + 172) == *(float*)(v8 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v8 + 160) + 16LL))(v8 + 160);
    }
    else {
      a3 = *(long double*)(v8 + 208);
    }
    LODWORD(a3) = HIDWORD(a3);
    if (*((float*)&a3 + 3) == 0x1.0000000000000p+0f) {
      (*(void (**)(unsigned __int64, float))(*(_QWORD*)(v8 + 160) + 16LL))(
          v8 + 160, *((float*)&a3 + 3));
      if (v7 > 0x0.0p+0f) {
        LODWORD(a3) = HIDWORD(a3);
        if (*((float*)&a3 + 3) != 0x1.0000000000000p+0f) {
        LABEL_14:
          v9 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 176, 16, 0);
          v10 = GameData_212c608[0];
          *(_QWORD*)(v9 + 96) = 0;
          *(_QWORD*)(v9 + 104) = 0;
          *(_QWORD*)(v9 + 112) = 0;
          *(_QWORD*)(v9 + 120) = 0;
          *(_QWORD*)(v9 + 128) = 0;
          *(_WORD*)(v9 + 136) = 0;
          *(_QWORD*)(v9 + 16) = 0;
          *(_QWORD*)(v9 + 24) = "NULL";
          *(_QWORD*)(v9 + 138) = 0;
          *(_QWORD*)(v9 + 144) = 0;
          *(_QWORD*)(v9 + 32) = 0;
          *(_QWORD*)(v9 + 40) = 0;
          *(_QWORD*)(v9 + 48) = 0;
          *(_QWORD*)(v9 + 56) = 0;
          *(_QWORD*)(v9 + 64) = 0;
          *(_QWORD*)(v9 + 72) = 0;
          *(_QWORD*)(v9 + 80) = 0;
          *(_QWORD*)(v9 + 88) = 0;
          *(_QWORD*)v9 = v10 + 16;
          *(_QWORD*)(v9 + 8) = 0;
          game_ProcInst_Register_alt1(v9);
          *(_QWORD*)v9 = game_ProcProgress_vtable;
          if (game_gmap_GmapClock_instance_ != 0) {
            v11 = (_WORD*)(game_gmap_GmapClock_instance_ + 8);
          }
          else {
            v11 = (_WORD*)game_gmap_GmapClock_kDefaultTime_ptr;
          }
          *(_WORD*)(v9 + 152) = *v11;
          *(_WORD*)(v9 + 154) = v11[1];
          *(_WORD*)(v9 + 156) = v11[2];
          *(_WORD*)(v9 + 158) = v11[3];
          *(_WORD*)(v9 + 160) = v11[4];
          v12 = v11[5];
          *(_DWORD*)(v9 + 164) = a2;
          *(float*)(v9 + 168) = v7;
          *(_DWORD*)(v9 + 172) = 0;
          *(_WORD*)(v9 + 162) = v12;
          GameRoutine_867df0_alt1();
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                                    memory_order_acquire) &
               1) == 0 &&
              __cxa_guard_acquire_alt1((__int64)&GameData_21c6868) != 0) {
            GameData_21c67a8 = 3;
            GameData_21c67d0 = 0;
            GameData_21c67d8 = 0;
            GameData_21c67e0 = 0;
            GameData_21c67b0 = 0;
            GameData_21c67b8 = 0;
            GameData_21c67c0 = 0;
            GameData_21c67c8 = 0;
            GameData_21c6808 = 0;
            GameData_21c6810 = 0;
            GameData_21c6818 = 0;
            GameData_21c6820 = 0;
            GameData_21c6828 = 0;
            GameData_21c6850 = 0;
            GameData_21c6858 = 0;
            GameData_21c6860 = 0;
            GameData_21c6848 = 0;
            GameData_21c6838 = 0;
            GameData_21c6840 = 0;
            GameData_21c6830 = 0;
            GameData_21c67e8 = 14;
            GameData_21c67f0 = 0;
            GameData_21c67f8 = 16;
            GameData_21c6800 = 1;
            __cxa_guard_release_alt1((__int64)&GameData_21c6868);
          }
          ProcInst_657850(v9, (__int64)&GameData_21c67a8,
                          (__int64)"ProcProgress", 1, a1);
          return v9;
        }
      }
    }
    else {
    LABEL_19:
      if (v7 > 0x0.0p+0f) {
        goto LABEL_14;
      }
    }
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v13 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v13 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  ProcProgress_86b660_alt1(v13, a2, a3);
  return 0;
}

_QWORD* ScheduleNatives_11c05d0(char a1, __int64 a2, char a3, char a4,
                                __int64 a5)
{

#pragma clang fp contract(off)
  int v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  const char* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  char* v19;
  _QWORD* result;
  __int64 v21;
  __int64 v22;
  char v23;
  char v24;
  char v25;
  char v26;
  __int64 v27;
  char v28;
  bool v29;
  char v30;
  int v31;
  unsigned __int64 v32;
  char* v33;
  __int64 v34;
  __int64* v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  _QWORD* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  int v48;
  float v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  struct {
    __int64 v54;
    unsigned __int64 v55;
    char* v56;
  } v54_;
  __int64 v57;
  struct {
    __int64* v58;
    __int64* v59;
    __int64 v60;
  } v58_;
  __int64 v61;

  v57 = 0;
  v58_.v59 = (__int64*)as_string_c_str_alt1(a2);
  v58_.v58 = (__int64*)game_HashString_alt1((__int64)v58_.v59);
  UnitItem_6e8800_alt1((__int64)&v57, (unsigned __int64*)&v58_.v58);
  v9 = (unsigned __int16)v57;
  v10 = as_g_script_manager_ptr;
  v11 = *as_g_script_manager_ptr;
  v12 = *(
      _QWORD*)(v11 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v12 != 0) {
    v13 = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 472LL))(v12);
  }
  else {
    v13 = 0;
  }
  v14 = **(_QWORD**)(v13 + 24);
  if (v9 == 0) {
    (*(void (**)(void*))(v14 + 448))((void*)*(_QWORD**)(v13 + 24));
    result = *(_QWORD**)(v13 + 2240);
    *(_QWORD*)(v13 + 2240) = 0;
    if (result == (_QWORD*)(v13 + 2208)) {
      v21 = 32;
    }
    else {
      if (result == nullptr) {
        return result;
      }
      v21 = 40;
    }
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v21))((__int64)result);
  }
  if (((*(__int64 (**)(void*))(v14 + 456))((void*)*(_QWORD**)(v13 + 24)) & 1) ==
      0) {
    return game_script_WaitProc_alt1();
  }
  LOBYTE(v58_.v58) = a1;
  v15 = game_UnitPool_Get_alt1(&v58_.v58);
  v16 = (const char*)as_string_c_str_alt1(a5);
  v17 = strlen_alt1(v16);
  if (v17 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v18 = v17;
  if (v17 >= 0x17) {
    if ((v17 | 7) == 0x17) {
      v22 = 26;
    }
    else {
      v22 = (v17 | 7) + 1;
    }
    v19 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v22, 16, 0);
    v54_.v55 = v18;
    v54_.v56 = v19;
    v54_.v54 = v22 | 1;
    goto LABEL_18;
  }
  LOBYTE(v54_.v54) = 2 * v17;
  v19 = (char*)&v54_.v54 + 1;
  if (v17 != 0) {
  LABEL_18:
    memmove_alt1((__int64)v19, (__int64)v16, v18);
  }
  v23 = BYTE3(v57);
  v19[v18] = 0;
  v24 = v23 & 0xED;
  if ((a3 & 1) != 0) {
    v25 = 2;
  }
  else {
    v25 = 0;
  }
  v26 = v24 | v25;
  if (v15 != nullptr) {
    LODWORD(v58_.v58) = *game_g_shared_system_skills_ptr & 0xFFF;
    if ((game_HasSkill_alt1(v15 + 218, (unsigned int*)&v58_.v58) & 1) != 0) {
      v27 = v15[55];
      if (v27 != 0) {
        v28 = *(_BYTE*)(v27 + 16);
      }
      else {
        v28 = 9;
      }
      v29 = ((1 << v28) & 0xF1) != 0;
    }
    else {
      v29 = false;
    }
    a4 &= v29;
  }
  if ((a4 & 1) != 0) {
    v30 = 16;
  }
  else {
    v30 = 0;
  }
  BYTE3(v57) = v30 | v26;
  v31 = v54_.v54 & 1;
  v32 = (unsigned __int64)(unsigned __int8)v54_.v54 >> 1;
  if (v31 != 0) {
    v32 = v54_.v55;
    v33 = v54_.v56;
  }
  else {
    v33 = (char*)&v54_.v54 + 1;
  }
  if (v32 != 0) {
    v34 = (__int64)v33;
  }
  else {
    v34 = 0;
  }
  v61 = v34;
  v35 = GameData_212cfb0[0];
  if (v15 != nullptr) {
    if (v15[49] == 0) {
      v15 = nullptr;
      goto LABEL_57;
    }
    v36 = (_QWORD*)*GameData_212cfb0[0];
    if (*GameData_212cfb0[0] != 0 ||
        (v36 = *(_QWORD**)GameData_212eb20[0],
         *(_QWORD*)GameData_212eb20[0] != 0) ||
        (v36 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
      v37 = v36[10];
      if (v37 != 0) {
        v38 =
            *(_QWORD*)(*(_QWORD*)(v36[6] + 8 * ((v37 + v36[9] - 1) / 0x33uLL)) +
                       80 * ((v37 + v36[9] - 1) % 0x33uLL) + 72);
      LABEL_52:
        v58_.v59 = nullptr;
        v58_.v60 = 0;
        v58_.v58 = nullptr;
        game_8aef60((__int64)&v58_.v58, (unsigned __int16*)&v57);
        v15 = (_QWORD*)game_ItemSeq_GainBind(v38, &v58_.v58, (__int64)v15, &v61,
                                             game_vstring_kEmpty_ptr[0]);
        if (v58_.v58 != nullptr) {
          v58_.v59 = v58_.v58;
          v39 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v39 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v39, (__int64)v58_.v58);
        }
        v31 = v54_.v54 & 1;
        goto LABEL_57;
      }
    }
    else if (game_hub_ProcHubSeqView_instance_ != 0) {
      v38 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
      goto LABEL_52;
    }
    v38 = 0;
    goto LABEL_52;
  }
LABEL_57:
  if (v31 != 0 && v54_.v56 != nullptr) {
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, (__int64)v54_.v56);
  }
  if (v15 != nullptr) {
    game_script_StartWaitProc_alt1((__int64)v15);
    v41 = (_QWORD*)*v35;
    if (*v35 != 0 ||
        (v41 = *(_QWORD**)GameData_212eb20[0],
         *(_QWORD*)GameData_212eb20[0] != 0) ||
        (v41 = *(_QWORD**)GameData_212eb28, *(_QWORD*)GameData_212eb28 != 0)) {
      v42 = v41[10];
      if (v42 != 0) {
        v43 =
            *(_QWORD*)(*(_QWORD*)(v41[6] + 8 * ((v42 + v41[9] - 1) / 0x33uLL)) +
                       80 * ((v42 + v41[9] - 1) % 0x33uLL) + 72);
      }
      else {
        v43 = 0;
      }
    }
    else {
      v43 = game_hub_ProcHubSeqView_instance_;
      if (game_hub_ProcHubSeqView_instance_ != 0) {
        v43 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
      }
    }
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v47 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v48 = 2)
             : (v48 = 3),
         (v48 & v47) != 0)) {
      v49 = *(float*)(v43 + 144);
      if (v49 < 0x1.0000000000000p+0f) {
        v49 = 0x1.0000000000000p+0f;
      }
      *(_WORD*)(v43 + 136) = *(_WORD*)(v43 + 136) & 0xFF97 | 0x20;
      *(float*)(v43 + 144) = v49;
    }
    v50 = *v10;
    v51 = *(_QWORD*)(v50 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    v52 = (*(__int64 (**)(__int64))(*(_QWORD*)v51 + 472LL))(v51);
    return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
        **(_QWORD**)(v52 + 24) + 448LL))(*(_QWORD*)(v52 + 24), 0);
  }
  else {
    v44 = *v10;
    v45 = *(_QWORD*)(v44 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    if (v45 != 0) {
      v46 = (*(__int64 (**)(__int64))(*(_QWORD*)v45 + 472LL))(v45);
    }
    else {
      v46 = 0;
    }
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v46 + 24) + 448LL))(
        *(_QWORD*)(v46 + 24), 1);
    result = *(_QWORD**)(v46 + 2240);
    *(_QWORD*)(v46 + 2240) = 0;
    if (result == (_QWORD*)(v46 + 2208)) {
      v53 = 32;
    }
    else {
      if (result == nullptr) {
        return result;
      }
      v53 = 40;
    }
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v53))((__int64)result);
  }
}

_QWORD* ScheduleNatives_11c0b80(unsigned __int8* a1, __int64 a2, char a3,
                                char a4, __int64 a5)
{

#pragma clang fp contract(off)
  bool v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* result;
  __int64 v20;
  __int64 v21;
  const char* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  char v37;
  char v38;
  char v39;
  char v40;
  unsigned __int64 v41;
  char* v42;
  __int64 v43;
  _QWORD* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  const char* v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  char* v52;
  __int64 v53;
  char v54;
  char v55;
  char v56;
  __int64 v57;
  char v58;
  bool v59;
  char v60;
  char v61;
  unsigned __int64 v62;
  char* v63;
  __int64 v64;
  _QWORD* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  _QWORD* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  int v76;
  int v77;
  float v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  struct {
    __int64 v82;
    unsigned __int64 v83;
    char* v84;
  } v82_;
  __int64 v85;
  struct {
    __int64* v86;
    __int64* v87;
    __int64 v88;
  } v86_;
  __int64 v89;

  v10 = StringIsEmpty_25eef0_alt1(a1);
  v11 = as_g_script_manager_ptr;
  if (!v10) {
    v85 = 0;
    v86_.v87 = (__int64*)as_string_c_str_alt1(a2);
    v86_.v86 = (__int64*)game_HashString_alt1((__int64)v86_.v87);
    UnitItem_6e8800_alt1((__int64)&v85, (unsigned __int64*)&v86_.v86);
    v15 = (unsigned __int16)v85;
    v16 = *v11;
    v17 = *(_QWORD*)(v16 +
                     8LL * (*(unsigned int (**)(__int64))(
                               *(_QWORD*)as_g_thread_info + 72LL))(
                               as_g_thread_info) +
                     4384);
    if (v17 != 0) {
      v18 = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 472LL))(v17);
    }
    else {
      v18 = 0;
    }
    v21 = **(_QWORD**)(v18 + 24);
    if (v15 == 0) {
      (*(void (**)(void*))(v21 + 448))((void*)*(_QWORD**)(v18 + 24));
      result = *(_QWORD**)(v18 + 2240);
      *(_QWORD*)(v18 + 2240) = 0;
      if (result == (_QWORD*)(v18 + 2208)) {
      LABEL_151:
        v26 = 32;
        return (_QWORD*)(*(__int64 (**)(__int64))(*result + v26))(
            (__int64)result);
      }
    LABEL_21:
      if (result == nullptr) {
        return result;
      }
      v26 = 40;
      return (_QWORD*)(*(__int64 (**)(__int64))(*result + v26))(
          (__int64)result);
    }
    if (((*(__int64 (**)(void))(v21 + 456))() & 1) == 0) {
      return game_script_WaitProc_alt1();
    }
    if (StringIsEmpty_25eef0_alt1(a1)) {
      v22 = (const char*)as_string_c_str_alt1(a5);
      v23 = strlen_alt1(v22);
      if (v23 < 0xFFFFFFFFFFFFFFF7LL) {
        v24 = v23;
        if (v23 >= 0x17) {
          if ((v23 | 7) == 0x17) {
            v36 = 26;
          }
          else {
            v36 = (v23 | 7) + 1;
          }
          v25 = (char*)fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v36, 16, 0);
          v82_.v83 = v24;
          v82_.v84 = v25;
          v82_.v82 = v36 | 1;
        }
        else {
          LOBYTE(v82_.v82) = 2 * v23;
          v25 = (char*)&v82_.v82 + 1;
          if (v23 == 0) {
          LABEL_50:
            v37 = BYTE3(v85);
            v25[v24] = 0;
            v38 = v37 & 0xED;
            if ((a3 & 1) != 0) {
              v39 = 2;
            }
            else {
              v39 = 0;
            }
            if ((a4 & 1) != 0) {
              v40 = 16;
            }
            else {
              v40 = 0;
            }
            BYTE3(v85) = v40 | v39 | v38;
            v41 = v82_.v83;
            if ((v82_.v82 & 1) != 0) {
              v42 = v82_.v84;
            }
            else {
              v41 = (unsigned __int64)(unsigned __int8)v82_.v82 >> 1;
              v42 = (char*)&v82_.v82 + 1;
            }
            if (v41 != 0) {
              v43 = (__int64)v42;
            }
            else {
              v43 = 0;
            }
            v89 = v43;
            v44 = (_QWORD*)*GameData_212cfb0[0];
            if (*GameData_212cfb0[0] != 0 ||
                (v44 = *(_QWORD**)GameData_212eb20[0],
                 *(_QWORD*)GameData_212eb20[0] != 0) ||
                (v44 = *(_QWORD**)GameData_212eb28,
                 *(_QWORD*)GameData_212eb28 != 0)) {
              v45 = v44[10];
              if (v45 != 0) {
                v46 = *(_QWORD*)(*(_QWORD*)(v44[6] + 8 * ((v45 + v44[9] - 1) /
                                                          0x33uLL)) +
                                 80 * ((v45 + v44[9] - 1) % 0x33uLL) + 72);
                goto LABEL_70;
              }
            }
            else if (game_hub_ProcHubSeqView_instance_ != 0) {
              v46 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
              goto LABEL_70;
            }
            v46 = 0;
          LABEL_70:
            v86_.v87 = nullptr;
            v86_.v88 = 0;
            v86_.v86 = nullptr;
            game_8aef60((__int64)&v86_.v86, (unsigned __int16*)&v85);
            v47 = game_ItemSeq_GainBind(v46, &v86_.v86, 0, &v89,
                                        game_vstring_kEmpty_ptr[0]);
            if (v86_.v86 != nullptr) {
              v86_.v87 = v86_.v86;
              v48 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v48 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v48,
                  (__int64)v86_.v86);
            }
            if ((v82_.v82 & 1) == 0) {
              goto LABEL_130;
            }
            goto LABEL_126;
          }
        }
        memmove_alt1((__int64)v25, (__int64)v22, v24);
        goto LABEL_50;
      }
    LABEL_156:
      String_60a1d0_alt1();
    }
    v27 = as_string_c_str_alt1((__int64)a1);
    GameRoutine_682bc0_alt1(&v86_.v86, v27);
    if (v86_.v86 != nullptr) {
      v28 = *(_QWORD*)(GameData_21ca310 + 56);
      if (v28 != 0) {
        v29 = 250;
        while (1) {
          v30 = *(_QWORD*)(v28 + 440);
          if (v30 != 0 && *(_BYTE*)(v30 + 16) != 9 &&
              *(__int64**)(v28 + 392) == v86_.v86) {
            goto LABEL_80;
          }
          v31 = *(_QWORD*)(v28 + 2664);
          if (v31 != 0 && *(_BYTE*)(v31 + 16) != 9 &&
              *(__int64**)(v28 + 2616) == v86_.v86) {
            v28 += 2224;
            goto LABEL_80;
          }
          v32 = *(_QWORD*)(v28 + 4888);
          if (v32 != 0 && *(_BYTE*)(v32 + 16) != 9 &&
              *(__int64**)(v28 + 4840) == v86_.v86) {
            break;
          }
          v33 = *(_QWORD*)(v28 + 7112);
          if (v33 != 0 && *(_BYTE*)(v33 + 16) != 9 &&
              *(__int64**)(v28 + 7064) == v86_.v86) {
            v35 = 6672;
            goto LABEL_79;
          }
          v34 = *(_QWORD*)(v28 + 9336);
          if (v34 != 0 && *(_BYTE*)(v34 + 16) != 9 &&
              *(__int64**)(v28 + 9288) == v86_.v86) {
            v35 = 8896;
          LABEL_79:
            v28 += v35;
            goto LABEL_80;
          }
          v28 += 11120;
          v29 -= 5;
          if (v29 == 0) {
            goto LABEL_44;
          }
        }
        v35 = 4448;
        goto LABEL_79;
      }
    }
    else {
    LABEL_44:
      v28 = 0;
    }
  LABEL_80:
    v49 = (const char*)as_string_c_str_alt1(a5);
    v50 = strlen_alt1(v49);
    if (v50 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_156;
    }
    v51 = v50;
    if (v50 >= 0x17) {
      if ((v50 | 7) == 0x17) {
        v53 = 26;
      }
      else {
        v53 = (v50 | 7) + 1;
      }
      v52 = (char*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v53, 16, 0);
      v82_.v83 = v51;
      v82_.v84 = v52;
      v82_.v82 = v53 | 1;
    }
    else {
      LOBYTE(v82_.v82) = 2 * v50;
      v52 = (char*)&v82_.v82 + 1;
      if (v50 == 0) {
      LABEL_89:
        v54 = BYTE3(v85);
        v52[v51] = 0;
        if ((a3 & 1) != 0) {
          v55 = 2;
        }
        else {
          v55 = 0;
        }
        v56 = v54 & 0xFD | v55;
        BYTE3(v85) = v56;
        if (v28 != 0) {
          LODWORD(v86_.v86) = *game_g_shared_system_skills_ptr & 0xFFF;
          if ((game_HasSkill_alt1((_QWORD*)(v28 + 1744),
                                  (unsigned int*)&v86_.v86) &
               1) != 0) {
            v57 = *(_QWORD*)(v28 + 440);
            if (v57 != 0) {
              v58 = *(_BYTE*)(v57 + 16);
            }
            else {
              v58 = 9;
            }
            v59 = ((1 << v58) & 0xF1) != 0;
          }
          else {
            v59 = false;
          }
          a4 &= v59;
          v56 = BYTE3(v85);
        }
        v60 = v56 & 0xEF;
        if ((a4 & 1) != 0) {
          v61 = 16;
        }
        else {
          v61 = 0;
        }
        BYTE3(v85) = v61 | v60;
        v62 = (unsigned __int64)(unsigned __int8)v82_.v82 >> 1;
        if ((v82_.v82 & 1) != 0) {
          v62 = v82_.v83;
          v63 = v82_.v84;
        }
        else {
          v63 = (char*)&v82_.v82 + 1;
        }
        if (v62 != 0) {
          v64 = (__int64)v63;
        }
        else {
          v64 = 0;
        }
        v89 = v64;
        if (v28 == 0 || *(_QWORD*)(v28 + 392) == 0) {
          v47 = 0;
          if ((v82_.v82 & 1) == 0) {
            goto LABEL_130;
          }
          goto LABEL_126;
        }
        v65 = (_QWORD*)*GameData_212cfb0[0];
        if (*GameData_212cfb0[0] != 0 ||
            (v65 = *(_QWORD**)GameData_212eb20[0],
             *(_QWORD*)GameData_212eb20[0] != 0) ||
            (v65 = *(_QWORD**)GameData_212eb28,
             *(_QWORD*)GameData_212eb28 != 0)) {
          v66 = v65[10];
          if (v66 != 0) {
            v67 = *(_QWORD*)(*(_QWORD*)(v65[6] +
                                        8 * ((v66 + v65[9] - 1) / 0x33uLL)) +
                             80 * ((v66 + v65[9] - 1) % 0x33uLL) + 72);
            goto LABEL_121;
          }
        }
        else if (game_hub_ProcHubSeqView_instance_ != 0) {
          v67 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
          goto LABEL_121;
        }
        v67 = 0;
      LABEL_121:
        v86_.v87 = nullptr;
        v86_.v88 = 0;
        v86_.v86 = nullptr;
        game_8aef60((__int64)&v86_.v86, (unsigned __int16*)&v85);
        v47 = game_ItemSeq_GainBind(v67, &v86_.v86, v28, &v89,
                                    game_vstring_kEmpty_ptr[0]);
        if (v86_.v86 != nullptr) {
          v86_.v87 = v86_.v86;
          v68 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v68 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v68, (__int64)v86_.v86);
        }
        if ((v82_.v82 & 1) == 0) {
        LABEL_130:
          if (v47 != 0) {
            game_script_StartWaitProc_alt1(v47);
            v70 = (_QWORD*)*GameData_212cfb0[0];
            if (*GameData_212cfb0[0] != 0 ||
                (v70 = *(_QWORD**)GameData_212eb20[0],
                 *(_QWORD*)GameData_212eb20[0] != 0) ||
                (v70 = *(_QWORD**)GameData_212eb28,
                 *(_QWORD*)GameData_212eb28 != 0)) {
              v71 = v70[10];
              if (v71 != 0) {
                v72 = *(_QWORD*)(*(_QWORD*)(v70[6] + 8 * ((v71 + v70[9] - 1) /
                                                          0x33uLL)) +
                                 80 * ((v71 + v70[9] - 1) % 0x33uLL) + 72);
              }
              else {
                v72 = 0;
              }
            }
            else {
              v72 = game_hub_ProcHubSeqView_instance_;
              if (game_hub_ProcHubSeqView_instance_ != 0) {
                v72 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
              }
            }
            if (game_ProcGameSkipView_instance_ == 0 ||
                *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
                (((v76 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) &
                  8) != 0
                     ? (v77 = 2)
                     : (v77 = 3),
                 (v77 & v76) != 0)) {
              v78 = *(float*)(v72 + 144);
              if (v78 < 0x1.0000000000000p+0f) {
                v78 = 0x1.0000000000000p+0f;
              }
              *(_WORD*)(v72 + 136) = *(_WORD*)(v72 + 136) & 0xFF97 | 0x20;
              *(float*)(v72 + 144) = v78;
            }
            v79 = *v11;
            v80 = *(_QWORD*)(v79 +
                             8LL * (*(unsigned int (**)(__int64))(
                                       *(_QWORD*)as_g_thread_info + 72LL))(
                                       as_g_thread_info) +
                             4384);
            v81 = (*(__int64 (**)(__int64))(*(_QWORD*)v80 + 472LL))(v80);
            return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
                **(_QWORD**)(v81 + 24) + 448LL))(*(_QWORD*)(v81 + 24), 0);
          }
          v73 = *v11;
          v74 = *(_QWORD*)(v73 +
                           8LL * (*(unsigned int (**)(__int64))(
                                     *(_QWORD*)as_g_thread_info + 72LL))(
                                     as_g_thread_info) +
                           4384);
          if (v74 != 0) {
            v75 = (*(__int64 (**)(__int64))(*(_QWORD*)v74 + 472LL))(v74);
          }
          else {
            v75 = 0;
          }
          (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v75 + 24) + 448LL))(
              *(_QWORD*)(v75 + 24), 1);
          result = *(_QWORD**)(v75 + 2240);
          *(_QWORD*)(v75 + 2240) = 0;
          if (result == (_QWORD*)(v75 + 2208)) {
            goto LABEL_151;
          }
          goto LABEL_21;
        }
      LABEL_126:
        if (v82_.v84 != nullptr) {
          v69 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v69 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v69, (__int64)v82_.v84);
        }
        goto LABEL_130;
      }
    }
    memmove_alt1((__int64)v52, (__int64)v49, v51);
    goto LABEL_89;
  }
  v12 = *as_g_script_manager_ptr;
  v13 = *(
      _QWORD*)(v12 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v13 != 0) {
    v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 472LL))(v13);
  }
  else {
    v14 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v14 + 24) + 448LL))(
      *(_QWORD*)(v14 + 24), 1);
  result = *(_QWORD**)(v14 + 2240);
  *(_QWORD*)(v14 + 2240) = 0;
  if (result == (_QWORD*)(v14 + 2208)) {
    v20 = 32;
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v20))((__int64)result);
  }
  if (result != nullptr) {
    v20 = 40;
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v20))((__int64)result);
  }
  return result;
}

#pragma GCC visibility pop
