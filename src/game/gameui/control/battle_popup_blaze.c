#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 LayoutAccessor_155e140(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ui_LayoutAccessor_GetPane(_QWORD, _QWORD);
extern __int64 (*game_gameui_control_BattlePopupBlaze_vtable[])();
extern __int64 (*game_gameui_control_BattlePopup_vtable)();
extern __int64 (*ui_ILayoutControl_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
float BattlePopupBlaze_18c1590(__int64 a1);
__int64 BattlePopupBlaze_18c1610(__int64* a1);
__int64 BattlePopupBlaze_18c2b80(__int64 a1);
__int64 BattlePopupBlaze_18c2c90(__int64 a1);
__int64 BattlePopupBlaze_18c2e50(__int64 a1);
__attribute__((swiftcall)) void GameRoutine_1573280(PSEUDO_X8, _QWORD, _QWORD,
                                                    long double);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__attribute__((swiftcall)) void snd_playAt_ff5f0(PSEUDO_X8, _QWORD, _QWORD,
                                                 _QWORD, _QWORD, _QWORD, _QWORD,
                                                 _QWORD, double, float);
__int64 GameRoutine_18be910(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18c9f10(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_576740(_QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, double);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 LayoutAccessor_15635a0(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_15636c0(_QWORD, _QWORD, _QWORD, float);
__int64 LayoutEx_579160(_QWORD, _QWORD);
__int64 Pane_58fac0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_stop_ffc40(_QWORD, _QWORD, long double);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_ILayoutControl_UpdatePath(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 (*BattlePopupBlaze_18c2e50_ptr[])();
extern __int64 (*GameData_2107a58[])();
extern __int64* GameData_212d1e0[2];
extern __int64 GameData_2131678;
void GameRoutine_18bea40();
__attribute__((swiftcall)) void
BattlePopupBlaze_18c10b0(PSEUDO_X8 x8_, __int64 a1, __int64 a2, __int64 a3);
__attribute__((swiftcall)) void
BattlePopupBlaze_18c12f0(PSEUDO_X8 x8_, __int64 a1, __int64 a2);
__int64 BattlePopupBlaze_18c2620(__int64 a1, long double a2);
__int64 BattlePopupBlaze_18c2800(__int64 result);
__attribute__((swiftcall)) void
GameRoutine_1573280_alt1(PSEUDO_X8, __int64*,
                         _QWORD*) __asm__("GameRoutine_1573280");
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 LayoutAccessor_15635a0_alt1(__int64*, __int64,
                                    char) __asm__("LayoutAccessor_15635a0");
__int64 LayoutAccessor_15636c0_alt1(__int64 result, __int64, char,
                                    float) __asm__("LayoutAccessor_15636c0");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_stop_ffc40_alt1(__int64*, __int64) __asm__("snd_stop_ffc40");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__attribute__((swiftcall)) void

BattlePopupBlaze_18c10b0(PSEUDO_X8 x8_, __int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;

  v8 = (_QWORD*)LayoutEx_579160(384, 16);
  v9 = v8 + 4;
  v10 = v8;
  v8[1] = 0;
  v8[2] = 0;
  *v8 = GameData_2107a58;
  GameRoutine_18be910(v8 + 4, a1, a2, a3);
  *((_DWORD*)v10 + 77) = 0;
  *((_BYTE*)v10 + 312) = 0;
  v10[4] = game_gameui_control_BattlePopupBlaze_vtable;
  v11 = (__int64*)fw_memory_g_heap_manager_ptr;
  v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       296, 16, 0);
  *(_QWORD*)(v12 + 16) = 0;
  v13 = GameData_2131678;
  *(_QWORD*)(v12 + 24) = 0;
  *(_DWORD*)(v12 + 32) = 0;
  *(_QWORD*)(v12 + 40) = 0;
  *(_DWORD*)(v12 + 48) = 0x2000;
  v14 = v13 + 16;
  v15 = *v11;
  *(_DWORD*)(v12 + 104) = 0;
  *(_WORD*)(v12 + 108) = 256;
  *(_QWORD*)(v12 + 56) = 0;
  *(_QWORD*)(v12 + 64) = 0;
  *(_QWORD*)(v12 + 72) = 0;
  *(_WORD*)(v12 + 80) = 0;
  *(_DWORD*)(v12 + 112) = -1082130432;
  *(_WORD*)(v12 + 116) = 0;
  *(_WORD*)(v12 + 136) = 0;
  *(_BYTE*)(v12 + 160) = 0;
  *(_BYTE*)(v12 + 288) = 0;
  *(_QWORD*)(v12 + 272) = 0;
  *(_QWORD*)(v12 + 280) = 0;
  *(_QWORD*)(v12 + 256) = 0;
  *(_QWORD*)(v12 + 264) = 0;
  *(_QWORD*)(v12 + 240) = 0;
  *(_QWORD*)(v12 + 248) = 0;
  *(_QWORD*)(v12 + 224) = 0;
  *(_QWORD*)(v12 + 232) = 0;
  *(_QWORD*)(v12 + 208) = 0;
  *(_QWORD*)(v12 + 216) = 0;
  *(_QWORD*)(v12 + 192) = 0;
  *(_QWORD*)(v12 + 200) = 0;
  *(_QWORD*)(v12 + 176) = 0;
  *(_QWORD*)(v12 + 184) = 0;
  *(_QWORD*)(v12 + 168) = 0;
  *(_QWORD*)(v12 + 120) = 0;
  *(_DWORD*)(v12 + 127) = 0;
  *(_DWORD*)(v12 + 292) = 2;
  *(_QWORD*)v12 = v14;
  *(_QWORD*)(v12 + 8) = 0;
  v10[40] = v12 + 24;
  v10[41] = v12;
  result = fw_memory_HeapManager_Allocate(v15, 296, 16, 0);
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)result = v14;
  *(_DWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_DWORD*)(result + 48) = 0x2000;
  *(_DWORD*)(result + 104) = 0;
  *(_WORD*)(result + 108) = 256;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 72) = 0;
  *(_WORD*)(result + 80) = 0;
  *(_DWORD*)(result + 112) = -1082130432;
  *(_WORD*)(result + 116) = 0;
  *(_WORD*)(result + 136) = 0;
  *(_BYTE*)(result + 160) = 0;
  *(_BYTE*)(result + 288) = 0;
  *(_QWORD*)(result + 272) = 0;
  *(_QWORD*)(result + 280) = 0;
  *(_QWORD*)(result + 256) = 0;
  *(_QWORD*)(result + 264) = 0;
  *(_QWORD*)(result + 240) = 0;
  *(_QWORD*)(result + 248) = 0;
  *(_QWORD*)(result + 224) = 0;
  *(_QWORD*)(result + 232) = 0;
  *(_QWORD*)(result + 208) = 0;
  *(_QWORD*)(result + 216) = 0;
  *(_QWORD*)(result + 192) = 0;
  *(_QWORD*)(result + 200) = 0;
  *(_QWORD*)(result + 176) = 0;
  *(_QWORD*)(result + 184) = 0;
  *(_QWORD*)(result + 168) = 0;
  *(_QWORD*)(result + 120) = 0;
  *(_DWORD*)(result + 127) = 0;
  *(_DWORD*)(result + 292) = 2;
  v10[42] = result + 24;
  v10[43] = result;
  v10[44] = 0;
  v10[45] = 0;
  *((_DWORD*)v10 + 92) = 0;
  *(_QWORD*)((char*)v10 + 372) = 1123024896;
  *((_BYTE*)v10 + 380) = 0;
  if (a2 != 0) {
    result = Pane_58fac0(*(_QWORD*)(a2 + 24), "InfoTextMargin");
    if (result != 0 ||
        (result = GameRoutine_576740(a1, "InfoTextMargin")) != 0) {
      *((_DWORD*)v10 + 93) = *(_DWORD*)(result + *(unsigned int*)(result + 4));
    }
  }
  *a4 = v9;
  a4[1] = v10;
  v10[4] = BattlePopupBlaze_18c2e50_ptr;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void BattlePopupBlaze_18c12f0(PSEUDO_X8 x8_,
                                                         __int64 a1, __int64 a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  float result;

  v6 = (_QWORD*)LayoutEx_579160(384, 16);
  v6[1] = 0;
  v6[2] = 0;
  v7 = v6;
  *v6 = GameData_2107a58;
  v6[5] = a2;
  v6[6] = 0;
  v6[7] = 0;
  v6[8] = 0;
  v6[9] = 0;
  v6[10] = 0;
  v6[11] = 0;
  v6[12] = 0;
  v6[4] = &ui_ILayoutControl_vtable;
  v8 = v6 + 4;
  v9 = *(_QWORD*)(a2 + 24) + 176LL;
  v10 = strlen(v9);
  v7[6] = v9;
  v7[7] = v10;
  v11 = *(_QWORD*)(a2 + 48);
  v12 = strlen(v11);
  v7[8] = v11;
  v7[9] = v12;
  ui_ILayoutControl_UpdatePath(v8);
  *v8 = &game_gameui_control_BattlePopup_vtable;
  v13 = *(_QWORD*)(a1 + 72);
  v7[18] = 0;
  v7[15] = 0;
  v7[16] = 0;
  v7[19] = 0;
  v7[20] = 0;
  v7[21] = 0;
  v7[22] = 0;
  v7[23] = 0;
  v7[25] = 0;
  v7[26] = 0;
  v7[28] = 0;
  v7[29] = 0;
  v7[30] = 0;
  v7[31] = 0;
  v7[32] = 0;
  *((_DWORD*)v7 + 66) = 0;
  v7[17] = v7 + 18;
  v7[13] = v13;
  v7[14] = 0;
  *((_DWORD*)v7 + 48) = 1065353216;
  *((_DWORD*)v7 + 67) = *(_DWORD*)(a1 + 236);
  v14 = *(_DWORD*)(a1 + 240);
  v7[35] = 0;
  v7[36] = 0;
  v7[37] = 0;
  *((_WORD*)v7 + 152) = 0;
  *((_DWORD*)v7 + 68) = v14;
  ((void (*)(_QWORD*))GameRoutine_18bea40)(v8);
  *((_DWORD*)v7 + 77) = 0;
  *((_BYTE*)v7 + 312) = 0;
  *v8 = game_gameui_control_BattlePopupBlaze_vtable;
  v15 = (__int64*)fw_memory_g_heap_manager_ptr;
  v16 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       296, 16, 0);
  *(_QWORD*)(v16 + 16) = 0;
  v17 = GameData_2131678;
  *(_QWORD*)(v16 + 24) = 0;
  *(_DWORD*)(v16 + 32) = 0;
  *(_QWORD*)(v16 + 40) = 0;
  *(_DWORD*)(v16 + 48) = 0x2000;
  v18 = v17 + 16;
  v19 = *v15;
  *(_DWORD*)(v16 + 104) = 0;
  *(_WORD*)(v16 + 108) = 256;
  *(_QWORD*)(v16 + 56) = 0;
  *(_QWORD*)(v16 + 64) = 0;
  *(_QWORD*)(v16 + 72) = 0;
  *(_WORD*)(v16 + 80) = 0;
  *(_DWORD*)(v16 + 112) = -1082130432;
  *(_WORD*)(v16 + 116) = 0;
  *(_WORD*)(v16 + 136) = 0;
  *(_BYTE*)(v16 + 160) = 0;
  *(_BYTE*)(v16 + 288) = 0;
  *(_QWORD*)(v16 + 272) = 0;
  *(_QWORD*)(v16 + 280) = 0;
  *(_QWORD*)(v16 + 256) = 0;
  *(_QWORD*)(v16 + 264) = 0;
  *(_QWORD*)(v16 + 240) = 0;
  *(_QWORD*)(v16 + 248) = 0;
  *(_QWORD*)(v16 + 224) = 0;
  *(_QWORD*)(v16 + 232) = 0;
  *(_QWORD*)(v16 + 208) = 0;
  *(_QWORD*)(v16 + 216) = 0;
  *(_QWORD*)(v16 + 192) = 0;
  *(_QWORD*)(v16 + 200) = 0;
  *(_QWORD*)(v16 + 176) = 0;
  *(_QWORD*)(v16 + 184) = 0;
  *(_QWORD*)(v16 + 168) = 0;
  *(_QWORD*)(v16 + 120) = 0;
  *(_DWORD*)(v16 + 127) = 0;
  *(_DWORD*)(v16 + 292) = 2;
  *(_QWORD*)v16 = v18;
  *(_QWORD*)(v16 + 8) = 0;
  v7[40] = v16 + 24;
  v7[41] = v16;
  v20 = fw_memory_HeapManager_Allocate(v19, 296, 16, 0);
  *(_QWORD*)(v20 + 24) = 0;
  *(_QWORD*)(v20 + 8) = 0;
  *(_QWORD*)(v20 + 16) = 0;
  *(_QWORD*)v20 = v18;
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
  v7[42] = v20 + 24;
  v7[43] = v20;
  v7[44] = 0;
  v7[45] = 0;
  *((_DWORD*)v7 + 92) = 0;
  result = *(float*)(a1 + 340);
  *((_DWORD*)v7 + 94) = 0;
  *((_BYTE*)v7 + 380) = 0;
  *v8 = BattlePopupBlaze_18c2e50_ptr;
  *a3 = v8;
  a3[1] = v7;
  *((float*)v7 + 93) = result;
  {
    result;
    return;
  }
}

float BattlePopupBlaze_18c1590(__int64 a1)
{
  __int64 v2;
  float v3;

  v2 = ui_LayoutAccessor_GetPane(a1 + 80, "T_Txt");
  if (v2 == 0) {
    return *(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL) + 80LL);
  }
  v3 = *(float*)(v2 + 80);
  ui_LayoutAccessor_GetPane(a1 + 80, "T_Num");
  return v3;
}

__int64 BattlePopupBlaze_18c1610(__int64* a1)
{
  int v1;
  __int64 v2;
  _DWORD v4[2];

  if (*((_DWORD*)a1 + 58) == 2) {
    v1 = *((_DWORD*)a1 + 60);
  }
  else {
    v1 = *((_DWORD*)a1 + 59);
  }
  v2 = *a1;
  v4[0] = v1;
  v4[1] = v1;
  return (*(__int64 (**)(__int64*, _DWORD*))(v2 + 88))(a1, v4);
}

__int64 BattlePopupBlaze_18c2620(__int64 a1, long double a2)
{
  __int64 v3;
  __int64 v4;
  double v6;
  __int64 v7;
  __int64 v8;
  __int128 v9;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;

  v12 = (__int64*)"L_Gauge";
  v13 = 7;
  GameRoutine_1573280((void*)(&v15), a1 + 80, &v12, a2);
  if (v16 != 0) {
    v3 = std___1___shared_weak_count_lock(v16);
    v4 = v15;
    if (v16 != 0) {
      std___1___shared_weak_count___release_weak(v16);
    }
    if (v3 == 0 || v4 == 0) {
      if (v3 == 0) {
        goto LABEL_12;
      }
    }
    else {
      GameRoutine_18c9f10(
          v4, *(unsigned __int8*)(a1 + 280), *(unsigned int*)(a1 + 328),
          *(unsigned int*)(a1 + 332), *(unsigned __int8*)(a1 + 345));
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
  }
LABEL_12:
  LayoutAccessor_1560070((void*)(&v15), a1 + 80, "L_Gauge");
  if (v16 != 0) {
    v7 = std___1___shared_weak_count_lock(v16);
    v8 = v15;
    if (v16 != 0) {
      std___1___shared_weak_count___release_weak(v16);
    }
    if (v7 != 0 && v8 != 0) {
      LayoutAccessor_1562cf0(v8, "Out_Unbreak");
    }
    else if (v7 == 0) {
      goto LABEL_21;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
  }
LABEL_21:
  LODWORD(v6) = 1.0;
  *(_DWORD*)(a1 + 276) = 0;
  LayoutAccessor_1562680(a1 + 80, "In", v6);
  if (*(_BYTE*)(a1 + 344) == 1) {
    v9 = *(_OWORD*)(a1 + 192);
    v13 = *(_QWORD*)(a1 + 192);
    v14 = DWORD2(v9);
    v12 = GameData_212d1e0[0] + 2;
    snd_Fade_Fade_10c830(&v15, 0.0);
    snd_playAt_ff5f0((void*)(&v11), "SE_SYS_BrazeGauge_Resist",
                     "SE_SYS_BrazeGauge_Resist", &v12, &v15, 0, 65537, 0, 0.0,
                     1.0);
    snd_Fade_Destroy_Fade(&v15);
  }
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 40LL))(a1, 1);
}

__int64 BattlePopupBlaze_18c2800(__int64 result)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD v6[2];
  struct {
    __int64 v7;
    __int64 v8;
  } v7_;

  if (*(_DWORD*)(result + 276) != 7) {
    v3 = result;
    *(_DWORD*)(result + 276) = 8;
    if ((LayoutAccessor_15635a0_alt1((__int64*)(result + 80), (__int64)"Out",
                                     0) &
         1) != 0) {
      LayoutAccessor_15636c0_alt1(v3 + 80, (__int64)"Out", 0, 0x0.0p+0f);
    }
    GameHr_1562680(v3 + 80, "Out", 0x1.0000000000000p+0f);
    v6[0] = "L_Gauge";
    v6[1] = 7;
    GameRoutine_1573280_alt1((void*)(&v7_.v7), (__int64*)(v3 + 80), v6);
    result = v7_.v8;
    if (v7_.v8 != 0) {
      v4 = std___1___shared_weak_count_lock_alt1(v7_.v8);
      v5 = v7_.v7;
      result = v7_.v8;
      if (v7_.v8 != 0) {
        result = std___1___shared_weak_count___release_weak_alt1(v7_.v8);
      }
      if (v4 != 0 && v5 != 0) {
        snd_Fade_Fade_10c830_alt1((__int64)&v7_.v7, 0x0.0p+0f);
        snd_stop_ffc40_alt1((__int64*)(v5 + 1088), (__int64)&v7_.v7);
        result = snd_Fade_Destroy_Fade_alt1(&v7_.v7);
        *(_BYTE*)(v5 + 1146) = 0;
      }
      else if (v4 == 0) {
        return result;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return std___1___shared_weak_count___release_weak_alt1(v4);
      }
    }
  }
  return result;
}

__int64 BattlePopupBlaze_18c2b80(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;

  *(_QWORD*)a1 = &game_gameui_control_BattlePopup_vtable;
  if ((*(_BYTE*)(a1 + 248) & 1) != 0 && *(_QWORD*)(a1 + 264) != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
  }
  LayoutAccessor_155e140(a1 + 80);
  v3 = *(_QWORD*)(a1 + 176);
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_1564060(a1 + 128);
  GameRoutine_1563f90(a1 + 104, *(_QWORD*)(a1 + 112));
  result = *(_QWORD*)(a1 + 88);
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  *(_QWORD*)a1 = &ui_ILayoutControl_vtable;
  if ((*(_BYTE*)(a1 + 48) & 1) != 0 && *(_QWORD*)(a1 + 64) != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  return result;
}

__int64 BattlePopupBlaze_18c2c90(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = &game_gameui_control_BattlePopup_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 248) & 1) != 0 && *(_QWORD*)(a1 + 264) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  LayoutAccessor_155e140(a1 + 80);
  v4 = *(_QWORD*)(a1 + 176);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  GameRoutine_1564060(a1 + 128);
  GameRoutine_1563f90(a1 + 104, *(_QWORD*)(a1 + 112));
  v5 = *(_QWORD*)(a1 + 88);
  if (v5 != 0) {
    std___1___shared_weak_count___release_weak(v5);
  }
  *(_QWORD*)a1 = &ui_ILayoutControl_vtable;
  if ((*(_BYTE*)(a1 + 48) & 1) != 0 && *(_QWORD*)(a1 + 64) != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v6);
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v7);
}

__int64 BattlePopupBlaze_18c2e50(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;

  v1 = *(_QWORD*)(a1 + 312);
  *(_QWORD*)a1 = game_gameui_control_BattlePopupBlaze_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  v3 = *(_QWORD*)(a1 + 296);
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  *(_QWORD*)a1 = &game_gameui_control_BattlePopup_vtable;
  if ((*(_BYTE*)(a1 + 248) & 1) != 0 && *(_QWORD*)(a1 + 264) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  LayoutAccessor_155e140(a1 + 80);
  v5 = *(_QWORD*)(a1 + 176);
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  GameRoutine_1564060(a1 + 128);
  GameRoutine_1563f90(a1 + 104, *(_QWORD*)(a1 + 112));
  result = *(_QWORD*)(a1 + 88);
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  *(_QWORD*)a1 = &ui_ILayoutControl_vtable;
  if ((*(_BYTE*)(a1 + 48) & 1) != 0 && *(_QWORD*)(a1 + 64) != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
  }
  return result;
}

#pragma GCC visibility pop
