#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void AnimLayerCtrlModule_ce5500(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void GameRoutine_1587740(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_9b8fe0(PSEUDO_X8, __int64*,
                                                   _QWORD*);
__attribute__((swiftcall)) void
    GameRoutine_9b8fe0_alt1(PSEUDO_X8, _QWORD,
                            _QWORD) __asm__("GameRoutine_9b8fe0");
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__attribute__((swiftcall)) void
    LayoutAccessor_1560070_alt1(PSEUDO_X8, _QWORD,
                                _QWORD) __asm__("LayoutAccessor_1560070");
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_17418a0();
__int64 GameRoutine_1741a40();
__int64 GameRoutine_1741b10();
__int64 GameRoutine_1741f10(_QWORD, _QWORD);
__int64 GameRoutine_1760e40(_QWORD, _QWORD);
__int64 GameRoutine_1840740(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_654050(_QWORD, _QWORD);
__int64 GameRoutine_675980(_QWORD, _QWORD);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_8679c0(void);
__int64 GameRoutine_867df0(void);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 JobIcon_19a8c50(_QWORD, _QWORD, long double);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, long double);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 Se_80e330(_QWORD, _QWORD);
__int64 TextBoxEx_188ab20(_QWORD, _QWORD, long double);
__int64 Util_1586140(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_HashString32(__int64 result);
__int64 game_HashString32_alt1(long double) __asm__("game_HashString32");
__int64 game_ProcInst_Register(__int64);
__int64 game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneAlpha(_QWORD, _QWORD, _QWORD, long double);
__int64 ui_LayoutAccessor_SetPaneTranslate(_QWORD, _QWORD, _QWORD);
__n128 GameRoutine_1763490(__int64, __int64, __int64);
__n128 game_ProcInst_Register_alt1(_QWORD) __asm__("game_ProcInst_Register");
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak();
__n128 ui_LayoutAccessor_SetPaneSize(_QWORD, _QWORD, float, float);
__n128 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
char* game_util_Format(__int64, __int64, __int64, __int64, __int64, __int64,
                       __int64, __int64, char);
extern _UNKNOWN* GameData_2130f68;
extern _UNKNOWN GameData_2170810;
extern _UNKNOWN GameData_2263650;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*game_telop_MotivationCaller_vtable[])();
extern __int64 (*game_telop_TelopGrowMastery_vtable[])();
extern __int64 (*game_telop_TelopLevelUp_vtable[])();
extern __int64 (*game_telop_TelopResult_vtable[])();
extern __int64 (*game_telop_TelopStill_vtable[])();
extern __int64 (*game_telop_TelopTrainingResult_vtable[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212d708;
extern __int64* GameData_212d718;
extern __int64* GameData_212e348;
extern __int64* GameData_212fca0[2];
extern __int64* GameData_2130240[8];
extern __int64* GameData_2130f98[4];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212c608[2];
extern __int64 GameData_212d690;
extern __int64 GameData_2131678;
extern __int64 GameData_2131cf8[27];
extern __int64 GameData_21caa2c;
extern __int64 GameData_22634d8;
extern __int64 GameData_22634e0;
extern __int64 GameData_22634e8;
extern __int64 GameData_22634f8;
extern __int64 GameData_2263508;
extern __int64 GameData_2263518;
extern __int64 GameData_2263520;
extern __int64 GameData_2263528;
extern __int64 GameData_2263538;
extern __int64 GameData_2263548;
extern __int64 GameData_2263558;
extern __int64 GameData_2263560;
extern __int64 GameData_2263568;
extern __int64 GameData_2263578;
extern __int64 GameData_2263588;
extern __int64 GameData_2263598;
extern __int64 GameData_22635a0;
extern __int64 GameData_22635a8;
extern __int64 GameData_22635b8;
extern __int64 GameData_22635c8;
extern __int64 GameData_22635d8;
extern __int64 GameData_22635e0;
extern __int64 GameData_22635e8;
extern __int64 GameData_22635f8;
extern __int64 GameData_2263608;
extern __int64 GameData_2263618;
extern __int64 GameData_2263620;
extern __int64 GameData_2263628;
extern __int64 GameData_2263638;
extern __int64 GameData_2263648;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern char** msg_MessageManager_empty_text__ptr;
extern char GameData_22634d0;
extern char GameData_2263510;
extern char GameData_2263550;
extern char GameData_2263590;
extern char GameData_22635d0;
extern char GameData_2263610;
extern int GameData_22634f0;
extern int GameData_2263500;
extern int GameData_2263530;
extern int GameData_2263540;
extern int GameData_2263570;
extern int GameData_2263580;
extern int GameData_22635b0;
extern int GameData_22635c0;
extern int GameData_22635f0;
extern int GameData_2263600;
extern int GameData_2263630;
extern int GameData_2263640;
void GameRoutine_13739e0(__int64);
void GameRoutine_17356e0(_QWORD*, __int64);
void GameRoutine_175ca40(__int64, float32x2_t*);
void GameRoutine_17644e0(_QWORD*, __int64, __int64, __int64);
void __attribute__((noreturn)) GameRoutine_1387d40();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn))
GameRoutine_60a210_alt1(_QWORD) __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_e66f80(_QWORD);
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) String_60a230();
__attribute__((swiftcall)) void
game_telop_1376180(PSEUDO_X8 x8_, const char*** a1, __int64* a2, __int64 a3,
                   __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8);
__int64 game_telop_1376490(__int64 a1, __int64 a2, char a3);
void game_telop_1377500(__int64 a1, unsigned __int8* a2);
__int64 game_telop_1741620(__int64 a1, __int64* a2, char a3);
__int64 game_telop_1745d80(__int64 a1, __int64 a2, int a3, char a4, __int64 a5);
__n128 game_telop_175cd90(__int64* a1);
__n128 game_telop_1763c20(__int64 a1, __int64** a2);
void game_telop_1766400(__int64 a1, int* a2, _BYTE* a3);
__int64 game_telop_17665e0(__int64 result, int* a2, _BYTE* a3);
void game_telop_1768fe0(__int64 a1);
__int64 game_telop_1770d20(__int64 a1);
__int64 game_telop_177ac10(__int64 a1, __int64 a2, char a3, int a4);
__int64 GameReliance_8e17a0(_QWORD, _QWORD, _QWORD);
__int64 TelopParts_17cbd60(_QWORD, long double);
__int64 TelopParts_17cd840(_QWORD, _QWORD);
__int64 TelopParts_17cdaa0(_QWORD, _QWORD);
extern __int64 (***GameData_212dae8)();
extern __int64 (**game_GameReliance_Impl_Data_vtable_ptr)();
extern __int64 game_GameModeData_instance_;
__int64 game_telop_17cc420(__int64 a1, __int64 a2, __int64 a3, int a4, char a5);
__attribute__((swiftcall)) void

game_telop_1376180(PSEUDO_X8 x8_, const char*** a1, __int64* a2, __int64 a3,
                   __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{

#pragma clang fp contract(off)
  _QWORD* a9 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  char* v12;
  __n128 result;
  __int64 v14;
  __int64* v15;
  const char* v16;
  const char** v17;
  unsigned __int64 v18;
  const char** v19;
  const char** v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  const char** v27;
  unsigned __int64 v28;
  const char** v29;
  __int64 v30;
  struct {
    const char* v31;
    __int64 v32;
  } v31_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v12 = game_util_Format((__int64)"L_Txt%02d", ((char*)a1[1] - (char*)*a1) >> 4,
                         a3, a4, a5, a6, a7, a8, (char)v31_.v31),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LayoutAccessor_1560070((void*)(&v31_.v31), a2, (__int64)v12),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v31_.v32 == 0) {
    goto LABEL_29;
  }
  v14 = std___1___shared_weak_count_lock(v31_.v32),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v15 = (__int64*)v31_.v31;
  if (v14 != 0) {
    v16 = v31_.v31;
  }
  else {
    v16 = nullptr;
  }
  if (v31_.v32 != 0) {
    result = std___1___shared_weak_count___release_weak();
  }
  if (v16 != nullptr) {
    v17 = a1[1];
    v18 = (unsigned __int64)a1[2];
    if ((unsigned __int64)v17 >= v18) {
      v20 = *a1;
      v21 = (char*)v17 - (char*)*a1;
      v22 = v21 >> 4;
      v23 = (v21 >> 4) + 1;
      if (v23 >> 60 != 0) {
        GameRoutine_1387d40(),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v24 = v18 - (_QWORD)v20;
      if (v24 >> 3 > v23) {
        v23 = v24 >> 3;
      }
      if ((unsigned __int64)v24 >= 0x7FFFFFFFFFFFFFF0LL) {
        v25 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v25 = v23;
      }
      if (v25 >> 60 != 0) {
        GameRoutine_60a210(),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v26 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v25, 16, 0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v27 = (const char**)(v26 + v21);
      v28 = v26 + 16 * v25;
      *v27 = v16;
      v27[1] = (const char*)v14;
      if (v14 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                                  memory_order_relaxed);
        v20 = *a1;
        v21 = (char*)a1[1] - (char*)*a1;
        v22 = v21 >> 4;
      }
      v29 = &v27[-2 * v22];
      v19 = v27 + 2;
      memcpy(v29, v20, v21),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      *a1 = v29;
      a1[1] = v19;
      a1[2] = (const char**)v28;
      if (v20 != nullptr) {
        v30 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v30 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v30),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
    else {
      *v17 = v16;
      v17[1] = (const char*)v14;
      if (v14 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                                  memory_order_relaxed);
      }
      v19 = v17 + 2;
    }
    a1[1] = v19;
    v31_.v31 = "L_Txt";
    v31_.v32 = 5;
    result = X8CALL_V0(__n128, GameRoutine_9b8fe0((void*)(a9), v15, &v31_.v31));
  }
  if (v14 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v16 != nullptr) {
      result;
      return;
    }
    goto LABEL_29;
  }
  (*(void (**)(__int64, long double))(*(_QWORD*)v14 + 16LL))(
      v14, *(long double*)&result),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  result = std___1___shared_weak_count___release_weak();
  if (v16 == nullptr) {
  LABEL_29:
    *a9 = 0;
    a9[1] = 0;
  }
  {
    result;
    return;
  }
}

__int64 game_telop_1376490(__int64 a1, __int64 a2, char a3)
{
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  char* v12;
  char* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64* v28;
  unsigned __int64 v29;
  char* v30;
  __int64 v31;
  unsigned __int64 v32;
  char* v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64* v37;
  __int64 v38;
  bool v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  struct {
    __int64 v47;
    unsigned __int64 v48;
    char* v49;
  } v47_;

  if (a1 == 0) {
    return 0;
  }
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      920, 16, 0);
  v8 = GameData_212c608[0];
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = 0;
  *(_QWORD*)(v7 + 128) = 0;
  *(_WORD*)(v7 + 136) = 0;
  *(_QWORD*)(v7 + 16) = 0;
  *(_QWORD*)(v7 + 24) = "NULL";
  *(_QWORD*)(v7 + 138) = 0;
  *(_QWORD*)(v7 + 144) = 0;
  *(_QWORD*)(v7 + 32) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_QWORD*)(v7 + 80) = 0;
  *(_QWORD*)(v7 + 88) = 0;
  *(_QWORD*)v7 = v8 + 16;
  *(_QWORD*)(v7 + 8) = 0;
  game_ProcInst_Register(v7);
  *(_QWORD*)(v7 + 200) = 0;
  *(_QWORD*)(v7 + 152) = 0;
  *(_QWORD*)(v7 + 160) = 0;
  *(_QWORD*)(v7 + 168) = 0;
  *(_QWORD*)(v7 + 176) = 0;
  *(_QWORD*)(v7 + 208) = 0;
  *(_QWORD*)(v7 + 216) = 0;
  *(_QWORD*)(v7 + 224) = 0;
  *(_QWORD*)(v7 + 232) = 0;
  *(_QWORD*)(v7 + 240) = 0;
  *(_QWORD*)(v7 + 256) = 0;
  *(_QWORD*)(v7 + 264) = 0;
  *(_QWORD*)(v7 + 272) = 0;
  *(_QWORD*)(v7 + 280) = 0;
  *(_DWORD*)(v7 + 320) = 3;
  *(_QWORD*)(v7 + 184) = 0;
  *(_QWORD*)(v7 + 192) = v7 + 200;
  *(_QWORD*)(v7 + 288) = 0;
  *(_QWORD*)(v7 + 296) = 0;
  *(_QWORD*)(v7 + 304) = 0;
  *(_QWORD*)(v7 + 312) = 0;
  *(_DWORD*)(v7 + 332) = 0;
  *(_BYTE*)(v7 + 338) = 0;
  *(_QWORD*)(v7 + 344) = 0;
  *(_QWORD*)(v7 + 352) = 0;
  *(_QWORD*)(v7 + 360) = 0;
  *(_QWORD*)(v7 + 368) = 0;
  *(_QWORD*)(v7 + 376) = 0;
  *(_QWORD*)(v7 + 384) = 0;
  *(_QWORD*)(v7 + 392) = 0;
  *(_QWORD*)(v7 + 400) = 0;
  *(_QWORD*)(v7 + 324) = 0;
  *(_DWORD*)(v7 + 248) = 1065353216;
  *(_QWORD*)(v7 + 408) = 0;
  *(_QWORD*)(v7 + 416) = 0;
  *(_QWORD*)(v7 + 424) = 0;
  *(_QWORD*)(v7 + 472) = 0;
  *(_QWORD*)(v7 + 480) = 0;
  *(_QWORD*)(v7 + 440) = 0;
  *(_QWORD*)(v7 + 448) = 0;
  *(_QWORD*)(v7 + 504) = 0;
  *(_QWORD*)(v7 + 512) = 0;
  *(_QWORD*)(v7 + 488) = 0;
  *(_QWORD*)(v7 + 496) = 0;
  *(_DWORD*)(v7 + 520) = 1065353216;
  *(_QWORD*)(v7 + 528) = 0;
  *(_QWORD*)(v7 + 536) = 0;
  *(_WORD*)(v7 + 336) = 1;
  *(_QWORD*)(v7 + 544) = 0;
  *(_DWORD*)(v7 + 552) = 1065353216;
  *(_WORD*)(v7 + 560) = 0;
  *(_WORD*)(v7 + 584) = 0;
  *(_BYTE*)(v7 + 608) = 0;
  *(_QWORD*)(v7 + 656) = 0;
  *(_QWORD*)(v7 + 648) = 0;
  *(_QWORD*)(v7 + 632) = 0;
  *(_QWORD*)(v7 + 624) = 0;
  *(_QWORD*)(v7 + 616) = 0;
  *(_DWORD*)(v7 + 432) = 0x2000;
  *(_QWORD*)(v7 + 688) = 0;
  *(_QWORD*)(v7 + 680) = 0;
  *(_QWORD*)(v7 + 672) = 0;
  *(_QWORD*)(v7 + 664) = 0;
  *(_DWORD*)(v7 + 696) = 1065353216;
  *(_QWORD*)(v7 + 720) = 0;
  *(_QWORD*)(v7 + 712) = 0;
  *(_QWORD*)(v7 + 704) = 0;
  *(_DWORD*)(v7 + 728) = 1065353216;
  *(_QWORD*)(v7 + 456) = 0;
  *(_QWORD*)(v7 + 464) = v7 + 472;
  *(_WORD*)(v7 + 736) = 0;
  *(_WORD*)(v7 + 760) = 0;
  *(_BYTE*)(v7 + 784) = 0;
  *(_QWORD*)(v7 + 792) = 0;
  *(_QWORD*)(v7 + 640) = v7 + 648;
  v9 = GameData_2130240[0] + 2;
  *(_BYTE*)(v7 + 800) = 0;
  *(_BYTE*)(v7 + 816) = 0;
  *(_BYTE*)(v7 + 820) = 0;
  *(_QWORD*)(v7 + 880) = 0;
  *(_QWORD*)(v7 + 872) = 0;
  *(_QWORD*)(v7 + 864) = 0;
  *(_QWORD*)(v7 + 856) = 0;
  *(_QWORD*)(v7 + 848) = 0;
  *(_QWORD*)(v7 + 840) = 0;
  *(_QWORD*)(v7 + 832) = 0;
  *(_QWORD*)(v7 + 808) = v9;
  *(_QWORD*)v7 = game_telop_TelopStill_vtable;
  *(_QWORD*)(v7 + 896) = -1;
  v10 = GameData_212fca0[0] + 2;
  *(_DWORD*)(v7 + 904) = 0;
  *(_QWORD*)(v7 + 912) = 0;
  *(_BYTE*)(v7 + 824) = a3 & 1;
  *(_QWORD*)(v7 + 888) = v10;
  GameRoutine_13739e0(v7);
  v11 = *(_QWORD*)(a1 + 40);
  if (v11 != 0) {
    *(_QWORD*)(v11 + 48) = v7;
    *(_QWORD*)(v7 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v7;
  *(_QWORD*)(v7 + 24) = "TelopStill";
  *(_QWORD*)(v7 + 32) = a1;
  *(_DWORD*)(v7 + 140) = game_HashString32((__int64)"TelopStill");
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 24;
  *(_QWORD*)(v7 + 80) = 1;
  *(_QWORD*)(v7 + 8) = &GameData_2170810;
  *(_QWORD*)(v7 + 16) = &GameData_2170810;
  (*(void (**)(__int64))(*(_QWORD*)v7 + 32LL))(v7);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v7 + 136LL))(v7) & 1) != 0 &&
      (*(_WORD*)(v7 + 136) & 0x100) == 0) {
    *(_WORD*)(v7 + 136) |= 0x100u;
  }
  if ((*(_BYTE*)(v7 + 272) & 1) != 0) {
    *(_QWORD*)(v7 + 280) = 17;
    v12 = *(char**)(v7 + 288);
  }
  else {
    *(_BYTE*)(v7 + 272) = 34;
    v12 = (char*)(v7 + 273);
  }
  strcpy(v12, "Layout/Common.arc");
  if ((*(_BYTE*)(v7 + 296) & 1) != 0) {
    *(_QWORD*)(v7 + 304) = 15;
    v13 = *(char**)(v7 + 312);
  }
  else {
    *(_BYTE*)(v7 + 296) = 30;
    v13 = (char*)(v7 + 297);
  }
  strcpy(v13, "Common_TlpStill");
  if (*(_DWORD*)(v7 + 320) == 2) {
    v14 = (_QWORD*)game_ProcGameSkipView_instance_;
    if (game_ProcGameSkipView_instance_ != 0) {
      v16 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
      v15 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
      v18 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
      v17 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
      v39 = v17 == v18;
      v19 = v15 - 1 + v16;
      v20 = v19 >> 7;
      v21 = v19 & 0x7F;
      v22 = 16 * (v17 - v18) - 1;
      v23 = *(_QWORD*)(v18 + 8 * v20);
      if (v39) {
        v22 = 0;
      }
      v24 = v23 + 32 * v21;
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
          *(_DWORD*)v24 & 0xFFFFFFFD |
          (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
      v14[21] = *(_QWORD*)(v24 + 24);
      v25 = *(_QWORD*)(v24 + 16);
      v14[27] = v15 - 1;
      v14[20] = v25;
      if ((unsigned __int64)(v22 - (v15 + v16) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
        if (*(_QWORD*)(v17 - 8) != 0) {
          v26 = 128;
          if (*(_QWORD*)(*v6 + 200) == 0) {
            v26 = 56;
          }
          nn_mem_StandardAllocator_Free(*v6 + v26);
          v17 = v14[24];
        }
        v14[24] = v17 - 8;
      }
    }
  }
  *(_DWORD*)(v7 + 320) = 3;
  v27 = strlen(a2);
  if (v27 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v28 = (__int64*)(v7 + 832);
  v29 = v27;
  if (v27 >= 0x17) {
    if ((v27 | 7) == 0x17) {
      v31 = 26;
    }
    else {
      v31 = (v27 | 7) + 1;
    }
    v30 = (char*)fw_memory_HeapManager_Allocate(*v6, v31, 16, 0);
    v47_.v48 = v29;
    v47_.v49 = v30;
    v47_.v47 = v31 | 1;
    goto LABEL_32;
  }
  LOBYTE(v47_.v47) = 2 * v27;
  v30 = (char*)&v47_.v47 + 1;
  if (v27 != 0) {
  LABEL_32:
    v27 = memcpy(v30, a2, v29);
  }
  v30[v29] = 0;
  if ((*(_BYTE*)v28 & 1) == 0) {
    if ((v47_.v47 & 1) == 0) {
      v32 = v47_.v48;
      *v28 = v47_.v47;
      *(_QWORD*)(v7 + 840) = v32;
      *(_QWORD*)(v7 + 848) = v47_.v49;
      goto LABEL_47;
    }
    v27 = (unsigned __int64)GameRoutine_64df20((_QWORD*)(v7 + 832),
                                               (__int64)v47_.v49, v47_.v48);
    if (v47_.v49 == nullptr) {
      goto LABEL_47;
    }
  LABEL_44:
    v35 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v35);
    goto LABEL_47;
  }
  if ((v47_.v47 & 1) != 0) {
    v33 = v47_.v49;
  }
  else {
    v33 = (char*)&v47_.v47 + 1;
  }
  if ((v47_.v47 & 1) != 0) {
    v34 = v47_.v48;
  }
  else {
    v34 = (unsigned __int64)(unsigned __int8)v47_.v47 >> 1;
  }
  v27 = (unsigned __int64)SpineModel_64dde0((__int64*)(v7 + 832), (__int64)v33,
                                            v34);
  if ((v47_.v47 & 1) != 0 && v47_.v49 != nullptr) {
    goto LABEL_44;
  }
LABEL_47:
  v36 = *(unsigned __int8*)(v7 + 296);
  v37 = (__int64*)(v7 + 856);
  if ((*(_BYTE*)(v7 + 856) & 1) != 0) {
    v39 = (v36 & 1) == 0;
    v40 = v36 >> 1;
    if (v39) {
      v41 = v7 + 297;
    }
    else {
      v41 = *(_QWORD*)(v7 + 312);
    }
    if (v39) {
      v42 = v40;
    }
    else {
      v42 = *(_QWORD*)(v7 + 304);
    }
    v27 = (unsigned __int64)SpineModel_64dde0((__int64*)(v7 + 856), v41, v42);
  }
  else if ((v36 & 1) != 0) {
    v27 = (unsigned __int64)GameRoutine_64df20(
        (_QWORD*)(v7 + 856), *(_QWORD*)(v7 + 312), *(_QWORD*)(v7 + 304));
  }
  else {
    v38 = *(_QWORD*)(v7 + 304);
    *v37 = *(_QWORD*)(v7 + 296);
    *(_QWORD*)(v7 + 864) = v38;
    *(_QWORD*)(v7 + 872) = *(_QWORD*)(v7 + 312);
  }
  v43 = *(_BYTE*)(v7 + 832) >> 1;
  if ((*(_BYTE*)(v7 + 832) & 1) != 0) {
    v43 = *(_QWORD*)(v7 + 840);
  }
  if (v43 != 0) {
    if ((*(_BYTE*)v37 & 1) != 0) {
      if ((*(_BYTE*)(v7 + 832) & 1) != 0) {
        v45 = *(_QWORD*)(v7 + 848);
      }
      else {
        v45 = v7 + 833;
      }
      v27 = (unsigned __int64)SpineModel_64dde0((__int64*)(v7 + 856), v45, v43);
    }
    else if ((*(_BYTE*)(v7 + 832) & 1) != 0) {
      v27 = (unsigned __int64)GameRoutine_64df20(
          (_QWORD*)(v7 + 856), *(_QWORD*)(v7 + 848), *(_QWORD*)(v7 + 840));
    }
    else {
      v44 = *(_QWORD*)(v7 + 840);
      *v37 = *v28;
      *(_QWORD*)(v7 + 864) = v44;
      *(_QWORD*)(v7 + 872) = *(_QWORD*)(v7 + 848);
    }
    game_telop_1377500(v27, (unsigned __int8*)(v7 + 856));
  }
  return v7;
}

void game_telop_1377500(__int64 a1, unsigned __int8* a2)
{
  unsigned __int64 v2;
  unsigned __int8* v3;
  unsigned __int64 v4;
  unsigned __int8* v5;
  __int64 v6;
  unsigned __int64 v8;
  int v9;
  unsigned __int64 v10;
  unsigned __int8* v11;
  unsigned __int64 v12;
  unsigned __int8* v13;
  unsigned __int8* v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int8* v20;
  unsigned __int64 v21;
  unsigned __int8* v22;
  unsigned __int64 v23;
  unsigned __int8* v24;
  unsigned __int64 v25;
  _BYTE* v26;
  unsigned __int8* v27;
  char* v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  struct {
    __int64 v32;
    unsigned __int64 v33;
    char* v34;
  } v32_;

  v2 = *a2;
  v4 = *((_QWORD*)a2 + 1);
  v3 = *((unsigned __int8**)a2 + 2);
  v5 = a2 + 1;
  v6 = -1;
  v8 = 0;
  v9 = v2 & 1;
  v10 = v2 >> 1;
  if (v9 != 0) {
    v11 = *((unsigned __int8**)a2 + 2);
  }
  else {
    v11 = a2 + 1;
  }
  if (v9 != 0) {
    v12 = *((_QWORD*)a2 + 1);
  }
  else {
    v12 = v10;
  }
  v13 = &v11[v12];
  do {
    if (v12 + v8 == 0) {
      goto LABEL_27;
    }
    v14 = &v13[v8--];
    ++v6;
  } while (*(v14 - 1) != 47);
  if (v12 + v8 != -1) {
    if (v12 + v8 >= v12) {
      String_60a230();
    }
    if (v8 <= 8) {
      goto LABEL_59;
    }
    v15 = ~v8;
    if (~v8 >= 0x17) {
      if ((v15 | 7) == 0x17) {
        v17 = 26;
      }
      else {
        v17 = (v15 | 7) + 1;
      }
      v16 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v17,
                                                  16, 0);
      v32_.v33 = ~v8;
      v32_.v34 = v16;
      v32_.v32 = v17 | 1;
    }
    else {
      LOBYTE(v32_.v32) = 2 * v15;
      v16 = (char*)&v32_.v32 + 1;
      if (v8 == -1) {
      LABEL_21:
        v16[v6] = 0;
        if ((*a2 & 1) != 0 && *((_QWORD*)a2 + 2) != 0) {
          v18 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v18 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v18);
        }
        v19 = v32_.v33;
        *(_QWORD*)a2 = v32_.v32;
        *((_QWORD*)a2 + 1) = v19;
        v20 = (unsigned __int8*)v32_.v34;
        v21 = *a2;
        v4 = *((_QWORD*)a2 + 1);
        *((_QWORD*)a2 + 2) = v32_.v34;
        v3 = v20;
        v9 = v21 & 1;
        v10 = v21 >> 1;
        goto LABEL_27;
      }
    }
    memmove(v16, &v13[v8 + 1], ~v8);
    goto LABEL_21;
  }
LABEL_27:
  if (v9 != 0) {
    v22 = v3;
  }
  else {
    v22 = v5;
  }
  if (v9 != 0) {
    v23 = v4;
  }
  else {
    v23 = v10;
  }
  if ((__int64)v23 >= 1) {
    v24 = &v22[v23];
    v25 = v23;
    v26 = v22;
    while (1) {
      v27 = (unsigned __int8*)memchr(v26, 46, v25);
      if (v27 == nullptr) {
        return;
      }
      if (*v27 == 46) {
        break;
      }
      v26 = v27 + 1;
      v25 = v24 - v26;
      if (v24 - v26 < 1) {
        return;
      }
    }
    if (v27 != v24 && v27 - v22 != -1) {
      if (v23 >= v27 - v22) {
        v23 = v27 - v22;
      }
      if (v23 < 0xFFFFFFFFFFFFFFF7LL) {
        if (v23 >= 0x17) {
          if ((v23 | 7) == 0x17) {
            v29 = 26;
          }
          else {
            v29 = (v23 | 7) + 1;
          }
          v28 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v29, 16, 0);
          v32_.v33 = v23;
          v32_.v34 = v28;
          v32_.v32 = v29 | 1;
        }
        else {
          LOBYTE(v32_.v32) = 2 * v23;
          v28 = (char*)&v32_.v32 + 1;
          if (v27 == v22) {
          LABEL_52:
            v28[v23] = 0;
            if ((*a2 & 1) != 0 && *((_QWORD*)a2 + 2) != 0) {
              v30 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v30 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v30);
            }
            v31 = v32_.v33;
            *(_QWORD*)a2 = v32_.v32;
            *((_QWORD*)a2 + 1) = v31;
            *((_QWORD*)a2 + 2) = v32_.v34;
            return;
          }
        }
        memmove(v28, v22, v23);
        goto LABEL_52;
      }
    LABEL_59:
      String_60a1d0();
    }
  }
}

__int64 game_telop_1741620(__int64 a1, __int64* a2, char a3)
{
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  bool v15;
  bool v16;
  unsigned __int64 v17;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2263650,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_2263650) != 0) {
    GameData_22634d0 = 13;
    GameData_22634d8 = 0;
    GameData_22634e0 = (__int64)GameRoutine_17418a0;
    GameData_2263590 = 13;
    GameData_2263558 = 0;
    GameData_2263560 = 16;
    GameData_22634e8 = 0;
    GameData_22634f0 = 0;
    GameData_22634f8 = 0;
    GameData_2263500 = 0;
    GameData_2263508 = 0;
    GameData_2263538 = 0;
    GameData_2263540 = 0;
    GameData_2263548 = 0;
    GameData_2263510 = 3;
    GameData_2263598 = 0;
    GameData_22635a0 = (__int64)GameRoutine_1741a40;
    GameData_2263518 = 0;
    GameData_2263520 = 0;
    GameData_2263528 = 0;
    GameData_2263530 = 0;
    GameData_2263568 = 1;
    GameData_2263570 = 0;
    GameData_2263578 = 0;
    GameData_2263580 = 0;
    GameData_2263550 = 14;
    GameData_2263588 = 0;
    GameData_22635a8 = 0;
    GameData_22635b0 = 0;
    GameData_22635b8 = 0;
    GameData_22635c0 = 0;
    GameData_22635c8 = 0;
    GameData_22635d0 = 14;
    GameData_22635d8 = 0;
    GameData_22635e0 = (__int64)GameRoutine_1741b10;
    GameData_22635e8 = 0;
    GameData_22635f0 = 0;
    GameData_22635f8 = 0;
    GameData_2263600 = 0;
    GameData_2263608 = 0;
    GameData_2263610 = 0;
    GameData_2263638 = 0;
    GameData_2263640 = 0;
    GameData_2263648 = 0;
    GameData_2263630 = 0;
    GameData_2263620 = 0;
    GameData_2263628 = 0;
    GameData_2263618 = 0;
    __cxa_guard_release(&GameData_2263650);
  }
  v6 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 200, 16, 0);
  v7 = GameData_212c608[0];
  *(_QWORD*)(v6 + 144) = 0;
  *(_QWORD*)(v6 + 152) = 0;
  *(_QWORD*)(v6 + 168) = 0;
  *(_QWORD*)(v6 + 176) = 0;
  *(_QWORD*)(v6 + 184) = 0;
  *(_QWORD*)(v6 + 192) = 0;
  *(_QWORD*)(v6 + 96) = 0;
  *(_QWORD*)(v6 + 104) = 0;
  *(_QWORD*)(v6 + 112) = 0;
  *(_QWORD*)(v6 + 120) = 0;
  *(_QWORD*)(v6 + 128) = 0;
  *(_WORD*)(v6 + 136) = 0;
  *(_QWORD*)(v6 + 160) = 0;
  v8 = (__int64*)(v6 + 160);
  *(_QWORD*)(v6 + 16) = 0;
  *(_QWORD*)(v6 + 24) = "NULL";
  *(_QWORD*)(v6 + 144) = 0;
  *(_QWORD*)(v6 + 138) = 0;
  *(_QWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_QWORD*)(v6 + 80) = 0;
  *(_QWORD*)(v6 + 88) = 0;
  *(_QWORD*)v6 = v7 + 16;
  *(_QWORD*)(v6 + 8) = 0;
  game_ProcInst_Register_alt1(v6);
  *(_QWORD*)(v6 + 160) = 0;
  *(_QWORD*)(v6 + 168) = 0;
  *(_QWORD*)(v6 + 176) = 0;
  *(_QWORD*)(v6 + 184) = 0;
  *(_BYTE*)(v6 + 196) = 0;
  *(_QWORD*)v6 = game_telop_MotivationCaller_vtable;
  *(_DWORD*)(v6 + 152) = 1101004800;
  *(_DWORD*)(v6 + 192) = 1101004800;
  ProcInst_657850(v6, &GameData_22634d0, "MotivationCaller", 1, a1);
  v9 = *a2;
  v10 = a2[1];
  v11 = *(_QWORD*)(v6 + 160);
  v12 = v10 - *a2;
  v13 = 0xAAAAAAAAAAAAAAABLL * (v12 >> 3);
  v14 = 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(v6 + 168) - v11) >> 3);
  v15 = v13 >= v14;
  v16 = v13 > v14;
  v17 = v13 - v14;
  if (v16) {
    GameRoutine_1741f10(v8, v17);
    v11 = *v8;
    v9 = *a2;
    v10 = a2[1];
  }
  else if (!v15) {
    *(_QWORD*)(v6 + 168) = v11 + v12;
  }
  if (v10 != v9) {
    memmove(v11, v9, v10 - v9 - 4);
  }
  *(_BYTE*)(v6 + 196) = a3 & 1;
  return v6;
}

__int64 game_telop_1745d80(__int64 a1, __int64 a2, int a3, char a4, __int64 a5)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
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
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  long double v53;
  __int64 v54;
  void* v55;
  _BYTE* v56;
  char v57;
  char* v58;
  char* v59;
  _QWORD* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  bool v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  unsigned int v76;
  __int64 v77;
  _BYTE* v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  _BYTE v87[32];
  _BYTE* v88;
  _BYTE v89[32];
  _BYTE* v90;

  if (a1 == 0) {
    return 0;
  }
  v6 = fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1392, 16, 0);
  memset(v7 + 144, 0, 1248, v8, v9, v10);
  v11 = GameData_212c608[0];
  *(_QWORD*)(v7 + 88) = 0;
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 120) = 0;
  *(_QWORD*)(v7 + 128) = 0;
  *(_WORD*)(v7 + 136) = 0;
  *(_QWORD*)(v7 + 16) = 0;
  *(_QWORD*)(v7 + 24) = "NULL";
  *(_QWORD*)(v7 + 32) = 0;
  v12 = (_QWORD*)(v7 + 32);
  *(_QWORD*)(v7 + 138) = 0;
  *(_QWORD*)(v7 + 144) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_QWORD*)(v7 + 80) = 0;
  *(_QWORD*)v7 = v11 + 16;
  *(_QWORD*)(v7 + 8) = 0;
  game_ProcInst_Register_alt1(v7);
  *(_QWORD*)(v7 + 200) = 0;
  *(_QWORD*)(v7 + 152) = 0;
  *(_QWORD*)(v7 + 160) = 0;
  *(_QWORD*)(v7 + 168) = 0;
  *(_QWORD*)(v7 + 176) = 0;
  *(_QWORD*)(v7 + 208) = 0;
  *(_QWORD*)(v7 + 216) = 0;
  *(_DWORD*)(v7 + 320) = 3;
  *(_QWORD*)(v7 + 184) = 0;
  *(_QWORD*)(v7 + 192) = v7 + 200;
  *(_QWORD*)(v7 + 224) = 0;
  *(_QWORD*)(v7 + 232) = 0;
  *(_QWORD*)(v7 + 240) = 0;
  *(_QWORD*)(v7 + 256) = 0;
  *(_QWORD*)(v7 + 264) = 0;
  *(_QWORD*)(v7 + 272) = 0;
  *(_QWORD*)(v7 + 280) = 0;
  *(_QWORD*)(v7 + 288) = 0;
  *(_QWORD*)(v7 + 296) = 0;
  *(_QWORD*)(v7 + 304) = 0;
  *(_QWORD*)(v7 + 312) = 0;
  *(_DWORD*)(v7 + 332) = 0;
  *(_WORD*)(v7 + 336) = 1;
  *(_QWORD*)(v7 + 324) = 0;
  *(_DWORD*)(v7 + 248) = 1065353216;
  *(_BYTE*)(v7 + 338) = 0;
  *(_QWORD*)(v7 + 344) = 0;
  *(_QWORD*)(v7 + 352) = 0;
  *(_QWORD*)(v7 + 360) = 0;
  *(_QWORD*)(v7 + 368) = 0;
  *(_QWORD*)(v7 + 376) = 0;
  *(_QWORD*)(v7 + 384) = 0;
  *(_QWORD*)(v7 + 392) = 0;
  *(_QWORD*)(v7 + 400) = 0;
  *(_QWORD*)(v7 + 408) = 0;
  *(_QWORD*)(v7 + 416) = 0;
  *(_QWORD*)(v7 + 424) = 0;
  *(_DWORD*)(v7 + 432) = 0x2000;
  *(_QWORD*)(v7 + 472) = 0;
  *(_QWORD*)(v7 + 480) = 0;
  *(_QWORD*)(v7 + 456) = 0;
  *(_QWORD*)(v7 + 464) = v7 + 472;
  *(_QWORD*)(v7 + 440) = 0;
  *(_QWORD*)(v7 + 448) = 0;
  *(_QWORD*)(v7 + 504) = 0;
  *(_QWORD*)(v7 + 512) = 0;
  *(_QWORD*)(v7 + 488) = 0;
  *(_QWORD*)(v7 + 496) = 0;
  *(_DWORD*)(v7 + 520) = 1065353216;
  *(_QWORD*)(v7 + 528) = 0;
  *(_QWORD*)(v7 + 536) = 0;
  *(_QWORD*)(v7 + 544) = 0;
  *(_DWORD*)(v7 + 552) = 1065353216;
  *(_WORD*)(v7 + 560) = 0;
  *(_WORD*)(v7 + 584) = 0;
  *(_BYTE*)(v7 + 608) = 0;
  *(_QWORD*)(v7 + 656) = 0;
  *(_QWORD*)(v7 + 648) = 0;
  *(_QWORD*)(v7 + 632) = 0;
  *(_QWORD*)(v7 + 624) = 0;
  *(_QWORD*)(v7 + 616) = 0;
  *(_QWORD*)(v7 + 640) = v7 + 648;
  *(_QWORD*)(v7 + 688) = 0;
  *(_QWORD*)(v7 + 680) = 0;
  *(_QWORD*)(v7 + 672) = 0;
  *(_QWORD*)(v7 + 664) = 0;
  *(_DWORD*)(v7 + 696) = 1065353216;
  *(_QWORD*)(v7 + 720) = 0;
  *(_QWORD*)(v7 + 712) = 0;
  *(_QWORD*)(v7 + 704) = 0;
  *(_DWORD*)(v7 + 728) = 1065353216;
  *(_WORD*)(v7 + 736) = 0;
  *(_WORD*)(v7 + 760) = 0;
  *(_BYTE*)(v7 + 784) = 0;
  *(_QWORD*)(v7 + 792) = 0;
  v13 = *(_QWORD*)v6;
  v14 = GameData_2130240[0] + 2;
  *(_BYTE*)(v7 + 800) = 0;
  *(_BYTE*)(v7 + 816) = 0;
  *(_BYTE*)(v7 + 820) = 0;
  *(_QWORD*)(v7 + 824) = 0;
  *(_DWORD*)(v7 + 832) = 0;
  *(_WORD*)(v7 + 840) = 0;
  *(_QWORD*)(v7 + 808) = v14;
  *(_QWORD*)v7 = game_telop_TelopLevelUp_vtable;
  v15 = fw_memory_HeapManager_Allocate_alt1(v13, 296, 16, 0);
  *(_QWORD*)(v15 + 16) = 0;
  v16 = GameData_2131678;
  *(_DWORD*)(v15 + 32) = 0;
  *(_QWORD*)(v15 + 40) = 0;
  *(_DWORD*)(v15 + 48) = 0x2000;
  v17 = v16 + 16;
  *(_DWORD*)(v15 + 104) = 0;
  *(_WORD*)(v15 + 108) = 256;
  *(_QWORD*)(v15 + 56) = 0;
  *(_QWORD*)(v15 + 64) = 0;
  *(_QWORD*)(v15 + 72) = 0;
  *(_WORD*)(v15 + 80) = 0;
  *(_DWORD*)(v15 + 112) = -1082130432;
  *(_WORD*)(v15 + 116) = 0;
  *(_WORD*)(v15 + 136) = 0;
  *(_BYTE*)(v15 + 160) = 0;
  *(_BYTE*)(v15 + 288) = 0;
  *(_QWORD*)(v15 + 272) = 0;
  *(_QWORD*)(v15 + 280) = 0;
  *(_QWORD*)(v15 + 256) = 0;
  *(_QWORD*)(v15 + 264) = 0;
  *(_QWORD*)(v15 + 240) = 0;
  *(_QWORD*)(v15 + 248) = 0;
  *(_QWORD*)(v15 + 224) = 0;
  *(_QWORD*)(v15 + 232) = 0;
  *(_QWORD*)(v15 + 208) = 0;
  *(_QWORD*)(v15 + 216) = 0;
  *(_QWORD*)(v15 + 192) = 0;
  *(_QWORD*)(v15 + 200) = 0;
  *(_QWORD*)(v15 + 176) = 0;
  *(_QWORD*)(v15 + 184) = 0;
  *(_QWORD*)(v15 + 168) = 0;
  *(_QWORD*)(v15 + 120) = 0;
  *(_DWORD*)(v15 + 127) = 0;
  *(_DWORD*)(v15 + 292) = 2;
  *(_QWORD*)(v7 + 888) = v15;
  *(_QWORD*)(v15 + 24) = 0;
  v18 = v15 + 24;
  *(_QWORD*)v15 = v17;
  *(_QWORD*)(v15 + 8) = 0;
  v19 = *(_QWORD*)v6;
  *(_QWORD*)(v7 + 880) = v18;
  v20 = fw_memory_HeapManager_Allocate_alt1(v19, 296, 16, 0);
  *(_QWORD*)(v20 + 8) = 0;
  *(_QWORD*)(v20 + 16) = 0;
  *(_QWORD*)v20 = v17;
  v21 = v20;
  *(_DWORD*)(v20 + 32) = 0;
  *(_QWORD*)(v20 + 40) = 0;
  *(_DWORD*)(v20 + 48) = 0x2000;
  *(_DWORD*)(v20 + 104) = 0;
  *(_WORD*)(v20 + 108) = 256;
  *(_QWORD*)(v20 + 56) = 0;
  *(_QWORD*)(v20 + 64) = 0;
  *(_QWORD*)(v20 + 72) = 0;
  *(_WORD*)(v20 + 80) = 0;
  *(_DWORD*)(v20 + 112) = -1082130432;
  *(_WORD*)(v20 + 116) = 0;
  *(_WORD*)(v20 + 136) = 0;
  *(_BYTE*)(v20 + 160) = 0;
  *(_BYTE*)(v20 + 288) = 0;
  *(_QWORD*)(v20 + 272) = 0;
  *(_QWORD*)(v20 + 280) = 0;
  *(_QWORD*)(v20 + 256) = 0;
  *(_QWORD*)(v20 + 264) = 0;
  *(_QWORD*)(v20 + 240) = 0;
  *(_QWORD*)(v20 + 248) = 0;
  *(_QWORD*)(v20 + 224) = 0;
  *(_QWORD*)(v20 + 232) = 0;
  *(_QWORD*)(v20 + 208) = 0;
  *(_QWORD*)(v20 + 216) = 0;
  *(_QWORD*)(v20 + 192) = 0;
  *(_QWORD*)(v20 + 200) = 0;
  *(_QWORD*)(v20 + 176) = 0;
  *(_QWORD*)(v20 + 184) = 0;
  *(_QWORD*)(v20 + 168) = 0;
  *(_QWORD*)(v20 + 120) = 0;
  *(_DWORD*)(v20 + 127) = 0;
  *(_DWORD*)(v20 + 292) = 2;
  *(_QWORD*)(v7 + 904) = v20;
  v22 = *(_QWORD*)v6;
  *(_QWORD*)(v21 + 24) = 0;
  *(_QWORD*)(v7 + 896) = v21 + 24;
  v23 = fw_memory_HeapManager_Allocate_alt1(v22, 296, 16, 0);
  *(_QWORD*)(v23 + 8) = 0;
  *(_QWORD*)(v23 + 16) = 0;
  *(_QWORD*)v23 = v17;
  *(_DWORD*)(v23 + 32) = 0;
  *(_QWORD*)(v23 + 40) = 0;
  *(_DWORD*)(v23 + 48) = 0x2000;
  *(_DWORD*)(v23 + 104) = 0;
  *(_WORD*)(v23 + 108) = 256;
  *(_QWORD*)(v23 + 56) = 0;
  *(_QWORD*)(v23 + 64) = 0;
  *(_QWORD*)(v23 + 72) = 0;
  *(_WORD*)(v23 + 80) = 0;
  *(_DWORD*)(v23 + 112) = -1082130432;
  *(_WORD*)(v23 + 116) = 0;
  *(_WORD*)(v23 + 136) = 0;
  *(_BYTE*)(v23 + 160) = 0;
  *(_BYTE*)(v23 + 288) = 0;
  *(_QWORD*)(v23 + 272) = 0;
  *(_QWORD*)(v23 + 280) = 0;
  *(_QWORD*)(v23 + 256) = 0;
  *(_QWORD*)(v23 + 264) = 0;
  *(_QWORD*)(v23 + 240) = 0;
  *(_QWORD*)(v23 + 248) = 0;
  *(_QWORD*)(v23 + 224) = 0;
  *(_QWORD*)(v23 + 232) = 0;
  *(_QWORD*)(v23 + 208) = 0;
  *(_QWORD*)(v23 + 216) = 0;
  *(_QWORD*)(v23 + 192) = 0;
  *(_QWORD*)(v23 + 200) = 0;
  *(_QWORD*)(v23 + 176) = 0;
  *(_QWORD*)(v23 + 184) = 0;
  *(_QWORD*)(v23 + 168) = 0;
  *(_QWORD*)(v23 + 120) = 0;
  *(_DWORD*)(v23 + 127) = 0;
  *(_DWORD*)(v23 + 292) = 2;
  *(_QWORD*)(v7 + 920) = v23;
  *(_QWORD*)(v23 + 24) = 0;
  *(_QWORD*)(v7 + 912) = v23 + 24;
  v24 = *(_QWORD*)v6;
  *(_QWORD*)(v7 + 928) = 0;
  *(_QWORD*)(v7 + 936) = 0;
  *(_DWORD*)(v7 + 944) = 0;
  *(_DWORD*)(v7 + 976) = 0;
  *(_QWORD*)(v7 + 968) = 0;
  *(_QWORD*)(v7 + 960) = 0;
  *(_QWORD*)(v7 + 952) = 0;
  v25 = fw_memory_HeapManager_Allocate_alt1(v24, 296, 16, 0);
  *(_QWORD*)(v25 + 8) = 0;
  *(_QWORD*)(v25 + 16) = 0;
  *(_QWORD*)v25 = v17;
  v26 = v25;
  *(_DWORD*)(v25 + 32) = 0;
  *(_QWORD*)(v25 + 40) = 0;
  *(_DWORD*)(v25 + 48) = 0x2000;
  *(_DWORD*)(v25 + 104) = 0;
  *(_WORD*)(v25 + 108) = 256;
  *(_QWORD*)(v25 + 56) = 0;
  *(_QWORD*)(v25 + 64) = 0;
  *(_QWORD*)(v25 + 72) = 0;
  *(_WORD*)(v25 + 80) = 0;
  *(_DWORD*)(v25 + 112) = -1082130432;
  *(_WORD*)(v25 + 116) = 0;
  *(_WORD*)(v25 + 136) = 0;
  *(_BYTE*)(v25 + 160) = 0;
  *(_BYTE*)(v25 + 288) = 0;
  *(_QWORD*)(v25 + 272) = 0;
  *(_QWORD*)(v25 + 280) = 0;
  *(_QWORD*)(v25 + 256) = 0;
  *(_QWORD*)(v25 + 264) = 0;
  *(_QWORD*)(v25 + 240) = 0;
  *(_QWORD*)(v25 + 248) = 0;
  *(_QWORD*)(v25 + 224) = 0;
  *(_QWORD*)(v25 + 232) = 0;
  *(_QWORD*)(v25 + 208) = 0;
  *(_QWORD*)(v25 + 216) = 0;
  *(_QWORD*)(v25 + 192) = 0;
  *(_QWORD*)(v25 + 200) = 0;
  *(_QWORD*)(v25 + 176) = 0;
  *(_QWORD*)(v25 + 184) = 0;
  *(_QWORD*)(v25 + 168) = 0;
  *(_QWORD*)(v25 + 120) = 0;
  *(_DWORD*)(v25 + 127) = 0;
  *(_DWORD*)(v25 + 292) = 2;
  *(_QWORD*)(v7 + 1160) = v25;
  v27 = *(_QWORD*)v6;
  *(_QWORD*)(v26 + 24) = 0;
  *(_QWORD*)(v7 + 1152) = v26 + 24;
  v28 = fw_memory_HeapManager_Allocate_alt1(v27, 296, 16, 0);
  *(_QWORD*)(v28 + 8) = 0;
  *(_QWORD*)(v28 + 16) = 0;
  *(_QWORD*)v28 = v17;
  v29 = v28;
  *(_DWORD*)(v28 + 32) = 0;
  *(_QWORD*)(v28 + 40) = 0;
  *(_DWORD*)(v28 + 48) = 0x2000;
  *(_DWORD*)(v28 + 104) = 0;
  *(_WORD*)(v28 + 108) = 256;
  *(_QWORD*)(v28 + 56) = 0;
  *(_QWORD*)(v28 + 64) = 0;
  *(_QWORD*)(v28 + 72) = 0;
  *(_WORD*)(v28 + 80) = 0;
  *(_DWORD*)(v28 + 112) = -1082130432;
  *(_WORD*)(v28 + 116) = 0;
  *(_WORD*)(v28 + 136) = 0;
  *(_BYTE*)(v28 + 160) = 0;
  *(_BYTE*)(v28 + 288) = 0;
  *(_QWORD*)(v28 + 272) = 0;
  *(_QWORD*)(v28 + 280) = 0;
  *(_QWORD*)(v28 + 256) = 0;
  *(_QWORD*)(v28 + 264) = 0;
  *(_QWORD*)(v28 + 240) = 0;
  *(_QWORD*)(v28 + 248) = 0;
  *(_QWORD*)(v28 + 224) = 0;
  *(_QWORD*)(v28 + 232) = 0;
  *(_QWORD*)(v28 + 208) = 0;
  *(_QWORD*)(v28 + 216) = 0;
  *(_QWORD*)(v28 + 192) = 0;
  *(_QWORD*)(v28 + 200) = 0;
  *(_QWORD*)(v28 + 176) = 0;
  *(_QWORD*)(v28 + 184) = 0;
  *(_QWORD*)(v28 + 168) = 0;
  *(_QWORD*)(v28 + 120) = 0;
  *(_DWORD*)(v28 + 127) = 0;
  *(_DWORD*)(v28 + 292) = 2;
  *(_QWORD*)(v7 + 1176) = v28;
  v30 = *(_QWORD*)v6;
  *(_QWORD*)(v29 + 24) = 0;
  *(_QWORD*)(v7 + 1168) = v29 + 24;
  v31 = fw_memory_HeapManager_Allocate_alt1(v30, 296, 16, 0);
  *(_QWORD*)(v31 + 8) = 0;
  *(_QWORD*)(v31 + 16) = 0;
  *(_QWORD*)v31 = v17;
  v32 = v31;
  *(_DWORD*)(v31 + 32) = 0;
  *(_QWORD*)(v31 + 40) = 0;
  *(_DWORD*)(v31 + 48) = 0x2000;
  *(_DWORD*)(v31 + 104) = 0;
  *(_WORD*)(v31 + 108) = 256;
  *(_QWORD*)(v31 + 56) = 0;
  *(_QWORD*)(v31 + 64) = 0;
  *(_QWORD*)(v31 + 72) = 0;
  *(_WORD*)(v31 + 80) = 0;
  *(_DWORD*)(v31 + 112) = -1082130432;
  *(_WORD*)(v31 + 116) = 0;
  *(_WORD*)(v31 + 136) = 0;
  *(_BYTE*)(v31 + 160) = 0;
  *(_BYTE*)(v31 + 288) = 0;
  *(_QWORD*)(v31 + 272) = 0;
  *(_QWORD*)(v31 + 280) = 0;
  *(_QWORD*)(v31 + 256) = 0;
  *(_QWORD*)(v31 + 264) = 0;
  *(_QWORD*)(v31 + 240) = 0;
  *(_QWORD*)(v31 + 248) = 0;
  *(_QWORD*)(v31 + 224) = 0;
  *(_QWORD*)(v31 + 232) = 0;
  *(_QWORD*)(v31 + 208) = 0;
  *(_QWORD*)(v31 + 216) = 0;
  *(_QWORD*)(v31 + 192) = 0;
  *(_QWORD*)(v31 + 200) = 0;
  *(_QWORD*)(v31 + 176) = 0;
  *(_QWORD*)(v31 + 184) = 0;
  *(_QWORD*)(v31 + 168) = 0;
  *(_QWORD*)(v31 + 120) = 0;
  *(_DWORD*)(v31 + 127) = 0;
  *(_DWORD*)(v31 + 292) = 2;
  *(_QWORD*)(v7 + 1192) = v31;
  v33 = *(_QWORD*)v6;
  *(_QWORD*)(v32 + 24) = 0;
  *(_QWORD*)(v7 + 1184) = v32 + 24;
  v34 = fw_memory_HeapManager_Allocate_alt1(v33, 296, 16, 0);
  *(_QWORD*)(v34 + 8) = 0;
  *(_QWORD*)(v34 + 16) = 0;
  *(_QWORD*)v34 = v17;
  v35 = v34;
  *(_DWORD*)(v34 + 32) = 0;
  *(_QWORD*)(v34 + 40) = 0;
  *(_DWORD*)(v34 + 48) = 0x2000;
  *(_DWORD*)(v34 + 104) = 0;
  *(_WORD*)(v34 + 108) = 256;
  *(_QWORD*)(v34 + 56) = 0;
  *(_QWORD*)(v34 + 64) = 0;
  *(_QWORD*)(v34 + 72) = 0;
  *(_WORD*)(v34 + 80) = 0;
  *(_DWORD*)(v34 + 112) = -1082130432;
  *(_WORD*)(v34 + 116) = 0;
  *(_WORD*)(v34 + 136) = 0;
  *(_BYTE*)(v34 + 160) = 0;
  *(_BYTE*)(v34 + 288) = 0;
  *(_QWORD*)(v34 + 272) = 0;
  *(_QWORD*)(v34 + 280) = 0;
  *(_QWORD*)(v34 + 256) = 0;
  *(_QWORD*)(v34 + 264) = 0;
  *(_QWORD*)(v34 + 240) = 0;
  *(_QWORD*)(v34 + 248) = 0;
  *(_QWORD*)(v34 + 224) = 0;
  *(_QWORD*)(v34 + 232) = 0;
  *(_QWORD*)(v34 + 208) = 0;
  *(_QWORD*)(v34 + 216) = 0;
  *(_QWORD*)(v34 + 192) = 0;
  *(_QWORD*)(v34 + 200) = 0;
  *(_QWORD*)(v34 + 176) = 0;
  *(_QWORD*)(v34 + 184) = 0;
  *(_QWORD*)(v34 + 168) = 0;
  *(_QWORD*)(v34 + 120) = 0;
  *(_DWORD*)(v34 + 127) = 0;
  *(_DWORD*)(v34 + 292) = 2;
  *(_QWORD*)(v7 + 1208) = v34;
  v36 = *(_QWORD*)v6;
  *(_QWORD*)(v35 + 24) = 0;
  *(_QWORD*)(v7 + 1200) = v35 + 24;
  v37 = fw_memory_HeapManager_Allocate_alt1(v36, 296, 16, 0);
  *(_QWORD*)(v37 + 8) = 0;
  *(_QWORD*)(v37 + 16) = 0;
  *(_QWORD*)v37 = v17;
  v38 = v37;
  *(_DWORD*)(v37 + 32) = 0;
  *(_QWORD*)(v37 + 40) = 0;
  *(_DWORD*)(v37 + 48) = 0x2000;
  *(_DWORD*)(v37 + 104) = 0;
  *(_BYTE*)(v37 + 108) = 0;
  *(_QWORD*)(v37 + 56) = 0;
  *(_QWORD*)(v37 + 64) = 0;
  *(_QWORD*)(v37 + 72) = 0;
  *(_WORD*)(v37 + 80) = 0;
  *(_BYTE*)(v37 + 109) = 1;
  *(_DWORD*)(v37 + 112) = -1082130432;
  *(_WORD*)(v37 + 116) = 0;
  *(_WORD*)(v37 + 136) = 0;
  *(_BYTE*)(v37 + 160) = 0;
  *(_BYTE*)(v37 + 288) = 0;
  *(_QWORD*)(v37 + 272) = 0;
  *(_QWORD*)(v37 + 280) = 0;
  *(_QWORD*)(v37 + 256) = 0;
  *(_QWORD*)(v37 + 264) = 0;
  *(_QWORD*)(v37 + 240) = 0;
  *(_QWORD*)(v37 + 248) = 0;
  *(_QWORD*)(v37 + 224) = 0;
  *(_QWORD*)(v37 + 232) = 0;
  *(_QWORD*)(v37 + 208) = 0;
  *(_QWORD*)(v37 + 216) = 0;
  *(_QWORD*)(v37 + 192) = 0;
  *(_QWORD*)(v37 + 200) = 0;
  *(_QWORD*)(v37 + 176) = 0;
  *(_QWORD*)(v37 + 184) = 0;
  *(_QWORD*)(v37 + 168) = 0;
  *(_QWORD*)(v37 + 120) = 0;
  *(_DWORD*)(v37 + 127) = 0;
  *(_DWORD*)(v37 + 292) = 2;
  *(_QWORD*)(v7 + 1224) = v37;
  v39 = *(_QWORD*)v6;
  *(_QWORD*)(v38 + 24) = 0;
  *(_QWORD*)(v7 + 1216) = v38 + 24;
  v40 = fw_memory_HeapManager_Allocate_alt1(v39, 296, 16, 0);
  *(_QWORD*)(v40 + 8) = 0;
  *(_QWORD*)(v40 + 16) = 0;
  *(_QWORD*)v40 = v17;
  v41 = v40;
  *(_DWORD*)(v40 + 32) = 0;
  *(_QWORD*)(v40 + 40) = 0;
  *(_DWORD*)(v40 + 48) = 0x2000;
  *(_DWORD*)(v40 + 104) = 0;
  *(_BYTE*)(v40 + 108) = 0;
  *(_QWORD*)(v40 + 56) = 0;
  *(_QWORD*)(v40 + 64) = 0;
  *(_QWORD*)(v40 + 72) = 0;
  *(_WORD*)(v40 + 80) = 0;
  *(_BYTE*)(v40 + 109) = 1;
  *(_DWORD*)(v40 + 112) = -1082130432;
  *(_WORD*)(v40 + 116) = 0;
  *(_WORD*)(v40 + 136) = 0;
  *(_BYTE*)(v40 + 160) = 0;
  *(_BYTE*)(v40 + 288) = 0;
  *(_QWORD*)(v40 + 272) = 0;
  *(_QWORD*)(v40 + 280) = 0;
  *(_QWORD*)(v40 + 256) = 0;
  *(_QWORD*)(v40 + 264) = 0;
  *(_QWORD*)(v40 + 240) = 0;
  *(_QWORD*)(v40 + 248) = 0;
  *(_QWORD*)(v40 + 224) = 0;
  *(_QWORD*)(v40 + 232) = 0;
  *(_QWORD*)(v40 + 208) = 0;
  *(_QWORD*)(v40 + 216) = 0;
  *(_QWORD*)(v40 + 192) = 0;
  *(_QWORD*)(v40 + 200) = 0;
  *(_QWORD*)(v40 + 176) = 0;
  *(_QWORD*)(v40 + 184) = 0;
  *(_QWORD*)(v40 + 168) = 0;
  *(_QWORD*)(v40 + 120) = 0;
  *(_DWORD*)(v40 + 127) = 0;
  *(_DWORD*)(v40 + 292) = 2;
  *(_QWORD*)(v7 + 1240) = v40;
  v42 = *(_QWORD*)v6;
  *(_QWORD*)(v41 + 24) = 0;
  *(_QWORD*)(v7 + 1232) = v41 + 24;
  v43 = fw_memory_HeapManager_Allocate_alt1(v42, 296, 16, 0);
  *(_QWORD*)(v43 + 8) = 0;
  *(_QWORD*)(v43 + 16) = 0;
  *(_QWORD*)v43 = v17;
  v44 = v43;
  *(_DWORD*)(v43 + 32) = 0;
  *(_QWORD*)(v43 + 40) = 0;
  *(_DWORD*)(v43 + 48) = 0x2000;
  *(_DWORD*)(v43 + 104) = 0;
  *(_BYTE*)(v43 + 108) = 0;
  *(_QWORD*)(v43 + 56) = 0;
  *(_QWORD*)(v43 + 64) = 0;
  *(_QWORD*)(v43 + 72) = 0;
  *(_WORD*)(v43 + 80) = 0;
  *(_BYTE*)(v43 + 109) = 1;
  *(_DWORD*)(v43 + 112) = -1082130432;
  *(_WORD*)(v43 + 116) = 0;
  *(_WORD*)(v43 + 136) = 0;
  *(_BYTE*)(v43 + 160) = 0;
  *(_BYTE*)(v43 + 288) = 0;
  *(_QWORD*)(v43 + 272) = 0;
  *(_QWORD*)(v43 + 280) = 0;
  *(_QWORD*)(v43 + 256) = 0;
  *(_QWORD*)(v43 + 264) = 0;
  *(_QWORD*)(v43 + 240) = 0;
  *(_QWORD*)(v43 + 248) = 0;
  *(_QWORD*)(v43 + 224) = 0;
  *(_QWORD*)(v43 + 232) = 0;
  *(_QWORD*)(v43 + 208) = 0;
  *(_QWORD*)(v43 + 216) = 0;
  *(_QWORD*)(v43 + 192) = 0;
  *(_QWORD*)(v43 + 200) = 0;
  *(_QWORD*)(v43 + 176) = 0;
  *(_QWORD*)(v43 + 184) = 0;
  *(_QWORD*)(v43 + 168) = 0;
  *(_QWORD*)(v43 + 120) = 0;
  *(_DWORD*)(v43 + 127) = 0;
  *(_DWORD*)(v43 + 292) = 2;
  *(_QWORD*)(v7 + 1256) = v43;
  v45 = *(_QWORD*)v6;
  *(_QWORD*)(v44 + 24) = 0;
  *(_QWORD*)(v7 + 1248) = v44 + 24;
  v46 = fw_memory_HeapManager_Allocate_alt1(v45, 296, 16, 0);
  *(_QWORD*)(v46 + 8) = 0;
  *(_QWORD*)(v46 + 16) = 0;
  *(_QWORD*)v46 = v17;
  v47 = v46;
  *(_DWORD*)(v46 + 32) = 0;
  *(_QWORD*)(v46 + 40) = 0;
  *(_DWORD*)(v46 + 48) = 0x2000;
  *(_DWORD*)(v46 + 104) = 0;
  *(_BYTE*)(v46 + 108) = 0;
  *(_QWORD*)(v46 + 56) = 0;
  *(_QWORD*)(v46 + 64) = 0;
  *(_QWORD*)(v46 + 72) = 0;
  *(_WORD*)(v46 + 80) = 0;
  *(_BYTE*)(v46 + 109) = 1;
  *(_DWORD*)(v46 + 112) = -1082130432;
  *(_WORD*)(v46 + 116) = 0;
  *(_WORD*)(v46 + 136) = 0;
  *(_BYTE*)(v46 + 160) = 0;
  *(_BYTE*)(v46 + 288) = 0;
  *(_QWORD*)(v46 + 272) = 0;
  *(_QWORD*)(v46 + 280) = 0;
  *(_QWORD*)(v46 + 256) = 0;
  *(_QWORD*)(v46 + 264) = 0;
  *(_QWORD*)(v46 + 240) = 0;
  *(_QWORD*)(v46 + 248) = 0;
  *(_QWORD*)(v46 + 224) = 0;
  *(_QWORD*)(v46 + 232) = 0;
  *(_QWORD*)(v46 + 208) = 0;
  *(_QWORD*)(v46 + 216) = 0;
  *(_QWORD*)(v46 + 192) = 0;
  *(_QWORD*)(v46 + 200) = 0;
  *(_QWORD*)(v46 + 176) = 0;
  *(_QWORD*)(v46 + 184) = 0;
  *(_QWORD*)(v46 + 168) = 0;
  *(_QWORD*)(v46 + 120) = 0;
  *(_DWORD*)(v46 + 127) = 0;
  *(_DWORD*)(v46 + 292) = 2;
  *(_QWORD*)(v7 + 1272) = v46;
  v48 = *(_QWORD*)v6;
  *(_QWORD*)(v47 + 24) = 0;
  *(_QWORD*)(v7 + 1264) = v47 + 24;
  v49 = fw_memory_HeapManager_Allocate_alt1(v48, 296, 16, 0);
  *(_QWORD*)(v49 + 8) = 0;
  *(_QWORD*)(v49 + 16) = 0;
  *(_QWORD*)v49 = v17;
  v50 = v49;
  *(_DWORD*)(v49 + 32) = 0;
  *(_QWORD*)(v49 + 40) = 0;
  *(_DWORD*)(v49 + 48) = 0x2000;
  *(_DWORD*)(v49 + 104) = 0;
  *(_BYTE*)(v49 + 108) = 0;
  *(_QWORD*)(v49 + 56) = 0;
  *(_QWORD*)(v49 + 64) = 0;
  *(_QWORD*)(v49 + 72) = 0;
  *(_WORD*)(v49 + 80) = 0;
  *(_BYTE*)(v49 + 109) = 1;
  *(_DWORD*)(v49 + 112) = -1082130432;
  *(_WORD*)(v49 + 116) = 0;
  *(_WORD*)(v49 + 136) = 0;
  *(_BYTE*)(v49 + 160) = 0;
  *(_BYTE*)(v49 + 288) = 0;
  *(_QWORD*)(v49 + 272) = 0;
  *(_QWORD*)(v49 + 280) = 0;
  *(_QWORD*)(v49 + 256) = 0;
  *(_QWORD*)(v49 + 264) = 0;
  *(_QWORD*)(v49 + 240) = 0;
  *(_QWORD*)(v49 + 248) = 0;
  *(_QWORD*)(v49 + 224) = 0;
  *(_QWORD*)(v49 + 232) = 0;
  *(_QWORD*)(v49 + 208) = 0;
  *(_QWORD*)(v49 + 216) = 0;
  *(_QWORD*)(v49 + 192) = 0;
  *(_QWORD*)(v49 + 200) = 0;
  *(_QWORD*)(v49 + 176) = 0;
  *(_QWORD*)(v49 + 184) = 0;
  *(_QWORD*)(v49 + 168) = 0;
  *(_QWORD*)(v49 + 120) = 0;
  *(_DWORD*)(v49 + 127) = 0;
  *(_DWORD*)(v49 + 292) = 2;
  *(_QWORD*)(v7 + 1288) = v49;
  v51 = *(_QWORD*)v6;
  *(_QWORD*)(v50 + 24) = 0;
  *(_QWORD*)(v7 + 1280) = v50 + 24;
  v52 = fw_memory_HeapManager_Allocate_alt1(v51, 296, 16, 0);
  *(_QWORD*)(v52 + 8) = 0;
  *(_QWORD*)(v52 + 16) = 0;
  *(_QWORD*)v52 = v17;
  *(_DWORD*)(v52 + 32) = 0;
  *(_QWORD*)(v52 + 40) = 0;
  *(_DWORD*)(v52 + 48) = 0x2000;
  *(_DWORD*)(v52 + 104) = 0;
  *(_BYTE*)(v52 + 108) = 0;
  *(_QWORD*)(v52 + 56) = 0;
  *(_QWORD*)(v52 + 64) = 0;
  *(_QWORD*)(v52 + 72) = 0;
  *(_WORD*)(v52 + 80) = 0;
  *(_BYTE*)(v52 + 109) = 1;
  *(_DWORD*)(v7 + 1316) = 4;
  v54 = *(_QWORD*)(a1 + 40);
  *(_DWORD*)(v52 + 112) = -1082130432;
  *(_WORD*)(v52 + 116) = 0;
  *(_WORD*)(v52 + 136) = 0;
  *(_BYTE*)(v52 + 160) = 0;
  *(_BYTE*)(v52 + 288) = 0;
  *(_QWORD*)(v52 + 272) = 0;
  *(_QWORD*)(v52 + 280) = 0;
  *(_QWORD*)(v52 + 256) = 0;
  *(_QWORD*)(v52 + 264) = 0;
  *(_QWORD*)(v52 + 240) = 0;
  *(_QWORD*)(v52 + 248) = 0;
  *(_QWORD*)(v52 + 224) = 0;
  *(_QWORD*)(v52 + 232) = 0;
  *(_QWORD*)(v52 + 208) = 0;
  *(_QWORD*)(v52 + 216) = 0;
  *(_QWORD*)(v52 + 192) = 0;
  *(_QWORD*)(v52 + 200) = 0;
  *(_QWORD*)(v52 + 176) = 0;
  *(_QWORD*)(v52 + 184) = 0;
  *(_QWORD*)(v52 + 168) = 0;
  *(_QWORD*)(v52 + 120) = 0;
  *(_DWORD*)(v52 + 127) = 0;
  *(_DWORD*)(v52 + 292) = 2;
  *(_QWORD*)(v7 + 1304) = v52;
  *(_QWORD*)(v52 + 24) = 0;
  *(_QWORD*)(v7 + 1296) = v52 + 24;
  *(_WORD*)(v7 + 1312) = 0;
  *(_QWORD*)(v7 + 1360) = 0;
  *(_BYTE*)(v7 + 1376) = 0;
  if (v54 != 0) {
    *(_QWORD*)(v54 + 48) = v7;
    *(_QWORD*)(v7 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v7;
  *(_QWORD*)(v7 + 24) = "TelopLevelUp";
  *(_QWORD*)(v7 + 32) = a1;
  *(_DWORD*)(v7 + 140) = game_HashString32_alt1(v53);
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 72) = 24;
  *(_QWORD*)(v7 + 80) = 1;
  v55 = GameData_2130f68;
  *(_QWORD*)(v7 + 8) = GameData_2130f68;
  *(_QWORD*)(v7 + 16) = v55;
  (*(void (**)(__int64))(*(_QWORD*)v7 + 32LL))(v7);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v7 + 136LL))(v7) & 1) != 0 &&
      (*(_WORD*)(v7 + 136) & 0x100) == 0) {
    *(_WORD*)(v7 + 136) |= 0x100u;
  }
  v56 = (_BYTE*)*v12;
  v57 = *(_BYTE*)(*v12 + 138LL);
  if (v57 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v56 + 64LL))(*v12);
    v57 = v56[138];
  }
  v56[138] = v57 + 1;
  *(_WORD*)(v7 + 136) |= 2u;
  if ((*(_BYTE*)(v7 + 272) & 1) != 0) {
    *(_QWORD*)(v7 + 280) = 17;
    v58 = *(char**)(v7 + 288);
  }
  else {
    *(_BYTE*)(v7 + 272) = 34;
    v58 = (char*)(v7 + 273);
  }
  strcpy(v58, "Layout/Common.arc");
  if ((*(_BYTE*)(v7 + 296) & 1) != 0) {
    *(_QWORD*)(v7 + 304) = 11;
    v59 = *(char**)(v7 + 312);
  }
  else {
    *(_BYTE*)(v7 + 296) = 22;
    v59 = (char*)(v7 + 297);
  }
  strcpy(v59, "Common_LvUp");
  *(_BYTE*)(v7 + 333) = 1;
  if (*(_DWORD*)(v7 + 320) == 2) {
    v60 = (_QWORD*)game_ProcGameSkipView_instance_;
    if (game_ProcGameSkipView_instance_ != 0) {
      v62 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
      v61 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
      v64 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
      v63 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
      v65 = v63 == v64;
      v66 = v61 - 1 + v62;
      v67 = v66 >> 7;
      v68 = v66 & 0x7F;
      v69 = 16 * (v63 - v64) - 1;
      v70 = *(_QWORD*)(v64 + 8 * v67);
      if (v65) {
        v69 = 0;
      }
      v71 = v70 + 32 * v68;
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
          *(_DWORD*)v71 & 0xFFFFFFFD |
          (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
      v60[21] = *(_QWORD*)(v71 + 24);
      v72 = *(_QWORD*)(v71 + 16);
      v60[27] = v61 - 1;
      v60[20] = v72;
      if ((unsigned __int64)(v69 - (v61 + v62) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
        if (*(_QWORD*)(v63 - 8) != 0) {
          v73 = 128;
          if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
            v73 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v73);
          v63 = v60[24];
        }
        v60[24] = v63 - 8;
      }
    }
  }
  *(_DWORD*)(v7 + 320) = 2;
  if ((a4 & 1) != 0) {
    GameRoutine_867df0();
    v74 = a5;
  }
  else {
    GameRoutine_8679c0();
    v75 = game_ProcGameSkipView_instance_;
    v74 = a5;
    if (game_ProcGameSkipView_instance_ != 0) {
      v76 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      if ((v76 & 0x10) == 0) {
        v76 = v76 & 0xFFFFFFE2 | 1;
        if (*(float*)(game_ProcGameSkipView_instance_ + 224) > 0.0) {
          *(_DWORD*)(game_ProcGameSkipView_instance_ + 224) = 0;
        }
      }
      *(_DWORD*)(v75 + 156) = v76 | 0x10;
    }
  }
  v77 = *(_QWORD*)(v74 + 32);
  *(_BYTE*)(v7 + 338) = 1;
  if (v77 != 0) {
    if (v77 == v74) {
      v88 = v87;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v77 + 24LL))(v77, v87);
      v78 = v88;
    }
    else {
      v78 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v77 + 16LL))(v77);
      v88 = v78;
    }
    v79 = v7 + 1328;
    *(_QWORD*)(v7 + 824) = a2;
    *(_DWORD*)(v7 + 832) = a3;
    if (v78 != nullptr) {
      if (v78 == v87) {
        v90 = v89;
        (*(void (**)(_BYTE*, _BYTE*))(*(_QWORD*)v78 + 24LL))(v78, v89);
      }
      else {
        v90 = (_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v78 + 16LL))(v78);
      }
    }
    else {
      v90 = nullptr;
    }
  }
  else {
    v88 = nullptr;
    v79 = v7 + 1328;
    v90 = nullptr;
    *(_QWORD*)(v7 + 824) = a2;
    *(_DWORD*)(v7 + 832) = a3;
  }
  GameRoutine_654050(v89, v79);
  if (v90 == v89) {
    v80 = 32;
    goto LABEL_47;
  }
  if (v90 != nullptr) {
    v80 = 40;
  LABEL_47:
    (*(void (**)(__int64))(*(_QWORD*)v90 + v80))((__int64)v90);
  }
  if (v88 == v87) {
    v81 = 32;
    goto LABEL_52;
  }
  if (v88 != nullptr) {
    v81 = 40;
  LABEL_52:
    (*(void (**)(__int64))(*(_QWORD*)v88 + v81))((__int64)v88);
  }
  return v7;
}

__n128 game_telop_175cd90(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  __n128 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float v9;
  int v10;
  int v11;
  int v12;
  _DWORD v13[3];

  v2 = a1[1];
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2);
    if (v3 != 0) {
      v5 = *a1;
      v6 = v3;
      if (*a1 != 0) {
        v7 = *(_QWORD*)(*GameData_212d718 + 16);
        v8 = 656;
        if (*(_BYTE*)(v7 + 964) != 0) {
          v8 = 696;
        }
        v9 = (*(float (**)(__int64))(*(_QWORD*)(v7 + v8) + 16LL))(v7 + v8);
        ui_LayoutAccessor_SetPaneSize(
            v5, "ZoomArea",
            (float)((float)(v9 * -0x1.a5e3540000000p-2f) + 1.0f) *
                0x1.1000000000000p+7f,
            (float)((float)(v9 * -0x1.a5e3540000000p-2f) + 1.0f) *
                0x1.3200000000000p+6f);
        GameRoutine_175ca40(
            (__int64)a1,
            (float32x2_t*)(*(_QWORD*)(*GameData_212d708 + 16) + 80LL));
        v13[0] = v10;
        v13[1] = v11;
        v13[2] = v12;
        ui_LayoutAccessor_SetPaneTranslate(v5, "N_Cursor", v13);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        return std___1___shared_weak_count___release_weak();
      }
    }
  }
  return result;
}

__n128 game_telop_1763c20(__int64 a1, __int64** a2)
{
  __int64* v2;
  __int64* v3;
  int v6;
  __int64 v7;
  __int64 v8;
  long double v9;
  __int64 v10;
  __n128 result;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  char v19;
  __int64 v20;
  __int64 v21;
  char v22;

  v2 = *a2;
  v3 = a2[1];
  if (*a2 == v3) {
    v6 = 0;
  }
  else {
    v6 = 0;
    do {
      v7 = *v2++;
      if (v7 != 0) {
        ++v6;
      }
    } while (v2 != v3);
  }
  v8 = game_util_Format_alt1("Select%d", v6);
  LODWORD(v9) = 1.0;
  LayoutAccessor_1562680(a1, v8, v9);
  v10 = game_util_Format_alt1("Reliance%d", a2[1] - *a2);
  LayoutAccessor_1562cf0(a1, v10);
  v12 = *a2;
  v13 = a2[1];
  if (v13 != *a2) {
    v14 = *v12;
    if (*v12 != 0) {
      v15 = ui_LayoutAccessor_FindPane(a1, "UnitA_Face");
      if (v15 != 0) {
        v15 = __dynamic_cast(v15, GameData_212d670[0], GameData_212d678[0], 0);
      }
      v16 = GameRoutine_1840740(v15, 0, v14, 6, 1);
      result = ui_LayoutAccessor_SetPaneVisible(a1, "UnitA_Face", v16 & 1);
      v12 = *a2;
      v13 = a2[1];
    }
    if ((unsigned __int64)((char*)v13 - (char*)v12) >= 9) {
      v17 = v12[1];
      if (v17 != 0) {
        v18 = ui_LayoutAccessor_FindPane(a1, "UnitB_Face");
        if (v18 != 0) {
          v18 =
              __dynamic_cast(v18, GameData_212d670[0], GameData_212d678[0], 0);
        }
        v19 = GameRoutine_1840740(v18, 0, v17, 6, 1);
        result = ui_LayoutAccessor_SetPaneVisible(a1, "UnitB_Face", v19 & 1);
        v12 = *a2;
        v13 = a2[1];
      }
      if ((unsigned __int64)((char*)v13 - (char*)v12) >= 0x11) {
        v20 = v12[2];
        if (v20 != 0) {
          v21 = ui_LayoutAccessor_FindPane(a1, "UnitC_Face");
          if (v21 != 0) {
            v21 = __dynamic_cast(v21, GameData_212d670[0], GameData_212d678[0],
                                 0);
          }
          v22 = GameRoutine_1840740(v21, 0, v20, 6, 1);
          return ui_LayoutAccessor_SetPaneVisible(a1, "UnitC_Face", v22 & 1);
        }
      }
    }
  }
  return result;
}

void game_telop_1766400(__int64 a1, int* a2, _BYTE* a3)
{
  __int64 v3;
  __int64 v4;
  int v5;
  bool v6;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  bool v22;

  v3 = *(_QWORD*)(a1 + 1184);
  v4 = *(_QWORD*)(a1 + 1176);
  v5 = *a2;
  v6 = v3 != v4 && v5 <= 5;
  if (v6 && (*a3 & 1) == 0) {
    v10 = 0;
    v11 = 0;
    do {
      v12 = *(_QWORD*)(v4 + 8 * v10);
      if (*(_BYTE*)(v12 + 32) != 0) {
        v13 = *(_QWORD*)(v12 + 48);
        if (*(_QWORD*)(v13 + 552) != 0 || *(_BYTE*)(v13 + 104) == 3 ||
            *(_BYTE*)(v13 + 250) == 46) {
          v14 = v4 + 8 * v10;
          v15 = v3 - (v14 + 8);
          if (v3 != v14 + 8) {
            memmove(v4 + 8 * v10, v14 + 8, v3 - (v14 + 8));
          }
          v3 = v14 + v15;
          *(_QWORD*)(a1 + 1184) = v14 + v15;
          v5 = *a2;
          goto LABEL_22;
        }
        v16 = GameRoutine_1760e40(a1, 1);
        LayoutAccessor_1562cf0(v16, "UnitSkill");
        v17 = ui_LayoutAccessor_FindPane(v16, "T_NumLv");
        if (v17 != 0) {
          v18 = __dynamic_cast(v17, GameData_212d670[0], GameData_212d690, 0);
          if (v18 != 0) {
            GameRoutine_156c910(v18, "%d", 1);
          }
        }
        GameRoutine_1763490(v16, (__int64)"L_Skill00", *(_QWORD*)(v12 + 48));
        v19 = *(_QWORD*)(a1 + 1176) + 8 * v10;
        v20 = *(_QWORD*)(a1 + 1184);
        v21 = v20 - (v19 + 8);
        if (v20 != v19 + 8) {
          memmove(*(_QWORD*)(a1 + 1176) + 8 * v10, v19 + 8, v20 - (v19 + 8));
        }
        --v11;
        *(_QWORD*)(a1 + 1184) = v19 + v21;
        v5 = *a2 + 1;
        *a2 = v5;
        v3 = *(_QWORD*)(a1 + 1184);
      }
      ++v11;
    LABEL_22:
      v4 = *(_QWORD*)(a1 + 1176);
      v10 = v11;
      v22 = v11 < (unsigned __int64)((v3 - v4) >> 3) && v5 <= 5;
    } while (v22 && (*a3 & 1) == 0);
  }
}

__int64 game_telop_17665e0(__int64 result, int* a2, _BYTE* a3)
{
  int v3;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char v21;
  __int64 v22;
  __int64* v23;
  long double v24;
  __int64 v25;
  __int64 v26;
  bool v27;
  __int64* v28;
  _QWORD* v30;
  __int64 v31;
  long double v32;
  __int64* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  bool v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  char v43;
  __int64 v44;
  _QWORD v45[2];
  __int64 v46;
  __int64* v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  _BYTE v65[12];

  v3 = *a2;
  if (*a2 >= 1) {
    *a3 = 1;
    return result;
  }
  v5 = *(_QWORD*)(result + 1168);
  v7 = result;
  if (v5 != 0) {
    v8 = *(_QWORD*)(result + 1200);
    if (v8 != 0) {
      v46 = *(_QWORD*)(v5 + 392);
      v9 = GameRoutine_675980(v8, &v46);
      v10 = msg_MessageManager_instance__ptr[0];
      if (v9 != 0) {
        v11 = v9;
      }
      else {
        v11 = (__int64)*msg_MessageManager_empty_text__ptr;
      }
      GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704, v11);
      v12 = *v10;
      v52 = -1;
      v53 = -1;
      v54 = -1;
      v55 = -1;
      v56 = -1;
      v57 = -1;
      v58 = -1;
      v59 = -1;
      v60 = -1;
      v61 = -1;
      v62 = -1;
      v63 = -1;
      v47 = GameData_212e348 + 2;
      v48 = 0xFFFF0001FFFF0000LL;
      v49 = 0xFFFF0004FFFF0002LL;
      v50 = 0xFFFF0006FFFF0005LL;
      v64 = 8;
      v51 = 0xFFFF0008FFFF0007LL;
      v13 = GameRoutine_a4dbe0(v12, "MID_Sys_Result_Msg_JobMaster", 0, &v47);
      v14 = GameRoutine_1760e40(v7, 0);
      v15 = (_QWORD*)v14;
      if (v13 != 0) {
        v16 = ui_LayoutAccessor_FindTextBox(v14, "L_Txt/T_Txt");
        if (v16 != 0) {
          GameRoutine_156c5d0(v16, v13, 0);
        }
      }
      v17 = ui_LayoutAccessor_FindTextBox(v15, "L_Txt/T_Txt");
      if (v17 != 0) {
        v18 = v17;
        v19 = ui_LayoutAccessor_FindTextBox(v15, "L_Txt/T_Txt");
        if (v19 != 0) {
          GameRoutine_190a0c0(&v47, v45, v65, v19, *(_QWORD*)(v19 + 216));
          v20 = v45[0];
        }
        else {
          v20 = 0;
        }
        v21 = *(_BYTE*)(v18 + 88);
        *(_QWORD*)(v18 + 80) = v20;
        *(_BYTE*)(v18 + 88) = v21 | 0x10;
      }
      GameRoutine_17356e0(v15, (__int64)"L_Txt");
      LayoutAccessor_1560070_alt1((void*)(&v47), v7 + 168, "L_Stamp");
      if (v48 == 0) {
        goto LABEL_25;
      }
      v22 = std___1___shared_weak_count_lock(v48);
      v23 = v47;
      if (v48 != 0) {
        std___1___shared_weak_count___release_weak();
      }
      if (v22 != 0 && v23 != nullptr) {
        *(__n128*)&v24 = ui_LayoutAccessor_SetPaneVisible(v23, "Stamp", 1);
        ui_LayoutAccessor_SetPaneAlpha(v23, "Stamp", 0, v24);
        *(_BYTE*)(v7 + 1152) = 1;
      }
      else if (v22 == 0) {
      LABEL_25:
        v3 = *a2;
        goto LABEL_26;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
        std___1___shared_weak_count___release_weak();
      }
      goto LABEL_25;
    }
  }
LABEL_26:
  v25 = *(_QWORD*)(v7 + 1216);
  v26 = *(_QWORD*)(v7 + 1208);
  v27 = v25 != v26 && v3 <= 5;
  if (v27 && (*a3 & 1) == 0) {
    v28 = GameData_212c880[0];
    do {
      if (*(_QWORD*)(v7 + 1168) == 0 || *(_QWORD*)(v7 + 1200) == 0) {
        goto LABEL_47;
      }
      v30 = (_QWORD*)GameRoutine_1760e40(v7, 19);
      LayoutAccessor_1562cf0(v30, "JobSkill");
      v45[0] = "L_IconJob";
      v45[1] = 9;
      GameRoutine_1587740((void*)(&v47), v30, v45);
      if (v48 != 0) {
        v31 = std___1___shared_weak_count_lock(v48);
        v33 = v47;
        if (v48 != 0) {
          *(__n128*)&v32 = std___1___shared_weak_count___release_weak();
        }
        if (v31 != 0 && v33 != nullptr) {
          *((_BYTE*)v33 + 1105) = 0;
          JobIcon_19a8c50(v33, *(_QWORD*)(v7 + 1168), v32);
        LABEL_44:
          if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
            std___1___shared_weak_count___release_weak();
          }
          goto LABEL_46;
        }
        if (v31 != 0) {
          goto LABEL_44;
        }
      }
    LABEL_46:
      v34 = *(_QWORD*)(v7 + 1168);
      v35 = *(_QWORD*)(*(_QWORD*)(*v28 + 64) +
                       8LL * (***(_DWORD***)(v7 + 1208) & 0xFFF));
      v51 = 0;
      GameRoutine_17644e0(v30, v34, v35, (__int64)&v47);
      v26 = *(_QWORD*)(v7 + 1208);
      v25 = *(_QWORD*)(v7 + 1216);
    LABEL_47:
      v36 = v25 - (v26 + 8);
      if (v25 != v26 + 8) {
        memmove(v26, v26 + 8, v25 - (v26 + 8));
      }
      *(_QWORD*)(v7 + 1216) = v26 + v36;
      v37 = (*a2)++;
      v25 = *(_QWORD*)(v7 + 1216);
      v26 = *(_QWORD*)(v7 + 1208);
      v38 = v25 != v26 && v37 <= 4;
    } while (v38 && (*a3 & 1) == 0);
  }
  v40 = *(_QWORD*)(v7 + 344);
  v39 = *(_QWORD*)(v7 + 352);
  if (v40 != v39) {
    v41 = *(_QWORD*)(v7 + 352);
    v42 = fw_memory_g_heap_manager_ptr;
    do {
      v43 = *(_BYTE*)(v41 - 24);
      v41 -= 24;
      if ((v43 & 1) != 0 && *(_QWORD*)(v39 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v42 + 200LL) != 0) {
          v44 = 128;
        }
        else {
          v44 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v42 + v44);
      }
      v39 = v41;
    } while (v41 != v40);
  }
  *(_QWORD*)(v7 + 352) = v40;
  Se_80e330(v7, "SE_SYS_Telop_Mini_In");
  return Se_80e330(v7, "SE_SYS_Telop_SkillAcquire_Max");
}

void game_telop_1768fe0(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  long double v4;
  __int64 v5;
  __int64 v6;
  long double v7;
  char* v8;
  char* v9;
  int v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  int v14;
  int v15;
  char* v16;
  signed __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64* v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  int v40;
  unsigned int v41;
  unsigned int v42;
  int v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  char v48;
  unsigned __int64 v49;
  int v50;
  __int64 v51;
  const char* v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  int v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  int v63;
  unsigned __int64 v64;
  __int64 v65;
  const char* v66;
  __int64 v67;
  __int64 v68;
  char* v69;
  __int64 v70;
  const char* v71;
  char* v72;
  int v73;
  __int64 v74;
  __int64 v75;
  char v76;
  char v77;
  __int64 v78;
  __int64 v79;
  _BYTE* v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __n128 v87;
  __int64 v88;
  __int64 v89;
  const char* v90;
  unsigned __int64 v91;
  __int64 v92;
  const char* v93;
  char v94;
  char v95;
  __int64 v96;
  __int64 v97;
  _QWORD* v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  const char* v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  int v107;
  _BYTE v108[20];
  _QWORD v109[2];
  _QWORD* v110;
  _BYTE* v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  _BYTE* v115;
  __int64 v116;
  int v117;

  *(_DWORD*)(a1 + 888) = 0;
  v2 = (_QWORD*)GameRoutine_1760e40(a1, 6);
  v103 = "L_Txt";
  v104 = 5;
  GameRoutine_9b8fe0_alt1((void*)(v108), v2, &v103);
  if (*(_QWORD*)&v108[8] != 0) {
    v3 = std___1___shared_weak_count_lock(*(_QWORD*)&v108[8]);
    v5 = *(_QWORD*)v108;
    if (*(_QWORD*)&v108[8] != 0) {
      *(__n128*)&v4 = std___1___shared_weak_count___release_weak();
    }
    if (v3 != 0 && v5 != 0) {
      v6 =
          (*(__int64 (**)(__int64, long double))(*(_QWORD*)a1 + 496LL))(a1, v4);
      TextBoxEx_188ab20(v5, v6, v7);
    }
    else if (v3 == 0) {
      goto LABEL_10;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak();
    }
  }
LABEL_10:
  v8 = *(char**)(a1 + 1176);
  v9 = *(char**)(a1 + 1168);
  v104 = 0;
  v105 = 0;
  v103 = nullptr;
  if (v8 != v9) {
    v98 = v2;
    v10 = 0;
    v11 = 0x249249249249249LL;
    do {
      v12 = *(_QWORD*)v9;
      if (*(_QWORD*)v9 != 0) {
        v10 |= (*(_BYTE*)(v12 + 337) & 0x20) != 0;
      }
      if ((unsigned __int64)(v8 - v9) < 9) {
        v14 = 1;
      }
      else {
        v13 = 1;
        v14 = 1;
        v15 = 1;
        do {
          if (v12 == *(_QWORD*)&v9[8 * v13]) {
            v16 = &v9[8 * v13];
            v17 = v8 - (v16 + 8);
            if (v8 != v16 + 8) {
              memmove(&v9[8 * v13], v16 + 8, v8 - (v16 + 8));
            }
            v18 = *(_QWORD*)(a1 + 1200);
            v8 = &v16[v17];
            *(_QWORD*)(a1 + 1176) = &v16[v17];
            if (v18 > v13) {
              v19 = v13 >> 6;
              v20 = *(_QWORD*)(a1 + 1192);
              v21 = v18 & 0x3F;
              if (v15 < 0) {
                v19 = -(__int64)((unsigned int)(63 - v15) >> 6);
              }
              v22 = v15 & 0x3F;
              v23 = v19 << 6;
              v24 = v20 + 8 * v19;
              v25 = v19 & 0x3FFFFFFFFFFFFFFLL;
              v26 = v22 + v23;
              if (v22 + v23 - 63 >= 0) {
                v26 = v22 + v23 - 63;
              }
              v27 = v26 >> 6;
              if (v23 < 0) {
                v25 = v27;
              }
              v28 = (unsigned __int64*)(v20 + 8 * v25);
              v29 = (v22 + 1) & 0x3F;
              v30 = (__int64*)((((unsigned __int64)(v22 + 1) >> 3) & 8) + v24);
              v31 = v20 + 8 * (v18 >> 6);
              if ((_DWORD)v22 == (_DWORD)v29) {
                v32 = v21 - v29 + 8 * (v31 - (_QWORD)v30);
                if (v32 >= 1) {
                  if (v29 != 0) {
                    v33 = (unsigned int)(64 - v22);
                    if (v32 >= v33) {
                      v34 = v33;
                    }
                    else {
                      v34 = v21 - v29 + 8 * (v31 - (_QWORD)v30);
                    }
                    v32 -= v34;
                    v35 = *v30++;
                    *v28 =
                        *v28 &
                            ~((0xFFFFFFFFFFFFFFFFLL >>
                               ((unsigned __int8)v33 - (unsigned __int8)v34)) &
                              (-1LL << v29)) |
                        v35 &
                            (0xFFFFFFFFFFFFFFFFLL >>
                             ((unsigned __int8)v33 - (unsigned __int8)v34)) &
                            (-1LL << v29);
                    v28 =
                        (unsigned __int64*)((char*)v28 +
                                            (((unsigned int)(v34 + v29) >> 3) &
                                             0x18LL));
                  }
                  if (v32 >= 0) {
                    v36 = v32;
                  }
                  else {
                    v36 = v32 + 63;
                  }
                  v37 = v36 >> 6;
                  if ((unsigned __int64)(v32 + 63) >= 0x7F) {
                    memmove(v28, v30, 8 * v37);
                  }
                  if (v32 - (v37 << 6) >= 1) {
                    v28[v37] =
                        v28[v37] &
                            ~(0xFFFFFFFFFFFFFFFFLL >>
                              (((_BYTE)v37 << 6) - (unsigned __int8)v32)) |
                        v30[v37] & (0xFFFFFFFFFFFFFFFFLL >>
                                    (((_BYTE)v37 << 6) - (unsigned __int8)v32));
                  }
                }
              }
              else {
                v107 = v15 & 0x3F;
                v106 = v20 + 8 * v25;
                AnimLayerCtrlModule_ce5500((void*)(v108), v30);
              }
              --*(_QWORD*)(a1 + 1200);
              v8 = *(char**)(a1 + 1176);
            }
            v9 = *(char**)(a1 + 1168);
            ++v14;
            --v15;
          }
          v13 = ++v15;
        } while (v15 < (unsigned __int64)((v8 - v9) >> 3));
      }
      if (v12 != 0) {
        v38 = *(unsigned __int16*)(v12 + 16);
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                 8 * v38) +
                      73LL) == 17) {
          nn_os_LockMutex(&game_g_random_mutex);
          v39 = game_map_MapRandom_instance__ptr[0];
          v40 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL));
          v41 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
          v42 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
          *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
              *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
          *((_DWORD*)v39 + 1) = v40;
          v43 = (v42 >> 8) ^ (v41 >> 19) ^ v42 ^ v41;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v39) = v41;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v39 + 4) = v43;
          nn_os_UnlockMutex(&game_g_random_mutex);
          v44 = (unsigned __int64)((16 * ((_WORD)v43 -
                                          1000 *
                                              (unsigned __int16)((v43 &
                                                                  0x7FFFFFFFu) /
                                                                 0x3E8)) +
                                    16) &
                                       0x3FF0 |
                                   1u)
                << 32;
        }
        else {
          v44 = 0x100000000LL;
        }
      }
      else {
        v38 = 0;
        v44 = 0;
      }
      *(_QWORD*)&v108[4] = v44 | v38;
      *(_DWORD*)v108 = 8;
      if ((_BYTE)GameData_21caa2c != 0) {
        v45 = GameData_21caa2c;
      }
      else {
        v45 = 0;
      }
      *(_QWORD*)&v108[12] = v45;
      WORD1(v109[0]) = 0;
      HIDWORD(v109[0]) = 0;
      v113 = 0;
      v114 = 0;
      v115 = nullptr;
      v111 = nullptr;
      v112 = 0;
      v110 = &v111;
      v46 = GameRoutine_930b90(v109, GameData_212c8b0[0]);
      v47 = *(_QWORD*)(a1 + 1200);
      LODWORD(v116) = 0;
      HIDWORD(v116) = v14;
      v117 = -1;
      if (v47 != 0) {
        v48 = **(_BYTE**)(a1 + 1192) & 1;
      }
      else {
        v48 = 0;
      }
      v49 = v104;
      if (v104 >= v105) {
        v52 = v103;
        v53 = v104 - (_QWORD)v103;
        v54 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(v104 - (_QWORD)v103) >> 4) + 1;
        if (v54 > v11) {
          GameRoutine_e66f80(v46);
        }
        if (0xDB6DB6DB6DB6DB6ELL * ((__int64)(v105 - (_QWORD)v103) >> 4) >
            v54) {
          v54 = 0xDB6DB6DB6DB6DB6ELL * ((__int64)(v105 - (_QWORD)v103) >> 4);
        }
        if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL *
                               ((__int64)(v105 - (_QWORD)v103) >> 4)) >=
            0x124924924924924LL) {
          v55 = v11;
        }
        else {
          v55 = v54;
        }
        if (v55 > v11) {
          GameRoutine_60a210_alt1(v46);
        }
        v56 = v10;
        v57 = v11;
        v100 = 112 * v55;
        v58 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                  112 * v55, 16, 0);
        v59 = v58 + v53;
        v99 = v58;
        *(_DWORD*)v59 = *(_DWORD*)v108;
        *(_QWORD*)(v59 + 4) = *(_QWORD*)&v108[4];
        if (v108[12] != 0) {
          v60 = *(_QWORD*)&v108[12];
        }
        else {
          v60 = 0;
        }
        *(_QWORD*)(v59 + 12) = v60;
        *(_QWORD*)(v59 + 48) = 0;
        *(_WORD*)(v59 + 26) = 0;
        *(_DWORD*)(v59 + 28) = 0;
        *(_QWORD*)(v59 + 40) = v59 + 48;
        *(_QWORD*)(v59 + 56) = 0;
        *(_QWORD*)(v59 + 64) = 0;
        *(_QWORD*)(v59 + 72) = 0;
        *(_QWORD*)(v59 + 80) = 0;
        GameRoutine_930b90(v59 + 24, v109);
        v65 = v116;
        *(_BYTE*)(v59 + 105) = v48;
        v66 = (const char*)(v59 - v53);
        *(_BYTE*)(v59 + 104) = 0;
        *(_QWORD*)(v59 + 88) = v65;
        *(_DWORD*)(v59 + 96) = v117;
        if (v52 != (const char*)v49) {
          v67 = 0;
          do {
            v71 = &v52[v67];
            v72 = (char*)&v66[v67];
            v73 = *(_DWORD*)&v52[v67];
            *(_QWORD*)(v72 + 4) = 0;
            *(_DWORD*)v72 = v73;
            v74 = *(_QWORD*)&v52[v67 + 4];
            *(_QWORD*)(v72 + 12) = 0;
            *(_QWORD*)(v72 + 4) = v74;
            if (v52[v67 + 12] != 0) {
              v68 = *(_QWORD*)(v71 + 12);
            }
            else {
              v68 = 0;
            }
            *((_QWORD*)v72 + 6) = 0;
            v69 = v72 + 48;
            *(_QWORD*)(v72 + 12) = v68;
            *((_WORD*)v72 + 13) = 0;
            *((_DWORD*)v72 + 7) = 0;
            *((_QWORD*)v72 + 5) = v72 + 48;
            *((_QWORD*)v72 + 7) = 0;
            *((_QWORD*)v72 + 8) = 0;
            *((_QWORD*)v72 + 9) = 0;
            *((_QWORD*)v72 + 10) = 0;
            GameRoutine_930b90(v72 + 24, v71 + 24);
            v70 = *((_QWORD*)v71 + 11);
            v67 += 112;
            *((_DWORD*)v69 + 12) = *((_DWORD*)v71 + 24);
            *((_QWORD*)v69 + 5) = v70;
            *((_WORD*)v69 + 28) = *((_WORD*)v71 + 52);
          } while (&v52[v67] != (const char*)v49);
          do {
            v76 = v52[64];
            *((_DWORD*)v52 + 8) = 0;
            *((_QWORD*)v52 + 3) = 0;
            if ((v76 & 1) != 0) {
              **((_BYTE**)v52 + 10) = 0;
              *((_QWORD*)v52 + 9) = 0;
            }
            else {
              *((_WORD*)v52 + 32) = 0;
            }
            GameRoutine_6e3b50(v52 + 40, *((_QWORD*)v52 + 6));
            v77 = v52[64];
            *((_QWORD*)v52 + 6) = 0;
            *((_QWORD*)v52 + 7) = 0;
            *((_QWORD*)v52 + 5) = v52 + 48;
            if ((v77 & 1) != 0) {
              v75 = *((_QWORD*)v52 + 10);
              if (v75 != 0) {
                v78 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v78 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v78);
                v75 = *((_QWORD*)v52 + 6);
              }
            }
            else {
              v75 = 0;
            }
            GameRoutine_6e3b50(v52 + 40, v75);
            v52 += 112;
          } while (v52 != (const char*)v49);
          v52 = v103;
        }
        v64 = v59 + 112;
        v103 = v66;
        v104 = v59 + 112;
        v105 = v99 + v100;
        if (v52 != nullptr) {
          v79 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v79 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v79);
        }
        v10 = v56;
        v11 = v57;
      }
      else {
        v50 = *(_DWORD*)v108;
        *(_QWORD*)(v104 + 4) = 0;
        *(_QWORD*)(v49 + 12) = 0;
        *(_DWORD*)v49 = v50;
        *(_QWORD*)(v49 + 4) = *(_QWORD*)&v108[4];
        if (v108[12] != 0) {
          v51 = *(_QWORD*)&v108[12];
        }
        else {
          v51 = 0;
        }
        *(_QWORD*)(v49 + 48) = 0;
        v61 = v49 + 48;
        *(_QWORD*)(v61 - 36) = v51;
        *(_WORD*)(v61 - 22) = 0;
        *(_DWORD*)(v61 - 20) = 0;
        *(_QWORD*)(v61 - 8) = v61;
        *(_QWORD*)(v61 + 8) = 0;
        *(_QWORD*)(v61 + 16) = 0;
        *(_QWORD*)(v61 + 24) = 0;
        *(_QWORD*)(v61 + 32) = 0;
        GameRoutine_930b90(v61 - 24, v109);
        v62 = v116;
        v63 = v117;
        *(_BYTE*)(v61 + 56) = 0;
        v64 = v61 + 64;
        *(_BYTE*)(v61 + 57) = v48;
        *(_DWORD*)(v61 + 48) = v63;
        *(_QWORD*)(v61 + 40) = v62;
      }
      v104 = v64;
      v109[0] = 0;
      LODWORD(v109[1]) = 0;
      if ((v113 & 1) != 0) {
        *v115 = 0;
        v114 = 0;
      }
      else {
        LOWORD(v113) = 0;
      }
      GameRoutine_6e3b50(&v110, v111);
      v111 = nullptr;
      v112 = 0;
      v110 = &v111;
      if ((v113 & 1) != 0) {
        v80 = v115;
        if (v115 != nullptr) {
          v81 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v81 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v81);
          v80 = v111;
        }
      }
      else {
        v80 = nullptr;
      }
      GameRoutine_6e3b50(&v110, v80);
      v82 = *(_QWORD*)(a1 + 1168);
      v83 = *(_QWORD*)(a1 + 1176);
      v84 = v83 - (v82 + 8);
      if (v83 != v82 + 8) {
        memmove(*(_QWORD*)(a1 + 1168), v82 + 8, v83 - (v82 + 8));
      }
      v85 = *(_QWORD*)(a1 + 1200);
      v8 = (char*)(v82 + v84);
      *(_QWORD*)(a1 + 1176) = v82 + v84;
      if (v85 != 0) {
        v86 = *(_QWORD*)(a1 + 1192);
        v107 = 0;
        v106 = v86;
        AnimLayerCtrlModule_ce5500((void*)(v108), v86);
        --*(_QWORD*)(a1 + 1200);
        v8 = *(char**)(a1 + 1176);
      }
      v9 = *(char**)(a1 + 1168);
    } while (v8 != v9);
    v2 = v98;
    if ((v10 & 1) != 0) {
      v87 = snd_Fade_Fade_10c830(v108, 0.0);
      LANES128(v87).n128_u32[0] = 1140457472;
      snd_play_ff2d0((void*)(&v106), "SE_SYS_ItemGet_Quest",
                     "SE_SYS_ItemGet_Quest", v108, 0, 65537, 0,
                     LANES128(v87).n128_f64[0], 1.0);
      snd_Fade_Destroy_Fade(v108);
    }
  }
  LayoutAccessor_1560070_alt1((void*)(&v101), v2, "L_ItemList");
  if (v102 != 0) {
    v88 = std___1___shared_weak_count_lock(v102);
    if (v88 != 0) {
      v89 = v88;
      if (v101 != 0) {
        Util_1586140(v101, &v103);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v89 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v89 + 16LL))(v89);
        std___1___shared_weak_count___release_weak();
      }
    }
    if (v102 != 0) {
      std___1___shared_weak_count___release_weak();
    }
  }
  GameRoutine_17356e0(v2, (__int64)"A_Contents");
  v90 = v103;
  if (v103 != nullptr) {
    if (v103 == (const char*)v104) {
      goto LABEL_132;
    }
    v91 = v104 - 40;
    do {
      v94 = *(_BYTE*)(v91 - 8);
      *(_DWORD*)(v91 - 40) = 0;
      *(_QWORD*)(v91 - 48) = 0;
      if ((v94 & 1) != 0) {
        **(_BYTE**)(v91 + 8) = 0;
        *(_QWORD*)v91 = 0;
      }
      else {
        *(_WORD*)(v91 - 8) = 0;
      }
      GameRoutine_6e3b50(v91 - 32, *(_QWORD*)(v91 - 24));
      v95 = *(_BYTE*)(v91 - 8);
      *(_QWORD*)(v91 - 24) = 0;
      *(_QWORD*)(v91 - 16) = 0;
      *(_QWORD*)(v91 - 32) = v91 - 24;
      if ((v95 & 1) != 0) {
        v92 = *(_QWORD*)(v91 + 8);
        if (v92 != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v96 = 128;
          }
          else {
            v96 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v96);
          v92 = *(_QWORD*)(v91 - 24);
        }
      }
      else {
        v92 = 0;
      }
      GameRoutine_6e3b50(v91 - 32, v92);
      v93 = (const char*)(v91 - 72);
      v91 -= 112LL;
    } while (v93 != v90);
    if (v103 != nullptr) {
    LABEL_132:
      v97 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v97 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v97);
    }
  }
}

__int64 game_telop_1770d20(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64* v8;

  v2 = GameData_212c608[0];
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_WORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = "NULL";
  *(_QWORD*)(a1 + 138) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)a1 = v2 + 16;
  *(_QWORD*)(a1 + 8) = 0;
  game_ProcInst_Register_alt1(a1);
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = a1 + 200;
  *(_QWORD*)(a1 + 240) = 0;
  *(_DWORD*)(a1 + 248) = 1065353216;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_DWORD*)(a1 + 332) = 0;
  *(_BYTE*)(a1 + 338) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_DWORD*)(a1 + 320) = 3;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_QWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_DWORD*)(a1 + 432) = 0x2000;
  *(_QWORD*)(a1 + 472) = 0;
  *(_QWORD*)(a1 + 480) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 504) = 0;
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 488) = 0;
  *(_QWORD*)(a1 + 496) = 0;
  *(_DWORD*)(a1 + 520) = 1065353216;
  *(_QWORD*)(a1 + 324) = 0;
  *(_QWORD*)(a1 + 528) = 0;
  *(_QWORD*)(a1 + 536) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_DWORD*)(a1 + 552) = 1065353216;
  *(_WORD*)(a1 + 560) = 0;
  *(_WORD*)(a1 + 584) = 0;
  *(_BYTE*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 656) = 0;
  *(_QWORD*)(a1 + 648) = 0;
  *(_QWORD*)(a1 + 632) = 0;
  *(_WORD*)(a1 + 336) = 1;
  *(_QWORD*)(a1 + 624) = 0;
  *(_QWORD*)(a1 + 616) = 0;
  *(_QWORD*)(a1 + 688) = 0;
  *(_QWORD*)(a1 + 680) = 0;
  *(_QWORD*)(a1 + 672) = 0;
  *(_QWORD*)(a1 + 664) = 0;
  *(_DWORD*)(a1 + 696) = 1065353216;
  *(_QWORD*)(a1 + 720) = 0;
  *(_QWORD*)(a1 + 712) = 0;
  *(_QWORD*)(a1 + 704) = 0;
  *(_QWORD*)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 464) = a1 + 472;
  *(_DWORD*)(a1 + 728) = 1065353216;
  *(_WORD*)(a1 + 736) = 0;
  *(_WORD*)(a1 + 760) = 0;
  *(_BYTE*)(a1 + 784) = 0;
  *(_QWORD*)(a1 + 792) = 0;
  *(_QWORD*)(a1 + 640) = a1 + 648;
  v3 = GameData_2130240[0] + 2;
  *(_BYTE*)(a1 + 800) = 0;
  *(_BYTE*)(a1 + 816) = 0;
  *(_QWORD*)(a1 + 808) = v3;
  *(_QWORD*)a1 = game_telop_TelopResult_vtable;
  v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  *(_BYTE*)(a1 + 820) = 0;
  *(_WORD*)(a1 + 824) = 0;
  v5 = fw_memory_HeapManager_Allocate_alt1(v4, 296, 16, 0);
  *(_DWORD*)(v5 + 48) = 0x2000;
  v6 = GameData_2131678;
  *(_WORD*)(v5 + 108) = 256;
  *(_QWORD*)(v5 + 8) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_DWORD*)(v5 + 32) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_DWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_WORD*)(v5 + 80) = 0;
  *(_DWORD*)(v5 + 112) = -1082130432;
  *(_WORD*)(v5 + 116) = 0;
  *(_WORD*)(v5 + 136) = 0;
  *(_BYTE*)(v5 + 160) = 0;
  *(_BYTE*)(v5 + 288) = 0;
  *(_QWORD*)(v5 + 272) = 0;
  *(_QWORD*)(v5 + 280) = 0;
  *(_QWORD*)(v5 + 256) = 0;
  *(_QWORD*)(v5 + 264) = 0;
  *(_QWORD*)(v5 + 240) = 0;
  *(_QWORD*)(v5 + 248) = 0;
  *(_QWORD*)(v5 + 224) = 0;
  *(_QWORD*)(v5 + 232) = 0;
  *(_QWORD*)(v5 + 208) = 0;
  *(_QWORD*)(v5 + 216) = 0;
  *(_QWORD*)(v5 + 192) = 0;
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_DWORD*)(v5 + 127) = 0;
  *(_QWORD*)(a1 + 856) = v5;
  *(_WORD*)(a1 + 960) = 0;
  *(_QWORD*)(a1 + 1016) = 0;
  *(_QWORD*)(a1 + 992) = 0;
  *(_QWORD*)(a1 + 1000) = 0;
  *(_BYTE*)(a1 + 952) = 0;
  *(_QWORD*)(a1 + 944) = 0;
  *(_QWORD*)(a1 + 936) = 0;
  *(_QWORD*)(a1 + 928) = 0;
  *(_QWORD*)(a1 + 920) = 0;
  *(_QWORD*)(a1 + 912) = 0;
  *(_QWORD*)(a1 + 904) = 0;
  *(_QWORD*)(a1 + 896) = 0;
  *(_QWORD*)(a1 + 888) = 0;
  *(_QWORD*)(a1 + 880) = 0;
  *(_QWORD*)(a1 + 872) = 0;
  *(_QWORD*)(a1 + 864) = 0;
  *(_QWORD*)(a1 + 1024) = 1065353216;
  *(_WORD*)(a1 + 1032) = 0;
  *(_WORD*)(a1 + 1040) = 0;
  *(_WORD*)(a1 + 1064) = 0;
  *(_WORD*)(a1 + 1088) = 0;
  *(_QWORD*)v5 = v6 + 16;
  *(_DWORD*)(v5 + 292) = 2;
  *(_QWORD*)(v5 + 24) = 0;
  result = v5 + 24;
  *(_QWORD*)(a1 + 848) = result;
  *(_QWORD*)(a1 + 1007) = 0;
  v8 = GameData_2130f98[0] + 2;
  *(_QWORD*)(a1 + 1160) = 0;
  *(_BYTE*)(a1 + 1152) = 0;
  *(_QWORD*)(a1 + 1144) = 0;
  *(_QWORD*)(a1 + 1136) = 0;
  *(_QWORD*)(a1 + 1128) = 0;
  *(_QWORD*)(a1 + 1120) = 0;
  *(_QWORD*)(a1 + 1112) = 0;
  *(_QWORD*)(a1 + 1216) = 0;
  *(_QWORD*)(a1 + 1208) = 0;
  *(_QWORD*)(a1 + 1200) = 0;
  *(_QWORD*)(a1 + 1192) = 0;
  *(_QWORD*)(a1 + 1184) = 0;
  *(_QWORD*)(a1 + 1176) = 0;
  *(_QWORD*)(a1 + 1168) = 0;
  *(_QWORD*)(a1 + 984) = v8;
  *(_QWORD*)a1 = game_telop_TelopTrainingResult_vtable;
  return result;
}

__int64 game_telop_177ac10(__int64 a1, __int64 a2, char a3, int a4)
{
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64* v14;
  __int64 v15;

  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  v8 = GameData_212c608[0];
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_WORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = "NULL";
  *(_QWORD*)(a1 + 138) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)a1 = v8 + 16;
  *(_QWORD*)(a1 + 8) = 0;
  game_ProcInst_Register_alt1(a1);
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = a1 + 200;
  *(_QWORD*)(a1 + 240) = 0;
  *(_DWORD*)(a1 + 248) = 1065353216;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_DWORD*)(a1 + 332) = 0;
  *(_BYTE*)(a1 + 338) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_DWORD*)(a1 + 320) = 3;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_QWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_DWORD*)(a1 + 432) = 0x2000;
  *(_QWORD*)(a1 + 472) = 0;
  *(_QWORD*)(a1 + 480) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 504) = 0;
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 488) = 0;
  *(_QWORD*)(a1 + 496) = 0;
  *(_DWORD*)(a1 + 520) = 1065353216;
  *(_QWORD*)(a1 + 324) = 0;
  *(_QWORD*)(a1 + 528) = 0;
  *(_QWORD*)(a1 + 536) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_DWORD*)(a1 + 552) = 1065353216;
  *(_WORD*)(a1 + 560) = 0;
  *(_WORD*)(a1 + 584) = 0;
  *(_BYTE*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 656) = 0;
  *(_QWORD*)(a1 + 648) = 0;
  *(_QWORD*)(a1 + 632) = 0;
  *(_WORD*)(a1 + 336) = 1;
  *(_QWORD*)(a1 + 624) = 0;
  *(_QWORD*)(a1 + 616) = 0;
  *(_QWORD*)(a1 + 688) = 0;
  *(_QWORD*)(a1 + 680) = 0;
  *(_QWORD*)(a1 + 672) = 0;
  *(_QWORD*)(a1 + 664) = 0;
  *(_DWORD*)(a1 + 696) = 1065353216;
  *(_QWORD*)(a1 + 720) = 0;
  *(_QWORD*)(a1 + 712) = 0;
  *(_QWORD*)(a1 + 704) = 0;
  *(_QWORD*)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 464) = a1 + 472;
  *(_DWORD*)(a1 + 728) = 1065353216;
  *(_WORD*)(a1 + 736) = 0;
  *(_WORD*)(a1 + 760) = 0;
  *(_BYTE*)(a1 + 784) = 0;
  *(_QWORD*)(a1 + 792) = 0;
  *(_QWORD*)(a1 + 640) = a1 + 648;
  v9 = GameData_2130240[0] + 2;
  *(_BYTE*)(a1 + 800) = 0;
  *(_BYTE*)(a1 + 816) = 0;
  *(_QWORD*)(a1 + 808) = v9;
  *(_QWORD*)a1 = game_telop_TelopResult_vtable;
  v10 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  *(_BYTE*)(a1 + 820) = 0;
  *(_WORD*)(a1 + 824) = 0;
  v11 = fw_memory_HeapManager_Allocate_alt1(v10, 296, 16, 0);
  *(_DWORD*)(v11 + 48) = 0x2000;
  v12 = GameData_2131678;
  *(_WORD*)(v11 + 108) = 256;
  *(_QWORD*)(v11 + 8) = 0;
  *(_QWORD*)(v11 + 16) = 0;
  *(_DWORD*)(v11 + 32) = 0;
  *(_QWORD*)(v11 + 40) = 0;
  *(_DWORD*)(v11 + 104) = 0;
  *(_QWORD*)(v11 + 56) = 0;
  *(_QWORD*)(v11 + 64) = 0;
  *(_QWORD*)(v11 + 72) = 0;
  *(_WORD*)(v11 + 80) = 0;
  *(_DWORD*)(v11 + 112) = -1082130432;
  *(_WORD*)(v11 + 116) = 0;
  *(_WORD*)(v11 + 136) = 0;
  *(_BYTE*)(v11 + 160) = 0;
  *(_BYTE*)(v11 + 288) = 0;
  *(_QWORD*)(v11 + 272) = 0;
  *(_QWORD*)(v11 + 280) = 0;
  *(_QWORD*)(v11 + 256) = 0;
  *(_QWORD*)(v11 + 264) = 0;
  *(_QWORD*)(v11 + 240) = 0;
  *(_QWORD*)(v11 + 248) = 0;
  *(_QWORD*)(v11 + 224) = 0;
  *(_QWORD*)(v11 + 232) = 0;
  *(_QWORD*)(v11 + 208) = 0;
  *(_QWORD*)(v11 + 216) = 0;
  *(_QWORD*)(v11 + 192) = 0;
  *(_QWORD*)(v11 + 200) = 0;
  *(_QWORD*)(v11 + 176) = 0;
  *(_QWORD*)(v11 + 184) = 0;
  *(_QWORD*)(v11 + 168) = 0;
  *(_QWORD*)(v11 + 120) = 0;
  *(_DWORD*)(v11 + 127) = 0;
  *(_QWORD*)(a1 + 856) = v11;
  *(_WORD*)(a1 + 960) = 0;
  *(_QWORD*)(a1 + 1016) = 0;
  *(_QWORD*)(a1 + 992) = 0;
  *(_QWORD*)(a1 + 1000) = 0;
  *(_BYTE*)(a1 + 952) = 0;
  *(_QWORD*)(a1 + 944) = 0;
  *(_QWORD*)(a1 + 936) = 0;
  *(_QWORD*)(a1 + 928) = 0;
  *(_QWORD*)(a1 + 920) = 0;
  *(_QWORD*)(a1 + 912) = 0;
  *(_QWORD*)(a1 + 904) = 0;
  *(_QWORD*)(a1 + 896) = 0;
  *(_QWORD*)(a1 + 888) = 0;
  *(_QWORD*)(a1 + 880) = 0;
  *(_QWORD*)(a1 + 872) = 0;
  *(_QWORD*)(a1 + 864) = 0;
  *(_QWORD*)(a1 + 1024) = 1065353216;
  *(_WORD*)(a1 + 1032) = 0;
  *(_WORD*)(a1 + 1040) = 0;
  *(_WORD*)(a1 + 1064) = 0;
  *(_WORD*)(a1 + 1088) = 0;
  *(_QWORD*)v11 = v12 + 16;
  *(_DWORD*)(v11 + 292) = 2;
  *(_QWORD*)(v11 + 24) = 0;
  result = v11 + 24;
  *(_QWORD*)(a1 + 848) = result;
  *(_QWORD*)(a1 + 1007) = 0;
  v14 = GameData_2130f98[0] + 2;
  *(_QWORD*)(a1 + 1160) = 0;
  *(_BYTE*)(a1 + 1152) = 0;
  *(_QWORD*)(a1 + 1144) = 0;
  *(_QWORD*)(a1 + 1136) = 0;
  *(_QWORD*)(a1 + 1128) = 0;
  *(_QWORD*)(a1 + 1120) = 0;
  *(_QWORD*)(a1 + 1112) = 0;
  *(_QWORD*)(a1 + 1168) = a2;
  *(_BYTE*)(a1 + 1176) = a3;
  *(_DWORD*)(a1 + 1180) = a4;
  *(_QWORD*)(a1 + 1216) = 0;
  *(_QWORD*)(a1 + 1192) = 0;
  *(_QWORD*)(a1 + 1224) = 1065353216;
  *(_WORD*)(a1 + 1232) = 0;
  *(_WORD*)(a1 + 1240) = 0;
  *(_WORD*)(a1 + 1264) = 0;
  *(_WORD*)(a1 + 1288) = 0;
  *(_QWORD*)(a1 + 984) = v14;
  *(_QWORD*)a1 = game_telop_TelopGrowMastery_vtable;
  *(_QWORD*)(a1 + 1207) = 0;
  *(_QWORD*)(a1 + 1200) = 0;
  v15 = GameData_2131cf8[0] + 16;
  *(_QWORD*)(a1 + 1320) = 0;
  *(_QWORD*)(a1 + 1312) = 0;
  *(_QWORD*)(a1 + 1184) = v15;
  return result;
}

__int64 game_telop_17cc420(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  __int64 v6;
  __int64 v7;
  __int64 (***v8)();
  __int64 v9;
  int v10;
  unsigned int v11;
  unsigned __int64 v12;
  long double v13;
  __int64 v14;
  _QWORD v16[3];
  _QWORD v17[3];
  int v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int16 v24;
  __int64 v25;
  __int64 v26;
  _QWORD v27[2];
  __int16 v28;
  __int16 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _BYTE v35[11];
  int v36;
  __int16 v37;
  int v38;
  char v39[24];

  v34 = 0;
  *(_QWORD*)v35 = 0;
  v21 = 0;
  v19 = 0;
  v20 = 0;
  v28 = 0;
  v29 = 0;
  v25 = 0;
  v26 = 0;
  __builtin_memset(v27, 0, 15);
  v24 = 15;
  *(_DWORD*)&v35[7] = 0x10000;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v37 = 0;
  v38 = 0;
  v22 = a2;
  v23 = a3;
  BYTE5(v27[1]) = a5;
  LODWORD(v27[1]) = a4;
  v17[0] = 0;
  v17[1] = a2;
  v36 = -1;
  v18 = 4;
  strcpy(v39, "\"SE_SYS_Heart_Down");
  if (a2 != 0) {
    v6 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 24) + 1784LL) + 272LL);
  }
  else {
    v6 = 0;
  }
  v17[2] = v6;
  v16[0] = 0;
  v16[1] = a3;
  if (a3 == 0) {
    v8 = &game_GameReliance_Impl_Data_vtable_ptr;
    goto LABEL_10;
  }
  v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a3 + 24) + 1784LL) + 272LL);
  v16[2] = v7;
  v8 = GameData_212dae8;
  if (v6 == 0 || v7 == 0) {
  LABEL_10:
    if (*((_BYTE*)((_UNKNOWN**)0x8LL) + (_QWORD)v8 + 2) == 0) {
      goto LABEL_12;
    }
    goto LABEL_11;
  }
  v9 = *(_QWORD*)(game_GameModeData_instance_ + 128);
  v10 = a4;
  v11 = GameReliance_8e17a0(v9, v17, v16);
  if ((v11 & 0x80000000) != 0) {
    v8 = &game_GameReliance_Impl_Data_vtable_ptr;
  }
  else {
    v8 = (__int64 (***)())(*(_QWORD*)(v9 + 8) + 56LL * v11);
  }
  a4 = v10;
  if (*((_BYTE*)v8 + 10) != 0) {
  LABEL_11:
    LODWORD(v27[0]) = a4 + *((unsigned __int16*)v8 + 6);
    HIDWORD(v27[0]) = v27[0];
  }
LABEL_12:
  v12 = *(_QWORD*)(a1 + 1648);
  if (v12 >= *(_QWORD*)(a1 + 1656)) {
    v14 = TelopParts_17cd840(a1 + 1640, &v18);
  }
  else {
    TelopParts_17cdaa0(*(_QWORD*)(a1 + 1648), &v18);
    v14 = v12 + 248;
  }
  *(_QWORD*)(a1 + 1648) = v14;
  return TelopParts_17cbd60(&v18, v13);
}

#pragma GCC visibility pop
