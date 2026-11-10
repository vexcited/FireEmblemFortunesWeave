#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BattleInfoWindowBase_DeletingDestructor(_QWORD*);
__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_1832b70(__int64, unsigned int, char);
__int64 GameRoutine_1835440(void);
__int64 GameRoutine_18357c0(__int64, char, char);
__int64 GameRoutine_183f160(__int64 result);
__int64 GameRoutine_18ae960(_QWORD, _QWORD);
__int64 GameRoutine_18aee60(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int16* GameData_212cf08[9];
extern __int64 (*GameData_20e3528[])();
extern __int64 (*GameData_20e3558[])();
extern __int64 (*GameData_20e3600[])();
extern __int64 (*game_map_BattleInfoWindow_vtable[])();
extern __int64 GameData_212d220[5];
extern __int64 GameData_212d8b0[3];
extern __int64 GameData_21c99b8;
extern __int64 GameData_21cd0e8;
extern __int64 GameData_21d3f58;
extern __int64 GameData_21f1e08;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_empty_item;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212cfd0[8];
extern int GameData_226b318;
__int64 BattleInfoWindow_DeletingDestructor(_QWORD* a1);
__int64 BattleInfoWindow_183eeb0(_QWORD* a1);
__int64 BattleInfoWindow_Unknown2(_QWORD* a1);
__int64 BattleInfoWindow_183f070(_QWORD* a1);
__int64 BattleInfoWindow_Unknown3(__int64 result);
void BattleInfoWindow_183fa50();
__int64 BattleInfoWindow_Unknown25(__int64 a1);
__int64 BattleInfoWindow_Unknown21(__int64 a1, __int64 a2, __int64 a3, char a4);
__int64 BattleInfoWindow_Unknown24(__int64 a1, char a2, char a3);
__int64 BattleInfoWindow_18403e0(__int64 a1);
__int64 BattleInfoWindow_1840400(__int64 a1);
__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 Alignment_56b600(void);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_159da00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562060(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64* GameData_212d670[3];
extern __int64* GameData_212e348;
extern __int64* GameData_21318d0[2];
extern __int64* msg_MessageManager_instance__ptr[2];
__int64 BattleInfoWindow_1835140(__int64 a1, __int64 a2, unsigned int a3,
                                 __int64 a4, char a5, char a6);
__int64 BattleInfoWindow_18352d0(__int64 a1, __int64 a2, unsigned int a3,
                                 __int64 a4, char a5, char a6);
__int64 BattleInfoWindow_1835440(__int64 a1, __int64 a2, int a3, int a4,
                                 unsigned int a5, __int64 a6);
__attribute__((swiftcall)) void GameRoutine_1573280(PSEUDO_X8, _QWORD, _QWORD,
                                                    long double);
__attribute__((swiftcall)) void GameRoutine_17c77c0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void game_80c7f0(PSEUDO_X8, _QWORD);
__int64 AsyncLoadThumbImage_18b53c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 BattleInfo_797b50(_QWORD);
__int64 CombatHudWindow_1832b70(_QWORD, _QWORD, _QWORD);
__int64 FloatingHelp_18af120(_QWORD, _QWORD);
__int64 GameRoutine_1014aa0(_QWORD);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_1835ac0(_QWORD*, unsigned __int8);
__int64 GameRoutine_1836b00(_QWORD, _QWORD);
__int64 GameRoutine_1836ca0(_QWORD*, unsigned __int8);
__int64 GameRoutine_1837020(_QWORD, _QWORD);
__int64 GameRoutine_1837780(float*, char);
__int64 GameRoutine_1839560(__int64, char, unsigned int);
__int64 GameRoutine_1839880(_QWORD);
__int64 GameRoutine_183faa0(_QWORD, _QWORD);
__int64 GameRoutine_18af980(_QWORD, _QWORD);
__int64 GameRoutine_18b5800(_QWORD);
__int64 GameRoutine_18ca1f0(_QWORD, float);
__int64 LayoutAccessor_1562680_alt1(_QWORD, _QWORD,
                                    double) __asm__("LayoutAccessor_1562680");
__int64 LayoutAccessor_1563380(_QWORD, _QWORD, _QWORD);
__int64 Pane_58f8a0(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 snd_fnd_WeakHandle_reset(_QWORD);
__int64 snd_stop_ffc40(_QWORD, _QWORD, long double);
__int64 strlen(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 ui_LayoutAccessor_SetPaneVisible_alt1(_QWORD, _QWORD, _QWORD) __asm__(
    "ui_LayoutAccessor_SetPaneVisible");
extern _UNKNOWN* GameData_212da30;
extern __int64* GameData_212cff0[4];
extern __int64* GameData_212d890[2];
extern __int64* game_g_empty_item_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
void GameRoutine_1839980(__int64, char);
__int64 BattleInfoWindow_1834e50(__int64* a1, __int64 a2, __int64 a3);
void BattleInfoWindow_1834fc0(__int64 a1, _BYTE* a2);
void BattleInfoWindow_183f160(__int64 a1);
__int64 BattleInfoWindow_Unknown4(__int64 a1);

__int64 BattleInfoWindow_1834e50(__int64* a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char v13;
  __int64 v14;
  double v15;
  __int64 result;
  _QWORD v17[2];
  __int64 v18;
  __int64 v19;

  v3 = *a1;
  v17[0] = a2;
  v17[1] = strlen(a2);
  GameRoutine_17c77c0((void*)(&v18), v3 + 24, v17);
  if (v19 == 0) {
    goto LABEL_13;
  }
  v7 = std___1___shared_weak_count_lock(v19);
  v8 = v18;
  if (v19 != 0) {
    std___1___shared_weak_count___release_weak(v19);
  }
  if (v7 != 0 && v8 != 0) {
    *(_BYTE*)(v8 + 1104) = 0;
    v9 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
    v10 = ui_LayoutAccessor_FindTextBox(v8 + 88, "T_Txt");
    if (v10 != 0) {
      v11 = Pane_58f8a0(v10);
      if (v11 != 0) {
        *(_DWORD*)(v11 + 12) = v9;
      }
    }
    v12 = *(_QWORD*)a1[1];
    v13 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 56LL))(v3);
    AsyncLoadThumbImage_18b53c0(v8, a3, v12, v13 & 1);
  }
  else if (v7 == 0) {
    goto LABEL_13;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
LABEL_13:
  v14 = LayoutAccessor_155fbe0(v3 + 24, a2);
  if (*(_BYTE*)a1[2] == 1) {
    result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v3 + 128LL))(v3, v14);
  }
  else {
    LODWORD(v15) = 1.0;
    result = LayoutAccessor_1562680_alt1(v14, "KeyOff", v15);
  }
  ++*(_DWORD*)a1[3];
  return result;
}

void BattleInfoWindow_1834fc0(__int64 a1, _BYTE* a2)
{
  __int64 v4;
  _BYTE* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  double v10;
  _QWORD v11[2];
  _BYTE* v12;
  __int64 v13;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1) & 1) != 0) {
    ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 24, "L_Player_Equip01", 0);
    return;
  }
  v11[0] = "L_Player_Equip01";
  v11[1] = 16;
  GameRoutine_17c77c0((void*)(&v12), a1 + 24, v11);
  if (v13 != 0) {
    v4 = std___1___shared_weak_count_lock(v13);
    v5 = v12;
    if (v13 != 0) {
      std___1___shared_weak_count___release_weak(v13);
    }
    if (v4 != 0 && v5 != nullptr) {
      (*(void (**)(_BYTE*, __int64))(*(_QWORD*)v5 + 40LL))(v5, 1);
      v5[1104] = 0;
      v6 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
      v7 = ui_LayoutAccessor_FindTextBox(v5 + 88, "T_Txt");
      if (v7 != 0) {
        v8 = Pane_58f8a0(v7);
        if (v8 != 0) {
          *(_DWORD*)(v8 + 12) = v6;
        }
      }
      GameRoutine_18b5800(v5);
      goto LABEL_13;
    }
    if (v4 != 0) {
    LABEL_13:
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak(v4);
      }
    }
  }
  v9 = LayoutAccessor_155fbe0(a1 + 24, "L_Player_Equip01");
  if (*a2 == 1) {
    (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 144LL))(a1, v9);
  }
  else {
    LODWORD(v10) = 1.0;
    LayoutAccessor_1562680_alt1(v9, "KeyOff", v10);
  }
}

__int64 BattleInfoWindow_1835140(__int64 a1, __int64 a2, unsigned int a3,
                                 __int64 a4, char a5, char a6)
{
  __int64* v6;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v6 = *(__int64**)(a1 + 176);
  if (v6 == nullptr) {
    v6 = (__int64*)(a4 + 44);
    if (*(_WORD*)(a4 + 44) == 0) {
      v11 = *(unsigned int*)(a4 + 40);
      if ((v11 & 0x80000000) != 0) {
        v6 = &game_g_empty_item;
      }
      else {
        v6 = (__int64*)(*(_QWORD*)(a4 + 24) + 8 * v11 + 828);
      }
    }
  }
  *(_BYTE*)(a1 + 224) = a5 & 1;
  GameRoutine_1560070((void*)&v19, a2, "L_ArrowL");
  if (v20 != 0) {
    v12 = std___1___shared_weak_count_lock(v20);
    if (v12 != 0) {
      v13 = v12;
      if (v19 != 0) {
        GameRoutine_159da00(v19, a3, 4);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        std___1___shared_weak_count___release_weak(v13);
      }
    }
    if (v20 != 0) {
      std___1___shared_weak_count___release_weak(v20);
    }
  }
  GameRoutine_1560070((void*)&v17, a2, "L_ArrowR");
  result = v18;
  if (v18 != 0) {
    v15 = std___1___shared_weak_count_lock(v18);
    if (v15 != 0) {
      v16 = v15;
      if (v17 != 0) {
        GameRoutine_159da00(v17, a3, 5);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        std___1___shared_weak_count___release_weak(v16);
      }
    }
    result = v18;
    if (v18 != 0) {
      result = std___1___shared_weak_count___release_weak(v18);
    }
  }
  if ((a6 & 1) != 0 ||
      *(__int64**)(a1 + 160) != v6 && (*(_BYTE*)(a1 + 204) & 1) == 0) {
    result = LayoutAccessor_1562680(a2, "Change", 1.0);
  }
  *(_QWORD*)(a1 + 160) = v6;
  return result;
}

__int64 BattleInfoWindow_18352d0(__int64 a1, __int64 a2, unsigned int a3,
                                 __int64 a4, char a5, char a6)
{
  __int64 v6;
  __int64 v7;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 result;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  v6 = *(_QWORD*)(a1 + 184);
  v7 = *(_QWORD*)(a4 + 56);
  *(_BYTE*)(a1 + 225) = a5;
  if (v6 != 0) {
    v12 = v6;
  }
  else {
    v12 = v7;
  }
  GameRoutine_1560070((void*)&v20, a2, "L_ArrowL");
  if (v21 != 0) {
    v13 = std___1___shared_weak_count_lock(v21);
    if (v13 != 0) {
      v14 = v13;
      if (v20 != 0) {
        GameRoutine_159da00(v20, a3, 6);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
        std___1___shared_weak_count___release_weak(v14);
      }
    }
    if (v21 != 0) {
      std___1___shared_weak_count___release_weak(v21);
    }
  }
  GameRoutine_1560070((void*)&v18, a2, "L_ArrowR");
  result = v19;
  if (v19 != 0) {
    v16 = std___1___shared_weak_count_lock(v19);
    if (v16 != 0) {
      v17 = v16;
      if (v18 != 0) {
        GameRoutine_159da00(v18, a3, 7);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        std___1___shared_weak_count___release_weak(v17);
      }
    }
    result = v19;
    if (v19 != 0) {
      result = std___1___shared_weak_count___release_weak(v19);
    }
  }
  if ((a6 & 1) != 0 ||
      *(_QWORD*)(a1 + 168) != v12 && (*(_BYTE*)(a1 + 204) & 1) == 0) {
    result = LayoutAccessor_1562680(a2, "Change", 1.0);
  }
  *(_QWORD*)(a1 + 168) = v12;
  return result;
}

__int64 BattleInfoWindow_1835440(__int64 a1, __int64 a2, int a3, int a4,
                                 unsigned int a5, __int64 a6)
{
  __int64 v10;
  __int64 result;
  __int64 v12;
  const char* v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[4];
  int v17;
  int v18;
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

  v10 = LayoutAccessor_155fbe0(a1 + 24, a2);
  result = ui_LayoutAccessor_SetPaneVisible(v10, "A_Cost", a5);
  if ((a5 & 1) != 0) {
    LayoutAccessor_1562060(v10, "T_Cost_Title", a6);
    v19 = -1;
    v20 = -1;
    v21 = -1;
    v22 = -1;
    v12 = *msg_MessageManager_instance__ptr[0];
    v23 = -1;
    v24 = -1;
    v25 = -1;
    v26 = -1;
    v27 = -1;
    v28 = -1;
    v29 = -1;
    v30 = -1;
    v16[0] = GameData_212e348 + 2;
    v16[1] = 0xFFFF0001FFFF0000LL;
    v16[2] = 0xFFFF0004FFFF0002LL;
    v16[3] = 0xFFFF0006FFFF0005LL;
    v31 = 8;
    v17 = -65529;
    v18 = -65528;
    v13 = (const char*)GameRoutine_a4dbe0(v12, "MID_Sys_RightArrow", 0, v16);
    v14 = game_util_Format("%d%s%d", a3, v13, a4);
    v15 = ui_LayoutAccessor_FindTextBox(v10, "T_Cost_Num");
    if (v15 != 0) {
      GameRoutine_156c5d0(v15, v14, 0);
    }
    result = ui_LayoutAccessor_FindPane(v10, "A_Cost");
    if (result != 0) {
      result =
          __dynamic_cast(result, GameData_212d670[0], GameData_21318d0[0], 0);
      if (result != 0) {
        return Alignment_56b600();
      }
    }
  }
  return result;
}

__int64 BattleInfoWindow_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  *a1 = game_map_BattleInfoWindow_vtable;
  a1[30] = GameData_20e3528;
  a1[31] = GameData_20e3558;
  v2 = a1[1];
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = a1[2];
  a1[1] = 0;
  a1[2] = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_155e140(a1 + 3);
  a1[30] = GameData_20e3600;
  if ((_QWORD*)GameData_21d3f58 == a1) {
    GameData_21d3f58 = 0;
    GameData_226b318 = 0;
  }
  return BattleInfoWindowBase_DeletingDestructor(a1);
}

__int64 BattleInfoWindow_183eeb0(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;

  *(a1 - 30) = game_map_BattleInfoWindow_vtable;
  v2 = a1 - 30;
  *a1 = GameData_20e3528;
  a1[1] = GameData_20e3558;
  v3 = *(a1 - 29);
  if (v3 != 0) {
    *(_BYTE*)(v3 + 2376) = 1;
  }
  v4 = *(a1 - 28);
  *(a1 - 29) = 0;
  *(a1 - 28) = 0;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  GameRoutine_155e140(a1 - 27);
  *a1 = GameData_20e3600;
  if ((_QWORD*)GameData_21d3f58 == v2) {
    GameData_21d3f58 = 0;
    GameData_226b318 = 0;
  }
  return BattleInfoWindowBase_DeletingDestructor(v2);
}

__int64 BattleInfoWindow_Unknown2(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *a1 = game_map_BattleInfoWindow_vtable;
  a1[30] = GameData_20e3528;
  a1[31] = GameData_20e3558;
  v2 = a1[1];
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = a1[2];
  a1[1] = 0;
  a1[2] = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_155e140(a1 + 3);
  a1[30] = GameData_20e3600;
  if ((_QWORD*)GameData_21d3f58 == a1) {
    GameData_21d3f58 = 0;
    GameData_226b318 = 0;
  }
  BattleInfoWindowBase_DeletingDestructor(a1);
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, a1);
}

__int64 BattleInfoWindow_183f070(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(a1 - 30) = game_map_BattleInfoWindow_vtable;
  v2 = a1 - 30;
  *a1 = GameData_20e3528;
  a1[1] = GameData_20e3558;
  v3 = *(a1 - 29);
  if (v3 != 0) {
    *(_BYTE*)(v3 + 2376) = 1;
  }
  v4 = *(a1 - 28);
  *(a1 - 29) = 0;
  *(a1 - 28) = 0;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  GameRoutine_155e140(a1 - 27);
  *a1 = GameData_20e3600;
  if ((_QWORD*)GameData_21d3f58 == v2) {
    GameData_21d3f58 = 0;
    GameData_226b318 = 0;
  }
  BattleInfoWindowBase_DeletingDestructor(v2);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v2);
}

void BattleInfoWindow_183f160(__int64 a1)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  long double v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v16;
  __int64 v17;
  _QWORD* v18;
  char v19;
  __int64 v20;
  char v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  char v34;
  __int64 v35;
  __int64 v36;
  char v37;
  long double v38;
  __int64 v39;
  __int64 v40;
  __int16* v41;
  int v42;
  __int64 v43;
  __int64 v44;
  __int16* v45;
  _QWORD v46[2];
  __int64 v47;
  __int64 v48;

  if (*(_BYTE*)(a1 + 197) == 1 && *(_BYTE*)(a1 + 128) == 1) {
    v3 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 224LL))(a1, 1);
    if ((LayoutAccessor_1563380(a1 + 24, v3, 0) & 1) != 0) {
      GameRoutine_1014aa0(*(_QWORD*)(a1 + 136));
      GameRoutine_1014aa0(*(_QWORD*)(a1 + 144));
      *(_BYTE*)(a1 + 197) = 0;
    }
  }
  if (GameData_21d3f58 != 0 && *(int*)(GameData_21d3f58 + 256) > 0) {
    return;
  }
  v4 = *(_QWORD*)(a1 + 152);
  if (v4 == 0) {
    v6 = *(_QWORD*)a1;
    goto LABEL_19;
  }
  v5 = *(_QWORD*)(v4 + 40);
  v6 = *(_QWORD*)a1;
  if (v5 == 0) {
  LABEL_19:
    (*(void (**)(__int64))(v6 + 32))(a1);
    return;
  }
  v7 = ((long double (*)(__int64)) * (_QWORD*)(v6 + 24))(a1);
  v46[0] = "L_OverBlaze";
  v46[1] = 11;
  GameRoutine_1573280((void*)(&v47), a1 + 24, v46, v7);
  if (v48 != 0) {
    v8 = std___1___shared_weak_count_lock(v48);
    v9 = v47;
    if (v48 != 0) {
      std___1___shared_weak_count___release_weak(v48);
    }
    if (v8 != 0 && v9 != 0) {
      GameRoutine_18ca1f0(
          v9,
          *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 104LL));
      goto LABEL_21;
    }
    if (v8 != 0) {
    LABEL_21:
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak(v8);
      }
    }
  }
  v10 = *(_QWORD**)(a1 + 152);
  v11 = v10[5];
  v12 = v10[100];
  if ((*(_BYTE*)(v10[98] + 11277LL) & 0x80) != 0) {
    v13 = 0;
  }
  else {
    v13 = v10[101];
  }
  v16 = *(_QWORD*)(a1 + 272) != v12 || *(_QWORD*)(a1 + 264) != v11 ||
        v13 != *(_QWORD*)(a1 + 280);
  if (v11 != 0 && ((v17 = *(_QWORD*)(v11 + 440), v18 = v10 + 2, v17 == 0)
                       ? (v19 = 9)
                       : (v19 = *(_BYTE*)(v17 + 16)),
                   ((1 << v19) & 0xF1) != 0) ||
      v12 != 0 && ((v20 = *(_QWORD*)(v12 + 440), v18 = v10 + 97, v20 == 0)
                       ? (v21 = 9)
                       : (v21 = *(_BYTE*)(v20 + 16)),
                   ((1 << v21) & 0xF1) != 0)) {
    v22 = (_QWORD*)((char*)v18 + 44);
    if (*((_WORD*)v18 + 22) == 0) {
      v23 = *((unsigned int*)v18 + 10);
      if ((v23 & 0x80000000) != 0) {
        v22 = &game_g_empty_item;
      }
      else {
        v22 = (__int64*)(v18[3] + 8 * v23 + 828);
      }
    }
    if (*v22 != *game_g_empty_item_ptr) {
      v16 |= v22 != *(__int64**)(a1 + 160);
    }
  }
  v24 = *(_QWORD*)(a1 + 184);
  if (v24 == 0) {
    v24 = v10[9];
  }
  if (((v24 != *(_QWORD*)(a1 + 288)) | v16 & 1) != 0 ||
      (*(_BYTE*)(a1 + 204) & 1) != 0 || (*(_BYTE*)(a1 + 296) & 1) != 0 ||
      (*(_BYTE*)(a1 + 297) & 1) != 0) {
    v27 = *(_QWORD*)a1;
    *(_BYTE*)(a1 + 193) = 0;
    (*(void (**)(__int64))(v27 + 208))(a1);
    v28 = *(_QWORD**)(a1 + 152);
    if ((*(_DWORD*)(v28[98] + 11276LL) & 0x8000) != 0) {
      v29 = 0;
    }
    else {
      v29 = v28[101];
    }
    *(_QWORD*)(a1 + 280) = v29;
    *(_QWORD*)(a1 + 264) = v28[5];
    *(_QWORD*)(a1 + 272) = v28[100];
    v30 = *(_QWORD*)(a1 + 184);
    if (v30 == 0) {
      v30 = v28[9];
    }
    *(_QWORD*)(a1 + 288) = v30;
    v31 = GameData_212cff0[0];
    (*(void (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 192LL))(
        a1, *(unsigned __int8*)(*GameData_212cff0[0] + 32), 0);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)a1 + 64LL))(a1, 0);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)a1 + 88LL))(a1, 0);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)a1 + 96LL))(a1, 0);
    GameRoutine_183faa0(a1, 0);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)a1 + 104LL))(a1, 0);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)a1 + 112LL))(a1, 0);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)a1 + 120LL))(a1, 0);
    GameRoutine_1835ac0((_QWORD*)a1, 0);
    GameRoutine_1836b00(a1, 0);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)a1 + 184LL))(a1, 0);
    GameRoutine_1836ca0((_QWORD*)a1, 0);
    GameRoutine_1837020(a1, 0);
    (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 64LL))(a1, 1);
    (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 88LL))(a1, 1);
    (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 96LL))(a1, 1);
    GameRoutine_183faa0(a1, 1);
    (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 104LL))(a1, 1);
    (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 112LL))(a1, 1);
    (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 120LL))(a1, 1);
    GameRoutine_1835ac0((_QWORD*)a1, 1u);
    GameRoutine_1836b00(a1, 1);
    (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 184LL))(a1, 1);
    GameRoutine_1836ca0((_QWORD*)a1, 1u);
    GameRoutine_1837020(a1, 1);
    GameRoutine_1837780((float*)a1, 0);
    GameRoutine_1839560(a1, *(_BYTE*)(*v31 + 32), 1u);
    v32 = *(_QWORD*)a1;
    v33 = *(_QWORD*)(a1 + 152);
    LOBYTE(v47) = 0;
    v34 = (*(__int64 (**)(__int64, __int64*))(v32 + 40))(a1, &v47);
    (*(void (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 80LL))(
        a1, v34 & 1, *(_QWORD*)(v33 + 40));
    v35 = *(_QWORD*)a1;
    v36 = *(_QWORD*)(a1 + 152);
    LOBYTE(v47) = 1;
    v37 = (*(__int64 (**)(__int64, __int64*))(v35 + 40))(a1, &v47);
    (*(void (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 80LL))(
        a1, v37 & 1, *(_QWORD*)(v36 + 800));
    if ((snd_fnd_WeakHandle_isValid(a1 + 304) & 1) != 0) {
      *(__n128*)&v38 = snd_Fade_Fade_10c830(&v47, 0.0);
      snd_stop_ffc40(a1 + 304, &v47, v38);
      snd_Fade_Destroy_Fade(&v47);
      snd_fnd_WeakHandle_reset(a1 + 304);
    }
    if ((BattleInfo_797b50(*(_QWORD*)(a1 + 152)) & 1) != 0) {
      v39 = *(_QWORD*)(*(_QWORD*)(a1 + 152) + 24LL);
      v40 = *(unsigned int*)(v39 + 11256);
      if ((_DWORD)v40 != 0) {
        v41 = (__int16*)(v39 + 3080);
        while (1) {
          v42 = *v41;
          v41 += 32;
          if (v42 <= 0) {
            break;
          }
          if (--v40 == 0) {
            goto LABEL_72;
          }
        }
        game_80c7f0((void*)(&v47), "VIB_HeartBeat_Fast");
        GameRoutine_112180(a1 + 304, &v47);
      }
    LABEL_72:
      if ((snd_fnd_WeakHandle_isValid(a1 + 304) & 1) == 0) {
        v43 = *(_QWORD*)(*(_QWORD*)(a1 + 152) + 24LL);
        v44 = *(unsigned int*)(v43 + 11256);
        if ((_DWORD)v44 != 0) {
          v45 = (__int16*)(v43 + 3082);
          while ((~*(_DWORD*)(v45 - 3) & 0x22) != 0 || *v45 < 1) {
            --v44;
            v45 += 32;
            if (v44 == 0) {
              goto LABEL_79;
            }
          }
          game_80c7f0((void*)(&v47), "VIB_HeartBeat_Slow");
          GameRoutine_112180(a1 + 304, &v47);
        }
      }
    }
  LABEL_79:
    v26 = 1;
    v25 = a1;
  }
  else {
    v25 = a1;
    v26 = 0;
  }
  GameRoutine_1839980(v25, v26);
}

__int64 BattleInfoWindow_Unknown3(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = result;
  if (*(_QWORD*)GameData_212d220[0] == 0 ||
      *(int*)(*(_QWORD*)GameData_212d220[0] + 256LL) <= 0) {
    if ((GameRoutine_1832b70(result, 0, 0) & 1) != 0) {
      *(_BYTE*)(v1 + 204) = 1;
      GameRoutine_183f160(v1);
    }
    if ((*(_BYTE*)(v1 + 299) & 1) == 0) {
      *(_BYTE*)(v1 + 299) = 1;
      v2 = (__int64*)GameData_212d8b0[0];
      v3 = *(_QWORD*)GameData_212d8b0[0];
      if (*(_QWORD*)GameData_212d8b0[0] != 0) {
        *(_BYTE*)(v3 + 256) = 0;
        GameRoutine_18aee60(v3, v1 + 24);
        GameRoutine_18ae960(v3, 1);
        v4 = *(_QWORD*)(v3 + 240);
        *(_QWORD*)(v3 + 232) = 0;
        *(_QWORD*)(v3 + 240) = 0;
        if (v4 != 0) {
          std___1___shared_weak_count___release_weak(v4);
        }
        *(_BYTE*)(v3 + 257) = 0;
        *(_DWORD*)(v3 + 248) = -1;
        v5 = *v2;
        if (*v2 != 0) {
          *(_QWORD*)(v5 + 268) = 0x44048000C46D8000LL;
          *(_QWORD*)(v5 + 276) = 0xC4048000446D8000LL;
        }
      }
    }
    return GameRoutine_155e830(v1 + 24, 1);
  }
  return result;
}

__int64 BattleInfoWindow_Unknown4(__int64 a1)
{
  __int64 v2;
  long double v3;
  char v5[4];
  __int64* v6;
  int v7;
  __int64 v8;

  CombatHudWindow_1832b70(a1, 1, 0);
  if (*(_BYTE*)(a1 + 299) != 0) {
    *(_BYTE*)(a1 + 299) = 0;
    v2 = GameData_21f1e08;
    if (GameData_21f1e08 != 0) {
      if (*(_QWORD*)(GameData_21f1e08 + 152) != 0) {
        v8 = 0;
        v6 = GameData_212d890[0] + 2;
        v7 = 44;
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64**))(
            *(_QWORD*)(GameData_21f1e08 + 8) + 16LL))(
            (void*)v5, GameData_21f1e08 + 8, &v6);
      }
      *(_QWORD*)(v2 + 160) = 0;
      FloatingHelp_18af120(v2, a1 + 24);
      GameRoutine_18af980(v2, a1 + 24);
    }
  }
  if ((snd_fnd_WeakHandle_isValid(a1 + 304) & 1) != 0) {
    *(__n128*)&v3 = snd_Fade_Fade_10c830(&v6, 0.0);
    snd_stop_ffc40(a1 + 304, &v6, v3);
    snd_Fade_Destroy_Fade(&v6);
    snd_fnd_WeakHandle_reset(a1 + 304);
  }
  return GameRoutine_1839880(a1);
}

void BattleInfoWindow_183fa50()
{
  if (GameData_21d3f58 != 0) {
    *(_BYTE*)(GameData_21d3f58 + 296) = 1;
    if (GameData_21f1e08 != 0) {
      GameRoutine_18ae960(GameData_21f1e08, 0);
    }
  }
}

__int64 BattleInfoWindow_Unknown25(__int64 a1)
{
  unsigned int v1;
  __int64 result;
  __int64 v4;
  unsigned __int16* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  int v10;
  __int64 v12;
  int v13;
  __int64 v15;
  unsigned int v17;
  int v18;

  if (GameData_21cd0e8 == 0) {
    return 0;
  }
  v1 = *(unsigned __int8*)(GameData_21cd0e8 + 32);
  if (v1 > 0x1B) {
    return 0;
  }
  result = 1;
  if (((1 << v1) & 0x370) == 0) {
    if (((1 << v1) & 0x8000008) != 0) {
      return result;
    }
    return 0;
  }
  v4 = *(_QWORD*)(a1 + 152);
  if (v4 == 0) {
    return 0;
  }
  v5 = (unsigned __int16*)(v4 + 60);
  if (*(_WORD*)(v4 + 60) != 0) {
  LABEL_8:
    v7 = *v5;
    if (v7 == 0) {
      goto LABEL_13;
    }
    goto LABEL_9;
  }
  v6 = *(unsigned int*)(v4 + 56);
  if ((v6 & 0x80000000) == 0) {
    v5 = (unsigned __int16*)(*(_QWORD*)(v4 + 40) + 8 * v6 + 828);
    goto LABEL_8;
  }
  v7 = (unsigned __int16)game_g_empty_item;
  if ((_WORD)game_g_empty_item != 0) {
  LABEL_9:
    v8 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8 * v7);
    v9 = *(unsigned __int8*)(v8 + 72);
    v10 = *(unsigned __int8*)(v8 + 73);
    if (v9 <= 7 && v10 == 7) {
      return result;
    }
  }

LABEL_13:
  v12 = *(_QWORD*)(v4 + 72);
  if (v12 == 0 ||
      (((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v12 + 104)) & 1) ==
          0) {
    return 0;
  }
  v13 = *(unsigned __int8*)(v12 + 106);
  if (*(_BYTE*)(v12 + 106) == 0 || v13 == 6) {
    v15 = *(_QWORD*)(v12 + 576);
    if (v15 != 0) {
      goto LABEL_28;
    }
    return 0;
  }
  if (v13 == 1) {
    v15 = *(_QWORD*)(v12 + 576);
    if (v15 == 0) {
      return result;
    }
  LABEL_28:
    if (*(unsigned __int8*)(v15 + 72) <= 7u && *(_BYTE*)(v15 + 73) == 1) {
      return result;
    }
    goto LABEL_34;
  }
  v15 = *(_QWORD*)(v12 + 576);
  if (v15 == 0) {
    return 0;
  }

LABEL_34:
  v17 = *(unsigned __int8*)(v15 + 72);
  v18 = *(unsigned __int8*)(v15 + 73);
  if (v17 > 7 || v18 != 7) {
    return 0;
  }
  return result;
}

__int64 BattleInfoWindow_Unknown21(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v10;

  v4 = *(_QWORD*)(a3 + 8);
  v5 = *(unsigned __int8*)(v4 + 3068);
  v6 = v4 + 3064;
  if (v5 == 1) {
    goto LABEL_5;
  }
  v7 = v4 + 3086;
  do {
    v8 = *(unsigned __int8*)(v7 + 46);
    v7 += 64;
  } while (v8 != 1);
  while (v5 != 24) {
  LABEL_5:
    v5 = *(unsigned __int8*)(v6 + 68);
    v6 += 64;
  }
  if (*GameData_212cfd0[0] != 0) {
    v10 = 0;
    if (*(_BYTE*)(*GameData_212cfd0[0] + 20) == 27) {
      LODWORD(v10) = 1953396079;
      return GameRoutine_1835440();
    }
  }
  else {
    v10 = 0;
  }
  if ((a4 & 1) != 0) {
    strcpy((char*)&v10 + 1, "g");
  }
  else {
    strcpy((char*)&v10 + 1, "dure");
  }
  return GameRoutine_1835440();
}

__int64 BattleInfoWindow_Unknown24(__int64 a1, char a2, char a3)
{
  __int64 v3;
  int v4;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  int v15;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  unsigned __int8 v21;
  __int64 v22;

  if (a2 != 4) {
    if (a2 != 5) {
      return GameRoutine_18357c0(a1, a2, a3 & 1);
    }
    v3 = *(_QWORD*)(a1 + 288);
    if (v3 == 0) {
      return GameRoutine_18357c0(a1, a2, a3 & 1);
    }
    if ((((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v3 + 104)) & 1) ==
        0) {
      goto LABEL_26;
    }
    v4 = *(unsigned __int8*)(v3 + 106);
    if (*(_BYTE*)(v3 + 106) == 0 || v4 == 6) {
      v6 = *(_QWORD*)(v3 + 576);
      if (v6 == 0) {
        goto LABEL_26;
      }
    }
    else {
      if (v4 != 1) {
        goto LABEL_26;
      }
      v6 = *(_QWORD*)(v3 + 576);
      if (v6 == 0) {
        return GameRoutine_18357c0(a1, a2, a3 & 1);
      }
    }
    v14 = *(unsigned __int8*)(v6 + 72);
    v15 = *(unsigned __int8*)(v6 + 73);
    if (v14 > 7 || v15 != 1) {
    LABEL_26:
      v17 = *(_QWORD**)(a1 + 152);
      v18 = v17[100];
      if (v18 == 0 || *(_QWORD*)(v18 + 392) == 0) {
        if ((*(_BYTE*)(v17[98] + 11277LL) & 0x80) != 0) {
          return GameRoutine_1562cf0(a1 + 24, "Info_Battle_PlayerOnly");
        }
        v19 = (_QWORD*)v17[101];
        if (v19 == nullptr) {
          return GameRoutine_1562cf0(a1 + 24, "Info_Battle_PlayerOnly");
        }
        v20 = a1;
        v21 = (unsigned __int8)X8CALL_X0(
            _QWORD*, (*(__attribute__((swiftcall)) void (**)(
                         PSEUDO_X8, _QWORD*))*v19)((void*)v19, v19));
        a1 = v20;
        if ((v21 & 1) == 0) {
          return GameRoutine_1562cf0(a1 + 24, "Info_Battle_PlayerOnly");
        }
      }
      return GameRoutine_1562cf0(a1 + 24, "Info_Battle_TargetUnit_HPOff");
    }
    return GameRoutine_18357c0(a1, a2, a3 & 1);
  }
  v7 = *(_QWORD*)(a1 + 152);
  v8 = (__int64*)(v7 + 60);
  if (*(_WORD*)(v7 + 60) != 0) {
    v9 = *(_QWORD*)(v7 + 40);
    if (v9 == 0) {
      goto LABEL_33;
    }
  }
  else {
    v13 = *(unsigned int*)(v7 + 56);
    if ((v13 & 0x80000000) != 0) {
      v8 = &game_g_empty_item;
      v9 = *(_QWORD*)(v7 + 40);
      if (v9 == 0) {
        goto LABEL_33;
      }
    }
    else {
      v8 = (__int64*)(*(_QWORD*)(v7 + 40) + 8 * v13 + 828);
      v9 = *(_QWORD*)(v7 + 40);
      if (v9 == 0) {
        goto LABEL_33;
      }
    }
  }
  v10 = *(_QWORD*)(v9 + 440);
  if (v10 != 0) {
    v11 = *(unsigned __int8*)(v10 + 16);
    v12 = *(_QWORD*)(v7 + 800);
    if (v12 == 0) {
      goto LABEL_37;
    }
    goto LABEL_34;
  }

LABEL_33:
  v11 = 9;
  v12 = *(_QWORD*)(v7 + 800);
  if (v12 != 0) {
  LABEL_34:
    v22 = *(_QWORD*)(v12 + 440);
    if (v22 != 0) {
      if (v11 != *(unsigned __int8*)(v22 + 16)) {
        return GameRoutine_18357c0(a1, a2, a3 & 1);
      }
      goto LABEL_38;
    }
  }

LABEL_37:
  if (v11 != 9) {
    return GameRoutine_18357c0(a1, a2, a3 & 1);
  }

LABEL_38:
  if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL * *(unsigned __int16*)v8) +
                          88LL) >>
          ((*((_BYTE*)v8 + 3) & 8) != 0) !=
      0) {
    return GameRoutine_18357c0(a1, a2, a3 & 1);
  }
  return GameRoutine_1562cf0(a1 + 24, "Info_Battle_TargetUnit_HPOff");
}

__int64 BattleInfoWindow_18403e0(__int64 a1)
{
  return (*(__int64 (**)(__int64))(*(_QWORD*)(a1 - 248) + 32LL))(a1 - 248);
}

__int64 BattleInfoWindow_1840400(__int64 a1)
{
  return (*(__int64 (**)(__int64))(*(_QWORD*)(a1 - 248) + 24LL))(a1 - 248);
}

#pragma GCC visibility pop
