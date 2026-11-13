#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* GameRoutine_cb8a30(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_d58c00(__int64, __int64*);
_QWORD* GameRoutine_e23e40(_QWORD*, _QWORD*);
_QWORD* HubCharacterNatives_ceca80(_QWORD* result, __int64, char);
_QWORD* Manager_66cc20(__int64*, _QWORD*);
__attribute__((swiftcall)) void
EventManager_cbc0c0(PSEUDO_X8, __int64, __int64, unsigned __int64, const char*);
__attribute__((swiftcall)) void GameRoutine_622ac0(PSEUDO_X8, float32x2_t*);
__attribute__((swiftcall)) void LocatorDispos_db1e20(PSEUDO_X8,
                                                     __int64* result);
__attribute__((swiftcall)) void LocatorDispos_db1f30(PSEUDO_X8,
                                                     unsigned __int8*);
__attribute__((swiftcall)) void Manager_d54320(PSEUDO_X8);
__attribute__((swiftcall)) void Manager_d9b810(PSEUDO_X8, __int64, __int64,
                                               __int64, __int64, unsigned int);
__attribute__((swiftcall)) void Quat_624bc0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void RouteNavMesh_fe7000(PSEUDO_X8, _QWORD*,
                                                    __int128*, float, float);
__attribute__((swiftcall)) void
RouteNavMesh_fe7260(PSEUDO_X8, _QWORD*, __int128*, __int128*, float);
__attribute__((swiftcall)) void game_hub_cb8120(PSEUDO_X8, _QWORD*, __int64,
                                                unsigned int, __int64);
__attribute__((swiftcall)) void game_hub_cb8620(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void
game_hub_cb8930_alt1(PSEUDO_X8, __int64, __int64,
                     __int64) __asm__("game_hub_cb8930");
__attribute__((swiftcall)) void game_hub_d6fba0(PSEUDO_X8, __int64, const char*,
                                                unsigned __int64, const char*);
__attribute__((swiftcall)) void math_Quat_FromYawPitchRoll(PSEUDO_X8, float,
                                                           float, float);
__attribute__((swiftcall)) void std___1_to_string_1a0acd0(PSEUDO_X8, _QWORD,
                                                          float);
__int64* GameHr_e24420(__int64**, unsigned __int8*, __int64, __int64**);
__int64* GameRoutine_d6d880(__int64*, __int64);
__int64* HandlePtr_cb3600(__int64* result, __int64, __int64, unsigned __int64);
__int64* game_ff5c20(__int64, unsigned __int8*);
__int64 DungeonController_f5f480();
__int64 GameHr_cb3e60(__int64*, __int64);
__int64 GameHr_d70540(__int64, const char*);
__int64 GameRoutine_112180(__int64, __int64);
__int64 GameRoutine_16962f0();
__int64 GameRoutine_17b8e80(__int64, char);
__int64 GameRoutine_17b8f40(__int64, char);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameRoutine_8229c0();
__int64 GameRoutine_cae2c0(__int64, __int64*);
__int64 GameRoutine_d6aa20(__int64);
__int64 GameRoutine_d6b220(__int64, float32x4_t*, double, double, double);
__int64 GameRoutine_e22430(__int64, __int64*);
__int64 GameRoutine_f71d40(__int64, __int64, __int64);
__int64 GameRoutine_f72090(__int64, __int64);
__int64 HubCharacterNatives_caea10(__int64 result, int, char);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_155ea30(__int64*);
__int64 LayoutAccessor_1567000(__int64, char);
__int64 RouteNavMesh_fe6c60(_QWORD*, unsigned int**);
__int64 SmoothPath_d91350(__int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_hub_Character_RebuildAppearance(__int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, __int64, __int64,
                                               __int64, unsigned int,
                                               unsigned int, int, float, float);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(__int64);
bool GameHr_c13700(__int64, const char*, unsigned __int64);
bool as_d9af70(__int64, __int64, __int64, __int64, unsigned int);
bool game_zview_d95b30(__int64, __int64, __int64);
extern _UNKNOWN* GameData_1f9caf8;
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* as_g_context_slots_ptr;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern _UNKNOWN GameData_2167770;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_2259190;
extern _UNKNOWN GameData_22591c0;
extern _UNKNOWN GameData_22591f0;
extern _UNKNOWN GameData_2259220;
extern _UNKNOWN GameData_2259250;
extern _UNKNOWN GameData_2259280;
extern _UNKNOWN GameData_22592b0;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1fd3de0[28])();
extern __int64 (*GameData_1fded10[])();
extern __int64 (*HandlePtr_Unknown21_cb39c0_ptr[7])();
extern __int64* GameData_212d458[7];
extern __int64* GameData_212ebb0[7];
extern __int64* GameData_212ebe0;
extern __int64* GameData_212f060[2];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dbc0[8];
extern __int64 GameData_212dc68;
extern __int64 GameData_212ec00;
extern __int64 GameData_21c6978;
extern __int64 GameData_21ec7c0;
extern __int64 GameData_21f3cc0;
extern __int64 GameData_21f3d10;
extern __int64 GameData_220d620;
extern __int64 GameData_220f8b0;
extern __int64 GameData_22127a8;
extern __int64 GameData_2259168;
extern __int64 GameData_2259170;
extern __int64 GameData_2259178;
extern __int64 GameData_2259180;
extern __int64 GameData_2259188;
extern __int64 GameData_2259198;
extern __int64 GameData_22591a0;
extern __int64 GameData_22591a8;
extern __int64 GameData_22591b0;
extern __int64 GameData_22591b8;
extern __int64 GameData_22591c8;
extern __int64 GameData_22591d0;
extern __int64 GameData_22591d8;
extern __int64 GameData_22591e0;
extern __int64 GameData_22591e8;
extern __int64 GameData_22591f8;
extern __int64 GameData_2259200;
extern __int64 GameData_2259208;
extern __int64 GameData_2259210;
extern __int64 GameData_2259218;
extern __int64 GameData_2259228;
extern __int64 GameData_2259230;
extern __int64 GameData_2259238;
extern __int64 GameData_2259240;
extern __int64 GameData_2259248;
extern __int64 GameData_2259258;
extern __int64 GameData_2259260;
extern __int64 GameData_2259268;
extern __int64 GameData_2259270;
extern __int64 GameData_2259278;
extern __int64 GameData_2259288;
extern __int64 GameData_2259290;
extern __int64 GameData_2259298;
extern __int64 GameData_22592a0;
extern __int64 GameData_22592a8;
extern __int64 GameData_225ca88;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_hub_ProgressEventView_instance_;
extern char GameData_1a9d6f9[];
extern char GameData_1a9f09e;
extern char GameData_2222318;
extern int GameData_1ba0734[];
float fmodf(float, float);
int __cxa_guard_acquire(__int64);
int memcmp(__int64, __int64, unsigned __int64);
unsigned __int64 strlen(const char*);
void Character_ca9280(__int64);
void GameHr_cacc00(__int64);
void GameRoutine_1566440(__int64, char);
void GameRoutine_7a8220(__int64*, _QWORD*);
void GameRoutine_d6c640(__int64*, _QWORD*);
void GameRoutine_d9bc80(__int64, __int64*, __int64*);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_64aa00();
void __attribute__((noreturn)) GameRoutine_8123d0();
void __attribute__((noreturn)) GameRoutine_874520();
void __attribute__((noreturn)) GameRoutine_cb48b0();
void __attribute__((noreturn)) GameRoutine_d97190();
void __attribute__((noreturn)) GameRoutine_e23e20();
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) fs_60a230();
void __cxa_guard_release(__int64);
void game_hub_d6f2a0(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c830(__int64, float);
void game_hub_cb12a0(_QWORD* a1, unsigned __int8* a2, __int64* a3);
__attribute__((swiftcall)) void game_hub_cb8930(PSEUDO_X8 x8_, _QWORD* a1,
                                                __int64 a2, __int64 a3);
void game_hub_d6bda0(__int64 a1, double a2, double a3, double a4);
bool game_hub_d6f600(__int64 a1, int a2);
float game_hub_d70270(__int64 a1, const char* a2, unsigned __int64 a3,
                      const char* a4);
void game_hub_d799f0(__int64 a1);
__int64 game_hub_d85af0();
__attribute__((swiftcall)) void game_hub_d96ce0(PSEUDO_X8 x8_, _QWORD* a1,
                                                __int64 a2, __int64 a3);
__int64 game_hub_e1dce0();
void game_hub_e22600(__int64 a1, _QWORD* a2, unsigned __int8* a3);
void game_hub_e24840(unsigned __int8* a1);
__int64 game_hub_f8a870(__int64 result, __int64* a2);
__attribute__((swiftcall)) void
game_hub_fb48a0(PSEUDO_X8 x8_, __int64 unused_int0, unsigned __int8* a1);
__attribute__((swiftcall)) void game_hub_102e120(PSEUDO_X8 x8_, __int64 result,
                                                 __int64* a2);

void game_hub_cb12a0(_QWORD* a1, unsigned __int8* a2, __int64* a3)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  const char* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  const char* v19;
  unsigned __int64 v20;
  unsigned int v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 (*v27)();
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  const char* v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  const char* v39;
  unsigned __int64 v40;
  _QWORD* v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64* v44;
  char* v45;
  _QWORD* v46;
  __int64 v47;
  __int64 v48;
  char* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  struct {
    __int64 v56;
    unsigned int v57;
  } v56_;
  struct {
    __int64 v58;
    int v59;
    char gap36_[4];
    __int64 v60;
    int v61;
  } v58_;
  struct {
    __int64 v62;
    __int64 v63;
    __int64 v64;
  } v62_;

  v3 = *a2;
  if ((v3 & 1) != 0) {
    v4 = *((_QWORD*)a2 + 1);
  }
  else {
    v4 = v3 >> 1;
  }
  if (v4 == 0) {
    return;
  }
  v5 = a1[33];
  v62_.v63 = 0;
  v62_.v64 = 0;
  v62_.v62 = 0;
  v58_.v58 = v5;
  v58_.v61 = 1;
  HandlePtr_cb3600(&v62_.v62, (__int64)&v58_.v58, (__int64)&v62_.v62, 1u);
  if (v58_.v61 != -1) {
    ((void (*)(__int64*, __int64*))GameData_1fd3de0[v58_.v61])(&v56_.v56,
                                                               &v58_.v58);
  }
  v9 = (__int64*)GameData_212dbb8[0];
  if (*(_QWORD*)GameData_212dbb8[0] != 0) {
    v10 = *(_QWORD*)GameData_212dbb8[0] + 248LL;
  }
  else {
    v10 = 0;
  }
  if (GameData_22127a8 != 0) {
    v11 = GameData_22127a8;
  }
  else {
    v11 = v10;
  }
  GameRoutine_d9bc80(v11, &v62_.v62, a3);
  v12 = *v9;
  v58_.v58 = 0;
  v58_.v60 = 0;
  v58_.v59 = 0x2000;
  if (v12 != 0) {
    v13 = v12 + 248;
  }
  else {
    v13 = 0;
  }
  if (GameData_22127a8 != 0) {
    v14 = GameData_22127a8;
  }
  else {
    v14 = v13;
  }
  if ((*a2 & 1) != 0) {
    v15 = *((const char**)a2 + 2);
  }
  else {
    v15 = (const char*)(a2 + 1);
  }
  v16 = strlen(v15);
  if (as_d9af70(v14, (__int64)v15, v16, (__int64)&v62_.v62, 1u)) {
    if (*v9 != 0) {
      v17 = *v9 + 248;
    }
    else {
      v17 = 0;
    }
    if (GameData_22127a8 != 0) {
      v18 = GameData_22127a8;
    }
    else {
      v18 = v17;
    }
    if ((*a2 & 1) != 0) {
      v19 = *((const char**)a2 + 2);
    }
    else {
      v19 = (const char*)(a2 + 1);
    }
    v20 = strlen(v19);
    Manager_d9b810((void*)((__int64)&v56_.v56), v18, (__int64)v19, v20,
                   (__int64)&v62_.v62, 1u);
    v21 = v56_.v57;
    v58_.v58 = v56_.v56;
    v58_.v59 = v56_.v57;
    if (v56_.v57 == 0x2000 || (v22 = (_QWORD*)((char*)as_g_context_slots_ptr +
                                               16 * v56_.v57))[1] == 0) {
      v58_.v60 = 0;
    }
    else {
      if (*v22 == v56_.v56) {
        v23 = v22[1];
      }
      else {
        v23 = 0;
      }
      v58_.v60 = v23;
    }
    goto LABEL_81;
  }
  v25 = v62_.v62;
  v24 = v62_.v63;
  v26 = v62_.v62 + 32;
  if (v62_.v62 + 32 == v62_.v63) {
    goto LABEL_48;
  }
  do {
    v28 = *(unsigned int*)(v26 - 8);
    v29 = *(unsigned int*)(v26 + 24);
    if ((_DWORD)v28 == -1) {
      if ((_DWORD)v29 == -1) {
        goto LABEL_42;
      }
    LABEL_41:
      v27 = HandlePtr_Unknown21_cb39c0_ptr[v29];
      v56_.v56 = v26 - 32;
      ((void (*)(__int64*))v27)(&v56_.v56);
      goto LABEL_42;
    }
    if ((_DWORD)v29 != -1) {
      goto LABEL_41;
    }
    ((void (*)(__int64*, __int64))GameData_1fd3de0[v28])(&v56_.v56, v26 - 32);
    *(_DWORD*)(v26 - 8) = -1;
  LABEL_42:
    v26 += 32;
  } while (v26 != v24);
  v24 = v62_.v63;
  v25 = v26 - 32;
LABEL_48:
  if (v25 != v24) {
    do {
      v30 = *(unsigned int*)(v24 - 8);
      v31 = v24 - 32;
      if ((_DWORD)v30 != -1) {
        ((void (*)(__int64*, __int64))GameData_1fd3de0[v30])(&v56_.v56,
                                                             v24 - 32);
      }
      *(_DWORD*)(v24 - 8) = -1;
      v24 -= 32;
    } while (v31 != v25);
  }
  v32 = *v9;
  v62_.v63 = v25;
  if (v32 != 0) {
    v33 = v32 + 248;
  }
  else {
    v33 = 0;
  }
  if (GameData_22127a8 != 0) {
    v34 = GameData_22127a8;
  }
  else {
    v34 = v33;
  }
  if ((*a2 & 1) != 0) {
    v35 = *((const char**)a2 + 2);
  }
  else {
    v35 = (const char*)(a2 + 1);
  }
  v36 = strlen(v35);
  if (!as_d9af70(v34, (__int64)v35, v36, (__int64)&v62_.v62, 1u)) {
    v43 = a1[137];
    v44 = a1 + 137;
    if (v43 < a1[138]) {
    LABEL_90:
      *(_QWORD*)v43 = 0;
      *(_QWORD*)(v43 + 16) = 0;
      v50 = v43 + 24;
      *(_DWORD*)(v43 + 8) = 0x2000;
      goto LABEL_91;
    }
  LABEL_89:
    v50 = GameHr_cb3e60(a1 + 136, (__int64)&v58_.v58);
    goto LABEL_91;
  }
  if (*v9 != 0) {
    v37 = *v9 + 248;
  }
  else {
    v37 = 0;
  }
  if (GameData_22127a8 != 0) {
    v38 = GameData_22127a8;
  }
  else {
    v38 = v37;
  }
  if ((*a2 & 1) != 0) {
    v39 = *((const char**)a2 + 2);
  }
  else {
    v39 = (const char*)(a2 + 1);
  }
  v40 = strlen(v39);
  Manager_d9b810((void*)((__int64)&v56_.v56), v38, (__int64)v39, v40,
                 (__int64)&v62_.v62, 1u);
  v21 = v56_.v57;
  v58_.v58 = v56_.v56;
  v58_.v59 = v56_.v57;
  if (v56_.v57 == 0x2000 || (v41 = (_QWORD*)((char*)as_g_context_slots_ptr +
                                             16 * v56_.v57))[1] == 0) {
    v42 = 0;
  }
  else if (*v41 == v56_.v56) {
    v42 = v41[1];
  }
  else {
    v42 = 0;
  }
  v58_.v60 = v42;
LABEL_81:
  v43 = a1[137];
  v44 = a1 + 137;
  if (v43 >= a1[138]) {
    goto LABEL_89;
  }
  if (v21 == 0x2000) {
    goto LABEL_90;
  }
  v45 = (char*)as_g_context_slots_ptr;
  v46 = (_QWORD*)((char*)as_g_context_slots_ptr + 16 * v21);
  v47 = v46[1];
  if (v47 == 0 || *v46 != v58_.v58) {
    goto LABEL_90;
  }
  *(_QWORD*)v43 = 0;
  *(_QWORD*)(v43 + 16) = 0;
  *(_DWORD*)(v43 + 8) = 0x2000;
  v48 = *(unsigned int*)(v47 + 8);
  if ((_DWORD)v48 != 0x2000) {
    v49 = &v45[16 * v48];
    if (*((_QWORD*)v49 + 1) == v47) {
      *(_DWORD*)(v43 + 8) = v48;
      *(_QWORD*)v43 = *(_QWORD*)v49;
    }
  }
  *(_QWORD*)(v43 + 16) = v47;
  v50 = v43 + 24;
LABEL_91:
  *v44 = v50;
  v51 = v62_.v62;
  if (v62_.v62 != 0) {
    v52 = v62_.v63;
    if (v62_.v62 == v62_.v63) {
      goto LABEL_98;
    }
    do {
      v53 = *(unsigned int*)(v52 - 8);
      v54 = v52 - 32;
      if ((_DWORD)v53 != -1) {
        ((void (*)(__int64*, __int64))GameData_1fd3de0[v53])(&v58_.v58,
                                                             v52 - 32);
      }
      *(_DWORD*)(v52 - 8) = -1;
      v52 -= 32;
    } while (v54 != v51);
    v62_.v63 = v51;
    v51 = v62_.v62;
    if (v62_.v62 != 0) {
    LABEL_98:
      v55 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v55 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v55, v51);
    }
  }
}

__attribute__((swiftcall)) void game_hub_cb8930(PSEUDO_X8 x8_, _QWORD* a1,
                                                __int64 a2, __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    __int64 v10;
    __int64 v11;
  } v10_;
  struct {
    __int64 v12;
    __int64 v13;
  } v12_;

  result =
      X8CALL_X0(__int64, game_hub_cb8120((void*)(&v12_.v12), a1, a2, 0, a3));
  v7 = v12_.v12;
  if (v12_.v12 != 0) {
    v8 = v12_.v13;
    *(_BYTE*)(v12_.v12 + 1132) = 1;
    v10_.v10 = v7;
    v10_.v11 = v8;
    if (v8 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                memory_order_relaxed);
    }
    GameRoutine_cb8a30(a1 + 6, &v10_.v10);
    result = v10_.v11;
    if (v10_.v11 != 0) {
      result = std___1___shared_weak_count___release_weak(v10_.v11);
    }
    *a4 = v7;
    a4[1] = v8;
    if (v8 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        {
          std___1___shared_weak_count___release_weak(v8);
          return;
        }
      }
    }
  }
  else {
    v9 = v12_.v13;
    if (v12_.v13 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v12_.v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      result = std___1___shared_weak_count___release_weak(v9);
    }
    *a4 = 0;
    a4[1] = 0;
  }
  {
    result;
    return;
  }
}

void game_hub_d6bda0(__int64 a1, double a2, double a3, double a4)
{
  unsigned int** v4;
  unsigned int** v5;
  __int64 v7;
  __int64 v8;
  unsigned int** v9;
  unsigned int** v11;
  __int64 v12;
  __int64 v13;
  unsigned int* v14;
  unsigned int* v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  unsigned int** v19;
  float v20;
  _QWORD* v21;
  float v22;
  __int128 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  float32x4_t v30;
  unsigned __int64 v31;
  float v32;
  float32x4_t v33;
  float32x4_t v34;
  float v35;
  __int64 v36;
  __int64 v37;
  float v38;
  int8x16_t v39;
  unsigned __int64 v40;
  float v41;
  float v42;
  float32x4_t v43;
  int8x16_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  int8x16_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x4_t v58;
  float32x4_t v59;
  float32x4_t v60;
  int8x16_t v61;
  float32x4_t v62;
  int8x16_t v63;
  float32x4_t v64;
  float32x4_t v65;
  int8x16_t v66;
  float v67;
  float32x4_t v68;
  float v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  float32x4_t v76;
  float v77;
  float32x4_t v78;
  float v79;
  struct {
    unsigned int* v80;
    __int64 v81;
  } v80_;
  struct {
    __int64 v82;
    __int64 v83;
  } v82_;
  struct {
    __int64 v84;
    __int64 v85;
  } v84_;
  float32x4_t v86;
  float32x4_t v87;
  int8x16_t v88;
  __int128 v89;
  float32x4_t v90;

  v4 = *(unsigned int***)(a1 + 1152);
  v5 = *(unsigned int***)(a1 + 1160);
  if (v4 != v5) {
    while (1) {
      v7 = (__int64)v4[1];
      if (v7 == 0) {
        break;
      }
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                memory_order_relaxed);
      v8 = *(_QWORD*)(v7 + 8);
      std___1___shared_weak_count___release_weak_alt1(v7);
      if (v8 == -1) {
        break;
      }
      v4 += 2;
      if (v4 == v5) {
        v4 = v5;
        goto LABEL_11;
      }
    }
  }
  v9 = v4 + 2;
  if (v4 != v5 && v9 != v5) {
    do {
      v12 = (__int64)v9[1];
      if (v12 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                                  memory_order_relaxed);
        v13 = *(_QWORD*)(v12 + 8);
        std___1___shared_weak_count___release_weak_alt1(v12);
        if (v13 != -1) {
          v14 = *v9;
          v15 = v9[1];
          *v9 = nullptr;
          v9[1] = nullptr;
          v16 = (__int64)v4[1];
          *v4 = v14;
          v4[1] = v15;
          if (v16 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v16);
          }
          v4 += 2;
        }
      }
      v9 += 2;
    } while (v9 != v5);
  }
LABEL_11:
  v11 = *(unsigned int***)(a1 + 1160);
  if (v4 == v11) {
    v4 = *(unsigned int***)(a1 + 1160);
  }
  else {
    for (; v11 != v4; v11 -= 2) {
      v17 = (__int64)*(v11 - 1);
      if (v17 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v17);
      }
    }
    *(_QWORD*)(a1 + 1160) = v4;
  }
  v18 = *(_QWORD**)(GameData_220f8b0 + 8);
  if (v18 != nullptr) {
    v19 = *(unsigned int***)(a1 + 1152);
    if (*(_BYTE*)(a1 + 1197) == 1) {
      if (v4 != v19) {
        return;
      }
      v20 = *(float*)(a1 + 268);
      if (v20 == 0x0.0p+0f) {
        LODWORD(a4) = *(_DWORD*)(a1 + 252);
        v21 = *(_QWORD**)(GameData_220f8b0 + 8);
        v22 = *(float*)(a1 + 260) * 0x1.0000000000000p-1f;
        *(_QWORD*)&v23 = *(_QWORD*)(a1 + 244);
        *((double*)&v23 + 1) = a4;
        v89 = v23;
        RouteNavMesh_fe7000((void*)((__int64*)&v90), v21, &v89, v22,
                            *(float*)(a1 + 264));
        v24 = LANES128(v90).n128_i64[1];
        if (LANES128(v90).n128_u64[1] != 0) {
          v25 = std___1___shared_weak_count_lock(LANES128(v90).n128_i64[1]);
          if (v25 == 0) {
            goto LABEL_37;
          }
          v26 = v25;
          if (LANES128(v90).n128_u64[0] != 0) {
            *(_QWORD*)&v89 = LANES128(v90).n128_u64[0];
            *((_QWORD*)&v89 + 1) = v25;
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                                      memory_order_relaxed);
            GameRoutine_d6c640((__int64*)(a1 + 1152), &v89);
            if (*((_QWORD*)&v89 + 1) != 0) {
              std___1___shared_weak_count___release_weak_alt1(
                  *((__int64*)&v89 + 1));
            }
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
            std___1___shared_weak_count___release_weak_alt1(v26);
          }
          v24 = LANES128(v90).n128_i64[1];
          if (LANES128(v90).n128_u64[1] != 0) {
          LABEL_37:
            std___1___shared_weak_count___release_weak_alt1(v24);
          }
        }
        return;
      }
      v29 = *(_QWORD**)(GameData_220f8b0 + 8);
      LANES128(v30).n128_u64[0] = *(_QWORD*)(a1 + 260);
      v31 = LODWORD(v20);
      v32 =
          vmuls_lane_f32(0x1.0000000000000p-1f,
                         COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0]), 1);
      LANES128(v30).n128_u64[1] = v31;
      LANES128(v33).n128_u64[0] = 0x3F0000003F000000LL;
      LANES128(v33).n128_u64[1] = 0x3F0000003F000000LL;
      v34 = vmulq_f32(v30, v33);
      LANES128(v33).n128_u32[0] = 0;
      v90 = v34;
      LANES128(v33).n128_f32[1] = v32;
      LANES128(v34).n128_u64[0] =
          LANES64_OF(
              vadd_f32(*(float32x2_t*)(a1 + 244),
                       COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
              .n64_u64[0];
      v35 = *(float*)(a1 + 256);
      LANES128(v34).n128_u64[1] =
          COERCE_UNSIGNED_INT(*(float*)(a1 + 252) + 0x0.0p+0f);
      v88 = v34;
      RouteNavMesh_fe7260((void*)((__int64*)&v89), v29, (__int128*)&v88,
                          (__int128*)&v90, v35);
      if (*((_QWORD*)&v89 + 1) != 0) {
        v36 = std___1___shared_weak_count_lock(*((__int64*)&v89 + 1));
        if (v36 != 0) {
          v37 = v36;
          if ((_QWORD)v89 != 0) {
            LANES128(v88).n128_u64[0] = v89;
            LANES128(v88).n128_u64[1] = v36;
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 16), 1u,
                                      memory_order_relaxed);
            GameRoutine_d6c640((__int64*)(a1 + 1152), &v88);
            if (LANES128(v88).n128_u64[1] != 0) {
              std___1___shared_weak_count___release_weak_alt1(
                  LANES128(v88).n128_i64[1]);
            }
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
            std___1___shared_weak_count___release_weak_alt1(v37);
          }
        }
      }
      if ((float)(*(float*)(a1 + 268) * 0x1.0000000000000p-1f) >=
          (float)(*(float*)(a1 + 260) * 0x1.0000000000000p-1f)) {
        v38 = *(float*)(a1 + 260) * 0x1.0000000000000p-1f;
      }
      else {
        v38 = *(float*)(a1 + 268) * 0x1.0000000000000p-1f;
      }
      math_Quat_FromYawPitchRoll((void*)(&v88),
                                 *(float*)(a1 + 256) * 0x1.1df46a0000000p-6f,
                                 0x0.0p+0f, 0x0.0p+0f);
      LANES128(v39).n128_u32[1] = 0;
      LANES128(v39).n128_u32[3] = 0;
      HIDWORD(v40) = 0;
      v41 = LANES128(v90).n128_f32[0] - v38;
      if ((float)(LANES128(v90).n128_f32[0] - v38) < 0x0.0p+0f) {
        v41 = 0x0.0p+0f;
      }
      LANES128(v39).n128_f32[0] = v41;
      *(float*)&v40 = v41;
      if ((float)(LANES128(v90).n128_f32[2] - v38) >= 0x0.0p+0f) {
        v42 = LANES128(v90).n128_f32[2] - v38;
      }
      else {
        v42 = 0x0.0p+0f;
      }
      LANES128(v39).n128_f32[2] = v42;
      LANES128(v43).n128_u64[0] = v40;
      v44 = vmulq_f32(v88, COERCE_AS(float32x4_t, GameData_1a829d0));
      LANES128(v45).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v46).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v47).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v45).n128_u64[1] = LANES128(v45).n128_u64[0];
      LANES128(v43).n128_u64[1] = LANES128(v46).n128_u64[0];
      *(int8x8_t*)&LANES128(v47).n128_i8[8] =
          vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      v48 = vmulq_f32(v43, v47);
      LANES128(v43).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int32x2_t*)&LANES128(v43).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v44).n128_u64[0]), 1);
      LANES128(v49).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v39, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v46).n128_u64[1] = LANES128(v49).n128_u64[0];
      LANES128(v49).n128_u64[1] = v40;
      v50 = vmlaq_f32(vmlaq_f32(vmulq_f32(v44, v45),
                                COERCE_AS(float32x4_t, GameData_1a83800), v48),
                      COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v49, v43));
      LANES128(v49).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v49).n128_i8[8] =
          vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      LANES128(v44).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v88, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v44).n128_u64[1] = LANES128(v44).n128_u64[0];
      v51 = vmlsq_f32(v50, v49, v46);
      LANES128(v49).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v88, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v52).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v51, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v53).n128_u64[0] = LANES128(v88).n128_u64[0];
      LANES128(v54).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v51, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v53).n128_u64[1] = LANES128(v49).n128_u64[0];
      *(int8x8_t*)&LANES128(v52).n128_i8[8] =
          vqtbl1_s8(v51, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      *(int32x2_t*)&LANES128(v54).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v51).n128_u64[0]), 1);
      v55 = vmlaq_f32(vmulq_f32(v44, v51),
                      COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v53, v52));
      LANES128(v52).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v88, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v49).n128_u64[1] = LANES128(v52).n128_u64[0];
      LANES128(v52).n128_u64[1] = LANES128(v88).n128_u64[0];
      LANES128(v56).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v51, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v51).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v51, COERCE_AS(int8x8_t, 0xB0A090803020100LL)))
              .n64_u64[0];
      LANES128(v56).n128_u64[1] = LANES128(v51).n128_u64[0];
      PSEUDO_LOW_LANE128(v51, n128_u32, *(_DWORD*)(a1 + 252));
      v57 = vmlsq_f32(vmlaq_f32(v55, COERCE_AS(float32x4_t, GameData_1a83800),
                                vmulq_f32(v52, v54)),
                      v56, v49);
      LANES128(v56).n128_u64[0] = *(_QWORD*)(a1 + 244);
      LANES128(v57).n128_u32[3] = 0;
      LANES128(v56).n128_u64[1] = LANES128(v51).n128_u64[0];
      v58 = vsubq_f32(v56, v57);
      v59 = vaddq_f32(v56, v57);
      v78 = v58;
      v60 = vsubq_f32(v58, v59);
      v87 = v59;
      v61 = vmulq_f32(v60, v60);
      LANES128(v61).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v61, v61, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v61).n128_u64[0])))
              .n64_u64[0];
      v77 = LANES64_OF(vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v61).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v61).n128_u64[0]))))
                .n64_f32[0];
      if (v77 > 0x0.0p+0f) {
        v62 = vsubq_f32(v59, v78);
        v63 = vmulq_f32(v62, v62);
        LANES128(v63).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v63, v63, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v63).n128_u64[0])))
                .n64_u64[0];
        LANES128(v63).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v63).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v63).n128_u64[0])))
                .n64_u64[0];
        LANES128(v63).n128_u64[1] = LANES128(v63).n128_u64[0];
        v64 = vrsqrteq_f32(v63);
        v65 = vmulq_f32(v64, vrsqrtsq_f32(v64, vmulq_f32(v63, v64)));
        v66 = vbicq_s8(
            vmulq_f32(vmulq_f32(v65, vrsqrtsq_f32(v65, vmulq_f32(v63, v65))),
                      v62),
            vceqzq_f32(v63));
        v67 = 0x0.0p+0f;
        v76 = v66;
        do {
          v79 = v67;
          v68 = vmulq_n_f32(v76, v67);
          v69 = *(float*)(a1 + 264);
          v86 = vaddq_f32(v78, v68);
          RouteNavMesh_fe7000((void*)(&v84_.v84), v18, (__int128*)&v86, v38,
                              v69);
          v70 = v84_.v85;
          if (v84_.v85 != 0) {
            v71 = std___1___shared_weak_count_lock(v84_.v85);
            if (v71 != 0) {
              v72 = v71;
              if (v84_.v84 != 0) {
                v82_.v82 = v84_.v84;
                v82_.v83 = v71;
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v71 + 16),
                                          1u, memory_order_relaxed);
                GameRoutine_d6c640((__int64*)(a1 + 1152), &v82_.v82);
                if (v82_.v83 != 0) {
                  std___1___shared_weak_count___release_weak_alt1(v82_.v83);
                }
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v72 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0) {
                v70 = v84_.v85;
                if (v84_.v85 == 0) {
                  goto LABEL_70;
                }
              }
              else {
                (*(void (**)(__int64))(*(_QWORD*)v72 + 16LL))(v72);
                std___1___shared_weak_count___release_weak_alt1(v72);
                v70 = v84_.v85;
                if (v84_.v85 == 0) {
                  goto LABEL_70;
                }
              }
            }
            std___1___shared_weak_count___release_weak_alt1(v70);
          }
        LABEL_70:
          v67 = (float)(v38 + v79) + 0x1.0000000000000p+0f;
        } while (v67 < v77);
      }
      RouteNavMesh_fe7000((void*)((__int64*)&v86), v18, (__int128*)&v87, v38,
                          *(float*)(a1 + 264));
      v73 = LANES128(v86).n128_i64[1];
      if (LANES128(v86).n128_u64[1] != 0) {
        v74 = std___1___shared_weak_count_lock(LANES128(v86).n128_i64[1]);
        if (v74 == 0) {
          goto LABEL_89;
        }
        v75 = v74;
        if (LANES128(v86).n128_u64[0] != 0) {
          v84_.v84 = LANES128(v86).n128_u64[0];
          v84_.v85 = v74;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v74 + 16), 1u,
                                    memory_order_relaxed);
          GameRoutine_d6c640((__int64*)(a1 + 1152), &v84_.v84);
          if (v84_.v85 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v84_.v85);
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v75 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v75 + 16LL))(v75);
          std___1___shared_weak_count___release_weak_alt1(v75);
        }
        v73 = LANES128(v86).n128_i64[1];
        if (LANES128(v86).n128_u64[1] != 0) {
        LABEL_89:
          std___1___shared_weak_count___release_weak_alt1(v73);
        }
      }
      if (*((_QWORD*)&v89 + 1) != 0) {
        std___1___shared_weak_count___release_weak_alt1(*((__int64*)&v89 + 1));
      }
    }
    else {
      if (v19 != v4) {
        do {
          v80_.v80 = *v19;
          v27 = (__int64)v19[1];
          v80_.v81 = v27;
          if (v27 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 16), 1u,
                                      memory_order_relaxed);
          }
          RouteNavMesh_fe6c60(v18, &v80_.v80);
          if (v80_.v81 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v80_.v81);
          }
          v19 += 2;
        } while (v19 != v4);
        v4 = *(unsigned int***)(a1 + 1160);
        v19 = *(unsigned int***)(a1 + 1152);
      }
      for (; v4 != v19; v4 -= 2) {
        v28 = (__int64)*(v4 - 1);
        if (v28 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v28);
        }
      }
      *(_QWORD*)(a1 + 1160) = v19;
    }
  }
}

bool game_hub_d6f600(__int64 a1, int a2)
{
  int v2;
  unsigned __int16 v4;
  unsigned __int64 v5;
  __int64 v6;
  void* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  int v15;
  _QWORD v17[3];

  v2 = *(_DWORD*)(a1 + 88);
  if (v2 == a2) {
    return v2 != a2;
  }
  *(_DWORD*)(a1 + 88) = a2;
  if (a2 == 1) {
    LOBYTE(v17[0]) = 14;
    *(_DWORD*)((char*)v17 + 1) = 1851092553;
    v4 = 25710;
  LABEL_8:
    v5 = 7;
    HIDWORD(v17[0]) = v4 | 0x72650000;
    LOBYTE(v17[1]) = 0;
    goto LABEL_10;
  }
  if (a2 != 2) {
    if (a2 != 3) {
      v5 = 0;
      LOWORD(v17[0]) = 0;
      goto LABEL_10;
    }
    LOBYTE(v17[0]) = 14;
    *(_DWORD*)((char*)v17 + 1) = 1884646985;
    v4 = 28784;
    goto LABEL_8;
  }
  v5 = 8;
  LOBYTE(v17[0]) = 16;
  strcpy((char*)v17 + 1, "InMiddle");
LABEL_10:
  if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) -
                                       8LL) +
                            64LL) +
                 96LL) != 0) {
    v6 = a1;
    GameHr_c13700(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) -
                                         8LL) +
                              64LL) +
                   96LL),
        (const char*)v17 + 1, v5);
    a1 = v6;
  }
  v7 = (void*)(a1 + 112);
  if ((*(_BYTE*)(a1 + 112) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 128);
    if (v8 != 0) {
      v9 = a1;
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v8);
      a1 = v9;
    }
  }
  qmemcpy(v7, v17, 24);
  game_hub_d6f2a0(a1);
  v11 = *(__int64**)(GameData_21ec7c0 + 24);
  v12 = *(__int64**)(GameData_21ec7c0 + 32);
  while (v11 != v12) {
    v13 = *v11;
    v11 += 2;
    HubCharacterNatives_ceca80(*(_QWORD**)(v13 + 24), 0x10000000000000LL,
                               *(_DWORD*)(v13 + 1296) !=
                                   *(_DWORD*)(GameData_21f3cc0 + 88));
  }
  v14 = *(_QWORD*)(GameData_21f3d10 + 216);
  v15 = *(_DWORD*)(v14 + 232);
  if (v15 <= 1) {
    v15 = 1;
  }
  *(_DWORD*)(v14 + 232) = v15;
  return v2 != a2;
}

float game_hub_d70270(__int64 a1, const char* a2, unsigned __int64 a3,
                      const char* a4)
{
  float result;
  unsigned __int64 v5;
  int8x16_t v6;
  unsigned int v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  int8x16_t v12;
  int8x16_t v13;
  unsigned __int64 v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  int8x16_t v24;
  int8x16_t v25;
  int8x16_t v26;
  int8x16_t v27;
  int8x16_t v28;
  int8x16_t v29;
  int8x16_t v30;
  int8x16_t v31;
  int8x16_t v32;
  int v33;
  __int64 v34;
  int8x16_t v35;
  int8x16_t v36;
  int8x16_t v37;
  int8x16_t v38;
  __int128 v39;
  int8x16_t v40;
  struct {
    float32x4_t v41;
    float32x4_t v42;
    float32x4_t v43;
    float32x4_t v44;
  } v41_;
  struct {
    float32x4_t v45;
    float32x4_t v46;
    float32x4_t v47;
    float32x4_t v48;
    char v49;
  } v45_;

  game_hub_d6fba0((void*)((__int64)&v45_.v45), a1, a2, a3, a4);
  result = 0x0.0p+0f;
  if (v45_.v49 == 1) {
    LODWORD(v5) = 0;
    LANES128(v6).n128_u64[0] = 0;
    v41_.v41 = v45_.v45;
    v41_.v42 = v45_.v46;
    v41_.v43 = v45_.v47;
    v41_.v44 = v45_.v48;
    *(float*)&v7 =
        sqrtf((float)(LANES128_OF(vmulq_f32(v45_.v45, v45_.v45)).n128_f32[1] +
                      (float)(LANES128(v45_.v45).n128_f32[0] *
                              LANES128(v45_.v45).n128_f32[0])) +
              (float)(LANES128(v45_.v45).n128_f32[2] *
                      LANES128(v45_.v45).n128_f32[2]));
    HIDWORD(v5) = COERCE_UNSIGNED_INT(
        sqrtf((float)(LANES128_OF(vmulq_f32(v41_.v42, v41_.v42)).n128_f32[1] +
                      (float)(LANES128(v41_.v42).n128_f32[0] *
                              LANES128(v41_.v42).n128_f32[0])) +
              (float)(LANES128(v45_.v46).n128_f32[2] *
                      LANES128(v41_.v42).n128_f32[2])));
    LANES128(v6).n128_u64[1] = COERCE_UNSIGNED_INT(
        sqrtf((float)(LANES128_OF(vmulq_f32(v41_.v43, v41_.v43)).n128_f32[1] +
                      (float)(LANES128(v41_.v43).n128_f32[0] *
                              LANES128(v41_.v43).n128_f32[0])) +
              (float)(LANES128(v45_.v47).n128_f32[2] *
                      LANES128(v41_.v43).n128_f32[2])));
    LANES128(v8).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, v5),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v8).n128_i8[8] = vqtbl1_s8(
        COERCE_AS(int8x16_t, v5), COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v9).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v6, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v9).n128_i8[8] =
        vqtbl1_s8(v6, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v10 = vmulq_f32(vmulq_f32(v8, COERCE_AS(float32x4_t, v7)), v9);
    LANES128(v9).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, v5),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v9).n128_i8[8] = vqtbl1_s8(
        COERCE_AS(int8x16_t, v5), COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    LANES128(v11).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v6, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    v12 = vzip2q_s32(
        COERCE_AS(int32x4_t, v7),
        vzip1q_s32(COERCE_AS(int32x4_t, v5), COERCE_AS(int32x4_t, 0)));
    *(int8x8_t*)&LANES128(v11).n128_i8[8] =
        vqtbl1_s8(v6, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v13 = vzip1q_s32(vzip2q_s32(COERCE_AS(int32x4_t, v7), v6),
                     COERCE_AS(int32x4_t, 0));
    v14 = LANES64_OF(vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
              .n64_u64[0];
    LANES128(v15).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    v16 = vsubq_f32(v10,
                    vmulq_f32(vmulq_f32(v9, COERCE_AS(float32x4_t, v7)), v11));
    LANES128(v16).n128_u64[0] = LANES128_OF(vpaddq_f32(v16, v16)).n128_u64[0];
    v17 = vaddq_f32(
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v16).n128_u64[0]), 0),
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v16).n128_u64[0]), 1));
    v18 = vrecpeq_f32(v17);
    v19 = vmulq_f32(v18, vrecpsq_f32(v18, v17));
    v20 = vmulq_f32(v19, vrecpsq_f32(v19, v17));
    LANES128(v11).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v12, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v21).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, v7),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v11).n128_i8[8] =
        vqtbl1_s8(v12, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v22).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v15).n128_i8[8] =
        vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v13).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v12, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v22).n128_u64[1] = v14;
    LANES128(v8).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, v7),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v23).n128_u64[0] = 0x8000000080000000LL;
    LANES128(v23).n128_u64[1] = 0x8000000080000000LL;
    *(int8x8_t*)&LANES128(v13).n128_i8[8] =
        vqtbl1_s8(v12, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    *(int8x8_t*)&LANES128(v8).n128_i8[8] = vqtbl1_s8(
        COERCE_AS(int8x16_t, v7), COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    *(int8x8_t*)&LANES128(v21).n128_i8[8] = vqtbl1_s8(
        COERCE_AS(int8x16_t, v7), COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v24 = vmulq_f32(v20, vmlsq_f32(vmulq_f32(v11, v22), v13, v15));
    v25 = vmulq_f32(v20, vmlsq_f32(vmulq_f32(v15, v8), v22, v21));
    v26 = vmulq_f32(v20, vmlsq_f32(vmulq_f32(v13, v21), v8, v11));
    v27 = vmlsq_f32(
        vmlsq_f32(vmulq_f32(v24, v23), COERCE_AS(float32x4_t, 0), v25),
        COERCE_AS(float32x4_t, 0), v26);
    v28 = vceqzq_f32(v17);
    v29 = vbicq_s8(v24, v28);
    v30 = vbicq_s8(v25, v28);
    v31 = vbicq_s8(v26, v28);
    v32 = vbicq_s8(v27, v28);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0) {
      v35 = v29;
      v36 = v30;
      v37 = v31;
      v38 = v32;
      v33 = __cxa_guard_acquire((__int64)&GameData_21a6130);
      v29 = v35;
      v30 = v36;
      v31 = v37;
      v32 = v38;
      if (v33 != 0) {
        v34 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v34;
        __cxa_guard_release((__int64)&GameData_21a6130);
        v29 = v35;
        v30 = v36;
        v31 = v37;
        v32 = v38;
      }
    }
    v41_.v41 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v29, LANES128(v41_.v41).n128_f32[0]), v30,
                       COERCE_AS(float32x2_t, LANES128(v41_.v41).n128_u64[0]),
                       1),
        v31, v41_.v41, 2);
    v41_.v42 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v29, LANES128(v41_.v42).n128_f32[0]), v30,
                       COERCE_AS(float32x2_t, LANES128(v41_.v42).n128_u64[0]),
                       1),
        v31, v41_.v42, 2);
    v41_.v43 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v29, LANES128(v41_.v43).n128_f32[0]), v30,
                       COERCE_AS(float32x2_t, LANES128(v41_.v43).n128_u64[0]),
                       1),
        v31, v41_.v43, 2);
    v41_.v44 = vaddq_f32(
        v32, vmlaq_laneq_f32(
                 vmlaq_lane_f32(vmulq_n_f32(v29, *(float*)&GameData_21a6120),
                                v30, *(float32x2_t*)&GameData_21a6120, 1),
                 v31, COERCE_AS(float32x4_t, GameData_21a6120), 2));
    Quat_624bc0((void*)(&v40), (__int64)&v41_.v41);
    GameRoutine_622ac0((void*)(&v39), (float32x2_t*)&v40);
    return *((float*)&v39 + 1) * 0x1.ca5dc20000000p+5f;
  }
  return result;
}

void game_hub_d799f0(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64* v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  char* v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  char* v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  signed __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  char* v50;
  signed __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  _QWORD* v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  signed __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  _QWORD* v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v73;
  _QWORD* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  int v81;
  char v82;
  __int64 v83;
  struct {
    _QWORD* v84;
    __int64 v85;
    _QWORD* v86;
  } v84_;

  if (*(int*)(a1 + 176) > 0) {
    if (game_gameui_Footer_instance_ != 0) {
      LayoutAccessor_1567000(game_gameui_Footer_instance_, 0);
    }
    v2 = GameData_225ca88;
    if (GameData_225ca88 != 0) {
      v3 = *(_DWORD*)(GameData_225ca88 + 1980);
      *(_BYTE*)(GameData_225ca88 + 1976) = 0;
      if (v3 <= 0) {
        LayoutAccessor_155e830(v2 + 176, 0);
      }
    }
    goto LABEL_93;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22591c0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_22591c0) != 0) {
    BYTE4(GameData_22591b0) = 0;
    GameData_22591b8 = 0;
    GameData_2259198 = (__int64)&GameData_1a9f09e;
    GameData_22591a0 = (__int64)"MID_KeyHelp_Menu";
    LOBYTE(GameData_22591a8) = 1;
    *(__int64*)((char*)&GameData_22591a8 + 4) = 0xD0000000BLL;
    __cxa_guard_release((__int64)&GameData_22591c0);
  }
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  v6 = GameData_22591b0;
  v7 = v5;
  v5[2] = GameData_22591a8;
  v5[3] = v6;
  v5[4] = GameData_22591b8;
  v8 = GameData_22591a0;
  *v5 = GameData_2259198;
  v5[1] = v8;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2259190,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_2259190) != 0) {
    BYTE4(GameData_2259180) = 0;
    GameData_2259188 = 0;
    GameData_2259168 = (__int64)&GameData_1a9f09e;
    GameData_2259170 = (__int64)"MID_KeyHelp_Dash";
    LOBYTE(GameData_2259178) = 1;
    *(__int64*)((char*)&GameData_2259178 + 4) = 0xD00000005LL;
    __cxa_guard_release((__int64)&GameData_2259190);
  }
  v9 = (char*)fw_memory_HeapManager_Allocate(*v4, 80, 16, 0);
  v10 = GameData_2259188;
  v11 = v9;
  v12 = v9 + 80;
  v84_.v84 = v9;
  v84_.v86 = v9 + 80;
  *((_QWORD*)v9 + 8) = GameData_2259180;
  *((_QWORD*)v9 + 9) = v10;
  v13 = GameData_2259178;
  v14 = GameData_2259168;
  *((_QWORD*)v9 + 6) = GameData_2259170;
  *((_QWORD*)v9 + 7) = v13;
  *((_QWORD*)v9 + 4) = v7[4];
  *((_QWORD*)v9 + 5) = v14;
  v15 = v7[3];
  *((_QWORD*)v9 + 2) = v7[2];
  *((_QWORD*)v9 + 3) = v15;
  v16 = v7[1];
  *(_QWORD*)v9 = *v7;
  *((_QWORD*)v9 + 1) = v16;
  v17 = 128;
  if (*(_QWORD*)(*v4 + 200) == 0) {
    v17 = 56;
  }
  nn_mem_StandardAllocator_Free(*v4 + v17, (__int64)v7);
  v84_.v85 = (__int64)v12;
  if ((GameRoutine_8229c0() & 1) != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22592b0,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_22592b0) != 0) {
      GameData_22592a8 = 0;
      GameData_2259288 = (__int64)&GameData_1a9f09e;
      GameData_2259290 = (__int64)&GameData_1a9f09e;
      LOBYTE(GameData_2259298) = 1;
      *(__int64*)((char*)&GameData_2259298 + 4) = 0xD00000002LL;
      BYTE4(GameData_22592a0) = 4;
      __cxa_guard_release((__int64)&GameData_22592b0);
    }
    v18 = (char*)fw_memory_HeapManager_Allocate(*v4, 160, 16, 0);
    v19 = GameData_22592a8;
    v20 = v18;
    v12 = v18 + 160;
    v84_.v84 = v18;
    v84_.v86 = v18 + 160;
    *((_QWORD*)v18 + 13) = GameData_22592a0;
    *((_QWORD*)v18 + 14) = v19;
    v21 = GameData_2259298;
    *((_QWORD*)v18 + 11) = GameData_2259290;
    *((_QWORD*)v18 + 12) = v21;
    v22 = GameData_2259288;
    v23 = *((_QWORD*)v11 + 5);
    *((_QWORD*)v18 + 4) = *((_QWORD*)v11 + 4);
    *((_QWORD*)v18 + 5) = v23;
    v24 = *((_QWORD*)v11 + 3);
    *((_QWORD*)v18 + 2) = *((_QWORD*)v11 + 2);
    *((_QWORD*)v18 + 3) = v24;
    v25 = *((_QWORD*)v11 + 8);
    *((_QWORD*)v18 + 9) = *((_QWORD*)v11 + 9);
    *((_QWORD*)v18 + 10) = v22;
    v26 = *((_QWORD*)v11 + 6);
    *((_QWORD*)v18 + 7) = *((_QWORD*)v11 + 7);
    *((_QWORD*)v18 + 8) = v25;
    *((_QWORD*)v18 + 6) = v26;
    v27 = *((_QWORD*)v11 + 1);
    *(_QWORD*)v18 = *(_QWORD*)v11;
    *((_QWORD*)v18 + 1) = v27;
    v28 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*v4 + v28, (__int64)v11);
    v29 = v20 + 120;
    v11 = v20;
    v84_.v85 = (__int64)(v20 + 120);
  }
  else {
    v29 = v12;
  }
  if (*(_QWORD*)(GameData_21f3d10 + 200) != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2259250,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_2259250) != 0) {
      BYTE4(GameData_2259240) = 0;
      GameData_2259228 = (__int64)&GameData_1a9f09e;
      GameData_2259230 = (__int64)"MID_KeyHelp_Attack";
      GameData_2259248 = 0;
      LOBYTE(GameData_2259238) = 1;
      *(__int64*)((char*)&GameData_2259238 + 4) = 0xE00000003LL;
      __cxa_guard_release((__int64)&GameData_2259250);
    }
    if (v29 >= v12) {
      v38 = v29 - v11;
      v39 = 1 - 0x3333333333333333LL * (v38 >> 3);
      if (v39 > 0x666666666666666LL) {
        goto LABEL_109;
      }
      if (0x999999999999999ALL * ((v12 - v11) >> 3) > v39) {
        v39 = 0x999999999999999ALL * ((v12 - v11) >> 3);
      }
      if (0xCCCCCCCCCCCCCCCDLL * ((v12 - v11) >> 3) >= 0x333333333333333LL) {
        v40 = 0x666666666666666LL;
      }
      else {
        v40 = v39;
      }
      if (v40 != 0) {
        if (v40 > 0x666666666666666LL) {
          goto LABEL_114;
        }
        v41 = fw_memory_HeapManager_Allocate(*v4, 40 * v40, 16, 0);
      }
      else {
        v41 = 0;
      }
      v42 = (_QWORD*)(v41 + v38);
      v43 = GameData_2259240;
      v12 = (char*)(v41 + 40 * v40);
      v30 = (char*)(v41 + v38 + 40);
      v42[2] = GameData_2259238;
      v42[3] = v43;
      v42[4] = GameData_2259248;
      v44 = GameData_2259230;
      *v42 = GameData_2259228;
      v42[1] = v44;
      v45 = v41 + v38 + 40 * (v38 / -40);
      memcpy(v45, (__int64)v11, v38);
      v46 = *v4;
      v84_.v84 = (_QWORD*)v45;
      v84_.v85 = (__int64)v30;
      v84_.v86 = v12;
      v47 = 128;
      if (*(_QWORD*)(v46 + 200) == 0) {
        v47 = 56;
      }
      nn_mem_StandardAllocator_Free(v46 + v47, (__int64)v11);
      v11 = (char*)v45;
    }
    else {
      v30 = v29 + 40;
      *(_QWORD*)v29 = GameData_2259228;
      v31 = GameData_2259230;
      v32 = GameData_2259238;
      v33 = GameData_2259248;
      *((_QWORD*)v29 + 3) = GameData_2259240;
      *((_QWORD*)v29 + 4) = v33;
      *((_QWORD*)v29 + 1) = v31;
      *((_QWORD*)v29 + 2) = v32;
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2259220,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_2259220) != 0) {
      BYTE4(GameData_2259210) = 0;
      GameData_22591f8 = (__int64)&GameData_1a9f09e;
      GameData_2259200 = (__int64)"MID_KeyHelp_ShowTrace";
      GameData_2259218 = 0;
      LOBYTE(GameData_2259208) = 1;
      *(__int64*)((char*)&GameData_2259208 + 4) = 0xE00000007LL;
      __cxa_guard_release((__int64)&GameData_2259220);
    }
    if (v30 >= v12) {
      v51 = v30 - v11;
      v52 = 1 - 0x3333333333333333LL * ((v30 - v11) >> 3);
      if (v52 > 0x666666666666666LL) {
        goto LABEL_109;
      }
      if (0x999999999999999ALL * ((v12 - v11) >> 3) > v52) {
        v52 = 0x999999999999999ALL * ((v12 - v11) >> 3);
      }
      if (0xCCCCCCCCCCCCCCCDLL * ((v12 - v11) >> 3) >= 0x333333333333333LL) {
        v53 = 0x666666666666666LL;
      }
      else {
        v53 = v52;
      }
      if (v53 != 0) {
        if (v53 > 0x666666666666666LL) {
          goto LABEL_114;
        }
        v54 = fw_memory_HeapManager_Allocate(*v4, 40 * v53, 16, 0);
      }
      else {
        v54 = 0;
      }
      v55 = (_QWORD*)(v54 + v51);
      v56 = v30 - v11;
      v12 = (char*)(v54 + 40 * v53);
      v57 = GameData_2259210;
      v50 = (char*)(v54 + v51 + 40);
      v55[2] = GameData_2259208;
      v55[3] = v57;
      v55[4] = GameData_2259218;
      v58 = GameData_2259200;
      *v55 = GameData_22591f8;
      v55[1] = v58;
      memcpy(v54, (__int64)v11, v56);
      v84_.v84 = (_QWORD*)v54;
      v84_.v86 = v12;
      if (v11 != nullptr) {
        v59 = 128;
        if (*(_QWORD*)(*v4 + 200) == 0) {
          v59 = 56;
        }
        nn_mem_StandardAllocator_Free(*v4 + v59, (__int64)v11);
      }
      v11 = (char*)v54;
    }
    else {
      v48 = GameData_2259210;
      *((_QWORD*)v30 + 2) = GameData_2259208;
      *((_QWORD*)v30 + 3) = v48;
      *((_QWORD*)v30 + 4) = GameData_2259218;
      v49 = GameData_2259200;
      *(_QWORD*)v30 = GameData_22591f8;
      *((_QWORD*)v30 + 1) = v49;
      v50 = v30 + 40;
    }
    v84_.v85 = (__int64)v50;
    if ((DungeonController_f5f480() & 1) == 0) {
      goto LABEL_87;
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2259280,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_2259280) != 0) {
      BYTE4(GameData_2259270) = 0;
      GameData_2259258 = (__int64)&GameData_1a9f09e;
      GameData_2259260 = (__int64)"MID_KeyHelp_EnemySilhouette";
      GameData_2259278 = 0;
      LOBYTE(GameData_2259268) = 1;
      *(__int64*)((char*)&GameData_2259268 + 4) = 0xE00000006LL;
      __cxa_guard_release((__int64)&GameData_2259280);
    }
    if (v50 < v12) {
      v34 = (__int64)(v50 + 40);
      v60 = GameData_2259270;
      *((_QWORD*)v50 + 2) = GameData_2259268;
      *((_QWORD*)v50 + 3) = v60;
      *((_QWORD*)v50 + 4) = GameData_2259278;
      v61 = GameData_2259260;
      *(_QWORD*)v50 = GameData_2259258;
      *((_QWORD*)v50 + 1) = v61;
      goto LABEL_86;
    }
    v62 = v50 - v11;
    v63 = 1 - 0x3333333333333333LL * ((v50 - v11) >> 3);
    if (v63 <= 0x666666666666666LL) {
      if (0x999999999999999ALL * ((v12 - v11) >> 3) > v63) {
        v63 = 0x999999999999999ALL * ((v12 - v11) >> 3);
      }
      if (0xCCCCCCCCCCCCCCCDLL * ((v12 - v11) >> 3) >= 0x333333333333333LL) {
        v64 = 0x666666666666666LL;
      }
      else {
        v64 = v63;
      }
      if (v64 == 0) {
        v65 = 0;
      LABEL_79:
        v70 = (_QWORD*)(v65 + v62);
        v71 = v65 + 40 * v64;
        v72 = GameData_2259270;
        v34 = v65 + v62 + 40;
        v70[2] = GameData_2259268;
        v70[3] = v72;
        v70[4] = GameData_2259278;
        v73 = GameData_2259260;
        *v70 = GameData_2259258;
        v70[1] = v73;
        memcpy(v65, (__int64)v11, v50 - v11);
        v84_.v84 = (_QWORD*)v65;
        v84_.v86 = (_QWORD*)v71;
        if (v11 == nullptr) {
          goto LABEL_86;
        }
      LABEL_83:
        v77 = 128;
        if (*(_QWORD*)(*v4 + 200) == 0) {
          v77 = 56;
        }
        nn_mem_StandardAllocator_Free(*v4 + v77, (__int64)v11);
        goto LABEL_86;
      }
      if (v64 <= 0x666666666666666LL) {
        v65 = fw_memory_HeapManager_Allocate(*v4, 40 * v64, 16, 0);
        goto LABEL_79;
      }
    LABEL_114:
      GameRoutine_60a210();
    }
  LABEL_109:
    GameRoutine_874520();
  }
  if ((GameRoutine_16962f0() & 1) == 0) {
    goto LABEL_87;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22591f0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_22591f0) != 0) {
    BYTE4(GameData_22591e0) = 0;
    GameData_22591c8 = (__int64)&GameData_1a9f09e;
    GameData_22591d0 = (__int64)"MID_KeyHelp_Map";
    GameData_22591e8 = 0;
    LOBYTE(GameData_22591d8) = 1;
    *(__int64*)((char*)&GameData_22591d8 + 4) = 0xD00000007LL;
    __cxa_guard_release((__int64)&GameData_22591f0);
  }
  if (v29 >= v12) {
    v66 = v29 - v11;
    v67 = 1 - 0x3333333333333333LL * ((v29 - v11) >> 3);
    if (v67 <= 0x666666666666666LL) {
      if (0x999999999999999ALL * ((v12 - v11) >> 3) > v67) {
        v67 = 0x999999999999999ALL * ((v12 - v11) >> 3);
      }
      if (0xCCCCCCCCCCCCCCCDLL * ((v12 - v11) >> 3) >= 0x333333333333333LL) {
        v68 = 0x666666666666666LL;
      }
      else {
        v68 = v67;
      }
      if (v68 != 0) {
        if (v68 > 0x666666666666666LL) {
          goto LABEL_114;
        }
        v69 = fw_memory_HeapManager_Allocate(*v4, 40 * v68, 16, 0);
      }
      else {
        v69 = 0;
      }
      v74 = (_QWORD*)(v69 + v66);
      v75 = GameData_22591e0;
      v74[2] = GameData_22591d8;
      v74[3] = v75;
      v74[4] = GameData_22591e8;
      v76 = GameData_22591d0;
      *v74 = GameData_22591c8;
      v74[1] = v76;
      memcpy(v69, (__int64)v11, v66);
      v84_.v86 = (_QWORD*)(v69 + 40 * v68);
      v34 = v69 + v66 + 40;
      v84_.v84 = (_QWORD*)v69;
      goto LABEL_83;
    }
    goto LABEL_109;
  }
  v34 = (__int64)(v29 + 40);
  *(_QWORD*)v29 = GameData_22591c8;
  v35 = GameData_22591d0;
  v36 = GameData_22591d8;
  v37 = GameData_22591e8;
  *((_QWORD*)v29 + 3) = GameData_22591e0;
  *((_QWORD*)v29 + 4) = v37;
  *((_QWORD*)v29 + 1) = v35;
  *((_QWORD*)v29 + 2) = v36;
LABEL_86:
  v84_.v85 = v34;
LABEL_87:
  GameRoutine_1566440((__int64)&v84_.v84, 0);
  v78 = GameData_225ca88;
  if (GameData_225ca88 != 0) {
    *(_BYTE*)(GameData_225ca88 + 1976) = 1;
    if (*(int*)(v78 + 1980) <= 0) {
      LayoutAccessor_155e830(v78 + 176, *(_BYTE*)(v78 + 1977));
      v83 = *(_QWORD*)(v78 + 1968);
      if (v83 != 0 && *(_BYTE*)(v83 + 409) != 0) {
        *(_BYTE*)(v83 + 409) = 0;
      }
    }
  }
  if (v84_.v84 != nullptr) {
    v79 = *v4;
    v84_.v85 = (__int64)v84_.v84;
    v80 = 128;
    if (*(_QWORD*)(v79 + 200) == 0) {
      v80 = 56;
    }
    nn_mem_StandardAllocator_Free(v79 + v80, (__int64)v84_.v84);
  }
LABEL_93:
  if (game_hub_ProgressEventView_instance_ != 0) {
    v81 = *(_DWORD*)(a1 + 192);
    v82 = LayoutAccessor_155ea30(
        (__int64*)(game_hub_ProgressEventView_instance_ + 168));
    if (v81 <= 0) {
      if ((v82 & 1) == 0 && game_hub_ProgressEventView_instance_ != 0) {
        GameRoutine_17b8e80(game_hub_ProgressEventView_instance_, 1);
      }
    }
    else if ((v82 & 1) != 0 && game_hub_ProgressEventView_instance_ != 0) {
      GameRoutine_17b8f40(game_hub_ProgressEventView_instance_, 1);
    }
  }
}

__int64 game_hub_d85af0()
{
  __int64 result;
  __int64 v1;
  int v2;
  int v3;
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;
  _BYTE* v7;
  unsigned __int8 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  char* v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  struct {
    __int64 v18;
    __int64 v19;
  } v18_;
  unsigned __int8 v20;
  struct {
    char gap24_[1];
    _BYTE v21[15];
    _BYTE* v22;
  } v21_;

  result = 1;
  v1 = *(_QWORD*)GameData_212dbb8[0];
  if (*(_QWORD*)GameData_212dbb8[0] != 0 && (GameData_2222318 & 1) == 0) {
    v2 = *(_DWORD*)(*(_QWORD*)(v1 + 216) + 232LL);
    if (v2 == 0 || v2 == 1 && ((*(_BYTE*)(v1 + 12) & 1) != 0 ||
                               (*(_BYTE*)(v1 + 11) & 1) != 0 ||
                               (*(_BYTE*)(v1 + 13) & 1) != 0)) {
      Manager_d54320((void*)(&v20));
      v3 = v20 & 1;
      if (v3 != 0) {
        v4 = *(_QWORD*)&v21_.v21[7];
      }
      else {
        v4 = (unsigned __int64)v20 >> 1;
      }
      result = v4 != 0;
      if (v4 != 0) {
        v5 = v3 == 0;
        v6 = v4 + 14;
        if (v5) {
          v7 = v21_.v21;
        }
        else {
          v7 = v21_.v22;
        }
        if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
          String_60a1d0();
        }
        if (v6 > 0x16) {
          v10 = v6 | 7;
          if (v10 == 23) {
            v11 = 26;
          }
          else {
            v11 = v10 + 1;
          }
          v9 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v11, 16,
                                              0);
          v18_.v19 = v9;
          v17 = v11 | 1;
          v8 = v11 | 1;
        }
        else {
          v8 = 2 * v6;
          v9 = 0;
          v18_.v18 = 0;
          v18_.v19 = 0;
          v17 = v8;
        }
        if ((v8 & 1) != 0) {
          v12 = (char*)v9;
        }
        else {
          v12 = (char*)&v17 + 1;
        }
        qmemcpy(v12, " + LoadingSeq ", 14);
        if ((v8 & 1) != 0) {
          v13 = (char*)(v9 + 14);
        }
        else {
          v13 = (char*)&v18_.v18 + 7;
        }
        memmove((__int64)v13, (__int64)v7, v4);
        v13[v4] = 0;
        if ((v17 & 1) != 0 && v18_.v19 != 0) {
          v14 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v14 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v18_.v19);
        }
        result = v4 != 0;
        v3 = v20 & 1;
      }
      if (v3 != 0 && v21_.v22 != nullptr) {
        v15 = result;
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, (__int64)v21_.v22);
        return v15;
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void game_hub_d96ce0(PSEUDO_X8 x8_, _QWORD* a1,
                                                __int64 a2, __int64 a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;

  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      64, 16, 0);
  *(_QWORD*)(v9 + 8) = 0;
  *(_QWORD*)(v9 + 16) = 0;
  *(_BYTE*)(v9 + 40) = 0;
  *(_QWORD*)(v9 + 44) = 0;
  *(_QWORD*)(v9 + 52) = 0;
  *(_QWORD*)v9 = GameData_1fded10;
  v10 = (_QWORD*)fw_memory_HeapManager_Allocate(*v8, 104, 16, 0);
  v10[2] = 0;
  v11 = (__int64)(v10 + 3);
  v12 = v10;
  *v10 = GameData_212f060[0] + 2;
  v10[1] = 0;
  SmoothPath_d91350((__int64)(v10 + 3));
  *(_QWORD*)(v9 + 24) = v11;
  v13 = v9 + 24;
  *(_QWORD*)(v9 + 32) = v12;
  game_zview_d95b30(v11, a2, a3);
  v14 = (__int64*)a1[2];
  v15 = a1[3];
  if ((unsigned __int64)v14 >= v15) {
    v17 = a1[1];
    v18 = (unsigned __int64)v14 - v17;
    v19 = ((__int64)v14 - v17) >> 4;
    v20 = v19 + 1;
    if ((unsigned __int64)(v19 + 1) >> 60 != 0) {
      GameRoutine_d97190();
    }
    v21 = v15 - v17;
    if (v21 >> 3 > v20) {
      v20 = v21 >> 3;
    }
    if ((unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFF0LL) {
      v22 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v22 = v20;
    }
    if (v22 >> 60 != 0) {
      GameRoutine_60a210();
    }
    v23 = fw_memory_HeapManager_Allocate(*v8, 16 * v22, 16, 0);
    v24 = (__int64*)(v23 + v18);
    v25 = v23 + 16 * v22;
    *v24 = v13;
    v24[1] = v9;
    v26 = v23 + v18 - 16 * v19;
    v16 = v23 + v18 + 16;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
    memcpy(v26, v17, v18);
    a1[1] = v26;
    a1[2] = v16;
    a1[3] = v25;
    if (v17 != 0) {
      v27 = 128;
      if (*(_QWORD*)(*v8 + 200) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free(*v8 + v27, v17);
    }
  }
  else {
    *v14 = v13;
    v14[1] = v9;
    v16 = (__int64)(v14 + 2);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
  }
  a1[2] = v16;
  *a4 = v13;
  a4[1] = v9;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                            memory_order_relaxed);
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak_alt1(v9);
  }
}

__int64 game_hub_e1dce0()
{
  __int64* v0;
  __int64* i;
  __int64 v2;
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v0 = *(__int64**)(GameData_21ec7c0 + 24);
  for (i = *(__int64**)(GameData_21ec7c0 + 32); v0 != i;
       result = game_hub_Character_RebuildAppearance(v2)) {
    v2 = *v0;
    v0 += 2;
  }
  return result;
}

void game_hub_e22600(__int64 a1, _QWORD* a2, unsigned __int8* a3)
{
  __int64** v4;
  __int64 v5;
  unsigned __int64 v6;
  bool v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  bool v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  int v17;
  int v18;
  __int64* v19;
  __int64* v20;
  __int64* v21;
  __int64* v22;
  __int64 v23;
  __int64* v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  float* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  float v46;
  float v47;
  unsigned __int64 v48;
  float v49;
  float v50;
  __int128 v51;
  __int64 v52;
  __int64* v53;
  unsigned __int64 v54;
  float32x4_t v55;
  int v56;
  float32x4_t v57;
  __int64 v58;
  int v59;
  __int64 v60;
  int v61;
  __int64 v62;
  char v63;
  float v64;
  float v65;
  float v66;
  __int128 v67;
  __int128 v68;
  __int64 v69;
  __int64 v70;
  __int64* v71;
  float v72;
  float32x4_t v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  float32x4_t v80;
  __int64 v81;
  __int64* v82;
  __int64 v83;
  __int64 v84;
  int8x16_t v85;
  int8x16_t v86;
  float32x4_t v87;
  float32x4_t v88;
  float32x4_t v89;
  float32x4_t v90;
  float32x4_t v91;
  float32x4_t v92;
  float32x4_t v93;
  int8x16_t v94;
  float32x4_t v95;
  float32x4_t v96;
  float32x4_t v97;
  float32x4_t v98;
  float32x4_t v99;
  float32x4_t v100;
  float v101;
  float32x4_t v102;
  float32x4_t v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  __int64* v106;
  unsigned __int64 v107;
  const char* v108;
  unsigned __int64 v109;
  float32x4_t v110;
  const char* v111;
  unsigned __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  unsigned __int64 v116;
  unsigned __int64 v117;
  char* v118;
  __int64 v119;
  _QWORD* v120;
  __int64 v121;
  float v122;
  _BYTE* v123;
  float v124;
  __int64 v125;
  __int64* v126;
  __int64 v127;
  __int64 v128;
  __int64* v129;
  __int64* v130;
  __int64 v131;
  __int64 v132;
  __int64* v133;
  __int64 v134;
  char* v135;
  unsigned __int64 v136;
  unsigned __int64 v137;
  __int64 v138;
  __int64 v139;
  char* v140;
  unsigned __int64 v141;
  unsigned __int64 v142;
  __int64 v143;
  char* v144;
  unsigned __int64 v145;
  unsigned __int64 v146;
  __int64 v147;
  __int64 v148;
  char* v149;
  unsigned __int64 v150;
  unsigned __int64 v151;
  __int64 v152;
  int v153;
  char* v154;
  __int64* v155;
  int v156;
  char* v157;
  __int64* v158;
  char* v159;
  _QWORD* v160;
  __int64 v161;
  __int64 v162;
  char* v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  unsigned __int64 v174;
  __int64 v175;
  unsigned __int64 v176;
  __int64 v177;
  unsigned __int64 v178;
  __int64 v179;
  __int64* v180;
  __int64 v181;
  unsigned __int64 v182;
  __int64 v183;
  _QWORD* v184;
  __int64 v185;
  __int64 v186;
  unsigned __int64 v187;
  __int64 v188;
  __int64* v189;
  __int64 v190;
  _QWORD* v191;
  __int64* v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  char v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  char v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  __int64 v208;
  float v209;
  float v210;
  __int128 v211;
  float v212;
  __int64 v214;
  float32x4_t v215;
  float32x4_t v216;
  float v217;
  float32x4_t v218;
  __int64 v219;
  float32x2_t v220;
  float32x4_t v221;
  __int128 v222;
  unsigned __int64 v223;
  __int64 v224;
  __int128 v225;
  float32x4_t v226;
  float32x4_t v227;
  struct {
    float32x4_t v228;
    float v229;
  } v228_;
  struct {
    __int64 v230;
    unsigned __int64 v231;
    __int64 v232;
    int v233;
    char gap388_[4];
    float v234;
  } v230_;
  struct {
    float32x4_t v235;
    float v236;
  } v235_;
  struct {
    _QWORD v237[2];
    __int64 v238;
    __int64* v239;
    unsigned __int64 v240;
  } v237_;
  struct {
    _QWORD v241[24];
    unsigned __int32 v242;
    float v243;
  } v241_;
  char v244;
  _BYTE v245[23];
  struct {
    __int64 v246;
    __int64* v247;
    unsigned __int64 v248;
  } v246_;
  _BYTE v249[24];
  _BYTE v250[24];
  _BYTE v251[24];
  _BYTE v252[552];
  struct {
    float32x4_t v253;
    __int64 v254;
    int v255;
    char gap1516_[20];
    float32x4_t v256;
    char v257;
  } v253_;
  struct {
    _DWORD v258[37];
    int v259;
    char gap1744_[4];
    float v260;
    float v261;
    char gap1756_[924];
    int v262;
  } v258_;
  struct {
    int8x16_t v263;
    char gap2704_[8];
    __int64* v264;
    __int64 v265;
    char* v266;
  } v263_;
  struct {
    __int64 v267;
    __int64 v268;
    __int64 v269;
  } v267_;
  struct {
    __int64 v270;
    unsigned __int64 v271;
    char* v272;
  } v270_;

  v164 = COERCE_AS(__typeof__(v164),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v166 = COERCE_AS(__typeof__(v166),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (*((float*)a3 + 6) <= 0x0.0p+0f) {
    return;
  }
  if (*a2 == 0) {
    return;
  }
  v4 = *(__int64***)(a1 + 16);
  v5 = a1;
  if (v4 == nullptr) {
    return;
  }
  v6 = *a3;
  v7 = (v6 & 1) == 0;
  v8 = v6 >> 1;
  if (v7) {
    v9 = (__int64)(a3 + 1);
  }
  else {
    v9 = *((_QWORD*)a3 + 2);
  }
  if (v7) {
    v10 = v8;
  }
  else {
    v10 = *((_QWORD*)a3 + 1);
  }
  while (1) {
    v11 = *((unsigned __int8*)v4 + 32);
    v12 = (v11 & 1) == 0;
    v13 = v11 >> 1;
    if (v12) {
      v14 = v13;
    }
    else {
      v14 = (unsigned __int64)v4[5];
    }
    if (v12) {
      v15 = (__int64)v4 + 33;
    }
    else {
      v15 = (__int64)v4[6];
    }
    if (v14 >= v10) {
      v16 = v10;
    }
    else {
      v16 = v14;
    }
    v17 = memcmp(v9, v15, v16),
    v164 = COERCE_AS(__typeof__(v164),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v166 = COERCE_AS(__typeof__(v166),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if (v17 != 0) {
      if (v17 < 0) {
        goto LABEL_12;
      }
    }
    else if (v10 < v14) {
      goto LABEL_12;
    }
    v18 = memcmp(v15, v9, v16),
    v164 = COERCE_AS(__typeof__(v164),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v166 = COERCE_AS(__typeof__(v166),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    if (v18 == 0) {
      if (v14 >= v10) {
        break;
      }
      goto LABEL_11;
    }
    if ((v18 & 0x80000000) == 0) {
      break;
    }
  LABEL_11:
    ++v4;
  LABEL_12:
    v4 = (__int64**)*v4;
    if (v4 == nullptr) {
      return;
    }
  }
  LANES128(v253_.v253).n128_u64[0] = (unsigned __int64)a3;
  v19 = GameHr_e24420((__int64**)(v5 + 8), a3,
                      (__int64)std___1_piecewise_construct_ptr,
                      (__int64**)&v253_.v253),
  v164 = COERCE_AS(__typeof__(v164),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v166 = COERCE_AS(__typeof__(v166),
                   PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v263_.v264 = nullptr;
  v263_.v265 = 0;
  v263_.v266 = nullptr;
  v20 = (__int64*)v19[7];
  v21 = (__int64*)v19[8];
  v22 = v19;
  v23 = (char*)v21 - (char*)v20;
  v24 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v21 == v20) {
    v25 = nullptr;
  }
  else {
    if (0xAAAAAAAAAAAAAAABLL * (v23 >> 3) > 0xAAAAAAAAAAAAAAALL) {
    LABEL_293:
      GameRoutine_64aa00(),
          v164 = COERCE_AS(__typeof__(v164),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v166 = COERCE_AS(__typeof__(v166),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
    v25 = (__int64*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, (char*)v21 - (char*)v20, 16, 0),
    v164 = COERCE_AS(__typeof__(v164),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v166 = COERCE_AS(__typeof__(v166),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v263_.v264 = v25;
    v263_.v265 = (__int64)v25;
    v263_.v266 = (char*)v25 + v23;
    do {
      if ((*(_BYTE*)v20 & 1) != 0) {
        fw_text_String_CopyTerminated(v25, v20[2], v20[1]),
            v164 = COERCE_AS(__typeof__(v164),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v166 = COERCE_AS(__typeof__(v166),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      else {
        v26 = *v20;
        v27 = v20[2];
        v25[1] = v20[1];
        v25[2] = v27;
        *v25 = v26;
      }
      v20 += 3;
      v25 += 3;
    } while (v20 != v21);
    v263_.v265 = (__int64)v25;
  }
  v28 = v22[10];
  v29 = v22[11];
  v267_.v268 = 0;
  v267_.v269 = 0;
  v30 = v29 - v28;
  v267_.v267 = 0;
  if (v29 == v28) {
    v43 = (__int64)v263_.v264;
    v42 = (float*)a3;
    if (v25 != v263_.v264) {
      goto LABEL_48;
    }
  }
  else {
    if (v30 < 0) {
      GameRoutine_e23e20(),
          v164 = COERCE_AS(__typeof__(v164),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v166 = COERCE_AS(__typeof__(v166),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
    v31 = fw_memory_HeapManager_Allocate(*v24, v29 - v28, 16, 0),
    v164 = COERCE_AS(__typeof__(v164),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v166 = COERCE_AS(__typeof__(v166),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v32 = 0;
    v267_.v267 = v31;
    v267_.v268 = v31;
    v267_.v269 = v31 + v30;
    do {
      v35 = (__int64*)(v28 + v32);
      v36 = (__int64*)(v31 + v32);
      if ((*(_BYTE*)(v28 + v32) & 1) != 0) {
        fw_text_String_CopyTerminated(v36, v35[2], v35[1]),
            v164 = COERCE_AS(__typeof__(v164),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v166 = COERCE_AS(__typeof__(v166),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      else {
        v37 = *v35;
        v38 = v35[1];
        v39 = v35[2];
        v36[1] = v38;
        v36[2] = v39;
        *v36 = v37;
      }
      v33 = v28 + v32;
      v34 = v31 + v32;
      v32 += 32;
      *(_DWORD*)(v34 + 24) = *(_DWORD*)(v33 + 24);
    } while (v28 + v32 != v29);
    v40 = v31 + v32;
    v41 = v267_.v267;
    v267_.v268 = v40;
    if ((__int64*)v263_.v265 != v263_.v264) {
      v42 = (float*)a3;
      if (v40 == v267_.v267) {
      LABEL_48:
        LANES128(v253_.v253).n128_u64[1] = 0;
        v253_.v254 = 0;
        v253_.v255 = -1082130432;
        LANES128(v253_.v253).n128_u8[0] = 16;
        *(unsigned __int64*)((char*)LANES128(v253_.v253).n128_u64 + 1) =
            0x706F6F4C656C6449LL;
        GameRoutine_e22430((__int64)&v267_.v267, (__int64*)&v253_.v253),
            v164 = COERCE_AS(__typeof__(v164),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v166 = COERCE_AS(__typeof__(v166),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        if ((LANES128(v253_.v253).n128_u8[0] & 1) != 0 && v253_.v254 != 0) {
          v44 = 128;
          if (*(_QWORD*)(*v24 + 200) == 0) {
            v44 = 56;
          }
          nn_mem_StandardAllocator_Free(*v24 + v44, v253_.v254),
              v164 = COERCE_AS(__typeof__(v164),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
              v166 = COERCE_AS(__typeof__(v166),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        }
      }
      v45 = *a2;
      v46 = *(float*)(*a2 + 284LL);
      LANES64(v220).n64_u64[0] = *(unsigned __int64*)(*a2 + 260LL);
      v217 = *(float*)(*a2 + 268LL);
      v224 = *(_QWORD*)(*a2 + 276LL);
      math_Quat_FromYawPitchRoll((void*)(&v263_.v263),
                                 *(float*)(*a2 + 272LL) * 0x1.1df46a0000000p-6f,
                                 0x0.0p+0f, 0x0.0p+0f),
          v164 = COERCE_AS(__typeof__(v164),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v166 = COERCE_AS(__typeof__(v166),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (*(float*)(v45 + 284) == 0x0.0p+0f) {
        v47 = *(float*)&v224;
      }
      else {
        v47 = v46;
      }
      GameRoutine_d58c00((__int64)&v253_.v253, (__int64*)(v45 + 16)),
          v164 = COERCE_AS(__typeof__(v164),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v166 = COERCE_AS(__typeof__(v166),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      HIDWORD(v48) = HIDWORD(v224);
      v219 = v45;
      v49 = *(float*)&v224 + -0x1.99999a0000000p-1f;
      if ((float)(*(float*)&v224 + -0x1.99999a0000000p-1f) < 0x0.0p+0f) {
        v49 = 0x0.0p+0f;
      }
      if (*(float*)(v45 + 284) == 0x0.0p+0f) {
        *(float*)&v48 = v49;
        v222 = v48;
      }
      else {
        v50 = v46 + -0x1.99999a0000000p-1f;
        if ((float)(v46 + -0x1.99999a0000000p-1f) < 0x1.47ae140000000p-7f) {
          v50 = 0x1.47ae140000000p-7f;
        }
        *(_QWORD*)&v51 = __PAIR64__(HIDWORD(v224), LODWORD(v49));
        *((_QWORD*)&v51 + 1) = LODWORD(v50);
        v222 = v51;
      }
      GameRoutine_cae2c0((__int64)v241_.v241, (__int64*)v258_.v258),
          v164 = COERCE_AS(__typeof__(v164),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v166 = COERCE_AS(__typeof__(v166),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      *(_QWORD*)((char*)&v241_.v241[19] + 4) = v222;
      HIDWORD(v241_.v241[20]) = DWORD2(v222);
      GameRoutine_d6d880((__int64*)v258_.v258, (__int64)v241_.v241),
          v164 = COERCE_AS(__typeof__(v164),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v166 = COERCE_AS(__typeof__(v166),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v258_.v262 = 0;
      v52 = *(_QWORD*)GameData_212dbb8[0];
      v53 = GameData_212ebb0[0];
      if ((GameRoutine_f72090(*GameData_212ebb0[0],
                              *(_QWORD*)GameData_212dbb8[0] + 64LL) &
           1) != 0) {
        LANES128(v55).n128_u64[0] = *(_QWORD*)&v258_.v258[35];
        LODWORD(v54) = v258_.v259;
        LANES128(v55).n128_u64[1] = v54;
        if (v253_.v257 == 1) {
          v226 = v253_.v256;
        }
        else {
          v226 = vaddq_f32(v55, v253_.v253);
        }
        LANES128(v57).n128_u32[0] = 0;
        LANES128(v57).n128_u32[3] = 0;
        v58 = *v53;
        *(unsigned __int64*)((char*)LANES128(v57).n128_u64 + 4) =
            LODWORD(v258_.v261);
        v227 = v55;
        v228_.v228 = vaddq_f32(v55, v57);
        v59 = 1 << GameRoutine_f71d40(v58, (__int64)&v226, v52 + 64),
        v164 = COERCE_AS(__typeof__(v164),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v166 = COERCE_AS(__typeof__(v166),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v60 = *v53;
        v258_.v262 |= v59;
        v61 = 1 << GameRoutine_f71d40(v60, (__int64)&v227, v52 + 64),
        v164 = COERCE_AS(__typeof__(v164),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v166 = COERCE_AS(__typeof__(v166),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v62 = *v53;
        v258_.v262 |= v61;
        v63 = GameRoutine_f71d40(v62, (__int64)&v228_.v228, v52 + 64),
        v164 = COERCE_AS(__typeof__(v164),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v166 = COERCE_AS(__typeof__(v166),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v56 = v258_.v262 | (1 << v63);
      }
      else {
        v56 = v258_.v262 | 1;
      }
      v258_.v262 = v56;
      GameHr_cacc00((__int64)v241_.v241),
          v164 = COERCE_AS(__typeof__(v164),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v166 = COERCE_AS(__typeof__(v166),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v64 = 0x1.0000000000000p+0f / v42[6];
      v65 = fmodf(*(float*)&v224, v64) * 0x1.0000000000000p-1f,
      v164 = COERCE_AS(__typeof__(v164),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v166 = COERCE_AS(__typeof__(v166),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v66 = fmodf(v47, v64),
      v164 = COERCE_AS(__typeof__(v164),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v166 = COERCE_AS(__typeof__(v166),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v70 = *a2;
      v69 = a2[1];
      v237_.v239 = nullptr;
      v237_.v240 = 0;
      v237_.v238 = 0;
      if (v69 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v69 + 16), 1u,
                                  memory_order_relaxed);
      }
      v237_.v237[0] = v70;
      v237_.v237[1] = v69;
      v207 = v70;
      v208 = v69;
      *(float*)&v67 = v65 - (float)(*(float*)&v224 * 0x1.3333340000000p-1f);
      v210 = *(float*)&v224 * 0x1.3333340000000p-1f;
      if (*(float*)&v67 >= (float)(*(float*)&v224 * 0x1.3333340000000p-1f)) {
        v71 = nullptr;
      }
      else {
        v71 = nullptr;
        v72 = v47 * 0x1.3333340000000p-1f;
        v209 = (float)(PSEUDO_UNFUSED(v66 * 0x1.0000000000000p-1f)) -
               (float)(v47 * 0x1.3333340000000p-1f);
        if (v209 < (float)(v47 * 0x1.3333340000000p-1f)) {
          LANES128(v73).n128_u64[0] = LANES64(v220).n64_u64[0];
          v214 = v5;
          v212 = v47 * 0x1.3333340000000p-1f;
          v74 = (unsigned __int64)(float)(fabsf(vaddv_f32(v220) +
                                                0x1.f400000000000p+9f) *
                                          0x1.f400000000000p+9f);
          LODWORD(v75) = 0;
          v76 = 1812433253 *
                    ((unsigned __int64)(float)(v217 * 0x1.f400000000000p+9f) ^
                     ((unsigned __int64)(float)(v217 * 0x1.f400000000000p+9f) >>
                      30)) +
                2;
          LANES128(v73).n128_u64[1] = LODWORD(v217);
          *((float*)&v75 + 1) = *((float*)&v224 + 1) * 0x1.0000000000000p-1f;
          v77 = (1812433253 * (v74 ^ (v74 >> 30)) + 1) ^
                ((1812433253 * (v74 ^ (v74 >> 30)) + 1) << 11);
          v78 = (v76 >> 19) ^ (v77 >> 8) ^ v76 ^ v77;
          v221 = v73;
          v218 = COERCE_AS(float32x4_t, v75);
          v79 = (4 * v78) | 1;
          LANES128(v80).n128_u64[0] = 0x3E8000003E800000LL;
          LANES128(v80).n128_u64[1] = 0x3E8000003E800000LL;
          v216 = v80;
          do {
            *(float*)&v68 = v209;
            v211 = v67;
            v223 = (unsigned int)v67;
            do {
              v235_.v235 = (__typeof__(v235_.v235)){0};
              v82 = v263_.v264;
              v81 = v263_.v265;
              v84 = v267_.v267;
              v83 = v267_.v268;
              LANES128(v85).n128_u64[0] = v223;
              v86 = vmulq_f32(v263_.v263,
                              COERCE_AS(float32x4_t, GameData_1a829d0));
              LANES128(v87).n128_u64[0] = v223;
              LANES128(v88).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v86, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                      .n64_u64[0];
              LANES128(v85).n128_u64[1] = (unsigned int)v68;
              *(int8x8_t*)&LANES128(v88).n128_i8[8] =
                  vqtbl1_s8(v86, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
              LANES128(v89).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v85, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              LANES128(v90).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v85, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                      .n64_u64[0];
              LANES128(v85).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v85, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              LANES128(v87).n128_u64[1] = LANES128(v89).n128_u64[0];
              LANES128(v90).n128_u64[1] = LANES128(v90).n128_u64[0];
              LANES128(v89).n128_u64[1] = LANES128(v85).n128_u64[0];
              LANES128(v85).n128_u64[1] = v223;
              v91 = vmlaq_f32(vmulq_f32(v86, v90),
                              COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v87, v88));
              LANES128(v88).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v86, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              *(int32x2_t*)&LANES128(v88).n128_i8[8] = vdup_lane_s32(
                  COERCE_AS(int32x2_t, LANES128(v86).n128_u64[0]), 1);
              LANES128(v92).n128_u64[0] = LANES128(v263_.v263).n128_u64[0];
              v93 = vmlaq_f32(v91, COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v85, v88));
              LANES128(v85).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v86, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v85).n128_i8[8] =
                  vqtbl1_s8(v86, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
              LANES128(v86).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v263_.v263,
                                COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                      .n64_u64[0];
              LANES128(v86).n128_u64[1] = LANES128(v86).n128_u64[0];
              v94 = vmlsq_f32(v93, v85, v89);
              LANES128(v85).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v263_.v263,
                                COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              LANES128(v89).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v94, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                      .n64_u64[0];
              LANES128(v92).n128_u64[1] = LANES128(v85).n128_u64[0];
              *(int8x8_t*)&LANES128(v89).n128_i8[8] =
                  vqtbl1_s8(v94, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
              LANES128(v88).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v94, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                      .n64_u64[0];
              v95 = vmlaq_f32(vmulq_f32(v86, v94),
                              COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v92, v89));
              LANES128(v89).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v263_.v263,
                                COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              *(int32x2_t*)&LANES128(v88).n128_i8[8] = vdup_lane_s32(
                  COERCE_AS(int32x2_t, LANES128(v94).n128_u64[0]), 1);
              LANES128(v85).n128_u64[1] = LANES128(v89).n128_u64[0];
              LANES128(v89).n128_u64[1] = LANES128(v263_.v263).n128_u64[0];
              LANES128(v96).n128_u64[0] =
                  LANES64_OF(
                      vqtbl1_s8(v94, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                      .n64_u64[0];
              *(int8x8_t*)&LANES128(v96).n128_i8[8] =
                  vqtbl1_s8(v94, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
              v97 = vmlsq_f32(
                  vmlaq_f32(v95, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v89, v88)),
                  v96, v85);
              LANES128(v97).n128_u32[3] = 0;
              v98 = vaddq_f32(v221, v97);
              LANES128(v89).n128_u32[1] = 0;
              LANES128(v89).n128_u32[3] = 0;
              LANES128(v89).n128_f32[0] =
                  v64 * (float)((float)((float)((float)(v78 % 0x17) /
                                                0x1.7000000000000p+4f) +
                                        -0x1.0000000000000p-1f) +
                                (float)((float)((float)(v78 % 0x17) /
                                                0x1.7000000000000p+4f) +
                                        -0x1.0000000000000p-1f));
              LANES128(v89).n128_f32[2] =
                  v64 * (float)((float)((float)((float)(v78 % 0x34) /
                                                0x1.a000000000000p+5f) +
                                        -0x1.0000000000000p-1f) +
                                (float)((float)((float)(v78 % 0x34) /
                                                0x1.a000000000000p+5f) +
                                        -0x1.0000000000000p-1f));
              v100 = vmulq_f32(v89, v216);
              v99 = vaddq_f32(v100, v98);
              PSEUDO_LOW_LANE128(
                  v100, n128_u32,
                  COERCE_UNSIGNED_INT((float)(0x1.8000000000000p+3f)));
              v101 = *(float*)(v219 + 272) +
                     (float)((float)((float)((float)((float)(v78 % 0x47) /
                                                     0x1.1c00000000000p+6f) +
                                             -0x1.0000000000000p-1f) +
                                     (float)((float)((float)(v78 % 0x47) /
                                                     0x1.1c00000000000p+6f) +
                                             -0x1.0000000000000p-1f)) *
                             0x1.8000000000000p+3f);
              v235_.v236 = v101;
              v102 = vaddq_f32(v218, v99);
              LANES128(v103).n128_u64[0] = LANES128(v102).n128_u64[0];
              LANES128(v103).n128_u64[1] = LANES128(v102).n128_u32[2];
              v235_.v235 = v103;
              if (v258_.v260 <= 0x0.0p+0f) {
                goto LABEL_77;
              }
              LANES128(v102).n128_f32[0] = v258_.v261;
              if (v258_.v261 <= 0x0.0p+0f) {
                goto LABEL_77;
              }
              v215 = v99;
              v225 = v68;
              if ((GameRoutine_d6b220((__int64)&v253_.v253, &v235_.v235,
                                      LANES128(v102).n128_f64[0],
                                      LANES128(v103).n128_f64[0],
                                      LANES128(v100).n128_f64[0]) &
                   1) == 0) {
                goto LABEL_76;
              }
              v230_.v231 = 0;
              v230_.v232 = 0;
              v230_.v230 = 0;
              v226 = (__typeof__(v226)){0};
              v230_.v234 = 0x0.0p+0f;
              LANES128(v227).n128_u32[0] = v78;
              v104 = (v78 >> 1) %
                     (0xAAAAAAAAAAAAAAABLL * ((v81 - (__int64)v82) >> 3));
              v228_.v228 = (__typeof__(v228_.v228)){0};
              v228_.v229 = 0x0.0p+0f;
              *(float*)&v230_.v233 = -0x1.0000000000000p+0f;
              v105 = v267_.v267 + 32 * ((v78 >> 2) % ((v83 - v84) >> 5));
              v106 = &v263_.v264[3 * v104];
              v107 = *(unsigned __int8*)v106;
              v109 = v106[1];
              v108 = (const char*)v106[2];
              LANES128(v228_.v228).n128_u64[0] = LANES128(v215).n128_u64[0];
              v228_.v229 = v101;
              LANES128(v110).n128_u64[0] = LANES128(v215).n128_u64[0];
              if ((v107 & 1) != 0) {
                v111 = v108;
              }
              else {
                v111 = (char*)v106 + 1;
              }
              v112 = v107 >> 1;
              LANES128(v110).n128_u32[2] = LANES128(v215).n128_u32[2];
              if ((v107 & 1) != 0) {
                v112 = v109;
              }
              LANES128(v226).n128_u64[0] = (unsigned __int64)v111;
              LANES128(v226).n128_u64[1] = v112;
              LANES128(v110).n128_u32[3] = 0;
              v228_.v228 = v110;
              if (&v230_.v230 != (__int64*)v105) {
                if ((*(_BYTE*)v105 & 1) != 0) {
                  GameRoutine_64df20(&v230_.v230, *(_QWORD*)(v105 + 16),
                                     *(_QWORD*)(v105 + 8)),
                      v164 = COERCE_AS(
                          __typeof__(v164),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                      v166 = COERCE_AS(
                          __typeof__(v166),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  v111 = (const char*)LANES128(v226).n128_u64[0];
                }
                else {
                  v113 = *(_QWORD*)v105;
                  v114 = *(_QWORD*)(v105 + 16);
                  v230_.v231 = *(_QWORD*)(v105 + 8);
                  v230_.v232 = v114;
                  v230_.v230 = v113;
                }
              }
              v230_.v233 = *(int*)(v105 + 24);
              v230_.v234 = (float)(v78 % 0x29) / 0x1.4800000000000p+5f;
              v115 = *GameData_212d458[0];
              v116 = strlen(v111),
              v164 = COERCE_AS(__typeof__(v164),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
              v166 = COERCE_AS(__typeof__(v166),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              if (v116 >= 0xFFFFFFFFFFFFFFF7LL) {
                String_60a1d0(),
                    v164 = COERCE_AS(
                        __typeof__(v164),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                    v166 = COERCE_AS(
                        __typeof__(v166),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              }
              v117 = v116;
              if (v116 >= 0x17) {
                if ((v116 | 7) == 0x17) {
                  v119 = 26;
                }
                else {
                  v119 = (v116 | 7) + 1;
                }
                v118 = (char*)fw_memory_HeapManager_Allocate(*v24, v119, 16, 0),
                v164 =
                    COERCE_AS(__typeof__(v164),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v166 =
                    COERCE_AS(__typeof__(v166),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                v270_.v271 = v117;
                v270_.v272 = v118;
                v270_.v270 = v119 | 1;
              }
              else {
                v118 = (char*)&v270_.v270 + 1;
                LOBYTE(v270_.v270) = 2 * v116;
                if (v116 == 0) {
                  goto LABEL_99;
                }
              }
              memmove((__int64)v118, (__int64)v111, v117),
                  v164 = COERCE_AS(
                      __typeof__(v164),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v166 = COERCE_AS(
                      __typeof__(v166),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            LABEL_99:
              v118[v117] = 0;
              v120 = X8CALL_X0(void*, game_hub_cb8620((void*)(v241_.v241), v115,
                                                      &v270_.v270)),
              v164 = COERCE_AS(__typeof__(v164),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
              v166 = COERCE_AS(__typeof__(v166),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              if ((v270_.v270 & 1) != 0 && v270_.v272 != nullptr) {
                v121 = 128;
                if (*(_QWORD*)(*v24 + 200) == 0) {
                  v121 = 56;
                }
                nn_mem_StandardAllocator_Free(*v24 + v121, (__int64)v270_.v272),
                    v164 = COERCE_AS(
                        __typeof__(v164),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                    v166 = COERCE_AS(
                        __typeof__(v166),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              }
              v122 = *(float*)&v230_.v233;
              v5 = v214;
              *(_DWORD*)(v214 + 56) = 1;
              if (v122 >= 0x0.0p+0f) {
                v124 = v230_.v234;
                v125 = GameRoutine_60a020((__int64)&v244, GameData_1a9d6f9),
                v164 =
                    COERCE_AS(__typeof__(v164),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v166 =
                    COERCE_AS(__typeof__(v166),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                v126 = v246_.v247;
                if ((unsigned __int64)v246_.v247 >= v246_.v248) {
                  v134 = v246_.v246;
                  v135 = (char*)v246_.v247 - v246_.v246;
                  v136 = 1 - 0x5555555555555555LL *
                                 (((__int64)v246_.v247 - v246_.v246) >> 3);
                  if (v136 > 0xAAAAAAAAAAAAAAALL) {
                    goto LABEL_293;
                  }
                  if (0x5555555555555556LL *
                          ((__int64)(v246_.v248 - v246_.v246) >> 3) >
                      v136) {
                    v136 = 0x5555555555555556LL *
                           ((__int64)(v246_.v248 - v246_.v246) >> 3);
                  }
                  if (0xAAAAAAAAAAAAAAABLL *
                          ((__int64)(v246_.v248 - v246_.v246) >> 3) >=
                      0x555555555555555LL) {
                    v137 = 0xAAAAAAAAAAAAAAALL;
                  }
                  else {
                    v137 = v136;
                  }
                  if (v137 != 0) {
                    if (v137 > 0xAAAAAAAAAAAAAAALL) {
                      goto LABEL_291;
                    }
                    v138 =
                        fw_memory_HeapManager_Allocate(*v24, 24 * v137, 16, 0),
                    v164 = COERCE_AS(
                        __typeof__(v164),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                    v166 = COERCE_AS(
                        __typeof__(v166),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  }
                  else {
                    v138 = 0;
                  }
                  v144 = &v135[v138];
                  if ((v230_.v230 & 1) != 0) {
                    fw_text_String_CopyTerminated((__int64*)&v135[v138],
                                                  v230_.v232, v230_.v231),
                        v164 = COERCE_AS(
                            __typeof__(v164),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                        v166 = COERCE_AS(
                            __typeof__(v166),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                    v134 = v246_.v246;
                    v135 = (char*)v246_.v247 - v246_.v246;
                  }
                  else {
                    v145 = v230_.v231;
                    *(_QWORD*)v144 = v230_.v230;
                    *((_QWORD*)v144 + 1) = v145;
                    *((_QWORD*)v144 + 2) = v230_.v232;
                  }
                  v146 = v138 + 24 * v137;
                  v129 = (__int64*)(v144 + 24);
                  v125 = memcpy(v144 - v135, v134, (unsigned __int64)v135),
                  v164 = COERCE_AS(
                      __typeof__(v164),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v166 = COERCE_AS(
                      __typeof__(v166),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  v246_.v246 = v144 - v135;
                  v246_.v247 = (__int64*)(v144 + 24);
                  v246_.v248 = v146;
                  v24 = (__int64*)fw_memory_g_heap_manager_ptr;
                  if (v134 != 0) {
                    v147 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v147 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v147, v134),
                        v164 = COERCE_AS(
                            __typeof__(v164),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                        v166 = COERCE_AS(
                            __typeof__(v166),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  }
                  v5 = v214;
                }
                else if ((v230_.v230 & 1) != 0) {
                  v125 = fw_text_String_CopyTerminated(v246_.v247, v230_.v232,
                                                       v230_.v231),
                  v164 = COERCE_AS(
                      __typeof__(v164),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v166 = COERCE_AS(
                      __typeof__(v166),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  v129 = v126 + 3;
                }
                else {
                  v127 = v230_.v230;
                  v128 = v230_.v232;
                  v129 = v246_.v247 + 3;
                  v246_.v247[1] = v230_.v231;
                  v126[2] = v128;
                  *v126 = v127;
                }
                v246_.v247 = v129;
                std___1_to_string_1a0acd0(
                    (void*)(&v270_.v270), v125,
                    v122 *
                        (float)((float)((float)((float)(v124 +
                                                        -0x1.0000000000000p-1f) +
                                                (float)(v124 +
                                                        -0x1.0000000000000p-1f)) *
                                        0x1.0000000000000p-2f) +
                                0x1.0000000000000p+0f)),
                    v164 = COERCE_AS(
                        __typeof__(v164),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                    v166 = COERCE_AS(
                        __typeof__(v166),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                GameRoutine_7a8220(&v246_.v246, &v270_.v270),
                    v164 = COERCE_AS(
                        __typeof__(v164),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                    v166 = COERCE_AS(
                        __typeof__(v166),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                if ((v270_.v270 & 1) != 0 && v270_.v272 != nullptr) {
                  v148 = 128;
                  if (*(_QWORD*)(*v24 + 200) == 0) {
                    v148 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v24 + v148,
                                                (__int64)v270_.v272),
                      v164 = COERCE_AS(
                          __typeof__(v164),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                      v166 = COERCE_AS(
                          __typeof__(v166),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                }
                v72 = v212;
              }
              else {
                if ((v244 & 1) != 0) {
                  *(_QWORD*)&v245[7] = 15;
                  v123 = *(_BYTE**)&v245[15];
                }
                else {
                  v244 = 30;
                  v123 = v245;
                }
                v123[15] = 0;
                *(_QWORD*)v123 = 0x83E38B83E3A282E3LL;
                *(_QWORD*)(v123 + 7) = 0x9F94E78D86E5A183LL;
                v130 = v246_.v247;
                if ((unsigned __int64)v246_.v247 >= v246_.v248) {
                  v139 = v246_.v246;
                  v140 = (char*)v246_.v247 - v246_.v246;
                  v141 = 1 - 0x5555555555555555LL *
                                 (((__int64)v246_.v247 - v246_.v246) >> 3);
                  if (v141 > 0xAAAAAAAAAAAAAAALL) {
                    goto LABEL_293;
                  }
                  if (0x5555555555555556LL *
                          ((__int64)(v246_.v248 - v246_.v246) >> 3) >
                      v141) {
                    v141 = 0x5555555555555556LL *
                           ((__int64)(v246_.v248 - v246_.v246) >> 3);
                  }
                  if (0xAAAAAAAAAAAAAAABLL *
                          ((__int64)(v246_.v248 - v246_.v246) >> 3) >=
                      0x555555555555555LL) {
                    v142 = 0xAAAAAAAAAAAAAAALL;
                  }
                  else {
                    v142 = v141;
                  }
                  if (v142 != 0) {
                    if (v142 > 0xAAAAAAAAAAAAAAALL) {
                      goto LABEL_291;
                    }
                    v143 =
                        fw_memory_HeapManager_Allocate(*v24, 24 * v142, 16, 0),
                    v164 = COERCE_AS(
                        __typeof__(v164),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                    v166 = COERCE_AS(
                        __typeof__(v166),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  }
                  else {
                    v143 = 0;
                  }
                  v149 = &v140[v143];
                  if ((v230_.v230 & 1) != 0) {
                    fw_text_String_CopyTerminated((__int64*)&v140[v143],
                                                  v230_.v232, v230_.v231),
                        v164 = COERCE_AS(
                            __typeof__(v164),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                        v166 = COERCE_AS(
                            __typeof__(v166),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                    v139 = v246_.v246;
                    v140 = (char*)v246_.v247 - v246_.v246;
                  }
                  else {
                    v150 = v230_.v231;
                    *(_QWORD*)v149 = v230_.v230;
                    *((_QWORD*)v149 + 1) = v150;
                    *((_QWORD*)v149 + 2) = v230_.v232;
                  }
                  v151 = v143 + 24 * v142;
                  v133 = (__int64*)(v149 + 24);
                  v120 = (_QWORD*)memcpy(v149 - v140, v139,
                                         (unsigned __int64)v140),
                  v164 = COERCE_AS(
                      __typeof__(v164),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v166 = COERCE_AS(
                      __typeof__(v166),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  v246_.v246 = v149 - v140;
                  v246_.v247 = (__int64*)(v149 + 24);
                  v246_.v248 = v151;
                  v24 = (__int64*)fw_memory_g_heap_manager_ptr;
                  if (v139 != 0) {
                    v152 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v152 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v152, v139),
                        v164 = COERCE_AS(
                            __typeof__(v164),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                        v166 = COERCE_AS(
                            __typeof__(v166),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  }
                  v5 = v214;
                }
                else if ((v230_.v230 & 1) != 0) {
                  v120 = (_QWORD*)fw_text_String_CopyTerminated(
                      v246_.v247, v230_.v232, v230_.v231),
                  v164 = COERCE_AS(
                      __typeof__(v164),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v166 = COERCE_AS(
                      __typeof__(v166),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  v133 = v130 + 3;
                }
                else {
                  v131 = v230_.v230;
                  v132 = v230_.v232;
                  v133 = v246_.v247 + 3;
                  v246_.v247[1] = v230_.v231;
                  v130[2] = v132;
                  *v130 = v131;
                }
                v246_.v247 = v133;
              }
              if (a3[88] == 1) {
                v153 = *(_DWORD*)(v5 + 56);
                v155 = &v246_.v246;
                v154 = &v244;
                if (v153 != 0) {
                  if (v153 == 2) {
                    v155 = (__int64*)v252;
                    v154 = v251;
                  }
                  else {
                    v155 = (__int64*)v250;
                    v154 = v249;
                    if (v153 != 1) {
                      goto LABEL_200;
                    }
                  }
                }
                *(_DWORD*)(v5 + 56) = v153 + 1;
                if ((*v154 & 1) != 0) {
                  *((_QWORD*)v154 + 1) = 18;
                  v159 = *((char**)v154 + 2);
                }
                else {
                  *v154 = 36;
                  v159 = v154 + 1;
                }
                v159[18] = 0;
                *((_WORD*)v159 + 8) = -29822;
                *(_QWORD*)v159 = 0x83E3A383E3AD82E3LL;
                *((_QWORD*)v159 + 1) = 0xE38BA6E89282E3A9LL;
                if ((a3[88] & 1) == 0) {
                LABEL_292:
                  GameRoutine_8123d0(),
                      v164 = COERCE_AS(
                          __typeof__(v164),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                      v166 = COERCE_AS(
                          __typeof__(v166),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                }
                v160 = (_QWORD*)v155[1];
                if ((unsigned __int64)v160 >= v155[2]) {
                  v155[1] = (__int64)Manager_66cc20(v155, (_QWORD*)a3 + 8),
                  v164 = COERCE_AS(
                      __typeof__(v164),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v166 = COERCE_AS(
                      __typeof__(v166),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                }
                else {
                  if ((a3[64] & 1) != 0) {
                    fw_text_String_CopyTerminated((__int64*)v155[1],
                                                  *((_QWORD*)a3 + 10),
                                                  *((_QWORD*)a3 + 9)),
                        v164 = COERCE_AS(
                            __typeof__(v164),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                        v166 = COERCE_AS(
                            __typeof__(v166),
                            PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  }
                  else {
                    v161 = *((_QWORD*)a3 + 8);
                    v162 = *((_QWORD*)a3 + 10);
                    v160[1] = *((_QWORD*)a3 + 9);
                    v160[2] = v162;
                    *v160 = v161;
                  }
                  v155[1] = (__int64)(v160 + 3);
                }
              }
              else {
                if (a3[48] != 1) {
                  goto LABEL_200;
                }
                v156 = *(_DWORD*)(v5 + 56);
                v158 = &v246_.v246;
                v157 = &v244;
                if (v156 != 0) {
                  if (v156 == 2) {
                    v158 = (__int64*)v252;
                    v157 = v251;
                  }
                  else {
                    v158 = (__int64*)v250;
                    v157 = v249;
                    if (v156 != 1) {
                      goto LABEL_200;
                    }
                  }
                }
                *(_DWORD*)(v5 + 56) = v156 + 1;
                if ((a3[48] & 1) == 0) {
                  goto LABEL_292;
                }
                if ((*v157 & 1) != 0) {
                  *((_QWORD*)v157 + 1) = 15;
                  v163 = *((char**)v157 + 2);
                }
                else {
                  *v157 = 30;
                  v163 = v157 + 1;
                }
                v163[15] = 0;
                *(_QWORD*)v163 = 0x82E399A8E6A7BAE5LL;
                *(_QWORD*)(v163 + 7) = 0x8B82E38BA6E89282LL;
                std___1_to_string_1a0acd0((void*)(&v270_.v270), v120,
                                          *((float*)a3 + 8)),
                    v164 = COERCE_AS(
                        __typeof__(v164),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                    v166 = COERCE_AS(
                        __typeof__(v166),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                GameRoutine_7a8220(v158, &v270_.v270),
                    v164 = COERCE_AS(
                        __typeof__(v164),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                    v166 = COERCE_AS(
                        __typeof__(v166),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                if ((v270_.v270 & 1) != 0 && v270_.v272 != nullptr) {
                  v165 = 128;
                  if (*(_QWORD*)(*v24 + 200) == 0) {
                    v165 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v24 + v165,
                                                (__int64)v270_.v272),
                      v164 = COERCE_AS(
                          __typeof__(v164),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                      v166 = COERCE_AS(
                          __typeof__(v166),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                }
                std___1_to_string_1a0acd0((void*)(&v270_.v270), v164,
                                          *((float*)a3 + 9)),
                    v164 = COERCE_AS(
                        __typeof__(v164),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                    v166 = COERCE_AS(
                        __typeof__(v166),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                GameRoutine_7a8220(v158, &v270_.v270),
                    v164 = COERCE_AS(
                        __typeof__(v164),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                    v166 = COERCE_AS(
                        __typeof__(v166),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                if ((v270_.v270 & 1) != 0 && v270_.v272 != nullptr) {
                  v167 = 128;
                  if (*(_QWORD*)(*v24 + 200) == 0) {
                    v167 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v24 + v167,
                                                (__int64)v270_.v272),
                      v164 = COERCE_AS(
                          __typeof__(v164),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                      v166 = COERCE_AS(
                          __typeof__(v166),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                }
                std___1_to_string_1a0acd0((void*)(&v270_.v270), v166,
                                          *((float*)a3 + 10)),
                    v164 = COERCE_AS(
                        __typeof__(v164),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                    v166 = COERCE_AS(
                        __typeof__(v166),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                GameRoutine_7a8220(v158, &v270_.v270),
                    v164 = COERCE_AS(
                        __typeof__(v164),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                    v166 = COERCE_AS(
                        __typeof__(v166),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                if ((v270_.v270 & 1) != 0 && v270_.v272 != nullptr) {
                  v168 = 128;
                  if (*(_QWORD*)(*v24 + 200) == 0) {
                    v168 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v24 + v168,
                                                (__int64)v270_.v272),
                      v164 = COERCE_AS(
                          __typeof__(v164),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                      v166 = COERCE_AS(
                          __typeof__(v166),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                }
              }
            LABEL_200:
              v241_.v241[23] = LANES128(v228_.v228).n128_u64[0];
              v241_.v242 = LANES128(v228_.v228).n128_u32[2];
              v241_.v243 = v228_.v229;
              game_hub_cb8930_alt1((void*)(&v270_.v270), *GameData_212d458[0],
                                   (__int64)v241_.v241,
                                   LANES128(v227).n128_u32[0] | 0x100000000LL),
                  v164 = COERCE_AS(
                      __typeof__(v164),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v166 = COERCE_AS(
                      __typeof__(v166),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              v169 = v270_.v271;
              if (v270_.v271 != 0) {
                v170 = std___1___shared_weak_count_lock(v270_.v271),
                v164 =
                    COERCE_AS(__typeof__(v164),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v166 =
                    COERCE_AS(__typeof__(v166),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                if (v170 != 0) {
                  v171 = v270_.v270;
                }
                else {
                  v171 = 0;
                }
                std___1___shared_weak_count___release_weak_alt1(v169),
                    v164 = COERCE_AS(
                        __typeof__(v164),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                    v166 = COERCE_AS(
                        __typeof__(v166),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              }
              else {
                v170 = 0;
                v171 = 0;
              }
              if (a3[96] == 1) {
                HubCharacterNatives_caea10(v171, 2048, 1),
                    v164 = COERCE_AS(
                        __typeof__(v164),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                    v166 = COERCE_AS(
                        __typeof__(v166),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              }
              if (v170 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v170 + 16),
                                          1u, memory_order_relaxed);
                if (atomic_fetch_add((atomic_ullong* volatile)(v170 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v170 + 16LL))(v170),
                      v164 = COERCE_AS(
                          __typeof__(v164),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                      v166 = COERCE_AS(
                          __typeof__(v166),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  std___1___shared_weak_count___release_weak_alt1(v170),
                      v164 = COERCE_AS(
                          __typeof__(v164),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                      v166 = COERCE_AS(
                          __typeof__(v166),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                }
              }
              Character_ca9280((__int64)v241_.v241),
                  v164 = COERCE_AS(
                      __typeof__(v164),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v166 = COERCE_AS(
                      __typeof__(v166),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              if ((unsigned __int64)v71 >= v237_.v240) {
                v173 = v237_.v238;
                v174 = (unsigned __int64)v71 - v237_.v238;
                v175 = ((__int64)v71 - v237_.v238) >> 4;
                v176 = v175 + 1;
                if ((unsigned __int64)(v175 + 1) >> 60 != 0) {
                  goto LABEL_294;
                }
                v177 = v237_.v240 - v237_.v238;
                if ((__int64)(v237_.v240 - v237_.v238) >> 3 > v176) {
                  v176 = v177 >> 3;
                }
                if ((unsigned __int64)v177 >= 0x7FFFFFFFFFFFFFF0LL) {
                  v178 = 0xFFFFFFFFFFFFFFFLL;
                }
                else {
                  v178 = v176;
                }
                if (v178 >> 60 != 0) {
                LABEL_291:
                  GameRoutine_60a210(),
                      v164 = COERCE_AS(
                          __typeof__(v164),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                      v166 = COERCE_AS(
                          __typeof__(v166),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                }
                v179 = fw_memory_HeapManager_Allocate(*v24, 16 * v178, 16, 0),
                v164 =
                    COERCE_AS(__typeof__(v164),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v166 =
                    COERCE_AS(__typeof__(v166),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                v180 = (__int64*)(v179 + v174);
                *v180 = v171;
                v180[1] = v170;
                if (v170 != 0) {
                  atomic_fetch_add_explicit(
                      (atomic_ullong* volatile)(v170 + 16), 1u,
                      memory_order_relaxed);
                }
                v181 = (__int64)&v180[-2 * v175];
                v182 = v179 + 16 * v178;
                v71 = v180 + 2;
                memcpy(v181, v173, v174),
                    v164 = COERCE_AS(
                        __typeof__(v164),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                    v166 = COERCE_AS(
                        __typeof__(v166),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                v237_.v238 = v181;
                v237_.v240 = v182;
                v24 = (__int64*)fw_memory_g_heap_manager_ptr;
                if (v173 != 0) {
                  v183 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v183 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v183, v173),
                      v164 = COERCE_AS(
                          __typeof__(v164),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                      v166 = COERCE_AS(
                          __typeof__(v166),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                }
                v68 = v225;
                v5 = v214;
                v237_.v239 = v71;
                if (v170 != 0) {
                LABEL_215:
                  std___1___shared_weak_count___release_weak_alt1(v170),
                      v164 = COERCE_AS(
                          __typeof__(v164),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                      v166 = COERCE_AS(
                          __typeof__(v166),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
                  v68 = v225;
                }
              }
              else {
                v68 = v225;
                *v71 = v171;
                v71[1] = v170;
                if (v170 != 0) {
                  atomic_fetch_add_explicit(
                      (atomic_ullong* volatile)(v170 + 16), 1u,
                      memory_order_relaxed);
                }
                v71 += 2;
                v237_.v239 = v71;
                if (v170 != 0) {
                  goto LABEL_215;
                }
              }
              if ((v230_.v230 & 1) != 0 && v230_.v232 != 0) {
                v172 = 128;
                if (*(_QWORD*)(*v24 + 200) == 0) {
                  v172 = 56;
                }
                nn_mem_StandardAllocator_Free(*v24 + v172, v230_.v232),
                    v164 = COERCE_AS(
                        __typeof__(v164),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                    v166 = COERCE_AS(
                        __typeof__(v166),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
              LABEL_76:
                v68 = v225;
              }
            LABEL_77:
              *(float*)&v68 = v64 + *(float*)&v68;
              v78 += v79;
              v79 = 3 * v79 + 1;
            } while (*(float*)&v68 < v72);
            v67 = v211;
            *(float*)&v67 = v64 + *(float*)&v211;
          } while ((float)(v64 + *(float*)&v211) < v210);
        }
      }
      v184 = *(_QWORD**)(v5 + 40);
      if ((unsigned __int64)v184 >= *(_QWORD*)(v5 + 48)) {
        v191 = GameRoutine_e23e40((_QWORD*)(v5 + 32), v237_.v237),
        v164 = COERCE_AS(__typeof__(v164),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v166 = COERCE_AS(__typeof__(v166),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v186 = v237_.v238;
        v185 = v208;
      }
      else {
        v185 = v208;
        *v184 = v207;
        v184[1] = v208;
        if (v208 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v208 + 16), 1u,
                                    memory_order_relaxed);
        }
        v186 = v237_.v238;
        v184[3] = 0;
        v184[4] = 0;
        v184[2] = 0;
        v187 = (unsigned __int64)v71 - v186;
        if (v71 != (__int64*)v186) {
          if ((v187 & 0x8000000000000000LL) != 0) {
          LABEL_294:
            GameRoutine_cb48b0(),
                v164 =
                    COERCE_AS(__typeof__(v164),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v166 =
                    COERCE_AS(__typeof__(v166),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          }
          v188 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, (__int64)v71 - v186, 16,
              0),
          v164 = COERCE_AS(__typeof__(v164),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v166 = COERCE_AS(__typeof__(v166),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          v184[2] = v188;
          v184[3] = v188;
          v189 = (__int64*)v186;
          v184[4] = v188 + v187;
          do {
            *(_QWORD*)v188 = *v189;
            v190 = v189[1];
            *(_QWORD*)(v188 + 8) = v190;
            if (v190 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v190 + 16),
                                        1u, memory_order_relaxed);
            }
            v189 += 2;
            v188 += 16;
          } while (v189 != v71);
          v184[3] = v188;
        }
        v191 = v184 + 5;
      }
      *(_QWORD*)(v5 + 40) = v191;
      if (v186 != 0) {
        v192 = v237_.v239;
        if ((__int64*)v186 != v237_.v239) {
          do {
            v199 = *(v192 - 1);
            if (v199 != 0) {
              std___1___shared_weak_count___release_weak_alt1(v199),
                  v164 = COERCE_AS(
                      __typeof__(v164),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                  v166 = COERCE_AS(
                      __typeof__(v166),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
            }
            v192 -= 2;
          } while (v192 != (__int64*)v186);
        }
        v193 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v193 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v193, v186),
            v164 = COERCE_AS(__typeof__(v164),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v166 = COERCE_AS(__typeof__(v166),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      if (v185 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v185),
            v164 = COERCE_AS(__typeof__(v164),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v166 = COERCE_AS(__typeof__(v166),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      GameRoutine_d6aa20((__int64)&v253_.v253),
          v164 = COERCE_AS(__typeof__(v164),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v166 = COERCE_AS(__typeof__(v166),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v41 = v267_.v267;
      v24 = (__int64*)fw_memory_g_heap_manager_ptr;
    }
    if (v41 != 0) {
      v194 = v267_.v268;
      if (v41 == v267_.v268) {
        goto LABEL_271;
      }
      v195 = v267_.v268;
      do {
        v196 = *(_BYTE*)(v195 - 32);
        v195 -= 32;
        if ((v196 & 1) != 0) {
          v197 = *(_QWORD*)(v194 - 16);
          if (v197 != 0) {
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v198 = 128;
            }
            else {
              v198 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v198, v197),
                v164 =
                    COERCE_AS(__typeof__(v164),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
                v166 =
                    COERCE_AS(__typeof__(v166),
                              PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
          }
        }
        v194 = v195;
      } while (v195 != v41);
      v267_.v268 = v41;
      v24 = (__int64*)fw_memory_g_heap_manager_ptr;
      v41 = v267_.v267;
      if (v267_.v267 != 0) {
      LABEL_271:
        v200 = 128;
        if (*(_QWORD*)(*v24 + 200) == 0) {
          v200 = 56;
        }
        nn_mem_StandardAllocator_Free(*v24 + v200, v41),
            v164 = COERCE_AS(__typeof__(v164),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v166 = COERCE_AS(__typeof__(v166),
                             PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
    }
    v43 = (__int64)v263_.v264;
  }
  if (v43 != 0) {
    v201 = v263_.v265;
    if (v43 == v263_.v265) {
      goto LABEL_286;
    }
    v202 = v263_.v265;
    do {
      v203 = *(_BYTE*)(v202 - 24);
      v202 -= 24;
      if ((v203 & 1) != 0) {
        v204 = *(_QWORD*)(v201 - 8);
        if (v204 != 0) {
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v205 = 128;
          }
          else {
            v205 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v205, v204),
              v164 = COERCE_AS(__typeof__(v164),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
              v166 = COERCE_AS(__typeof__(v166),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        }
      }
      v201 = v202;
    } while (v202 != v43);
    v263_.v265 = v43;
    v24 = (__int64*)fw_memory_g_heap_manager_ptr;
    v43 = (__int64)v263_.v264;
    if (v263_.v264 != nullptr) {
    LABEL_286:
      v206 = 128;
      if (*(_QWORD*)(*v24 + 200) == 0) {
        v206 = 56;
      }
      nn_mem_StandardAllocator_Free(*v24 + v206, v43),
          v164 = COERCE_AS(__typeof__(v164),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
          v166 = COERCE_AS(__typeof__(v166),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
  }
}

void game_hub_e24840(unsigned __int8* a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  char v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  const char* v8;
  __int64 v9;
  _BOOL4 v10;
  __int64 v11;
  int v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  const char* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  const char* v22;
  unsigned __int64 v23;
  const char* v24;
  __int64 v25;
  const char* v26;
  unsigned __int64 v27;
  _QWORD* v28;
  _QWORD* v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  struct {
    __int64 v45;
    __int64 v46;
  } v45_;
  struct {
    __int64 v47[2];
    const char* v48;
  } v47_;

  v1 = *a1;
  if ((v1 & 1) != 0) {
    v2 = *((_QWORD*)a1 + 1);
  }
  else {
    v2 = v1 >> 1;
  }
  if (v2 == 0) {
    return;
  }
  LocatorDispos_db1e20((void*)(v47_.v47), (__int64*)a1);
  v4 = v47_.v47[0];
  if ((v47_.v47[0] & 1) != 0) {
    v5 = v47_.v47[1];
  }
  else {
    v5 = (unsigned __int64)LOBYTE(v47_.v47[0]) >> 1;
  }
  v6 = *(unsigned __int8*)(GameData_21f3d10 + 40);
  v7 = *(_QWORD*)(GameData_21f3d10 + 48);
  if ((v6 & 1) == 0) {
    v7 = v6 >> 1;
  }
  if (v5 == v7) {
    if ((v47_.v47[0] & 1) != 0) {
      v8 = v47_.v48;
    }
    else {
      v8 = (char*)v47_.v47 + 1;
    }
    if ((v6 & 1) != 0) {
      v9 = *(_QWORD*)(GameData_21f3d10 + 56);
    }
    else {
      v9 = GameData_21f3d10 + 41;
    }
    v10 = memcmp((__int64)v8, v9, v5) == 0;
    if ((v4 & 1) == 0) {
      goto LABEL_24;
    }
  }
  else {
    v10 = false;
    if ((v47_.v47[0] & 1) == 0) {
      goto LABEL_24;
    }
  }
  if (v47_.v48 != nullptr) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v11,
                                  (__int64)v47_.v48);
  }
LABEL_24:
  LocatorDispos_db1f30((void*)(v47_.v47), a1);
  v12 = a1[138];
  *((_WORD*)a1 + 68) = 0;
  if (v12 == 1) {
    a1[136] = 1;
    goto LABEL_85;
  }
  if (!v10) {
    v38 = a1[48];
    if ((v38 & 1) != 0) {
      v39 = *((_QWORD*)a1 + 7);
    }
    else {
      v39 = v38 >> 1;
    }
    if (v39 != 0 || (((v40 = a1[24]) & 1) != 0 ? (v41 = *((_QWORD*)a1 + 4))
                                               : (v41 = v40 >> 1),
                     v41 != 0)) {
      a1[136] = 1;
    }
    v42 = a1[72];
    if ((v42 & 1) != 0) {
      v43 = *((_QWORD*)a1 + 10);
    }
    else {
      v43 = v42 >> 1;
    }
    if (v43 == 0) {
      goto LABEL_86;
    }
    goto LABEL_85;
  }
  v13 = game_ff5c20(*(_QWORD*)(*GameData_212ebe0 + 8) + 24LL,
                    (unsigned __int8*)v47_.v47);
  v14 = *v13;
  v15 = v13[1];
  if (*v13 != v15) {
    if ((a1[48] & 1) != 0) {
      v16 = *((const char**)a1 + 8);
    }
    else {
      v16 = (const char*)(a1 + 49);
    }
    v17 = strlen(v16);
    while (1) {
      v18 = *(_QWORD*)v14;
      v19 = *(_BYTE*)(*(_QWORD*)v14 + 112LL) >> 1;
      if ((*(_BYTE*)(*(_QWORD*)v14 + 112LL) & 1) != 0) {
        v19 = *(_QWORD*)(*(_QWORD*)v14 + 120LL);
      }
      if (v17 == v19) {
        if (v17 == -1) {
          fs_60a230();
        }
        v20 = (*(_BYTE*)(*(_QWORD*)v14 + 112LL) & 1) != 0
                  ? *(_QWORD*)(v18 + 128)
                  : v18 + 113;
        if (memcmp(v20, (__int64)v16, v17) == 0) {
          break;
        }
      }
      v14 += 48;
      if (v14 == v15) {
        goto LABEL_42;
      }
    }
    *((_QWORD*)a1 + 15) = *(_QWORD*)(v18 + 56);
    a1[128] = 1;
    a1[136] = 1;
  }
LABEL_42:
  v21 = *(_QWORD*)GameData_212dc68;
  if ((a1[24] & 1) != 0) {
    v22 = *((const char**)a1 + 5);
  }
  else {
    v22 = (const char*)(a1 + 25);
  }
  v23 = strlen(v22);
  if ((v47_.v47[0] & 1) != 0) {
    v24 = v47_.v48;
  }
  else {
    v24 = (char*)v47_.v47 + 1;
  }
  EventManager_cbc0c0((void*)(&v45_.v45), v21, (__int64)v22, v23, v24);
  if (v45_.v45 != 0) {
    *((_QWORD*)a1 + 15) = *(_QWORD*)(v45_.v45 + 176);
    a1[128] = 1;
    a1[136] = 1;
  }
  v25 = v45_.v46;
  if (v45_.v46 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v45_.v46 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    std___1___shared_weak_count___release_weak_alt1(v25);
  }
  if (a1[138] == 1) {
  LABEL_85:
    a1[137] = 1;
    goto LABEL_86;
  }
  if ((a1[72] & 1) != 0) {
    v26 = *((const char**)a1 + 11);
  }
  else {
    v26 = (const char*)(a1 + 73);
  }
  v27 = strlen(v26);
  if (v27 != 0) {
    v28 = *(_QWORD**)(GameData_220d620 + 8);
    v29 = *(_QWORD**)(GameData_220d620 + 16);
    if (v28 != v29) {
      v30 = v27;
      while (1) {
        v31 = *v28;
        if ((*(_BYTE*)(*v28 + 16LL) & 1) == 0) {
          v32 = *(unsigned __int8*)(v31 + 112);
          v33 = *(_QWORD*)(v31 + 120);
          if ((v32 & 1) == 0) {
            v33 = v32 >> 1;
          }
          if (v30 == v33) {
            v34 = v31 + 113;
            v35 = *(_QWORD*)(v31 + 128);
            v36 = (v32 & 1) != 0 ? v35 : v34;
            if (memcmp((__int64)v26, v36, v30) == 0) {
              break;
            }
          }
        }
        v28 += 2;
        if (v28 == v29) {
          goto LABEL_86;
        }
      }
      v37 = v28[1];
      if (v37 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 8), 1u,
                                  memory_order_relaxed);
        a1[137] = 1;
        if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
          std___1___shared_weak_count___release_weak_alt1(v37);
        }
        goto LABEL_86;
      }
      goto LABEL_85;
    }
  }
LABEL_86:
  if ((v47_.v47[0] & 1) != 0 && v47_.v48 != nullptr) {
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v44,
                                  (__int64)v47_.v48);
  }
}

__int64 game_hub_f8a870(__int64 result, __int64* a2)
{
  _QWORD handle[2];
  __int64 v2;
  __int64 v3;
  int v4;
  __int64* v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  struct {
    __int64 v17;
    int v18;
  } v17_;
  __int64 v19[3];
  _QWORD v20[27];

  if ((*(_BYTE*)(result + 24) & 1) == 0 && *((_BYTE*)a2 + 16) == 1) {
    v20[25] = v2;
    v20[26] = v3;
    v4 = *((_DWORD*)a2 + 2);
    memset(v19, 0, sizeof(v19));
    v5 = a2;
    if (v4 == 2) {
      v8 = result;
      GameRoutine_60a020((__int64)v19, "SE_EVT_Obelisk_Warp_Second");
      v6 = LOBYTE(v19[0]);
      v7 = v19[1];
      a2 = v5;
      result = v8;
    }
    else if (v4 == 1) {
      v6 = 38;
      strcpy((char*)v19, "&SE_EVT_Obelisk_Warp");
      v7 = 0x5F6B73696C65624FLL;
    }
    else {
      v7 = 0;
      v6 = 0;
    }
    v9 = v6 & 1;
    v10 = v6 >> 1;
    if (v9 != 0) {
      v10 = v7;
    }
    if (v10 != 0) {
      v11 = result;
      if (v9 != 0) {
        v12 = (char*)v19[2];
      }
      else {
        v12 = (char*)v19 + 1;
      }
      if (v12 != nullptr) {
        snd_Fade_Fade_10c830((__int64)v20, 0x0.0p+0f);
        snd_play_ff2d0((void*)(handle), (__int64)v12, (__int64)v12,
                       (__int64)v20, 0, 0x10001u, 0, 0x0.0p+0f,
                       0x1.0000000000000p+0f);
        snd_Fade_Destroy_Fade(v20);
      }
      else {
        v17_.v17 = 0;
        v17_.v18 = 0x2000;
      }
      GameRoutine_112180((__int64)&GameData_2167770, (__int64)&v17_.v17);
      result = v11;
      a2 = v5;
      v9 = v19[0] & 1;
    }
    if (v9 != 0 && v19[2] != 0) {
      v13 = result;
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v19[2]);
      a2 = v5;
      result = v13;
    }
  }
  v15 = *a2;
  v16 = a2[1];
  *(_BYTE*)(result + 24) = *((_BYTE*)a2 + 16);
  *(_QWORD*)(result + 8) = v15;
  *(_QWORD*)(result + 16) = v16;
  return result;
}

__attribute__((swiftcall)) void

game_hub_fb48a0(PSEUDO_X8 x8_, __int64 unused_int0, unsigned __int8* a1)
{
  float* a2 = (float*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v10;
  unsigned __int8* v12;
  const char* v13;
  unsigned __int64 v14;
  _BYTE* v15;
  unsigned __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int128 v26;
  __int64 v27;
  float v28;
  const char* v29;
  __int64 v30;
  float32x4_t* v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  bool v41;
  float v42;
  float v43;
  float v44;
  unsigned int v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  __int128 v49;
  unsigned __int8 v50;
  struct {
    char gap8_[1];
    _BYTE v51[7];
    unsigned __int64 v52;
    _BYTE* v53;
  } v51_;

  v5 = *(_QWORD*)(GameData_21f3d10 + 72);
  if ((*(_BYTE*)(GameData_21f3d10 + 64) & 1) == 0) {
    v5 = *(_BYTE*)(GameData_21f3d10 + 64) >> 1;
  }
  if (v5 != 10) {
    goto LABEL_10;
  }
  v6 = GameData_21f3d10 + 65;
  if ((*(_BYTE*)(GameData_21f3d10 + 64) & 1) != 0) {
    v6 = *(_QWORD*)(GameData_21f3d10 + 80);
  }
  v7 = *(_QWORD*)v6;
  v8 = *(unsigned __int16*)(v6 + 8);
  if (v7 != *(_QWORD*)"Hub_100_A1" || v8 != *(unsigned __int16*)"A1") {
  LABEL_10:
    *((_QWORD*)a2 + 2) = 0;
    *((_QWORD*)a2 + 3) = 0;
    *(_QWORD*)a2 = 0;
    *((_QWORD*)a2 + 1) = 0;
    return;
  }
  v10 = *((_DWORD*)a1 + 2);
  if (v10 != 9) {
  LABEL_44:
    if (v10 == 8) {
      v28 = 0x0.0p+0f;
      v29 = "Bg_Obelisk_A009";
    }
    else {
      if ((unsigned __int8)(*a1 - 1) > 7u) {
        v29 = &GameData_1a9f09e;
      }
      else {
        v29 = (char*)GameData_1ba0734 +
              GameData_1ba0734[(unsigned __int8)(*a1 - 1)];
      }
      v28 = 0x1.6800000000000p+7f;
    }
    v30 = *(_QWORD*)GameData_212dbc0[0];
    strlen(v29);
    v31 = (float32x4_t*)GameHr_d70540(v30, v29);
    if (v31 == nullptr) {
      *((_QWORD*)a2 + 2) = 0;
      *((_QWORD*)a2 + 3) = 0;
      *(_QWORD*)a2 = 0;
      *((_QWORD*)a2 + 1) = 0;
      return;
    }
    v32 = LANES128(v31[20]).n128_f32[1];
    *(_QWORD*)a2 = 0;
    *((_QWORD*)a2 + 1) = 0;
    v33 = v28 + (float)(v32 * 0x1.ca5dc20000000p+5f);
    a2[4] = v33;
    v34 = (float)(PSEUDO_UNFUSED(v33 * 0x1.1df46a0000000p-6f)) +
          (float)(roundf((float)(v33 * 0x1.1df46a0000000p-6f) *
                         0x1.45f3060000000p-3f) *
                  -0x1.921fb60000000p+2f);
    if (v34 <= 0x1.921fb60000000p+0f) {
      v36 = v34;
      if (v34 >= -0x1.921fb60000000p+0f) {
      LABEL_57:
        v37 =
            v36 *
            (float)((float)((float)-(
                                float)(*(float*)((char*)((__int128*)0x10LL) +
                                                 (_QWORD)GameData_212c190) -
                                       (float)((float)(*(float*)((char*)((
                                                                     _UNKNOWN**)0x8LL) +
                                                                 (_QWORD)
                                                                     GameData_212c190 +
                                                                 4) +
                                                       (float)((float)-(
                                                                   float)(*(float*)((char*)((
                                                                                        _UNKNOWN**)0x8LL) +
                                                                                    (_QWORD)
                                                                                        GameData_212c190) -
                                                                          (float)((float)(*((float*)
                                                                                                GameData_212c190 +
                                                                                            1) -
                                                                                          (float)(*(float*)
                                                                                                      GameData_212c190 *
                                                                                                  (float)(v36 *
                                                                                                          v36))) *
                                                                                  (float)(v36 *
                                                                                          v36))) *
                                                               (float)(v36 *
                                                                       v36))) *
                                               (float)(v36 * v36))) *
                            (float)(v36 * v36)) +
                    0x1.0000000000000p+0f);
        if (v34 < -0x1.921fb60000000p+0f) {
          v38 = -0x1.0000000000000p+0f;
        }
        else {
          v38 = 0x1.0000000000000p+0f;
        }
        v39 = -0x1.921fb60000000p+1f - v34;
        if (v34 >= -0x1.921fb60000000p+0f) {
          v39 = v34;
        }
        v40 = 0x1.921fb60000000p+1f - v34;
        v41 = v34 <= 0x1.921fb60000000p+0f;
        if (v34 > 0x1.921fb60000000p+0f) {
          v42 = -0x1.0000000000000p+0f;
        }
        else {
          v42 = v38;
        }
        if (v41) {
          v43 = v39;
        }
        else {
          v43 = v40;
        }
        v44 = v43 * v43;
        *(float*)&v45 =
            v42 *
            (float)((float)((float)-(
                                float)(*(float*)((char*)((__int128*)0x10LL) +
                                                 (_QWORD)GameData_212c188) -
                                       (float)((float)(*(float*)((char*)((
                                                                     _UNKNOWN**)0x8LL) +
                                                                 (_QWORD)
                                                                     GameData_212c188 +
                                                                 4) +
                                                       (float)((float)-(
                                                                   float)(*(float*)((char*)((
                                                                                        _UNKNOWN**)0x8LL) +
                                                                                    (_QWORD)
                                                                                        GameData_212c188) -
                                                                          (float)((float)(*((float*)
                                                                                                GameData_212c188 +
                                                                                            1) -
                                                                                          (float)(*(float*)
                                                                                                      GameData_212c188 *
                                                                                                  v44)) *
                                                                                  v44)) *
                                                               v44)) *
                                               v44)) *
                            v44) +
                    0x1.0000000000000p+0f);
        LANES128(v46).n128_u64[0] = LODWORD(v37);
        LANES128(v46).n128_u64[1] = v45;
        LANES128(v47).n128_u64[0] = 0xC0600000C0600000LL;
        LANES128(v47).n128_u64[1] = 0xC0600000C0600000LL;
        v48 = vaddq_f32(v31[19], vmulq_f32(v46, v47));
        *(_QWORD*)a2 = LANES128(v48).n128_u64[0];
        v49 = *(_OWORD*)a2;
        *((_QWORD*)&v49 + 1) = LANES128(v48).n128_u32[2];
        *(_OWORD*)a2 = v49;
        return;
      }
      v35 = -0x1.921fb60000000p+1f;
    }
    else {
      v35 = 0x1.921fb60000000p+1f;
    }
    v36 = v35 - v34;
    goto LABEL_57;
  }
  LOBYTE(v51_.v52) = 0;
  v12 = a1;
  v50 = 14;
  *(_DWORD*)v51_.v51 = -443836695;
  *(_DWORD*)&v51_.v51[3] = 1602988005;
  v13 = (const char*)*(&GameData_1f9caf8 + *a1);
  v14 = strlen(v13);
  GameRoutine_1a09ce0((__int64)&v50, v13, v14);
  if ((v50 & 1) != 0) {
    v15 = v51_.v53;
  }
  else {
    v15 = v51_.v51;
  }
  if ((v50 & 1) != 0) {
    v16 = v51_.v52;
  }
  else {
    v16 = (unsigned __int64)v50 >> 1;
  }
  if (v16 != 0) {
    a1 = v12;
    v17 = *(_QWORD**)(*(_QWORD*)GameData_212ec00 + 8LL);
    v18 = *(_QWORD**)(*(_QWORD*)GameData_212ec00 + 16LL);
    if (v17 == v18) {
    LABEL_20:
      LODWORD(v19) = 1;
    }
    else {
      while (1) {
        v20 = *v17;
        if ((*(_BYTE*)(*v17 + 16LL) & 1) == 0) {
          v21 = *(unsigned __int8*)(v20 + 112);
          v22 = *(_QWORD*)(v20 + 120);
          if ((v21 & 1) == 0) {
            v22 = v21 >> 1;
          }
          if (v16 == v22) {
            v23 = (v21 & 1) != 0 ? *(_QWORD*)(v20 + 128) : v20 + 113;
            v24 = memcmp((__int64)v15, v23, v16);
            a1 = v12;
            if (v24 == 0) {
              break;
            }
          }
        }
        v17 += 2;
        if (v17 == v18) {
          goto LABEL_20;
        }
      }
      v19 = v17[1];
      if (v19 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                  memory_order_relaxed);
      }
      v25 = *(_QWORD*)(v20 + 160);
      *((_QWORD*)a2 + 1) = 0;
      *(_QWORD*)a2 = v25;
      v26 = *(_OWORD*)a2;
      *((_QWORD*)&v26 + 1) = *(unsigned int*)(v20 + 168);
      *(_OWORD*)a2 = v26;
      a2[4] = *(float*)(v20 + 172);
      if (v19 != 0) {
        if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64, unsigned __int8*))(*(_QWORD*)v19 + 16LL))(v19,
                                                                          v12);
          std___1___shared_weak_count___release_weak_alt1(v19);
          a1 = v12;
        }
        LODWORD(v19) = 0;
      }
    }
  }
  else {
    LODWORD(v19) = 1;
    a1 = v12;
  }
  if ((v50 & 1) != 0 && v51_.v53 != nullptr) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v27,
                                  (__int64)v51_.v53);
    a1 = v12;
  }
  if ((_DWORD)v19 != 0) {
    v10 = *((_DWORD*)a1 + 2);
    goto LABEL_44;
  }
}

__attribute__((swiftcall)) void game_hub_102e120(PSEUDO_X8 x8_, __int64 result,
                                                 __int64* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;

  v3 = *a2;
  if (*a2 == 0) {
    goto LABEL_25;
  }
  v5 = result;
  result = *(_QWORD*)(v3 + 24);
  if (result == 0) {
    goto LABEL_25;
  }
  result = std___1___shared_weak_count_lock(result);
  if (result == 0) {
    goto LABEL_25;
  }
  v6 = *(_QWORD*)(v3 + 16);
  v7 = result;
  if (v6 == 0) {
    goto LABEL_20;
  }
  v8 = *(unsigned __int8*)(v5 + 8);
  v9 = *(unsigned __int8*)(v6 + 616);
  v10 = *(_QWORD*)(v6 + 624);
  if ((v8 & 1) != 0) {
    v11 = *(_QWORD*)(v5 + 16);
  }
  else {
    v11 = v8 >> 1;
  }
  v12 = v9 >> 1;
  if ((v9 & 1) != 0) {
    v12 = *(_QWORD*)(v6 + 624);
  }
  if (v11 != v12 ||
      ((v8 & 1) != 0 ? (v13 = *(_QWORD*)(v5 + 24)) : (v13 = v5 + 9),
       (v9 & 1) != 0 ? (v14 = *(_QWORD*)(v6 + 632)) : (v14 = v6 + 617),
       (_DWORD)(result = memcmp(v13, v14, v11)) != 0)) {
    if ((v9 & 1) != 0) {
      result = fw_text_String_CopyTerminated(a3, *(_QWORD*)(v6 + 632), v10);
      v15 = 0;
    }
    else {
      v15 = 0;
      v16 = *(_QWORD*)(v6 + 616);
      v17 = *(_QWORD*)(v6 + 632);
      a3[1] = *(_QWORD*)(v6 + 624);
      a3[2] = v17;
      *a3 = v16;
    }
  }
  else {
  LABEL_20:
    v15 = 1;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    result = std___1___shared_weak_count___release_weak_alt1(v7);
  }
  if (v15 != 0) {
  LABEL_25:
    *(_WORD*)a3 = 0;
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
