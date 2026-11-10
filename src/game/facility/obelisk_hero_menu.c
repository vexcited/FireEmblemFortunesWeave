#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_14a10d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14a3920(_QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1563380(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1566440(_QWORD, _QWORD);
__int64 GameRoutine_159e2c0(_QWORD, _QWORD);
__int64 GameRoutine_159e7c0(_QWORD, _QWORD);
__int64 GameRoutine_16df7a0(_QWORD);
__int64 GameRoutine_811f20(_QWORD);
__int64 GameRoutine_812030(_QWORD, _QWORD);
__int64 GameRoutine_bc6460(_QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16defa0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2130f90[5];
extern __int64* eft_g_effectSystem_ptr[3];
extern char GameData_1a9f09e;
__int64 ObeliskHeroMenu_1661e20(__int64 a1);
__int64 ObeliskHeroMenu_1662140(unsigned __int8* a1);
__int64 ObeliskHeroMenu_1662240(unsigned __int8* a1);
__int64 ObeliskHeroMenu_1662320(__int64 a1);
__int64 ObeliskHeroMenu_1662640(__int64 a1);
__int64 ObeliskHeroMenu_1662b20(__int64 result);
bool ObeliskHeroMenu_1662d10(__int64 a1, char a2);
__int64 GameRoutine_1841190(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
void __attribute__((noreturn)) String_60a1d0(void);
__int64
game_facility_ObeliskHeroMenu_UpdatePage_lambda0_Invoke(__int64 result,
                                                        unsigned __int8* a2);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__int64 GameRoutine_14a1390(__int64*, char);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, long double);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 game_811f20(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_startSlotVolume_100b50(_QWORD, _QWORD, double);
__int64
snd_startSlotVolume_100b50_alt1(int*, __int64,
                                float) __asm__("snd_startSlotVolume_100b50");
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 snd_fnd_calcCrc32(_QWORD, _QWORD);
extern _QWORD game_hub_kPermitFlags[10];
extern __int64 GameData_212c610;
extern __int64 GameData_2131c18[55];
extern __int64 game_GameModeData_instance_;
extern char* GameData_2077698[5];
extern char* GameData_20776e8[3];
unsigned __int8* snd_fnd_calcCrc32_alt1(unsigned __int8* result,
                                        int) __asm__("snd_fnd_calcCrc32");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__int64 ObeliskHeroMenu_1661a90(__int64 a1);
__int64 ObeliskHeroMenu_1661ca0(_QWORD* a1);

__int64 ObeliskHeroMenu_1661a90(__int64 a1)
{
  __n128 v2;
  int v3;
  long double v4;
  unsigned __int64 v5;
  const char* v6;
  __int64 v7;
  __int64 result;
  int v9;
  unsigned __int8* v10;
  unsigned __int64 v11;
  const char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;

  (*(void (**)(__int64))(*(_QWORD*)a1 + 1144LL))(a1);
  (*(void (**)(__int64))(*(_QWORD*)a1 + 1120LL))(a1);
  v2 = snd_fnd_calcCrc32("SE_Fade", 0);
  v19 = v3;
  LANES128(v2).n128_u32[0] = 1140457472;
  snd_Fade_Fade_10c830(&v17, LANES128(v2).n128_f64[0]);
  snd_startSlotVolume_100b50(&v19, &v17, 0.0);
  snd_Fade_Destroy_Fade(&v17);
  game_811f20(*(unsigned __int8*)(a1 + 1064));
  v5 = *(unsigned __int8*)(a1 + 1064);
  if (v5 <= 9 && ((0x21Fu >> v5) & 1) != 0) {
    v6 = GameData_2077698[v5];
  }
  else {
    v18 = game_hub_kPermitFlags[v5];
    v17 = game_HashString(v18);
    if (game_GameModeData_instance_ != 0 &&
        (v7 = game_GameVariableTable_Find(
             *(_QWORD*)(game_GameModeData_instance_ + 48), &v17)) != 0) {
      if (*(_DWORD*)(v7 + 32) != 0) {
        v6 = "Menu_Open";
      }
      else {
        v6 = "Menu_Unopen";
      }
    }
    else {
      v6 = "Menu_Unopen";
    }
  }
  LODWORD(v4) = 1.0;
  result = LayoutAccessor_1562680(a1 + 848, v6, v4);
  v9 = *(_DWORD*)(a1 + 1068);
  if (v9 != 2) {
    if (v9 == 0 || v9 == 3) {
      v10 = (unsigned __int8*)(*(_QWORD*)(game_GameModeData_instance_ + 176) +
                               2384LL);
    }
    else {
      if (v9 != 1 || *(_BYTE*)(a1 + 1064) == 0) {
        goto LABEL_19;
      }
      v10 = (unsigned __int8*)(*(_QWORD*)(game_GameModeData_instance_ + 176) +
                               216LL * *(unsigned __int8*)(a1 + 1064) + 440);
    }
    v11 = *v10;
    if (v11 <= 2) {
      v12 = GameData_20776e8[v11];
    LABEL_20:
      result = LayoutAccessor_1562cf0(a1 + 848, v12);
      goto LABEL_21;
    }
  LABEL_19:
    v12 = "ClearAllOff";
    goto LABEL_20;
  }
LABEL_21:
  if ((*(_BYTE*)(a1 + 1076) & 1) == 0) {
    LayoutAccessor_1560070((void*)(&v15), a1 + 848, "L_ArrowL");
    GameRoutine_159e2c0(&v15, 1);
    if (v16 != 0) {
      std___1___shared_weak_count___release_weak(v16);
    }
    LayoutAccessor_1560070((void*)(&v13), a1 + 848, "L_ArrowR");
    GameRoutine_159e2c0(&v13, 1);
    result = v14;
    if (v14 != 0) {
      return std___1___shared_weak_count___release_weak(v14);
    }
  }
  return result;
}

__int64 ObeliskHeroMenu_1661ca0(_QWORD* a1)
{
  _DWORD* v1;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  struct {
    _DWORD* v10;
    __int64 v11;
  } v10_;
  unsigned int v12;

  v1 = (_DWORD*)a1[135];
  if (*(_QWORD*)v1 != 0 && *(_DWORD*)(*(_QWORD*)v1 + 16LL) == v1[2]) {
    v3 = a1[136];
    if (v3 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                memory_order_relaxed);
      v10_.v11 = v3;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                memory_order_relaxed);
    }
    else {
      v10_.v11 = 0;
    }
    v10_.v10 = v1;
    GameRoutine_14a1390((__int64*)&v10_.v10, 1);
    v4 = v10_.v11;
    if (v10_.v11 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v10_.v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
    if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
  }
  v12 = (unsigned int)snd_fnd_calcCrc32_alt1("SE_Fade", 0);
  snd_Fade_Fade_10c830_alt1((__int64)&v10_.v10, 0x1.f400000000000p+8f);
  snd_startSlotVolume_100b50_alt1((int*)&v12, (__int64)&v10_.v10,
                                  0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade_alt1(&v10_.v10);
  v5 = a1;
  v6 = a1;
  v7 = GameData_212c610;
  v8 = GameData_2131c18[0];
  do {
    result = __dynamic_cast(v6, v7, v8, 0);
    v6 = (_QWORD*)v6[4];
    if (result != 0) {
      v5 = (_QWORD*)result;
    }
  } while (v6 != nullptr);
  if (v5 == a1) {
    return (*(__int64 (**)(_QWORD*))(a1[132] + 104LL))(a1 + 132);
  }
  return result;
}

__int64 ObeliskHeroMenu_1661e20(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  if ((*(_BYTE*)(a1 + 1076) & 1) == 0) {
    GameRoutine_1560070(&v8, a1 + 848, "L_ArrowL");
    GameRoutine_159e2c0(&v8, 0);
    if (v9 != 0) {
      std___1___shared_weak_count___release_weak(v9);
    }
    GameRoutine_1560070(&v6, a1 + 848, "L_ArrowR");
    GameRoutine_159e2c0(&v6, 0);
    if (v7 != 0) {
      std___1___shared_weak_count___release_weak(v7);
    }
  }
  GameRoutine_1562680(a1 + 848, "Wait", 1.0);
  result = GameRoutine_812030(*(unsigned __int8*)(a1 + 1064),
                              *(_DWORD*)(a1 + 1068) == 2);
  if (*(_DWORD*)(a1 + 1068) == 1) {
    v3 = *(_QWORD*)(a1 + 1056);
    v11 = 0;
    v12 = 0;
    v10 = 0;
    (*(void (**)(__int64, __int64*))(v3 + 80))(a1 + 1056, &v10);
    (*(void (**)(__int64, __int64*))(*(_QWORD*)(a1 + 1056) + 88LL))(a1 + 1056,
                                                                    &v10);
    v4 = v10 == v11 ? nullptr : &v10;
    result = GameRoutine_1566440(v4, 0);
    if (v10 != 0) {
      v11 = v10;
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v10);
    }
  }
  return result;
}

__int64 ObeliskHeroMenu_1662140(unsigned __int8* a1)
{
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  int v6;
  int v7;
  int v8;

  v2 = *GameData_2130f90[0];
  if (*GameData_2130f90[0] == 0 ||
      (((v3 = *(unsigned __int8*)(v2 + 160)) & 1) != 0
           ? (v4 = *(_QWORD*)(v2 + 168))
           : (v4 = v3 >> 1),
       v4 == 0 || (*(_BYTE*)(v2 + 154) & 1) != 0)) {
    v6 = a1[1064];
    v7 = v6;
    while (1) {
      v8 = v7 - 1;
      if (v7 < 2) {
        v8 = 9;
      }
      v7 = v8 > 9 ? 1 : v8;
      if (v7 == v6) {
        break;
      }
      if (((*(__int64 (**)(unsigned __int8*, _QWORD))(*(_QWORD*)a1 + 1136LL))(
               a1, (unsigned int)v7) &
           1) != 0) {
        a1[1064] = v7;
        a1[1076] = 1;
        game_menu_BasicMenu_Unknown16defa0(a1);
        GameRoutine_1562680(a1 + 848, "ChangeIn", 1.0);
        GameRoutine_811f20(a1[1064]);
        GameRoutine_159e7c0(a1 + 848, 1);
        return 13;
      }
    }
  }
  return 0;
}

__int64 ObeliskHeroMenu_1662240(unsigned __int8* a1)
{
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  int v6;
  int v7;
  int v8;

  v2 = *GameData_2130f90[0];
  if (*GameData_2130f90[0] == 0 ||
      (((v3 = *(unsigned __int8*)(v2 + 160)) & 1) != 0
           ? (v4 = *(_QWORD*)(v2 + 168))
           : (v4 = v3 >> 1),
       v4 == 0 || (*(_BYTE*)(v2 + 154) & 1) != 0)) {
    v6 = a1[1064];
    v7 = v6;
    while (1) {
      v8 = v7 >= 0 ? v7 + 1 : 9;
      v7 = v8 > 9 ? 1 : v8;
      if (v7 == v6) {
        break;
      }
      if (((*(__int64 (**)(unsigned __int8*, _QWORD))(*(_QWORD*)a1 + 1136LL))(
               a1, (unsigned int)v7) &
           1) != 0) {
        a1[1064] = v7;
        a1[1076] = 1;
        game_menu_BasicMenu_Unknown16defa0(a1);
        GameRoutine_1562680(a1 + 848, "ChangeIn", 1.0);
        GameRoutine_811f20(a1[1064]);
        GameRoutine_159e7c0(a1 + 848, 0);
        return 13;
      }
    }
  }
  return 0;
}

__int64 ObeliskHeroMenu_1662320(__int64 a1)
{
  __int64 result;

  GameRoutine_811f20(0);
  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 208LL))(result);
  }
  return result;
}

__int64 ObeliskHeroMenu_1662640(__int64 a1)
{
  __int64 result;

  result = GameRoutine_16df7a0(a1);
  if (*(_BYTE*)(a1 + 1076) == 1) {
    result = GameRoutine_1563380(a1 + 848, "ChangeIn", 1);
    if ((result & 1) != 0) {
      GameRoutine_812030(*(unsigned __int8*)(a1 + 1064),
                         *(_DWORD*)(a1 + 1068) == 2);
      result = GameRoutine_1562680(a1 + 848, "Wait", 1.0);
      *(_BYTE*)(a1 + 1076) = 0;
    }
  }
  return result;
}

__int64 ObeliskHeroMenu_1662b20(__int64 result)
{
  _DWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  unsigned int v14;
  unsigned int i;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD v19[3];
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  v1 = *(_DWORD**)(result + 1080);
  v2 = result;
  if (*(_QWORD*)v1 == 0 || *(_DWORD*)(*(_QWORD*)v1 + 16LL) != v1[2]) {
    v19[0] = 0;
    v19[1] = 0;
    v3 = *((_QWORD*)GameData_212c540 + 1);
    v5 = *(_QWORD*)GameData_212c548;
    v4 = *((_QWORD*)GameData_212c548 + 1);
    v21 = *(_QWORD*)GameData_212c540;
    v22 = v3;
    v25 = v21;
    v26 = v3;
    v23 = v5;
    v24 = v4;
    v20 = 9;
    v19[2] = "UI_Deco_CharaChoice_Sand";
    v6 = GameRoutine_bc6460(*eft_g_effectSystem_ptr[0], v19, 0);
    GameRoutine_14a10d0(&v17, v6, v7, &GameData_1a9f09e);
    v8 = v17;
    v9 = v18;
    if (v18 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                memory_order_relaxed);
    }
    v10 = *(_QWORD*)(v2 + 1088);
    *(_QWORD*)(v2 + 1080) = v8;
    *(_QWORD*)(v2 + 1088) = v9;
    if (v10 != 0) {
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
      v9 = *(_QWORD*)(v2 + 1088);
    }
    if (v9 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak(v9);
      }
    }
    v11 = v18;
    if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak(v11);
    }
    v12 = *(__int64**)(v2 + 1080);
    v13 = *v12;
    if (*v12 != 0 && *(_DWORD*)(v13 + 16) == *((_DWORD*)v12 + 2)) {
      v14 = *(_DWORD*)(v13 + 36);
      if (v14 != 0) {
        for (i = 0; i < v14; ++i) {
          if ((int)v14 > (int)i) {
            v16 = *(_QWORD*)(v13 + 40 + 8LL * (int)i);
            if (v16 != 0) {
              *(_QWORD*)(v16 + 16) = 0;
              *(_QWORD*)(v16 + 24) = 0;
              *(_BYTE*)(v16 + 128) = 1;
              v14 = *(_DWORD*)(v13 + 36);
            }
          }
        }
      }
    }
    return GameRoutine_14a3920(v12);
  }
  return result;
}

bool ObeliskHeroMenu_1662d10(__int64 a1, char a2)
{
  int v2;

  v2 = *(_DWORD*)(a1 + 1068);
  if ((unsigned __int8)(a2 - 5) <= 3u && ((1 << (a2 - 2)) & 0x82) == 0) {
    return false;
  }
  if (v2 <= 1) {
    if (v2 != 0) {
      if (v2 == 1 && a2 != 9) {
        return true;
      }
    }
    else if (a2 == 9) {
      return true;
    }
    return false;
  }
  if (v2 != 2) {
    return v2 == 3 && a2 == 9;
  }
  return ((a2 - 7) & 0xFD) != 0;
}

__int64

game_facility_ObeliskHeroMenu_UpdatePage_lambda0_Invoke(__int64 result,
                                                        unsigned __int8* a2)
{
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  char* v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[2];
  char* v17;

  v3 = **(_DWORD**)(result + 24);
  if (v3 > 4) {
    return result;
  }
  v4 = *a2;
  if (*(char*)(**(_QWORD**)(result + 16) + v4 + 597) < 1) {
    return result;
  }
  v5 = *(_QWORD*)(result + 8);
  v6 = result;
  v7 = game_util_Format("IconMastery%02d", v3);
  v8 = strlen(v7);
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v9 = v8;
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v8 | 7) + 1;
    }
    v10 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v11, 16, 0);
    v16[1] = v9;
    v17 = v10;
    v16[0] = v11 | 1;
  }
  else {
    LOBYTE(v16[0]) = 2 * v8;
    v10 = (char*)v16 + 1;
    if (v8 == 0) {
      goto LABEL_12;
    }
  }
  memmove(v10, v7, v9);
LABEL_12:
  v10[v9] = 0;
  if ((v16[0] & 1) != 0) {
    v12 = v17;
  }
  else {
    v12 = (char*)v16 + 1;
  }
  ui_LayoutAccessor_SetPaneVisible(v5 + 848, v12, 1);
  if ((v16[0] & 1) != 0) {
    v13 = v17;
  }
  else {
    v13 = (char*)v16 + 1;
  }
  v14 = ui_LayoutAccessor_FindPane(v5 + 848, v13);
  if (v14 != 0) {
    v14 = __dynamic_cast(v14, GameData_212d670[0], GameData_212d678[0], 0);
  }
  result = GameRoutine_1841190(v14, (unsigned int)v4);
  ++**(_DWORD**)(v6 + 24);
  if ((v16[0] & 1) != 0 && v17 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v17);
  }
  return result;
}

#pragma GCC visibility pop
