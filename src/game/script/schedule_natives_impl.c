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
__int64 ScheduleNatives_86a070(__int64 a1, int a2);
_QWORD* ScheduleNatives_11c05d0(char a1, __int64 a2, char a3, char a4,
                                __int64 a5);
_QWORD* ScheduleNatives_11c0b80(__int64 a1, __int64 a2, char a3, char a4,
                                __int64 a5);

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
  __int64 v4;
  int v5;
  int v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 i;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v2 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v3 = (__int16*)result;
    if ((a2 & 1) != 0) {
      *(_BYTE*)(*(_QWORD*)(game_GameModeData_instance_ + 48) + 3932768LL) |= 8u;
      GameRoutine_82cfe0(*(_QWORD*)(v2 + 48), (__int16*)(result + 8));
      *(_BYTE*)(*(_QWORD*)(v2 + 48) + 3932768LL) &= ~8u;
    }
    else {
      GameRoutine_82d270(game_GameModeData_instance_ + 40,
                         (__int16*)(result + 8));
    }
    v4 = GameRoutine_9a28e0(17);
    v5 = v3[10];
    v6 = v3[11];
    v7 = v3[12];
    v8 = v6 * v5 * v7 != 0 &&
         10000 * v5 + 100 * v6 + v7 == 10000 * v3[4] + 100 * v3[5] + v3[6];
    v9 = *(_QWORD*)(v2 + 48);
    result = game_GameVariableTable_Find(v9, v4);
    if (result != 0) {
      v12 = result;
      if (*(_DWORD*)(result + 32) != v8) {
        *(_DWORD*)(result + 32) = v8;
        if ((*(_BYTE*)(v9 + 3932768) & 0xAE) == 0) {
          result = GameData_22400f8;
          if (GameData_22400f8 != 0) {
            result = GameRoutine_12274e0(GameData_22400f8, v12);
          }
        }
        v14 = *(_QWORD*)(v12 + 88);
        for (i = *(_QWORD*)(v12 + 96); v14 != i; v14 += 48) {
          v16 = v12;
          v15 = *(_QWORD*)(v14 + 32);
          if (v15 == 0) {
            GameRoutine_60a310(0, v10, v11);
          }
          result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v15 + 48LL))(
              v15, &v16);
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
  __int16 v12;
  __int16 v13;
  __int16 v14;
  _BYTE v15[6];

  v0 = game_gmap_GmapClock_instance_;
  if (game_gmap_GmapClock_instance_ == 0) {
    return 0;
  }
  v1 = *(__int16*)(game_gmap_GmapClock_instance_ + 8);
  v2 = *(__int16*)(game_gmap_GmapClock_instance_ + 10);
  v3 = *(__int16*)(game_gmap_GmapClock_instance_ + 12);
  if (v2 * v1 * v3 != 0) {
    v4 = *(_WORD*)(game_gmap_GmapClock_instance_ + 14);
    *(_DWORD*)&v15[2] = 0;
    v12 = v1;
    v13 = v2;
    v14 = v3;
    *(_DWORD*)v15 = 6 * game_script_hub_schedule_kHourCycles[v4 % 24] % 0x18u;
    Dir_70dd80(&v12, game_gmap_GmapClock_instance_ + 20);
    v5 = v12;
    v6 = v13;
    v7 = v14;
    v8 = *(_WORD*)v15;
    v9 = *(_WORD*)&v15[2];
    v10 = *(_WORD*)&v15[4];
  }
  else {
    v5 = game_gmap_GmapClock_kDefaultTime;
    v6 = WORD1(game_gmap_GmapClock_kDefaultTime);
    v7 = WORD2(game_gmap_GmapClock_kDefaultTime);
    v8 = HIWORD(game_gmap_GmapClock_kDefaultTime);
    v9 = GameData_21caa04;
    v10 = HIWORD(GameData_21caa04);
  }
  *(struct PseudoSret*)(&v12) = GameRoutine_70ea50(v0 + 8, v0 + 20);
  if (((__int64)v6 << 24) + ((__int64)v5 << 32) + ((__int64)v7 << 18) +
          ((__int64)v8 << 12) + ((__int64)v9 << 6) + v10 >=
      (unsigned __int64)(((__int64)v13 << 24) + ((__int64)v12 << 32) +
                         ((__int64)v14 << 18) +
                         ((__int64)*(__int16*)v15 << 12) +
                         ((__int64)*(__int16*)&v15[2] << 6) +
                         *(__int16*)&v15[4])) {
    return 0;
  }
  *(struct PseudoSret*)(&v12) = GameRoutine_70ea50(v0 + 8, v0 + 20);
  ScheduleNatives_869280(v0, &v12);
  return 1;
}

__int64 ScheduleNatives_86a070(__int64 a1, int a2)
{
  int v4;
  int v5;
  float v6;
  unsigned __int64 v7;
  __int128 v8;
  float v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _WORD* v14;
  __int16 v15;
  __int64 v16;

  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v5 = 2)
           : (v5 = 3),
       (v5 & v4) != 0)) {
    v6 = (float)((float)a2 * 30.0) / 60.0;
    if (game_ProcFadeView_instance_ == 0) {
      goto LABEL_19;
    }
    v7 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v7 + 172) == *(float*)(v7 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v7 + 160) + 16LL))(v7 + 160);
    }
    else {
      v8 = *(_OWORD*)(v7 + 208);
    }
    if (*((float*)&v8 + 3) == 1.0) {
      (*(void (**)(unsigned __int64, float))(*(_QWORD*)(v7 + 160) + 16LL))(
          v7 + 160, *((float*)&v8 + 3));
      if (v6 > 0.0 && v9 != 1.0) {
      LABEL_14:
        v10 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 176, 16, 0);
        v11 = GameData_212c608[0];
        *(_QWORD*)(v10 + 96) = 0;
        *(_QWORD*)(v10 + 104) = 0;
        *(_QWORD*)(v10 + 112) = 0;
        *(_QWORD*)(v10 + 120) = 0;
        *(_QWORD*)(v10 + 128) = 0;
        *(_WORD*)(v10 + 136) = 0;
        *(_QWORD*)(v10 + 16) = 0;
        *(_QWORD*)(v10 + 24) = "NULL";
        *(_QWORD*)(v10 + 138) = 0;
        *(_QWORD*)(v10 + 144) = 0;
        *(_QWORD*)(v10 + 32) = 0;
        *(_QWORD*)(v10 + 40) = 0;
        *(_QWORD*)(v10 + 48) = 0;
        *(_QWORD*)(v10 + 56) = 0;
        *(_QWORD*)(v10 + 64) = 0;
        *(_QWORD*)(v10 + 72) = 0;
        *(_QWORD*)(v10 + 80) = 0;
        *(_QWORD*)(v10 + 88) = 0;
        *(_QWORD*)v10 = v11 + 16;
        *(_QWORD*)(v10 + 8) = 0;
        v13 = game_ProcInst_Register(v10, v12);
        *(_QWORD*)v10 = game_ProcProgress_vtable;
        if (game_gmap_GmapClock_instance_ != 0) {
          v14 = (_WORD*)(game_gmap_GmapClock_instance_ + 8);
        }
        else {
          v14 = (_WORD*)game_gmap_GmapClock_kDefaultTime_ptr;
        }
        *(_WORD*)(v10 + 152) = *v14;
        *(_WORD*)(v10 + 154) = v14[1];
        *(_WORD*)(v10 + 156) = v14[2];
        *(_WORD*)(v10 + 158) = v14[3];
        *(_WORD*)(v10 + 160) = v14[4];
        v15 = v14[5];
        *(_DWORD*)(v10 + 164) = a2;
        *(float*)(v10 + 168) = v6;
        *(_DWORD*)(v10 + 172) = 0;
        *(_WORD*)(v10 + 162) = v15;
        GameRoutine_867df0(v13);
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)__cxa_guard_acquire(&GameData_21c6868) != 0) {
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
          __cxa_guard_release(&GameData_21c6868);
        }
        GameRoutine_657850(v10, &GameData_21c67a8, "ProcProgress", 1, a1);
        return v10;
      }
    }
    else {
    LABEL_19:
      if (v6 > 0.0) {
        goto LABEL_14;
      }
    }
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v16 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v16 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  ProcProgress_86b660(v16, (unsigned int)a2);
  return 0;
}

_QWORD* ScheduleNatives_11c05d0(char a1, __int64 a2, char a3, char a4,
                                __int64 a5)
{
  int v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
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
  char* v34;
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
  __int64 v54;
  unsigned __int64 v55;
  char* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  char* v61;

  v57 = 0;
  v59 = as_string_c_str(a2);
  v58 = game_HashString(v59);
  UnitItem_6e8800(&v57, &v58);
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
    (*(void (**)(void*))(v14 + 448))((void*)(*(_QWORD**)(v13 + 24)));
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
    return (_QWORD*)(*(__int64 (**)(void*))(*result + v21))(result);
  }
  if (((*(__int64 (**)(void*))(v14 + 456))((void*)(*(_QWORD**)(v13 + 24))) &
       1) == 0) {
    return (_QWORD*)game_script_WaitProc();
  }
  LOBYTE(v58) = a1;
  v15 = game_UnitPool_Get(&v58);
  v16 = as_string_c_str(a5);
  v17 = strlen(v16);
  if (v17 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v17);
  }
  v18 = v17;
  if (v17 >= 0x17) {
    if ((v17 | 7) == 0x17) {
      v22 = 26;
    }
    else {
      v22 = (v17 | 7) + 1;
    }
    v19 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v22, 16, 0);
    v55 = v18;
    v56 = v19;
    v54 = v22 | 1;
    goto LABEL_18;
  }
  LOBYTE(v54) = 2 * v17;
  v19 = (char*)&v54 + 1;
  if (v17 != 0) {
  LABEL_18:
    memmove(v19, v16, v18);
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
  if (v15 != 0) {
    LODWORD(v58) = *game_g_shared_system_skills_ptr & 0xFFF;
    if ((game_HasSkill(v15 + 1744, &v58) & 1) != 0) {
      v27 = *(_QWORD*)(v15 + 440);
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
  v31 = v54 & 1;
  v32 = (unsigned __int64)(unsigned __int8)v54 >> 1;
  if (v31 != 0) {
    v32 = v55;
    v33 = v56;
  }
  else {
    v33 = (char*)&v54 + 1;
  }
  if (v32 != 0) {
    v34 = v33;
  }
  else {
    v34 = nullptr;
  }
  v61 = v34;
  v35 = GameData_212cfb0[0];
  if (v15 != 0) {
    if (*(_QWORD*)(v15 + 392) == 0) {
      v15 = 0;
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
        v59 = 0;
        v60 = 0;
        v58 = 0;
        GameRoutine_8aef60(&v58, &v57);
        v15 = SendUnitItemMenu_8af6e0(v38, &v58, v15, &v61,
                                      game_vstring_kEmpty_ptr[0]);
        if (v58 != 0) {
          v59 = v58;
          v39 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v39 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v39, v58);
        }
        v31 = v54 & 1;
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
  if (v31 != 0 && v56 != nullptr) {
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v40,
                                  v56);
  }
  if (v15 != 0) {
    game_script_StartWaitProc(v15);
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
      if (v49 < 1.0) {
        v49 = 1.0;
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
    return (_QWORD*)(*(__int64 (**)(void*))(*result + v53))(result);
  }
}

_QWORD* ScheduleNatives_11c0b80(__int64 a1, __int64 a2, char a3, char a4,
                                __int64 a5)
{
  char v10;
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
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
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
  char* v43;
  _QWORD* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  char* v51;
  __int64 v52;
  char v53;
  char v54;
  char v55;
  __int64 v56;
  char v57;
  bool v58;
  char v59;
  char v60;
  unsigned __int64 v61;
  char* v62;
  char* v63;
  _QWORD* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  _QWORD* v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  int v75;
  int v76;
  float v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  char* v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  char* v88;

  v10 = StringIsEmpty_25eef0(a1);
  v11 = as_g_script_manager_ptr;
  if ((v10 & 1) == 0) {
    v84 = 0;
    v86 = as_string_c_str(a2);
    v85 = game_HashString(v86);
    UnitItem_6e8800(&v84, &v85);
    v15 = (unsigned __int16)v84;
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
      (*(void (**)(void*))(v21 + 448))((void*)(*(_QWORD**)(v18 + 24)));
      result = *(_QWORD**)(v18 + 2240);
      *(_QWORD*)(v18 + 2240) = 0;
      if (result == (_QWORD*)(v18 + 2208)) {
      LABEL_151:
        v26 = 32;
        return (_QWORD*)(*(__int64 (**)(void*))(*result + v26))(result);
      }
    LABEL_21:
      if (result == nullptr) {
        return result;
      }
      v26 = 40;
      return (_QWORD*)(*(__int64 (**)(void*))(*result + v26))(result);
    }
    if (((*(__int64 (**)(void))(v21 + 456))() & 1) == 0) {
      return (_QWORD*)game_script_WaitProc();
    }
    if ((StringIsEmpty_25eef0(a1) & 1) != 0) {
      v22 = as_string_c_str(a5);
      v23 = strlen(v22);
      if (v23 < 0xFFFFFFFFFFFFFFF7LL) {
        v24 = v23;
        if (v23 >= 0x17) {
          if ((v23 | 7) == 0x17) {
            v36 = 26;
          }
          else {
            v36 = (v23 | 7) + 1;
          }
          v25 = (char*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v36, 16, 0);
          v82 = v24;
          v83 = v25;
          v81 = v36 | 1;
        }
        else {
          LOBYTE(v81) = 2 * v23;
          v25 = (char*)&v81 + 1;
          if (v23 == 0) {
          LABEL_50:
            v37 = BYTE3(v84);
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
            BYTE3(v84) = v40 | v39 | v38;
            v41 = v82;
            if ((v81 & 1) != 0) {
              v42 = v83;
            }
            else {
              v41 = (unsigned __int64)(unsigned __int8)v81 >> 1;
              v42 = (char*)&v81 + 1;
            }
            if (v41 != 0) {
              v43 = v42;
            }
            else {
              v43 = nullptr;
            }
            v88 = v43;
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
            v86 = 0;
            v87 = 0;
            v85 = 0;
            GameRoutine_8aef60(&v85, &v84);
            v47 = SendUnitItemMenu_8af6e0(v46, &v85, 0, &v88,
                                          game_vstring_kEmpty_ptr[0]);
            if (v85 != 0) {
              v86 = v85;
              v48 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v48 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v48, v85);
            }
            if ((v81 & 1) == 0) {
              goto LABEL_130;
            }
            goto LABEL_126;
          }
        }
        memmove(v25, v22, v24);
        goto LABEL_50;
      }
    LABEL_156:
      String_60a1d0(v23);
    }
    v27 = as_string_c_str(a1);
    GameRoutine_682bc0(&v85, v27);
    if (v85 != 0) {
      v28 = *(_QWORD**)(GameData_21ca310 + 56);
      if (v28 != nullptr) {
        v29 = 250;
        while (1) {
          v30 = v28[55];
          if (v30 != 0 && *(_BYTE*)(v30 + 16) != 9 && v28[49] == v85) {
            goto LABEL_80;
          }
          v31 = v28[333];
          if (v31 != 0 && *(_BYTE*)(v31 + 16) != 9 && v28[327] == v85) {
            v28 += 278;
            goto LABEL_80;
          }
          v32 = v28[611];
          if (v32 != 0 && *(_BYTE*)(v32 + 16) != 9 && v28[605] == v85) {
            break;
          }
          v33 = v28[889];
          if (v33 != 0 && *(_BYTE*)(v33 + 16) != 9 && v28[883] == v85) {
            v35 = 6672;
            goto LABEL_79;
          }
          v34 = v28[1167];
          if (v34 != 0 && *(_BYTE*)(v34 + 16) != 9 && v28[1161] == v85) {
            v35 = 8896;
          LABEL_79:
            v28 = (_QWORD*)((char*)v28 + v35);
            goto LABEL_80;
          }
          v28 += 1390;
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
      v28 = nullptr;
    }
  LABEL_80:
    v49 = as_string_c_str(a5);
    v23 = strlen(v49);
    if (v23 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_156;
    }
    v50 = v23;
    if (v23 >= 0x17) {
      if ((v23 | 7) == 0x17) {
        v52 = 26;
      }
      else {
        v52 = (v23 | 7) + 1;
      }
      v51 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v52, 16, 0);
      v82 = v50;
      v83 = v51;
      v81 = v52 | 1;
    }
    else {
      LOBYTE(v81) = 2 * v23;
      v51 = (char*)&v81 + 1;
      if (v23 == 0) {
      LABEL_89:
        v53 = BYTE3(v84);
        v51[v50] = 0;
        if ((a3 & 1) != 0) {
          v54 = 2;
        }
        else {
          v54 = 0;
        }
        v55 = v53 & 0xFD | v54;
        BYTE3(v84) = v55;
        if (v28 != nullptr) {
          LODWORD(v85) = *game_g_shared_system_skills_ptr & 0xFFF;
          if ((game_HasSkill(v28 + 218, &v85) & 1) != 0) {
            v56 = v28[55];
            if (v56 != 0) {
              v57 = *(_BYTE*)(v56 + 16);
            }
            else {
              v57 = 9;
            }
            v58 = ((1 << v57) & 0xF1) != 0;
          }
          else {
            v58 = false;
          }
          a4 &= v58;
          v55 = BYTE3(v84);
        }
        v59 = v55 & 0xEF;
        if ((a4 & 1) != 0) {
          v60 = 16;
        }
        else {
          v60 = 0;
        }
        BYTE3(v84) = v60 | v59;
        v61 = (unsigned __int64)(unsigned __int8)v81 >> 1;
        if ((v81 & 1) != 0) {
          v61 = v82;
          v62 = v83;
        }
        else {
          v62 = (char*)&v81 + 1;
        }
        if (v61 != 0) {
          v63 = v62;
        }
        else {
          v63 = nullptr;
        }
        v88 = v63;
        if (v28 == nullptr || v28[49] == 0) {
          v47 = 0;
          if ((v81 & 1) == 0) {
            goto LABEL_130;
          }
          goto LABEL_126;
        }
        v64 = (_QWORD*)*GameData_212cfb0[0];
        if (*GameData_212cfb0[0] != 0 ||
            (v64 = *(_QWORD**)GameData_212eb20[0],
             *(_QWORD*)GameData_212eb20[0] != 0) ||
            (v64 = *(_QWORD**)GameData_212eb28,
             *(_QWORD*)GameData_212eb28 != 0)) {
          v65 = v64[10];
          if (v65 != 0) {
            v66 = *(_QWORD*)(*(_QWORD*)(v64[6] +
                                        8 * ((v65 + v64[9] - 1) / 0x33uLL)) +
                             80 * ((v65 + v64[9] - 1) % 0x33uLL) + 72);
            goto LABEL_121;
          }
        }
        else if (game_hub_ProcHubSeqView_instance_ != 0) {
          v66 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
          goto LABEL_121;
        }
        v66 = 0;
      LABEL_121:
        v86 = 0;
        v87 = 0;
        v85 = 0;
        GameRoutine_8aef60(&v85, &v84);
        v47 = SendUnitItemMenu_8af6e0(v66, &v85, v28, &v88,
                                      game_vstring_kEmpty_ptr[0]);
        if (v85 != 0) {
          v86 = v85;
          v67 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v67 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v67, v85);
        }
        if ((v81 & 1) == 0) {
        LABEL_130:
          if (v47 != 0) {
            game_script_StartWaitProc(v47);
            v69 = (_QWORD*)*GameData_212cfb0[0];
            if (*GameData_212cfb0[0] != 0 ||
                (v69 = *(_QWORD**)GameData_212eb20[0],
                 *(_QWORD*)GameData_212eb20[0] != 0) ||
                (v69 = *(_QWORD**)GameData_212eb28,
                 *(_QWORD*)GameData_212eb28 != 0)) {
              v70 = v69[10];
              if (v70 != 0) {
                v71 = *(_QWORD*)(*(_QWORD*)(v69[6] + 8 * ((v70 + v69[9] - 1) /
                                                          0x33uLL)) +
                                 80 * ((v70 + v69[9] - 1) % 0x33uLL) + 72);
              }
              else {
                v71 = 0;
              }
            }
            else {
              v71 = game_hub_ProcHubSeqView_instance_;
              if (game_hub_ProcHubSeqView_instance_ != 0) {
                v71 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408);
              }
            }
            if (game_ProcGameSkipView_instance_ == 0 ||
                *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
                (((v75 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) &
                  8) != 0
                     ? (v76 = 2)
                     : (v76 = 3),
                 (v76 & v75) != 0)) {
              v77 = *(float*)(v71 + 144);
              if (v77 < 1.0) {
                v77 = 1.0;
              }
              *(_WORD*)(v71 + 136) = *(_WORD*)(v71 + 136) & 0xFF97 | 0x20;
              *(float*)(v71 + 144) = v77;
            }
            v78 = *v11;
            v79 = *(_QWORD*)(v78 +
                             8LL * (*(unsigned int (**)(__int64))(
                                       *(_QWORD*)as_g_thread_info + 72LL))(
                                       as_g_thread_info) +
                             4384);
            v80 = (*(__int64 (**)(__int64))(*(_QWORD*)v79 + 472LL))(v79);
            return (_QWORD*)(*(__int64 (**)(_QWORD, _QWORD))(
                **(_QWORD**)(v80 + 24) + 448LL))(*(_QWORD*)(v80 + 24), 0);
          }
          v72 = *v11;
          v73 = *(_QWORD*)(v72 +
                           8LL * (*(unsigned int (**)(__int64))(
                                     *(_QWORD*)as_g_thread_info + 72LL))(
                                     as_g_thread_info) +
                           4384);
          if (v73 != 0) {
            v74 = (*(__int64 (**)(__int64))(*(_QWORD*)v73 + 472LL))(v73);
          }
          else {
            v74 = 0;
          }
          (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v74 + 24) + 448LL))(
              *(_QWORD*)(v74 + 24), 1);
          result = *(_QWORD**)(v74 + 2240);
          *(_QWORD*)(v74 + 2240) = 0;
          if (result == (_QWORD*)(v74 + 2208)) {
            goto LABEL_151;
          }
          goto LABEL_21;
        }
      LABEL_126:
        if (v83 != nullptr) {
          v68 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v68 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v68, v83);
        }
        goto LABEL_130;
      }
    }
    memmove(v51, v49, v50);
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
    return (_QWORD*)(*(__int64 (**)(void*))(*result + v20))(result);
  }
  if (result != nullptr) {
    v20 = 40;
    return (_QWORD*)(*(__int64 (**)(void*))(*result + v20))(result);
  }
  return result;
}

#pragma GCC visibility pop
