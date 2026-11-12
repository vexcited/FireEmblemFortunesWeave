#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _DWORD GameData_1b0b98c[3];
extern __int64 GameData_208be80;
extern __int64 (*GameData_208c650[])();
extern __int64 (*GameData_208cb10[])();
extern __int64 (*GameData_208cbe0[])();
extern __int64 GameData_208cc80;
extern __int64 (*GameData_208d178[])();
extern __int64 (*GameData_2096218[])();
extern __int64 (*GameData_2097cc8[])();
extern __int64 (*GameData_2097f18[])();
extern __int64 (*GameData_209cd80[])();
extern __int64 (*GameData_209cf58[])();
extern __int64 (*GameData_209d3a0[])();
extern __int64 (*GameData_209e340[])();
extern __int64 (*GameData_209e7c8[])();
extern __int64 (*GameData_209e898[])();
extern __int64 (*GameData_209f570[])();
extern __int64 (*GameData_209f9f8[])();
extern __int64 (*GameData_209fac8[])();
extern __int64 (*GameData_20a0198[])();
extern __int64 (*GameData_20a0618[])();
extern __int64 (*GameData_20a06e8[])();
extern __int64 (*GameData_20a0f20[])();
extern __int64 (*GameData_20a1398[])();
extern __int64 (*GameData_20a1468[])();
extern __int64 (*GameData_20a1bd8[])();
extern __int64 (*GameData_20a2068[])();
extern __int64 (*GameData_20a2138[])();
extern __int64 (*GameData_20a21e8[])();
extern __int64 (*GameData_20a2ae8[])();
extern __int64 (*GameData_20a2f78[])();
extern __int64 (*GameData_20a3048[])();
extern __int64 GameData_20a3328;
extern __int64 (*GameData_20a3450[])();
extern __int64 (*GameData_20a3550[])();
extern __int64 (*GameData_20a35d0[])();
extern __int64 (*GameData_20a3a68[])();
extern __int64 (*GameData_20a3b38[])();
extern __int64 (*GameData_20a44d0[])();
extern __int64 (*GameData_20a4bf0[])();
extern __int64 (*GameData_20a5088[])();
extern __int64 (*GameData_20a5158[])();
extern __int64 (*GameData_20a5208[])();
extern __int64 (*GameData_20a5b98[])();
extern __int64 (*GameData_20a5da8[])();
extern __int64 (*GameData_20a6240[])();
extern __int64 (*GameData_20a6310[])();
extern __int64 (*GameData_20a63c0[])();
extern __int64 (*GameData_20a6648[])();
extern __int64 (*GameData_20a6bf8[])();
extern __int64 (*GameData_20a7120[])();
extern __int64 (*GameData_20a71f0[])();
extern __int64 (*GameData_20a7748[])();
extern __int64 (*GameData_20a7c48[])();
extern __int64 (*GameData_20a7d18[])();
extern __int64 (*GameData_20a86b0[])();
extern __int64 (*GameData_20a8b68[])();
extern __int64 (*GameData_20a8c38[])();
extern __int64 (*GameData_20a8d08[])();
extern __int64 (*GameData_210fe18[])();
extern __int64 GameData_212bf68;
extern __int64 GameData_212c610;
extern _UNKNOWN* GameData_212c730;
extern __int64* GameData_212c738[2];
extern __int64* GameData_212c868;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212cea0;
extern __int64* GameData_212ceb0;
extern __int64 GameData_212cf78[6];
extern __int64* GameData_212d460[6];
extern __int64* GameData_212d670[3];
extern __int64 GameData_212d690;
extern __int64* GameData_212d6a8;
extern __int64* GameData_212dcd0;
extern char** GameData_212def8;
extern _UNKNOWN* GameData_212dfd0;
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e030[4];
extern __int64* GameData_212e348;
extern __int64* GameData_212fca0[2];
extern __int64* GameData_2130258[5];
extern __int64* GameData_2130fa8[2];
extern __int64* GameData_2131ac8[5];
extern __int64* GameData_2131ae0[2];
extern __int64* GameData_2131ae8;
extern __int64* GameData_2131b70[3];
extern _BYTE* GameData_2132020;
extern __int64 GameData_2132038[3];
extern __int64 GameData_21ca018;
extern __int64 GameData_21caab0;
extern __int64 GameData_21cd0c8;
extern __int64 GameData_21f1e08;
extern __int64 GameData_21f8020;
extern _UNKNOWN GameData_21f8028;
extern __int64 GameData_2249318;
extern __int64 GameData_22587d8;
extern __int64 GameData_22587e0;
extern __int64 GameData_22587e8;
extern __int64 GameData_2265ec8;
extern __int64 GameData_2265ef0;
__int64 GameRoutine_13633c0(void);
__int64 GameRoutine_1364020(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1468270(void);
__int64 GameRoutine_155dfa0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_155ea30(_QWORD);
__int64 GameRoutine_155f480(_QWORD, _QWORD);
__int64 GameRoutine_155f570(_QWORD, _QWORD);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_1560ec0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1562060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15621a0(_QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_15635a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1563e00(_QWORD, _QWORD);
__int64 GameRoutine_1567590(_QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_1570b30(_QWORD, _QWORD);
__int64 GameRoutine_1571860(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1572370(_QWORD, _QWORD);
__int64 GameRoutine_1572ac0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15740c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1575e70(_QWORD, _QWORD);
__int64 GameRoutine_1576480(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_157af40(_QWORD, _QWORD);
__int64 GameRoutine_1585690(_QWORD, _QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_1587740(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_1587880(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1589740(_QWORD, _QWORD);
__int64 GameRoutine_1589a10(_QWORD, _QWORD);
__int64 GameRoutine_159b580(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_159e890(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_159f000(_QWORD, _QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_1611100(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_16477d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1648c60(void);
__int64 GameRoutine_16ae340(_QWORD, _QWORD);
__int64 GameRoutine_16b41a0(__int64);
__int64 GameRoutine_16b5db0(_QWORD);
__int64 GameRoutine_16bb880(_QWORD, _QWORD);
__int64 GameRoutine_16bc360(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16bc520(void);
__int64 GameRoutine_16bc660(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16bc820(_QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_16d1510(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_16dcd30(__int64, __int64, _QWORD*, __int64);
__int64 GameRoutine_16dd8b0(_QWORD, _QWORD, _QWORD);
_QWORD* GameRoutine_16ddbe0(_QWORD* result);
__int64 GameRoutine_16df380(_QWORD);
_QWORD* GameRoutine_16e0c00(_QWORD* result, __int64);
__int64 GameRoutine_16e4480(__int64*, __int64*, __int64*, __int64);
__int64 GameRoutine_16e45e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16e4700(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16e66c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ef450(_QWORD*);
__int64 GameRoutine_16ef760(_QWORD);
__int64 GameRoutine_16f03e0(_QWORD);
__int64 GameRoutine_16f75a0(void);
__int64 GameRoutine_16f7830(_QWORD, _QWORD);
__int64 GameRoutine_1700aa0(_QWORD, _QWORD);
__int64 GameRoutine_1704ea0(__int64, __int64);
__int64 GameRoutine_1705ea0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1706020(_QWORD, _QWORD);
__int64 GameRoutine_170b1f0(_QWORD, _QWORD);
__int64 GameRoutine_1789cf0(_QWORD, _QWORD);
__int64 GameRoutine_18855c0(_QWORD, _QWORD);
__int64 GameRoutine_189d910(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18ae960(_QWORD, _QWORD);
__int64 GameRoutine_18aee60(_QWORD, _QWORD);
__int64 GameRoutine_19a9be0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a006e0(_QWORD, _QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_1a00ae0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a06650(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09fd0(_QWORD);
__int64 GameRoutine_1a09fe0(_QWORD);
__int64 GameRoutine_1a0a0c0(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_1a0a6c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_56b600(void);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65c580(_QWORD, _QWORD);
__int64 GameRoutine_6c2b50(_QWORD);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_6e5a40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7a7dc0(const char*, ...);
__int64 GameRoutine_7a86e0(_QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_95e2c0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_95eaa0(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_95f500(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_960210(void);
__int64 GameRoutine_9b9250(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9d0620(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_fa6720(void);
__attribute__((swiftcall)) void GameRoutine_fa73c0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void
GameRoutine_16d1510_alt1(PSEUDO_X8, __int64,
                         __int64) __asm__("GameRoutine_16d1510");
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
__int64 Alignment_56b600(__int64 result);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameRoutine_1570b30_alt1(__int64*,
                                 __int64*) __asm__("GameRoutine_1570b30");
__int64 GameRoutine_16ae340_alt1(__int64*,
                                 __int64) __asm__("GameRoutine_16ae340");
__int64 GameRoutine_16ef760_alt1(__int64) __asm__("GameRoutine_16ef760");
__int64 GameRoutine_930b90_alt1(__int64, __int64) __asm__("GameRoutine_930b90");
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 LayoutAccessor_15635a0(__int64*, const char*, char);
__int64 game_menu_PageTab_SetupImage(int*, __int64, __int64, int, int, int);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindPartsLayout(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
char* game_util_Format(const char*, ...);
extern __int64* game_g_empty_item_ptr;
extern __int64 fw_memory_g_heap_manager_ptr;
int __cxa_guard_acquire(__int64);
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void GameRoutine_1648c60_alt1(__int64) __asm__("GameRoutine_1648c60");
void GameRoutine_16f03e0_alt1(_QWORD*) __asm__("GameRoutine_16f03e0");
void GameRoutine_18855c0_alt1(_QWORD*, _QWORD*) __asm__("GameRoutine_18855c0");
void GameRoutine_6e3b50_alt1(__int64, _QWORD*) __asm__("GameRoutine_6e3b50");
void LayoutAccessor_1562060(__int64*, __int64, __int64);
void LayoutAccessor_1572ac0(__int64*, __int64, char, char);
void Layout_1364020(_QWORD*, __int64, __int64);
void Util_1585690(__int64, _QWORD*, __int64, __int64);
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 GameHr_16ad440(__int64 a1);
__int64 GameHr_16d1100(__int64* a1);
void GameHr_16ef450(_QWORD* a1);
__int64 GameHr_16fe4d0(__int64 a1);
__int64 GameHr_1701ab0(__int64* a1);
__int64 GameHr_1708330(__int64* a1);

__int64 GameHr_16a52a0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  float v4;
  bool v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;

  GameRoutine_1560070((void*)&v10, a1 + 848, "L_Minimap");
  if (v11 == 0) {
    goto LABEL_21;
  }
  v2 = GameRoutine_1a0a0c0(v11);
  if (v2 != 0) {
    v3 = v10;
  }
  else {
    v3 = 0;
  }
  if (v11 != 0) {
    GameRoutine_1a09c50(v11);
  }
  if (v3 != 0) {
    if (v2 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                memory_order_relaxed);
    }
    if (*(_DWORD*)(a1 + 1228) != 2) {
      goto LABEL_16;
    }
    v4 = *(float*)(GameData_2265ef0 + 104) + *(float*)(a1 + 1432);
    v5 = v4 < 30.0;
    if (v4 >= 30.0) {
      v4 = 0.0;
    }
    *(float*)(a1 + 1432) = v4;
    if (v5) {
    LABEL_16:
      if (v2 == 0) {
        goto LABEL_21;
      }
    }
    else {
      v10 = v3;
      v11 = v2;
      if (v2 == 0) {
        GameRoutine_1a006e0(a1 + 1232, &v10, a1 + 1408, a1 + 1384,
                            *(float*)(a1 + 1440));
        goto LABEL_21;
      }
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_1a006e0(a1 + 1232, &v10, a1 + 1408, a1 + 1384,
                          *(float*)(a1 + 1440));
      GameRoutine_1a09c50(v2);
    }
    GameRoutine_1a09c50(v2);
  }
  else if (v2 == 0) {
    goto LABEL_21;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    GameRoutine_1a09c50(v2);
  }
LABEL_21:
  GameRoutine_16df380(a1);
  (*(void (**)(__int64))(*(_QWORD*)a1 + 712LL))(a1);
  v6 = *(_QWORD**)(a1 + 232);
  v7 = *(_QWORD**)(a1 + 240);
  while (v6 != v7) {
    v8 = *v6;
    if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v6 + 48LL))(*v6) & 1) != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 144LL))(v8);
    }
    ++v6;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 720LL))(a1);
}

__int64 GameHr_16a57b0(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = *(unsigned int*)(a1 + 1228);
  if ((unsigned int)v1 <= 2) {
    *(_DWORD*)(a1 + 1228) = GameData_1b0b98c[v1];
  }
  GameRoutine_1560070((void*)&v8, a1 + 848, "L_Minimap");
  if (v9 != 0) {
    v3 = GameRoutine_1a0a0c0(v9);
    if (v3 != 0) {
      v4 = v8;
    }
    else {
      v4 = 0;
    }
    if (v9 != 0) {
      GameRoutine_1a09c50(v9);
    }
    if (v4 != 0) {
      v6 = v4;
      v7 = v3;
      if (v3 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                  memory_order_relaxed);
      }
      GameRoutine_1a00ae0(a1 + 1232, &v6, *(unsigned int*)(a1 + 1228));
      if (v7 != 0) {
        GameRoutine_1a09c50(v7);
      }
    }
    if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      GameRoutine_1a09c50(v3);
    }
  }
  return 13;
}

__int64 GameHr_16ad440(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int32 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  int v18;
  _QWORD* v19;
  __int64 v20;
  int v21;
  __int64* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int32 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  int v30;
  _QWORD* v31;
  __int64 v32;
  int v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int32 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  int v42;
  _QWORD* v43;
  __int64 v44;
  int v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  unsigned __int32 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  int v53;
  _QWORD* v54;
  __int64 v55;
  unsigned __int64 v56;
  bool v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  _QWORD* v64;
  unsigned __int64 v65;
  char v66;
  char v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  char* v72;
  __int64 v73;
  __int64* v74;
  __int64 v75;
  __int64 v76;
  __int64* v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64* v81;
  unsigned __int64 v82;
  __int64 result;
  struct {
    __int64 v84;
    __int64 v85;
  } v84_;
  struct {
    int8x16x2_t v86;
    __int64 v87;
  } v86_;
  _QWORD** v88;
  struct {
    _QWORD* v89;
    __int64 v90;
    __int64 v91;
    __int64 v92;
    _BYTE* v93;
    __int64 v94;
    int v95;
  } v89_;
  struct {
    __int64 v96;
    unsigned __int64 v97;
    unsigned __int64 v98;
  } v96_;

  GameRoutine_1648c60_alt1(a1);
  LayoutAccessor_1560070((void*)(&v86_.v86), (__int64*)(a1 + 848), "L_Target");
  if (LANES128(v86_.v86.val[0]).n128_u64[1] != 0) {
    v2 =
        std___1___shared_weak_count_lock(LANES128(v86_.v86.val[0]).n128_i64[1]);
    v3 = (__int64*)LANES128(v86_.v86.val[0]).n128_u64[0];
    if (LANES128(v86_.v86.val[0]).n128_u64[1] != 0) {
      std___1___shared_weak_count___release_weak(
          LANES128(v86_.v86.val[0]).n128_i64[1]);
    }
    if (v2 != 0 && v3 != nullptr) {
      v4 = *(unsigned __int8*)(a1 + 1496);
      v5 = *(_QWORD*)(a1 + 1504);
      if ((v4 & 1) == 0) {
        v5 = v4 >> 1;
      }
      if (v5 != 0) {
        if ((v4 & 1) != 0) {
          v6 = *(_QWORD*)(a1 + 1512);
        }
        else {
          v6 = a1 + 1497;
        }
        LayoutAccessor_1562060(v3, (__int64)"T_Txt", v6);
        LayoutAccessor_1562cf0((__int64)v3, "Title");
      }
      v7 = *(_QWORD*)(a1 + 1552);
      if (v7 != 0) {
        (*(void (**)(__int64, __int64*))(*(_QWORD*)v7 + 48LL))(v7, v3);
      }
      v8 = ui_LayoutAccessor_FindAlignment(v3, (__int64)"A_TxtDetail");
      if (v8 != 0) {
        Alignment_56b600(v8);
      }
      goto LABEL_18;
    }
    if (v2 != 0) {
    LABEL_18:
      if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
        std___1___shared_weak_count___release_weak(v2);
      }
    }
  }
  v96_.v97 = 0;
  v96_.v98 = 0;
  v96_.v96 = 0;
  v9 = GameData_212ceb0;
  if (*(_WORD*)(a1 + 1580) != 0) {
    v10 = *(_QWORD*)(a1 + 1580);
    LANES128(v86_.v86.val[0]).n128_u32[0] = 8;
    *(unsigned __int64*)((char*)LANES128(v86_.v86.val[0]).n128_u64 + 4) = v10;
    if (*(_BYTE*)GameData_212ceb0 != 0) {
      v11 = *GameData_212ceb0;
    }
    else {
      v11 = 0;
    }
    *(unsigned __int64*)((char*)&LANES128(v86_.v86.val[0]).n128_u64[1] + 4) =
        v11;
    LANES128(v86_.v86.val[1]).n128_u16[5] = 0;
    LANES128(v86_.v86.val[1]).n128_u32[3] = 0;
    v89_.v90 = 0;
    v89_.v91 = 0;
    v89_.v92 = 0;
    v89_.v93 = nullptr;
    v88 = &v89_.v89;
    v89_.v89 = nullptr;
    GameRoutine_930b90_alt1((__int64)&LANES128(v86_.v86.val[1]).n128_i64[1],
                            (__int64)GameData_212c8b0[0]);
    v89_.v94 = 0x100000000LL;
    v89_.v95 = -1;
    v12 = v96_.v97;
    if (v96_.v97 >= v96_.v98) {
      v15 = GameRoutine_16ae340_alt1(&v96_.v96, (__int64)&v86_.v86);
    }
    else {
      v13 = LANES128(v86_.v86.val[0]).n128_u32[0];
      *(_QWORD*)(v96_.v97 + 4) = 0;
      *(_QWORD*)(v12 + 12) = 0;
      *(_DWORD*)v12 = v13;
      *(_QWORD*)(v12 + 4) =
          *(unsigned __int64*)((char*)LANES128(v86_.v86.val[0]).n128_u64 + 4);
      if (LANES128(v86_.v86.val[0]).n128_u8[12] != 0) {
        v14 = *(__int64*)((char*)&LANES128(v86_.v86.val[0]).n128_i64[1] + 4);
      }
      else {
        v14 = 0;
      }
      *(_QWORD*)(v12 + 48) = 0;
      v16 = v12 + 48;
      *(_QWORD*)(v16 - 36) = v14;
      *(_WORD*)(v16 - 22) = 0;
      *(_DWORD*)(v16 - 20) = 0;
      *(_QWORD*)(v16 - 8) = v16;
      *(_QWORD*)(v16 + 8) = 0;
      *(_QWORD*)(v16 + 16) = 0;
      *(_QWORD*)(v16 + 24) = 0;
      *(_QWORD*)(v16 + 32) = 0;
      GameRoutine_930b90_alt1(v16 - 24,
                              (__int64)&LANES128(v86_.v86.val[1]).n128_i64[1]);
      v17 = v89_.v94;
      v18 = v89_.v95;
      *(_WORD*)(v16 + 56) = 0;
      v15 = v16 + 64;
      *(_DWORD*)(v16 + 48) = v18;
      *(_QWORD*)(v16 + 40) = v17;
    }
    v96_.v97 = v15;
    LANES128(v86_.v86.val[1]).n128_u64[1] = 0;
    LODWORD(v86_.v87) = 0;
    if ((v89_.v91 & 1) != 0) {
      *v89_.v93 = 0;
      v89_.v92 = 0;
    }
    else {
      LOWORD(v89_.v91) = 0;
    }
    GameRoutine_6e3b50_alt1((__int64)&v88, v89_.v89);
    v89_.v89 = nullptr;
    v89_.v90 = 0;
    v88 = &v89_.v89;
    if ((v89_.v91 & 1) != 0) {
      v19 = v89_.v93;
      if (v89_.v93 != nullptr) {
        v20 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, (__int64)v89_.v93);
        v19 = v89_.v89;
      }
    }
    else {
      v19 = nullptr;
    }
    GameRoutine_6e3b50_alt1((__int64)&v88, v19);
  }
  v21 = *(_DWORD*)(a1 + 1576);
  v22 = game_g_empty_item_ptr;
  if ((v21 & 0x80000000) == 0) {
    LANES128(v86_.v86.val[0]).n128_u32[0] = 6;
    *(unsigned __int64*)((char*)LANES128(v86_.v86.val[0]).n128_u64 + 4) =
        *game_g_empty_item_ptr;
    if (*(_BYTE*)v9 != 0) {
      v23 = *v9;
    }
    else {
      v23 = 0;
    }
    *(unsigned __int64*)((char*)&LANES128(v86_.v86.val[0]).n128_u64[1] + 4) =
        v23;
    LANES128(v86_.v86.val[1]).n128_u16[5] = 0;
    LANES128(v86_.v86.val[1]).n128_u32[3] = 0;
    v89_.v90 = 0;
    v89_.v91 = 0;
    v89_.v92 = 0;
    v89_.v93 = nullptr;
    v88 = &v89_.v89;
    v89_.v89 = nullptr;
    GameRoutine_930b90_alt1((__int64)&LANES128(v86_.v86.val[1]).n128_i64[1],
                            (__int64)GameData_212c8b0[0]);
    LODWORD(v89_.v94) = 0;
    HIDWORD(v89_.v94) = v21;
    v24 = v96_.v97;
    v89_.v95 = 0;
    if (v96_.v97 >= v96_.v98) {
      v27 = GameRoutine_16ae340_alt1(&v96_.v96, (__int64)&v86_.v86);
    }
    else {
      v25 = LANES128(v86_.v86.val[0]).n128_u32[0];
      *(_QWORD*)(v96_.v97 + 4) = 0;
      *(_QWORD*)(v24 + 12) = 0;
      *(_DWORD*)v24 = v25;
      *(_QWORD*)(v24 + 4) =
          *(unsigned __int64*)((char*)LANES128(v86_.v86.val[0]).n128_u64 + 4);
      if (LANES128(v86_.v86.val[0]).n128_u8[12] != 0) {
        v26 = *(__int64*)((char*)&LANES128(v86_.v86.val[0]).n128_i64[1] + 4);
      }
      else {
        v26 = 0;
      }
      *(_QWORD*)(v24 + 48) = 0;
      v28 = v24 + 48;
      *(_QWORD*)(v28 - 36) = v26;
      *(_WORD*)(v28 - 22) = 0;
      *(_DWORD*)(v28 - 20) = 0;
      *(_QWORD*)(v28 - 8) = v28;
      *(_QWORD*)(v28 + 8) = 0;
      *(_QWORD*)(v28 + 16) = 0;
      *(_QWORD*)(v28 + 24) = 0;
      *(_QWORD*)(v28 + 32) = 0;
      GameRoutine_930b90_alt1(v28 - 24,
                              (__int64)&LANES128(v86_.v86.val[1]).n128_i64[1]);
      v29 = v89_.v94;
      v30 = v89_.v95;
      *(_WORD*)(v28 + 56) = 0;
      v27 = v28 + 64;
      *(_DWORD*)(v28 + 48) = v30;
      *(_QWORD*)(v28 + 40) = v29;
    }
    v96_.v97 = v27;
    LANES128(v86_.v86.val[1]).n128_u64[1] = 0;
    LODWORD(v86_.v87) = 0;
    if ((v89_.v91 & 1) != 0) {
      *v89_.v93 = 0;
      v89_.v92 = 0;
    }
    else {
      LOWORD(v89_.v91) = 0;
    }
    GameRoutine_6e3b50_alt1((__int64)&v88, v89_.v89);
    v89_.v89 = nullptr;
    v89_.v90 = 0;
    v88 = &v89_.v89;
    if ((v89_.v91 & 1) != 0) {
      v31 = v89_.v93;
      if (v89_.v93 != nullptr) {
        v32 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v32 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, (__int64)v89_.v93);
        v31 = v89_.v89;
      }
    }
    else {
      v31 = nullptr;
    }
    GameRoutine_6e3b50_alt1((__int64)&v88, v31);
  }
  v33 = *(_DWORD*)(a1 + 1568);
  if ((v33 & 0x80000000) == 0) {
    v34 = *v22;
    LANES128(v86_.v86.val[0]).n128_u32[0] = 0;
    *(unsigned __int64*)((char*)LANES128(v86_.v86.val[0]).n128_u64 + 4) = v34;
    if (*(_BYTE*)v9 != 0) {
      v35 = *v9;
    }
    else {
      v35 = 0;
    }
    *(unsigned __int64*)((char*)&LANES128(v86_.v86.val[0]).n128_u64[1] + 4) =
        v35;
    LANES128(v86_.v86.val[1]).n128_u16[5] = 0;
    LANES128(v86_.v86.val[1]).n128_u32[3] = 0;
    v89_.v90 = 0;
    v89_.v91 = 0;
    v89_.v92 = 0;
    v89_.v93 = nullptr;
    v88 = &v89_.v89;
    v89_.v89 = nullptr;
    GameRoutine_930b90_alt1((__int64)&LANES128(v86_.v86.val[1]).n128_i64[1],
                            (__int64)GameData_212c8b0[0]);
    LODWORD(v89_.v94) = 0;
    HIDWORD(v89_.v94) = v33;
    v36 = v96_.v97;
    v89_.v95 = 0;
    if (v96_.v97 >= v96_.v98) {
      v39 = GameRoutine_16ae340_alt1(&v96_.v96, (__int64)&v86_.v86);
    }
    else {
      v37 = LANES128(v86_.v86.val[0]).n128_u32[0];
      *(_QWORD*)(v96_.v97 + 4) = 0;
      *(_QWORD*)(v36 + 12) = 0;
      *(_DWORD*)v36 = v37;
      *(_QWORD*)(v36 + 4) =
          *(unsigned __int64*)((char*)LANES128(v86_.v86.val[0]).n128_u64 + 4);
      if (LANES128(v86_.v86.val[0]).n128_u8[12] != 0) {
        v38 = *(__int64*)((char*)&LANES128(v86_.v86.val[0]).n128_i64[1] + 4);
      }
      else {
        v38 = 0;
      }
      *(_QWORD*)(v36 + 48) = 0;
      v40 = v36 + 48;
      *(_QWORD*)(v40 - 36) = v38;
      *(_WORD*)(v40 - 22) = 0;
      *(_DWORD*)(v40 - 20) = 0;
      *(_QWORD*)(v40 - 8) = v40;
      *(_QWORD*)(v40 + 8) = 0;
      *(_QWORD*)(v40 + 16) = 0;
      *(_QWORD*)(v40 + 24) = 0;
      *(_QWORD*)(v40 + 32) = 0;
      GameRoutine_930b90_alt1(v40 - 24,
                              (__int64)&LANES128(v86_.v86.val[1]).n128_i64[1]);
      v41 = v89_.v94;
      v42 = v89_.v95;
      *(_WORD*)(v40 + 56) = 0;
      v39 = v40 + 64;
      *(_DWORD*)(v40 + 48) = v42;
      *(_QWORD*)(v40 + 40) = v41;
    }
    v96_.v97 = v39;
    LANES128(v86_.v86.val[1]).n128_u64[1] = 0;
    LODWORD(v86_.v87) = 0;
    if ((v89_.v91 & 1) != 0) {
      *v89_.v93 = 0;
      v89_.v92 = 0;
    }
    else {
      LOWORD(v89_.v91) = 0;
    }
    GameRoutine_6e3b50_alt1((__int64)&v88, v89_.v89);
    v89_.v89 = nullptr;
    v89_.v90 = 0;
    v88 = &v89_.v89;
    if ((v89_.v91 & 1) != 0) {
      v43 = v89_.v93;
      if (v89_.v93 != nullptr) {
        v44 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v44 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, (__int64)v89_.v93);
        v43 = v89_.v89;
      }
    }
    else {
      v43 = nullptr;
    }
    GameRoutine_6e3b50_alt1((__int64)&v88, v43);
  }
  v45 = *(_DWORD*)(a1 + 1572);
  if ((v45 & 0x80000000) == 0) {
    LANES128(v86_.v86.val[0]).n128_u32[0] = 5;
    *(unsigned __int64*)((char*)LANES128(v86_.v86.val[0]).n128_u64 + 4) = *v22;
    if (*(_BYTE*)v9 != 0) {
      v46 = *v9;
    }
    else {
      v46 = 0;
    }
    *(unsigned __int64*)((char*)&LANES128(v86_.v86.val[0]).n128_u64[1] + 4) =
        v46;
    LANES128(v86_.v86.val[1]).n128_u16[5] = 0;
    LANES128(v86_.v86.val[1]).n128_u32[3] = 0;
    v89_.v90 = 0;
    v89_.v91 = 0;
    v89_.v92 = 0;
    v89_.v93 = nullptr;
    v88 = &v89_.v89;
    v89_.v89 = nullptr;
    GameRoutine_930b90_alt1((__int64)&LANES128(v86_.v86.val[1]).n128_i64[1],
                            (__int64)GameData_212c8b0[0]);
    LODWORD(v89_.v94) = 0;
    HIDWORD(v89_.v94) = v45;
    v47 = v96_.v97;
    v89_.v95 = 0;
    if (v96_.v97 >= v96_.v98) {
      v50 = GameRoutine_16ae340_alt1(&v96_.v96, (__int64)&v86_.v86);
    }
    else {
      v48 = LANES128(v86_.v86.val[0]).n128_u32[0];
      *(_QWORD*)(v96_.v97 + 4) = 0;
      *(_QWORD*)(v47 + 12) = 0;
      *(_DWORD*)v47 = v48;
      *(_QWORD*)(v47 + 4) =
          *(unsigned __int64*)((char*)LANES128(v86_.v86.val[0]).n128_u64 + 4);
      if (LANES128(v86_.v86.val[0]).n128_u8[12] != 0) {
        v49 = *(__int64*)((char*)&LANES128(v86_.v86.val[0]).n128_i64[1] + 4);
      }
      else {
        v49 = 0;
      }
      *(_QWORD*)(v47 + 48) = 0;
      v51 = v47 + 48;
      *(_QWORD*)(v51 - 36) = v49;
      *(_WORD*)(v51 - 22) = 0;
      *(_DWORD*)(v51 - 20) = 0;
      *(_QWORD*)(v51 - 8) = v51;
      *(_QWORD*)(v51 + 8) = 0;
      *(_QWORD*)(v51 + 16) = 0;
      *(_QWORD*)(v51 + 24) = 0;
      *(_QWORD*)(v51 + 32) = 0;
      GameRoutine_930b90_alt1(v51 - 24,
                              (__int64)&LANES128(v86_.v86.val[1]).n128_i64[1]);
      v52 = v89_.v94;
      v53 = v89_.v95;
      *(_WORD*)(v51 + 56) = 0;
      v50 = v51 + 64;
      *(_DWORD*)(v51 + 48) = v53;
      *(_QWORD*)(v51 + 40) = v52;
    }
    v96_.v97 = v50;
    LANES128(v86_.v86.val[1]).n128_u64[1] = 0;
    LODWORD(v86_.v87) = 0;
    if ((v89_.v91 & 1) != 0) {
      *v89_.v93 = 0;
      v89_.v92 = 0;
    }
    else {
      LOWORD(v89_.v91) = 0;
    }
    GameRoutine_6e3b50_alt1((__int64)&v88, v89_.v89);
    v89_.v89 = nullptr;
    v89_.v90 = 0;
    v88 = &v89_.v89;
    if ((v89_.v91 & 1) != 0) {
      v54 = v89_.v93;
      if (v89_.v93 != nullptr) {
        v55 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v55 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v55, (__int64)v89_.v93);
        v54 = v89_.v89;
      }
    }
    else {
      v54 = nullptr;
    }
    GameRoutine_6e3b50_alt1((__int64)&v88, v54);
  }
  LayoutAccessor_1560070((void*)(&v84_.v84), (__int64*)(a1 + 848),
                         "L_InfoResult");
  v56 = *(unsigned __int8*)(a1 + 1592);
  v57 = (v56 & 1) == 0;
  v58 = v56 >> 1;
  if (v57) {
    v59 = a1 + 1593;
  }
  else {
    v59 = *(_QWORD*)(a1 + 1608);
  }
  if (v57) {
    v60 = v58;
  }
  else {
    v60 = *(_QWORD*)(a1 + 1600);
  }
  Util_1585690((__int64)&v84_.v84, &v96_.v96, v59, v60);
  if (v84_.v85 != 0) {
    std___1___shared_weak_count___release_weak(v84_.v85);
  }
  v61 = v96_.v96;
  if (v96_.v96 != 0) {
    if (v96_.v96 == v96_.v97) {
      goto LABEL_123;
    }
    v62 = v96_.v97 - 40;
    v63 = fw_memory_g_heap_manager_ptr;
    do {
      v66 = *(_BYTE*)(v62 - 8);
      *(_DWORD*)(v62 - 40) = 0;
      *(_QWORD*)(v62 - 48) = 0;
      if ((v66 & 1) != 0) {
        **(_BYTE**)(v62 + 8) = 0;
        *(_QWORD*)v62 = 0;
      }
      else {
        *(_WORD*)(v62 - 8) = 0;
      }
      GameRoutine_6e3b50_alt1(v62 - 32, *(_QWORD**)(v62 - 24));
      v67 = *(_BYTE*)(v62 - 8);
      *(_QWORD*)(v62 - 24) = 0;
      *(_QWORD*)(v62 - 16) = 0;
      *(_QWORD*)(v62 - 32) = v62 - 24;
      if ((v67 & 1) != 0) {
        v64 = *(_QWORD**)(v62 + 8);
        if (v64 != nullptr) {
          if (*(_QWORD*)(*(_QWORD*)v63 + 200LL) != 0) {
            v68 = 128;
          }
          else {
            v68 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v63 + v68, (__int64)v64);
          v64 = *(_QWORD**)(v62 - 24);
        }
      }
      else {
        v64 = nullptr;
      }
      GameRoutine_6e3b50_alt1(v62 - 32, v64);
      v65 = v62 - 72;
      v62 -= 112LL;
    } while (v65 != v61);
    v96_.v97 = v61;
    v61 = v96_.v96;
    if (v96_.v96 != 0) {
    LABEL_123:
      v69 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v69 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v69, v61);
    }
  }
  v70 = 0;
  v71 = 0;
  do {
    v72 = game_util_Format("L_Unit%02d", v71);
    LayoutAccessor_1560070((void*)(&v86_.v86), (__int64*)(a1 + 848), v72);
    if (LANES128(v86_.v86.val[0]).n128_u64[1] == 0) {
      goto LABEL_127;
    }
    v73 =
        std___1___shared_weak_count_lock(LANES128(v86_.v86.val[0]).n128_i64[1]);
    v74 = (__int64*)LANES128(v86_.v86.val[0]).n128_u64[0];
    if (LANES128(v86_.v86.val[0]).n128_u64[1] != 0) {
      std___1___shared_weak_count___release_weak(
          LANES128(v86_.v86.val[0]).n128_i64[1]);
    }
    if (v73 == 0 || v74 == nullptr) {
      if (v73 == 0) {
        goto LABEL_127;
      }
      goto LABEL_161;
    }
    if (0xCCCCCCCCCCCCCCCDLL *
            ((__int64)(*(_QWORD*)(a1 + 1624) - *(_QWORD*)(a1 + 1616)) >> 3) <=
        v71) {
      LayoutAccessor_155e830((__int64)v74, 0);
      goto LABEL_161;
    }
    LayoutAccessor_155e830((__int64)v74, 1);
    v75 = *(_QWORD*)(a1 + 1616);
    LayoutAccessor_1560070((void*)(&v86_.v86), v74, "L_Name");
    if (LANES128(v86_.v86.val[0]).n128_u64[1] != 0) {
      v76 = std___1___shared_weak_count_lock(
          LANES128(v86_.v86.val[0]).n128_i64[1]);
      v77 = (__int64*)LANES128(v86_.v86.val[0]).n128_u64[0];
      if (LANES128(v86_.v86.val[0]).n128_u64[1] != 0) {
        std___1___shared_weak_count___release_weak(
            LANES128(v86_.v86.val[0]).n128_i64[1]);
      }
      if (v76 != 0 && v77 != nullptr) {
        if ((*(_BYTE*)(v75 + v70 + 16) & 1) != 0) {
          v78 = *(_QWORD*)(v75 + v70 + 32);
        }
        else {
          v78 = v75 + v70 + 17;
        }
        if (v78 != 0) {
          v79 = ui_LayoutAccessor_FindTextBox(v77, (__int64)"T_Txt");
          if (v79 != 0) {
            GameRoutine_156c5d0_alt1(v79, v78, 0);
          }
        }
      }
      else if (v76 == 0) {
        goto LABEL_151;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v76 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v76 + 16LL))(v76);
        std___1___shared_weak_count___release_weak(v76);
      }
    }
  LABEL_151:
    LayoutAccessor_1560070((void*)(&v86_.v86), v74, "L_Unit");
    if (LANES128(v86_.v86.val[0]).n128_u64[1] != 0) {
      v80 = std___1___shared_weak_count_lock(
          LANES128(v86_.v86.val[0]).n128_i64[1]);
      v81 = (__int64*)LANES128(v86_.v86.val[0]).n128_u64[0];
      if (LANES128(v86_.v86.val[0]).n128_u64[1] != 0) {
        std___1___shared_weak_count___release_weak(
            LANES128(v86_.v86.val[0]).n128_i64[1]);
      }
      if (v80 != 0 && v81 != nullptr) {
        v82 = *(_QWORD*)(v75 + v70);
        v86_.v87 = 0;
        LANES128(v86_.v86.val[0]).n128_u64[0] = 0;
        LANES128(v86_.v86.val[0]).n128_u64[1] = v82;
        LANES128(v86_.v86.val[1]).n128_u64[0] = 0;
        *(unsigned __int64*)((char*)LANES128(v86_.v86.val[1]).n128_u64 + 5) = 0;
        LANES128(v86_.v86.val[1]).n128_u8[13] = 6;
        LANES128(v86_.v86.val[1]).n128_u8[13] = *(_BYTE*)(v75 + v70 + 8);
        GameRoutine_1570b30_alt1(v81, (__int64*)&v86_.v86);
      LABEL_159:
        if (atomic_fetch_add((atomic_ullong* volatile)(v80 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v80 + 16LL))(v80);
          std___1___shared_weak_count___release_weak(v80);
        }
        goto LABEL_161;
      }
      if (v80 != 0) {
        goto LABEL_159;
      }
    }
  LABEL_161:
    if (atomic_fetch_add((atomic_ullong* volatile)(v73 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v73 + 16LL))(v73);
      std___1___shared_weak_count___release_weak(v73);
    }
  LABEL_127:
    ++v71;
    v70 += 40;
  } while (v70 != 200);
  result =
      ui_LayoutAccessor_FindAlignment((__int64*)(a1 + 848), (__int64)"A_Unit");
  if (result != 0) {
    return Alignment_56b600(result);
  }
  return result;
}

__int64 GameHr_16b5120(__int64 a1)
{
  __int64 v2;
  __int64 (**v3)();
  const char* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64 (**v11)();
  const char* v12;
  __int64 v13;
  __int64 (**v14)();
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  int v18;
  int v19;
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

  GameRoutine_1560070((void*)&v14, a1 + 848, "L_ClassInfo");
  if (v15 != 0) {
    v2 = GameRoutine_1a0a0c0(v15);
    v3 = v14;
    if (v15 != 0) {
      GameRoutine_1a09c50(v15);
    }
    if (v2 == 0 || v3 == nullptr) {
      if (v2 == 0) {
        goto LABEL_19;
      }
    }
    else {
      if ((*(_DWORD*)(a1 + 5524) & 1) != 0) {
        v5 = "MID_ClassTrialMenu_Job_Bonus";
      }
      else {
        v5 = "MID_ProfileMenu_Basic";
      }
      v20 = -1;
      v21 = -1;
      v22 = -1;
      v23 = -1;
      v24 = -1;
      v25 = -1;
      v26 = -1;
      v27 = -1;
      v28 = -1;
      v29 = -1;
      v30 = -1;
      v31 = -1;
      v14 = GameData_210fe18;
      v15 = 0xFFFF0001FFFF0000LL;
      v16 = 0xFFFF0004FFFF0002LL;
      v17 = 0xFFFF0006FFFF0005LL;
      v32 = 8;
      v18 = -65529;
      v19 = -65528;
      v6 = GameRoutine_a4dbe0(GameData_2265ec8, v5, 0, &v14);
      if (v6 != 0) {
        v7 = v6;
        v8 = GameRoutine_15621a0(v3, "T_Title");
        if (v8 != 0) {
          GameRoutine_156c5d0(v8, v7, 0);
        }
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      GameRoutine_1a09c50(v2);
    }
  }
LABEL_19:
  GameRoutine_1560070((void*)&v14, a1 + 848, "L_ClassInfo/L_Status_Title");
  result = v15;
  if (v15 == 0) {
    return result;
  }
  v10 = GameRoutine_1a0a0c0(v15);
  v11 = v14;
  result = v15;
  if (v15 != 0) {
    result = GameRoutine_1a09c50(v15);
  }
  if (v10 != 0 && v11 != nullptr) {
    if ((*(_DWORD*)(a1 + 5524) & 1) != 0) {
      v12 = "MID_Sys_GrowthRate";
    }
    else {
      v12 = "MID_Sys_Capability";
    }
    v20 = -1;
    v21 = -1;
    v22 = -1;
    v23 = -1;
    v24 = -1;
    v25 = -1;
    v26 = -1;
    v27 = -1;
    v28 = -1;
    v29 = -1;
    v30 = -1;
    v31 = -1;
    v14 = GameData_210fe18;
    v15 = 0xFFFF0001FFFF0000LL;
    v16 = 0xFFFF0004FFFF0002LL;
    v17 = 0xFFFF0006FFFF0005LL;
    v32 = 8;
    v18 = -65529;
    v19 = -65528;
    result = GameRoutine_a4dbe0(GameData_2265ec8, v12, 0, &v14);
    if (result != 0) {
      v13 = result;
      result = GameRoutine_15621a0(v11, "T_Title");
      if (result != 0) {
        result = GameRoutine_156c5d0(result, v13, 0);
      }
    }
  }
  else if (v10 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    return GameRoutine_1a09c50(v10);
  }
  return result;
}

__int64 GameHr_16b57f0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  _BOOL8 v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned int v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 result;
  __int64 v39;
  __int64 v40;
  char v41;
  _QWORD v42[2];
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;

  v2 = *(_QWORD*)(a1 + 336);
  if (v2 == 0) {
    goto LABEL_83;
  }
  v3 = GameRoutine_1a0a6c0(v2, GameData_212e008[0], &GameData_208be80, 0);
  if (v3 == 0) {
    goto LABEL_83;
  }
  v4 = v3;
  GameRoutine_1560070((void*)&v49, a1 + 848, "L_ClassInfo");
  if (v50 == 0) {
    goto LABEL_83;
  }
  v5 = GameRoutine_1a0a0c0(v50);
  v6 = v49;
  if (v5 != 0) {
    v7 = v49;
  }
  else {
    v7 = 0;
  }
  if (v50 != 0) {
    GameRoutine_1a09c50(v50);
  }
  if (v7 != 0) {
    GameRoutine_155e830(v6, 0);
    GameRoutine_1560ec0(a1 + 848, "L_KeyHelp", 0);
    v8 = *(_QWORD*)(v4 + 96);
    if (v8 == 0) {
      goto LABEL_41;
    }
    GameRoutine_155e830(v6, 1);
    v9 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1152LL))(a1);
    GameRoutine_95f500(v9, a1 + 3296, a1 + 1072, v8);
    GameRoutine_95e2c0((void*)&v49, *(_QWORD*)(v4 + 88), *(_QWORD*)(v4 + 96));
    if ((v49 & 0xBC1) == 0x100) {
      v47 = v7;
      v48 = v5;
      if (v5 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                  memory_order_relaxed);
      }
      GameRoutine_1589740(&v47, a1 + 3296);
      v10 = v48;
      if (v48 == 0) {
        goto LABEL_41;
      }
    LABEL_40:
      GameRoutine_1a09c50(v10);
      goto LABEL_41;
    }
    if ((*(_BYTE*)(v8 + 49) & 0xFE) != 4 ||
        GameData_21caab0 != 0 && *(_DWORD*)(GameData_21caab0 + 60) == 3) {
      v43 = v7;
      v44 = v5;
      if (v5 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                  memory_order_relaxed);
      }
      v11 = *(_DWORD*)(a1 + 5524) != 0;
      v12 = (*(unsigned __int8 (**)(__int64))(*(_QWORD*)a1 + 1152LL))(a1) == 0;
      GameRoutine_1587880(&v43, a1 + 3296, a1 + 1072, v11, v12);
      if (v44 != 0) {
        GameRoutine_1a09c50(v44);
      }
      GameRoutine_95eaa0((void*)&v49, *(_QWORD*)(a1 + 1064), v8);
      if ((v49 & 2) != 0) {
        GameRoutine_1560ec0(a1 + 848, "L_KeyHelp", 1);
        GameRoutine_1560070((void*)&v49, a1 + 848, "L_KeyHelp");
        if (v50 != 0) {
          v13 = GameRoutine_1a0a0c0(v50);
          v14 = v49;
          if (v50 != 0) {
            GameRoutine_1a09c50(v50);
          }
          if (v13 != 0 && v14 != 0) {
            v15 = (GameRoutine_1468270() & 1) != 0 ? "Default" : "Disable";
            GameRoutine_1562cf0(v14, v15);
          }
          else if (v13 == 0) {
            goto LABEL_41;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
            v10 = v13;
            goto LABEL_40;
          }
        }
      }
    }
    else {
      v45 = v7;
      v46 = v5;
      if (v5 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                  memory_order_relaxed);
      }
      GameRoutine_1589a10(&v45, a1 + 3296);
      v10 = v46;
      if (v46 != 0) {
        goto LABEL_40;
      }
    }
  LABEL_41:
    v42[0] = "L_ClassInfo/L_Class";
    v42[1] = 19;
    GameRoutine_fa73c0((void*)&v49, a1 + 848, v42);
    if (v50 != 0) {
      v16 = GameRoutine_1a0a0c0(v50);
      v17 = v49;
      if (v50 != 0) {
        GameRoutine_1a09c50(v50);
      }
      if (v16 != 0 && v17 != 0) {
        v18 = *(_QWORD*)(v4 + 96);
        v19 = *(_QWORD*)(a1 + 1064);
        if (v18 != 0) {
          v20 = *(_QWORD*)(*(_QWORD*)(v18 + 24) + 1104LL);
          if (v20 != 0) {
            v21 = *(_QWORD*)(v19 + 560);
            v22 = *(unsigned __int16*)(v20 + 16);
            if (v22 >= (*(_QWORD*)(v19 + 568) - v21) >> 1) {
              v23 = 0;
            }
            else {
              v23 = *(_WORD*)(v21 + 2 * v22) & 0x3FF;
            }
            v26 = *(_QWORD*)(v19 + 560);
            v27 = *(unsigned __int16*)(v20 + 16);
            if (v27 >= (*(_QWORD*)(v19 + 568) - v26) >> 1) {
              v24 = 0;
            }
            else {
              v24 = *(_WORD*)(v26 + 2 * v27) & 0x3FF;
            }
            v25 = *(unsigned __int16*)(v20 + 412);
          }
          else {
            v24 = 0;
            v23 = 0;
            v25 = 0;
          }
          GameRoutine_189d910(v17, v19, v23, v24, v25, 1);
          v28 = *(_QWORD*)(*(_QWORD*)(v18 + 24) + 1104LL);
          if (v28 != 0) {
            v29 = *(_QWORD*)(a1 + 1064);
            v30 = *(_QWORD*)(*(_QWORD*)(v28 + 24) + 1104LL);
            if (v30 != 0) {
              v31 = *(unsigned __int16*)(v30 + 412);
              if (*(_WORD*)(v30 + 412) != 0) {
                v32 = *(_QWORD*)(v29 + 560);
                v33 = *(unsigned __int16*)(v30 + 16);
                v34 = v33 >= (*(_QWORD*)(v29 + 568) - v32) >> 1
                          ? 0
                          : *(_WORD*)(v32 + 2 * v33) & 0x3FF;
                if (v34 >= v31) {
                  goto LABEL_71;
                }
              }
            }
          }
          else if (*(_QWORD*)(a1 + 1064) == 0) {
            goto LABEL_71;
          }
          if ((unsigned __int8)GameRoutine_960210() != 1 &&
              ((*(_BYTE*)(v18 + 49) & 0xFE) != 4 ||
               GameData_21caab0 != 0 &&
                   *(_DWORD*)(GameData_21caab0 + 60) == 3)) {
            v35 = 1;
          LABEL_72:
            GameRoutine_1560ec0(v6, "A_LvExp", v35);
            v36 = GameRoutine_155f480(v6, "T_LvExpNum");
            if (v36 != 0) {
              v37 = GameRoutine_1a0a6c0(v36, GameData_212d670[0],
                                        GameData_212d690, 0);
              if (v37 != 0) {
                GameRoutine_156c910(v37, "%d", 1);
              }
            }
            if (GameRoutine_1563e00(v6, "A_LvExp") != 0) {
              GameRoutine_56b600();
            }
            goto LABEL_77;
          }
        }
        else {
          GameRoutine_189d910(v17, v19, 0, 0, 0, 1);
        }
      LABEL_71:
        v35 = 0;
        goto LABEL_72;
      }
      if (v16 != 0) {
      LABEL_77:
        if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
          GameRoutine_1a09c50(v16);
        }
      }
    }
    GameRoutine_16b5db0(a1);
  }
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    GameRoutine_1a09c50(v5);
  }
LABEL_83:
  GameRoutine_1560070((void*)&v49, a1 + 848, "L_ClassInfo");
  result = v50;
  if (v50 == 0) {
    return result;
  }
  v39 = GameRoutine_1a0a0c0(v50);
  v40 = v49;
  result = v50;
  if (v50 != 0) {
    result = GameRoutine_1a09c50(v50);
  }
  if (v39 != 0 && v40 != 0) {
    v41 = GameRoutine_155ea30(v40);
    result = GameRoutine_1567590("XHelp", (v41 & 1) == 0);
  }
  else if (v39 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
    return GameRoutine_1a09c50(v39);
  }
  return result;
}

_QWORD* GameHr_16b8ac0(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD* v6;
  __int64* v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD v24[4];
  _QWORD* v25;
  __int64 v26;

  v6 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 5536, 16, 0);
  GameRoutine_fa6720();
  v7 = GameData_2131b70[0];
  v6[133] = a2;
  *v6 = v7 + 2;
  v6[22] = v7 + 154;
  v6[132] = v7 + 180;
  GameRoutine_6c2b50(v6 + 134);
  GameRoutine_6c2b50(v6 + 412);
  *((_BYTE*)v6 + 5520) = 0;
  *((_DWORD*)v6 + 1381) = 0;
  *((_BYTE*)v6 + 5528) = 0;
  GameRoutine_16b41a0((__int64)v6);
  *v6 = GameData_208c650;
  v6[22] = GameData_208cb10;
  v6[132] = GameData_208cbe0;
  v8 = GameRoutine_657850(v6, GameData_212c730, "ProcClassTrialJobMenu", 1, a1);
  (*(void (**)(__int64, _QWORD))(*v6 + 1168LL))(v8, a3);
  v10 = (_QWORD*)v6[32];
  v9 = (_QWORD*)v6[33];
  v6[42] = 0;
  while (v10 != v9) {
    if (*v10 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v10 + 8LL))(*v10);
      v9 = (_QWORD*)v6[33];
    }
    ++v10;
  }
  v11 = v6[43];
  if (v11 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
    v6[43] = 0;
  }
  v6[33] = v6[32];
  v6[30] = v6[29];
  (*(void (**)(_QWORD*))(*v6 + 1024LL))(v6);
  result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*v6 + 1032LL))(v6);
  if (*GameData_212dcd0 == 0) {
    return result;
  }
  v14 = *(unsigned int*)(*GameData_212dcd0 + 20);
  if ((v14 & 0x80000000) != 0) {
    return result;
  }
  v15 = *(_QWORD*)(*GameData_212c868 + 64);
  if ((int)v14 >=
      (int)((unsigned __int64)(*(_QWORD*)(*GameData_212c868 + 72) - v15) >>
            3)) {
    return result;
  }
  v16 = *(_QWORD*)(v15 + 8 * v14);
  if (v16 == 0) {
    return result;
  }
  v18 = v6[29];
  v17 = v6[30];
  result = v24;
  v24[0] = GameData_208d178;
  v24[1] = v16;
  v25 = v24;
  if (v17 == v18) {
    goto LABEL_23;
  }
  v19 = 0;
  v20 = GameData_212e008[0];
  do {
    v21 = *(_QWORD*)(v18 + 8 * v19);
    if (v21 != 0) {
      v22 = GameRoutine_1a0a6c0(v21, v20, &GameData_208cc80, 0);
      if (v22 == 0) {
        goto LABEL_14;
      }
      v26 = v22;
      if (v25 == nullptr) {
        GameRoutine_60a310(0, v13);
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v25 + 48LL))(v25, &v26) & 1) !=
          0) {
        break;
      }
      v18 = v6[29];
      v17 = v6[30];
    }
  LABEL_14:
    ++v19;
  } while (v19 < (v17 - v18) >> 3);
  result = v25;
  if (v25 != v24) {
    if (v25 != nullptr) {
      v23 = 40;
      return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v23))(result,
                                                                         v13);
    }
    return result;
  }
LABEL_23:
  v23 = 32;
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v23))(result,
                                                                     v13);
}

__int64 GameHr_16b9fc0(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  _QWORD v7[2];
  __int64 v8;
  __int64 v9;

  GameRoutine_1562cf0(a2, "JobTrial");
  v7[0] = "L_Job";
  v7[1] = 5;
  GameRoutine_1587740((void*)&v8, a2, v7);
  result = v9;
  if (v9 != 0) {
    v5 = GameRoutine_1a0a0c0(v9);
    v6 = v8;
    result = v9;
    if (v9 != 0) {
      result = GameRoutine_1a09c50(v9);
    }
    if (v5 != 0 && v6 != 0) {
      *(_BYTE*)(v6 + 1106) = 1;
      GameRoutine_19a9be0(v6, *(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 16));
      result = GameRoutine_1560ec0(a2, "L_Job", 1);
    }
    else if (v5 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      return GameRoutine_1a09c50(v5);
    }
  }
  return result;
}

__int64 GameHr_16bb080(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  const char* v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  GameRoutine_1560070((void*)&v10, a1 + 848, "L_JobList");
  if (v11 == 0) {
    goto LABEL_21;
  }
  v2 = GameRoutine_1a0a0c0(v11);
  v3 = v10;
  if (v11 != 0) {
    GameRoutine_1a09c50(v11);
  }
  if (v2 == 0 || v3 == 0) {
    if (v2 == 0) {
      goto LABEL_21;
    }
    goto LABEL_19;
  }
  v5 = "LvOff";
  if (*(_BYTE*)(a1 + 1072) != 1) {
    if (*(_BYTE*)(a1 + 1072) != 0) {
      goto LABEL_19;
    }
    if (GameData_21caab0 != 0) {
      if (*(_DWORD*)(GameData_21caab0 + 60) != 3) {
        v5 = "LvOn";
      }
    }
    else {
      v5 = "LvOn";
    }
  }
  GameRoutine_1562cf0(v3, v5);
LABEL_19:
  if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    GameRoutine_1a09c50(v2);
  }
LABEL_21:
  result = GameRoutine_16bb880(a1, *(_QWORD*)(a1 + 1064));
  v7 = GameData_21f1e08;
  if (GameData_21f1e08 != 0) {
    v8 = GameData_21f1e08;
    *(_BYTE*)(GameData_21f1e08 + 256) = 1;
    GameRoutine_18aee60(v8, a1 + 848);
    GameRoutine_18ae960(v7, 1);
    result = *(_QWORD*)(v7 + 240);
    *(_QWORD*)(v7 + 232) = 0;
    *(_QWORD*)(v7 + 240) = 0;
    if (result != 0) {
      result = GameRoutine_1a09c50(result);
    }
    *(_QWORD*)(v7 + 160) = a1;
    *(_BYTE*)(v7 + 257) = 0;
    *(_DWORD*)(v7 + 248) = -1;
    v9 = GameData_21f1e08;
    if (GameData_21f1e08 != 0) {
      *(_QWORD*)(GameData_21f1e08 + 268) = 0x44048000C46D8000LL;
      *(_QWORD*)(v9 + 276) = 0xC4048000446D8000LL;
    }
  }
  return result;
}

__int64 GameHr_16bb9c0(__int64 a1)
{
  _QWORD* v1;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 result;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  char v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  char v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  int v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 v63;
  _QWORD v64[2];
  char v65[32];
  __int64 v66;

  v1 = (_QWORD*)(a1 + 848);
  GameRoutine_1560070((void*)&v59, a1 + 848, "L_UnitInfo00/L_UnitInfo");
  if (v60 != 0) {
    v3 = GameRoutine_1a0a0c0(v60);
    v4 = v59;
    if (v60 != 0) {
      GameRoutine_1a09c50(v60);
    }
    if (v3 == 0 || v4 == 0) {
      if (v3 == 0) {
        goto LABEL_20;
      }
    }
    else {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                memory_order_relaxed);
      v66 = 0;
      v6 = *(_QWORD*)(a1 + 1064);
      v7 = GameRoutine_159e890(v6, 0, v65);
      v8 = GameRoutine_1a0a0c0(v3);
      if (v8 != 0) {
        v9 = v8;
        GameRoutine_1571860(v4, v6, 1, 0, 0, v7 & 1);
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          GameRoutine_1a09c50(v9);
        }
      }
      GameRoutine_1a09c50(v3);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                memory_order_relaxed);
      v10 = GameRoutine_1a0a0c0(v3);
      if (v10 != 0) {
        v11 = v10;
        GameRoutine_1562cf0(v4, "Simple00");
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          GameRoutine_1a09c50(v11);
        }
      }
      GameRoutine_1a09c50(v3);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      GameRoutine_1a09c50(v3);
    }
  }
LABEL_20:
  GameRoutine_1560070((void*)&v59, v1, "L_UnitInfo00");
  if (v60 == 0) {
    goto LABEL_33;
  }
  v12 = GameRoutine_1a0a0c0(v60);
  if (v12 != 0) {
    v13 = v59;
  }
  else {
    v13 = 0;
  }
  if (v60 != 0) {
    GameRoutine_1a09c50(v60);
  }
  if (v13 != 0) {
    v64[0] = v13;
    v64[1] = v12;
    if (v12 == 0) {
      GameRoutine_1575e70(v64, *(_QWORD*)(a1 + 1064));
      goto LABEL_33;
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_1575e70(v64, *(_QWORD*)(a1 + 1064));
    GameRoutine_1a09c50(v12);
  }
  else if (v12 == 0) {
    goto LABEL_33;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    GameRoutine_1a09c50(v12);
  }
LABEL_33:
  GameRoutine_1560070((void*)&v62, v1, "L_JobList");
  GameRoutine_1576480(&v62, *(_QWORD*)(a1 + 1064), *(_BYTE*)(a1 + 1072) == 0);
  if (v63 != 0) {
    GameRoutine_1a09c50(v63);
  }
  v14 = *(_QWORD*)(a1 + 856);
  if (v14 != 0) {
    v15 = GameRoutine_1a0a0c0(v14);
    if (v15 != 0) {
      v16 = v15;
      if (*v1 != 0) {
        GameRoutine_13633c0();
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
        GameRoutine_1a09c50(v16);
      }
    }
  }
  v60 = 0;
  v61 = 0;
  v59 = 0;
  LODWORD(v56) = 0;
  v17 = GameRoutine_16bc360(&v59, "L_UnitInfo/L_HPGroup", &v56);
  v18 = v61;
  v60 = v17;
  LODWORD(v56) = 0;
  if (v17 >= v61) {
    v20 = GameRoutine_16bc360(&v59, "L_UnitInfo/L_LvGroup", &v56);
    v18 = v61;
    v19 = v20;
  }
  else {
    v19 = GameRoutine_16bc520() + 32;
  }
  v60 = v19;
  v56 = GameRoutine_7a7dc0("L_MasteryInfoItem%02d", 6);
  LODWORD(v55) = 0;
  if (v19 >= v18) {
    v22 = GameRoutine_16bc660(&v59, &v56, &v55);
    v18 = v61;
    v21 = v22;
  }
  else {
    GameRoutine_16bc820(v19, &v56, &v55);
    v21 = v19 + 32;
  }
  v60 = v21;
  v56 = GameRoutine_7a7dc0("L_MasteryInfoItem%02d", 7);
  LODWORD(v55) = 0;
  if (v21 >= v18) {
    v24 = GameRoutine_16bc660(&v59, &v56, &v55);
    v18 = v61;
    v23 = v24;
  }
  else {
    GameRoutine_16bc820(v21, &v56, &v55);
    v23 = v21 + 32;
  }
  v60 = v23;
  v56 = GameRoutine_7a7dc0("L_MasteryInfoItem%02d", 8);
  LODWORD(v55) = 0;
  if (v23 >= v18) {
    v25 = GameRoutine_16bc660(&v59, &v56, &v55);
  }
  else {
    GameRoutine_16bc820(v23, &v56, &v55);
    v25 = v23 + 32;
  }
  v60 = v25;
  v56 = GameRoutine_7a7dc0("L_MasteryInfoItem%02d", 9);
  LODWORD(v55) = 0;
  if (v25 >= v61) {
    v26 = GameRoutine_16bc660(&v59, &v56, &v55);
  }
  else {
    GameRoutine_16bc820(v25, &v56, &v55);
    v26 = v25 + 32;
  }
  v60 = v26;
  v56 = GameRoutine_7a7dc0("L_MasteryInfoItem%02d", 10);
  LODWORD(v55) = 0;
  if (v26 >= v61) {
    v27 = GameRoutine_16bc660(&v59, &v56, &v55);
  }
  else {
    GameRoutine_16bc820(v26, &v56, &v55);
    v27 = v26 + 32;
  }
  v60 = v27;
  v56 = GameRoutine_7a7dc0("L_MasteryInfoItem%02d", 11);
  LODWORD(v55) = 0;
  if (v27 >= v61) {
    v28 = GameRoutine_16bc660(&v59, &v56, &v55);
  }
  else {
    GameRoutine_16bc820(v27, &v56, &v55);
    v28 = v27 + 32;
  }
  v60 = v28;
  v58 = 0;
  v29 = *(unsigned __int8*)(a1 + 1072);
  v30 = GameData_212bf68;
  v56 = 0;
  v57 = 0;
  if (v29 != 0) {
    v31 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 32, 16, 0);
    v32 = v31 + 32;
    v56 = v31;
    v57 = v31 + 32;
    v58 = v31 + 32;
    v33 = v31 + 32;
    strcpy((char*)v31, "*L_JobList/L_JobIcon00");
    *(_BYTE*)(v31 + 23) = 0;
    *(_QWORD*)(v31 + 24) = 0xFFFFFFFF00000000LL;
  }
  else {
    v55 = GameRoutine_7a7dc0("L_JobList/L_JobIcon_Rank1_Attr%d_00", 0);
    v54 = 0;
    v34 = GameRoutine_16bc660(&v56, &v55, &v54);
    v32 = v58;
    v33 = v34;
    v57 = v34;
  }
  v55 = GameRoutine_7a7dc0("L_JobList/L_JobIcon_Rank1_Attr%d_00", 1);
  v54 = 0;
  if (v33 >= v32) {
    v35 = GameRoutine_16bc660(&v56, &v55, &v54);
  }
  else {
    GameRoutine_16bc820(v33, &v55, &v54);
    v35 = v33 + 32;
  }
  v57 = v35;
  v55 = GameRoutine_7a7dc0("L_JobList/L_JobIcon_Rank1_Attr%d_00", 2);
  v54 = 0;
  if (v35 >= v58) {
    v36 = GameRoutine_16bc660(&v56, &v55, &v54);
  }
  else {
    GameRoutine_16bc820(v35, &v55, &v54);
    v36 = v35 + 32;
  }
  v57 = v36;
  v55 = GameRoutine_7a7dc0("L_JobList/L_JobIcon_Rank1_Attr%d_00", 3);
  v54 = 0;
  if (v36 >= v58) {
    v37 = GameRoutine_16bc660(&v56, &v55, &v54);
  }
  else {
    GameRoutine_16bc820(v36, &v55, &v54);
    v37 = v36 + 32;
  }
  v57 = v37;
  v55 = GameRoutine_7a7dc0("L_JobList/L_JobIcon_Rank1_Attr%d_00", 4);
  v54 = 0;
  if (v37 >= v58) {
    v38 = GameRoutine_16bc660(&v56, &v55, &v54);
  }
  else {
    GameRoutine_16bc820(v37, &v55, &v54);
    v38 = v37 + 32;
  }
  v57 = v38;
  GameRoutine_159f000(v1, &v59, &v56, 1);
  GameRoutine_159f000(v1, &v56, &v59, 1);
  result = GameData_21f1e08;
  if (GameData_21f1e08 != 0) {
    result = GameRoutine_18ae960(GameData_21f1e08, 0);
  }
  v40 = v56;
  if (v56 != 0) {
    v41 = v57;
    if (v56 == v57) {
      goto LABEL_90;
    }
    v42 = v57;
    do {
      v43 = *(_BYTE*)(v42 - 32);
      v42 -= 32;
      if ((v43 & 1) != 0) {
        v44 = *(_QWORD*)(v41 - 16);
        if (v44 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v30 + 200LL) != 0) {
            v45 = 128;
          }
          else {
            v45 = 56;
          }
          result = GameRoutine_1a0a4e0(*(_QWORD*)v30 + v45, v44);
        }
      }
      v41 = v42;
    } while (v42 != v40);
    v57 = v40;
    v40 = v56;
    if (v56 != 0) {
    LABEL_90:
      v46 = 128;
      if (*(_QWORD*)(*(_QWORD*)v30 + 200LL) == 0) {
        v46 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)v30 + v46, v40);
    }
  }
  v47 = v59;
  if (v59 != 0) {
    v48 = v60;
    if (v59 == v60) {
      goto LABEL_104;
    }
    v49 = v60;
    do {
      v50 = *(_BYTE*)(v49 - 32);
      v49 -= 32LL;
      if ((v50 & 1) != 0) {
        v51 = *(_QWORD*)(v48 - 16);
        if (v51 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v30 + 200LL) != 0) {
            v52 = 128;
          }
          else {
            v52 = 56;
          }
          result = GameRoutine_1a0a4e0(*(_QWORD*)v30 + v52, v51);
        }
      }
      v48 = v49;
    } while (v49 != v47);
    v60 = v47;
    v47 = v59;
    if (v59 != 0) {
    LABEL_104:
      v53 = 128;
      if (*(_QWORD*)(*(_QWORD*)v30 + 200LL) == 0) {
        v53 = 56;
      }
      return GameRoutine_1a0a4e0(*(_QWORD*)v30 + v53, v47);
    }
  }
  return result;
}

__int64 GameHr_16c3890(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64* v8;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = GameRoutine_1a0a0c0(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v8 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    GameRoutine_1a09c50(v4);
    v6 = v8;
    if (v8 != nullptr) {
      return GameRoutine_157af40(v6, *(unsigned int*)(a1 + 40));
    }
    goto LABEL_5;
  }
  if (v6 == nullptr) {
  LABEL_5:
    v6 = &GameData_22587d8;
  }
  return GameRoutine_157af40(v6, *(unsigned int*)(a1 + 40));
}

__int64 GameHr_16ca2e0(__int64* a1)
{
  __int64* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  _QWORD v15[4];
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  v1 = a1 + 106;
  GameRoutine_1560070((void*)&v21, a1 + 106, "L_UnitInfo");
  if (v22 != 0) {
    v3 = a1[146];
    v4 = a1[147];
    v5 = GameRoutine_1a0a0c0(v22);
    if (v5 != 0) {
      v6 = v5;
      if (v21 != 0) {
        GameRoutine_15740c0(v21, v3, 1, v4, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        GameRoutine_1a09c50(v6);
      }
    }
    if (v22 != 0) {
      GameRoutine_1a09c50(v22);
    }
  }
  v7 = a1[107];
  v19 = 0;
  v20 = 0;
  if (v7 != 0 && (v8 = GameRoutine_1a0a0c0(v7), v20 = v8, v8 != 0)) {
    v9 = v8;
    v19 = *v1;
    GameRoutine_155dfa0(a1 + 133, &v19, "L_InfoDetail");
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      GameRoutine_1a09c50(v9);
    }
  }
  else {
    GameRoutine_155dfa0(a1 + 133, &v19, "L_InfoDetail");
  }
  if (((*(__int64 (**)(__int64*))(*a1 + 1120))(a1) & 1) == 0) {
    return GameRoutine_1562cf0(v1, "Default");
  }
  GameRoutine_1562cf0(v1, "PageTab");
  v10 = (*(__int64 (**)(__int64*))(*a1 + 1128))(a1);
  GameRoutine_16dd8b0(a1, v10, 0);
  GameRoutine_1560070((void*)&v17, v1, "L_PageTab");
  v15[0] = GameData_2096218;
  v15[1] = a1;
  v16 = v15;
  if (GameData_21cd0c8 != 0) {
    v11 = 24;
  }
  else {
    v11 = 23;
  }
  GameRoutine_16e66c0(a1 + 82, &v17, v15, v11, 14, 15);
  if (v16 == v15) {
    v13 = 32;
  }
  else {
    if (v16 == nullptr) {
      goto LABEL_24;
    }
    v13 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v16 + v13))(v16, v12);
LABEL_24:
  result = v18;
  if (v18 != 0) {
    return GameRoutine_1a09c50(v18);
  }
  return result;
}

__int64 GameHr_16d1100(__int64* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  atomic_uchar* v10;
  __int64* v11;
  bool v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  int v20;
  const char* v21;
  int v22;
  unsigned int v23;
  char* i;
  __int64 v25;
  __int64* v26;
  _QWORD* v28;
  const char* v29;
  atomic_uchar* v30;
  __int64 v31;
  __int64 v32;
  __int64 result;
  __int64 j;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64* v38;
  _QWORD* v39;
  struct {
    __int64 v40;
    __int64 v41;
  } v40_;
  struct {
    __int64 v42;
    __int64 v43;
  } v42_;

  v2 = a1 + 119;
  v3 = (*(__int64 (**)(__int64*))(*a1 + 288))(a1);
  v4 = ui_LayoutAccessor_FindPartsLayout(v2, v3);
  if (v4 != 0) {
    v5 = v4;
    v6 = a1[120];
    if (v6 != 0) {
      v7 = std___1___shared_weak_count_lock(v6);
      if (v7 != 0) {
        v8 = (_QWORD*)*v2;
      }
      else {
        v8 = nullptr;
      }
    }
    else {
      v7 = 0;
      v8 = nullptr;
    }
    v9 = *(_QWORD*)(v5 + 24);
    v10 = (atomic_uchar*)GameData_212dfd0;
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212dfd0,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_21f8028) != 0) {
      GameData_21f8020 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
      __cxa_guard_release((__int64)&GameData_21f8028);
    }
    if (v9 != 0) {
      v11 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      if (v11 == &GameData_21f8020) {
        goto LABEL_16;
      }
      do {
        v11 = (__int64*)*v11;
        v12 = v11 == &GameData_21f8020 || v11 == nullptr;
      } while (!v12);
      if (v11 != nullptr) {
      LABEL_16:
        GameRoutine_16d1510_alt1((void*)(&v42_.v42), (__int64)v8, v9);
        if (v42_.v43 != 0) {
          v13 = std___1___shared_weak_count_lock(v42_.v43);
          v14 = v42_.v42;
          if (v42_.v43 != 0) {
            std___1___shared_weak_count___release_weak(v42_.v43);
          }
          if (v13 != 0 && v14 != 0) {
            v15 = *(_QWORD*)(v14 + 320);
            v37 = v7;
            v38 = v2;
            v36 = v13;
            if (v15 != 0) {
              v16 = *(_QWORD**)(v14 + 312);
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 16), 1u,
                                        memory_order_relaxed);
              v35 = std___1___shared_weak_count_lock(v15);
              if (v35 != 0) {
                v17 = v16;
              }
              else {
                v17 = nullptr;
              }
              v39 = v17;
              std___1___shared_weak_count___release_weak(v15);
            }
            else {
              v35 = 0;
              v39 = nullptr;
            }
            v18 = ui_LayoutAccessor_FindPane(v2, (__int64)"MenuItemList");
            if (v18 != 0) {
              v19 = v18;
              v20 = (*(__int64 (**)(__int64*))(*a1 + 1080))(a1);
              if ((v20 & 0x80000000) == 0) {
                v21 = "L_MenuItem%02d";
                v22 = v20;
                v23 = 0;
                for (i = game_util_Format("L_MenuItem%02d", 0);;
                     i = game_util_Format(v21, v23)) {
                  v25 = (*(__int64 (**)(__int64, char*, __int64))(
                      *(_QWORD*)v19 + 120LL))(v19, i, 1);
                  if ((atomic_load_explicit(v10, memory_order_acquire) & 1) ==
                          0 &&
                      __cxa_guard_acquire((__int64)v10) != 0) {
                    GameData_21f8020 =
                        (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
                    __cxa_guard_release((__int64)v10);
                  }
                  if (v25 != 0) {
                    v26 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v25 +
                                                              16LL))(v25);
                    if (v26 == &GameData_21f8020) {
                      goto LABEL_41;
                    }
                    do {
                      v26 = (__int64*)*v26;
                    } while (v26 != &GameData_21f8020 && v26 != nullptr);
                    if (v26 != nullptr) {
                    LABEL_41:
                      GameRoutine_16d1510_alt1((void*)(&v42_.v42), (__int64)v8,
                                               v25);
                      if (v42_.v43 == 0) {
                        goto LABEL_44;
                      }
                      v28 = v8;
                      v29 = v21;
                      v30 = v10;
                      v31 = *(_QWORD*)(v42_.v43 + 8);
                      std___1___shared_weak_count___release_weak(v42_.v43);
                      v12 = v31 == -1;
                      v10 = v30;
                      v21 = v29;
                      v8 = v28;
                      if (v12) {
                      LABEL_44:
                        Layout_1364020(v8, v9, v25);
                        GameRoutine_16d1510_alt1((void*)(&v40_.v40),
                                                 (__int64)v8, v25);
                        v42_.v42 = 0;
                        v42_.v43 = 0;
                        if (v40_.v41 != 0) {
                          v42_.v43 = std___1___shared_weak_count_lock(v40_.v41);
                          if (v42_.v43 != 0) {
                            v42_.v42 = v40_.v40;
                          }
                          if (v40_.v41 != 0) {
                            std___1___shared_weak_count___release_weak(
                                v40_.v41);
                          }
                          if (v42_.v42 != 0 && v39 != nullptr) {
                            GameRoutine_18855c0_alt1(v39, &v42_.v42);
                          }
                        }
                        v32 = v42_.v43;
                        if (v42_.v43 != 0 &&
                            atomic_fetch_add(
                                (atomic_ullong* volatile)(v42_.v43 + 8),
                                0xFFFFFFFFFFFFFFFFLL) == 0) {
                          (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
                          std___1___shared_weak_count___release_weak(v32);
                        }
                      }
                    }
                  }
                  v12 = v23++ == v22;
                  if (v12) {
                    break;
                  }
                }
              }
            }
            v13 = v36;
            v7 = v37;
            v2 = v38;
            if (v35 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
              std___1___shared_weak_count___release_weak(v35);
            }
          }
          if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
            std___1___shared_weak_count___release_weak(v13);
          }
        }
      }
    }
    if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
  }
  result = ui_LayoutAccessor_FindPane(v2, (__int64)"MenuItemTemp");
  if (result != 0) {
    for (j = *(_QWORD*)(result + 40); j != result + 32; j = *(_QWORD*)(j + 8)) {
      *(_BYTE*)(j + 80) &= ~1u;
    }
  }
  return result;
}

__int64 GameHr_16d1ca0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;

  *(_QWORD*)a1 = GameData_2097cc8;
  *(_QWORD*)(a1 + 88) = GameData_2097f18;
  v2 = *(_QWORD*)(a1 + 112);
  if (v2 != 0) {
    v3 = GameRoutine_1a0a0c0(v2);
    if (v3 != 0) {
      v4 = *(_QWORD**)(a1 + 104);
      v5 = v3;
      if (v4 != nullptr && v4[132] != 0) {
        v6 = (_QWORD*)v4[131];
        v7 = v4 + 130;
        v8 = *(_QWORD**)(v4[130] + 8LL);
        *(_QWORD*)(*v6 + 8LL) = v8;
        *v8 = *v6;
        v4[132] = 0;
        if (v6 != v4 + 130) {
          v9 = GameData_212bf68;
          do {
            v10 = (_QWORD*)v6[1];
            if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
              v11 = 128;
            }
            else {
              v11 = 56;
            }
            GameRoutine_1a0a4e0(*(_QWORD*)v9 + v11, v6);
            v6 = v10;
          } while (v10 != v7);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        GameRoutine_1a09c50(v5);
      }
    }
    v12 = *(_QWORD*)(a1 + 112);
    if (v12 != 0) {
      GameRoutine_1a09c50(v12);
    }
  }
  result = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = GameData_209cd80;
  if (result != 0) {
    result = GameRoutine_1a09c50(result);
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v14 = *(_QWORD*)(a1 + 32);
    if (v14 != 0) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v15 = 56;
      }
      return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v15, v14);
    }
  }
  return result;
}

__int64 GameHr_16d1ee0(_QWORD* a1)
{
  int v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _BOOL4 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 result;
  _QWORD* v31;
  _QWORD* v32;
  _QWORD* v33;
  _QWORD* v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;

  v2 = a1[14];
  if (v2 != 0 && *(_QWORD*)(v2 + 8) != -1) {
    goto LABEL_56;
  }
  v4 = a1[7];
  if (v4 != 0) {
    v5 = GameRoutine_1a0a0c0(v4);
    if (v5 != 0) {
      v6 = (__int64*)a1[6];
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v6 != nullptr) {
          goto LABEL_7;
        }
      }
      else {
        v7 = v5;
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        GameRoutine_1a09c50(v7);
        if (v6 != nullptr) {
        LABEL_7:
          if (v6[2] == 0) {
            goto LABEL_27;
          }
          goto LABEL_11;
        }
      }
    }
  }
  v6 = &GameData_22587d8;
  if (GameData_22587e8 == 0) {
    goto LABEL_27;
  }
LABEL_11:
  v8 = v6[1];
  if (v8 == 0) {
    goto LABEL_27;
  }
  v9 = GameRoutine_1a0a0c0(v8);
  if (v9 != 0) {
    v10 = *v6;
    if (*v6 != 0) {
      v1 = *(unsigned __int8*)(v10 + 24);
      v11 = v10 + 152;
      if (v1 == 0) {
        v11 = 0;
      }
      v12 = v11 != v6[2];
    }
    else {
      v12 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v12) {
        goto LABEL_20;
      }
    }
    else {
      v14 = v9;
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      GameRoutine_1a09c50(v14);
      if (v12) {
        goto LABEL_20;
      }
    }
    if ((v1 & 1) != 0) {
      goto LABEL_25;
    }
  LABEL_27:
    v16 = 0;
    goto LABEL_28;
  }
LABEL_20:
  v13 = v6[1];
  if (v13 == 0 || *(_QWORD*)(v13 + 8) == -1) {
    goto LABEL_27;
  }
LABEL_25:
  v15 = v6[2];
  if (v15 == 0) {
    goto LABEL_27;
  }
  v16 = *(_QWORD*)(v15 + 24);
LABEL_28:
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f8028,
                            memory_order_acquire) &
       1) == 0) {
    v39 = GameRoutine_1a09fd0(&GameData_21f8028);
    if ((_DWORD)v39 != 0) {
      GameData_21f8020 = GameRoutine_9b9250(v39, v40, v41, v42);
      GameRoutine_1a09fe0(&GameData_21f8028);
    }
  }
  if (v16 != 0) {
    v17 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    if (v17 == &GameData_21f8020) {
      goto LABEL_37;
    }
    do {
      v17 = (__int64*)*v17;
    } while (v17 != &GameData_21f8020 && v17 != nullptr);
    if (v17 != nullptr) {
    LABEL_37:
      v19 = a1[7];
      if (v19 != 0) {
        v20 = GameRoutine_1a0a0c0(v19);
        if (v20 != 0) {
          v21 = (__int64*)a1[6];
          if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            if (v21 != nullptr) {
              goto LABEL_41;
            }
          }
          else {
            v23 = v20;
            (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
            GameRoutine_1a09c50(v23);
            if (v21 != nullptr) {
            LABEL_41:
              v22 = v21[1];
              if (v22 == 0) {
                goto LABEL_52;
              }
            LABEL_45:
              v24 = GameRoutine_1a0a0c0(v22);
              if (v24 != 0) {
                v25 = *v21;
                v26 = v24;
                if (*v21 != 0) {
                  GameRoutine_1611100((void*)&v43, *v21, v16);
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
                  GameRoutine_1a09c50(v26);
                }
                if (v25 != 0) {
                  v28 = v43;
                  v27 = v44;
                LABEL_53:
                  v29 = a1[14];
                  v43 = 0;
                  v44 = 0;
                  a1[13] = v28;
                  a1[14] = v27;
                  if (v29 != 0) {
                    GameRoutine_1a09c50(v29);
                    if (v44 != 0) {
                      GameRoutine_1a09c50(v44);
                    }
                  }
                  goto LABEL_56;
                }
              }
            LABEL_52:
              v27 = 0;
              v28 = 0;
              goto LABEL_53;
            }
          }
        }
      }
      v21 = &GameData_22587d8;
      v22 = GameData_22587e0;
      if (GameData_22587e0 == 0) {
        goto LABEL_52;
      }
      goto LABEL_45;
    }
  }
LABEL_56:
  result = a1[14];
  if (result != 0) {
    result = GameRoutine_1a0a0c0(result);
    if (result != 0) {
      v31 = (_QWORD*)a1[13];
      if (v31 != nullptr) {
        v32 = (_QWORD*)v31[131];
        v33 = a1 + 11;
        v34 = v31 + 130;
        if (v32 == v31 + 130) {
          goto LABEL_62;
        }
        while ((_QWORD*)v32[2] != v33) {
          v32 = (_QWORD*)v32[1];
          if (v32 == v34) {
            goto LABEL_62;
          }
        }
        if (v32 == v34) {
        LABEL_62:
          v35 = result;
          v36 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 24, 16,
                                            0);
          v36[1] = v34;
          v36[2] = v33;
          result = v35;
          v37 = v31[130];
          *v36 = v37;
          *(_QWORD*)(v37 + 8) = v36;
          v31[130] = v36;
          ++v31[132];
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v38 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        return GameRoutine_1a09c50(v38);
      }
    }
  }
  return result;
}

__int64 GameHr_16d7050(__int64 a1)
{
  __int64 v2;
  char v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  _QWORD v7[6];
  __int64 v8;
  __int64 v9;

  GameRoutine_1560070((void*)&v8, a1 + 848, "L_UnitInfo");
  v2 = *(_QWORD*)(a1 + 1064);
  v7[4] = 0;
  v3 = GameRoutine_159e890(v2, 0, v7);
  result = v9;
  if (v9 != 0) {
    v5 = GameRoutine_1a0a0c0(v9);
    if (v5 != 0) {
      v6 = v5;
      if (v8 != 0) {
        GameRoutine_15740c0(v8, v2, 0, 0, v3 & 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        GameRoutine_1a09c50(v6);
      }
    }
    result = v9;
    if (v9 != 0) {
      return GameRoutine_1a09c50(v9);
    }
  }
  return result;
}

__int64 GameHr_16d7910(_QWORD* a1)
{
  __int64 v2;
  char v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BOOL4 v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  GameRoutine_1560070((void*)&v14, a1 + 106, "L_UnitInfo");
  v2 = a1[133];
  v13 = 0;
  v3 = GameRoutine_159e890(v2, 0, &v11);
  if (v15 != 0) {
    v4 = GameRoutine_1a0a0c0(v15);
    if (v4 != 0) {
      v5 = v4;
      if (v14 != 0) {
        GameRoutine_15740c0(v14, v2, 0, 0, v3 & 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        GameRoutine_1a09c50(v5);
      }
    }
    if (v15 != 0) {
      GameRoutine_1a09c50(v15);
    }
  }
  if ((*(__int64 (**)(_QWORD*))(*a1 + 1112LL))(a1) == a1[133] &&
      (*(__int64 (**)(_QWORD*))(*a1 + 1120LL))(a1) == a1[133]) {
    v7 = false;
  }
  else {
    v7 = GameData_21caab0 == 0 ||
         (v6 = GameRoutine_65c580(*(_QWORD*)(GameData_21caab0 + 48),
                                  &GameData_2249318)) == 0 ||
         *(_DWORD*)(v6 + 32) == 0;
  }
  GameRoutine_1560070((void*)&v11, a1 + 106, "L_UnitInfo");
  if (v12 != 0) {
    v8 = GameRoutine_1a0a0c0(v12);
    if (v8 != 0) {
      v9 = v8;
      if (v11 != 0) {
        GameRoutine_1572370(v11, v7);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        GameRoutine_1a09c50(v9);
      }
    }
    if (v12 != 0) {
      GameRoutine_1a09c50(v12);
    }
  }
  return GameRoutine_1562680(a1 + 106, "Wait", 1.0);
}

bool GameHr_16e4860(__int64* a1, __int64* a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  int v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v19;
  __int64 v20;

  v6 = a2 - a1;
  if (v6 <= 2) {
    if ((unsigned __int64)v6 >= 2) {
      if (v6 == 2) {
        v7 = *(a2 - 1);
        v8 = *(_QWORD*)(a3 + 32);
        v19 = *a1;
        v20 = v7;
        if (v8 == 0) {
        LABEL_27:
          GameRoutine_60a310(v8, a2);
        }
        if (((*(__int64 (**)(__int64, __int64*, __int64*))(
                 *(_QWORD*)v8 + 48LL))(v8, &v20, &v19) &
             1) != 0) {
          v9 = *a1;
          *a1 = *(a2 - 1);
          *(a2 - 1) = v9;
        }
        return true;
      }
      goto LABEL_12;
    }
    return true;
  }
  switch (v6) {
  case 3LL:
    GameRoutine_16e4480(a1, a1 + 1, a2 - 1, a3);
    return true;
  case 4LL:
    GameRoutine_16e45e0(a1, a1 + 1, a1 + 2, a2 - 1, a3);
    return true;
  case 5LL:
    GameRoutine_16e4700(a1, a1 + 1, a1 + 2, a1 + 3, a2 - 1, a3);
    return true;
  default:
    break;
  }
LABEL_12:
  v10 = a1 + 2;
  GameRoutine_16e4480(a1, a1 + 1, a1 + 2, a3);
  v11 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v12 = 0;
  v13 = 0;
  while (1) {
    v15 = *v11;
    v8 = *(_QWORD*)(a3 + 32);
    v19 = *v10;
    v20 = v15;
    if (v8 == 0) {
      goto LABEL_27;
    }
    if (((*(__int64 (**)(__int64, __int64*, __int64*))(*(_QWORD*)v8 + 48LL))(
             v8, &v20, &v19) &
         1) != 0) {
      v16 = *v11;
      v17 = v12;
      do {
        *(__int64*)((char*)a1 + v17 + 24) = *(__int64*)((char*)a1 + v17 + 16);
        if (v17 == -16) {
          v14 = a1;
          goto LABEL_15;
        }
        v8 = *(_QWORD*)(a3 + 32);
        v19 = *(__int64*)((char*)a1 + v17 + 8);
        v20 = v16;
        if (v8 == 0) {
          goto LABEL_27;
        }
        v17 -= 8;
      } while (((*(__int64 (**)(__int64, __int64*, __int64*))(
                    *(_QWORD*)v8 + 48LL))(v8, &v20, &v19) &
                1) != 0);
      v14 = (__int64*)((char*)a1 + v17 + 24);
    LABEL_15:
      ++v13;
      *v14 = v16;
      if (v13 == 8) {
        return v11 + 1 == a2;
      }
    }
    v10 = v11++;
    v12 += 8;
    if (v11 == a2) {
      return true;
    }
  }
}

__int64 GameHr_16e7bd0(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;

  v4 = 0;
  v5 = 0;
  GameRoutine_16dcd30(a1, (__int64)"ChoiceMenu", &v4, 0);
  v2 = v5;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    GameRoutine_1a09c50(v2);
  }
  *(_BYTE*)(a1 + 1056) = 0;
  *(_QWORD*)a1 = GameData_209cf58;
  *(_QWORD*)(a1 + 176) = GameData_209d3a0;
  GameRoutine_1567590("WindowHide", 1);
  result = GameRoutine_1567590("AutoPlay", 1);
  if (*GameData_212d460[0] != 0 && *(_BYTE*)(*GameData_212d460[0] + 289) == 1) {
    return GameRoutine_1560ec0(GameData_2130258[0], "N_Auto", 0);
  }
  return result;
}

__int64 GameHr_16eb960(__int64 a1, _QWORD* a2)
{
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;

  v4 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1136, 16, 0);
  v10 = 0;
  v11 = 0;
  GameRoutine_16dcd30((__int64)v4, (__int64)"SubMenu", &v10, 0);
  v5 = GameData_212d6a8;
  v6 = v11;
  *v4 = GameData_212d6a8 + 2;
  v4[22] = v5 + 143;
  v4[132] = v5 + 169;
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    GameRoutine_1a09c50(v6);
  }
  v4[140] = 0;
  *v4 = GameData_209e340;
  v4[22] = GameData_209e7c8;
  v4[132] = GameData_209e898;
  v7 = a2[1];
  v4[133] = *a2;
  v8 = a2[2];
  v4[134] = v7;
  v4[135] = v8;
  return GameRoutine_657850(v4, GameData_212c730, "SubMenu", 1, a1);
}

void GameHr_16ef450(_QWORD* a1)
{
  int v1;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _BOOL4 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  int v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int16 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int16 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  __int16 v28;
  const char* v29;
  const char* v30;
  char v31;
  __int64 v32;
  char v33;
  __int64 v34;

  v3 = LayoutAccessor_155fbe0((__int64*)(a1[1] + 848LL), "L_InfoDetail");
  if (v3[2] == 0) {
    return;
  }
  v4 = v3;
  v5 = v3[1];
  if (v5 == 0) {
    return;
  }
  v6 = std___1___shared_weak_count_lock(v5);
  if (v6 == 0) {
    goto LABEL_11;
  }
  v7 = *v4;
  if (*v4 != 0) {
    v1 = *(unsigned __int8*)(v7 + 24);
    v8 = v7 + 152;
    if (v1 == 0) {
      v8 = 0;
    }
    v9 = v8 != v4[2];
  }
  else {
    v9 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v9) {
    LABEL_11:
      v10 = v4[1];
      if (v10 == 0 || *(_QWORD*)(v10 + 8) == -1) {
        return;
      }
      goto LABEL_16;
    }
  }
  else {
    v11 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v11);
    if (v9) {
      goto LABEL_11;
    }
  }
  if ((v1 & 1) == 0) {
    return;
  }
LABEL_16:
  v12 = LayoutAccessor_155fbe0((__int64*)(a1[1] + 848LL), "L_InfoDetail");
  v22 = 0;
  v25 = 0;
  v26 = 0;
  v28 = 0;
  v29 = nullptr;
  v30 = nullptr;
  v34 = 0;
  v18 = v12;
  v19 = 0;
  v27 = -1;
  v31 = 1;
  v32 = 36;
  v33 = 5;
  if ((*(__int64 (**)(_QWORD*))(*a1 + 32LL))(a1) != 0) {
    v13 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a1[1] + 192LL))(a1[1]);
    v31 = 1;
    v33 = 0;
    v34 = 0;
    v29 = "Tutorial";
    v30 = "MID_KeyHelp_Tutorial";
    LODWORD(v32) = 10;
    HIDWORD(v32) = v13;
  }
  (*(void (**)(_QWORD*, __int64**))(*a1 + 560LL))(a1, &v18);
  if ((v26 & 0xFFF) != 0 ||
      ((v19 & 1) != 0 ? (v14 = v20)
                      : (v14 = (unsigned __int64)(unsigned __int8)v19 >> 1),
       v14 != 0 || ((v22 & 1) != 0
                        ? (v15 = v23)
                        : (v15 = (unsigned __int64)(unsigned __int8)v22 >> 1),
                    v15 != 0))) {
    GameRoutine_16ef760_alt1((__int64)a1);
  }
  else if ((LayoutAccessor_15635a0((__int64*)(a1[1] + 848LL), "InfoDetailIn",
                                   1) &
            1) != 0 ||
           (LayoutAccessor_15635a0((__int64*)(a1[1] + 848LL),
                                   "InfoDetailStartIn", 1) &
            1) != 0) {
    GameHr_1562680(a1[1] + 848LL, "InfoDetailOut", 0x1.0000000000000p+0f);
  }
  GameRoutine_16f03e0_alt1(&v18);
  if ((v22 & 1) != 0 && v24 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v16,
                                  v24);
  }
  if ((v19 & 1) != 0 && v21 != 0) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v17,
                                  v21);
  }
}

__int64 GameHr_16ef700(__int64 a1)
{
  __int64 v2;

  v2 = 512;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  (*(void (**)(void*))(*(_QWORD*)a1 + v2))((void*)a1);
  return GameRoutine_16ef450((_QWORD*)a1);
}

__int64 GameHr_16ef880(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;

  v4 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1136, 16, 0);
  v8 = 0;
  v9 = 0;
  GameRoutine_16dcd30(v4, (__int64)"SubMenu", &v8, 0);
  v5 = GameData_212d6a8;
  v6 = v9;
  *(_QWORD*)v4 = GameData_212d6a8 + 2;
  *(_QWORD*)(v4 + 176) = v5 + 143;
  *(_QWORD*)(v4 + 1056) = v5 + 169;
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    GameRoutine_1a09c50(v6);
  }
  *(_QWORD*)(v4 + 1064) = a1;
  *(_QWORD*)(v4 + 1120) = 0;
  *(_DWORD*)(v4 + 1072) = 1;
  *(_QWORD*)(v4 + 1076) = 3264479232LL;
  *(_QWORD*)v4 = GameData_209f570;
  *(_QWORD*)(v4 + 176) = GameData_209f9f8;
  *(_QWORD*)(v4 + 1056) = GameData_209fac8;
  return GameRoutine_657850(v4, GameData_212c730, "UnitCommandSubMenu", 1, a2);
}

__int64 GameHr_16f2280(__int64 a1, __int64 a2, char a3)
{
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v17;
  __int64 v18;
  int v19;

  v6 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1088, 16, 0);
  v17 = 0;
  v18 = 0;
  GameRoutine_16dcd30(v6, (__int64)"DispatchMenu", &v17, 0);
  v7 = GameData_212d6a8;
  v8 = v18;
  *(_QWORD*)v6 = GameData_212d6a8 + 2;
  *(_QWORD*)(v6 + 176) = v7 + 143;
  *(_QWORD*)(v6 + 1056) = v7 + 169;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    GameRoutine_1a09c50(v8);
  }
  *(_QWORD*)(v6 + 1064) = a2;
  *(_BYTE*)(v6 + 1072) = a3;
  *(_DWORD*)(v6 + 664) = 0;
  *(_QWORD*)v6 = GameData_20a0198;
  v19 = 0;
  *(_QWORD*)(v6 + 1056) = GameData_20a06e8;
  *(_QWORD*)(v6 + 176) = GameData_20a0618;
  *(_QWORD*)(v6 + 656) = 4;
  *(_QWORD*)(v6 + 792) = *(_QWORD*)(v6 + 784);
  *(_QWORD*)(v6 + 816) = *(_QWORD*)(v6 + 808);
  GameRoutine_6e5a40(v6 + 784, 5, &v19);
  v9 = *(_QWORD*)(v6 + 816);
  v10 = *(_QWORD*)(v6 + 808);
  v19 = 0;
  v11 = v9 - v10;
  v12 = (v9 - v10) >> 2;
  if (v12 > 4) {
    if (v11 != 20) {
      *(_QWORD*)(v6 + 816) = v10 + 20;
    }
  }
  else {
    GameRoutine_6e5a40(v6 + 808, 5 - v12, &v19);
  }
  GameRoutine_657850(v6, GameData_212c730, "ProcDispatchMenu", 1, a1);
  v14 = *(_QWORD**)(v6 + 256);
  v13 = *(_QWORD**)(v6 + 264);
  *(_QWORD*)(v6 + 336) = 0;
  while (v14 != v13) {
    if (*v14 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v14 + 8LL))(*v14);
      v13 = *(_QWORD**)(v6 + 264);
    }
    ++v14;
  }
  v15 = *(_QWORD*)(v6 + 344);
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
    *(_QWORD*)(v6 + 344) = 0;
  }
  *(_QWORD*)(v6 + 264) = *(_QWORD*)(v6 + 256);
  *(_QWORD*)(v6 + 240) = *(_QWORD*)(v6 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v6 + 1024LL))(v6);
  return (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 1032LL))(v6);
}

__int64 GameHr_16f42a0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;

  v4 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1216, 16, 0);
  v7 = 0;
  v8 = 0;
  GameRoutine_16dcd30(v4, 0, &v7, 0);
  v5 = v8;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    GameRoutine_1a09c50(v5);
  }
  *(_QWORD*)(v4 + 1064) = a2;
  *(_DWORD*)(v4 + 1080) = 0;
  *(_QWORD*)(v4 + 1088) = 0;
  *(_QWORD*)(v4 + 1096) = 0;
  *(_QWORD*)(v4 + 1072) = 0xFFFFFFFFLL;
  *(_QWORD*)v4 = GameData_20a0f20;
  *(_QWORD*)(v4 + 1104) = 0;
  *(_QWORD*)(v4 + 1152) = 0;
  *(_QWORD*)(v4 + 1168) = 0;
  *(_QWORD*)(v4 + 1176) = 0;
  *(_BYTE*)(v4 + 1184) = 0;
  *(_QWORD*)(v4 + 1200) = 0;
  *(_QWORD*)(v4 + 1208) = 0;
  *(_QWORD*)(v4 + 1056) = GameData_20a1468;
  *(_QWORD*)(v4 + 176) = GameData_20a1398;
  *(_DWORD*)(v4 + 1112) = 2;
  return GameRoutine_657850(v4, GameData_212c730, "ProcScountInfo", 1, a1);
}

_QWORD* GameHr_16f63f0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                       __int64 a5)
{
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;

  v8 = (_QWORD*)GameRoutine_16f75a0();
  if (v8 != nullptr) {
    v9 = (_QWORD*)GameData_212bf68;
    v10 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 192, 16, 0);
    GameRoutine_16477d0(v10, "MID_Sys_Yes", a3, a5);
    GameRoutine_16e0c00(v8, v10);
    v11 = GameRoutine_651b90(*v9, 192, 16, 0);
    GameRoutine_16477d0(v11, "MID_Sys_No", a4, a5);
    GameRoutine_16e0c00(v8, v11);
  }
  return v8;
}

_QWORD* GameHr_16f6810(__int64 a1, __int64* a2, __int64 a3, __int64 a4,
                       __int64 a5, __int64 a6)
{
  __int64 v6;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  _QWORD v20[4];
  int v21;
  int v22;
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

  v6 = *a2;
  if (*a2 != 0) {
    v10 = a1;
    v11 = GameData_212c738[0];
    if (a3 != 0) {
      v12 = a3;
    }
    else {
      v12 = (__int64)*GameData_212def8;
    }
    GameRoutine_60a020(*GameData_212c738[0] + 14704, v12);
    v13 = *v11;
    v23 = -1;
    v24 = -1;
    v25 = -1;
    v26 = -1;
    v27 = -1;
    v28 = -1;
    v29 = -1;
    v30 = -1;
    v31 = -1;
    v32 = -1;
    v33 = -1;
    v34 = -1;
    v20[0] = GameData_212e348 + 2;
    v20[1] = 0xFFFF0001FFFF0000LL;
    v20[2] = 0xFFFF0004FFFF0002LL;
    v20[3] = 0xFFFF0006FFFF0005LL;
    v35 = 8;
    v21 = -65529;
    v22 = -65528;
    v14 = GameRoutine_a4dbe0(v13, v6, 0, v20);
    a1 = v10;
  }
  else {
    v14 = 0;
  }
  v20[0] = v14;
  v15 = (_QWORD*)GameRoutine_16f7830(a1, v20);
  if (v15 != nullptr) {
    v16 = (_QWORD*)GameData_212bf68;
    v17 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 192, 16, 0);
    GameRoutine_16477d0(v17, "MID_Sys_Yes", a4, a6);
    GameRoutine_16e0c00(v15, v17);
    v18 = GameRoutine_651b90(*v16, 192, 16, 0);
    GameRoutine_16477d0(v18, "MID_Sys_No", a5, a6);
    GameRoutine_16e0c00(v15, v18);
  }
  return v15;
}

__int64 GameHr_16f7ac0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  _QWORD* v8;
  __int64* v9;
  __int64* v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v21;
  __int64 v22;
  int v23;

  v2 = (__int64*)GameData_212bf68;
  v3 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1152, 16, 0);
  v21 = 0;
  v22 = 0;
  GameRoutine_16dcd30(v3, (__int64)"ComebackList", &v21, 0);
  v4 = GameData_212d6a8;
  v5 = v22;
  *(_QWORD*)v3 = GameData_212d6a8 + 2;
  *(_QWORD*)(v3 + 176) = v4 + 143;
  *(_QWORD*)(v3 + 1056) = v4 + 169;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    GameRoutine_1a09c50(v5);
  }
  *(_QWORD*)v3 = GameData_20a1bd8;
  *(_QWORD*)(v3 + 176) = GameData_20a2068;
  v6 = GameData_2131ac8[0];
  v7 = *v2;
  *(_QWORD*)(v3 + 1056) = GameData_20a2138;
  *(_QWORD*)(v3 + 1072) = 0;
  *(_QWORD*)(v3 + 1080) = 0;
  *(_QWORD*)(v3 + 1088) = 0;
  *(_DWORD*)(v3 + 1096) = 0;
  *(_QWORD*)(v3 + 1104) = 0;
  *(_QWORD*)(v3 + 1112) = 0;
  *(_QWORD*)(v3 + 1120) = 0;
  *(_DWORD*)(v3 + 1128) = 0;
  *(_QWORD*)(v3 + 1064) = v6 + 2;
  v8 = (_QWORD*)GameRoutine_651b90(v7, 72, 16, 0);
  v9 = GameData_2131ae8;
  v8[4] = -1;
  v8[5] = 0;
  v10 = GameData_2130fa8[0] + 2;
  *v8 = v9 + 2;
  v8[1] = v10;
  v11 = GameData_212fca0[0] + 2;
  v8[2] = 0;
  v8[3] = v11;
  v12 = GameData_2131ae0[0];
  v8[6] = 0;
  v8[7] = 0;
  v8[8] = 0;
  *(_QWORD*)(v3 + 1136) = v8;
  *(_BYTE*)(v3 + 1144) = 0;
  *(_DWORD*)(v3 + 664) = 0;
  v23 = 0;
  *(_QWORD*)(v3 + 1064) = v12 + 2;
  *(_QWORD*)(v3 + 656) = 4;
  *(_QWORD*)(v3 + 792) = *(_QWORD*)(v3 + 784);
  *(_QWORD*)(v3 + 816) = *(_QWORD*)(v3 + 808);
  GameRoutine_6e5a40(v3 + 784, 5, &v23);
  v13 = *(_QWORD*)(v3 + 816);
  v14 = *(_QWORD*)(v3 + 808);
  v23 = 0;
  v15 = v13 - v14;
  v16 = (v13 - v14) >> 2;
  if (v16 > 4) {
    if (v15 != 20) {
      *(_QWORD*)(v3 + 816) = v14 + 20;
    }
  }
  else {
    GameRoutine_6e5a40(v3 + 808, 5 - v16, &v23);
  }
  GameRoutine_657850(v3, GameData_212c730, "ProcComebackList", 1, a1);
  v18 = *(_QWORD**)(v3 + 256);
  v17 = *(_QWORD**)(v3 + 264);
  *(_QWORD*)(v3 + 336) = 0;
  while (v18 != v17) {
    if (*v18 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v18 + 8LL))(*v18);
      v17 = *(_QWORD**)(v3 + 264);
    }
    ++v18;
  }
  v19 = *(_QWORD*)(v3 + 344);
  if (v19 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 8LL))(v19);
    *(_QWORD*)(v3 + 344) = 0;
  }
  *(_QWORD*)(v3 + 264) = *(_QWORD*)(v3 + 256);
  *(_QWORD*)(v3 + 240) = *(_QWORD*)(v3 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v3 + 1024LL))(v3);
  return (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 1032LL))(v3);
}

__int64 GameHr_16f7f40(__int64 a1)
{
  __int64 v2;
  __int64 result;
  _QWORD v4[4];
  _QWORD* v5;
  __int64 v6;
  __int64 v7;

  GameRoutine_1560070((void*)&v6, a1 + 952, "L_PageTabIcon");
  v4[0] = GameData_20a21e8;
  v5 = v4;
  GameRoutine_16e66c0(a1 + 656, &v6, v4, 2, 14, 15);
  if (v5 == v4) {
    v2 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_6;
    }
    v2 = 40;
  }
  (*(void (**)(void*))(*v5 + v2))(v5);
LABEL_6:
  result = v7;
  if (v7 != 0) {
    result = GameRoutine_1a09c50(v7);
  }
  *(_BYTE*)(a1 + 1144) = 1;
  return result;
}

__int64 GameHr_16f8c20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result;
  __int64 v8;
  __int64 v9;

  GameRoutine_1560070((void*)&v8, *(_QWORD*)(a1 + 8) + 848LL, "L_Img");
  GameRoutine_159b580(&v8, a2, a3, a4);
  result = v9;
  if (v9 != 0) {
    return GameRoutine_1a09c50(v9);
  }
  return result;
}

__int64 GameHr_16fb3a0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  const char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v15;
  _QWORD* v16;
  unsigned __int64 v17;
  __int64* v18;
  __int64 v19;
  _BYTE v20[32];
  _BYTE* v21;
  _QWORD v22[4];
  _QWORD* v23;
  _QWORD v24[3];
  char v25;
  _QWORD* v26;
  __int64 v27;

  v2 = *(_QWORD*)(a1 + 336);
  if (v2 == 0) {
    return 1;
  }
  v3 = a1;
  v4 = GameRoutine_1a0a6c0(v2, GameData_212e008[0], &GameData_20a3328, 0);
  if (v4 == 0) {
    return 1;
  }
  v5 = v4;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 464LL))(v4) & 1) == 0) {
    return 1;
  }
  v6 = *(_BYTE*)(v5 + 104);
  v7 = GameData_212bf68;
  v8 = 32;
  if ((v6 & 8) != 0) {
    v9 = "MID_SendUnitMenu_MapDrop_Confirm";
  }
  else {
    v9 = "MID_SendUnitMenu_Transport_Confirm";
  }
  if ((*(_BYTE*)(v5 + 104) & 8) != 0) {
    v10 = 32;
  }
  else {
    v10 = 34;
  }
  v11 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 40, 16, 0);
  GameRoutine_1a0b950(v11, v9, v10);
  *(_BYTE*)(v11 + v10) = 0;
  v27 = v11;
  v24[2] = v5;
  v25 = v6;
  v24[0] = GameData_20a3450;
  v24[1] = v3;
  v23 = v22;
  v21 = nullptr;
  v26 = v24;
  v22[0] = GameData_20a3550;
  v12 = GameRoutine_9d0620(v3, &v27, v24, v22, v20);
  if (v21 != v20) {
    if (v21 == nullptr) {
      goto LABEL_14;
    }
    v8 = 40;
  }
  (*(void (**)(void*))(*(_QWORD*)v21 + v8))((void*)v21);
LABEL_14:
  if (v23 == v22) {
    v13 = 32;
  }
  else {
    if (v23 == nullptr) {
      goto LABEL_21;
    }
    v13 = 40;
  }
  (*(void (**)(void*))(*v23 + v13))(v23);
LABEL_21:
  if (v26 == v24) {
    v15 = 32;
    goto LABEL_25;
  }
  if (v26 != nullptr) {
    v15 = 40;
  LABEL_25:
    (*(void (**)(void*))(*v26 + v15))(v26);
  }
  v16 = *(_QWORD**)(v5 + 96);
  v17 = *(int*)(v5 + 40);
  if (v17 >= (__int64)(v16[1] - *v16) >> 3) {
    v18 = GameData_212cea0;
  }
  else {
    v18 = (__int64*)(*v16 + 8 * v17);
  }
  GameRoutine_1a06650(v12 + 1496,
                      *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                 8LL * *(unsigned __int16*)v18),
                      1);
  v19 = 128;
  if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
    v19 = 56;
  }
  GameRoutine_1a0a4e0(*(_QWORD*)v7 + v19, v11);
  return 12;
}

__int64 GameHr_16fc320(__int64 a1, __int64* a2)
{
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  char v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v20;
  __int64 v21;

  v3 = *a2;
  v4 = *(_QWORD*)(a1 + 16);
  if (v4 != 0) {
    v5 = (_QWORD*)GameRoutine_1a0a6c0(v4, GameData_212c610, GameData_212e030[0],
                                      0);
    if (v5 != nullptr) {
      GameRoutine_16ddbe0(v5);
    }
  }
  v6 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1184, 16, 0);
  v7 = *(_QWORD*)(a1 + 24);
  v8 = *(_QWORD*)(a1 + 32);
  v9 = *(_BYTE*)(a1 + 40);
  v10 = v6;
  v11 = *(_BYTE*)(a1 + 41);
  v20 = 0;
  v21 = 0;
  GameRoutine_16dcd30(v6, (__int64)"SendUnitItemMenu", &v20, 0);
  v12 = GameData_212d6a8;
  v13 = v21;
  *(_QWORD*)v10 = GameData_212d6a8 + 2;
  *(_QWORD*)(v10 + 176) = v12 + 143;
  *(_QWORD*)(v10 + 1056) = v12 + 169;
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    GameRoutine_1a09c50(v13);
  }
  v14 = *(_QWORD*)(a1 + 80);
  *(_QWORD*)(v10 + 1064) = v7;
  *(_QWORD*)(v10 + 1072) = v8;
  *(_QWORD*)v10 = GameData_20a2ae8;
  *(_BYTE*)(v10 + 1080) = v9;
  *(_BYTE*)(v10 + 1081) = v11;
  *(_QWORD*)(v10 + 176) = GameData_20a2f78;
  *(_QWORD*)(v10 + 1056) = GameData_20a3048;
  if (v14 != 0) {
    if (v14 != a1 + 48) {
      *(_QWORD*)(v10 + 1120) =
          (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      v15 = *(_QWORD*)(a1 + 128);
      if (v15 == 0) {
        goto LABEL_15;
      }
    LABEL_12:
      if (v15 == a1 + 96) {
        *(_QWORD*)(v10 + 1168) = v10 + 1136;
        (*(void (**)(__int64))(*(_QWORD*)v15 + 24LL))(v15);
      }
      else {
        *(_QWORD*)(v10 + 1168) =
            (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      }
      goto LABEL_17;
    }
    *(_QWORD*)(v10 + 1120) = v10 + 1088;
    (*(void (**)(__int64))(*(_QWORD*)v14 + 24LL))(v14);
    v15 = *(_QWORD*)(a1 + 128);
    if (v15 != 0) {
      goto LABEL_12;
    }
  }
  else {
    *(_QWORD*)(v10 + 1120) = 0;
    v15 = *(_QWORD*)(a1 + 128);
    if (v15 != 0) {
      goto LABEL_12;
    }
  }
LABEL_15:
  *(_QWORD*)(v10 + 1168) = 0;
LABEL_17:
  GameRoutine_657850(v10, GameData_212c730, "SendUnitItemMenu", 1, v3);
  v17 = *(_QWORD**)(v10 + 256);
  v16 = *(_QWORD**)(v10 + 264);
  *(_QWORD*)(v10 + 336) = 0;
  while (v17 != v16) {
    if (*v17 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v17 + 8LL))(*v17);
      v16 = *(_QWORD**)(v10 + 264);
    }
    ++v17;
  }
  v18 = *(_QWORD*)(v10 + 344);
  if (v18 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 8LL))(v18);
    *(_QWORD*)(v10 + 344) = 0;
  }
  *(_QWORD*)(v10 + 264) = *(_QWORD*)(v10 + 256);
  *(_QWORD*)(v10 + 240) = *(_QWORD*)(v10 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v10 + 1024LL))(v10);
  return (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 1032LL))(v10);
}

__int64 GameHr_16fd6a0(__int64 a1, __int64* a2)
{
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  char v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;

  v3 = *a2;
  v4 = *(_QWORD*)(a1 + 16);
  if (v4 != 0) {
    v5 = (_QWORD*)GameRoutine_1a0a6c0(v4, GameData_212c610, GameData_212e030[0],
                                      0);
    if (v5 != nullptr) {
      GameRoutine_16ddbe0(v5);
    }
  }
  v6 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1168, 16, 0);
  v7 = *(_BYTE*)(a1 + 128);
  v8 = *(_BYTE*)(a1 + 129);
  v9 = v6;
  GameRoutine_170b1f0(v6, "DeleteTransportMenu");
  v10 = *(_QWORD*)(a1 + 64);
  *(_BYTE*)(v9 + 1064) = 0;
  *(_QWORD*)v9 = GameData_20a35d0;
  *(_QWORD*)(v9 + 176) = GameData_20a3a68;
  *(_QWORD*)(v9 + 1056) = GameData_20a3b38;
  if (v10 != 0) {
    if (v10 != a1 + 32) {
      *(_QWORD*)(v9 + 1104) =
          (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      v11 = *(_QWORD*)(a1 + 112);
      if (v11 == 0) {
        goto LABEL_12;
      }
    LABEL_9:
      if (v11 == a1 + 80) {
        *(_QWORD*)(v9 + 1152) = v9 + 1120;
        (*(void (**)(__int64))(*(_QWORD*)v11 + 24LL))(v11);
      }
      else {
        *(_QWORD*)(v9 + 1152) =
            (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      }
      goto LABEL_14;
    }
    *(_QWORD*)(v9 + 1104) = v9 + 1072;
    (*(void (**)(__int64))(*(_QWORD*)v10 + 24LL))(v10);
    v11 = *(_QWORD*)(a1 + 112);
    if (v11 != 0) {
      goto LABEL_9;
    }
  }
  else {
    *(_QWORD*)(v9 + 1104) = 0;
    v11 = *(_QWORD*)(a1 + 112);
    if (v11 != 0) {
      goto LABEL_9;
    }
  }
LABEL_12:
  *(_QWORD*)(v9 + 1152) = 0;
LABEL_14:
  *(_BYTE*)(v9 + 1064) = (2 * v7) | (8 * v8);
  GameRoutine_657850(v9, GameData_212c730, "DeleteTransportMenu", 1, v3);
  v13 = *(_QWORD**)(v9 + 256);
  v12 = *(_QWORD**)(v9 + 264);
  *(_QWORD*)(v9 + 336) = 0;
  while (v13 != v12) {
    if (*v13 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v13 + 8LL))(*v13);
      v12 = *(_QWORD**)(v9 + 264);
    }
    ++v13;
  }
  v14 = *(_QWORD*)(v9 + 344);
  if (v14 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
    *(_QWORD*)(v9 + 344) = 0;
  }
  *(_QWORD*)(v9 + 264) = *(_QWORD*)(v9 + 256);
  *(_QWORD*)(v9 + 240) = *(_QWORD*)(v9 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v9 + 1024LL))(v9);
  return (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 1032LL))(v9);
}

__int64 GameHr_16fe4d0(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    __int64 (**v10)();
    __int64 v11;
    char gap16_[16];
    __int64 (***v12)();
  } v10_;
  struct {
    __int64 v13;
    __int64 v14;
  } v13_;

  LayoutAccessor_1560070((void*)(&v13_.v13), (__int64*)(a1 + 848), "L_PageTab");
  v10_.v10 = GameData_20a44d0;
  v10_.v11 = a1;
  v2 = *(_QWORD*)a1;
  v10_.v12 = &v10_.v10;
  v3 = (*(__int64 (**)(__int64))(v2 + 192))(a1);
  game_menu_PageTab_SetupImage((int*)(a1 + 656), (__int64)&v13_.v13,
                               (__int64)&v10_.v10, v3, 14, 15);
  if (v10_.v12 == &v10_.v10) {
    v4 = 4;
  }
  else {
    if (v10_.v12 == nullptr) {
      goto LABEL_6;
    }
    v4 = 5;
  }
  ((__int64 (*)(__int64))(*v10_.v12)[v4])((__int64)v10_.v12);
LABEL_6:
  if (v13_.v14 != 0) {
    std___1___shared_weak_count___release_weak(v13_.v14);
  }
  LayoutAccessor_1560070((void*)(&v10_.v10), (__int64*)(a1 + 848),
                         "L_UnitInfo");
  result = v10_.v11;
  if (v10_.v11 != 0) {
    v6 = std___1___shared_weak_count_lock(v10_.v11);
    v7 = (__int64)v10_.v10;
    result = v10_.v11;
    if (v10_.v11 != 0) {
      result = std___1___shared_weak_count___release_weak(v10_.v11);
    }
    if (v6 != 0 && v7 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                memory_order_relaxed);
      v8 = std___1___shared_weak_count_lock(v6);
      if (v8 != 0) {
        v9 = v8;
        LayoutAccessor_1562cf0(v7, "Simple00");
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          std___1___shared_weak_count___release_weak(v9);
        }
      }
      result = std___1___shared_weak_count___release_weak(v6);
    }
    else if (v6 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      return std___1___shared_weak_count___release_weak(v6);
    }
  }
  return result;
}

__int64 GameHr_1700980(__int64 a1, __int64 a2)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;

  v3 = GameRoutine_7a86e0(a2);
  if (v3 != 0) {
    v4 = *(_QWORD*)(GameData_21ca018 + 96);
    if (v4 != 0 && *(_QWORD*)(GameData_21ca018 + 112) != 0) {
      v6 = v4 - 1;
      if ((v4 & (v4 - 1)) != 0) {
        v7 = v3;
        if (v3 >= v4) {
          v7 = v3 % v4;
        }
      }
      else {
        v7 = v6 & v3;
      }
      v8 = *(_QWORD**)(*(_QWORD*)(GameData_21ca018 + 88) + 8 * v7);
      if (v8 != nullptr) {
        v9 = (_QWORD*)*v8;
        if (v9 != nullptr) {
          if ((v4 & v6) == 0) {
            while (1) {
              v12 = v9[1];
              if (v12 == v3) {
                if (v9[2] == v3) {
                  goto LABEL_27;
                }
              }
              else if ((v12 & v6) != v7) {
                goto LABEL_25;
              }
              v9 = (_QWORD*)*v9;
              v11 = 0;
              if (v9 == nullptr) {
                goto LABEL_26;
              }
            }
          }
          do {
            v10 = v9[1];
            if (v10 == v3) {
              if (v9[2] == v3) {
              LABEL_27:
                v11 = v9[3];
                goto LABEL_26;
              }
            }
            else {
              if (v10 >= v4) {
                v10 %= v4;
              }
              if (v10 != v7) {
                break;
              }
            }
            v9 = (_QWORD*)*v9;
          } while (v9 != nullptr);
        }
      }
    }
  }
LABEL_25:
  v11 = 0;
LABEL_26:
  v14 = v11;
  return GameRoutine_1700aa0(a1, &v14);
}

_QWORD* GameHr_1700aa0(_QWORD* result, __int64* a2)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  *GameData_2132020 = 0;
  v2 = *a2;
  if (*a2 != 0) {
    v3 = result;
    v4 = (_QWORD*)GameData_212bf68;
    v5 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1072, 16, 0);
    v9 = 0;
    v10 = 0;
    GameRoutine_16dcd30((__int64)v5, (__int64)"TradeShopMenu", &v9, 0);
    v6 = GameData_212d6a8;
    v7 = v10;
    *v5 = GameData_212d6a8 + 2;
    v5[22] = v6 + 143;
    v5[132] = v6 + 169;
    if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      GameRoutine_1a09c50(v7);
    }
    v5[133] = v2;
    *v5 = GameData_20a4bf0;
    v5[22] = GameData_20a5088;
    v5[132] = GameData_20a5158;
    GameRoutine_657850(v5, GameData_212c730, "ProcTradeShopMenu", 1, v3);
    v8 = GameRoutine_651b90(*v4, 96, 16, 0);
    *(_WORD*)(v8 + 16) = 0;
    *(_DWORD*)(v8 + 40) = 0;
    *(_QWORD*)(v8 + 48) = 0;
    *(_QWORD*)(v8 + 56) = 0;
    *(_QWORD*)(v8 + 64) = 0;
    *(_QWORD*)(v8 + 72) = 0;
    *(_BYTE*)(v8 + 82) = 1;
    *(_QWORD*)(v8 + 88) = v2;
    *(_WORD*)(v8 + 80) = 257;
    *(_QWORD*)v8 = GameData_20a5208;
    *(_QWORD*)(v8 + 8) = 0;
    return GameRoutine_16e0c00(v5, v8);
  }
  return result;
}

__int64 GameHr_1701ab0(__int64* a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64* v5;
  unsigned __int64 v6;
  __int64* v7;
  const char* v8;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;
  struct {
    __int64 v12;
    __int64 v13;
  } v12_;

  LayoutAccessor_1560070((void*)(&v12_.v12), a1 + 106, "L_PageTab");
  v10_.v10[0] = GameData_20a5b98;
  v10_.v10[1] = a1;
  v2 = *a1;
  v10_.v11 = v10_.v10;
  v3 = (*(__int64 (**)(__int64*))(v2 + 192))(a1);
  game_menu_PageTab_SetupImage((int*)a1 + 164, (__int64)&v12_.v12,
                               (__int64)v10_.v10, v3, 14, 15);
  if (v10_.v11 == v10_.v10) {
    v4 = 32;
  }
  else {
    if (v10_.v11 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v10_.v11 + v4))((__int64)v10_.v11);
LABEL_6:
  if (v12_.v13 != 0) {
    std___1___shared_weak_count___release_weak(v12_.v13);
  }
  LayoutAccessor_1562cf0((__int64)(a1 + 106), "Transport_On");
  v5 = LayoutAccessor_155fbe0(a1 + 106, "L_UnitInfo");
  LayoutAccessor_1572ac0(v5, 0, 1, 1);
  v6 = (unsigned __int64)(a1[139] - a1[138]) >> 3;
  v7 = LayoutAccessor_155fbe0(a1 + 106, "L_UnitInfo");
  if ((int)v6 >= 1) {
    v8 = "Info00";
  }
  else {
    v8 = "Simple00";
  }
  return LayoutAccessor_1562cf0((__int64)v7, v8);
}

_QWORD* GameHr_1703290(_QWORD* result, __int64* a2)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  *GameData_2132020 = 0;
  v2 = *a2;
  if (*a2 != 0) {
    v3 = result;
    v4 = (_QWORD*)GameData_212bf68;
    v5 = (_QWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1072, 16, 0);
    v10 = 0;
    v11 = 0;
    GameRoutine_16dcd30((__int64)v5, (__int64)"MaterialShopMenu", &v10, 0);
    v6 = GameData_212d6a8;
    v7 = v11;
    *v5 = GameData_212d6a8 + 2;
    v5[22] = v6 + 143;
    v5[132] = v6 + 169;
    if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      GameRoutine_1a09c50(v7);
    }
    v5[133] = v2;
    *v5 = GameData_20a5da8;
    v5[22] = GameData_20a6240;
    v5[132] = GameData_20a6310;
    GameRoutine_657850(v5, GameData_212c730, "ProcMaterialShopMenu", 1, v3);
    v8 = GameRoutine_651b90(*v4, 96, 16, 0);
    *(_WORD*)(v8 + 16) = 0;
    *(_DWORD*)(v8 + 40) = 0;
    *(_QWORD*)(v8 + 48) = 0;
    *(_QWORD*)(v8 + 56) = 0;
    *(_QWORD*)(v8 + 64) = 0;
    *(_QWORD*)(v8 + 72) = 0;
    *(_BYTE*)(v8 + 82) = 1;
    *(_QWORD*)(v8 + 88) = v2;
    *(_WORD*)(v8 + 80) = 257;
    *(_QWORD*)v8 = GameData_20a63c0;
    *(_QWORD*)(v8 + 8) = 0;
    GameRoutine_16e0c00(v5, v8);
    v9 = GameRoutine_651b90(*v4, 96, 16, 0);
    *(_WORD*)(v9 + 16) = 0;
    *(_DWORD*)(v9 + 40) = 0;
    *(_QWORD*)(v9 + 48) = 0;
    *(_QWORD*)(v9 + 56) = 0;
    *(_QWORD*)(v9 + 64) = 0;
    *(_QWORD*)(v9 + 72) = 0;
    *(_WORD*)(v9 + 80) = 257;
    *(_BYTE*)(v9 + 82) = 1;
    *(_QWORD*)(v9 + 88) = v2;
    *(_QWORD*)v9 = GameData_20a6648;
    *(_QWORD*)(v9 + 8) = 0;
    return GameRoutine_16e0c00(v5, v9);
  }
  return result;
}

__int64 GameHr_1703720(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(a1 + 104);
  v2 = *(int*)(a1 + 40);
  if (v1 != 0) {
    return v1 + 8 * v2 + 828;
  }
  else {
    return *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf78[0] + 8LL) + 8LL) +
           12LL * (int)v2 + 4;
  }
}

__int64 GameHr_1704ea0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v16;
  __int64 v17;

  v4 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1120, 16, 0);
  v16 = 0;
  v17 = 0;
  *(_QWORD*)v4 = GameData_20a6bf8;
  *(_QWORD*)(v4 + 176) = GameData_20a7120;
  *(_QWORD*)(v4 + 1056) = GameData_20a71f0;
  GameRoutine_16dcd30(v4, (__int64)"ShopSelectMenu", &v16, 0);
  v5 = GameData_212d6a8;
  v6 = v17;
  *(_QWORD*)v4 = GameData_212d6a8 + 2;
  *(_QWORD*)(v4 + 176) = v5 + 143;
  *(_QWORD*)(v4 + 1056) = v5 + 169;
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    GameRoutine_1a09c50(v6);
  }
  v7 = GameData_2132038[0];
  *(_QWORD*)(v4 + 1064) = a2;
  *(_DWORD*)(v4 + 664) = 0;
  LODWORD(v16) = 0;
  *(_QWORD*)v4 = v7 + 16;
  *(_QWORD*)(v4 + 1056) = v7 + 1464;
  *(_QWORD*)(v4 + 176) = v7 + 1256;
  *(_QWORD*)(v4 + 656) = 7;
  *(_QWORD*)(v4 + 792) = *(_QWORD*)(v4 + 784);
  *(_QWORD*)(v4 + 816) = *(_QWORD*)(v4 + 808);
  GameRoutine_6e5a40(v4 + 784, 8, &v16);
  v8 = *(_QWORD*)(v4 + 816);
  v9 = *(_QWORD*)(v4 + 808);
  LODWORD(v16) = 0;
  v10 = v8 - v9;
  v11 = (v8 - v9) >> 2;
  if (v11 > 7) {
    if (v10 != 32) {
      *(_QWORD*)(v4 + 816) = v9 + 32;
    }
  }
  else {
    GameRoutine_6e5a40(v4 + 808, 8 - v11, &v16);
  }
  *(_QWORD*)(v4 + 1072) = 0;
  *(_QWORD*)(v4 + 1088) = v4;
  *(_QWORD*)(v4 + 1096) = 0;
  *(_QWORD*)(v4 + 1104) = 0;
  *(_QWORD*)(v4 + 1112) = 0;
  *(_WORD*)(v4 + 1080) = 1;
  *(_QWORD*)v4 = GameData_20a6bf8;
  *(_QWORD*)(v4 + 176) = GameData_20a7120;
  *(_QWORD*)(v4 + 1056) = GameData_20a71f0;
  GameRoutine_657850(v4, GameData_212c730, "ProcItemSellMenu", 1, a1);
  v13 = *(_QWORD**)(v4 + 256);
  v12 = *(_QWORD**)(v4 + 264);
  *(_QWORD*)(v4 + 336) = 0;
  while (v13 != v12) {
    if (*v13 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v13 + 8LL))(*v13);
      v12 = *(_QWORD**)(v4 + 264);
    }
    ++v13;
  }
  v14 = *(_QWORD*)(v4 + 344);
  if (v14 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
    *(_QWORD*)(v4 + 344) = 0;
  }
  *(_QWORD*)(v4 + 264) = *(_QWORD*)(v4 + 256);
  *(_QWORD*)(v4 + 240) = *(_QWORD*)(v4 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v4 + 1024LL))(v4);
  return (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 1032LL))(v4);
}

__int64 GameHr_1705460(__int64 result, __int64* a2, __int64 a3, char a4)
{
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  int v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  int v43;
  __int64 v44;
  __int64 v45;
  int v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  __int64* v50;
  __int64* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64* v55;
  __int64* v56;
  int v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  char v61;
  char v62;
  __int64 v63;
  __int64* v64;
  __int64* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  int v69;
  __int64 v70;
  __int64 v71;
  __int64* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  int v78;
  int v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  int v83;
  int v84;
  __int64* v85;
  bool v87;
  __int64 v88;
  __int64* v89;
  __int64* v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  char* v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  bool v98;
  __int64 v99;
  __int64* v100;
  __int64 v101;
  __int64* v102;
  __int64 v103;
  __int64* v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64* v109;
  __int64* v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64* v114;
  __int64* v115;
  __int64 v116;
  __int64 v117;
  unsigned __int64 v118;
  unsigned __int64 v119;
  __int64 v120;
  __int64* v121;
  __int64 v122;
  __int64* v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;

  v7 = (__int64*)result;
  while (2) {
    v8 = v7;
    while (1) {
      while (1) {
        v7 = v8;
        v9 = a2 - v8;
        if (v9 > 2) {
          if (v9 == 3) {
            v75 = *v8;
            v76 = v8[1];
            v77 = *(a2 - 1);
            v78 = *(_DWORD*)(v76 + 40);
            v79 = *(_DWORD*)(v77 + 40);
            if (v78 > *(_DWORD*)(*v8 + 40)) {
              if (v79 <= v78) {
                *v8 = v76;
                v8[1] = v75;
                v127 = *(a2 - 1);
                if (*(_DWORD*)(v127 + 40) > *(_DWORD*)(v75 + 40)) {
                  v8[1] = v127;
                  *(a2 - 1) = v75;
                }
              }
              else {
                *v8 = v77;
                *(a2 - 1) = v75;
              }
              return result;
            }
            if (v79 <= v78) {
              return result;
            }
            v8[1] = v77;
            *(a2 - 1) = v76;
            v124 = v8[1];
          LABEL_182:
            v130 = *v8;
            if (*(_DWORD*)(v124 + 40) > *(_DWORD*)(*v8 + 40)) {
              *v8 = v124;
              v8[1] = v130;
            }
            return result;
          }
          if (v9 != 4) {
            if (v9 == 5) {
              return GameRoutine_1705ea0(v8, v8 + 1, v8 + 2, v8 + 3, a2 - 1);
            }
            goto LABEL_10;
          }
          v81 = *v8;
          v80 = v8[1];
          v82 = v8[2];
          v83 = *(_DWORD*)(v80 + 40);
          v84 = *(_DWORD*)(v82 + 40);
          if (v83 <= *(_DWORD*)(*v8 + 40)) {
            if (v84 > v83) {
              v8[1] = v82;
              v8[2] = v80;
              if (*(_DWORD*)(v82 + 40) > *(_DWORD*)(v81 + 40)) {
                *v8 = v82;
                v8[1] = v81;
              }
              goto LABEL_179;
            }
          }
          else {
            if (v84 > v83) {
              *v8 = v82;
            LABEL_177:
              v8[2] = v81;
              v80 = v81;
              goto LABEL_179;
            }
            *v8 = v80;
            v8[1] = v81;
            if (*(_DWORD*)(v82 + 40) > *(_DWORD*)(v81 + 40)) {
              v8[1] = v82;
              goto LABEL_177;
            }
          }
          v80 = v82;
        LABEL_179:
          v128 = *(a2 - 1);
          if (*(_DWORD*)(v128 + 40) <= *(_DWORD*)(v80 + 40)) {
            return result;
          }
          v8[2] = v128;
          *(a2 - 1) = v80;
          v129 = v8[1];
          v124 = v8[2];
          if (*(_DWORD*)(v124 + 40) <= *(_DWORD*)(v129 + 40)) {
            return result;
          }
          v8[1] = v124;
          v8[2] = v129;
          goto LABEL_182;
        }
        if ((unsigned __int64)v9 < 2) {
          return result;
        }
        if (v9 == 2) {
          v73 = *(a2 - 1);
          v74 = *v8;
          if (*(_DWORD*)(v73 + 40) > *(_DWORD*)(*v8 + 40)) {
            *v8 = v73;
            *(a2 - 1) = v74;
          }
          return result;
        }
      LABEL_10:
        if (v9 <= 23) {
          v85 = v8 + 1;
          v87 = v8 == a2 || v85 == a2;
          if ((a4 & 1) != 0) {
            if (!v87) {
              v88 = 8;
              v89 = v8;
              do {
                v92 = *v89;
                v91 = v89[1];
                v89 = v85;
                if (*(_DWORD*)(v91 + 40) > *(_DWORD*)(v92 + 40)) {
                  v93 = v88;
                  do {
                    v94 = v93 - 8;
                    *(__int64*)((char*)v8 + v93) = v92;
                    if (v93 == 8) {
                      v90 = v8;
                      goto LABEL_124;
                    }
                    v95 = (char*)v8 + v93;
                    v93 -= 8;
                    v92 = *((_QWORD*)v95 - 2);
                  } while (*(_DWORD*)(v91 + 40) > *(_DWORD*)(v92 + 40));
                  v90 = (__int64*)((char*)v8 + v94);
                LABEL_124:
                  *v90 = v91;
                }
                v85 = v89 + 1;
                v88 += 8;
              } while (v89 + 1 != a2);
            }
          }
          else if (!v87) {
            do {
              v126 = *v7;
              v125 = v7[1];
              v7 = v85;
              if (*(_DWORD*)(v125 + 40) > *(_DWORD*)(v126 + 40)) {
                do {
                  *v85 = v126;
                  v126 = *(v85 - 2);
                  --v85;
                } while (*(_DWORD*)(v125 + 40) > *(_DWORD*)(v126 + 40));
                *v85 = v125;
              }
              v85 = v7 + 1;
            } while (v7 + 1 != a2);
          }
          return result;
        }
        if (a3 == 0) {
          if (v8 != a2) {
            v96 = (unsigned __int64)(v9 - 2) >> 1;
            v97 = v96;
            do {
              if (v96 >= v97) {
                v99 = (2 * (v97 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                v100 = &v8[v99];
                v101 = *v100;
                if ((__int64)(2 * v97 + 2) < v9 &&
                    *(_DWORD*)(v101 + 40) > *(_DWORD*)(v100[1] + 40)) {
                  v101 = v100[1];
                  ++v100;
                  v99 = 2 * v97 + 2;
                }
                v102 = &v8[v97];
                v103 = *v102;
                if (*(_DWORD*)(v101 + 40) <= *(_DWORD*)(*v102 + 40)) {
                  do {
                    v104 = v100;
                    *v102 = v101;
                    if ((__int64)v96 < v99) {
                      break;
                    }
                    v105 = (2 * (v99 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                    v106 = 2 * v99 + 2;
                    v100 = &v8[v105];
                    v101 = *v100;
                    if (v106 < v9 &&
                        *(_DWORD*)(v101 + 40) > *(_DWORD*)(v100[1] + 40)) {
                      v101 = v100[1];
                      ++v100;
                      v105 = v106;
                    }
                    result = *(unsigned int*)(v103 + 40);
                    v102 = v104;
                    v99 = v105;
                  } while (*(_DWORD*)(v101 + 40) <= (int)result);
                  *v104 = v103;
                }
              }
              v98 = (__int64)v97-- <= 0;
            } while (!v98);
            do {
              v107 = *v8;
              v108 = 0;
              v109 = v8;
              do {
                v115 = &v109[v108];
                v114 = v115 + 1;
                v113 = v115[1];
                v116 = (2 * v108) | 1;
                v108 = 2 * v108 + 2;
                if (v108 < v9) {
                  v112 = v115[2];
                  v110 = v115 + 2;
                  v111 = v112;
                  result = *(unsigned int*)(v112 + 40);
                  if (*(_DWORD*)(v113 + 40) <= (int)result) {
                    v108 = v116;
                  }
                  else {
                    v113 = v111;
                    v114 = v110;
                  }
                }
                else {
                  v108 = v116;
                }
                *v109 = v113;
                v109 = v114;
              } while (v108 <= (__int64)((unsigned __int64)(v9 - 2) >> 1));
              if (v114 == --a2) {
                *v114 = v107;
              }
              else {
                *v114 = *a2;
                *a2 = v107;
                v117 = ((char*)v114 - (char*)v8 + 8) >> 3;
                v98 = v117 < 2;
                v118 = v117 - 2;
                if (!v98) {
                  v119 = v118 >> 1;
                  v120 = *v114;
                  v121 = &v8[v119];
                  v122 = *v121;
                  if (*(_DWORD*)(*v121 + 40) > *(_DWORD*)(*v114 + 40)) {
                    do {
                      v123 = v121;
                      *v114 = v122;
                      if (v119 == 0) {
                        break;
                      }
                      v119 = (v119 - 1) >> 1;
                      v114 = v121;
                      v121 = &v8[v119];
                      v122 = *v121;
                    } while (*(_DWORD*)(*v121 + 40) > *(_DWORD*)(v120 + 40));
                    *v123 = v120;
                  }
                }
              }
              v98 = v9-- <= 2;
            } while (!v98);
          }
          return result;
        }
        v10 = *(a2 - 1);
        v11 = &v8[(unsigned __int64)v9 >> 1];
        v12 = *(_DWORD*)(v10 + 40);
        if ((unsigned __int64)v9 >= 0x81) {
          v13 = *v11;
          v14 = *v8;
          v15 = *(_DWORD*)(*v11 + 40);
          if (v15 <= *(_DWORD*)(*v8 + 40)) {
            if (v12 > v15) {
              *v11 = v10;
              *(a2 - 1) = v13;
              v19 = *v8;
              if (*(_DWORD*)(*v11 + 40) > *(_DWORD*)(*v8 + 40)) {
                *v8 = *v11;
                *v11 = v19;
              }
            }
          }
          else {
            if (v12 <= v15) {
              *v8 = v13;
              *v11 = v14;
              v21 = *(a2 - 1);
              if (*(_DWORD*)(v21 + 40) <= *(_DWORD*)(v14 + 40)) {
                goto LABEL_28;
              }
              *v11 = v21;
            }
            else {
              *v8 = v10;
            }
            *(a2 - 1) = v14;
          }
        LABEL_28:
          v22 = *(v11 - 1);
          v23 = v8[1];
          v24 = *(a2 - 2);
          v25 = *(_DWORD*)(v22 + 40);
          v26 = *(_DWORD*)(v24 + 40);
          if (v25 <= *(_DWORD*)(v23 + 40)) {
            if (v26 > v25) {
              *(v11 - 1) = v24;
              *(a2 - 2) = v22;
              v27 = *(v11 - 1);
              v28 = v8[1];
              if (*(_DWORD*)(v27 + 40) > *(_DWORD*)(v28 + 40)) {
                v8[1] = v27;
                *(v11 - 1) = v28;
              }
            }
          }
          else {
            if (v26 <= v25) {
              v8[1] = v22;
              *(v11 - 1) = v23;
              v30 = *(a2 - 2);
              if (*(_DWORD*)(v30 + 40) <= *(_DWORD*)(v23 + 40)) {
                goto LABEL_40;
              }
              *(v11 - 1) = v30;
            }
            else {
              v8[1] = v24;
            }
            *(a2 - 2) = v23;
          }
        LABEL_40:
          v31 = v11[1];
          v32 = v8[2];
          v33 = *(a2 - 3);
          v34 = *(_DWORD*)(v31 + 40);
          v35 = *(_DWORD*)(v33 + 40);
          if (v34 <= *(_DWORD*)(v32 + 40)) {
            if (v35 > v34) {
              v11[1] = v33;
              *(a2 - 3) = v31;
              v36 = v11[1];
              v37 = v8[2];
              if (*(_DWORD*)(v36 + 40) > *(_DWORD*)(v37 + 40)) {
                v8[2] = v36;
                v11[1] = v37;
              }
            }
          }
          else {
            if (v35 <= v34) {
              v8[2] = v31;
              v11[1] = v32;
              v38 = *(a2 - 3);
              if (*(_DWORD*)(v38 + 40) <= *(_DWORD*)(v32 + 40)) {
                goto LABEL_49;
              }
              v11[1] = v38;
            }
            else {
              v8[2] = v33;
            }
            *(a2 - 3) = v32;
          }
        LABEL_49:
          v39 = *(v11 - 1);
          v40 = *v11;
          v41 = v11[1];
          v42 = *(_DWORD*)(*v11 + 40);
          v43 = *(_DWORD*)(v41 + 40);
          if (v42 <= *(_DWORD*)(v39 + 40)) {
            if (v43 <= v42) {
              goto LABEL_55;
            }
            *v11 = v41;
            v11[1] = v40;
            if (*(_DWORD*)(v41 + 40) > *(_DWORD*)(v39 + 40)) {
              *(v11 - 1) = v41;
              *v11 = v39;
            LABEL_59:
              v44 = *v8;
              *v8 = v39;
              *v11 = v44;
              goto LABEL_60;
            }
          }
          else {
            if (v43 > v42) {
              *(v11 - 1) = v41;
              v11[1] = v39;
            LABEL_55:
              v39 = v40;
              goto LABEL_59;
            }
            *(v11 - 1) = v40;
            *v11 = v39;
            if (*(_DWORD*)(v41 + 40) <= *(_DWORD*)(v39 + 40)) {
              goto LABEL_59;
            }
            *v11 = v41;
            v11[1] = v39;
          }
          v39 = v41;
          goto LABEL_59;
        }
        v16 = *v8;
        v17 = *v11;
        v18 = *(_DWORD*)(*v8 + 40);
        if (v18 <= *(_DWORD*)(*v11 + 40)) {
          if (v12 > v18) {
            *v8 = v10;
            *(a2 - 1) = v16;
            v20 = *v11;
            if (*(_DWORD*)(*v8 + 40) > *(_DWORD*)(*v11 + 40)) {
              *v11 = *v8;
              *v8 = v20;
            }
          }
        }
        else {
          if (v12 <= v18) {
            *v11 = v16;
            *v8 = v17;
            v29 = *(a2 - 1);
            if (*(_DWORD*)(v29 + 40) <= *(_DWORD*)(v17 + 40)) {
              goto LABEL_60;
            }
            *v8 = v29;
          }
          else {
            *v11 = v10;
          }
          *(a2 - 1) = v17;
        }
      LABEL_60:
        v45 = *v8;
        --a3;
        if ((a4 & 1) != 0) {
          break;
        }
        v46 = *(_DWORD*)(v45 + 40);
        if (*(_DWORD*)(*(v8 - 1) + 40) > v46) {
          goto LABEL_63;
        }
        if (v46 <= *(_DWORD*)(*(a2 - 1) + 40)) {
          v64 = v8 + 1;
          do {
            v8 = v64;
            if (v64 >= a2) {
              break;
            }
            ++v64;
          } while (v46 <= *(_DWORD*)(*v8 + 40));
        }
        else {
          do {
            v63 = v8[1];
            ++v8;
          } while (v46 <= *(_DWORD*)(v63 + 40));
        }
        v65 = a2;
        if (v8 < a2) {
          v65 = a2;
          do {
            v66 = *--v65;
          } while (v46 > *(_DWORD*)(v66 + 40));
        }
        if (v8 < v65) {
          v67 = *v8;
          v68 = *v65;
          do {
            *v8 = v68;
            *v65 = v67;
            v69 = *(_DWORD*)(v45 + 40);
            do {
              v70 = v8[1];
              ++v8;
              v67 = v70;
            } while (v69 <= *(_DWORD*)(v70 + 40));
            do {
              v71 = *--v65;
              v68 = v71;
            } while (v69 > *(_DWORD*)(v71 + 40));
          } while (v8 < v65);
        }
        v72 = v8 - 1;
        if (v7 != v8 - 1) {
          *v7 = *v72;
        }
        a4 = 0;
        *v72 = v45;
      }
      v46 = *(_DWORD*)(v45 + 40);
    LABEL_63:
      v47 = 0;
      do {
        v48 = &v8[v47++];
        v49 = v48[1];
      } while (*(_DWORD*)(v49 + 40) > v46);
      v50 = &v8[v47];
      v51 = a2;
      if (v47 == 1) {
        v51 = a2;
        do {
          if (v50 >= v51) {
            break;
          }
          v53 = *--v51;
        } while (*(_DWORD*)(v53 + 40) <= v46);
      }
      else {
        do {
          v52 = *--v51;
        } while (*(_DWORD*)(v52 + 40) <= v46);
      }
      if (v50 >= v51) {
        v60 = v50 - 1;
        if (v8 == v50 - 1) {
          goto LABEL_81;
        }
      LABEL_80:
        *v8 = *v60;
        goto LABEL_81;
      }
      v54 = *v51;
      v55 = &v8[v47];
      v56 = v51;
      do {
        *v55 = v54;
        *v56 = v49;
        v57 = *(_DWORD*)(v45 + 40);
        do {
          v58 = v55[1];
          ++v55;
          v49 = v58;
        } while (*(_DWORD*)(v58 + 40) > v57);
        do {
          v59 = *--v56;
          v54 = v59;
        } while (*(_DWORD*)(v59 + 40) <= v57);
      } while (v55 < v56);
      v60 = v55 - 1;
      if (v8 != v55 - 1) {
        goto LABEL_80;
      }
    LABEL_81:
      *v60 = v45;
      if (v50 < v51) {
        goto LABEL_84;
      }
      v61 = GameRoutine_1706020(v8, v60);
      v8 = v60 + 1;
      v62 = v61;
      result = GameRoutine_1706020(v60 + 1, a2);
      if ((result & 1) != 0) {
        break;
      }
      if ((v62 & 1) == 0) {
      LABEL_84:
        result = GameHr_1705460(v7, v60, a3, a4 & 1);
        a4 = 0;
        v8 = v60 + 1;
      }
    }
    a2 = v60;
    if ((v62 & 1) == 0) {
      continue;
    }
    return result;
  }
}

__int64 GameHr_17076e0(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;

  v2 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1408, 16, 0);
  GameRoutine_1789cf0(v2, "ProcItemShopUnitSelectMenu");
  *(_DWORD*)(v2 + 1184) = 0;
  *(_DWORD*)(v2 + 1208) = 0;
  *(_QWORD*)(v2 + 1216) = 0;
  *(_QWORD*)(v2 + 1224) = 0;
  *(_QWORD*)(v2 + 1200) = 0xFFFFFFFFLL;
  *(_DWORD*)(v2 + 1392) = -1;
  *(_DWORD*)(v2 + 1240) = 2;
  *(_QWORD*)v2 = GameData_20a7748;
  *(_QWORD*)(v2 + 1232) = 0;
  *(_QWORD*)(v2 + 1280) = 0;
  *(_QWORD*)(v2 + 1296) = 0;
  *(_QWORD*)(v2 + 1304) = 0;
  *(_BYTE*)(v2 + 1312) = 0;
  *(_QWORD*)(v2 + 1328) = 0;
  *(_QWORD*)(v2 + 1336) = 0;
  *(_QWORD*)(v2 + 1344) = 0;
  *(_QWORD*)(v2 + 1352) = 0;
  *(_QWORD*)(v2 + 1360) = 0;
  *(_QWORD*)(v2 + 1368) = 0;
  *(_QWORD*)(v2 + 1376) = 0;
  *(_QWORD*)(v2 + 1384) = 0;
  *(_QWORD*)(v2 + 1400) = 0;
  *(_QWORD*)(v2 + 176) = GameData_20a7c48;
  *(_QWORD*)(v2 + 1056) = GameData_20a7d18;
  GameRoutine_657850(v2, GameData_212c730, "ProcItemSellUnitSelectMenu", 1, a1);
  v4 = *(_QWORD**)(v2 + 256);
  v3 = *(_QWORD**)(v2 + 264);
  *(_QWORD*)(v2 + 336) = 0;
  while (v4 != v3) {
    if (*v4 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v4 + 8LL))(*v4);
      v3 = *(_QWORD**)(v2 + 264);
    }
    ++v4;
  }
  v5 = *(_QWORD*)(v2 + 344);
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
    *(_QWORD*)(v2 + 344) = 0;
  }
  *(_QWORD*)(v2 + 264) = *(_QWORD*)(v2 + 256);
  *(_QWORD*)(v2 + 240) = *(_QWORD*)(v2 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v2 + 1024LL))(v2);
  return (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 1032LL))(v2);
}

__int64 GameHr_1707d10(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = a1[1];
  if (*(_QWORD*)(v2 + 152) != 0) {
    v3 = *(_QWORD*)(v2 + 152);
  }
  else {
    v3 = a1[1];
  }
  GameRoutine_1704ea0(v3, a1[11]);
  return 9;
}

__int64 GameHr_1707f40(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v13;
  __int64 v14;

  v2 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 1104, 16, 0);
  v13 = 0;
  v14 = 0;
  GameRoutine_16dcd30(v2, (__int64)"MaterialSellSelectMenu", &v13, 0);
  v3 = GameData_212d6a8;
  v4 = v14;
  *(_QWORD*)v2 = GameData_212d6a8 + 2;
  *(_QWORD*)(v2 + 176) = v3 + 143;
  *(_QWORD*)(v2 + 1056) = v3 + 169;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    GameRoutine_1a09c50(v4);
  }
  *(_QWORD*)(v2 + 1064) = v2;
  *(_QWORD*)(v2 + 1072) = 0;
  *(_QWORD*)(v2 + 1080) = 0;
  *(_QWORD*)v2 = GameData_20a86b0;
  *(_QWORD*)(v2 + 1088) = 0;
  *(_DWORD*)(v2 + 664) = 0;
  LODWORD(v13) = 0;
  *(_QWORD*)(v2 + 1056) = GameData_20a8c38;
  *(_QWORD*)(v2 + 176) = GameData_20a8b68;
  *(_QWORD*)(v2 + 656) = 5;
  *(_QWORD*)(v2 + 792) = *(_QWORD*)(v2 + 784);
  *(_QWORD*)(v2 + 816) = *(_QWORD*)(v2 + 808);
  GameRoutine_6e5a40(v2 + 784, 6, &v13);
  v5 = *(_QWORD*)(v2 + 816);
  v6 = *(_QWORD*)(v2 + 808);
  LODWORD(v13) = 0;
  v7 = v5 - v6;
  v8 = (v5 - v6) >> 2;
  if (v8 > 5) {
    if (v7 != 24) {
      *(_QWORD*)(v2 + 816) = v6 + 24;
    }
  }
  else {
    GameRoutine_6e5a40(v2 + 808, 6 - v8, &v13);
  }
  GameRoutine_657850(v2, GameData_212c730, "ProcMaterialSellSelectMenu", 1, a1);
  v10 = *(_QWORD**)(v2 + 256);
  v9 = *(_QWORD**)(v2 + 264);
  *(_QWORD*)(v2 + 336) = 0;
  while (v10 != v9) {
    if (*v10 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v10 + 8LL))(*v10);
      v9 = *(_QWORD**)(v2 + 264);
    }
    ++v10;
  }
  v11 = *(_QWORD*)(v2 + 344);
  if (v11 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
    *(_QWORD*)(v2 + 344) = 0;
  }
  *(_QWORD*)(v2 + 264) = *(_QWORD*)(v2 + 256);
  *(_QWORD*)(v2 + 240) = *(_QWORD*)(v2 + 232);
  (*(void (**)(__int64))(*(_QWORD*)v2 + 1024LL))(v2);
  return (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 1032LL))(v2);
}

__int64 GameHr_1708330(__int64* a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64* v8;
  const char* v9;
  struct {
    __int64* v11;
    __int64 v12;
  } v11_;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;
  struct {
    __int64 v15;
    __int64 v16;
  } v15_;

  LayoutAccessor_1560070((void*)(&v15_.v15), a1 + 106, "L_PageTab");
  v13_.v13[0] = GameData_20a8d08;
  v2 = *a1;
  v13_.v14 = v13_.v13;
  v3 = (*(__int64 (**)(__int64*))(v2 + 192))(a1);
  game_menu_PageTab_SetupImage((int*)a1 + 164, (__int64)&v15_.v15,
                               (__int64)v13_.v13, v3, 14, 15);
  if (v13_.v14 == v13_.v13) {
    v4 = 32;
  }
  else {
    if (v13_.v14 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v13_.v14 + v4))((__int64)v13_.v14);
LABEL_6:
  if (v15_.v16 != 0) {
    std___1___shared_weak_count___release_weak(v15_.v16);
  }
  LayoutAccessor_1562cf0((__int64)(a1 + 106), "Transport_On");
  LayoutAccessor_1560070((void*)(&v11_.v11), a1 + 106, "L_UnitInfo");
  if (v11_.v12 != 0) {
    v5 = std___1___shared_weak_count_lock(v11_.v12);
    if (v5 != 0) {
      v6 = v5;
      if (v11_.v11 != nullptr) {
        LayoutAccessor_1572ac0(v11_.v11, 0, 1, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak(v6);
      }
    }
    if (v11_.v12 != 0) {
      std___1___shared_weak_count___release_weak(v11_.v12);
    }
  }
  v7 = (unsigned __int64)(a1[135] - a1[134]) >> 3;
  v8 = LayoutAccessor_155fbe0(a1 + 106, "L_UnitInfo");
  if ((int)v7 >= 1) {
    v9 = "Info00";
  }
  else {
    v9 = "Simple00";
  }
  return LayoutAccessor_1562cf0((__int64)v8, v9);
}

#pragma GCC visibility pop
