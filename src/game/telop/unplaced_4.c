#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_13fa520(PSEUDO_X8, __int64*,
                                                    _QWORD*);
__attribute__((swiftcall)) void GameRoutine_9b8fe0(PSEUDO_X8, __int64*,
                                                   const char**);
__attribute__((swiftcall)) void TextBoxEx_188aa00(PSEUDO_X8, __int64, int);
__int64* GameRoutine_1760e40(__int64, unsigned int);
__int64* GameRoutine_6f4cd0(__int64* result, __int64, __int64,
                            unsigned __int64);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 Alignment_56b600(__int64 result);
__int64 ControlCreator_13633c0(__int64 result);
__int64 GameHr_67ed20(_QWORD*);
__int64 GameRoutine_18899f0(__int64);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 InfoTitle_18b9480(__int64, unsigned int*, _QWORD*, _DWORD*);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_17356e0(__int64*, __int64);
__int64 game_ProcInst_Register(__int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
bool game_97e570(unsigned __int8*, __int64*, const char*, const char*);
char* GameHr_6ed030(__int64);
const char* game_HashString32(const char* result);
extern _UNKNOWN* GameData_212da30;
extern _UNKNOWN* GameData_2130f68;
extern _UNKNOWN GameData_2170810;
extern __int64 (*game_telop_TelopClassTrialResultTelop_vtable[])();
extern __int64 (*game_telop_TelopExploreResult_vtable[])();
extern __int64 (*game_telop_TelopResult_vtable[])();
extern __int64* GameData_2130240[8];
extern __int64* GameData_2130f98[4];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212c608[2];
extern __int64 GameData_2131678;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 msg_MessageManager_instance_;
extern __int64 ui_Manager_instance_;
extern char** msg_MessageManager_empty_text__ptr;
unsigned __int64 strlen(const char*);
void* game_97b2f0(__int64);
void GameHr_1374b10(__int64, int);
void GameHr_1378190(__int64, const char*);
void GameHr_a51e10(__int64, unsigned int, int, int);
void InfoTitle_18b85c0(__int64);
void Se_80e330(__int64, const char*);
void TextBoxEx_188ab20(__int64, const char*);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_6706a0();
void __attribute__((noreturn)) GameRoutine_6e5c60();
void collision_6704c0(__int64*, unsigned __int64);
void game_gameui_1592340(__int64*, __int64, int);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void ui_text_190a0c0(float*, __int64, float*, _QWORD*, __int64);
__int64 game_telop_1380220(__int64 a1, char a2);
__int64 game_telop_1762890(__int64 a1, int a2);
__int64 game_telop_1762ce0(__int64 a1, __int64 a2, int a3, const char* a4);
void game_telop_17633b0(__int64* a1, const char* a2, __int64 a3);
void game_telop_1768ea0(__int64 a1, __int64* a2);
__int64 game_telop_1769a80(__int64 a1, __int64** a2, int a3, __int64 a4);

__int64 game_telop_1380220(__int64 a1, char a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64* v8;
  __int64 v9;
  _BYTE* v10;
  char v11;
  char* v12;
  char* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  bool v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  const char* v30;

  if (a1 == 0) {
    return 0;
  }
  v4 = fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      832, 16, 0);
  memset(v5 + 144, 0, 0x2B0u);
  v6 = GameData_212c608[0];
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_WORD*)(v5 + 136) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = "NULL";
  *(_QWORD*)(v5 + 32) = 0;
  v7 = (_QWORD*)(v5 + 32);
  *(_QWORD*)(v5 + 138) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)v5 = v6 + 16;
  *(_QWORD*)(v5 + 8) = 0;
  game_ProcInst_Register(v5);
  *(_QWORD*)(v5 + 200) = 0;
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 160) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_QWORD*)(v5 + 176) = 0;
  *(_QWORD*)(v5 + 208) = 0;
  *(_QWORD*)(v5 + 216) = 0;
  *(_QWORD*)(v5 + 224) = 0;
  *(_QWORD*)(v5 + 232) = 0;
  *(_QWORD*)(v5 + 240) = 0;
  *(_QWORD*)(v5 + 256) = 0;
  *(_QWORD*)(v5 + 264) = 0;
  *(_QWORD*)(v5 + 272) = 0;
  *(_QWORD*)(v5 + 280) = 0;
  *(_QWORD*)(v5 + 288) = 0;
  *(_QWORD*)(v5 + 296) = 0;
  *(_DWORD*)(v5 + 320) = 3;
  *(_QWORD*)(v5 + 184) = 0;
  *(_QWORD*)(v5 + 192) = v5 + 200;
  *(_QWORD*)(v5 + 304) = 0;
  *(_QWORD*)(v5 + 312) = 0;
  *(_DWORD*)(v5 + 332) = 0;
  *(_BYTE*)(v5 + 338) = 0;
  *(_QWORD*)(v5 + 344) = 0;
  *(_QWORD*)(v5 + 352) = 0;
  *(_QWORD*)(v5 + 360) = 0;
  *(_QWORD*)(v5 + 368) = 0;
  *(_QWORD*)(v5 + 376) = 0;
  *(_QWORD*)(v5 + 384) = 0;
  *(_QWORD*)(v5 + 392) = 0;
  *(_QWORD*)(v5 + 400) = 0;
  *(_QWORD*)(v5 + 408) = 0;
  *(_QWORD*)(v5 + 416) = 0;
  *(_QWORD*)(v5 + 324) = 0;
  *(_DWORD*)(v5 + 248) = 1065353216;
  *(_QWORD*)(v5 + 424) = 0;
  *(_QWORD*)(v5 + 472) = 0;
  *(_QWORD*)(v5 + 480) = 0;
  *(_QWORD*)(v5 + 440) = 0;
  *(_QWORD*)(v5 + 448) = 0;
  *(_QWORD*)(v5 + 504) = 0;
  *(_QWORD*)(v5 + 512) = 0;
  *(_QWORD*)(v5 + 488) = 0;
  *(_QWORD*)(v5 + 496) = 0;
  *(_DWORD*)(v5 + 520) = 1065353216;
  *(_QWORD*)(v5 + 528) = 0;
  *(_QWORD*)(v5 + 536) = 0;
  *(_QWORD*)(v5 + 544) = 0;
  *(_WORD*)(v5 + 336) = 1;
  *(_DWORD*)(v5 + 552) = 1065353216;
  *(_WORD*)(v5 + 560) = 0;
  *(_WORD*)(v5 + 584) = 0;
  *(_BYTE*)(v5 + 608) = 0;
  *(_QWORD*)(v5 + 656) = 0;
  *(_QWORD*)(v5 + 648) = 0;
  *(_QWORD*)(v5 + 632) = 0;
  *(_QWORD*)(v5 + 624) = 0;
  *(_QWORD*)(v5 + 616) = 0;
  *(_QWORD*)(v5 + 688) = 0;
  *(_DWORD*)(v5 + 432) = 0x2000;
  *(_QWORD*)(v5 + 680) = 0;
  *(_QWORD*)(v5 + 672) = 0;
  *(_QWORD*)(v5 + 664) = 0;
  *(_DWORD*)(v5 + 696) = 1065353216;
  *(_QWORD*)(v5 + 720) = 0;
  *(_QWORD*)(v5 + 712) = 0;
  *(_QWORD*)(v5 + 704) = 0;
  *(_DWORD*)(v5 + 728) = 1065353216;
  *(_WORD*)(v5 + 736) = 0;
  *(_QWORD*)(v5 + 456) = 0;
  *(_QWORD*)(v5 + 464) = v5 + 472;
  *(_WORD*)(v5 + 760) = 0;
  *(_BYTE*)(v5 + 784) = 0;
  *(_QWORD*)(v5 + 792) = 0;
  *(_BYTE*)(v5 + 800) = 0;
  *(_QWORD*)(v5 + 640) = v5 + 648;
  v8 = GameData_2130240[0] + 2;
  *(_BYTE*)(v5 + 816) = 0;
  *(_BYTE*)(v5 + 820) = 0;
  *(_BYTE*)(v5 + 824) = 0;
  *(_QWORD*)(v5 + 808) = v8;
  *(_QWORD*)v5 = game_telop_TelopClassTrialResultTelop_vtable;
  v9 = *(_QWORD*)(a1 + 40);
  if (v9 != 0) {
    *(_QWORD*)(v9 + 48) = v5;
    *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v5;
  *(_QWORD*)(v5 + 24) = "TelopClassTrialResultTelop";
  *(_QWORD*)(v5 + 32) = a1;
  *(_DWORD*)(v5 + 140) =
      (unsigned int)game_HashString32("TelopClassTrialResultTelop");
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 24;
  *(_QWORD*)(v5 + 80) = 1;
  *(_QWORD*)(v5 + 8) = &GameData_2170810;
  *(_QWORD*)(v5 + 16) = &GameData_2170810;
  (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5) & 1) != 0 &&
      (*(_WORD*)(v5 + 136) & 0x100) == 0) {
    *(_WORD*)(v5 + 136) |= 0x100u;
  }
  v10 = (_BYTE*)*v7;
  v11 = *(_BYTE*)(*v7 + 138LL);
  if (v11 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v10 + 64LL))(*v7);
    v11 = v10[138];
  }
  v10[138] = v11 + 1;
  *(_WORD*)(v5 + 136) |= 2u;
  if ((*(_BYTE*)(v5 + 272) & 1) != 0) {
    *(_QWORD*)(v5 + 280) = 14;
    v12 = *(char**)(v5 + 288);
  }
  else {
    *(_BYTE*)(v5 + 272) = 28;
    v12 = (char*)(v5 + 273);
  }
  strcpy(v12, "Layout/Hub.arc");
  if ((*(_BYTE*)(v5 + 296) & 1) != 0) {
    *(_QWORD*)(v5 + 304) = 20;
    v13 = *(char**)(v5 + 312);
  }
  else {
    *(_BYTE*)(v5 + 296) = 40;
    v13 = (char*)(v5 + 297);
  }
  strcpy(v13, "Hub_TlpTrailDecision");
  if (*(_DWORD*)(v5 + 320) == 2) {
    v14 = (_QWORD*)game_ProcGameSkipView_instance_;
    if (game_ProcGameSkipView_instance_ != 0) {
      v16 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
      v15 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
      v18 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
      v17 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
      v19 = v17 == v18;
      v20 = v15 - 1 + v16;
      v21 = v20 >> 7;
      v22 = v20 & 0x7F;
      v23 = 16 * (v17 - v18) - 1;
      v24 = *(_QWORD*)(v18 + 8 * v21);
      if (v19) {
        v23 = 0;
      }
      v25 = v24 + 32 * v22;
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
          *(_DWORD*)v25 & 0xFFFFFFFD |
          (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
      v14[21] = *(_QWORD*)(v25 + 24);
      v26 = *(_QWORD*)(v25 + 16);
      v14[27] = v15 - 1;
      v14[20] = v26;
      if ((unsigned __int64)(v23 - (v15 + v16) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
        v27 = *(_QWORD*)(v17 - 8);
        if (v27 != 0) {
          v28 = 128;
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
            v28 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v28, v27);
          v17 = v14[24];
        }
        v14[24] = v17 - 8;
      }
    }
  }
  *(_DWORD*)(v5 + 320) = 0;
  v29 = a2 & 1;
  if (v29 != 0) {
    v30 = "FF_ClassChange_Success";
  }
  else {
    v30 = "FF_ClassChange_Failure";
  }
  Se_80e330(v5, v30);
  Se_80e330(v5, "SE_SYS_Telop_ClasstrialResult_In");
  GameHr_1378190(v5, "SE_SYS_Telop_ClasstrialResult_Out");
  *(_BYTE*)(v5 + 824) = v29;
  return v5;
}

__int64 game_telop_1762890(__int64 a1, int a2)
{
  __int64* v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  int v10;
  __int64 v11;
  const char* v12[2];
  struct {
    _QWORD* v13;
    __int64 v14;
  } v13_;

  v3 = GameRoutine_1760e40(a1, 0);
  v12[0] = "L_Txt";
  v12[1] = (_BYTE*)(((_WORD*)0x4LL) + 1);
  GameRoutine_9b8fe0((void*)(&v13_.v13), v3, v12);
  result = v13_.v14;
  if (v13_.v14 != 0) {
    v5 = std___1___shared_weak_count_lock(v13_.v14);
    v6 = (__int64)v13_.v13;
    result = v13_.v14;
    if (v13_.v14 != 0) {
      result = std___1___shared_weak_count___release_weak(v13_.v14);
    }
    if (v5 == 0 || v6 == 0) {
      if (v5 == 0) {
        return result;
      }
      goto LABEL_22;
    }
    GameHr_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0, a2, 2);
    TextBoxEx_188ab20(v6, "MID_Sys_Result_Msg_GetGold");
    TextBoxEx_188aa00((void*)(&v13_.v13), v6, 0);
    result = v13_.v14;
    if (v13_.v14 != 0) {
      v7 = std___1___shared_weak_count_lock(v13_.v14);
      v8 = v13_.v13;
      result = v13_.v14;
      if (v13_.v14 != 0) {
        result = std___1___shared_weak_count___release_weak(v13_.v14);
      }
      if (v7 != 0 && v8 != nullptr) {
        v9 = v8[10];
        if (v9 != 0) {
          v10 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
          v11 =
              (*(__int64 (**)(_QWORD, _QWORD))(*(_QWORD*)v9 + 88LL))(v8[10], 0);
          if (v11 != 0) {
            *(_DWORD*)(v11 + 12) = v10;
          }
          if ((Manager_136a920(ui_Manager_instance_ + 1264, v9, 0, 7u,
                               "IconStock_Gold") &
               1) != 0) {
            GameRoutine_18899f0((__int64)v8);
          }
        }
        result = (*(__int64 (**)(_QWORD*, __int64))(*v8 + 40LL))(v8, 1);
        goto LABEL_20;
      }
      if (v7 != 0) {
      LABEL_20:
        if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          result = std___1___shared_weak_count___release_weak(v7);
        }
      }
    }
  LABEL_22:
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      return std___1___shared_weak_count___release_weak(v5);
    }
  }
  return result;
}

__int64 game_telop_1762ce0(__int64 a1, __int64 a2, int a3, const char* a4)
{

#pragma clang fp contract(off)
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  const char* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  const char* v17;
  char v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  const char* v24[2];
  struct {
    __int64 v25;
    __int64 v26;
  } v25_;
  float v27;

  v7 = GameRoutine_1760e40(a1, 0x13u);
  v24[0] = "L_Txt";
  v24[1] = (_BYTE*)(((_WORD*)0x4LL) + 1);
  GameRoutine_9b8fe0((void*)(&v25_.v25), v7, v24);
  if (v25_.v26 != 0) {
    v8 = std___1___shared_weak_count_lock(v25_.v26);
    v9 = v25_.v25;
    if (v25_.v26 != 0) {
      std___1___shared_weak_count___release_weak(v25_.v26);
    }
    if (v8 != 0 && v9 != 0) {
      v10 = *msg_MessageManager_instance__ptr[0];
      v11 = GameHr_6ed030(a2);
      if (v11 != nullptr) {
        v12 = v11;
      }
      else {
        v12 = *msg_MessageManager_empty_text__ptr;
      }
      GameRoutine_60a020(v10 + 14704, v12);
      TextBoxEx_188ab20(v9, a4);
    }
    else if (v8 == 0) {
      goto LABEL_13;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v8);
    }
  }
LABEL_13:
  v13 = LayoutAccessor_155fbe0(v7, "L_InfoDetail");
  game_gameui_1592340(v13, a2, a3);
  LayoutAccessor_1562cf0((__int64)v7, "ArrowOff");
  v14 = ui_LayoutAccessor_FindTextBox(v7, (__int64)"L_Txt/T_Txt");
  if (v14 != 0) {
    v15 = v14;
    v16 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v7, (__int64)"L_Txt/T_Txt");
    if (v16 != nullptr) {
      ui_text_190a0c0((float*)&v25_.v25, (__int64)v24, &v27, v16, v16[27]);
      v17 = v24[0];
    }
    else {
      v17 = nullptr;
    }
    v18 = *(_BYTE*)(v15 + 88);
    *(_QWORD*)(v15 + 80) = v17;
    *(_BYTE*)(v15 + 88) = v18 | 0x10;
  }
  v19 = ui_LayoutAccessor_FindAlignment(v7, (__int64)"A_Contents");
  if (v19 != 0) {
    Alignment_56b600(v19);
    v20 = v7[1];
    if (v20 != 0) {
      v21 = std___1___shared_weak_count_lock(v20);
      if (v21 != 0) {
        v22 = v21;
        if (*v7 != 0) {
          ControlCreator_13633c0(*v7);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
          std___1___shared_weak_count___release_weak(v22);
        }
      }
    }
  }
  return game_17356e0(v7, (__int64)"A_Contents");
}

void game_telop_17633b0(__int64* a1, const char* a2, __int64 a3)
{
  __int64 v5;
  __int64 v6;
  int v7;
  _QWORD v8[2];
  struct {
    __int64 v9;
    __int64 v10;
  } v9_;

  v8[0] = a2;
  v8[1] = strlen(a2);
  GameRoutine_13fa520((void*)(&v9_.v9), a1, v8);
  if (v9_.v10 != 0) {
    v5 = std___1___shared_weak_count_lock(v9_.v10);
    v6 = v9_.v9;
    if (v9_.v10 != 0) {
      std___1___shared_weak_count___release_weak(v9_.v10);
    }
    if (v5 != 0 && v6 != 0) {
      if (a3 != 0) {
        v7 = *(_WORD*)(a3 + 16) & 0xFFF;
      }
      else {
        v7 = 0;
      }
      LODWORD(v8[0]) = v7;
      LODWORD(v9_.v9) = 0;
      InfoTitle_18b9480(v6, (unsigned int*)v8, nullptr, &v9_.v9);
      InfoTitle_18b85c0(v6);
    }
    else if (v5 == 0) {
      return;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak(v5);
    }
  }
}

void game_telop_1768ea0(__int64 a1, __int64* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  const char** v9;
  const char* v10;
  const char* v11;
  const char* v12;
  const char* v13[2];
  struct {
    __int64 v14;
    __int64 v15;
  } v14_;

  v13[0] = "L_Txt";
  v13[1] = (_BYTE*)(((_WORD*)0x4LL) + 1);
  GameRoutine_9b8fe0((void*)(&v14_.v14), a2, v13);
  if (v14_.v15 != 0) {
    v3 = std___1___shared_weak_count_lock(v14_.v15);
    v4 = v14_.v14;
    if (v14_.v15 != 0) {
      std___1___shared_weak_count___release_weak(v14_.v15);
    }
    if (v3 == 0 || v4 == 0) {
      if (v3 == 0) {
        return;
      }
    }
    else {
      v6 = *(_QWORD*)(a1 + 1168);
      v7 = msg_MessageManager_instance_;
      if (*(_BYTE*)(v6 + 2136) != 0) {
        v8 = (__int64)game_97b2f0(v6 + 2104);
      }
      else {
        v8 = GameHr_67ed20(*(_QWORD**)(v6 + 392));
      }
      v9 = (const char**)msg_MessageManager_empty_text__ptr;
      if (v8 != 0) {
        v10 = (const char*)v8;
      }
      else {
        v10 = *msg_MessageManager_empty_text__ptr;
      }
      GameRoutine_60a020(v7 + 14704, v10);
      if ((*(_BYTE*)(a1 + 1176) & 1) != 0) {
        v11 = *(const char**)(a1 + 1192);
      }
      else {
        v11 = (const char*)(a1 + 1177);
      }
      if (v11 != nullptr) {
        v12 = v11;
      }
      else {
        v12 = *v9;
      }
      GameRoutine_60a020(msg_MessageManager_instance_ + 14728, v12);
      TextBoxEx_188ab20(v4, "MID_Sys_Result_Msg_Stable_GetSkill1");
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
  }
}

__int64 game_telop_1769a80(__int64 a1, __int64** a2, int a3, __int64 a4)
{
  __int64 v4;
  __int64* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  void* v17;
  _BYTE* v18;
  char v19;
  char* v20;
  char* v21;
  __int64* v22;
  __int64* v23;
  char* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  int v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  const char* v56;
  __int64 v57;
  int v60;
  struct {
    __int64 v61;
    __int64 v62;
  } v61_;
  __int64 v63[3];

  v4 = 0;
  if (a1 == 0 ||
      (int)((unsigned __int64)((char*)a2[1] - (char*)*a2) >> 3) < 1) {
    return v4;
  }
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1224, 16, 0);
  memset(v4 + 144, 0, 0x438u);
  v9 = GameData_212c608[0];
  *(_QWORD*)(v4 + 88) = 0;
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0;
  *(_QWORD*)(v4 + 112) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_WORD*)(v4 + 136) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = "NULL";
  *(_QWORD*)(v4 + 32) = 0;
  v10 = (_QWORD*)(v4 + 32);
  *(_QWORD*)(v4 + 138) = 0;
  *(_QWORD*)(v4 + 144) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)v4 = v9 + 16;
  *(_QWORD*)(v4 + 8) = 0;
  game_ProcInst_Register(v4);
  *(_QWORD*)(v4 + 200) = 0;
  *(_QWORD*)(v4 + 152) = 0;
  *(_QWORD*)(v4 + 160) = 0;
  *(_QWORD*)(v4 + 168) = 0;
  *(_QWORD*)(v4 + 176) = 0;
  *(_QWORD*)(v4 + 208) = 0;
  *(_QWORD*)(v4 + 216) = 0;
  *(_QWORD*)(v4 + 224) = 0;
  *(_QWORD*)(v4 + 232) = 0;
  *(_QWORD*)(v4 + 184) = 0;
  *(_QWORD*)(v4 + 192) = v4 + 200;
  *(_QWORD*)(v4 + 240) = 0;
  *(_DWORD*)(v4 + 248) = 1065353216;
  *(_QWORD*)(v4 + 256) = 0;
  *(_QWORD*)(v4 + 264) = 0;
  *(_QWORD*)(v4 + 272) = 0;
  *(_QWORD*)(v4 + 280) = 0;
  *(_QWORD*)(v4 + 288) = 0;
  *(_QWORD*)(v4 + 296) = 0;
  *(_QWORD*)(v4 + 304) = 0;
  *(_QWORD*)(v4 + 312) = 0;
  *(_DWORD*)(v4 + 332) = 0;
  *(_BYTE*)(v4 + 338) = 0;
  *(_QWORD*)(v4 + 344) = 0;
  *(_QWORD*)(v4 + 352) = 0;
  *(_QWORD*)(v4 + 360) = 0;
  *(_QWORD*)(v4 + 368) = 0;
  *(_DWORD*)(v4 + 320) = 3;
  *(_QWORD*)(v4 + 376) = 0;
  *(_QWORD*)(v4 + 384) = 0;
  *(_QWORD*)(v4 + 392) = 0;
  *(_QWORD*)(v4 + 400) = 0;
  *(_QWORD*)(v4 + 408) = 0;
  *(_QWORD*)(v4 + 416) = 0;
  *(_QWORD*)(v4 + 424) = 0;
  *(_DWORD*)(v4 + 432) = 0x2000;
  *(_QWORD*)(v4 + 472) = 0;
  *(_QWORD*)(v4 + 480) = 0;
  *(_QWORD*)(v4 + 440) = 0;
  *(_QWORD*)(v4 + 448) = 0;
  *(_QWORD*)(v4 + 504) = 0;
  *(_QWORD*)(v4 + 512) = 0;
  *(_QWORD*)(v4 + 488) = 0;
  *(_QWORD*)(v4 + 496) = 0;
  *(_DWORD*)(v4 + 520) = 1065353216;
  *(_QWORD*)(v4 + 324) = 0;
  *(_QWORD*)(v4 + 528) = 0;
  *(_QWORD*)(v4 + 536) = 0;
  *(_QWORD*)(v4 + 544) = 0;
  *(_DWORD*)(v4 + 552) = 1065353216;
  *(_WORD*)(v4 + 560) = 0;
  *(_WORD*)(v4 + 584) = 0;
  *(_BYTE*)(v4 + 608) = 0;
  *(_QWORD*)(v4 + 656) = 0;
  *(_QWORD*)(v4 + 648) = 0;
  *(_QWORD*)(v4 + 632) = 0;
  *(_WORD*)(v4 + 336) = 1;
  *(_QWORD*)(v4 + 624) = 0;
  *(_QWORD*)(v4 + 616) = 0;
  *(_QWORD*)(v4 + 688) = 0;
  *(_QWORD*)(v4 + 680) = 0;
  *(_QWORD*)(v4 + 672) = 0;
  *(_QWORD*)(v4 + 664) = 0;
  *(_DWORD*)(v4 + 696) = 1065353216;
  *(_QWORD*)(v4 + 720) = 0;
  *(_QWORD*)(v4 + 712) = 0;
  *(_QWORD*)(v4 + 704) = 0;
  *(_QWORD*)(v4 + 456) = 0;
  *(_QWORD*)(v4 + 464) = v4 + 472;
  *(_DWORD*)(v4 + 728) = 1065353216;
  *(_WORD*)(v4 + 736) = 0;
  *(_WORD*)(v4 + 760) = 0;
  *(_BYTE*)(v4 + 784) = 0;
  *(_QWORD*)(v4 + 792) = 0;
  *(_BYTE*)(v4 + 800) = 0;
  *(_QWORD*)(v4 + 640) = v4 + 648;
  v11 = *v8;
  v12 = GameData_2130240[0] + 2;
  *(_BYTE*)(v4 + 816) = 0;
  *(_BYTE*)(v4 + 820) = 0;
  *(_WORD*)(v4 + 824) = 0;
  *(_QWORD*)(v4 + 808) = v12;
  *(_QWORD*)v4 = game_telop_TelopResult_vtable;
  v13 = fw_memory_HeapManager_Allocate(v11, 296, 16, 0);
  *(_DWORD*)(v13 + 48) = 0x2000;
  v14 = GameData_2131678;
  *(_WORD*)(v13 + 108) = 256;
  *(_QWORD*)(v13 + 8) = 0;
  *(_QWORD*)(v13 + 16) = 0;
  *(_DWORD*)(v13 + 32) = 0;
  *(_QWORD*)(v13 + 40) = 0;
  *(_DWORD*)(v13 + 104) = 0;
  *(_QWORD*)(v13 + 56) = 0;
  *(_QWORD*)(v13 + 64) = 0;
  *(_QWORD*)(v13 + 72) = 0;
  *(_WORD*)(v13 + 80) = 0;
  *(_DWORD*)(v13 + 112) = -1082130432;
  *(_WORD*)(v13 + 116) = 0;
  *(_WORD*)(v13 + 136) = 0;
  *(_BYTE*)(v13 + 160) = 0;
  *(_BYTE*)(v13 + 288) = 0;
  *(_QWORD*)(v13 + 272) = 0;
  *(_QWORD*)(v13 + 280) = 0;
  *(_QWORD*)(v13 + 256) = 0;
  *(_QWORD*)(v13 + 264) = 0;
  *(_QWORD*)(v13 + 240) = 0;
  *(_QWORD*)(v13 + 248) = 0;
  *(_QWORD*)(v13 + 224) = 0;
  *(_QWORD*)(v13 + 232) = 0;
  *(_QWORD*)(v13 + 208) = 0;
  *(_QWORD*)(v13 + 216) = 0;
  *(_QWORD*)(v13 + 192) = 0;
  *(_QWORD*)(v13 + 200) = 0;
  *(_QWORD*)(v13 + 176) = 0;
  *(_QWORD*)(v13 + 184) = 0;
  *(_QWORD*)(v13 + 168) = 0;
  *(_QWORD*)(v13 + 120) = 0;
  *(_DWORD*)(v13 + 127) = 0;
  *(_QWORD*)(v4 + 856) = v13;
  *(_WORD*)(v4 + 960) = 0;
  *(_QWORD*)(v4 + 1016) = 0;
  *(_QWORD*)(v4 + 992) = 0;
  *(_QWORD*)(v4 + 1000) = 0;
  *(_BYTE*)(v4 + 952) = 0;
  *(_QWORD*)(v4 + 944) = 0;
  *(_QWORD*)(v4 + 936) = 0;
  *(_QWORD*)(v4 + 928) = 0;
  *(_QWORD*)(v4 + 920) = 0;
  *(_QWORD*)(v4 + 912) = 0;
  *(_QWORD*)(v4 + 904) = 0;
  *(_QWORD*)(v4 + 896) = 0;
  *(_QWORD*)(v4 + 888) = 0;
  *(_QWORD*)(v4 + 880) = 0;
  *(_QWORD*)(v4 + 872) = 0;
  *(_QWORD*)(v4 + 864) = 0;
  *(_QWORD*)(v4 + 1024) = 1065353216;
  *(_WORD*)(v4 + 1032) = 0;
  *(_WORD*)(v4 + 1040) = 0;
  *(_WORD*)(v4 + 1064) = 0;
  *(_WORD*)(v4 + 1088) = 0;
  *(_QWORD*)v13 = v14 + 16;
  *(_DWORD*)(v13 + 292) = 2;
  *(_QWORD*)(v13 + 24) = 0;
  *(_QWORD*)(v4 + 848) = v13 + 24;
  *(_QWORD*)(v4 + 1007) = 0;
  v15 = GameData_2130f98[0] + 2;
  *(_BYTE*)(v4 + 1152) = 0;
  *(_QWORD*)(v4 + 1144) = 0;
  *(_QWORD*)(v4 + 1136) = 0;
  *(_QWORD*)(v4 + 1128) = 0;
  *(_QWORD*)(v4 + 1120) = 0;
  *(_QWORD*)(v4 + 1112) = 0;
  *(_QWORD*)(v4 + 1208) = 0;
  *(_QWORD*)(v4 + 1200) = 0;
  *(_QWORD*)(v4 + 1192) = 0;
  *(_QWORD*)(v4 + 1184) = 0;
  *(_QWORD*)(v4 + 1176) = 0;
  *(_QWORD*)(v4 + 1168) = 0;
  *(_QWORD*)(v4 + 1160) = 0;
  *(_DWORD*)(v4 + 1216) = 0;
  *(_QWORD*)(v4 + 984) = v15;
  *(_QWORD*)v4 = game_telop_TelopExploreResult_vtable;
  v16 = *(_QWORD*)(a1 + 40);
  if (v16 != 0) {
    *(_QWORD*)(v16 + 48) = v4;
    *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v4;
  *(_QWORD*)(v4 + 24) = "TelopExploreResult";
  *(_QWORD*)(v4 + 32) = a1;
  *(_DWORD*)(v4 + 140) = (unsigned int)game_HashString32("TelopExploreResult");
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 24;
  *(_QWORD*)(v4 + 80) = 1;
  v17 = GameData_2130f68;
  *(_QWORD*)(v4 + 8) = GameData_2130f68;
  *(_QWORD*)(v4 + 16) = v17;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
      (*(_WORD*)(v4 + 136) & 0x100) == 0) {
    *(_WORD*)(v4 + 136) |= 0x100u;
  }
  v18 = (_BYTE*)*v10;
  v19 = *(_BYTE*)(*v10 + 138LL);
  if (v19 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v18 + 64LL))(*v10);
    v19 = v18[138];
  }
  v18[138] = v19 + 1;
  *(_WORD*)(v4 + 136) |= 2u;
  if ((*(_BYTE*)(v4 + 272) & 1) != 0) {
    *(_QWORD*)(v4 + 280) = 17;
    v20 = *(char**)(v4 + 288);
  }
  else {
    *(_BYTE*)(v4 + 272) = 34;
    v20 = (char*)(v4 + 273);
  }
  v60 = a3;
  strcpy(v20, "Layout/Common.arc");
  if ((*(_BYTE*)(v4 + 296) & 1) != 0) {
    *(_QWORD*)(v4 + 304) = 16;
    v21 = *(char**)(v4 + 312);
  }
  else {
    *(_BYTE*)(v4 + 296) = 32;
    v21 = (char*)(v4 + 297);
  }
  strcpy(v21, "Common_TlpResult");
  GameHr_1374b10(v4, 2);
  Se_80e330(v4, "SE_SYS_Telop_Mini_In");
  GameHr_1378190(v4, "SE_SYS_Telop_Mini_Out");
  v22 = *a2;
  v23 = a2[1];
  __builtin_memset(v63, 0, sizeof(v63));
  if (v22 == v23) {
    v24 = nullptr;
    v26 = 0;
  }
  else {
    v24 = nullptr;
    v25 = 0;
    v26 = 0;
    do {
      v28 = *v22;
      v29 = *(_QWORD*)(*v22 + 48);
      if ((unsigned __int64)v24 >= v25) {
        v30 = &v24[-v26];
        v31 = (__int64)&v24[-v26] >> 3;
        v32 = v31 + 1;
        if ((unsigned __int64)(v31 + 1) >> 61 != 0) {
          GameRoutine_6e5c60();
        }
        if ((__int64)(v25 - v26) >> 2 > v32) {
          v32 = (__int64)(v25 - v26) >> 2;
        }
        if (v25 - v26 >= 0x7FFFFFFFFFFFFFF8LL) {
          v33 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v33 = v32;
        }
        if (v33 != 0) {
          if (v33 >> 61 != 0) {
            GameRoutine_60a210();
          }
          v34 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v33, 16, 0);
        }
        else {
          v34 = 0;
        }
        v25 = v34 + 8 * v33;
        v35 = (unsigned __int64)&v24[-v26];
        v36 = (__int64)&v30[v34 + -8 * v31];
        *(_QWORD*)&v30[v34] = v29;
        v24 = &v30[v34 + 8];
        memcpy(v36, v26, v35);
        if (v26 != 0) {
          v37 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v37 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, v26);
        }
        v26 = v36;
      }
      else {
        *(_QWORD*)v24 = v29;
        v24 += 8;
      }
      v38 = v63[1];
      if (v63[1] == v63[2] << 6) {
        if (v63[1] + 1 < 0) {
          goto LABEL_91;
        }
        v39 = v63[2] << 7;
        if (v63[2] << 7 <= (v63[1] & 0x3FFFFFFFFFFFFFC0uLL) + 64) {
          v39 = (v63[1] & 0x3FFFFFFFFFFFFFC0LL) + 64;
        }
        if (v63[1] <= 0x3FFFFFFFFFFFFFFEuLL) {
          v40 = v39;
        }
        else {
          v40 = 0x7FFFFFFFFFFFFFFFLL;
        }
        collision_6704c0(v63, v40);
        v38 = v63[1];
      }
      v41 = v38 + 1;
      v42 = *(unsigned __int8*)(v28 + 58);
      v43 = v38 >> 6;
      v44 = 1LL << v38;
      v63[1] = v41;
      if (v42 == 1) {
        v27 = *(_QWORD*)(v63[0] + 8 * v43) | v44;
      }
      else {
        v27 = *(_QWORD*)(v63[0] + 8 * v43) & ~v44;
      }
      ++v22;
      *(_QWORD*)(v63[0] + 8 * v43) = v27;
    } while (v22 != v23);
  }
  GameRoutine_6f4cd0((__int64*)(v4 + 1168), v26, (__int64)v24,
                     (__int64)&v24[-v26] >> 3);
  v45 = v63[1];
  if (v63[1] == 0) {
    v52 = a4;
    v47 = v60;
    v51 = 0;
    goto LABEL_64;
  }
  v46 = *(_QWORD*)(v4 + 1192);
  v47 = v60;
  if (v63[1] <= *(_QWORD*)(v4 + 1208) << 6) {
    v49 = v63[1] - 1;
  LABEL_62:
    memmove(v46, v63[0], ((v49 >> 3) & 0x1FFFFFFFFFFFFFF8LL) + 8);
    v51 = v63[1];
    goto LABEL_63;
  }
  if (v46 != 0) {
    v48 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v48,
                                  *(_QWORD*)(v4 + 1192));
    v45 = v63[1];
    *(_QWORD*)(v4 + 1200) = 0;
    *(_QWORD*)(v4 + 1208) = 0;
    *(_QWORD*)(v4 + 1192) = 0;
  }
  if (v45 < 0) {
  LABEL_91:
    GameRoutine_6706a0();
  }
  v49 = v45 - 1;
  if (v45 != 0) {
    v50 = ((unsigned __int64)(v45 - 1) >> 6) + 1;
  }
  else {
    v50 = 0;
  }
  v46 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       8 * v50, 16, 0);
  *(_QWORD*)(v4 + 1192) = v46;
  *(_QWORD*)(v4 + 1200) = 0;
  *(_QWORD*)(v4 + 1208) = v50;
  if (v45 != 0) {
    goto LABEL_62;
  }
  v51 = 0;
LABEL_63:
  v52 = a4;
LABEL_64:
  v53 = v63[0];
  *(_QWORD*)(v4 + 1200) = v51;
  if (v53 != 0) {
    v54 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v54 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v54,
                                  v53);
  }
  if (v26 != 0) {
    v55 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v55 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v55,
                                  v26);
  }
  *(_DWORD*)(v4 + 1216) = v47;
  __builtin_memset(v63, 0, sizeof(v63));
  if (v47 != 2) {
    if (v47 == 1) {
      strcpy((char*)v63, "*MID_Gmap_Explore_GOOD");
    }
    else if (v47 == 0) {
      strcpy((char*)v63, "(MID_Gmap_Explore_BAD");
      v61_.v61 = v52;
      v61_.v62 = 0;
      if (v52 == 0) {
        goto LABEL_80;
      }
    LABEL_79:
      v61_.v62 = *(_QWORD*)(v52 + 392);
      goto LABEL_80;
    }
    v61_.v61 = v52;
    v61_.v62 = 0;
    if (v52 == 0) {
      goto LABEL_80;
    }
    goto LABEL_79;
  }
  GameRoutine_60a020((__int64)v63, "MID_Gmap_Explore_PERFECT");
  v61_.v61 = v52;
  v61_.v62 = 0;
  if (v52 != 0) {
    goto LABEL_79;
  }
LABEL_80:
  if ((v63[0] & 1) != 0) {
    v56 = (const char*)v63[2];
  }
  else {
    v56 = (char*)v63 + 1;
  }
  game_97e570((unsigned __int8*)(v4 + 824), &v61_.v61, v56, "001");
  if ((v63[0] & 1) != 0 && v63[2] != 0) {
    v57 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v57 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v57,
                                  v63[2]);
  }
  return v4;
}

#pragma GCC visibility pop
