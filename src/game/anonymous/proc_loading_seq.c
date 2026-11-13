#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_9b8890(_QWORD*);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1fb3bd8[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_anonymous_ProcLoadingSeq_vtable[])();
extern __int64 GameData_21f8018;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting;
__int64
ProcLoadingSeq_Destructor_alt1(__int64 a1) __asm__("ProcLoadingSeq_Destructor");
__int64 ProcLoadingSeq_DeletingDestructor_alt1(__int64 a1) __asm__(
    "ProcLoadingSeq_DeletingDestructor");
_QWORD* ProcLoadingSeq_Unknown2(_QWORD* a1);
__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 ui_Manager_instance_;
__int64
game_anonymous_ProcLoadingSeq_UpdateByCurrentTips_closure_Invoke(__int64 a1,
                                                                 __int64* a2);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* TutorialFile_97ffe0(__int64);
_QWORD* TutorialFile_980100(__int64);
_QWORD* ui_LayoutAccessor_Setup_155dda0(__int64*, __int64*);
__attribute__((swiftcall)) void GameRoutine_1366bd0(PSEUDO_X8, __int64, __int64,
                                                    __int64);
__attribute__((swiftcall)) void GameRoutine_97f5e0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void GameRoutine_9b8fe0(PSEUDO_X8, __int64*,
                                                   _QWORD*);
__attribute__((swiftcall)) void TextBoxEx_188aa00(PSEUDO_X8, __int64* result,
                                                  int);
__attribute__((swiftcall)) void TutorialFile_97fb60(PSEUDO_X8, __int64);
__int64* GameRoutine_112cc60(__int64* result, unsigned __int8*,
                             unsigned __int8*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 EmbeddedImage_1889d00(__int64, __int64);
__int64 GameRoutine_1841930(__int64, __int64, __int64);
__int64 GameRoutine_2b0();
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_9b80e0(__int64 result);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
extern __int64 (*GameData_1fb3aa8[])();
extern __int64 GameData_21f7e28;
extern __int64 GameData_21f7e30;
extern __int64 GameData_21f7e38;
extern __int64 GameData_21f7e48;
extern __int64 GameData_21f7e58;
extern __int64 GameData_21f7e68;
extern __int64 GameData_21f7e70;
extern __int64 GameData_21f7e78;
extern __int64 GameData_21f7e88;
extern __int64 GameData_21f7e98;
extern __int64 GameData_21f7ea8;
extern __int64 GameData_21f7eb0;
extern __int64 GameData_21f7eb8;
extern __int64 GameData_21f7ec8;
extern __int64 GameData_21f7ed8;
extern __int64 GameData_21f7ee8;
extern __int64 GameData_21f7ef0;
extern __int64 GameData_21f7ef8;
extern __int64 GameData_21f7f08;
extern __int64 GameData_21f7f18;
extern __int64 GameData_21f7f28;
extern __int64 GameData_21f7f30;
extern __int64 GameData_21f7f38;
extern __int64 GameData_21f7f48;
extern __int64 GameData_21f7f58;
extern __int64 GameData_21f7f68;
extern __int64 GameData_21f7f70;
extern __int64 GameData_21f7f78;
extern __int64 GameData_21f7f88;
extern __int64 GameData_21f7f98;
extern __int64 GameData_21f7fa0;
extern __int64 GameData_21f7fa8;
extern __int64 GameData_21f7fb0;
extern __int64 GameData_21f7fb8;
extern __int64 GameData_21f7fc0;
extern __int64 GameData_21f7fc8;
extern __int64 GameData_21f7fd0;
extern __int64 GameData_21f7fd8;
extern __int64 GameData_21f7fe0;
extern __int64 GameData_21f7fe8;
extern __int64 GameData_21f7ff0;
extern __int64 GameData_21f7ff8;
extern __int64 GameData_21f8008;
extern __int64 GameData_21f8010;
extern __int64 fw_memory_g_heap_manager;
extern char* msg_MessageManager_empty_text_;
extern char** msg_MessageManager_empty_text__ptr;
extern char GameData_21f7e20;
extern char GameData_21f7e60;
extern char GameData_21f7ea0;
extern char GameData_21f7ee0;
extern char GameData_21f7f20;
extern char GameData_21f7f60;
extern int GameData_21f7e40;
extern int GameData_21f7e50;
extern int GameData_21f7e80;
extern int GameData_21f7e90;
extern int GameData_21f7ec0;
extern int GameData_21f7ed0;
extern int GameData_21f7f00;
extern int GameData_21f7f10;
extern int GameData_21f7f40;
extern int GameData_21f7f50;
extern int GameData_21f7f80;
extern int GameData_21f7f90;
extern int GameData_21f8000;
void GameRoutine_156c5d0(__int64, __int64, char);
void TextBoxEx_188ab20(__int64, _BYTE*);
void __attribute__((noreturn)) String_60a1d0();
_QWORD* ProcLoadingSeq_9b84e0_alt1() __asm__("ProcLoadingSeq_9b84e0");
__int64 game_anonymous_ProcLoadingSeq_UpdateByCurrentTips_alt2(
    _QWORD* a1) __asm__("game_anonymous_ProcLoadingSeq_UpdateByCurrentTips");
__int64 ProcLoadingSeq_9b9b60();
__int64* game_820d50(int);
__int64 GameRoutine_6380e0(_QWORD, _QWORD, long double);
__int64 GameRoutine_64be60();
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_anonymous_ProcLoadingSeq_UpdateByCurrentTips_alt1(_QWORD) __asm__(
    "game_anonymous_ProcLoadingSeq_UpdateByCurrentTips");
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__int64 std___1_locale_Destroy_locale(_QWORD);
__int64 ui_LayoutAccessor_SetPriority(_QWORD, _QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN game_g_random_mutex;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_21f3d10;
extern __int64 game_GameModeData_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
void TutorialFile_980240(_QWORD*, char, int);
void __attribute__((noreturn))
String_60a1d0_alt1(_QWORD) __asm__("String_60a1d0");
__int64 ProcLoadingSeq_9b80e0(__int64 result);
__int64 GameRoutine_809fd0(__int64 result, long double);
__int64 LayoutAccessor_155e830_alt1(__int64 result,
                                    char) __asm__("LayoutAccessor_155e830");
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_809ba0(__int64, float);
__int64 nn_oe_SetCpuBoostMode(_QWORD);
__int64 nn_os_ClearEvent(__int64);
__int64 nn_os_SignalEvent(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* snd_g_fileIndex_ptr[2];
extern __int64 GameData_212c638;
extern __int64 GameData_212d690;
extern __int64 GameData_2130f48;
extern __int64 GameData_21f61c0;
extern __int64 GameData_2241720;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 snd_g_fileIndex;
extern char GameData_21c9699;
extern int GameData_21f61c8;
__int64 ProcLoadingSeq_Unknown4(__int64 a1, long double a2);
__int64 ProcLoadingSeq_Unknown5();
_QWORD* ui_LayoutAccessor_Setup_155dda0_alt1(_QWORD*, _QWORD*) __asm__(
    "ui_LayoutAccessor_Setup_155dda0");
__attribute__((swiftcall)) void
TextBoxEx_188aa00_alt1(PSEUDO_X8, __int64, int) __asm__("TextBoxEx_188aa00");
__attribute__((swiftcall)) void TutorialFile_97f5e0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void game_1366bd0(PSEUDO_X8, __int64, __int64,
                                             __int64);
__int64
GameRoutine_112cc60_alt1(__int64 result, unsigned __int8*,
                         unsigned __int8*) __asm__("GameRoutine_112cc60");
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 game_1841930(__int64, __int64);
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void TextBoxEx_188ab20_alt1(__int64, __int64) __asm__("TextBoxEx_188ab20");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcLoadingSeq_9b84e0();
void game_anonymous_ProcLoadingSeq_UpdateByCurrentTips(_QWORD* a1);
void ProcLoadingSeq_Destructor(__int64 a1);
void ProcLoadingSeq_DeletingDestructor(__int64 a1);

__int64 ProcLoadingSeq_9b80e0(__int64 result)
{
  __int64 v1;
  __int64* v2;
  int v3;
  unsigned int v4;
  unsigned int v5;
  int v6;
  unsigned int v7;
  long double v8;
  __int64 v9;
  unsigned __int64 v10;
  _BYTE* v11;
  char* v12;
  __int64 v13;
  _BYTE* v14;
  __int64 v15;
  char* v16;
  __int64* v17;
  __int64 v18;
  bool v19;
  _QWORD* v20;
  _QWORD* v21;
  _QWORD* v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  unsigned __int8* v26;
  unsigned int v27;
  bool v28;
  int v29;
  __int64 v31;
  _QWORD v32[5];
  _QWORD v33[2];
  unsigned __int64 v34;
  __int64 (*v35)();
  __int64 v36;
  _BYTE v37[256];
  _BYTE* v38;
  __int64 v39;
  __int64 v40;
  char* v41;
  __int64 v42;
  _BYTE v43[8];
  char v44;
  _QWORD v45[2];
  int v46;
  __int64 v47;
  __int64 v48;

  v1 = result;
  if (game_hub_ProcHubSeqView_instance_ != 0 &&
      *(_BYTE*)(GameData_21f3d10 + 9) != 1) {
    return result;
  }
  LayoutAccessor_155e830(&GameData_21f7fb0, 1);
  nn_os_LockMutex(&game_g_random_mutex);
  v2 = game_map_MapRandom_instance__ptr[0];
  v3 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((_UNKNOWN**)0x8LL));
  v4 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
  v5 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
       (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
  *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
      *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
  *((_DWORD*)v2 + 1) = v3;
  v6 = (v5 >> 8) ^ (v4 >> 19) ^ v5 ^ v4;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2) = v4;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2 + 4) = v6;
  v7 = v6 & 0x7FFFFFFF;
  *(__n128*)&v8 = nn_os_UnlockMutex(&game_g_random_mutex);
  v36 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 1;
  v43[0] = 0;
  v39 = (__int64)v33;
  v40 = 1;
  v33[0] = v37;
  v33[1] = 256;
  v38 = v37;
  v34 = 0;
  v35 = GameRoutine_64be60;
  v32[1] = 0;
  v32[2] = 3;
  v44 = 0;
  v32[0] = v7 % 9;
  v45[0] = "Wait{:02}";
  v45[1] = "";
  v41 = (char*)v32;
  v42 = 3;
  v9 = GameRoutine_6380e0(v45, &v39, v8);
  if (v44 == 1) {
    v9 = std___1_locale_Destroy_locale(v43);
  }
  v10 = v34;
  if (v34 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1(v9);
  }
  v11 = v38;
  if (v34 >= 0x17) {
    if ((v34 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v34 | 7) + 1;
    }
    v12 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v13, 16, 0);
    v40 = v10;
    v41 = v12;
    v39 = v13 | 1;
    goto LABEL_13;
  }
  LOBYTE(v39) = 2 * v34;
  v12 = (char*)&v39 + 1;
  if (v34 != 0) {
  LABEL_13:
    memmove(v12, v11, v10);
  }
  v14 = v38;
  v12[v10] = 0;
  if (v14 != v37 && v14 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v14);
  }
  if ((v39 & 1) != 0) {
    v16 = v41;
  }
  else {
    v16 = (char*)&v39 + 1;
  }
  LayoutAccessor_1562680(&GameData_21f7fb0, v16, 1.0);
  v17 = game_820d50(20);
  v19 = game_GameModeData_instance_ == 0 ||
        (v18 = game_GameVariableTable_Find(
             *(_QWORD*)(game_GameModeData_instance_ + 48), v17)) == 0 ||
        *(_DWORD*)(v18 + 32) == 0;
  LayoutAccessor_155e830(&GameData_21f7fb0, v19 & *(_BYTE*)(v1 + 264));
  ui_LayoutAccessor_SetPriority(&GameData_21f7fb0, 1310);
  v20 = (_QWORD*)(v1 + 168);
  if (*(_QWORD*)(v1 + 184) != 0) {
    v21 = *(_QWORD**)(v1 + 176);
    v22 = *(_QWORD**)(*(_QWORD*)(v1 + 168) + 8LL);
    *(_QWORD*)(*v21 + 8LL) = v22;
    *v22 = *v21;
    *(_QWORD*)(v1 + 184) = 0;
    if (v21 != v20) {
      v23 = fw_memory_g_heap_manager_ptr;
      do {
        v24 = (_QWORD*)v21[1];
        if (*(_QWORD*)(*(_QWORD*)v23 + 200LL) != 0) {
          v25 = 128;
        }
        else {
          v25 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v23 + v25, v21);
        v21 = v24;
      } while (v24 != v20);
    }
  }
  TutorialFile_980240((_QWORD*)(v1 + 168), 1, 64);
  *(_QWORD*)(v1 + 192) = *(_QWORD*)(v1 + 176);
  result = game_anonymous_ProcLoadingSeq_UpdateByCurrentTips_alt1(v1);
  v26 = *(unsigned __int8**)(v1 + 16);
  if (v26 != nullptr) {
    v27 = *v26;
    v28 = v27 > 0x10;
    v29 = (1 << v27) & 0x1CE00;
    if (!v28 && v29 != 0) {
      *(_WORD*)(v1 + 136) |= 0x80u;
    }
  }
  if ((v39 & 1) != 0 && v41 != nullptr) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v41);
  }
  return result;
}

void ProcLoadingSeq_9b84e0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  struct {
    __int64 v13;
    __int64 v14;
  } v13_;
  struct {
    _QWORD v15[6];
    int v16;
    char gap68_[4];
    __int64 v17;
    __int64 v18;
    __int64 v19;
  } v15_;

  v15_.v15[2] = 0x500000000000LL;
  memset(&v15_.v15[3], 0, 24);
  v15_.v17 = 0;
  v15_.v18 = 0;
  v15_.v19 = 0;
  v15_.v16 = 0;
  v15_.v15[0] = 0x800000018LL;
  v15_.v15[1] = 0x500000050LL;
  game_1366bd0((void*)(&v13_.v13), (__int64)"Layout/Common.arc",
               (__int64)"Common_Load", (__int64)v15_.v15);
  v0 = v13_.v13;
  v1 = v13_.v14;
  v13_.v13 = 0;
  v13_.v14 = 0;
  v2 = GameData_21f7fa8;
  GameData_21f7fa0 = v0;
  GameData_21f7fa8 = v1;
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  v3 = v13_.v14;
  if (v13_.v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13_.v14 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  v4 = GameData_21f7fa8;
  v13_.v13 = GameData_21f7fa0;
  v13_.v14 = GameData_21f7fa8;
  if (GameData_21f7fa8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(GameData_21f7fa8 + 8),
                              1u, memory_order_relaxed);
    ui_LayoutAccessor_Setup_155dda0_alt1(&GameData_21f7fb0, &v13_.v13);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak_alt1(v4);
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dda0_alt1(&GameData_21f7fb0, &v13_.v13);
  }
  v5 = v15_.v17;
  if (v15_.v17 != 0) {
    v6 = v15_.v18;
    v7 = fw_memory_g_heap_manager_ptr;
    if (v15_.v17 == v15_.v18) {
      goto LABEL_22;
    }
    v8 = v15_.v18;
    do {
      v9 = *(_BYTE*)(v8 - 24);
      v8 -= 24;
      if ((v9 & 1) != 0) {
        v10 = *(_QWORD*)(v6 - 8);
        if (v10 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
            v11 = 128;
          }
          else {
            v11 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v7 + v11, v10);
        }
      }
      v6 = v8;
    } while (v8 != v5);
    v15_.v18 = v5;
    v5 = v15_.v17;
    if (v15_.v17 != 0) {
    LABEL_22:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v7 + v12, v5);
    }
  }
}

void game_anonymous_ProcLoadingSeq_UpdateByCurrentTips(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  bool v8;
  unsigned __int64 v9;
  _BYTE* v10;
  _BYTE* v11;
  _BYTE* v12;
  const char** v13;
  const char* v14;
  __int64 v15;
  __int64* v16;
  unsigned __int64 v17;
  char* v18;
  unsigned __int64 v19;
  __int64 v20;
  _BYTE* v21;
  unsigned __int64 v22;
  char* v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _BYTE* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _BYTE* v37;
  const char* v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  char* v41;
  __int64 v42;
  char* v43;
  __int64 v44;
  char v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  unsigned __int64 v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  struct {
    __int64 v55;
    unsigned __int64 v56;
    char* v57;
  } v55_;
  struct {
    __int64 v58;
    unsigned __int64 v59;
    char* v60;
    char gap56_[8];
    _QWORD* v61;
  } v58_;
  struct {
    __int64 v62;
    unsigned __int64 v63;
    char* v64;
  } v62_;
  struct {
    __int64 v65;
    unsigned __int64 v66;
    char* v67;
  } v65_;

  if (a1[23] == 0) {
    *(_BYTE*)(a1[32] + 88LL) &= ~1u;
    v13 = (const char**)msg_MessageManager_empty_text__ptr;
    GameRoutine_60a020_alt1((__int64)(a1 + 25),
                            *msg_MessageManager_empty_text__ptr);
    v14 = *v13;
    v15 = (__int64)(a1 + 28);
  LABEL_69:
    GameRoutine_60a020_alt1(v15, v14);
    goto LABEL_70;
  }
  v2 = *(_QWORD*)(a1[24] + 16LL);
  v3 = TutorialFile_97ffe0(v2);
  v4 = TutorialFile_980100(v2);
  v5 = a1[32];
  if (v5 != 0) {
    if (v3 != nullptr) {
      v6 = v3[3];
      v7 = *(unsigned __int8*)(v6 + 560);
      v8 = (v7 & 1) == 0;
      if ((v7 & 1) != 0) {
        v9 = *(_QWORD*)(v6 + 568);
      }
      else {
        v9 = v7 >> 1;
      }
      v10 = *(_BYTE**)(v6 + 576);
      v11 = (_BYTE*)(v6 + 561);
      if (!v8) {
        v11 = v10;
      }
      if (v9 != 0) {
        v12 = v11;
      }
      else {
        v12 = nullptr;
      }
      Manager_136a920(ui_Manager_instance_ + 1264, v5, 0, 2u, v12);
      goto LABEL_16;
    }
    if (v4 != nullptr) {
      game_1841930(a1[32], (__int64)v4);
    LABEL_16:
      *(_BYTE*)(a1[32] + 88LL) |= 1u;
      goto LABEL_17;
    }
    *(_BYTE*)(v5 + 88) &= ~1u;
  }
LABEL_17:
  TutorialFile_97f5e0((void*)(&v58_.v58), v2);
  v16 = a1 + 25;
  if (a1 + 25 == &v58_.v58) {
    goto LABEL_29;
  }
  if ((*(_BYTE*)v16 & 1) != 0) {
    if ((v58_.v58 & 1) != 0) {
      v18 = v58_.v60;
    }
    else {
      v18 = (char*)&v58_.v58 + 1;
    }
    if ((v58_.v58 & 1) != 0) {
      v19 = v58_.v59;
    }
    else {
      v19 = (unsigned __int64)(unsigned __int8)v58_.v58 >> 1;
    }
    SpineModel_64dde0(v16, (__int64)v18, v19);
  LABEL_29:
    if ((v58_.v58 & 1) == 0) {
      goto LABEL_34;
    }
    goto LABEL_30;
  }
  if ((v58_.v58 & 1) != 0) {
    GameRoutine_64df20(v16, (__int64)v58_.v60, v58_.v59);
    if ((v58_.v58 & 1) == 0) {
      goto LABEL_34;
    }
  }
  else {
    v17 = v58_.v59;
    *v16 = v58_.v58;
    a1[26] = v17;
    a1[27] = v58_.v60;
    if ((v58_.v58 & 1) == 0) {
      goto LABEL_34;
    }
  }
LABEL_30:
  if (v58_.v60 != nullptr) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, (__int64)v58_.v60);
  }
LABEL_34:
  TutorialFile_97fb60((void*)(&v58_.v58), v2);
  v21 = a1 + 28;
  if (a1 + 28 == &v58_.v58) {
    goto LABEL_46;
  }
  if ((*v21 & 1) != 0) {
    if ((v58_.v58 & 1) != 0) {
      v23 = v58_.v60;
    }
    else {
      v23 = (char*)&v58_.v58 + 1;
    }
    if ((v58_.v58 & 1) != 0) {
      v24 = v58_.v59;
    }
    else {
      v24 = (unsigned __int64)(unsigned __int8)v58_.v58 >> 1;
    }
    SpineModel_64dde0(a1 + 28, (__int64)v23, v24);
  LABEL_46:
    if ((v58_.v58 & 1) == 0) {
      goto LABEL_51;
    }
    goto LABEL_47;
  }
  if ((v58_.v58 & 1) != 0) {
    GameRoutine_64df20(a1 + 28, (__int64)v58_.v60, v58_.v59);
    if ((v58_.v58 & 1) == 0) {
      goto LABEL_51;
    }
  }
  else {
    v22 = v58_.v59;
    *(_QWORD*)v21 = v58_.v58;
    a1[29] = v22;
    a1[30] = v58_.v60;
    if ((v58_.v58 & 1) == 0) {
      goto LABEL_51;
    }
  }
LABEL_47:
  if (v58_.v60 != nullptr) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, (__int64)v58_.v60);
  }
LABEL_51:
  BYTE3(v58_.v58) = 0;
  BYTE2(v65_.v65) = 0;
  LOBYTE(v58_.v58) = 4;
  LOWORD(v65_.v65) = 8194;
  *(_WORD*)((char*)&v58_.v58 + 1) = 2573;
  GameRoutine_112cc60_alt1((__int64)(a1 + 28), (unsigned __int8*)&v58_.v58,
                           (unsigned __int8*)&v65_.v65);
  if ((v65_.v65 & 1) != 0 && v65_.v67 != nullptr) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, (__int64)v65_.v67);
  }
  BYTE2(v58_.v58) = 0;
  LOWORD(v65_.v65) = 8194;
  BYTE2(v65_.v65) = 0;
  LOWORD(v58_.v58) = 3330;
  GameRoutine_112cc60_alt1((__int64)(a1 + 28), (unsigned __int8*)&v58_.v58,
                           (unsigned __int8*)&v65_.v65);
  if ((v65_.v65 & 1) != 0 && v65_.v67 != nullptr) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, (__int64)v65_.v67);
  }
  BYTE2(v58_.v58) = 0;
  BYTE2(v65_.v65) = 0;
  LOWORD(v58_.v58) = 2562;
  LOWORD(v65_.v65) = 8194;
  GameRoutine_112cc60_alt1((__int64)(a1 + 28), (unsigned __int8*)&v58_.v58,
                           (unsigned __int8*)&v65_.v65);
  if ((v65_.v65 & 1) != 0 && v65_.v67 != nullptr) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, (__int64)v65_.v67);
  }
  v29 = *(_BYTE**)(v2 + 72);
  if (v29 != nullptr && *v29 != 0) {
    v14 = *(const char**)(v2 + 48);
    v15 = (__int64)(a1 + 28);
    goto LABEL_69;
  }
LABEL_70:
  v30 = a1[31];
  if (v30 != 0) {
    if ((a1[25] & 1) != 0) {
      v31 = a1[27];
    }
    else {
      v31 = (__int64)a1 + 201;
    }
    GameRoutine_156c5d0(v30, v31, 0);
  }
  v65_.v65 = (__int64)"L_Tips_Info";
  v65_.v66 = 11;
  GameRoutine_9b8fe0((void*)(&v58_.v58), &GameData_21f7fb0, &v65_.v65);
  if (v58_.v59 != 0) {
    v32 = std___1___shared_weak_count_lock_alt1(v58_.v59);
    v33 = v58_.v58;
    if (v58_.v59 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v58_.v59);
    }
    if (v32 == 0 || v33 == 0) {
      if (v32 == 0) {
        return;
      }
      goto LABEL_114;
    }
    TextBoxEx_188aa00_alt1((void*)(&v58_.v58), v33, 0);
    if (v58_.v59 != 0) {
      v34 = std___1___shared_weak_count_lock_alt1(v58_.v59);
      v35 = v58_.v58;
      if (v58_.v59 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v58_.v59);
      }
      if (v34 != 0 && v35 != 0) {
        if (a1[23] != 0) {
          v36 = *(_QWORD*)(a1[24] + 16LL);
          v37 = *(_BYTE**)(v36 + 72);
          if (v37 != nullptr && *v37 != 0 &&
              (unsigned int)*(unsigned __int8*)(v36 + 32) - 1 > 2) {
            TextBoxEx_188ab20_alt1(v33, *(_QWORD*)(v36 + 48));
            v38 = *(const char**)(v36 + 72);
            v39 = strlen_alt1(v38);
            if (v39 >= 0xFFFFFFFFFFFFFFF7LL) {
              String_60a1d0();
            }
            v40 = v39;
            if (v39 >= 0x17) {
              if ((v39 | 7) == 0x17) {
                v44 = 26;
              }
              else {
                v44 = (v39 | 7) + 1;
              }
              v41 = (char*)fw_memory_HeapManager_Allocate(
                  fw_memory_g_heap_manager, v44, 16, 0);
              v65_.v66 = v40;
              v65_.v67 = v41;
              v65_.v65 = v44 | 1;
            }
            else {
              LOBYTE(v65_.v65) = 2 * v39;
              v41 = (char*)&v65_.v65 + 1;
              if (v39 == 0) {
                goto LABEL_122;
              }
            }
            memmove_alt1((__int64)v41, (__int64)v38, v40);
          LABEL_122:
            v41[v40] = 0;
            v45 = v65_.v65;
            if ((v65_.v65 & 1) != 0) {
              fw_text_String_CopyTerminated(&v62_.v62, (__int64)v65_.v67,
                                            v65_.v66);
            }
            else {
              v62_.v62 = v65_.v65;
              v62_.v63 = v65_.v66;
              v62_.v64 = v65_.v67;
            }
            if ((v62_.v62 & 1) != 0) {
              fw_text_String_CopyTerminated(&v55_.v55, (__int64)v62_.v64,
                                            v62_.v63);
            }
            else {
              v55_.v55 = v62_.v62;
              v55_.v56 = v62_.v63;
              v55_.v57 = v62_.v64;
            }
            v46 = fw_memory_g_heap_manager_ptr;
            v47 = (_QWORD*)fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
            v48 = v55_.v55;
            v49 = v55_.v56;
            v50 = v47;
            v55_.v55 = 0;
            v55_.v56 = 0;
            v58_.v61 = v47;
            *v47 = GameData_1fb3aa8;
            v47[1] = v48;
            v51 = (__int64)v55_.v57;
            v55_.v57 = nullptr;
            v47[2] = v49;
            v47[3] = v51;
            EmbeddedImage_1889d00(v35, (__int64)&v58_.v58);
            (*(void (**)(_QWORD*))(*v50 + 40LL))(v50);
            if ((v55_.v55 & 1) != 0 && v55_.v57 != nullptr) {
              v52 = 128;
              if (*(_QWORD*)(*(_QWORD*)v46 + 200LL) == 0) {
                v52 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v46 + v52,
                                                 (__int64)v55_.v57);
            }
            (*(void (**)(__int64, __int64))(*(_QWORD*)v35 + 40LL))(v35, 1);
            if ((v62_.v62 & 1) != 0 && v62_.v64 != nullptr) {
              v53 = 128;
              if (*(_QWORD*)(*(_QWORD*)v46 + 200LL) == 0) {
                v53 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v46 + v53,
                                                 (__int64)v62_.v64);
            }
            if ((v45 & 1) != 0 && v65_.v67 != nullptr) {
              v54 = 128;
              if (*(_QWORD*)(*(_QWORD*)v46 + 200LL) == 0) {
                v54 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v46 + v54,
                                                 (__int64)v65_.v67);
            }
            goto LABEL_112;
          }
          v42 = *(_QWORD*)(v33 + 80);
          if ((a1[28] & 1) != 0) {
            v43 = (char*)a1[30];
          }
          else {
            v43 = (char*)a1 + 225;
          }
          if (v42 == 0 || v43 == nullptr) {
            goto LABEL_111;
          }
        }
        else {
          v43 = msg_MessageManager_empty_text_;
          if (msg_MessageManager_empty_text_ == nullptr) {
            goto LABEL_111;
          }
          v42 = *(_QWORD*)(v33 + 80);
          if (v42 == 0) {
            goto LABEL_111;
          }
        }
        GameRoutine_156c5d0(v42, (__int64)v43, 0);
      LABEL_111:
        (*(void (**)(__int64, _QWORD))(*(_QWORD*)v35 + 40LL))(v35, 0);
      LABEL_112:
        if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
          std___1___shared_weak_count___release_weak_alt1(v34);
        }
        goto LABEL_114;
      }
      if (v34 != 0) {
        goto LABEL_112;
      }
    }
  LABEL_114:
    if (atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
      std___1___shared_weak_count___release_weak_alt1(v32);
    }
  }
}

__int64

game_anonymous_ProcLoadingSeq_UpdateByCurrentTips_closure_Invoke(__int64 a1,
                                                                 __int64* a2)
{
  __int64 v2;
  __int64 v3;

  v2 = *a2;
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 24);
  }
  else {
    v3 = a1 + 9;
  }
  return GameRoutine_136a920(ui_Manager_instance_ + 1264, v2, 0, 7, v3);
}

void ProcLoadingSeq_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;

  *(_QWORD*)a1 = game_anonymous_ProcLoadingSeq_vtable;
  *(_QWORD*)(a1 + 152) = GameData_1fb3bd8;
  if ((*(_BYTE*)(a1 + 224) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 240);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
    }
  }
  if ((*(_BYTE*)(a1 + 200) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 216);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  if (*(_QWORD*)(a1 + 184) != 0) {
    v6 = *(_QWORD**)(a1 + 176);
    v7 = *(_QWORD**)(*(_QWORD*)(a1 + 168) + 8LL);
    *(_QWORD*)(*v6 + 8LL) = v7;
    *v7 = *v6;
    *(_QWORD*)(a1 + 184) = 0;
    if (v6 != (_QWORD*)(a1 + 168)) {
      v8 = fw_memory_g_heap_manager_ptr;
      do {
        v9 = (_QWORD*)v6[1];
        if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
          v10 = 128;
        }
        else {
          v10 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v8 + v10, (__int64)v6);
        v6 = v9;
      } while (v9 != (_QWORD*)(a1 + 168));
    }
  }
  GameData_21f8018 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
}

void ProcLoadingSeq_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;

  *(_QWORD*)a1 = game_anonymous_ProcLoadingSeq_vtable;
  *(_QWORD*)(a1 + 152) = GameData_1fb3bd8;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 224) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 240);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
    }
  }
  if ((*(_BYTE*)(a1 + 200) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 216);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v2 + v6, v5);
    }
  }
  if (*(_QWORD*)(a1 + 184) != 0) {
    v7 = *(_QWORD**)(a1 + 176);
    v8 = *(_QWORD**)(*(_QWORD*)(a1 + 168) + 8LL);
    *(_QWORD*)(*v7 + 8LL) = v8;
    *v8 = *v7;
    *(_QWORD*)(a1 + 184) = 0;
    if (v7 != (_QWORD*)(a1 + 168)) {
      do {
        v9 = (_QWORD*)v7[1];
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v10 = 128;
        }
        else {
          v10 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v2 + v10, (__int64)v7);
        v7 = v9;
      } while (v9 != (_QWORD*)(a1 + 168));
    }
  }
  GameData_21f8018 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v11 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v2 + v11, a1);
}

_QWORD* ProcLoadingSeq_Unknown2(_QWORD* a1)
{
  _QWORD* v1;

  if (*((_BYTE*)a1 + 264) == 1 &&
      (*(_BYTE*)(game_g_game_setting + 952) & 1) != 0) {
    v1 = *(_QWORD**)(a1[24] + 8LL);
    a1[24] = v1;
    if (v1 == a1 + 21) {
      a1[24] = a1[22];
    }
    return (_QWORD*)GameRoutine_9b8890(a1);
  }
  return a1;
}

__int64 ProcLoadingSeq_Unknown4(__int64 a1, long double a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 result;

  if ((GameData_21c9699 & 1) == 0) {
    *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                              GameData_212c638 +
                                                          32LL) -
                                               8LL) +
                                    40LL) +
                         16LL) +
              48LL) = 0;
    nn_oe_SetCpuBoostMode(1);
    v3 = *snd_g_fileIndex_ptr[0];
    if (*(_DWORD*)(*snd_g_fileIndex_ptr[0] + 4736) != 1 &&
        (*(_BYTE*)(v3 + 4742) & 1) == 0) {
      *(_DWORD*)(v3 + 4736) = 1;
      nn_os_SignalEvent(v3 + 4144);
    }
    GameData_21c9699 = 1;
  }
  *(_QWORD*)&a2 = 0;
  GameRoutine_809fd0(4, a2);
  v4 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v5 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 240);
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 240) = v5 + 1;
    if (v5 == 0) {
      (**(void (***)(__int64))(v4 + 232))(v4 + 232);
    }
    if (*(float*)(v4 + 224) > 0x0.0p+0f) {
      *(_DWORD*)(v4 + 224) = 0;
    }
  }
  v6 = GameData_21f61c8++;
  if (v6 == 0) {
    (*(void (**)(__int64*))GameData_21f61c0)(&GameData_21f61c0);
  }
  v7 = *(_QWORD*)GameData_2130f48;
  if (*(_QWORD*)GameData_2130f48 != 0) {
    v8 = *(_DWORD*)(v7 + 1736);
    *(_DWORD*)(v7 + 1736) = v8 + 1;
    if (v8 == 0) {
      (**(void (***)(__int64))(v7 + 1728))(v7 + 1728);
    }
  }
  v9 = ui_LayoutAccessor_FindPane(&GameData_21f7fb0, (__int64)"T_Tips_Title");
  if (v9 != 0) {
    v9 = __dynamic_cast(v9, GameData_212d670[0], GameData_212d690, 0);
  }
  *(_QWORD*)(a1 + 248) = v9;
  result = ui_LayoutAccessor_FindPane(&GameData_21f7fb0, (__int64)"Tips_Icon");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
  }
  *(_QWORD*)(a1 + 256) = result;
  return result;
}

__int64 ProcLoadingSeq_Unknown5()
{

#pragma clang fp contract(off)
  __int64 result;
  __int64 v1;
  __int64 v2;
  char v3;
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;

  result = LayoutAccessor_155e830_alt1((__int64)&GameData_21f7fb0, 0);
  if (GameData_21c9699 == 1) {
    result = nn_oe_SetCpuBoostMode(0);
    v1 = snd_g_fileIndex;
    if (*(_DWORD*)(snd_g_fileIndex + 4736) != 0) {
      *(_DWORD*)(snd_g_fileIndex + 4736) = 0;
      result = nn_os_ClearEvent(v1 + 4144);
    }
    v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL);
    GameData_21c9699 = 0;
    *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v2 + 40) + 16LL) + 48LL) = 1;
  }
  if (game_ProcFadeView_instance_ != 0) {
    v3 = *(_BYTE*)(game_ProcFadeView_instance_ + 480);
    *(_BYTE*)(game_ProcFadeView_instance_ + 480) = 4;
    result = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      result = game_809ba0(game_ProcFadeView_instance_, 0x0.0p+0f);
      if (game_ProcFadeView_instance_ != 0) {
        *(_BYTE*)(game_ProcFadeView_instance_ + 480) = v3;
      }
    }
  }
  v4 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v5 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 240) - 1;
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 240) = v5;
    if (v5 == 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)(v4 + 232) + 8LL))(v4 + 232);
    }
    if (*(float*)(v4 + 224) > 0x0.0p+0f) {
      *(_DWORD*)(v4 + 224) = 0;
    }
  }
  v6 = GameData_2241720;
  if (GameData_2241720 != 0) {
    v7 = *(_DWORD*)(GameData_2241720 + 1736) - 1;
    *(_DWORD*)(GameData_2241720 + 1736) = v7;
    if (v7 == 0) {
      result =
          (*(__int64 (**)(__int64))(*(_QWORD*)(v6 + 1728) + 8LL))(v6 + 1728);
    }
  }
  if (--GameData_21f61c8 == 0) {
    return (*(__int64 (**)(__int64))(GameData_21f61c0 + 8))(
        (__int64)&GameData_21f61c0);
  }
  return result;
}

__int64 ProcLoadingSeq_9b9b60()
{
  GameData_21f7e60 = 5;
  GameData_21f7e20 = 18;
  GameData_21f7ee0 = 18;
  GameData_21f7e48 = 0;
  GameData_21f7e50 = 0;
  GameData_21f7e58 = 0;
  GameData_21f7e28 = 0;
  GameData_21f7e30 = 0;
  GameData_21f7e38 = 0;
  GameData_21f7e40 = 0;
  GameData_21f7e90 = 4;
  GameData_21f7ee8 = 0;
  GameData_21f7ef0 = 24;
  GameData_21f7e88 = 0;
  GameData_21f7e68 = 0;
  GameData_21f7e70 = 0;
  GameData_21f7e78 = 0;
  GameData_21f7e80 = 0;
  GameData_21f7e98 = 0;
  GameData_21f7ea8 = 0;
  GameData_21f7eb0 = (__int64)GameRoutine_9b80e0;
  GameData_21f7eb8 = 0;
  GameData_21f7ec0 = 0;
  GameData_21f7ea0 = 14;
  GameData_21f7f20 = 14;
  GameData_21f7ec8 = 0;
  GameData_21f7ed0 = 0;
  GameData_21f7ed8 = 0;
  GameData_21f7ef8 = 1;
  GameData_21f7f00 = 0;
  GameData_21f7f08 = 0;
  GameData_21f7f10 = 0;
  GameData_21f7f18 = 0;
  GameData_21f7f38 = 1;
  GameData_21f7f28 = 0;
  GameData_21f7f30 = 16;
  GameData_21f7f40 = 0;
  GameData_21f7f48 = 0;
  GameData_21f7f50 = 0;
  GameData_21f7f58 = 0;
  GameData_21f7f60 = 0;
  GameData_21f7f88 = 0;
  GameData_21f7f90 = 0;
  GameData_21f7f98 = 0;
  GameData_21f7f80 = 0;
  GameData_21f7f70 = 0;
  GameData_21f7f78 = 0;
  GameData_21f7f68 = 0;
  GameRoutine_2b0();
  GameData_21f7fd0 = 0;
  GameData_21f7fb0 = 0;
  GameData_21f7fb8 = 0;
  GameData_21f7fd8 = 0;
  GameData_21f7fe0 = 0;
  GameData_21f7fe8 = 0;
  GameData_21f7ff0 = 0;
  GameData_21f7ff8 = 0;
  GameData_21f7fc0 = 0;
  GameData_21f7fc8 = (__int64)&GameData_21f7fd0;
  GameData_21f8000 = 1065353216;
  GameData_21f8008 = 0;
  GameData_21f8010 = 0;
  return GameRoutine_2b0();
}

#pragma GCC visibility pop
