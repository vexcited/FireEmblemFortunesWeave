#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_17363e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18acaf0(_QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 (*ui_Event_vtable[])();
extern __int64 GameData_212d8b0[3];
extern __int64 game_gameui_Footer_instance_;
extern __int64 ui_Manager_instance_;
extern int GameData_22593dc;
extern int GameData_22593f8;
struct PseudoSret snd_play_ff2d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 double, float);
__int64 game_GameUI_Setup_lambda1_Invoke(__int64 a1, _DWORD* a2, int* a3);
_QWORD* game_GameUI_Setup_lambda2_Invoke();
_QWORD* game_GameUI_Setup_lambda3_Invoke();
void game_GameUI_Setup_lambda4_Invoke();
__attribute__((swiftcall)) void
GameRoutine_1908c60_alt1(PSEUDO_X8, __int64,
                         __int64) __asm__("GameRoutine_1908c60");
__attribute__((swiftcall)) void
GameRoutine_1908f00_alt1(PSEUDO_X8, __int64,
                         __int64) __asm__("GameRoutine_1908f00");
__int64 Cursor_Destructor_18a2440(_QWORD*);
__int64 FloatingHelp_18ac7f0(void);
__int64 FloatingHelp_Destructor(_QWORD*);
__int64 GameRoutine_112e290(_QWORD);
__int64 GameRoutine_1366820(__int64 result);
__int64 GameRoutine_15e1350(_QWORD);
__int64 GameRoutine_1735b60(_QWORD);
__int64 GameRoutine_173df20(_QWORD);
__int64 GameRoutine_17aa8e0(void);
__int64 GameRoutine_17b7d20(_QWORD);
__int64 GameRoutine_18a2660(void);
__int64 GameRoutine_19aeaf0(void);
__int64 GameRoutine_19ef080(_QWORD);
__int64 GameRoutine_654050(_QWORD, _QWORD);
__int64 HeaderFooter_15651c0(_QWORD);
__int64 LayoutAccessor_155e140(__int64*);
__int64 LayoutArchive_13669e0(_QWORD);
__int64 MouseCursor_Destructor(_QWORD*);
__int64 ProcLoadingSeq_9b84e0(_QWORD);
__int64 RenderTask_136a130(_QWORD);
__int64 SavingIcon_Destructor(_QWORD*);
__int64 SimpleTelopImpl_17c9530(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_15d1d80(_QWORD);
__int64 game_gameui_1569ce0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern _DWORD* GameData_212d8a0;
extern _UNKNOWN* GameData_2132280;
extern _UNKNOWN* GameData_2132288;
extern __int64 (*GameData_1fa94c8[])();
extern __int64 (*GameData_1fa9548[])();
extern __int64 (*GameData_1fa95c8[])();
extern __int64 (*GameData_1fa9648[])();
extern __int64 (*GameData_1fa96c8[])();
extern __int64 (*GameData_2132240[3])();
extern __int64 (*GameData_2132248[2])();
extern __int64* GameData_212c628;
extern __int64* GameData_212d898;
extern __int64* GameData_2130250[6];
extern __int64* GameData_21320a8;
extern __int64* game_talk_g_window_layout_ptr[5];
extern __int64 GameData_212d6e0[2];
extern __int64 GameData_212d8a8[4];
extern __int64 GameData_212d8b8[2];
extern __int64 GameData_212da38;
extern __int64 GameData_2131dc8;
extern __int64 GameData_21f1dc8;
extern __int64 GameData_21f7fa0;
extern __int64 GameData_21f7fa8;
extern __int64 GameData_21f7fb0;
extern __int64 GameData_2258178;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_hub_ProgressEventView_instance__ptr[6];
extern char GameData_21f1dd0;
extern char GameData_21f1dd8[];
extern char GameData_21f1dd9;
extern char GameData_21f1ddc;
extern int* GameData_21320b0[8];
struct PseudoSret GameRoutine_1908c60(_QWORD, _QWORD);
struct PseudoSret GameRoutine_1908f00(_QWORD, _QWORD);
_QWORD* game_GameUI_Setup();
__int64 GameUI_8b51d0();
__attribute__((swiftcall)) void
game_GameUI_Setup_lambda0_Invoke(PSEUDO_X8 x8_, __int64 unused_int0,
                                 unsigned __int64* a1);

_QWORD* game_GameUI_Setup()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  _QWORD* result;
  __int64 v26;
  __int64 v27;
  _QWORD v28[4];
  _QWORD* v29;
  _QWORD v30[4];
  _QWORD* v31;
  _QWORD v32[4];
  _QWORD* v33;
  _QWORD v34[4];
  _QWORD* v35;

  RenderTask_136a130(ui_Manager_instance_ + 1264);
  LayoutArchive_13669e0("Layout/Common.arc");
  LayoutArchive_13669e0("Layout/CommonMenu.arc");
  v0 = LayoutArchive_13669e0("Layout/Hub.arc");
  game_15d1d80(v0);
  v34[0] = GameData_1fa94c8;
  v35 = v34;
  *(struct PseudoSret*)(v32) =
      GameRoutine_1908f00(ui_Manager_instance_ + 6528, v34);
  if (v33 == v32) {
    v1 = 32;
  }
  else {
    if (v33 == nullptr) {
      goto LABEL_6;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*v33 + v1))((__int64)v33);
LABEL_6:
  if (v35 == v34) {
    v2 = 32;
  }
  else {
    if (v35 == nullptr) {
      goto LABEL_11;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v35 + v2))((__int64)v35);
LABEL_11:
  v34[0] = GameData_1fa9548;
  v35 = v34;
  *(struct PseudoSret*)(v30) =
      GameRoutine_1908c60(ui_Manager_instance_ + 6528, v34);
  if (v31 == v30) {
    v3 = 32;
  }
  else {
    if (v31 == nullptr) {
      goto LABEL_16;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v31 + v3))((__int64)v31);
LABEL_16:
  if (v35 == v34) {
    v4 = 32;
  }
  else {
    if (v35 == nullptr) {
      goto LABEL_21;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v35 + v4))((__int64)v35);
LABEL_21:
  v5 = GameData_212c628;
  GameRoutine_15e1350(
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c628));
  GameRoutine_1735b60(*(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5));
  GameRoutine_173df20(*(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5));
  game_gameui_1569ce0(*v5);
  HeaderFooter_15651c0(*(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5));
  if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] == 0) {
    GameRoutine_17b7d20(*(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5));
  }
  SimpleTelopImpl_17c9530(
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5));
  v6 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v7 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 144, 16, 0);
  v7[14] = 0;
  v7[15] = 0;
  v8 = GameData_212d898;
  if (*GameData_212d898 == 0) {
    *GameData_212d8a0 = 1;
  }
  v9 = GameData_212da38;
  v7[8] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[5] = 0;
  v7[9] = 0;
  v7[10] = 0;
  v7[6] = 0;
  v7[7] = v7 + 8;
  v7[11] = 0;
  v7[12] = 0;
  v7[13] = 0;
  *((_DWORD*)v7 + 28) = 1065353216;
  v7[15] = 0;
  v7[16] = 0;
  v7[17] = 0;
  *v8 = (__int64)v7;
  *v7 = v9 + 16;
  v7[1] = v9 + 72;
  GameRoutine_18a2660();
  v10 = fw_memory_HeapManager_Allocate(*v6, 128, 16, 0);
  GameRoutine_17aa8e0();
  v11 = *v6;
  *(_QWORD*)GameData_212d8a8[0] = v10;
  v12 = fw_memory_HeapManager_Allocate(v11, 288, 16, 0);
  v13 = (__int64*)GameData_212d8b0[0];
  if (*(_QWORD*)GameData_212d8b0[0] == 0) {
    *GameData_21320b0[0] = 1;
  }
  v14 = GameData_21320a8;
  *(_QWORD*)(v12 + 64) = 0;
  *(_QWORD*)(v12 + 16) = 0;
  *(_QWORD*)(v12 + 24) = 0;
  *(_QWORD*)(v12 + 32) = 0;
  *(_QWORD*)(v12 + 40) = 0;
  *(_QWORD*)(v12 + 72) = 0;
  *(_QWORD*)(v12 + 80) = 0;
  *(_QWORD*)(v12 + 88) = 0;
  *(_QWORD*)(v12 + 96) = 0;
  *(_QWORD*)(v12 + 104) = 0;
  *(_DWORD*)(v12 + 112) = 1065353216;
  *(_QWORD*)(v12 + 120) = 0;
  *(_QWORD*)(v12 + 128) = 0;
  *(_QWORD*)(v12 + 136) = 0;
  *(_QWORD*)(v12 + 144) = 0;
  *(_QWORD*)(v12 + 152) = 0;
  *(_QWORD*)(v12 + 160) = 0;
  *(_QWORD*)(v12 + 168) = 0;
  *(_QWORD*)(v12 + 176) = 0;
  *(_QWORD*)(v12 + 184) = 0;
  *(_QWORD*)(v12 + 192) = 0;
  *(_QWORD*)(v12 + 200) = 0;
  *(_QWORD*)(v12 + 208) = 0;
  *(_QWORD*)(v12 + 216) = 0;
  *(_QWORD*)(v12 + 224) = 0;
  *(_QWORD*)(v12 + 232) = 0;
  *(_QWORD*)(v12 + 240) = 0;
  *v13 = v12;
  *(_QWORD*)(v12 + 48) = 0;
  *(_QWORD*)(v12 + 56) = v12 + 64;
  *(_QWORD*)v12 = v14 + 2;
  *(_QWORD*)(v12 + 8) = v14 + 9;
  *(_QWORD*)(v12 + 248) = 0xFFFFFFFFLL;
  *(_DWORD*)(v12 + 255) = 0;
  *(_QWORD*)(v12 + 268) = 0;
  *(_QWORD*)(v12 + 276) = 0;
  *(_QWORD*)(v12 + 260) = 0;
  FloatingHelp_18ac7f0();
  v15 = fw_memory_HeapManager_Allocate(*v6, 128, 16, 0);
  GameRoutine_19aeaf0();
  v16 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5);
  *(_QWORD*)GameData_212d6e0[0] = v15;
  v17 = GameRoutine_19ef080(v16);
  v18 = GameRoutine_112e290(v17);
  ProcLoadingSeq_9b84e0(v18);
  v19 = v28;
  v28[0] = GameData_1fa95c8;
  v29 = v28;
  if (GameData_2258178 == 0) {
    goto LABEL_36;
  }
  v34[0] = GameData_1fa95c8;
  v35 = v34;
  GameRoutine_654050(v34, GameData_2258178);
  if (v35 == v34) {
    v20 = 32;
  }
  else {
    if (v35 == nullptr) {
      goto LABEL_33;
    }
    v20 = 40;
  }
  (*(void (**)(_QWORD*))(*v35 + v20))(v35);
LABEL_33:
  v19 = v29;
  if (v29 == v28) {
  LABEL_36:
    v21 = 32;
    goto LABEL_37;
  }
  if (v29 != nullptr) {
    v21 = 40;
  LABEL_37:
    (*(void (**)(_QWORD*))(*v19 + v21))(v19);
  }
  v22 = v28;
  v28[0] = GameData_1fa9648;
  v29 = v28;
  if (GameData_2258178 == 0) {
  LABEL_47:
    v24 = 32;
    goto LABEL_48;
  }
  v34[0] = GameData_1fa9648;
  v35 = v34;
  GameRoutine_654050(v34, GameData_2258178 + 48);
  if (v35 == v34) {
    v23 = 32;
  }
  else {
    if (v35 == nullptr) {
      goto LABEL_44;
    }
    v23 = 40;
  }
  (*(void (**)(_QWORD*))(*v35 + v23))(v35);
LABEL_44:
  v22 = v29;
  if (v29 == v28) {
    goto LABEL_47;
  }
  if (v29 == nullptr) {
    goto LABEL_49;
  }
  v24 = 40;
LABEL_48:
  (*(void (**)(_QWORD*))(*v22 + v24))(v22);
LABEL_49:
  result = v28;
  v28[0] = GameData_1fa96c8;
  v29 = v28;
  if (GameData_2258178 == 0) {
  LABEL_58:
    v27 = 32;
    return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v27))(result);
  }
  v34[0] = GameData_1fa96c8;
  v35 = v34;
  GameRoutine_654050(v34, GameData_2258178 + 96);
  if (v35 == v34) {
    v26 = 32;
  }
  else {
    if (v35 == nullptr) {
      goto LABEL_55;
    }
    v26 = 40;
  }
  (*(void (**)(_QWORD*))(*v35 + v26))(v35);
LABEL_55:
  result = v29;
  if (v29 == v28) {
    goto LABEL_58;
  }
  if (v29 == nullptr) {
    return result;
  }
  v27 = 40;
  return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v27))(result);
}

__int64 GameUI_8b51d0()
{
  __int64 v0;
  __int64* v1;
  __int64 v2;
  _QWORD* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 result;
  __int64 v21;
  _DWORD* v22;
  int v23;
  struct {
    _BYTE v24[32];
    _BYTE* v25;
  } v24_;
  struct {
    _BYTE v26[32];
    _BYTE* v27;
  } v26_;
  struct {
    __int64 (*v28[4])();
    __int64 (**v29)();
  } v28_;

  if (GameData_21f7fa0 != 0) {
    *(_BYTE*)(GameData_21f7fa0 + 2376) = 1;
  }
  v0 = GameData_21f7fa8;
  GameData_21f7fa0 = 0;
  GameData_21f7fa8 = 0;
  if (v0 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v0 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v0 + 16LL))(v0);
    std___1___shared_weak_count___release_weak();
  }
  LayoutAccessor_155e140(&GameData_21f7fb0);
  v1 = GameData_2130250[0];
  if (*GameData_2130250[0] != 0) {
    *(_BYTE*)(*GameData_2130250[0] + 2376) = 1;
  }
  v2 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v1);
  *v1 = 0;
  v1[1] = 0;
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak();
  }
  LayoutAccessor_155e140(game_talk_g_window_layout_ptr[0]);
  if (*(_QWORD*)GameData_2131dc8 != 0) {
    *(_BYTE*)(*(_QWORD*)GameData_2131dc8 + 2376LL) = 1;
  }
  v3 = (_QWORD*)GameData_212d8b8[0];
  if (*(_QWORD*)GameData_212d8b8[0] != 0) {
    (*(void (**)(_QWORD))(**(_QWORD**)GameData_212d8b8[0] + 24LL))(
        *(_QWORD*)GameData_212d8b8[0]);
    if (*v3 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v3 + 8LL))(*v3);
    }
    *v3 = 0;
  }
  v4 = GameData_212d898;
  v5 = *GameData_212d898;
  v6 = fw_memory_g_heap_manager_ptr;
  if (*GameData_212d898 != 0) {
    Cursor_Destructor_18a2440((_QWORD*)*GameData_212d898);
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v7, v5);
  }
  *v4 = 0;
  v8 = (_QWORD*)GameData_212d8a8[0];
  v9 = *(_QWORD*)GameData_212d8a8[0];
  if (*(_QWORD*)GameData_212d8a8[0] != 0) {
    MouseCursor_Destructor(*(_QWORD**)GameData_212d8a8[0]);
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v10, v9);
  }
  *v8 = 0;
  v11 = (_QWORD*)GameData_212d8b0[0];
  v12 = *(_QWORD*)GameData_212d8b0[0];
  if (*(_QWORD*)GameData_212d8b0[0] != 0) {
    FloatingHelp_Destructor(*(_QWORD**)GameData_212d8b0[0]);
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v13, v12);
  }
  *v11 = 0;
  v14 = (_QWORD*)GameData_212d6e0[0];
  v15 = *(_QWORD*)GameData_212d6e0[0];
  if (*(_QWORD*)GameData_212d6e0[0] != 0) {
    SavingIcon_Destructor(*(_QWORD**)GameData_212d6e0[0]);
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v16, v15);
  }
  *v14 = 0;
  GameRoutine_1366820((__int64)"Layout/Common.arc");
  GameData_21f1dd8[0] = 0;
  GameRoutine_1366820((__int64)"Layout/CommonMenu.arc");
  GameData_21f1dd9 = 0;
  GameRoutine_1366820((__int64)"Layout/Hub.arc");
  GameData_21f1ddc = 0;
  v28_.v29 = v28_.v28;
  v28_.v28[0] = (__int64 (*)())((char*)GameData_2132280 + 16);
  v28_.v28[1] = GameData_2132240[0];
  GameRoutine_1908c60_alt1((void*)((__int64)v26_.v26),
                           ui_Manager_instance_ + 6528, (__int64)v28_.v28);
  if (v28_.v29 == v28_.v28) {
    v17 = 32;
  }
  else {
    if (v28_.v29 == nullptr) {
      goto LABEL_38;
    }
    v17 = 40;
  }
  (*(void (**)(__int64))((char*)*v28_.v29 + v17))((__int64)v28_.v29);
LABEL_38:
  if (v26_.v27 == v26_.v26) {
    v18 = 32;
  }
  else {
    if (v26_.v27 == nullptr) {
      goto LABEL_43;
    }
    v18 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v26_.v27 + v18))((__int64)v26_.v27);
LABEL_43:
  v28_.v29 = v28_.v28;
  v28_.v28[0] = (__int64 (*)())((char*)GameData_2132288 + 16);
  v28_.v28[1] = GameData_2132248[0];
  GameRoutine_1908f00_alt1((void*)((__int64)v24_.v24),
                           ui_Manager_instance_ + 6528, (__int64)v28_.v28);
  if (v28_.v29 == v28_.v28) {
    v19 = 32;
  }
  else {
    if (v28_.v29 == nullptr) {
      goto LABEL_48;
    }
    v19 = 40;
  }
  (*(void (**)(__int64))((char*)*v28_.v29 + v19))((__int64)v28_.v29);
LABEL_48:
  result = (__int64)v24_.v25;
  if (v24_.v25 == v24_.v24) {
    v21 = 32;
    goto LABEL_52;
  }
  if (v24_.v25 != nullptr) {
    v21 = 40;
  LABEL_52:
    result =
        (*(__int64 (**)(__int64))(*(_QWORD*)v24_.v25 + v21))((__int64)v24_.v25);
  }
  v22 = (_DWORD*)ui_Manager_instance_;
  v23 = *(_DWORD*)(ui_Manager_instance_ + 1636);
  *(_DWORD*)(ui_Manager_instance_ + 1632) = 1;
  v22[502] = 1;
  v22[596] = 1;
  v22[690] = 1;
  v22[784] = 1;
  v22[878] = 1;
  v22[972] = 1;
  v22[1066] = 1;
  v22[1160] = 1;
  v22[1254] = 1;
  v22[1348] = 1;
  v22[1442] = 1;
  v22[1536] = 1;
  v22[1630] = 1;
  v22[409] = v23 - 1;
  --v22[503];
  --v22[597];
  --v22[691];
  --v22[785];
  --v22[879];
  --v22[973];
  --v22[1067];
  --v22[1161];
  --v22[1255];
  --v22[1349];
  --v22[1443];
  --v22[1537];
  --v22[1631];
  GameData_21f1dd0 = 0;
  GameData_21f1dc8 = 0;
  return result;
}

__attribute__((swiftcall)) void

game_GameUI_Setup_lambda0_Invoke(PSEUDO_X8 x8_, __int64 unused_int0,
                                 unsigned __int64* a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v2;
  __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;

  v2 = *a1;
  result = ui_Manager_instance_;
  v4 = *(_QWORD*)(ui_Manager_instance_ + 1208);
  if (v4 == 0 || *(_QWORD*)(ui_Manager_instance_ + 1224) == 0) {
    goto LABEL_24;
  }
  v6 = v4 - 1;
  if ((v4 & (v4 - 1)) != 0) {
    v7 = v2;
    if (v2 >= v4) {
      v7 = v2 % v4;
    }
  }
  else {
    v7 = v6 & v2;
  }
  v8 = *(_QWORD**)(*(_QWORD*)(ui_Manager_instance_ + 1200) + 8 * v7);
  if (v8 == nullptr || (v9 = (_QWORD*)*v8) == nullptr) {
  LABEL_24:
    *a2 = 0;
    a2[1] = 0;
    {
      result;
      return;
    }
  }
  if ((v4 & v6) == 0) {
    while (1) {
      v11 = v9[1];
      if (v11 == v2) {
        if (v9[2] == v2) {
          goto LABEL_25;
        }
      }
      else if ((v11 & v6) != v7) {
        goto LABEL_24;
      }
      v9 = (_QWORD*)*v9;
      if (v9 == nullptr) {
        goto LABEL_24;
      }
    }
  }
  while (1) {
    v10 = v9[1];
    if (v10 == v2) {
      break;
    }
    if (v10 >= v4) {
      v10 %= v4;
    }
    if (v10 != v7) {
      goto LABEL_24;
    }
  LABEL_14:
    v9 = (_QWORD*)*v9;
    if (v9 == nullptr) {
      goto LABEL_24;
    }
  }
  if (v9[2] != v2) {
    goto LABEL_14;
  }
LABEL_25:
  *a2 = v9[3];
  v12 = v9[4];
  a2[1] = v12;
  if (v12 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                              memory_order_relaxed);
  }
  {
    result;
    return;
  }
}

__int64 game_GameUI_Setup_lambda1_Invoke(__int64 a1, _DWORD* a2, int* a3)
{
  if (*a2 == 5) {
    a3 = &GameData_22593f8;
  }
  else if (*a2 == 4) {
    return (unsigned int)GameData_22593dc;
  }
  return (unsigned int)*a3;
}

_QWORD* game_GameUI_Setup_lambda2_Invoke()
{
  _QWORD* result;
  __int64 v1;
  __int64 v2;
  _QWORD v3[2];
  _QWORD v4[25];

  snd_Fade_Fade_10c830(v4, 0.0f);
  *(struct PseudoSret*)(v3) =
      snd_play_ff2d0("VIB_MouseOn", "VIB_MouseOn", v4, 0, 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v4);
  v4[0] = "MID_Mouse_Notice";
  v4[1] = 16;
  GameRoutine_17363e0(1, v4, 1);
  result = (_QWORD*)GameRoutine_18acaf0(*(_QWORD*)GameData_212d8b0[0], 1);
  if (game_gameui_Footer_instance_ != 0) {
    result = *(_QWORD**)(game_gameui_Footer_instance_ + 480);
    if (result != nullptr) {
      result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 48LL))(result);
    }
  }
  v4[2] = 0;
  v4[0] = ui_Event_vtable;
  LODWORD(v4[1]) = 46;
  v1 = *(_QWORD*)(ui_Manager_instance_ + 1248);
  v2 = ui_Manager_instance_ + 1240;
  while (v1 != v2) {
    result = *(_QWORD**)(v1 + 16);
    if (result != nullptr) {
      result = X8CALL_X0(
          _QWORD*,
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, _QWORD*))(
              *result + 16LL))((void*)v3, result, v4));
    }
    v1 = *(_QWORD*)(v1 + 8);
  }
  return result;
}

_QWORD* game_GameUI_Setup_lambda3_Invoke()
{
  _QWORD* result;
  __int64 v1;
  __int64 v2;
  _QWORD v3[2];
  _QWORD v4[25];

  snd_Fade_Fade_10c830(v4, 0.0f);
  *(struct PseudoSret*)(v3) = snd_play_ff2d0("VIB_MouseOff", "VIB_MouseOff", v4,
                                             0, 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v4);
  v4[0] = "MID_Mouse_Notice";
  v4[1] = 16;
  GameRoutine_17363e0(1, v4, 0);
  result = (_QWORD*)GameRoutine_18acaf0(*(_QWORD*)GameData_212d8b0[0], 0);
  if (game_gameui_Footer_instance_ != 0) {
    result = *(_QWORD**)(game_gameui_Footer_instance_ + 480);
    if (result != nullptr) {
      result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 48LL))(result);
    }
  }
  v4[2] = 0;
  v4[0] = ui_Event_vtable;
  LODWORD(v4[1]) = 46;
  v1 = *(_QWORD*)(ui_Manager_instance_ + 1248);
  v2 = ui_Manager_instance_ + 1240;
  while (v1 != v2) {
    result = *(_QWORD**)(v1 + 16);
    if (result != nullptr) {
      result = X8CALL_X0(
          _QWORD*,
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, _QWORD*))(
              *result + 16LL))((void*)v3, result, v4));
    }
    v1 = *(_QWORD*)(v1 + 8);
  }
  return result;
}

void game_GameUI_Setup_lambda4_Invoke()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  struct {
    __int64 (**v4)();
    int v5;
    char gap12_[4];
    __int64 v6;
  } v4_;
  __int64 var4;

  v4_.v6 = 0;
  v4_.v4 = ui_Event_vtable;
  v4_.v5 = 46;
  v0 = *(_QWORD*)(ui_Manager_instance_ + 1248);
  v1 = ui_Manager_instance_ + 1240;
  while (v0 != v1) {
    v2 = *(_QWORD*)(v0 + 16);
    if (v2 != 0) {
      (*(__attribute__((swiftcall)) void (**)(
          PSEUDO_X8, __int64, __int64 (***)(void)))(*(_QWORD*)v2 + 16LL))(
          (void*)(&var4), v2, &v4_.v4);
    }
    v0 = *(_QWORD*)(v0 + 8);
  }
  if (game_gameui_Footer_instance_ != 0) {
    v3 = *(_QWORD*)(game_gameui_Footer_instance_ + 480);
    if (v3 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 48LL))(v3);
    }
  }
}

#pragma GCC visibility pop
