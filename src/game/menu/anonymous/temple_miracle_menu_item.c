#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1464830(_QWORD);
__int64 GameRoutine_90c9e0(_QWORD);
extern __int64 game_GameModeData_instance_;
__int64 TempleMiracleMenuItem_OnSelect(__int64 a1);
__int64 TempleMiracleMenuItem_OnDeselect(__int64 a1);
bool TempleMiracleMenuItem_IsActive(__int64 a1);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_174d580(__int64*, const char*, __int64, float);
__int64 GameHr_957180(__int64);
__int64 GameRoutine_1464830_alt1(__int64 result) __asm__("GameRoutine_1464830");
__int64 GameRoutine_157bfb0(__int64*, __int64);
__int64 GameRoutine_159d0c0(__int64 result, char, char);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 Pane_58f8a0(__int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_gameui_1584020(__int64, __int64, char);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
bool GameRoutine_90c9e0_alt1(__int64) __asm__("GameRoutine_90c9e0");
char* GameRoutine_a4dbe0(__int64, const char*, char);
extern _UNKNOWN* GameData_212da30;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern __int64 ui_Manager_instance_;
void GameRoutine_156c5d0(__int64, __int64, char);
__int64 TempleMiracleMenuItem_DrawText(_QWORD* a1);

__int64 TempleMiracleMenuItem_OnSelect(__int64 a1)
{
  __int64 v2;

  v2 = 512;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  (*(void (**)(void*))(*(_QWORD*)a1 + v2))((void*)a1);
  return GameRoutine_1464830(a1);
}

__int64 TempleMiracleMenuItem_OnDeselect(__int64 a1)
{
  __int64 v2;

  v2 = 504;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  (*(void (**)(void*))(*(_QWORD*)a1 + v2))((void*)a1);
  return GameRoutine_1464830(a1);
}

__int64 TempleMiracleMenuItem_DrawText(_QWORD* a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64* v4;
  const char* v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  atomic_ullong* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  atomic_ullong* v18;
  __int64* v19;
  __int64 v20;
  char v21;
  __int64 v22;
  int v23;
  _DWORD* v24;
  int v25;
  int v26;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  __int64* v34;
  __int64 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  atomic_ullong* v41;
  __int64* v42;
  float v43;
  int v44;
  int v45;
  int v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  atomic_ullong* v50;
  __int64* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  atomic_ullong* v55;
  __int64* v56;
  __int64 result;
  __int64 v58;
  __int64* v59;
  __int64 v60;
  __int64* v61;
  __int64 v62;
  int v63;
  _DWORD* v64;
  int v65;
  int v66;
  __int64 v67;
  __int64 v68;
  __int64* v69;
  __int64* v70;
  __int64* v71;
  __int64 v72;
  int v73;
  _DWORD* v74;
  int v75;
  const char* v76;
  __int64 v77;
  __int64 v78;
  _BYTE* v79;
  __int64 v80;
  __int64 v81;
  struct {
    __int64 v82;
    __int64 v83;
  } v82_;
  struct {
    __int64 v84;
    __int64 v85;
  } v84_;
  struct {
    __int64* v86;
    __int64 v87;
    unsigned __int64 v88;
    unsigned __int64 v89;
    int v90;
    int v91;
    __int64 v92;
    __int64 v93;
    __int64 v94;
    __int64 v95;
    __int64 v96;
    __int64 v97;
    __int64 v98;
    __int64 v99;
    __int64 v100;
    __int64 v101;
    __int64 v102;
    __int64 v103;
    __int64 v104;
  } v86_;

  v2 = a1[7];
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = (__int64*)a1[6];
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v4 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v32 = v3;
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  std___1___shared_weak_count___release_weak(v32);
  if (v4 == nullptr) {
  LABEL_5:
    v4 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_6:
  v5 = *(const char**)(*(_QWORD*)(a1[12] + 16LL) + 32LL);
  v86_.v92 = -1;
  v86_.v93 = -1;
  v86_.v94 = -1;
  v86_.v95 = -1;
  v86_.v96 = -1;
  v86_.v97 = -1;
  v86_.v98 = -1;
  v86_.v99 = -1;
  v86_.v100 = -1;
  v86_.v101 = -1;
  v6 = *msg_MessageManager_instance__ptr[0];
  v86_.v102 = -1;
  v86_.v103 = -1;
  v86_.v86 = GameData_212e348 + 2;
  v86_.v87 = 0xFFFF0001FFFF0000LL;
  v86_.v88 = 0xFFFF0004FFFF0002LL;
  v86_.v89 = 0xFFFF0006FFFF0005LL;
  v86_.v104 = 8;
  v86_.v90 = -65529;
  v86_.v91 = -65528;
  v7 = GameRoutine_a4dbe0(v6, v5, 0);
  if (v7 != nullptr) {
    v8 = (__int64)v7;
    v9 = ui_LayoutAccessor_FindTextBox(v4, (__int64)"T_Txt");
    if (v9 != 0) {
      GameRoutine_156c5d0(v9, v8, 0);
    }
  }
  v10 = a1[7];
  if (v10 == 0) {
    goto LABEL_13;
  }
  v11 = std___1___shared_weak_count_lock(v10);
  if (v11 == 0) {
    goto LABEL_13;
  }
  v12 = v11;
  v13 = (atomic_ullong*)(v11 + 8);
  v14 = (__int64*)a1[6];
  if (atomic_fetch_add(v13, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v14 != nullptr) {
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  v33 = v14;
  (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
  std___1___shared_weak_count___release_weak(v12);
  v14 = v33;
  if (v33 == nullptr) {
  LABEL_13:
    v14 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_14:
  GameRoutine_157bfb0(v14, a1[12]);
  GameRoutine_1464830_alt1((__int64)a1);
  v15 = a1[7];
  if (v15 == 0) {
    goto LABEL_18;
  }
  v16 = std___1___shared_weak_count_lock(v15);
  if (v16 == 0) {
    goto LABEL_18;
  }
  v17 = v16;
  v18 = (atomic_ullong*)(v16 + 8);
  v19 = (__int64*)a1[6];
  if (atomic_fetch_add(v18, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v19 != nullptr) {
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  v34 = v19;
  (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
  std___1___shared_weak_count___release_weak(v17);
  v19 = v34;
  if (v34 == nullptr) {
  LABEL_18:
    v19 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_19:
  LayoutAccessor_1560070((void*)(&v84_.v84), v19, "L_MiracleLV/L_Lv");
  v20 = a1[12];
  v21 = (*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1);
  game_gameui_1584020((__int64)&v84_.v84, v20, v21 & 1);
  if (v84_.v85 != 0) {
    std___1___shared_weak_count___release_weak(v84_.v85);
  }
  v22 = a1[12];
  v23 = *(_DWORD*)(v22 + 4);
  v24 = *(_DWORD**)(*(_QWORD*)(v22 + 16) + 24LL);
  v25 = v24[105];
  v26 = v24[103];
  if (v25 > 2 && v26 <= v23) {
    if ((unsigned int)v25 > 3) {
      v31 = 4;
      goto LABEL_53;
    }
  }
  else if (v25 > 1 && (signed __int32)v24[102] <= v23) {
    v26 = v24[102];
    if ((unsigned int)v25 > 2) {
      v31 = 3;
      goto LABEL_53;
    }
  }
  else {
    if (v25 >= 1 && (signed __int32)v24[101] <= v23) {
      v30 = 1;
    }
    else {
      v30 = (int)v24[104];
    }
    v26 = v24[v30 + 100];
    if (v25 >= 1 && (signed __int32)v24[101] <= v23) {
      if ((unsigned int)v25 > 1) {
        v31 = 2;
      LABEL_53:
        v37 = v24[v31 + 100];
        v38 = a1[7];
        if (v38 == 0) {
          goto LABEL_59;
        }
        goto LABEL_56;
      }
    }
    else {
      v36 = (int)v24[104];
      if ((int)v36 < v25) {
        v31 = v36 + 1;
        goto LABEL_53;
      }
    }
  }
  v37 = 0;
  v38 = a1[7];
  if (v38 == 0) {
    goto LABEL_59;
  }
LABEL_56:
  v39 = std___1___shared_weak_count_lock(v38);
  if (v39 == 0) {
    goto LABEL_59;
  }
  v40 = v39;
  v41 = (atomic_ullong*)(v39 + 8);
  v42 = (__int64*)a1[6];
  if (atomic_fetch_add(v41, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v42 != nullptr) {
      goto LABEL_60;
    }
    goto LABEL_59;
  }
  v69 = v42;
  (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
  std___1___shared_weak_count___release_weak(v40);
  v42 = v69;
  if (v69 == nullptr) {
  LABEL_59:
    v42 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_60:
  LayoutAccessor_1560070((void*)(&v82_.v82), v42, "L_MiracleLV/L_Gauge");
  v43 = 0x1.0000000000000p+0f;
  if (v37 >= 1) {
    v44 = v37 - v26;
    if (v37 != v26) {
      if (v23 <= v26) {
        v45 = v26;
      }
      else {
        v45 = v23;
      }
      v46 = v45 - v26;
      if (v44 < v46) {
        v46 = v37 - v26;
      }
      v43 = (float)v46 / (float)v44;
    }
  }
  GameHr_174d580(&v82_.v82, "GaugeUp", 7, v43);
  if (v82_.v83 != 0) {
    std___1___shared_weak_count___release_weak(v82_.v83);
  }
  v47 = a1[7];
  if (v47 == 0) {
    goto LABEL_74;
  }
  v48 = std___1___shared_weak_count_lock(v47);
  if (v48 == 0) {
    goto LABEL_74;
  }
  v49 = v48;
  v50 = (atomic_ullong*)(v48 + 8);
  v51 = (__int64*)a1[6];
  if (atomic_fetch_add(v50, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v51 != nullptr) {
      goto LABEL_75;
    }
    goto LABEL_74;
  }
  v70 = v51;
  (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
  std___1___shared_weak_count___release_weak(v49);
  v51 = v70;
  if (v70 == nullptr) {
  LABEL_74:
    v51 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_75:
  ui_LayoutAccessor_SetPaneVisible((__int64)v51, (__int64)"L_MiracleLV/L_Gauge",
                                   v37 != 0);
  v52 = a1[7];
  if (v52 == 0) {
    goto LABEL_79;
  }
  v53 = std___1___shared_weak_count_lock(v52);
  if (v53 == 0) {
    goto LABEL_79;
  }
  v54 = v53;
  v55 = (atomic_ullong*)(v53 + 8);
  v56 = (__int64*)a1[6];
  if (atomic_fetch_add(v55, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v56 != nullptr) {
      goto LABEL_80;
    }
    goto LABEL_79;
  }
  v71 = v56;
  (*(void (**)(__int64))(*(_QWORD*)v54 + 16LL))(v54);
  std___1___shared_weak_count___release_weak(v54);
  v56 = v71;
  if (v71 == nullptr) {
  LABEL_79:
    v56 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_80:
  LayoutAccessor_1560070((void*)(&v86_.v86), v56, "L_MiracleLV");
  result = v86_.v87;
  if (v86_.v87 == 0) {
    return result;
  }
  v58 = std___1___shared_weak_count_lock(v86_.v87);
  v59 = v86_.v86;
  result = v86_.v87;
  if (v86_.v87 != 0) {
    result = std___1___shared_weak_count___release_weak(v86_.v87);
  }
  if (v58 == 0 || v59 == nullptr) {
    if (v58 == 0) {
      return result;
    }
    goto LABEL_131;
  }
  LayoutAccessor_1560070((void*)(&v86_.v86), v59, "L_Lv");
  if (v86_.v87 != 0) {
    v60 = std___1___shared_weak_count_lock(v86_.v87);
    v61 = v86_.v86;
    if (v86_.v87 != 0) {
      std___1___shared_weak_count___release_weak(v86_.v87);
    }
    if (v60 != 0 && v61 != nullptr) {
      v62 = a1[12];
      v63 = *(_DWORD*)(v62 + 4);
      v64 = *(_DWORD**)(*(_QWORD*)(v62 + 16) + 24LL);
      v65 = v64[105];
      if ((v65 <= 2 || (signed __int32)v64[103] > v63) &&
          (v65 <= 1 || (signed __int32)v64[102] > v63) &&
          (v65 < 1 || (signed __int32)v64[101] > v63) && v64[104] == 0) {
        v66 = *(_DWORD*)((char*)((_UNKNOWN**)0x38LL) +
                         (_QWORD)GameData_212da30 + 4);
        v67 = ui_LayoutAccessor_FindTextBox(v61, (__int64)"T_Num");
        if (v67 != 0) {
          v68 = Pane_58f8a0(v67);
          if (v68 != 0) {
            *(_DWORD*)(v68 + 12) = v66;
          }
        }
      }
      goto LABEL_109;
    }
    if (v60 != 0) {
    LABEL_109:
      if (atomic_fetch_add((atomic_ullong* volatile)(v60 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v60 + 16LL))(v60);
        std___1___shared_weak_count___release_weak(v60);
      }
    }
  }
  if (GameRoutine_90c9e0_alt1(a1[12]) ||
      ((v72 = a1[12], v73 = *(_DWORD*)(v72 + 4),
        v74 = *(_DWORD**)(*(_QWORD*)(v72 + 16) + 24LL), (v75 = v74[105]) > 2) &&
           (signed __int32)v74[103] <= v73 ||
       v75 > 1 && (signed __int32)v74[102] <= v73 ||
       v75 >= 1 && (signed __int32)v74[101] <= v73 || (int)v74[104] >= 1) &&
          ((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) != 0) {
    v76 = "Default";
  }
  else {
    v76 = "Disable";
  }
  GameHr_1562680((__int64)v59, v76, 0x1.0000000000000p+0f);
  v77 = ui_LayoutAccessor_FindPane(v59, (__int64)"IconGod");
  if (v77 != 0) {
    v78 = __dynamic_cast(v77, GameData_212d670[0], GameData_212d678[0], 0);
    v79 = (_BYTE*)GameHr_957180(a1[11]);
    if (v78 != 0) {
      Manager_136a920(ui_Manager_instance_ + 1264, v78, 0, 7u, v79);
    }
  }
  else {
    GameHr_957180(a1[11]);
  }
  result = ((__int64 (*)(__int64))GameRoutine_90c9e0_alt1)(a1[12]);
  if ((result & 1) != 0) {
    ui_LayoutAccessor_SetPaneVisible((__int64)v59, (__int64)"N_MiracleLv", 0);
    v80 = std___1___shared_weak_count_lock(v59[1]);
    if (v80 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v80 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      v81 = v80;
      (*(void (**)(__int64))(*(_QWORD*)v80 + 16LL))(v80);
      std___1___shared_weak_count___release_weak(v81);
    }
    result = GameRoutine_159d0c0(*(_QWORD*)(v59[2] + 24) + 32LL, 0, 1);
  }
LABEL_131:
  if (atomic_fetch_add((atomic_ullong* volatile)(v58 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58);
    return std___1___shared_weak_count___release_weak(v58);
  }
  return result;
}

bool TempleMiracleMenuItem_IsActive(__int64 a1)
{
  __int64 v3;
  int v4;
  _DWORD* v5;
  int v6;
  bool v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  _BYTE* v16;
  __int64 v17;
  __int64 v18;
  char v19;
  int v20;
  char v21;
  char* v22;
  char v23;

  if ((GameRoutine_90c9e0(*(_QWORD*)(a1 + 96)) & 1) != 0) {
    return false;
  }
  v3 = *(_QWORD*)(a1 + 96);
  v4 = *(_DWORD*)(v3 + 4);
  v5 = *(_DWORD**)(*(_QWORD*)(v3 + 16) + 24LL);
  v6 = v5[105];
  if ((v6 <= 2 || v5[103] > v4) && (v6 <= 1 || v5[102] > v4)) {
    v9 = v6 >= 1 && v5[101] <= v4;
    if (!v9 && (int)v5[104] < 1) {
      return false;
    }
  }
  if ((*(_BYTE*)(v3 + 8) & 1) != 0) {
    return true;
  }
  v10 = *(_QWORD*)(game_GameModeData_instance_ + 160);
  v11 = *(_QWORD*)(v10 + 8);
  v12 = *(_QWORD*)(v10 + 16) - v11;
  if ((int)(v12 >> 5) < 1) {
    return true;
  }
  v13 = (unsigned __int8)v12 >> 5;
  if (((v12 >> 5) & 0x7FFFFFFF) - 1 >= 7) {
    v16 = (_BYTE*)(v11 + 136);
    v17 = 0;
    v15 = 0;
    v18 = -8LL * ((v12 >> 8) & 0xFFFFFFF);
    do {
      v17 -= 8;
      v19 = v16[96];
      v20 = v15 + (*(v16 - 128) & 1) + (*(v16 - 96) & 1) + (*(v16 - 64) & 1) +
            (*(v16 - 32) & 1) + (*v16 & 1) + (v16[32] & 1);
      v21 = v16[64];
      v16 += 256;
      v15 = v20 + (v21 & 1) + (v19 & 1);
    } while (v18 != v17);
    v14 = -v17;
    if (v13 == 0) {
      return v15 < 4;
    }
    goto LABEL_25;
  }
  v14 = 0;
  v15 = 0;
  if ((unsigned __int8)v12 >> 5 != 0) {
  LABEL_25:
    v22 = (char*)(v11 + 32 * v14 + 8);
    do {
      v23 = *v22;
      v22 += 32;
      --v13;
      v15 += v23 & 1;
    } while (v13 != 0);
  }
  return v15 < 4;
}

#pragma GCC visibility pop
