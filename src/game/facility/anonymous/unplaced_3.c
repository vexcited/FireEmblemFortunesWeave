#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1587740(PSEUDO_X8, __int64*,
                                                    const char**);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void game_facility_144f120(PSEUDO_X8, __int64,
                                                      __int64);
__int64* GameRoutine_9db8a0(unsigned __int8, int);
__int64 Alignment_56b600(__int64 result);
__int64 GameHr_717fc0(unsigned __int64*, int);
__int64 GameRoutine_156d580(__int64);
__int64 GameRoutine_932360(unsigned __int8*, __int64*);
__int64 GameRoutine_94b9a0();
__int64 JobIcon_19a9be0(__int64, __int64, __int64);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 ProcDivinationSeq_1964e60(__int64);
__int64 ProcPopup_1736c50(__int64 result, __int64*, __int64, int*);
__int64 SceneManager_138c000(_QWORD*, unsigned __int8*, __int64, __int64);
__int64 SceneManager_138c360(_QWORD*, unsigned __int8*, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_startSlotVolume_100b50(int*, __int64, float);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, const char*);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, const char*);
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
char* game_util_Format(const char*, ...);
extern _UNKNOWN** GameData_2132490[2];
extern _UNKNOWN GameData_1c20f90;
extern _UNKNOWN GameData_21f74a0;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_20f73c0[])();
extern __int64 (*GameData_20f7440[])();
extern __int64 (*GameData_211cdf8[])();
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern __int64 GameData_212dce8;
extern __int64 GameData_21c9988;
extern __int64 GameData_21c9cf0;
extern __int64 GameData_21d9988;
extern __int64 GameData_21d9990;
extern __int64 GameData_21f4000;
extern __int64 GameData_21f84a0;
extern __int64 GameData_21f84b8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_UnitListSet_instance_;
extern __int64 game_sound_g_game_sound;
extern __int64 ui_LayoutAccessor_empty_;
extern char* GameData_208c628[3];
extern char GameData_1a9f09e;
unsigned __int64 strlen(const char*);
unsigned __int8* snd_fnd_calcCrc32(unsigned __int8* result, int);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_a0d9a0(__int64);
void __attribute__((noreturn)) String_60a1d0();
void game_195ab40(__int64, __int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c830(__int64, float);
__int64 game_facility_anonymous_14886c0(__int64 result);
void game_facility_anonymous_16b7ae0(__int64* a1, __int64* a2);
void game_facility_anonymous_16b8020(__int64* a1, __int64* a2);
__int64 game_facility_anonymous_16c0960(__int64 a1);
__int64 game_facility_anonymous_18728d0(__int64 a1, char a2);
char* game_facility_anonymous_1872c00(__int64* a1);
__int64 game_facility_anonymous_1930ce0(__int64 a1);
void game_facility_anonymous_1930f40(__int64 a1, __int64* a2, char a3,
                                     __int64 a4, char* a5, char a6);
__int64 game_facility_anonymous_1964d30(__int64 a1);
void game_facility_anonymous_19688e0();
void game_facility_anonymous_196b7d0();
__int64 game_facility_anonymous_197cfe0(__int64 a1, __int64 a2);

__int64 game_facility_anonymous_14886c0(__int64 result)
{

#pragma clang fp contract(off)
  float v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int128 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  float v15;
  float v16;
  __int64 v17;
  float v18;
  float v19;
  float v20;
  _QWORD v21[25];
  unsigned int v22;

  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(double, "d0", "=w"));
  if (*(_DWORD*)(result + 64) != 0) {
    v22 = (unsigned int)snd_fnd_calcCrc32("SE_FadeACT", 0),
    v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(double, "d0", "=w"));
    snd_Fade_Fade_10c830((__int64)v21, 0x0.0p+0f),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(double, "d0", "=w"));
    v1 = 0x1.0000000000000p+0f;
  LABEL_3:
    snd_startSlotVolume_100b50((int*)&v22, (__int64)v21, v1),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(double, "d0", "=w"));
    return snd_Fade_Destroy_Fade(v21);
  }
  v2 = *(unsigned __int8*)(GameData_21f4000 + 8);
  if ((v2 & 1) != 0) {
    v3 = *(_QWORD*)(GameData_21f4000 + 16);
  }
  else {
    v3 = v2 >> 1;
  }
  if (v3 != 0) {
    if (*(_BYTE*)(result + 96) == 1) {
      v4 = game_sound_g_game_sound;
      if (game_sound_g_game_sound == 0) {
        return result;
      }
      v5 = *(_OWORD*)(result + 80);
      *(_BYTE*)(game_sound_g_game_sound + 2516) = 1;
      *(_QWORD*)(v4 + 2528) = v5;
      *(_DWORD*)(v4 + 2536) = DWORD2(v5);
    }
    else {
      v6 = *(_QWORD*)(GameData_21f4000 + 264);
      if (v6 != 0) {
        v7 = *(_QWORD*)(GameData_21f4000 + 256);
        v8 = *(_QWORD*)(GameData_21f4000 + 264);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                  memory_order_relaxed);
        v9 = std___1___shared_weak_count_lock(v8),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(double, "d0", "=w"));
        result = std___1___shared_weak_count___release_weak(v6),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(double, "d0", "=w"));
        if (v9 != 0) {
          if (v7 != 0) {
            v10 = *(_QWORD*)(v7 + 8);
            v11 = *(_QWORD*)(v7 + 16);
            if (v11 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                        memory_order_relaxed);
            }
            result = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 40LL))(v10),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(double, "d0", "=w"));
            v14 = game_sound_g_game_sound;
            if (game_sound_g_game_sound != 0) {
              *(_QWORD*)(game_sound_g_game_sound + 2528) = v12;
              *(_BYTE*)(v14 + 2516) = 1;
              *(_DWORD*)(v14 + 2536) = v13;
            }
            if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11),
                  v12 = COERCE_AS(__typeof__(v12),
                                  PSEUDO_REGISTER(double, "d0", "=w"));
              result = std___1___shared_weak_count___release_weak(v11),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(double, "d0", "=w"));
            }
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9),
                v12 = COERCE_AS(__typeof__(v12),
                                PSEUDO_REGISTER(double, "d0", "=w"));
            result = std___1___shared_weak_count___release_weak(v9),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(double, "d0", "=w"));
          }
        }
      }
    }
  }
  if (game_sound_g_game_sound != 0 &&
      (*(_BYTE*)(game_sound_g_game_sound + 600) & 1) == 0) {
    v15 = 0x0.0p+0f;
    v16 = 0x0.0p+0f;
    v17 = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      LODWORD(v18) =
          LANES128_OF(
              ((__n128 (*)(__int64, double)) *
               (_QWORD*)(*(_QWORD*)(game_ProcFadeView_instance_ + 224) + 16LL))(
                  game_ProcFadeView_instance_ + 224, 0x0.0p+0))
              .n128_u32[3],
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(double, "d0", "=w"));
      LODWORD(v16) =
          LANES128_OF(((__n128 (*)(__int64)) *
                       (_QWORD*)(*(_QWORD*)(v17 + 160) + 16LL))(v17 + 160))
              .n128_u32[3],
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(double, "d0", "=w"));
      if (v18 >= v16) {
        v16 = v18;
      }
    }
    v19 = 0x1.0000000000000p+0f;
    v20 = 0x1.0000000000000p+0f - v16;
    if (v20 <= 0x1.0000000000000p+0f) {
      v19 = v20;
    }
    if (v20 >= 0x0.0p+0f) {
      v15 = v19;
    }
    v22 = (unsigned int)snd_fnd_calcCrc32("SE_FadeACT", 0),
    v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(double, "d0", "=w"));
    snd_Fade_Fade_10c830((__int64)v21, 0x0.0p+0f),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(double, "d0", "=w"));
    v1 = v15;
    goto LABEL_3;
  }
  return result;
}

void game_facility_anonymous_16b7ae0(__int64* a1, __int64* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char v13;
  unsigned __int8 v14;
  const char* v15;
  const char* v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  const char* v21[2];
  struct {
    __int64 (**v22)();
    __int64 v23;
    unsigned __int64 v24;
    unsigned __int64 v25;
    int v26;
    int v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
  } v22_;

  LayoutAccessor_1562cf0((__int64)a2, (unsigned int*)"JobChange");
  v21[0] = "L_Job";
  v21[1] = (_BYTE*)((_UNKNOWN*)0x5LL);
  GameRoutine_1587740((void*)(&v22_.v22), a2, v21);
  if (v22_.v23 != 0) {
    v4 = std___1___shared_weak_count_lock(v22_.v23);
    v5 = (__int64)v22_.v22;
    if (v22_.v23 != 0) {
      std___1___shared_weak_count___release_weak(v22_.v23);
    }
    if (v4 != 0 && v5 != 0) {
      *(_BYTE*)(v5 + 1106) = 1;
      JobIcon_19a9be0(v5, a1[1], a1[3]);
    }
    else if (v4 == 0) {
      goto LABEL_10;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
LABEL_10:
  v21[0] = "L_Job_After";
  v21[1] = (_BYTE*)(((_UNKNOWN**)0x8LL) + 3);
  GameRoutine_1587740((void*)(&v22_.v22), a2, v21);
  if (v22_.v23 == 0) {
    return;
  }
  v6 = std___1___shared_weak_count_lock(v22_.v23);
  v7 = (__int64)v22_.v22;
  if (v22_.v23 != 0) {
    std___1___shared_weak_count___release_weak(v22_.v23);
  }
  if (v6 != 0 && v7 != 0) {
    *(_BYTE*)(v7 + 1106) = 1;
    JobIcon_19a9be0(v7, a1[1], a1[2]);
    v10 = a1[1];
    v9 = a1[2];
    if (v10 == 0) {
      goto LABEL_26;
    }
    if (v9 != GameData_21c9988) {
      goto LABEL_26;
    }
    v11 = *(_QWORD*)(v10 + 392);
    if (v11 == 0) {
      goto LABEL_26;
    }
    v12 = *(_QWORD*)(*(_QWORD*)(v11 + 24) + 1784LL);
    if (v12 != 0) {
      v8 = *(_BYTE*)(v12 + 52);
    }
    v13 = *(_BYTE*)(v11 + 52);
    if (v12 != 0) {
      v13 = v8;
    }
    v14 = v13 - 1;
    if (v14 < 3u) {
      v15 = GameData_208c628[v14];
    }
    else {
    LABEL_26:
      v16 = *(const char**)(v9 + 32);
      if (v16 != nullptr) {
        v15 = v16;
      }
      else {
        v15 = &GameData_1a9f09e;
      }
    }
    v22_.v28 = -1;
    v22_.v29 = -1;
    v22_.v30 = -1;
    v22_.v31 = -1;
    v17 = *msg_MessageManager_instance__ptr[0];
    v22_.v32 = -1;
    v22_.v33 = -1;
    v22_.v34 = -1;
    v22_.v35 = -1;
    v22_.v36 = -1;
    v22_.v37 = -1;
    v22_.v38 = -1;
    v22_.v39 = -1;
    v22_.v22 = msg_TagSelector_vtable;
    v22_.v23 = 0xFFFF0001FFFF0000LL;
    v22_.v24 = 0xFFFF0004FFFF0002LL;
    v22_.v25 = 0xFFFF0006FFFF0005LL;
    v22_.v40 = 8;
    v22_.v26 = -65529;
    v22_.v27 = -65528;
    v18 = GameRoutine_a4dbe0(v17, v15, 0);
    if (v18 != nullptr) {
      v19 = (__int64)v18;
      v20 = ui_LayoutAccessor_FindTextBox(a2, "T_Txt_After");
      if (v20 != 0) {
        GameRoutine_156c5d0(v20, v19, 0);
      }
    }
  }
  else if (v6 == 0) {
    return;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
}

void game_facility_anonymous_16b8020(__int64* a1, __int64* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char v13;
  unsigned __int8 v14;
  const char* v15;
  const char* v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  const char* v21[2];
  struct {
    __int64 (**v22)();
    __int64 v23;
    unsigned __int64 v24;
    unsigned __int64 v25;
    int v26;
    int v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
  } v22_;

  LayoutAccessor_1562cf0((__int64)a2, (unsigned int*)"JobChange");
  v21[0] = "L_Job";
  v21[1] = (_BYTE*)((_UNKNOWN*)0x5LL);
  GameRoutine_1587740((void*)(&v22_.v22), a2, v21);
  if (v22_.v23 != 0) {
    v4 = std___1___shared_weak_count_lock(v22_.v23);
    v5 = (__int64)v22_.v22;
    if (v22_.v23 != 0) {
      std___1___shared_weak_count___release_weak(v22_.v23);
    }
    if (v4 != 0 && v5 != 0) {
      *(_BYTE*)(v5 + 1106) = 1;
      JobIcon_19a9be0(v5, a1[1], a1[3]);
    }
    else if (v4 == 0) {
      goto LABEL_10;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
LABEL_10:
  v21[0] = "L_Job_After";
  v21[1] = (_BYTE*)(((_UNKNOWN**)0x8LL) + 3);
  GameRoutine_1587740((void*)(&v22_.v22), a2, v21);
  if (v22_.v23 == 0) {
    return;
  }
  v6 = std___1___shared_weak_count_lock(v22_.v23);
  v7 = (__int64)v22_.v22;
  if (v22_.v23 != 0) {
    std___1___shared_weak_count___release_weak(v22_.v23);
  }
  if (v6 != 0 && v7 != 0) {
    *(_BYTE*)(v7 + 1106) = 1;
    JobIcon_19a9be0(v7, a1[1], a1[2]);
    v10 = a1[1];
    v9 = a1[2];
    if (v10 == 0) {
      goto LABEL_26;
    }
    if (v9 != GameData_21c9988) {
      goto LABEL_26;
    }
    v11 = *(_QWORD*)(v10 + 392);
    if (v11 == 0) {
      goto LABEL_26;
    }
    v12 = *(_QWORD*)(*(_QWORD*)(v11 + 24) + 1784LL);
    if (v12 != 0) {
      v8 = *(_BYTE*)(v12 + 52);
    }
    v13 = *(_BYTE*)(v11 + 52);
    if (v12 != 0) {
      v13 = v8;
    }
    v14 = v13 - 1;
    if (v14 < 3u) {
      v15 = GameData_208c628[v14];
    }
    else {
    LABEL_26:
      v16 = *(const char**)(v9 + 32);
      if (v16 != nullptr) {
        v15 = v16;
      }
      else {
        v15 = &GameData_1a9f09e;
      }
    }
    v22_.v28 = -1;
    v22_.v29 = -1;
    v22_.v30 = -1;
    v22_.v31 = -1;
    v17 = *msg_MessageManager_instance__ptr[0];
    v22_.v32 = -1;
    v22_.v33 = -1;
    v22_.v34 = -1;
    v22_.v35 = -1;
    v22_.v36 = -1;
    v22_.v37 = -1;
    v22_.v38 = -1;
    v22_.v39 = -1;
    v22_.v22 = msg_TagSelector_vtable;
    v22_.v23 = 0xFFFF0001FFFF0000LL;
    v22_.v24 = 0xFFFF0004FFFF0002LL;
    v22_.v25 = 0xFFFF0006FFFF0005LL;
    v22_.v40 = 8;
    v22_.v26 = -65529;
    v22_.v27 = -65528;
    v18 = GameRoutine_a4dbe0(v17, v15, 0);
    if (v18 != nullptr) {
      v19 = (__int64)v18;
      v20 = ui_LayoutAccessor_FindTextBox(a2, "T_Txt_After");
      if (v20 != 0) {
        GameRoutine_156c5d0(v20, v19, 0);
      }
    }
  }
  else if (v6 == 0) {
    return;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
}

__int64 game_facility_anonymous_16c0960(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  int v2;
  int v3;
  unsigned __int64 v4;
  int v5;
  signed int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;
  float v16;
  float v17;
  bool v18;
  float v19;
  __int64* v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _DWORD* v30;
  __int64 result;
  __int64 v32[2];
  __int64 v33[2];
  struct {
    __int64* v34;
    __int64 v35;
  } v34_;

  v1 = *(_QWORD*)(a1 + 160);
  v2 = *(_DWORD*)(v1 + 216);
  v3 = *(_DWORD*)(*(_QWORD*)(v1 + 208) + 104LL);
  v4 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
  if ((int)v4 < 1) {
    v6 = 0;
  }
  else {
    v5 = *(_DWORD*)GameData_21d9988;
    v6 = 0;
    v7 = *(_DWORD*)(GameData_21d9988 + 4LL * (unsigned int)(v4 - 1));
    if (v7 >= v2) {
      v7 = *(_DWORD*)(v1 + 216);
    }
    if (v2 >= v5) {
      v5 = v7;
    }
    v8 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
    while (1) {
      v9 = (unsigned int)(v6 + v8) >> 1;
      v10 = *(_DWORD*)(GameData_21d9988 + 4LL * v9);
      if (v5 == v10) {
        break;
      }
      if (v5 < v10) {
        v8 = (unsigned int)(v6 + v8) >> 1;
      }
      else {
        v6 = v9 + 1;
      }
      if (v6 >= v8) {
        goto LABEL_15;
      }
    }
    v6 = v9 + 1;
  }
LABEL_15:
  if ((int)v4 >= 5) {
    LODWORD(v4) = 5;
  }
  v11 = *(_DWORD*)(GameData_21d9988 + 4LL * (int)v4 - 4);
  *(float*)(v1 + 240) = (float)v3;
  *(_DWORD*)(v1 + 244) = v3;
  *(_DWORD*)(v1 + 248) = v6;
  *(_DWORD*)(v1 + 232) = v2;
  *(_DWORD*)(v1 + 236) = v2;
  *(float*)(v1 + 256) = (float)v2;
  if (v11 >= v3 + v2) {
    v12 = v3 + v2;
  }
  else {
    v12 = v11;
  }
  if (v3 + v2 >= 0) {
    v13 = v12;
  }
  else {
    v13 = 0;
  }
  *(_DWORD*)(v1 + 260) = v13;
  if (v2 < v11) {
    *(_BYTE*)(v1 + 252) = 0;
    if ((v3 & 0x80000000) == 0) {
      *(_BYTE*)(v1 + 272) = 0;
      goto LABEL_30;
    }
  LABEL_28:
    *(_BYTE*)(v1 + 272) = 1;
    if (v2 > 0) {
      goto LABEL_30;
    }
    goto LABEL_29;
  }
  *(_BYTE*)(v1 + 252) = 1;
  if (v3 < 0) {
    goto LABEL_28;
  }
  *(_BYTE*)(v1 + 272) = 0;
LABEL_29:
  *(_DWORD*)(v1 + 240) = 0;
LABEL_30:
  v14 = (*(__int64 (**)(__int64))(*(_QWORD*)(v1 + 224) + 40LL))(v1 + 224);
  if (v14 != 0) {
    if (v3 >= 0) {
      v15 = v3;
    }
    else {
      v15 = -v3;
    }
    v16 = 0x1.8000000000000p+0f;
    v17 = (float)((float)v15 / (float)v14) * 0x1.8000000000000p+0f;
    if (v17 <= 0x1.8000000000000p+0f) {
      v16 = (float)((float)v15 / (float)v14) * 0x1.8000000000000p+0f;
    }
    v18 = v17 < 0x0.0p+0f;
    v19 = 0x0.0p+0f;
    if (!v18) {
      v19 = v16;
    }
  }
  else {
    v19 = 0x1.8000000000000p+0f;
  }
  *(float*)(v1 + 264) = v19;
  *(_WORD*)(v1 + 253) = 0;
  *(_BYTE*)(v1 + 273) = 1;
  if (*(_QWORD*)(v1 + 168) != 0) {
    v20 = *(__int64**)(v1 + 168);
  }
  else {
    v20 = ui_LayoutAccessor_empty__ptr[0];
  }
  LayoutAccessor_1560070((void*)(&v34_.v34), v20, "L_Reliance");
  if (v34_.v35 != 0) {
    v21 = std___1___shared_weak_count_lock(v34_.v35);
    if (v21 != 0) {
      v22 = v34_.v34;
      if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v23 = v21;
        (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        std___1___shared_weak_count___release_weak(v23);
      }
      if (v22 != nullptr) {
        v24 = v34_.v35;
        v33[0] = (__int64)v34_.v34;
        v33[1] = v34_.v35;
        v25 = v34_.v35;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v34_.v35 + 16), 1u,
                                  memory_order_relaxed);
        v26 = std___1___shared_weak_count_lock(v25);
        v27 = ui_LayoutAccessor_FindPane(v34_.v34, "Icon");
        v32[0] = 1119092736;
        ProcPopup_1736c50(1, v33, v27, (int*)v32);
        if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
          std___1___shared_weak_count___release_weak(v26);
        }
        std___1___shared_weak_count___release_weak(v24);
      }
    }
  }
  v28 = *(_QWORD*)(v1 + 208);
  v29 = *(_QWORD*)(v28 + 8);
  v32[0] = 0;
  v32[1] = v29;
  if (v29 != 0) {
    v32[0] = *(_QWORD*)(v29 + 392);
  }
  v30 = (_DWORD*)GameRoutine_932360((unsigned __int8*)(v28 + 24), v32);
  if (((*(_DWORD*)(v1 + 356) ^ *v30) & 0xFFF) != 0) {
    *(_DWORD*)(v1 + 356) = *v30;
    *(_BYTE*)(v1 + 361) = 1;
  }
  result = v34_.v35;
  if (v34_.v35 != 0) {
    return std___1___shared_weak_count___release_weak(v34_.v35);
  }
  return result;
}

__int64 game_facility_anonymous_18728d0(__int64 a1, char a2)
{
  char v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;

  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  if ((a2 & 1) == 0 && (v4 & 1) == 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
  }
  v11_.v11[0] = GameData_20f73c0;
  v11_.v11[1] = a1;
  v9_.v10 = v9_.v9;
  v11_.v12 = v11_.v11;
  v9_.v9[0] = GameData_20f7440;
  v6 = (*(__int64 (**)(__int64, _QWORD*, _QWORD*))(*(_QWORD*)a1 + 40LL))(
      a1, v11_.v11, v9_.v9);
  if (v9_.v10 == v9_.v9) {
    v7 = 32;
  }
  else {
    if (v9_.v10 == nullptr) {
      goto LABEL_9;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v9_.v10 + v7))((__int64)v9_.v10);
LABEL_9:
  if (v11_.v12 == v11_.v11) {
    v8 = 32;
    goto LABEL_13;
  }
  if (v11_.v12 != nullptr) {
    v8 = 40;
  LABEL_13:
    (*(void (**)(__int64))(*v11_.v12 + v8))((__int64)v11_.v12);
  }
  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 48LL))(a1, v6);
  return 12;
}

char* game_facility_anonymous_1872c00(__int64* a1)
{
  char v2;
  __int64 v3;
  char v5;
  __int64 v6;

  v2 = (*(__int64 (**)(__int64*))(*a1 + 496))(a1);
  v3 = *a1;
  if ((v2 & 1) != 0) {
    if (((*(__int64 (**)(__int64*))(v3 + 480))(a1) & 1) != 0) {
      return "EquipEmpty";
    }
    else if (((*(__int64 (**)(__int64*))(*a1 + 464))(a1) & 1) != 0 ||
             ((*(__int64 (**)(__int64*))(*a1 + 568))(a1) & 1) != 0) {
      return "Equip";
    }
    else {
      return "EquipDisable";
    }
  }
  else {
    v5 = (*(__int64 (**)(__int64*))(v3 + 488))(a1);
    v6 = *a1;
    if ((v5 & 1) != 0) {
      if (((*(__int64 (**)(__int64*))(v6 + 464))(a1) & 1) != 0 ||
          ((*(__int64 (**)(__int64*))(*a1 + 568))(a1) & 1) != 0) {
        return "Fixed";
      }
      else {
        return "FixedDisable";
      }
    }
    else if (((*(__int64 (**)(__int64*))(v6 + 480))(a1) & 1) != 0) {
      return "Empty";
    }
    else if (((*(__int64 (**)(__int64*))(*a1 + 464))(a1) & 1) != 0 ||
             ((*(__int64 (**)(__int64*))(*a1 + 568))(a1) & 1) != 0) {
      return &GameData_1a9f09e;
    }
    else {
      return "Disable";
    }
  }
}

__int64 game_facility_anonymous_1930ce0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64 result;
  __int64 v8;
  __int64* v9;
  unsigned __int8 v10;
  unsigned __int64* v11;
  __int64 v12;
  int v13;
  char v14;
  unsigned __int64* v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  struct {
    __int64 (**v23)();
    __int64 v24;
    unsigned __int64 v25;
    unsigned __int64 v26;
    int v27;
    int v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
  } v23_;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v22 = v6;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  std___1___shared_weak_count___release_weak(v4);
  v6 = v22;
  if (v22 == nullptr) {
  LABEL_5:
    v6 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  LayoutAccessor_1560070((void*)(&v23_.v23), v6, "L_KeyHelp");
  result = v23_.v24;
  if (v23_.v24 != 0) {
    v8 = std___1___shared_weak_count_lock(v23_.v24);
    v9 = (__int64*)v23_.v23;
    result = v23_.v24;
    if (v23_.v24 != 0) {
      result = std___1___shared_weak_count___release_weak(v23_.v24);
    }
    if (v8 != 0 && v9 != nullptr) {
      v10 = *(_BYTE*)(a1 + 96);
      v11 = (unsigned __int64*)(GameData_21f84a0 + 40LL * v10);
      if (*v11 != 0 && game_GameModeData_instance_ != 0 &&
          (v12 = game_GameVariableTable_Find(
               *(_QWORD**)(game_GameModeData_instance_ + 48), v11)) != 0) {
        v13 = *(_DWORD*)(v12 + 32);
      }
      else {
        v13 = 0;
      }
      v14 = GameRoutine_9db8a0(v10, v13) != nullptr;
      LayoutAccessor_155e830((__int64)v9, v14);
      v15 = (unsigned __int64*)(GameData_21f84b8 +
                                40LL * *(unsigned __int8*)(a1 + 96));
      if (*v15 != 0 && game_GameModeData_instance_ != 0 &&
          (v16 = game_GameVariableTable_Find(
               *(_QWORD**)(game_GameModeData_instance_ + 48), v15)) != 0 &&
          (unsigned __int8)*(_DWORD*)(v16 + 32) == 1) {
        v17 = "MID_Config_Disable";
      }
      else {
        v17 = "MID_Config_Enable";
      }
      v23_.v29 = -1;
      v23_.v30 = -1;
      v23_.v31 = -1;
      v23_.v32 = -1;
      v18 = *msg_MessageManager_instance__ptr[0];
      v23_.v33 = -1;
      v23_.v34 = -1;
      v23_.v35 = -1;
      v23_.v36 = -1;
      v23_.v37 = -1;
      v23_.v38 = -1;
      v23_.v39 = -1;
      v23_.v40 = -1;
      v23_.v23 = msg_TagSelector_vtable;
      v23_.v24 = 0xFFFF0001FFFF0000LL;
      v23_.v25 = 0xFFFF0004FFFF0002LL;
      v23_.v26 = 0xFFFF0006FFFF0005LL;
      v23_.v41 = 8;
      v23_.v27 = -65529;
      v23_.v28 = -65528;
      v19 = GameRoutine_a4dbe0_alt1(v18, v17, 0);
      if (v19 != nullptr) {
        v20 = (__int64)v19;
        v21 = ui_LayoutAccessor_FindTextBox_alt1(v9, (__int64)"T_Txt");
        if (v21 != 0) {
          GameRoutine_156c5d0(v21, v20, 0);
        }
      }
      result = ui_LayoutAccessor_FindAlignment(v9, (__int64)"A_Txt");
      if (result != 0) {
        result = Alignment_56b600(result);
      }
    }
    else if (v8 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      return std___1___shared_weak_count___release_weak(v8);
    }
  }
  return result;
}

void game_facility_anonymous_1930f40(__int64 a1, __int64* a2, char a3,
                                     __int64 a4, char* a5, char a6)
{
  const char* v7;
  const char* v11;
  __int64 v14;
  unsigned __int64* v15;
  __int64 v16;
  bool v17;
  unsigned int v18;
  unsigned __int64* v19;
  __int64 v20;
  int v21;
  char* v22;
  __int64 v23;

  v7 = "Num_Off";
  if (a4 != 0) {
    v11 = "Num";
    if ((a6 & 1) != 0) {
      v11 = "Num_Percent";
    }
    if ((a3 & 1) != 0) {
      v7 = v11;
    }
    LayoutAccessor_1562cf0_alt1((__int64)a2, v7);
    v14 = ui_LayoutAccessor_FindTextBox_alt1(a2, (__int64)"T_Num00");
    if (v14 != 0) {
      GameRoutine_156c5d0(v14, a4, 0);
    }
    v15 = (unsigned __int64*)(GameData_21f84b8 +
                              40LL * *(unsigned __int8*)(a1 + 96));
    v17 = *v15 == 0 || game_GameModeData_instance_ == 0 ||
          (v16 = game_GameVariableTable_Find(
               *(_QWORD**)(game_GameModeData_instance_ + 48), v15)) == 0 ||
          *(_BYTE*)(v16 + 32) != 1;
    v18 = *(unsigned __int8*)(a1 + 96);
    v19 = (unsigned __int64*)(GameData_21f74a0 + 40LL * v18);
    if (*v19 != 0 && game_GameModeData_instance_ != 0 &&
        (v20 = game_GameVariableTable_Find(
             *(_QWORD**)(game_GameModeData_instance_ + 48), v19)) != 0) {
      v21 = *(_DWORD*)(v20 + 32);
    }
    else {
      v21 = 0;
    }
    if ((v17 & (GameRoutine_9db8a0(v18, v21) != nullptr)) != 0) {
      v7 = "KeyOn";
    }
    else {
      v7 = "KeyOff";
    }
  }
  LayoutAccessor_1562cf0_alt1((__int64)a2, v7);
  if (a5 != nullptr) {
    ui_LayoutAccessor_SetPaneVisible((__int64)a2, (__int64)"T_Num01", a3 & 1);
    if ((a6 & 1) != 0) {
      v22 = GameRoutine_a4dbe0_alt1(*msg_MessageManager_instance__ptr[0],
                                    "MID_Sys_Percent", 0);
      a5 = game_util_Format("%s%s", a5, v22);
    }
    v23 = ui_LayoutAccessor_FindTextBox_alt1(a2, (__int64)"T_Num01");
    if (v23 != 0) {
      GameRoutine_156c5d0(v23, (__int64)a5, 0);
    }
  }
  else {
    ui_LayoutAccessor_SetPaneVisible((__int64)a2, (__int64)"T_Num01", 0);
  }
}

__int64 game_facility_anonymous_1964d30(__int64 a1)
{
  __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64* v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  int v10;
  __int64* v11;
  __int64 v12;
  unsigned int v13;
  char v14;
  __int64 result;

  *(_DWORD*)a1 = 1;
  v1 = GameData_21c9cf0;
  v2 = *(_QWORD*)(GameData_21c9cf0 + 72) - *(_QWORD*)(GameData_21c9cf0 + 64);
  if (v2 != 0) {
    v3 = v2 >> 3;
    v4 = a1;
    nn_os_LockMutex((__int64)&game_g_random_mutex);
    v5 = game_map_MapRandom_instance__ptr[0];
    v6 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((__int128*)0x10LL) + 8);
    v7 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
    v8 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((__int128*)0x10LL)) ^
         (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL))
          << 11);
    *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
               (unsigned __int64)((__int128*)0x10LL)) =
        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 4);
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v5 + 4) = v6;
    v9 = (v8 >> 8) ^ (v7 >> 19) ^ v8 ^ v7;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v5 + 8) = v7;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v5 + 12) = v9;
    v10 = v9 & 0x7FFFFFFF;
    nn_os_UnlockMutex((__int64)&game_g_random_mutex);
    a1 = v4;
    v11 = (__int64*)(*(_QWORD*)(v1 + 64) + 8LL * (unsigned int)(v10 % (int)v3));
  }
  else {
    v11 = (__int64*)&GameData_1c20f90;
  }
  v12 = *v11;
  *(_QWORD*)(a1 + 40) = v12;
  v13 = *(unsigned __int8*)(v12 + 40);
  if (v13 <= 6) {
    if (v13 <= 3) {
      if (v13 >= 2) {
        v14 = 2;
      }
      else {
        v14 = 3;
      }
    }
    else {
      v14 = 1;
    }
  }
  else {
    v14 = 0;
  }
  *(_BYTE*)(a1 + 56) = v14;
  *(_BYTE*)(a1 + 72) = v14;
  ProcDivinationSeq_1964e60(a1);
  result = GameRoutine_94b9a0();
  if (result != 0) {
    return GameHr_717fc0((unsigned __int64*)(*(_QWORD*)(result + 24) + 1152LL),
                         1);
  }
  return result;
}

void game_facility_anonymous_19688e0()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
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
  _QWORD* v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  char* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _BYTE v47[24];
  struct {
    __int64 v48;
    unsigned __int64 v49;
    char* v50;
    __int64 v51;
    int v52;
    char gap68_[4];
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
    __int64 v58;
    __int64 v59;
    __int64 v60;
    __int64 v61;
  } v48_;
  _QWORD v62[2];
  char v63;
  __int64 v64;
  struct {
    char gap168_[1];
    char v65[23];
    int v66;
    char gap196_[12];
    char* v67;
    __int64 v68;
    int v69;
    char gap228_[4];
    __int64 v70;
    __int64 v71;
    __int64 v72;
    __int64 v73;
    __int64 v74;
    __int64 v75;
    __int64 v76;
    __int64 v77;
    __int64 v78;
    char v79;
    char gap305_[15];
    char v80;
    char gap321_[47];
    __int64 v81;
  } v65_;

  v0 = *(__int64**)(game_UnitListSet_instance_ + 8);
  v1 = GameRoutine_94b9a0();
  v2 = *v0;
  v3 = v0[1];
  while (1) {
    if (v2 == v3) {
      goto LABEL_27;
    }
    if (v1 != 0) {
      v4 = *(__int64**)v2;
      v5 = **(_QWORD**)v2;
      if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v5 + 392) + 24LL) + 1672LL) ==
          *(_QWORD*)(*(_QWORD*)(v1 + 24) + 1672LL)) {
        break;
      }
    }
    v2 += 16;
  }
  v6 = *(_QWORD*)(v2 + 8);
  if (v6 == 0) {
  LABEL_9:
    v62[0] = 0;
    v62[1] = 0;
    v65_.v80 = 0;
    v65_.v81 = 0;
    v63 = 20;
    strcpy(v65_.v65, "_D");
    v64 = 0x335FAC9CE6BA9FE5LL;
    v7 = (__int64*)fw_memory_g_heap_manager_ptr;
    v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        40, 16, 0);
    *(_BYTE*)(v8 + 32) = 0;
    *(_QWORD*)v47 = 41;
    *(_QWORD*)&v47[8] = 32;
    *(_QWORD*)&v47[16] = v8;
    *(_QWORD*)v8 = 0x83E3A383E3AD82E3LL;
    *(_QWORD*)(v8 + 8) = 0x5FAEBDE78D85E9A9LL;
    *(_QWORD*)(v8 + 16) = 0xE55F8481E3A08DE5LL;
    *(_QWORD*)(v8 + 24) = 0xABB8E58481E3A08DLL;
    game_195ab40((__int64)&v48_.v48, (__int64)v47);
    v9 = v48_.v53;
    v10 = v48_.v54;
    v48_.v53 = 0;
    v48_.v54 = 0;
    v65_.v66 = v48_.v48;
    v65_.v70 = v9;
    v65_.v71 = v10;
    v65_.v69 = v48_.v52;
    v65_.v67 = v48_.v50;
    v65_.v68 = v48_.v51;
    v11 = v48_.v57;
    v12 = v48_.v58;
    v48_.v57 = 0;
    v48_.v58 = 0;
    v65_.v74 = v11;
    v65_.v75 = v12;
    v13 = v48_.v55;
    v14 = v48_.v56;
    v48_.v55 = 0;
    v48_.v56 = 0;
    v65_.v72 = v13;
    v65_.v73 = v14;
    v15 = v48_.v59;
    v16 = v48_.v60;
    v48_.v59 = 0;
    v48_.v60 = 0;
    v65_.v76 = v15;
    v65_.v77 = v16;
    v17 = v48_.v61;
    v48_.v61 = 0;
    v65_.v78 = v17;
    v65_.v79 = 1;
    if ((v47[0] & 1) != 0 && *(_QWORD*)&v47[16] != 0) {
      v18 = 128;
      if (*(_QWORD*)(*v7 + 200) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*v7 + v18, *(__int64*)&v47[16]);
    }
    v19 = *(_QWORD**)GameData_212dce8;
    v20 = (__int64)*GameData_2132490[0];
    v21 = strlen(*(const char**)GameData_2132490[0]);
    if (v21 < 0xFFFFFFFFFFFFFFF7LL) {
      v22 = v21;
      if (v21 >= 0x17) {
        if ((v21 | 7) == 0x17) {
          v24 = 26;
        }
        else {
          v24 = (v21 | 7) + 1;
        }
        v23 = (char*)fw_memory_HeapManager_Allocate(*v7, v24, 16, 0);
        v48_.v49 = v22;
        v48_.v50 = v23;
        v48_.v48 = v24 | 1;
      }
      else {
        LOBYTE(v48_.v48) = 2 * v21;
        v23 = (char*)&v48_.v48 + 1;
        if (v21 == 0) {
        LABEL_23:
          v23[v22] = 0;
          SceneManager_138c000(v19, (unsigned __int8*)&v48_.v48, v5,
                               (__int64)v62);
          if ((v48_.v48 & 1) == 0) {
            goto LABEL_52;
          }
          v25 = (__int64)v48_.v50;
          if (v48_.v50 == nullptr) {
            goto LABEL_52;
          }
          v26 = *v7;
          goto LABEL_49;
        }
      }
      memmove((__int64)v23, v20, v22);
      goto LABEL_23;
    }
  LABEL_53:
    String_60a1d0();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                            memory_order_relaxed);
  v5 = *v4;
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v5 != 0) {
      goto LABEL_9;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
    if (v5 != 0) {
      goto LABEL_9;
    }
  }
LABEL_27:
  v62[0] = 0;
  v62[1] = 0;
  v65_.v80 = 0;
  v65_.v81 = 0;
  v63 = 20;
  strcpy(v65_.v65, "_D");
  v64 = 0x335FAC9CE6BA9FE5LL;
  v27 = (__int64*)fw_memory_g_heap_manager_ptr;
  v28 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       40, 16, 0);
  *(_BYTE*)(v28 + 32) = 0;
  *(_QWORD*)v47 = 41;
  *(_QWORD*)&v47[8] = 32;
  *(_QWORD*)&v47[16] = v28;
  *(_QWORD*)v28 = 0x83E3A383E3AD82E3LL;
  *(_QWORD*)(v28 + 8) = 0x5FAEBDE78D85E9A9LL;
  *(_QWORD*)(v28 + 16) = 0xE55F8481E3A08DE5LL;
  *(_QWORD*)(v28 + 24) = 0xABB8E58481E3A08DLL;
  game_195ab40((__int64)&v48_.v48, (__int64)v47);
  v29 = v48_.v53;
  v30 = v48_.v54;
  v48_.v53 = 0;
  v48_.v54 = 0;
  v65_.v66 = v48_.v48;
  v65_.v70 = v29;
  v65_.v71 = v30;
  v65_.v69 = v48_.v52;
  v65_.v67 = v48_.v50;
  v65_.v68 = v48_.v51;
  v31 = v48_.v57;
  v32 = v48_.v58;
  v48_.v57 = 0;
  v48_.v58 = 0;
  v65_.v74 = v31;
  v65_.v75 = v32;
  v33 = v48_.v55;
  v34 = v48_.v56;
  v48_.v55 = 0;
  v48_.v56 = 0;
  v65_.v72 = v33;
  v65_.v73 = v34;
  v35 = v48_.v59;
  v36 = v48_.v60;
  v48_.v59 = 0;
  v48_.v60 = 0;
  v65_.v76 = v35;
  v65_.v77 = v36;
  v37 = v48_.v61;
  v48_.v61 = 0;
  v65_.v78 = v37;
  v65_.v79 = 1;
  if ((v47[0] & 1) != 0 && *(_QWORD*)&v47[16] != 0) {
    v38 = 128;
    if (*(_QWORD*)(*v27 + 200) == 0) {
      v38 = 56;
    }
    nn_mem_StandardAllocator_Free(*v27 + v38, *(__int64*)&v47[16]);
  }
  v39 = *(_QWORD**)GameData_212dce8;
  v40 = (__int64)*GameData_2132490[0];
  v41 = strlen(*(const char**)GameData_2132490[0]);
  if (v41 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_53;
  }
  v42 = v41;
  if (v41 >= 0x17) {
    if ((v41 | 7) == 0x17) {
      v44 = 26;
    }
    else {
      v44 = (v41 | 7) + 1;
    }
    v43 = (char*)fw_memory_HeapManager_Allocate(*v27, v44, 16, 0);
    v48_.v49 = v42;
    v48_.v50 = v43;
    v48_.v48 = v44 | 1;
  }
  else {
    LOBYTE(v48_.v48) = 2 * v41;
    v43 = (char*)&v48_.v48 + 1;
    if (v41 == 0) {
      goto LABEL_41;
    }
  }
  memmove((__int64)v43, v40, v42);
LABEL_41:
  v43[v42] = 0;
  v47[20] = 0;
  v47[0] = 38;
  *(_QWORD*)&v47[1] = 0xE3A282E35F444950LL;
  *(_QWORD*)&v47[9] = 0xAA83E38883E38A83LL;
  *(_DWORD*)&v47[16] = -1568480342;
  SceneManager_138c360(v39, (unsigned __int8*)&v48_.v48, (__int64)v47,
                       (__int64)v62);
  if ((v47[0] & 1) != 0 && *(_QWORD*)&v47[16] != 0) {
    v45 = 128;
    if (*(_QWORD*)(*v27 + 200) == 0) {
      v45 = 56;
    }
    nn_mem_StandardAllocator_Free(*v27 + v45, *(__int64*)&v47[16]);
  }
  if ((v48_.v48 & 1) != 0) {
    v25 = (__int64)v48_.v50;
    if (v48_.v50 != nullptr) {
      v26 = *v27;
    LABEL_49:
      v46 = 128;
      if (*(_QWORD*)(v26 + 200) == 0) {
        v46 = 56;
      }
      nn_mem_StandardAllocator_Free(v26 + v46, v25);
    }
  }
LABEL_52:
  GameRoutine_a0d9a0((__int64)v62);
}

void game_facility_anonymous_196b7d0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  struct {
    _QWORD v8[2];
    __int64 v9;
  } v8_;
  struct {
    __int64 v10;
    __int64 v11;
  } v10_;

  v0 = *(_QWORD*)(GameData_21f4000 + 264);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21f4000 + 256);
    v2 = *(_QWORD*)(GameData_21f4000 + 264);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v0 + 16), 1u,
                              memory_order_relaxed);
    v3 = std___1___shared_weak_count_lock(v2);
    std___1___shared_weak_count___release_weak(v0);
    if (v3 != 0) {
      if (v1 != 0) {
        v4 = fw_memory_g_heap_manager_ptr;
        v5 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
        v8_.v8[0] = 33;
        v8_.v8[1] = 25;
        v8_.v9 = v5;
        *(_WORD*)(v5 + 24) = 130;
        *(_QWORD*)(v5 + 16) = 0xA0E59FA3E95FAF82LL;
        *(_QWORD*)v5 = 0x83E3A183E3AB82E3LL;
        *(_QWORD*)(v5 + 8) = 0xE3BC83E3AF83E3A9LL;
        game_facility_144f120((void*)(&v10_.v10), v1, (__int64)v8_.v8);
        v6 = v10_.v11;
        if (v10_.v11 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v10_.v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          std___1___shared_weak_count___release_weak(v6);
        }
        if ((v8_.v8[0] & 1) != 0 && v8_.v9 != 0) {
          v7 = 128;
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
            v7 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v7, v8_.v9);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak(v3);
      }
    }
  }
}

__int64 game_facility_anonymous_197cfe0(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v4;
  int v5;
  char* v6;
  int v7;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;
  int v10;

  v10 = 0;
  v8_.v8[0] = GameData_211cdf8;
  v8_.v8[1] = a1;
  v8_.v9 = v8_.v8;
  v8_.v8[2] = a2;
  v8_.v8[3] = &v10;
  GameRoutine_156d580((__int64)v8_.v8);
  result = (__int64)v8_.v9;
  if (v8_.v9 == v8_.v8) {
    v4 = 32;
  }
  else {
    if (v8_.v9 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v8_.v9 + v4))((__int64)v8_.v9);
LABEL_6:
  v5 = v10;
  if (v10 <= 3) {
    do {
      v6 = game_util_Format("IconMastery%02d", v5);
      result = ui_LayoutAccessor_SetPaneVisible(a1, (__int64)v6, 0);
      v7 = v10;
      v5 = ++v10;
    } while (v7 < 3);
  }
  return result;
}

#pragma GCC visibility pop
