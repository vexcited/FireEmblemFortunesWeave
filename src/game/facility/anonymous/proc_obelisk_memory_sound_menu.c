#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1562f00(_QWORD, _QWORD);
__int64 GameRoutine_1563030(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15638b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1567590(_QWORD, _QWORD);
__int64 GameRoutine_16abc40(_QWORD);
__int64 GameRoutine_16df7a0(_QWORD);
__int64 GameRoutine_16e3a80(_QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_811a70(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16dd9a0(void);
__int64 game_menu_BasicMenu_Unknown96(void);
__int64 game_menu_GameMenu_Unknown135(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 snd_BGM_getFirstName(_QWORD);
__int64 snd_BGM_isActive_dc740(_QWORD);
__int64 snd_BGM_isFirstActive(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Fade_10c910(_QWORD, _QWORD);
__int64 snd_startSlotVolume_100ab0(_QWORD, _QWORD, float);
extern __int64 (*GameData_20899b8[])();
extern __int64 GameData_2089750;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e008[9];
extern __int64* game_sound_g_game_sound_ptr[5];
extern char GameData_1a9f09e;
extern char game_facility_g_memory_sound_playing;
extern int GameData_21d87ec;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcObeliskMemorySoundMenu_Unknown2(__int64 a1);
__int64 ProcObeliskMemorySoundMenu_Unknown88(__int64 a1);
__int64 ProcObeliskMemorySoundMenu_Unknown94(__int64 a1);
__int64 ProcObeliskMemorySoundMenu_Unknown96(__int64 a1);
__int64 ProcObeliskMemorySoundMenu_Unknown101(__int64 a1);
__int64 ProcObeliskMemorySoundMenu_Unknown129(__int64 a1);
__int64 ProcObeliskMemorySoundMenu_Unknown135(__int64 a1, __int64 a2);
__int64 ProcObeliskMemorySoundMenu_Unknown143(__int64 a1, __int64* a2);
__int64 GameRoutine_16ac260(_QWORD, _QWORD, _QWORD);
__int64 ProcObeliskMemorySoundMenu_Unknown7(__int64 a1, unsigned int a2);
__int64 ProcObeliskMemorySoundMenu_Unknown8(__int64 a1, unsigned int a2);
bool game_facility_anonymous_ProcObeliskMemorySoundMenu_SortAndFilter_closure_Invoke(
    __int64 a1, __int64 a2, __int64 a3);
_QWORD* BasicMenuCursor_16e0c00(_QWORD* result, __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__attribute__((swiftcall)) void snd_a35e20(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 ControlCreator_13633c0(_QWORD);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_1567590_alt1(__int64 result,
                                 char) __asm__("GameRoutine_1567590");
__int64 GameRoutine_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_811b80();
__int64 GameRoutine_811c50();
__int64 LayoutAccessor_1562680(__int64 result, __int64, float);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 LayoutAccessor_1563030(__int64 result, __int64, char);
__int64 PageTab_16e6880(_QWORD, _QWORD, _QWORD, _QWORD, long double);
__int64 Pane_58fac0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_menu_BasicMenu_Unknown16dd9a0_alt1(__int64 result) __asm__(
    "game_menu_BasicMenu_Unknown16dd9a0");
__int64 game_menu_PageTab_Move(__int64, int, char);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_startSlotVolume_100b50(int*, __int64, float);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
__int64 ui_LayoutAccessor_IsPaneVisible(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
__n128 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
char* GameRoutine_a4dbe0(__int64, _BYTE*, char);
const char* game_facility_anonymous_16abe00(int, int);
extern __int64 (*game_facility_anonymous_SoundMenuItem_vtable[])();
extern __int64* msg_MessageManager_instance__ptr[2];
extern char game_sound_g_vibration_enabled;
extern int GameData_2260e88;
extern int GameData_2260e90;
extern int GameData_2260e98;
extern int GameData_2260ea0;
extern int GameData_2260ea8;
extern int GameData_2260eb0;
struct PseudoSret
    LayoutAccessor_1560070_alt1(_QWORD,
                                _QWORD) __asm__("LayoutAccessor_1560070");
unsigned __int8* snd_fnd_calcCrc32(unsigned __int8* result, int);
void GameRoutine_156c5d0(__int64, __int64, char);
void LayoutAccessor_1562060(__int64*, __int64, _BYTE*);
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
void snd_Fade_Fade_10c910_alt1(__int64, int) __asm__("snd_Fade_Fade_10c910");
__attribute__((swiftcall)) void
ProcObeliskMemorySoundMenu_Unknown46(PSEUDO_X8 x8_, __int64 a1);
__attribute__((swiftcall)) void
ProcObeliskMemorySoundMenu_Unknown47(PSEUDO_X8 x8_, __int64 a1);
void ProcObeliskMemorySoundMenu_Unknown84(__int64 a1);
__int64 ProcObeliskMemorySoundMenu_Unknown128(_QWORD* a1);
__int64 ProcObeliskMemorySoundMenu_Unknown146();
__int64 ProcObeliskMemorySoundMenu_Unknown147();
__int64 ProcObeliskMemorySoundMenu_Unknown148();
__int64 ProcObeliskMemorySoundMenu_Unknown18();
__int64 ProcObeliskMemorySoundMenu_Unknown21();
__int64 ProcObeliskMemorySoundMenu_Unknown22();
bool ProcObeliskMemorySoundMenu_16abc40(__int64 a1);
__int64 ProcObeliskMemorySoundMenu_16ac260(__int64 a1, char a2, char a3);
__int64 GameRoutine_156c5d0_alt1(_QWORD, _QWORD,
                                 _QWORD) __asm__("GameRoutine_156c5d0");
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 GameRoutine_8118f0(_QWORD);
__int64 GameRoutine_a4dbe0_alt1(_QWORD, _QWORD, _QWORD,
                                _QWORD) __asm__("GameRoutine_a4dbe0");
__int64 LayoutAccessor_1562060_alt1(_QWORD, _QWORD,
                                    _QWORD) __asm__("LayoutAccessor_1562060");
__int64
LayoutAccessor_1562680_alt1(_QWORD, _QWORD,
                            long double) __asm__("LayoutAccessor_1562680");
__int64 ProcObeliskMemorySoundMenu_16abc40_alt1(_QWORD) __asm__(
    "ProcObeliskMemorySoundMenu_16abc40");
__int64 game_facility_anonymous_16abe00_alt1(_QWORD, _QWORD) __asm__(
    "game_facility_anonymous_16abe00");
__int64 game_menu_BasicMenu_Unknown16dd9a0_alt2(_QWORD) __asm__(
    "game_menu_BasicMenu_Unknown16dd9a0");
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(_QWORD, _QWORD);
__int64 game_menu_PageTab_Update(_QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD);
__int64
snd_startSlotVolume_100b50_alt1(_QWORD, _QWORD,
                                double) __asm__("snd_startSlotVolume_100b50");
__n128 snd_fnd_calcCrc32_alt1(_QWORD, _QWORD) __asm__("snd_fnd_calcCrc32");
extern __int64* GameData_212e348;
struct PseudoSret snd_BGM_getFirstHandle(_QWORD);
__int64 ProcObeliskMemorySoundMenu_Unknown100(__int64 a1);

__int64 ProcObeliskMemorySoundMenu_Unknown2(__int64 a1)
{
  __int64 result;
  int v3;
  __int64 v4;
  __int64 v5;
  int v6;
  _BOOL4 v7;

  result = GameRoutine_16df7a0(a1);
  v3 = *(_DWORD*)(a1 + 1248);
  if (v3 == 2) {
    result = snd_BGM_isActive_dc740(result);
    if ((result & 1) == 0) {
      return GameRoutine_16abc40(a1);
    }
  }
  else if (v3 == 1) {
    result = snd_BGM_isActive_dc740(result);
    if ((result & 1) != 0) {
      v4 = *(_QWORD*)(a1 + 336);
      *(_DWORD*)(a1 + 1248) = 2;
      if (v4 != 0 && (v5 = __dynamic_cast(v4, GameData_212e008[0],
                                          &GameData_2089750, 0)) != 0) {
        v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 464LL))(v5) ^ 1;
        v7 = *(_DWORD*)(a1 + 1248) == 0;
      }
      else {
        v7 = false;
        LOBYTE(v6) = 1;
      }
      GameRoutine_1567590("Play", v6 & 1);
      return GameRoutine_1567590("Stop", v7);
    }
  }
  return result;
}

__attribute__((swiftcall)) void

ProcObeliskMemorySoundMenu_Unknown46(PSEUDO_X8 x8_, __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 result;

  result = ui_LayoutAccessor_IsPaneVisible(a1 + 848, "N_Battle");
  if ((result & 1) != 0) {
    (__int64)(LayoutAccessor_1560070((void*)(a2), a1 + 848, "L_Base/L_ArrowL"),
              (void*)(a2));
    return;
  }
  *a2 = 0;
  a2[1] = 0;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

ProcObeliskMemorySoundMenu_Unknown47(PSEUDO_X8 x8_, __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 result;

  result = ui_LayoutAccessor_IsPaneVisible(a1 + 848, "N_Battle");
  if ((result & 1) != 0) {
    (__int64)(LayoutAccessor_1560070((void*)(a2), a1 + 848, "L_Base/L_ArrowR"),
              (void*)(a2));
    return;
  }
  *a2 = 0;
  a2[1] = 0;
  {
    result;
    return;
  }
}

void ProcObeliskMemorySoundMenu_Unknown84(__int64 a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  unsigned int v7;
  long double v8;
  unsigned int v9;
  __int64 v10;
  long double v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  float v21;
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
  float v38;
  __int64 v39;
  float v40;
  float v41;
  float v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  int v48;
  char v49;
  __int64 v50;
  float v51;
  float v52;
  __int64 v53;
  __int64 v54;
  float v55;
  float v56;
  char v57;
  __int64 v58;
  float v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  _BYTE v64[4];
  _DWORD v65[2];

  v1 = (_QWORD*)(a1 + 848);
  *(_DWORD*)(a1 + 1120) = ~*(_DWORD*)(a1 + 1088) + *(_DWORD*)(a1 + 1096);
  *(_QWORD*)(a1 + 1124) = 0;
  *(struct PseudoSret*)(&v62) =
      LayoutAccessor_1560070_alt1(a1 + 848, "L_Change");
  if (v63 != 0) {
    v3 = std___1___shared_weak_count_lock(v63);
    v4 = v3;
    if (v3 != 0) {
      v5 = v62;
      v6 = 0;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_7;
    }
    v5 = 0;
  }
  else {
    v5 = 0;
    v4 = 0;
  }
  v6 = 1;
LABEL_7:
  v7 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  if (v4 != 0) {
    v9 = v7;
    v10 = std___1___shared_weak_count_lock(v4);
    if (v10 != 0) {
      v12 = v10;
      if (v5 != 0) {
        *(_DWORD*)(a1 + 1160) = 1;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                  memory_order_relaxed);
        *(_QWORD*)(a1 + 1216) = v5;
        v13 = *(_QWORD*)(a1 + 1224);
        *(_QWORD*)(a1 + 1224) = v4;
        if (v13 != 0) {
          *(__n128*)&v11 = std___1___shared_weak_count___release_weak(v13);
        }
        PageTab_16e6880(a1 + 1120, v9, 14, 15, v11);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        std___1___shared_weak_count___release_weak(v12);
      }
    }
    *(__n128*)&v8 = std___1___shared_weak_count___release_weak(v4);
  }
  if ((v6 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v4 + 16LL))(v4, v8);
    std___1___shared_weak_count___release_weak(v4);
  }
  if (v63 != 0) {
    std___1___shared_weak_count___release_weak(v63);
  }
  *(struct PseudoSret*)(&v62) = LayoutAccessor_1560070_alt1(v1, "L_Base");
  if (v63 != 0) {
    v14 = std___1___shared_weak_count_lock(v63);
    v15 = v62;
    if (v63 != 0) {
      std___1___shared_weak_count___release_weak(v63);
    }
    if (v14 != 0 && v15 != 0) {
      LayoutAccessor_1562cf0(v15, "Select");
    }
    else if (v14 == 0) {
      goto LABEL_30;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak(v14);
    }
  }
LABEL_30:
  v16 = ui_LayoutAccessor_FindPane(v1, "T_Change");
  v17 = ui_LayoutAccessor_FindPane(v1, "Bg_Change");
  v18 = ui_LayoutAccessor_FindPane(v1, "L_Change");
  v19 = ui_LayoutAccessor_FindPane(v1, "L_Change/A_Tab");
  if (v16 == 0 || v17 == 0 || v18 == 0 || v19 == 0) {
    goto LABEL_87;
  }
  v20 = ui_LayoutAccessor_FindPane(v1, "L_Change/L_ArrowL");
  if (v20 != 0) {
    v21 = (float)(*(float*)(v18 + 48) + *(float*)(v20 + 48)) -
          *(float*)(v16 + 48);
    v22 = *(_QWORD*)(a1 + 856);
    if (v22 == 0) {
      goto LABEL_42;
    }
  }
  else {
    v21 = 0.0;
    v22 = *(_QWORD*)(a1 + 856);
    if (v22 == 0) {
      goto LABEL_42;
    }
  }
  v23 = std___1___shared_weak_count_lock(v22);
  if (v23 != 0) {
    *(_BYTE*)(*v1 + 660LL) |= 2u;
    if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      v24 = *(_QWORD*)(a1 + 856);
      if (v24 != 0) {
        goto LABEL_43;
      }
    }
    else {
      v27 = v23;
      (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
      std___1___shared_weak_count___release_weak(v27);
      v24 = *(_QWORD*)(a1 + 856);
      if (v24 != 0) {
        goto LABEL_43;
      }
    }
  LABEL_48:
    (*(_BYTE*)0x294LL) |= 4u;
    v26 = *(_QWORD*)(a1 + 856);
    if (v26 == 0) {
      goto LABEL_60;
    }
    goto LABEL_49;
  }
LABEL_42:
  (*(_BYTE*)0x294LL) |= 2u;
  v24 = *(_QWORD*)(a1 + 856);
  if (v24 == 0) {
    goto LABEL_48;
  }
LABEL_43:
  v25 = std___1___shared_weak_count_lock(v24);
  if (v25 == 0) {
    goto LABEL_48;
  }
  *(_BYTE*)(*v1 + 660LL) |= 4u;
  if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    v26 = *(_QWORD*)(a1 + 856);
    if (v26 == 0) {
      goto LABEL_60;
    }
  }
  else {
    v33 = v25;
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    std___1___shared_weak_count___release_weak(v33);
    v26 = *(_QWORD*)(a1 + 856);
    if (v26 == 0) {
      goto LABEL_60;
    }
  }
LABEL_49:
  v28 = std___1___shared_weak_count_lock(v26);
  if (v28 == 0) {
    goto LABEL_53;
  }
  v29 = v28;
  if (*v1 != 0) {
    ControlCreator_13633c0(*v1);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
    std___1___shared_weak_count___release_weak(v29);
    v30 = *(_QWORD*)(a1 + 856);
    if (v30 == 0) {
      goto LABEL_60;
    }
  }
  else {
  LABEL_53:
    v30 = *(_QWORD*)(a1 + 856);
    if (v30 == 0) {
      goto LABEL_60;
    }
  }
  v31 = std___1___shared_weak_count_lock(v30);
  if (v31 != 0) {
    *(_BYTE*)(*v1 + 660LL) &= ~2u;
    if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v32 = v31;
      (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
      std___1___shared_weak_count___release_weak(v32);
    }
    goto LABEL_61;
  }
LABEL_60:
  (*(_BYTE*)0x294LL) &= ~2u;
LABEL_61:
  v34 = *(_QWORD*)(a1 + 856);
  if (v34 != 0 && (v35 = std___1___shared_weak_count_lock(v34)) != 0) {
    *(_BYTE*)(*v1 + 660LL) &= ~4u;
    if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v36 = v35;
      (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
      std___1___shared_weak_count___release_weak(v36);
    }
  }
  else {
    (*(_BYTE*)0x294LL) &= ~4u;
  }
  v37 = ui_LayoutAccessor_FindPane(v1, "L_Base");
  if (v37 != 0) {
    v38 = *(float*)(v37 + 48);
    v39 = ui_LayoutAccessor_FindPane(v1, "L_Base/Bg");
    v40 = 0.0;
    v41 = 0.0;
    if (v39 != 0) {
      v41 = *(float*)(v39 + 80) * 0.5;
    }
    v42 = v38 + v41;
    v43 = ui_LayoutAccessor_FindPane(v1, "L_Base/L_ArrowR");
    if (v43 != 0) {
      v40 = v38 + *(float*)(v43 + 48);
    }
  }
  else {
    v40 = 0.0;
    v42 = 0.0;
  }
  v44 = ui_LayoutAccessor_FindTextBox(v1, "T_Change");
  if (v44 != 0) {
    v45 = v44;
    v46 = ui_LayoutAccessor_FindTextBox(v1, "T_Change");
    if (v46 != 0) {
      GameRoutine_190a0c0(&v62, v65, v64, v46, *(_QWORD*)(v46 + 216));
      v47 = v65[0];
      v48 = v65[1];
    }
    else {
      v47 = 0;
      v48 = 0;
    }
    v49 = *(_BYTE*)(v45 + 88);
    *(_DWORD*)(v45 + 80) = v47;
    *(_DWORD*)(v45 + 84) = v48;
    *(_BYTE*)(v45 + 88) = v49 | 0x10;
  }
  v50 = ui_LayoutAccessor_FindPane(v1, "T_Change");
  v51 = 0.0;
  v52 = 0.0;
  if (v50 != 0) {
    v52 = *(float*)(v50 + 80);
  }
  v53 = ui_LayoutAccessor_FindPane(v1, "L_Change/L_ArrowR");
  if (v53 != 0) {
    v51 = *(float*)(v53 + 48);
  }
  v54 = ui_LayoutAccessor_FindPane(v1, "L_Change/L_ArrowL");
  v55 = 0.0;
  v56 = 0.0;
  if (v54 != 0) {
    v56 = *(float*)(v54 + 48);
  }
  v57 = *(_BYTE*)(v17 + 88);
  *(float*)(v17 + 48) = v42;
  *(_BYTE*)(v17 + 88) = v57 | 0x10;
  *(float*)(v18 + 48) = v40 - v51;
  *(_BYTE*)(v18 + 88) |= 0x10u;
  *(float*)(v16 + 48) = (float)((float)(v40 - v51) + v56) - v21;
  *(_BYTE*)(v16 + 88) |= 0x10u;
  v58 = Pane_58fac0(v17, "Margin_Width");
  if (v58 != 0) {
    v55 = (float)*(int*)(v58 + *(unsigned int*)(v58 + 4));
  }
  v59 = vabds_f32(v42, *(float*)(v16 + 48));
  *(_BYTE*)(v17 + 88) |= 0x10u;
  *(float*)(v17 + 80) = v55 + (float)(v52 + v59);
  v60 = ui_LayoutAccessor_FindPane(v1, "Overlay");
  if (v60 != 0) {
    *(_QWORD*)(v60 + 80) = *(_QWORD*)(v17 + 80);
    *(_BYTE*)(v60 + 88) |= 0x10u;
    v61 = *(_QWORD*)(v17 + 48);
    *(_DWORD*)(v60 + 56) = *(_DWORD*)(v17 + 56);
    *(_QWORD*)(v60 + 48) = v61;
  }
LABEL_87:
  ui_LayoutAccessor_SetPaneVisible(v1, "N_Battle", 0);
  ui_LayoutAccessor_SetPaneVisible(v1, "N_Change", 0);
}

__int64 ProcObeliskMemorySoundMenu_Unknown88(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  char v4;
  _BOOL4 v5;

  game_menu_BasicMenu_Unknown16dd9a0();
  v2 = *(_QWORD*)(a1 + 336);
  if (v2 != 0 && (v3 = __dynamic_cast(v2, GameData_212e008[0],
                                      &GameData_2089750, 0)) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 464LL))(v3) ^ 1;
  }
  else {
    v4 = 1;
  }
  v5 = *(_DWORD*)(a1 + 1248) == 0;
  GameRoutine_1567590("Play", v4 & 1);
  return GameRoutine_1567590("Stop", v5);
}

__int64 ProcObeliskMemorySoundMenu_Unknown94(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  _BYTE v5[200];

  v1 = *(_QWORD*)(a1 + 1080);
  game_facility_g_memory_sound_playing = 0;
  if ((*(_BYTE*)(a1 + 1064) & 1) != 0) {
    v3 = v1;
  }
  else {
    v3 = a1 + 1065;
  }
  GameRoutine_811a70(v3);
  *(_BYTE*)(*game_sound_g_game_sound_ptr[0] + 2600) = 0;
  snd_Fade_Fade_10c910(v5, 250);
  snd_startSlotVolume_100ab0("SE_Master", v5, 1.0);
  snd_Fade_Destroy_Fade(v5);
  --GameData_21d87ec;
  if (*(_QWORD*)(a1 + 624) != 0) {
    *(_QWORD*)(a1 + 624) = 0;
  }
  return GameRoutine_155e830(a1 + 848, 0);
}

__int64 ProcObeliskMemorySoundMenu_Unknown96(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  char v4;
  _BOOL4 v5;

  game_menu_BasicMenu_Unknown96();
  if ((*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 168LL))(a1)-8 <=
      0xFFFFFFF9) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 1056) + 96LL))(a1 + 1056);
  }
  v2 = *(_QWORD*)(a1 + 336);
  if (v2 != 0 && (v3 = __dynamic_cast(v2, GameData_212e008[0],
                                      &GameData_2089750, 0)) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 464LL))(v3) ^ 1;
  }
  else {
    v4 = 1;
  }
  v5 = *(_DWORD*)(a1 + 1248) == 0;
  GameRoutine_1567590("Play", v4 & 1);
  return GameRoutine_1567590("Stop", v5);
}

__int64 ProcObeliskMemorySoundMenu_Unknown100(__int64 a1)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v4;
  __int64 result;
  __int64 v6;
  char v7;
  long double v8;
  __int64* v9;
  __int64* i;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __n128 v15;
  int v16;
  __n128 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __n128 v21;
  int v22;
  __n128 v23;
  __int64 v24;
  long double v25;
  __int64 v26;
  const char* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  _QWORD v35[4];
  _QWORD* v36;
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
  const char* v50;

  v1 = *(_QWORD**)(a1 + 232);
  v2 = *(_QWORD**)(a1 + 240);
  while (v1 != v2) {
    v4 = *v1;
    if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v1 + 480LL))(*v1) & 1) == 0 &&
        (*(_BYTE*)(v4 + 120) & 1) != 0) {
      result = *(_QWORD*)(a1 + 336);
      if (result == 0) {
        return result;
      }
      goto LABEL_9;
    }
    ++v1;
  }
  v4 = 0;
  result = *(_QWORD*)(a1 + 336);
  if (result == 0) {
    return result;
  }
LABEL_9:
  result = __dynamic_cast(result, GameData_212e008[0], &GameData_2089750, 0);
  if (result != 0) {
    v6 = result;
    v7 = (*(__int64 (**)(__int64))(*(_QWORD*)result + 464LL))(result);
    result = 0;
    if (v4 != v6 && (v7 & 1) != 0) {
      if ((*(_BYTE*)(v6 + 123) & 1) != 0) {
        v9 = *(__int64**)(a1 + 232);
        for (i = *(__int64**)(a1 + 240); v9 != i; *(_WORD*)(v11 + 120) = 0) {
          v11 = *v9++;
        }
        v12 = game_sound_g_game_sound_ptr[0];
        *(_BYTE*)(*game_sound_g_game_sound_ptr[0] + 2600) = 0;
        if (*(_DWORD*)(v6 + 96) != 0 && (*(_BYTE*)(v6 + 120) & 1) == 0) {
          *(_BYTE*)(v6 + 120) = 1;
          v13 = ((__int64 (*)(void))game_facility_anonymous_16abe00_alt1)();
          if (v14 != 0) {
            GameRoutine_811a70(v13);
            v15 = snd_fnd_calcCrc32_alt1("BGM", 0);
            LODWORD(v50) = v16;
            LANES128(v15).n128_u32[0] = 1140457472;
            v17 = snd_Fade_Fade_10c830(v35, LANES128(v15).n128_f64[0]);
            LANES128(v17).n128_u32[0] = 2.0;
            snd_startSlotVolume_100b50_alt1(&v50, v35,
                                            LANES128(v17).n128_f64[0]);
            snd_Fade_Destroy_Fade(v35);
          }
          else {
            v20 = *(_DWORD*)(v6 + 100);
            LODWORD(v35[0]) = *(_DWORD*)(v6 + 96);
            HIDWORD(v35[0]) = v20;
            GameRoutine_8118f0(v35);
            v21 = snd_fnd_calcCrc32_alt1("BGM", 0);
            LODWORD(v50) = v22;
            LANES128(v21).n128_u32[0] = 1140457472;
            v23 = snd_Fade_Fade_10c830(v35, LANES128(v21).n128_f64[0]);
            LANES128(v23).n128_u32[0] = 1.0;
            snd_startSlotVolume_100b50_alt1(&v50, v35,
                                            LANES128(v23).n128_f64[0]);
            snd_Fade_Destroy_Fade(v35);
            *(struct PseudoSret*)(v35) =
                snd_BGM_getFirstHandle(*(_QWORD*)(*v12 + 8));
            v24 = snd_fnd_WeakHandle_get(v35);
            if (v24 != 0) {
              (*(void (**)(__int64))(*(_QWORD*)(v24 - 5592) + 104LL))(v24 -
                                                                      5592);
            }
          }
        }
        *(_DWORD*)(a1 + 1248) = 1;
        if (v4 == 0) {
          LODWORD(v8) = 1.0;
          LayoutAccessor_1562680_alt1(a1 + 848, "Info_In", v8);
          LODWORD(v25) = 1.0;
          LayoutAccessor_1562680_alt1(a1 + 848, "Wait", v25);
        }
        v26 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
        LayoutAccessor_1562060_alt1(a1 + 848, "T_SoundTitle", v26);
        if (*(_BYTE*)(v6 + 116) == 1) {
          v27 = "N_Battle";
          ui_LayoutAccessor_SetPaneVisible(a1 + 848, "N_Battle", 0);
          ui_LayoutAccessor_SetPaneVisible(a1 + 848, "N_Change", 0);
          v37 = -1;
          v38 = -1;
          v39 = -1;
          v40 = -1;
          v28 = *msg_MessageManager_instance__ptr[0];
          v41 = -1;
          v42 = -1;
          v43 = -1;
          v44 = -1;
          v45 = -1;
          v46 = -1;
          v47 = -1;
          v48 = -1;
          v35[0] = GameData_212e348 + 2;
          v35[1] = 0xFFFF0001FFFF0000LL;
          v35[2] = 0xFFFF0004FFFF0002LL;
          v35[3] = 0xFFFF0006FFFF0005LL;
          v49 = 8;
          v36 = (_QWORD*)0xFFFF0008FFFF0007LL;
          v29 = GameRoutine_a4dbe0_alt1(v28, "MID_MemorySoundMenu_BattleOff", 0,
                                        v35);
          if (v29 != 0) {
            v30 = v29;
            v31 = ui_LayoutAccessor_FindTextBox(a1 + 848, "L_Base/T_Txt");
            if (v31 != 0) {
              GameRoutine_156c5d0_alt1(v31, v30, 0);
            }
          }
        }
        else {
          game_facility_anonymous_16abe00_alt1(*(unsigned int*)(v6 + 96),
                                               *(unsigned int*)(v6 + 100));
          v33 = v32;
          ui_LayoutAccessor_SetPaneVisible(a1 + 848, "N_Battle", 0);
          ui_LayoutAccessor_SetPaneVisible(a1 + 848, "N_Change", 0);
          if (v33 == 0) {
          LABEL_39:
            game_menu_BasicMenu_Unknown16dd9a0_alt2(a1);
            return 13;
          }
          v34 = *(_DWORD*)(a1 + 1124);
          if (v34 != 0) {
            *(_DWORD*)(a1 + 1128) = v34;
            *(_DWORD*)(a1 + 1124) = 0;
            game_menu_PageTab_Update(a1 + 1120);
          }
          v27 = "N_Change";
        }
        ui_LayoutAccessor_SetPaneVisible(a1 + 848, v27, 1);
        goto LABEL_39;
      }
      ProcObeliskMemorySoundMenu_16abc40_alt1(a1);
      v50 = "MID_Memory_NotData_Message";
      v18 = game_menu_Dialog__CreateBind_game_menu_Dialog(a1, &v50);
      if (v18 != 0) {
        v36 = nullptr;
        GameRoutine_6680e0(v35, v18 + 1248);
        if (v36 == v35) {
          v19 = 32;
          goto LABEL_24;
        }
        if (v36 != nullptr) {
          v19 = 40;
        LABEL_24:
          (*(void (**)(__int64))(*v36 + v19))((__int64)v36);
        }
      }
      return 12;
    }
  }
  return result;
}

__int64 ProcObeliskMemorySoundMenu_Unknown101(__int64 a1)
{
  __int64 result;

  if ((GameRoutine_16abc40(a1) & 1) != 0) {
    return 13;
  }
  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 208LL))(result);
  }
  return result;
}

__int64 ProcObeliskMemorySoundMenu_Unknown128(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  int v7;
  int v8;
  int* v9;
  int v10;
  bool v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  struct {
    __int64 v17;
    __int64 v18;
  } v17_;

  result = X8CALL_X0(
      __int64, snd_a35e20((void*)(&v17_.v17), *game_sound_g_game_sound_ptr[0]));
  v3 = v17_.v17;
  v4 = v17_.v18;
  if (v17_.v17 != v17_.v18) {
    v5 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      v6 = fw_memory_HeapManager_Allocate_alt1(*v5, 128, 16, 0);
      *(_WORD*)(v6 + 16) = 0;
      *(_DWORD*)(v6 + 40) = 0;
      v7 = GameData_2260e88;
      *(_QWORD*)(v6 + 48) = 0;
      *(_QWORD*)(v6 + 56) = 0;
      *(_QWORD*)(v6 + 64) = 0;
      *(_QWORD*)(v6 + 72) = 0;
      *(_WORD*)(v6 + 80) = 257;
      *(_BYTE*)(v6 + 82) = 1;
      *(_QWORD*)v6 = game_facility_anonymous_SoundMenuItem_vtable;
      *(_QWORD*)(v6 + 8) = 0;
      *(_DWORD*)(v6 + 120) = 16842752;
      *(_QWORD*)(v6 + 88) = *(_QWORD*)v3;
      *(_DWORD*)(v6 + 96) = *(_DWORD*)(v3 + 8);
      *(_DWORD*)(v6 + 100) = *(_DWORD*)(v3 + 12);
      *(_QWORD*)(v6 + 104) = *(_QWORD*)(v3 + 16);
      v8 = *(_DWORD*)(v3 + 24);
      *(_DWORD*)(v6 + 112) = v8;
      *(_WORD*)(v6 + 116) = *(_WORD*)(v3 + 28);
      v9 = &GameData_2260e88;
      if (v7 != v8) {
        v9 = &GameData_2260e90;
        if (GameData_2260e90 != v8) {
          v9 = &GameData_2260e98;
          if (GameData_2260e98 != v8) {
            v9 = &GameData_2260ea0;
            if (GameData_2260ea0 != v8) {
              v9 = &GameData_2260ea8;
              if (GameData_2260ea8 != v8) {
                v9 = &GameData_2260eb0;
                if (GameData_2260eb0 != v8) {
                  v9 = &GameData_2260e88;
                }
              }
            }
          }
        }
      }
      v10 = v9[1];
      if (v10 != 1) {
        v11 = v10 < 2;
        *(_BYTE*)(v6 + 122) = v11;
        *(_BYTE*)(v6 + 123) = v11;
      }
      result = (__int64)BasicMenuCursor_16e0c00(a1, v6);
      v3 += 32;
    } while (v3 != v4);
  }
  v13 = a1[32];
  v12 = a1[33];
  if (v12 != v13) {
    v14 = 0;
    do {
      v15 = *(_QWORD*)(v13 + 8 * v14);
      if (v15 != 0) {
        *(_DWORD*)(v15 + 40) = v14;
        v13 = a1[32];
        v12 = a1[33];
      }
      ++v14;
    } while (v14 < (v12 - v13) >> 3);
  }
  if (v17_.v17 != 0) {
    v17_.v18 = v17_.v17;
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v16);
  }
  return result;
}

__int64 ProcObeliskMemorySoundMenu_Unknown129(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  _QWORD v8[4];
  _QWORD* v9;
  _QWORD v10[4];
  _QWORD* v11;

  v3 = a1 + 232;
  v1 = *(_QWORD*)(a1 + 232);
  v2 = *(_QWORD*)(v3 + 8);
  v8[0] = GameData_20899b8;
  v9 = v8;
  if ((unsigned __int64)((v2 - v1) >> 3) >= 2) {
    v10[0] = GameData_20899b8;
    v11 = v10;
    if (v1 == v2) {
      v5 = 32;
      v4 = v10;
    }
    else {
      GameRoutine_16e3a80(v1);
      v4 = v11;
      if (v11 == v10) {
        v5 = 32;
      }
      else {
        if (v11 == nullptr) {
          goto LABEL_9;
        }
        v5 = 40;
      }
    }
    (*(void (**)(_QWORD*))(*v4 + v5))(v4);
  }

LABEL_9:
  result = (__int64)v9;
  if (v9 == v8) {
    v7 = 32;
  }
  else {
    if (v9 == nullptr) {
      return result;
    }
    v7 = 40;
  }
  return (*(__int64 (**)(_QWORD*))(*v9 + v7))(v9);
}

__int64 ProcObeliskMemorySoundMenu_Unknown135(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  char v10;
  _BOOL4 v11;
  _BYTE v13[200];

  v4 = game_sound_g_game_sound_ptr[0];
  v5 = *(_QWORD*)(*game_sound_g_game_sound_ptr[0] + 8);
  if (v5 != 0 &&
      (snd_BGM_isFirstActive(*(_QWORD*)(*game_sound_g_game_sound_ptr[0] + 8)) &
       1) != 0) {
    v6 = snd_BGM_getFirstName(v5);
  }
  else {
    v6 = 0;
  }
  if (v6 != 0) {
    v7 = (char*)v6;
  }
  else {
    v7 = &GameData_1a9f09e;
  }
  GameRoutine_60a020(a1 + 1064, v7);
  snd_Fade_Fade_10c910(v13, 250);
  (*(void (**)(_QWORD, _BYTE*, _QWORD))(**(_QWORD**)(*v4 + 8) + 48LL))(
      *(_QWORD*)(*v4 + 8), v13, 0);
  snd_Fade_Destroy_Fade(v13);
  snd_Fade_Fade_10c910(v13, 250);
  snd_startSlotVolume_100ab0("SE_Master", v13, 0.0);
  snd_Fade_Destroy_Fade(v13);
  GameRoutine_1562680(a1 + 848, "Info_Out", 1.0);
  GameRoutine_15638b0(a1 + 848, "Info_Out", 0);
  GameRoutine_1562f00(a1 + 848, "Info_Out");
  GameRoutine_1563030(a1 + 848, "Info_Out", 0);
  v8 = *(_QWORD*)(a1 + 336);
  if (v8 != 0 && (v9 = __dynamic_cast(v8, GameData_212e008[0],
                                      &GameData_2089750, 0)) != 0) {
    v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 464LL))(v9) ^ 1;
  }
  else {
    v10 = 1;
  }
  v11 = *(_DWORD*)(a1 + 1248) == 0;
  GameRoutine_1567590("Play", v10 & 1);
  GameRoutine_1567590("Stop", v11);
  return game_menu_GameMenu_Unknown135(a1, a2);
}

__int64 ProcObeliskMemorySoundMenu_Unknown143(__int64 a1, __int64* a2)
{
  __int64 result;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v5 = a2[1];
  v6 = a2[2];
  if (v5 >= v6) {
    v8 = *a2;
    v9 = v5 - *a2;
    v10 = 1 - 0x3333333333333333LL * (v9 >> 3);
    if (v10 > 0x666666666666666LL) {
      goto LABEL_34;
    }
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v6 - v8) >> 3);
    if (2 * v12 > v10) {
      v10 = 2 * v12;
    }
    if (v12 >= 0x333333333333333LL) {
      v13 = 0x666666666666666LL;
    }
    else {
      v13 = v10;
    }
    if (v13 != 0) {
      if (v13 > 0x666666666666666LL) {
        goto LABEL_35;
      }
      v14 = result;
      v15 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v13, 16, 0);
      LODWORD(result) = v14;
    }
    else {
      v15 = 0;
    }
    v16 = v15 + v9;
    *(_QWORD*)v16 = "Play";
    *(_QWORD*)(v16 + 8) = "MID_KeyHelp_Play";
    *(_DWORD*)(v16 + 20) = 0;
    *(_DWORD*)(v16 + 24) = result;
    *(_BYTE*)(v16 + 28) = 0;
    *(_QWORD*)(v16 + 32) = 0;
    *(_BYTE*)(v16 + 16) = 1;
    v17 = v15 + 40 * v13;
    v7 = v15 + v9 + 40;
    memcpy(v15, v8, v9);
    *a2 = v15;
    a2[1] = v7;
    a2[2] = v17;
    if (v8 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v18, v8);
    }
  }
  else {
    *(_DWORD*)(v5 + 20) = 0;
    *(_DWORD*)(v5 + 24) = result;
    *(_BYTE*)(v5 + 28) = 0;
    *(_QWORD*)(v5 + 32) = 0;
    v7 = v5 + 40;
    *(_QWORD*)v5 = "Play";
    *(_QWORD*)(v5 + 8) = "MID_KeyHelp_Play";
    *(_BYTE*)(v5 + 16) = 1;
  }
  a2[1] = v7;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v19 = a2[1];
  v20 = a2[2];
  if (v19 < v20) {
    *(_BYTE*)(v19 + 28) = 0;
    *(_QWORD*)(v19 + 32) = 0;
    *(_QWORD*)v19 = "Stop";
    *(_QWORD*)(v19 + 8) = "MID_KeyHelp_Stop";
    v21 = v19 + 40;
    *(_BYTE*)(v19 + 16) = 1;
    *(_DWORD*)(v19 + 20) = 1;
    *(_DWORD*)(v19 + 24) = result;
    goto LABEL_33;
  }
  v22 = *a2;
  v23 = v19 - *a2;
  v24 = 1 - 0x3333333333333333LL * (v23 >> 3);
  if (v24 > 0x666666666666666LL) {
  LABEL_34:
    GameRoutine_874520(result);
  }
  v25 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v20 - v22) >> 3);
  if (2 * v25 > v24) {
    v24 = 2 * v25;
  }
  if (v25 >= 0x333333333333333LL) {
    v26 = 0x666666666666666LL;
  }
  else {
    v26 = v24;
  }
  if (v26 != 0) {
    if (v26 <= 0x666666666666666LL) {
      v27 = result;
      v28 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 40 * v26,
                                           16, 0);
      LODWORD(result) = v27;
      goto LABEL_29;
    }
  LABEL_35:
    GameRoutine_60a210(result);
  }
  v28 = 0;

LABEL_29:
  v29 = v28 + v23;
  *(_QWORD*)v29 = "Stop";
  *(_QWORD*)(v29 + 8) = "MID_KeyHelp_Stop";
  *(_BYTE*)(v29 + 28) = 0;
  *(_QWORD*)(v29 + 32) = 0;
  *(_BYTE*)(v29 + 16) = 1;
  v30 = v28 + 40 * v26;
  *(_DWORD*)(v29 + 20) = 1;
  *(_DWORD*)(v29 + 24) = result;
  v21 = v28 + v23 + 40;
  result = memcpy(v28, v22, v23);
  *a2 = v28;
  a2[1] = v21;
  a2[2] = v30;
  if (v22 != 0) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v22);
  }

LABEL_33:
  a2[1] = v21;
  return result;
}

__int64 ProcObeliskMemorySoundMenu_Unknown146()
{
  __int64 result;
  __int64 v1;
  int v2;
  _QWORD v3[2];
  _BYTE v4[200];

  v1 = 0;
  v2 = 0x2000;
  if (game_sound_g_vibration_enabled == 1) {
    snd_Fade_Fade_10c830(v4, 0.0f);
    snd_play_ff2d0((void*)(v3), "VIB_Cursor_Medium", "VIB_Cursor_Medium", v4, 0,
                   65537, 0, 0.0f, 1.0f);
    snd_Fade_Destroy_Fade(v4);
    return GameRoutine_112180(&v1, v3);
  }
  return result;
}

__int64 ProcObeliskMemorySoundMenu_Unknown147()
{
  __int64 result;
  __int64 v1;
  int v2;
  _QWORD v3[2];
  _BYTE v4[200];

  v1 = 0;
  v2 = 0x2000;
  if (game_sound_g_vibration_enabled == 1) {
    snd_Fade_Fade_10c830(v4, 0.0f);
    snd_play_ff2d0((void*)(v3), "VIB_List_Right", "VIB_List_Right", v4, 0,
                   65537, 0, 0.0f, 1.0f);
    snd_Fade_Destroy_Fade(v4);
    return GameRoutine_112180(&v1, v3);
  }
  return result;
}

__int64 ProcObeliskMemorySoundMenu_Unknown148()
{
  __int64 result;
  __int64 v1;
  int v2;
  _QWORD v3[2];
  _BYTE v4[200];

  v1 = 0;
  v2 = 0x2000;
  if (game_sound_g_vibration_enabled == 1) {
    snd_Fade_Fade_10c830(v4, 0.0f);
    snd_play_ff2d0((void*)(v3), "VIB_List_Left", "VIB_List_Left", v4, 0, 65537,
                   0, 0.0f, 1.0f);
    snd_Fade_Destroy_Fade(v4);
    return GameRoutine_112180(&v1, v3);
  }
  return result;
}

__int64 ProcObeliskMemorySoundMenu_Unknown7(__int64 a1, unsigned int a2)
{
  return GameRoutine_16ac260(a1 - 176, 1, a2);
}

__int64 ProcObeliskMemorySoundMenu_Unknown8(__int64 a1, unsigned int a2)
{
  return GameRoutine_16ac260(a1 - 176, 0, a2);
}

__int64 ProcObeliskMemorySoundMenu_Unknown18()
{
  __int64 result;
  __int64 v1;
  int v2;
  _QWORD v3[2];
  _BYTE v4[200];

  v1 = 0;
  v2 = 0x2000;
  if (game_sound_g_vibration_enabled == 1) {
    snd_Fade_Fade_10c830(v4, 0.0f);
    snd_play_ff2d0((void*)(v3), "VIB_Cursor_Medium", "VIB_Cursor_Medium", v4, 0,
                   65537, 0, 0.0f, 1.0f);
    snd_Fade_Destroy_Fade(v4);
    return GameRoutine_112180(&v1, v3);
  }
  return result;
}

__int64 ProcObeliskMemorySoundMenu_Unknown21()
{
  __int64 result;
  __int64 v1;
  int v2;
  _QWORD v3[2];
  _BYTE v4[200];

  v1 = 0;
  v2 = 0x2000;
  if (game_sound_g_vibration_enabled == 1) {
    snd_Fade_Fade_10c830(v4, 0.0f);
    snd_play_ff2d0((void*)(v3), "VIB_List_Left", "VIB_List_Left", v4, 0, 65537,
                   0, 0.0f, 1.0f);
    snd_Fade_Destroy_Fade(v4);
    return GameRoutine_112180(&v1, v3);
  }
  return result;
}

__int64 ProcObeliskMemorySoundMenu_Unknown22()
{
  __int64 result;
  __int64 v1;
  int v2;
  _QWORD v3[2];
  _BYTE v4[200];

  v1 = 0;
  v2 = 0x2000;
  if (game_sound_g_vibration_enabled == 1) {
    snd_Fade_Fade_10c830(v4, 0.0f);
    snd_play_ff2d0((void*)(v3), "VIB_List_Right", "VIB_List_Right", v4, 0,
                   65537, 0, 0.0f, 1.0f);
    snd_Fade_Destroy_Fade(v4);
    return GameRoutine_112180(&v1, v3);
  }
  return result;
}

bool ProcObeliskMemorySoundMenu_16abc40(__int64 a1)
{
  int v1;
  __int64* v2;
  __int64* v3;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  char v10;
  unsigned int v12;
  _QWORD v13[25];

  v1 = *(_DWORD*)(a1 + 1248);
  if (v1 != 0) {
    v2 = *(__int64**)(a1 + 232);
    v3 = *(__int64**)(a1 + 240);
    if (v2 != v3) {
      v5 = game_sound_g_game_sound_ptr[0];
      do {
        v6 = *v2;
        if (*(_BYTE*)(*v2 + 120) == 1 && *(_DWORD*)(v6 + 96) != 0) {
          *(_WORD*)(v6 + 120) = 0;
          snd_Fade_Fade_10c910_alt1((__int64)v13, 500);
          (*(void (**)(_QWORD, _QWORD*, _QWORD))(**(_QWORD**)(*v5 + 8) + 48LL))(
              *(_QWORD*)(*v5 + 8), v13, 0);
          snd_Fade_Destroy_Fade_alt1(v13);
          v12 = (unsigned int)snd_fnd_calcCrc32("BGM", 0);
          snd_Fade_Fade_10c830_alt1((__int64)v13, 0x1.f400000000000p+8f);
          snd_startSlotVolume_100b50((int*)&v12, (__int64)v13,
                                     0x1.0000000000000p+0f);
          snd_Fade_Destroy_Fade_alt1(v13);
        }
        ++v2;
      } while (v2 != v3);
    }
    LayoutAccessor_1562680(a1 + 848, (__int64)"Info_Out",
                           0x1.0000000000000p+0f);
    LayoutAccessor_1563030(a1 + 848, (__int64)"Wait", 0);
    game_menu_BasicMenu_Unknown16dd9a0_alt1(a1);
    v7 = *(_QWORD*)(a1 + 336);
    *(_DWORD*)(a1 + 1248) = 0;
    if (v7 != 0 && (v8 = __dynamic_cast(v7, GameData_212e008[0],
                                        &GameData_2089750, 0)) != 0) {
      v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 464LL))(v8) ^ 1;
      v10 = *(_DWORD*)(a1 + 1248) == 0;
    }
    else {
      v10 = 1;
      v9 = 1;
    }
    GameRoutine_1567590_alt1((__int64)"Play", v9 & 1);
    GameRoutine_1567590_alt1((__int64)"Stop", v10);
  }
  return v1 != 0;
}

bool game_facility_anonymous_ProcObeliskMemorySoundMenu_SortAndFilter_closure_Invoke(
    __int64 a1, __int64 a2, __int64 a3)
{
  int v3;
  int v4;
  bool v5;

  v3 = *(_DWORD*)(*(_QWORD*)a2 + 92LL);
  v4 = *(_DWORD*)(*(_QWORD*)a3 + 92LL);
  v5 = v3 < v4;
  if (v3 == v4) {
    return *(_DWORD*)(*(_QWORD*)a2 + 40LL) < *(_DWORD*)(*(_QWORD*)a3 + 40LL);
  }
  return v5;
}

__int64 ProcObeliskMemorySoundMenu_16ac260(__int64 a1, char a2, char a3)
{
  _QWORD* v3;
  _QWORD* v4;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned int v13;
  char* v14;
  __int64 v15;
  __int64 v16;

  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = *(_QWORD**)(a1 + 232);
  v4 = *(_QWORD**)(a1 + 240);
  if (v3 != v4) {
    while (1) {
      v8 = *v3;
      if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v3 + 480LL))(*v3) & 1) == 0 &&
          (*(_BYTE*)(v8 + 120) & 1) != 0) {
        break;
      }
      if (++v3 == v4) {
        return 0;
      }
    }
    game_facility_anonymous_16abe00(*(_DWORD*)(v8 + 96), *(_DWORD*)(v8 + 100)),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v9 != 0) {
      if ((a2 & 1) != 0) {
        v10 = -1;
      }
      else {
        v10 = 1;
      }
      if ((game_menu_PageTab_Move(a1 + 1120, v10, a3 & 1) & 1) != 0) {
        v11 = *(_QWORD*)(a1 + 1136);
        v12 = *(int*)(a1 + 1124);
        if (v12 < (*(_QWORD*)(a1 + 1144) - v11) >> 2) {
          v12 = *(int*)(v11 + 4 * v12);
        }
        v13 = *(unsigned __int8*)(*(_QWORD*)(a1 + 1088) + v12);
        if (v13 <= 9) {
          *(_BYTE*)(*game_sound_g_game_sound_ptr[0] + 2600) = v13;
        }
      }
      return 13;
    }
    if (*(_BYTE*)(v8 + 116) == 1) {
      ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 848, (__int64)"N_Battle", 0),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 848, (__int64)"N_Change", 0),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v14 = GameRoutine_a4dbe0(*msg_MessageManager_instance__ptr[0],
                               "MID_MemorySoundMenu_BattleOff", 0),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v14 != nullptr) {
        v15 = (__int64)v14;
        v16 = ui_LayoutAccessor_FindTextBox_alt1((__int64*)(a1 + 848),
                                                 (__int64)"L_Base/T_Txt"),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v16 != 0) {
          GameRoutine_156c5d0(v16, v15, 0),
              v9 = COERCE_AS(__typeof__(v9),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 848, (__int64)"N_Battle", 1),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (*(_BYTE*)(v8 + 116) == 1) {
        if ((*(_BYTE*)(v8 + 121) & 1) != 0) {
          GameRoutine_811c50(),
              v9 = COERCE_AS(__typeof__(v9),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          *(_BYTE*)(v8 + 121) = 0;
        }
        else {
          *(_BYTE*)(v8 + 121) = 1;
          GameRoutine_811b80(),
              v9 = COERCE_AS(__typeof__(v9),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        if (*(_BYTE*)(v8 + 77) == 1) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 440LL))(v8),
              v9 = COERCE_AS(__typeof__(v9),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      if (*(_BYTE*)(v8 + 121) == 1) {
        ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 848, (__int64)"N_Battle", 0),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 848, (__int64)"N_Change", 0),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        LayoutAccessor_1562060((__int64*)(a1 + 848), (__int64)"L_Base/T_Txt",
                               "MID_MemorySoundMenu_BattleOn"),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        ui_LayoutAccessor_SetPaneVisible_alt1(a1 + 848, (__int64)"N_Battle", 1),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      return 13;
    }
  }
  return 0;
}

#pragma GCC visibility pop
