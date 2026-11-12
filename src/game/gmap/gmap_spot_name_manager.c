#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_17bddb0(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_20d8a50[])();
extern __int64 GameData_2265728;
extern int GameData_2265734;
__int64 GmapSpotNameManager_Destructor(_QWORD* a1);
__int64 GameRoutine_1596b00(_QWORD);
__int64 GameRoutine_165eb40(_QWORD);
__int64 GameRoutine_165f3c0(_QWORD);
__int64 GameRoutine_17b8e80(__int64, char);
__int64 GameRoutine_17b8f40(__int64, char);
__int64 GameRoutine_17bd0e0(__int64);
__int64 GameRoutine_199f1d0(__int64 result, __int64, __int64);
__int64 GmapSpotNameManager_17be200(_QWORD);
__int64 LayoutAccessor_1567000(_QWORD, _QWORD);
extern __int64 (*GameData_211eaf8[])();
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64 game_hub_ProgressEventView_instance__ptr[6];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 game_gmap_GmapSpotNameManager_ShowOnlyDagsionHp_alt1(
    __int64 a1,
    char a2) __asm__("game_gmap_GmapSpotNameManager_ShowOnlyDagsionHp");
__int64 GmapSpotNameManager_199f590(__int64 a1, __int64 a2, __int64 a3,
                                    __int64 a4);
__int64 GmapSpotNameManager_199f810(__int64 a1, __int64 a2, __int64 a3,
                                    __int64 a4, __int64 a5);
bool GmapSpotNameManager_199fb60(__int64 a1, __int64 a2);
__int64 GmapSpotNameManager_199fe60(__int64 a1, __int64* a2);
__int64 game_gmap_GmapSpotNameManager_Update_lambda0_Invoke(__int64 a1,
                                                            __int64 a2);
__int64 game_gmap_GmapSpotNameManager_PersistentTick_lambda0_Invoke(__int64 a1,
                                                                    __int64 a2);
__int64 GameRoutine_165f4c0(_QWORD, _QWORD);
__int64 GameRoutine_199de80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__n128 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_211e8e8[])();
extern __int64 (*GameData_211e978[])();
extern __int64 (*GameData_211e9f8[])();
extern __int64* GameData_212c780;
struct PseudoSret Pane_58dfa0(void);
void __attribute__((noreturn))
GameRoutine_60a310_alt1(_QWORD) __asm__("GameRoutine_60a310");
void game_gmap_GmapSpotNameManager_Update(__int64 a1, _BYTE* a2);
__int64 LayoutAccessor_1567000_alt1(__int64,
                                    char) __asm__("LayoutAccessor_1567000");
void GameRoutine_17bd0e0_alt1(__int64) __asm__("GameRoutine_17bd0e0");
void __attribute__((noreturn))
GameRoutine_60a310_alt2() __asm__("GameRoutine_60a310");
void game_gmap_GmapSpotNameManager_ShowOnlyDagsionHp(__int64 a1, char a2);
__int64 GmapSpotNameManager_17be200_alt1(__int64 result) __asm__(
    "GmapSpotNameManager_17be200");
__int64 Pane_58dee0(__int64 result, __int64);
__int64 Pane_58df60(__int64 result, _QWORD*);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(__int64);
extern __int64* GameData_212d708;
__int64 GmapSpotNameManager_199de80(__int64 result, __int64* a2, __int64 a3,
                                    char a4);
__int64 GmapSpotNameManager_199f1d0(__int64 result, __int64 a2, __int64 a3);
__int64 game_gmap_GmapSpotNameManager_Update_lambda2_Invoke(__int64 result,
                                                            __int64 a2);
__int64 game_gmap_GmapSpotNameManager_Update_lambda3_Invoke(__int64 result,
                                                            __int64 a2);

void game_gmap_GmapSpotNameManager_ShowOnlyDagsionHp(__int64 a1, char a2)
{
  _QWORD* v4;
  __int64 v5;
  __int64 i;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  int v11;
  __int64 v12;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;
  char v15;

  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v15 = a2;
  *(_BYTE*)(a1 + 5833) = a2;
  v4 = v13_.v13;
  v13_.v13[0] = GameData_211eaf8;
  v13_.v13[1] = &v15;
  v5 = 11880;
  v13_.v14 = v13_.v13;
  for (i = GameData_2265728 + 24;; i += 120) {
    (*(void (**)(_QWORD*, __int64))(*v4 + 48LL))(v4, i),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v5 == 0) {
      break;
    }
    v4 = v13_.v14;
    v5 -= 120;
    if (v13_.v14 == nullptr) {
      GameRoutine_60a310_alt2(),
          v7 = COERCE_AS(__typeof__(v7),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  if (v13_.v14 == v13_.v13) {
    v8 = 32;
  }
  else {
    if (v13_.v14 == nullptr) {
      goto LABEL_10;
    }
    v8 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v13_.v14 + v8))(v13_.v14, v7),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_10:
  if ((a2 & 1) != 0) {
    v9 = game_gameui_Footer_instance_;
    *(_DWORD*)(a1 + 5864) = *(_DWORD*)(a1 + 5856);
    v10 = 1;
    *(_DWORD*)(a1 + 5856) = 1;
    if (v9 != 0) {
      LayoutAccessor_1567000_alt1(v9, 0),
          v7 = COERCE_AS(__typeof__(v7),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v10 = *(_DWORD*)(a1 + 5856) & 0xFFFDFFFF;
    }
    *(_DWORD*)(a1 + 5856) = v10;
    if (game_hub_ProgressEventView_instance_ != 0) {
      GameRoutine_17b8f40(game_hub_ProgressEventView_instance_, 1),
          v7 = COERCE_AS(__typeof__(v7),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  else {
    v11 = *(_DWORD*)(a1 + 5864);
    *(_DWORD*)(a1 + 5856) = v11;
    v12 = *(_QWORD*)game_hub_ProgressEventView_instance__ptr[0];
    if ((v11 & 0x10000) != 0) {
      if (v12 != 0) {
        GameRoutine_17b8e80(v12, 1),
            v7 = COERCE_AS(__typeof__(v7),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    else if (v12 != 0) {
      GameRoutine_17b8f40(v12, 1),
          v7 = COERCE_AS(__typeof__(v7),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    if ((v11 & 0x20000) != 0) {
      GameRoutine_17bd0e0_alt1(a1),
          v7 = COERCE_AS(__typeof__(v7),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      if (game_gameui_Footer_instance_ != 0) {
        LayoutAccessor_1567000_alt1(game_gameui_Footer_instance_, 0),
            v7 = COERCE_AS(__typeof__(v7),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      *(_DWORD*)(a1 + 5856) &= ~0x20000u;
    }
  }
}

__int64 GmapSpotNameManager_Destructor(_QWORD* a1)
{
  __int64 result;
  __int64 v3;

  result = GameRoutine_17bddb0(a1 + 3);
  v3 = a1[2];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    result = std___1___shared_weak_count___release_weak(v3);
  }
  *a1 = GameData_20d8a50;
  if ((_QWORD*)GameData_2265728 == a1) {
    GameData_2265728 = 0;
    GameData_2265734 = 0;
  }
  return result;
}

void game_gmap_GmapSpotNameManager_Update(__int64 a1, _BYTE* a2)
{
  __int64 v2;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v15;
  __int64 v17;
  __int64 v19;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
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
  _QWORD* v40;
  __int64 i;
  __int64 v42;
  __int64 v43;
  char v44;
  __int64 v45;
  _QWORD* v46;
  float v47;
  float v48;
  __int64 v49;
  float v50;
  float v51;
  __int64 v52;
  float v53;
  float v54;
  float v55;
  float v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  char v60;
  bool v61;
  float32x2_t* v62;
  __int64 v63;
  float32x2_t* v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v72;
  float v73;
  unsigned int v74;
  float v75;
  __int64 v76;
  char v77;
  float32x2_t* v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v86;
  float v87;
  unsigned int v88;
  float v89;
  __int64 v90;
  char v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  unsigned int v99;
  float v100;
  float v101;
  float v102;
  __int64 v103;
  char v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  float v110;
  float v111;
  _QWORD v112[4];
  _QWORD* v113;
  __int64* v114;

  if ((*a2 & 0x93) == 0) {
    return;
  }
  *(_BYTE*)(a1 + 129) = 0;
  *(_BYTE*)(a1 + 249) = 0;
  v2 = a1 + 24;
  *(_BYTE*)(a1 + 369) = 0;
  *(_BYTE*)(a1 + 489) = 0;
  *(_BYTE*)(a1 + 609) = 0;
  *(_BYTE*)(a1 + 729) = 0;
  *(_BYTE*)(a1 + 849) = 0;
  *(_BYTE*)(a1 + 969) = 0;
  *(_BYTE*)(a1 + 1089) = 0;
  *(_BYTE*)(a1 + 1209) = 0;
  *(_BYTE*)(a1 + 1329) = 0;
  *(_BYTE*)(a1 + 1449) = 0;
  *(_BYTE*)(a1 + 1569) = 0;
  *(_BYTE*)(a1 + 1689) = 0;
  *(_BYTE*)(a1 + 1809) = 0;
  *(_BYTE*)(a1 + 1929) = 0;
  *(_BYTE*)(a1 + 2049) = 0;
  *(_BYTE*)(a1 + 2169) = 0;
  *(_BYTE*)(a1 + 2289) = 0;
  *(_BYTE*)(a1 + 2409) = 0;
  *(_BYTE*)(a1 + 2529) = 0;
  *(_BYTE*)(a1 + 2649) = 0;
  *(_BYTE*)(a1 + 2769) = 0;
  *(_BYTE*)(a1 + 2889) = 0;
  *(_BYTE*)(a1 + 3009) = 0;
  *(_BYTE*)(a1 + 3129) = 0;
  *(_BYTE*)(a1 + 3249) = 0;
  *(_BYTE*)(a1 + 3369) = 0;
  *(_BYTE*)(a1 + 4209) = 0;
  *(_BYTE*)(a1 + 4329) = 0;
  *(_BYTE*)(a1 + 4449) = 0;
  *(_BYTE*)(a1 + 4569) = 0;
  *(_BYTE*)(a1 + 4689) = 0;
  *(_BYTE*)(a1 + 4809) = 0;
  *(_BYTE*)(a1 + 4929) = 0;
  *(_BYTE*)(a1 + 5049) = 0;
  *(_BYTE*)(a1 + 5169) = 0;
  *(_BYTE*)(a1 + 5289) = 0;
  *(_BYTE*)(a1 + 5409) = 0;
  *(_BYTE*)(a1 + 5529) = 0;
  *(_BYTE*)(a1 + 5649) = 0;
  *(_BYTE*)(a1 + 5769) = 0;
  *(_BYTE*)(a1 + 5889) = 0;
  *(_BYTE*)(a1 + 6009) = 0;
  *(_BYTE*)(a1 + 6129) = 0;
  *(_BYTE*)(a1 + 6249) = 0;
  *(_BYTE*)(a1 + 6369) = 0;
  *(_BYTE*)(a1 + 6489) = 0;
  *(_BYTE*)(a1 + 6609) = 0;
  *(_BYTE*)(a1 + 6729) = 0;
  *(_BYTE*)(a1 + 6849) = 0;
  *(_BYTE*)(a1 + 6969) = 0;
  *(_BYTE*)(a1 + 7089) = 0;
  *(_BYTE*)(a1 + 7209) = 0;
  *(_BYTE*)(a1 + 7329) = 0;
  *(_BYTE*)(a1 + 7449) = 0;
  *(_BYTE*)(a1 + 7569) = 0;
  *(_BYTE*)(a1 + 7689) = 0;
  *(_BYTE*)(a1 + 7809) = 0;
  *(_BYTE*)(a1 + 7929) = 0;
  *(_BYTE*)(a1 + 8049) = 0;
  *(_BYTE*)(a1 + 8169) = 0;
  *(_BYTE*)(a1 + 8289) = 0;
  *(_BYTE*)(a1 + 8409) = 0;
  *(_BYTE*)(a1 + 8529) = 0;
  *(_BYTE*)(a1 + 8649) = 0;
  *(_BYTE*)(a1 + 8769) = 0;
  *(_BYTE*)(a1 + 8889) = 0;
  *(_BYTE*)(a1 + 9009) = 0;
  *(_BYTE*)(a1 + 9129) = 0;
  *(_BYTE*)(a1 + 9249) = 0;
  *(_BYTE*)(a1 + 9369) = 0;
  *(_BYTE*)(a1 + 9489) = 0;
  *(_BYTE*)(a1 + 9609) = 0;
  *(_BYTE*)(a1 + 9729) = 0;
  *(_BYTE*)(a1 + 9849) = 0;
  *(_BYTE*)(a1 + 9969) = 0;
  *(_BYTE*)(a1 + 10089) = 0;
  *(_BYTE*)(a1 + 10209) = 0;
  *(_BYTE*)(a1 + 10329) = 0;
  *(_BYTE*)(a1 + 10449) = 0;
  *(_BYTE*)(a1 + 10569) = 0;
  *(_BYTE*)(a1 + 10689) = 0;
  *(_BYTE*)(a1 + 10809) = 0;
  *(_BYTE*)(a1 + 10929) = 0;
  *(_BYTE*)(a1 + 11049) = 0;
  *(_BYTE*)(a1 + 11169) = 0;
  *(_BYTE*)(a1 + 11289) = 0;
  *(_BYTE*)(a1 + 11409) = 0;
  *(_BYTE*)(a1 + 11529) = 0;
  *(_BYTE*)(a1 + 11649) = 0;
  *(_BYTE*)(a1 + 11769) = 0;
  v4 = GameData_212c780;
  *(_BYTE*)(a1 + 11889) = 0;
  *(_BYTE*)(a1 + 12009) = 0;
  v5 = *v4;
  *(_BYTE*)(a1 + 3489) = 0;
  *(_BYTE*)(a1 + 3609) = 0;
  *(_BYTE*)(a1 + 3729) = 0;
  *(_BYTE*)(a1 + 3849) = 0;
  *(_BYTE*)(a1 + 3969) = 0;
  *(_BYTE*)(a1 + 4089) = 0;
  v6 = *(_QWORD*)(v5 + 8);
  v7 = *(__int64**)(v6 + 48);
  v8 = *(__int64**)(v6 + 56);
  if (v7 != v8) {
    v106 = a1 + 11184;
    v107 = a1 + 11304;
    v108 = a1 + 11424;
    v105 = a1 + 12024;
    do {
      v11 = *v7;
      if (*(float*)(*v7 + 288) != 0.0f) {
        v12 = 0;
        while (1) {
          v13 = *(_QWORD*)(a1 + v12 + 11992);
          if (v13 == 0 || v11 == v13) {
            v10 = a1 + 11904 + v12;
            goto LABEL_5;
          }
          v15 = *(_QWORD*)(a1 + v12 + 11872);
          if (v15 == 0 || v11 == v15) {
            v10 = a1 + 11784 + v12;
            goto LABEL_5;
          }
          v17 = *(_QWORD*)(a1 + v12 + 11752);
          if (v17 == 0 || v11 == v17) {
            v10 = a1 + 11664 + v12;
            goto LABEL_5;
          }
          v19 = *(_QWORD*)(a1 + v12 + 11632);
          if (v19 == 0 || v11 == v19) {
            v10 = a1 + 11544 + v12;
            goto LABEL_5;
          }
          if (v12 == -11520) {
            goto LABEL_6;
          }
          v21 = *(_QWORD*)(a1 + v12 + 11512);
          if (v21 == 0 || v11 == v21) {
            v10 = v108 + v12;
            goto LABEL_5;
          }
          v22 = *(_QWORD*)(a1 + v12 + 11392);
          if (v22 == 0 || v11 == v22) {
            v10 = v107 + v12;
            goto LABEL_5;
          }
          v23 = *(_QWORD*)(a1 + v12 + 11272);
          if (v23 == 0 || v11 == v23) {
            break;
          }
          v24 = a1 + v12;
          v12 -= 960;
          v25 = *(_QWORD*)(v24 + 11152);
          if (v25 == 0 || v11 == v25) {
            v10 = v105 + v12;
            goto LABEL_5;
          }
        }
        v10 = v106 + v12;
      LABEL_5:
        GameRoutine_165f4c0(v10, a2);
      }
    LABEL_6:
      ++v7;
    } while (v7 != v8);
  }
  v26 = v112;
  v27 = 11880;
  v28 = v2;
  v112[0] = GameData_211e8e8;
  v113 = v112;
  while (1) {
    (*(void (**)(_QWORD*, __int64))(*v26 + 48LL))(v26, v28);
    if (v27 == 0) {
      break;
    }
    v26 = v113;
    v28 += 120;
    v27 -= 120;
    if (v113 == nullptr) {
    LABEL_63:
      GameRoutine_60a310_alt1(v26);
    }
  }
  if (v113 == v112) {
    v29 = 32;
  }
  else {
    if (v113 == nullptr) {
      goto LABEL_50;
    }
    v29 = 40;
  }
  (*(void (**)(__int64))(*v113 + v29))((__int64)v113);
LABEL_50:
  GameRoutine_199de80(v2, a1 + 12024, 12, 1);
  v109 = ui_LayoutAccessor_FindPane(*(_QWORD*)(a1 + 8), "N_Spot");
  if (v109 == 0) {
    goto LABEL_69;
  }
  v26 = v112;
  v33 = 11880;
  v34 = v2;
  v114 = &v109;
  v113 = v112;
  v112[0] = GameData_211e978;
  v112[1] = &v114;
  while (1) {
    (*(void (**)(_QWORD*, __int64))(*v26 + 48LL))(v26, v34);
    if (v33 == 0) {
      break;
    }
    v26 = v113;
    v34 += 120;
    v33 -= 120;
    if (v113 == nullptr) {
      goto LABEL_63;
    }
  }
  if (v113 == v112) {
    v35 = 32;
  }
  else {
    if (v113 == nullptr) {
      goto LABEL_60;
    }
    v35 = 40;
  }
  (*(void (**)(__int64))(*v113 + v35))((__int64)v113);
LABEL_60:
  v26 = v112;
  v36 = v2;
  v112[0] = GameData_211e9f8;
  v112[1] = &v114;
  v113 = v112;
  v37 = 11880;
  while (1) {
    (*(void (**)(_QWORD*, __int64))(*v26 + 48LL))(v26, v36);
    if (v37 == 0) {
      break;
    }
    v26 = v113;
    v36 += 120;
    v37 -= 120;
    if (v113 == nullptr) {
      goto LABEL_63;
    }
  }
  if (v113 == v112) {
    v38 = 32;
    goto LABEL_68;
  }
  if (v113 != nullptr) {
    v38 = 40;
  LABEL_68:
    (*(void (**)(__int64))(*v113 + v38))((__int64)v113);
  }
LABEL_69:
  memset(v112, 0, 3200, v30, v31, v32);
  v39 = 0x1FFFFFFFFFFFFE70LL;
  do {
    v40 = &v112[v39];
    v39 += 80;
    *((_BYTE*)v40 + 3224) = 0;
    v40[400] = 0;
    v40[401] = 0;
    *((_BYTE*)v40 + 3256) = 0;
    v40[404] = 0;
    v40[405] = 0;
    *((_BYTE*)v40 + 3288) = 0;
    v40[408] = 0;
    v40[409] = 0;
    *((_BYTE*)v40 + 3320) = 0;
    v40[412] = 0;
    v40[413] = 0;
    *((_BYTE*)v40 + 3352) = 0;
    v40[416] = 0;
    v40[417] = 0;
    *((_BYTE*)v40 + 3384) = 0;
    v40[420] = 0;
    v40[421] = 0;
    *((_BYTE*)v40 + 3416) = 0;
    v40[424] = 0;
    v40[425] = 0;
    *((_BYTE*)v40 + 3448) = 0;
    v40[428] = 0;
    v40[429] = 0;
    *((_BYTE*)v40 + 3480) = 0;
    v40[432] = 0;
    v40[433] = 0;
    *((_BYTE*)v40 + 3512) = 0;
    v40[436] = 0;
    v40[437] = 0;
    *((_BYTE*)v40 + 3544) = 0;
    v40[440] = 0;
    v40[441] = 0;
    *((_BYTE*)v40 + 3576) = 0;
    v40[444] = 0;
    v40[445] = 0;
    *((_BYTE*)v40 + 3608) = 0;
    v40[448] = 0;
    v40[449] = 0;
    *((_BYTE*)v40 + 3640) = 0;
    v40[452] = 0;
    v40[453] = 0;
    *((_BYTE*)v40 + 3672) = 0;
    v40[456] = 0;
    v40[457] = 0;
    *((_BYTE*)v40 + 3704) = 0;
    v40[460] = 0;
    v40[461] = 0;
    *((_BYTE*)v40 + 3736) = 0;
    v40[464] = 0;
    v40[465] = 0;
    *((_BYTE*)v40 + 3768) = 0;
    v40[469] = 0;
    v40[468] = 0;
    *((_BYTE*)v40 + 3800) = 0;
    v40[473] = 0;
    v40[472] = 0;
    *((_BYTE*)v40 + 3832) = 0;
    v40[477] = 0;
    v40[476] = 0;
  } while (v39 != 0);
  for (i = 0; i != 100; ++i) {
    v42 = v2 + 120 * i;
    v43 = *(_QWORD*)(v42 + 24);
    v44 = *(_BYTE*)(v43 + 88);
    *(_QWORD*)(v43 + 48) = 0;
    *(_DWORD*)(v43 + 56) = 0;
    *(_BYTE*)(v43 + 88) = v44 | 0x10;
    if (*(_BYTE*)(v42 + 105) == 1) {
      v45 = *(_QWORD*)(v42 + 16);
      v46 = &v112[4 * i];
      *v46 = v45;
      if (v45 != 0 && (*(_BYTE*)(v45 + 88) & 1) != 0) {
        v47 = 0.0f;
        v48 = 0.0f;
        v49 = v45;
        do {
          v50 = *(float*)(v49 + 48);
          v51 = *(float*)(v49 + 52);
          v49 = *(_QWORD*)(v49 + 24);
          v47 = v47 + v50;
          v48 = v48 + v51;
        } while (v49 != 0);
        *(struct PseudoSret*)(&v109) = Pane_58dfa0();
        v52 = v109;
        v53 = v110;
        v54 = v111;
        *((_BYTE*)v46 + 24) = 1;
        v55 =
            (float)((float)(v47 + v53) - (float)(v47 + *(float*)&v52)) + 30.0f;
        v56 = (float)((float)(v48 + *((float*)&v52 + 1)) - (float)(v48 + v54)) +
              5.0f;
        *((float*)v46 + 2) = v55;
        *((float*)v46 + 3) = v56;
        v46[2] = COERCE_UNSIGNED_INT((float)(v47 + *(float*)&v52) +
                                     (float)(v55 * 0.5f)) |
                 ((unsigned __int64)COERCE_UNSIGNED_INT(
                      (float)(v48 + *((float*)&v52 + 1)) + (float)(v56 * 0.5f))
                  << 32);
      }
    }
  }
  v57 = a1 + 48;
  v58 = 98;
  v59 = 99;
  v60 = 0;
  do {
    v62 = (float32x2_t*)&v112[4 * v59];
    if (LANES64(v62[3]).n64_u8[0] == 1) {
      v63 = v58;
      if ((v60 & 1) == 0) {
        v64 = (float32x2_t*)&v112[4 * v58];
        if (LANES64(v64[3]).n64_u8[0] == 1) {
          LODWORD(v65) = HIDWORD(LANES64(v62[2]).n64_u64[0]);
          LODWORD(v66) = HIDWORD(LANES64(v64[2]).n64_u64[0]);
          v67 =
              (float)(LANES64(v62[1]).n64_f32[0] + LANES64(v64[1]).n64_f32[0]) *
              0.5f;
          v68 =
              (float)(LANES64(v62[1]).n64_f32[1] + LANES64(v64[1]).n64_f32[1]) *
              0.5f;
          v69 = fabsf(LANES64_OF(vsub_f32(v62[2], v64[2])).n64_f32[0]);
          v70 = vabds_f32(v65, v66);
          if (v69 < v67 && v70 < v68) {
            v72 = v70 - v68;
            v73 = (float)(v67 - v69) / 15.0f;
            if (v73 > 1.0f) {
              v73 = 1.0f;
            }
            if (v65 > v66) {
              v74 = v58;
            }
            else {
              v74 = v59;
            }
            v75 = v72 * v73;
            v76 = *(_QWORD*)(v57 + 120LL * v74);
            v77 = *(_BYTE*)(v76 + 88);
            *(_DWORD*)(v76 + 48) = 0;
            *(float*)(v76 + 52) = v75;
            *(_DWORD*)(v76 + 56) = 0;
            *(_BYTE*)(v76 + 88) = v77 | 0x10;
            *((float*)&v112[4 * v74 + 2] + 1) =
                *((float*)&v112[4 * v74 + 2] + 1) - v75;
          }
        }
        v63 = v58 - 1;
      }
      if (v58 != 0) {
        v78 = (float32x2_t*)(&v108 + 4 * v63);
        do {
          if (LANES64(v78[6]).n64_u8[0] == 1) {
            LODWORD(v79) = HIDWORD(LANES64(v62[2]).n64_u64[0]);
            LODWORD(v80) = HIDWORD(LANES64(v78[5]).n64_u64[0]);
            v81 = (float)(LANES64(v62[1]).n64_f32[0] +
                          LANES64(v78[4]).n64_f32[0]) *
                  0.5f;
            v82 = (float)(LANES64(v62[1]).n64_f32[1] +
                          LANES64(v78[4]).n64_f32[1]) *
                  0.5f;
            v83 = fabsf(LANES64_OF(vsub_f32(v62[2], v78[5])).n64_f32[0]);
            v84 = vabds_f32(v79, v80);
            if (v83 < v81 && v84 < v82) {
              v86 = v84 - v82;
              v87 = (float)(v81 - v83) / 15.0f;
              if (v87 > 1.0f) {
                v87 = 1.0f;
              }
              if (v79 > v80) {
                v88 = v63;
              }
              else {
                v88 = v59;
              }
              v89 = v86 * v87;
              v90 = *(_QWORD*)(v57 + 120LL * v88);
              v91 = *(_BYTE*)(v90 + 88);
              *(_DWORD*)(v90 + 48) = 0;
              *(float*)(v90 + 52) = v89;
              *(_DWORD*)(v90 + 56) = 0;
              *(_BYTE*)(v90 + 88) = v91 | 0x10;
              *((float*)&v112[4 * v88 + 2] + 1) =
                  *((float*)&v112[4 * v88 + 2] + 1) - v89;
            }
          }
          if (LANES64(v78[2]).n64_u8[0] == 1) {
            LODWORD(v92) = HIDWORD(LANES64(v62[2]).n64_u64[0]);
            LODWORD(v93) = HIDWORD(LANES64(v78[1]).n64_u64[0]);
            v94 = (float)(LANES64(v62[1]).n64_f32[0] +
                          LANES64(*(v78)).n64_f32[0]) *
                  0.5f;
            v95 = (float)(LANES64(v62[1]).n64_f32[1] +
                          LANES64(*(v78)).n64_f32[1]) *
                  0.5f;
            v96 = fabsf(LANES64_OF(vsub_f32(v62[2], v78[1])).n64_f32[0]);
            v97 = vabds_f32(v92, v93);
            if (v96 < v94 && v97 < v95) {
              v99 = v63 - 1;
              v100 = v97 - v95;
              v101 = (float)(v94 - v96) / 15.0f;
              if (v101 > 1.0f) {
                v101 = 1.0f;
              }
              if (v92 <= v93) {
                v99 = v59;
              }
              v102 = v100 * v101;
              v103 = *(_QWORD*)(v57 + 120LL * v99);
              v104 = *(_BYTE*)(v103 + 88);
              *(_DWORD*)(v103 + 48) = 0;
              *(float*)(v103 + 52) = v102;
              *(_DWORD*)(v103 + 56) = 0;
              *(_BYTE*)(v103 + 88) = v104 | 0x10;
              *((float*)&v112[4 * v99 + 2] + 1) =
                  *((float*)&v112[4 * v99 + 2] + 1) - v102;
            }
          }
          v78 -= 8;
          v61 = v63 <= 1;
          v63 -= 2;
        } while (!v61);
      }
    }
    --v58;
    v61 = v59-- > 1;
    ++v60;
  } while (v61);
}

__int64 GmapSpotNameManager_199de80(__int64 result, __int64* a2, __int64 a3,
                                    char a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  signed __int64 v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  float v36;
  __int64* v37;
  unsigned __int64 v38;
  float v39;
  unsigned __int64 v40;
  __int64* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  int v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  float v51;
  float v52;
  __int64* v53;
  bool v54;
  bool v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  int v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  float v66;
  unsigned __int64 v67;
  float v68;
  __int64* v69;
  unsigned __int64 v70;
  float v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  int v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  float v81;
  float v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  int v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64* v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64* v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  int v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  _QWORD* v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  unsigned __int64 v127;
  __int64 v128;
  signed __int64 v129;
  signed __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  int v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  float v144;
  __int64 v145;
  __int64 v146;
  unsigned __int64 v147;
  signed __int64 v148;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  int v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  int v160;
  __int64 v161;
  __int64 v162;
  int v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int16 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  unsigned __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  int v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  float v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  int v205;
  __int64 v206;
  __int64 v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  __int64* v212;
  __int64 v213;
  __int64* v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  __int64 v218;
  unsigned __int64 v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  float v224;
  __int64 v225;
  __int64 v226;
  __int64 v227;
  __int64 v228;
  __int64 v229;
  __int64 v230;
  __int64 v231;
  __int64 v232;
  __int64 v233;
  __int64 v234;
  __int64 v235;
  __int64 v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  __int64 v240;
  __int64* v241;
  unsigned __int64 v242;
  struct {
    __int64 v243[4];
    __int64 v244;
    __int64 v245;
    __int64 v246;
    __int64 v247;
    int v248;
    __int16 v249;
    char gap94_[2];
    __int64 v250;
    __int64 v251;
    __int64 v252;
    __int64 v253;
    __int64 v254;
    int v255;
  } v243_;
  struct {
    __int64 v256;
    __int64 v257;
    __int64 v258;
    __int64 v259;
    __int64 v260;
    __int64 v261;
    __int64 v262;
    __int64 v263;
    int v264;
    __int16 v265;
    char gap214_[2];
    __int64 v266;
    __int64 v267;
    __int64 v268;
    __int64 v269;
    __int64 v270;
    int v271;
    char gap260_[20];
    __int64 v272;
  } v256_;

  v256_.v272 = result;
LABEL_2:
  v7 = v256_.v272;
  v240 = (__int64)(a2 - 30);
  v241 = a2 - 15;
  v239 = (__int64)(a2 - 45);
  while (1) {
    v8 = (__int64)a2 - v7;
    v9 = v7;
    v256_.v272 = v7;
    v10 = 0xEEEEEEEEEEEEEEEFLL * ((__int64)((__int64)a2 - v7) >> 3);
    v11 = v10 - 2;
    if (v10 > 2) {
      switch (v10) {
      case 3LL:
        return GmapSpotNameManager_199f1d0(v9, v9 + 120, (__int64)v241);
      case 4LL:
        return GmapSpotNameManager_199f590(v9, v9 + 120, v9 + 240,
                                           (__int64)v241);
      case 5LL:
        return GmapSpotNameManager_199f810(v9, v9 + 120, v9 + 240, v9 + 360,
                                           (__int64)v241);
      default:
        break;
      }
    }
    else {
      if ((unsigned __int64)v10 < 2) {
        return result;
      }
      v9 = v256_.v272;
      if (v10 == 2) {
        if (*((float*)a2 - 6) < *(float*)(v256_.v272 + 96)) {
          v83 = v256_.v272;
          v84 = *(_QWORD*)(v256_.v272 + 8);
          v256_.v256 = *(_QWORD*)v256_.v272;
          v256_.v257 = v84;
          if (v84 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v84 + 8), 1u,
                                      memory_order_relaxed);
          }
          v85 = *(_QWORD*)(v83 + 24);
          v256_.v258 = *(_QWORD*)(v83 + 16);
          v256_.v259 = v85;
          v86 = *(_QWORD*)(v83 + 40);
          v256_.v260 = *(_QWORD*)(v83 + 32);
          v256_.v261 = v86;
          if (v86 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v86 + 8), 1u,
                                      memory_order_relaxed);
          }
          v87 = *(_QWORD*)(v83 + 56);
          v256_.v262 = *(_QWORD*)(v83 + 48);
          v256_.v263 = v87;
          if (v87 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v87 + 8), 1u,
                                      memory_order_relaxed);
          }
          v88 = *(_DWORD*)(v83 + 64);
          v256_.v265 = *(_WORD*)(v83 + 68);
          v256_.v264 = v88;
          v89 = *(_QWORD*)(v83 + 80);
          v256_.v266 = *(_QWORD*)(v83 + 72);
          v256_.v267 = v89;
          if (v89 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v89 + 8), 1u,
                                      memory_order_relaxed);
          }
          v90 = *(_QWORD*)(v83 + 88);
          v91 = *(_QWORD*)(v83 + 96);
          v92 = *(_QWORD*)(v83 + 104);
          v256_.v271 = *(_DWORD*)(v83 + 112);
          v256_.v269 = v91;
          v256_.v270 = v92;
          v256_.v268 = v90;
          GmapSpotNameManager_199fe60(v83, v241);
          GmapSpotNameManager_199fe60((__int64)v241, &v256_.v256);
          return GmapSpotNameManager_17be200_alt1((__int64)&v256_.v256);
        }
        return result;
      }
    }
    if (v8 <= 2879) {
      break;
    }
    if (a3 == 0) {
      if ((__int64*)v9 == a2) {
        return result;
      }
      v127 = (unsigned __int64)a2;
      v128 = v11 >> 1;
      v129 = v11 >> 1;
      do {
        v130 = v129;
        if (v128 >= v129) {
          v131 = (2 * v129) | 1;
          v132 = 2 * v129 + 2;
          v133 = v256_.v272 + 120 * v131;
          if (v132 < v10 && *(float*)(v133 + 96) < *(float*)(v133 + 216)) {
            v133 += 120;
            v131 = 2 * v130 + 2;
          }
          v134 = v256_.v272 + 120 * v130;
          if (*(float*)(v133 + 96) >= *(float*)(v134 + 96)) {
            v256_.v256 = *(_QWORD*)v134;
            v135 = *(_QWORD*)(v134 + 8);
            v256_.v257 = v135;
            if (v135 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v135 + 8), 1u,
                                        memory_order_relaxed);
            }
            v136 = *(_QWORD*)(v134 + 24);
            v256_.v258 = *(_QWORD*)(v134 + 16);
            v256_.v259 = v136;
            v256_.v260 = *(_QWORD*)(v134 + 32);
            v137 = *(_QWORD*)(v134 + 40);
            v256_.v261 = v137;
            if (v137 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v137 + 8), 1u,
                                        memory_order_relaxed);
            }
            v256_.v262 = *(_QWORD*)(v134 + 48);
            v138 = *(_QWORD*)(v134 + 56);
            v256_.v263 = v138;
            if (v138 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v138 + 8), 1u,
                                        memory_order_relaxed);
            }
            v139 = *(_DWORD*)(v134 + 64);
            v256_.v265 = *(_WORD*)(v134 + 68);
            v256_.v264 = v139;
            v256_.v266 = *(_QWORD*)(v134 + 72);
            v140 = *(_QWORD*)(v134 + 80);
            v256_.v267 = v140;
            if (v140 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v140 + 8), 1u,
                                        memory_order_relaxed);
            }
            v141 = *(_QWORD*)(v134 + 88);
            v142 = *(_QWORD*)(v134 + 96);
            v143 = *(_QWORD*)(v134 + 104);
            v256_.v271 = *(_DWORD*)(v134 + 112);
            v256_.v269 = v142;
            v256_.v270 = v143;
            v256_.v268 = v141;
            v144 = *(float*)&v142;
            do {
              v145 = v133;
              GmapSpotNameManager_199fe60(v134, (__int64*)v133);
              if (v128 < v131) {
                break;
              }
              v146 = 2 * v131 + 2;
              v131 = (2 * v131) | 1;
              v133 = v256_.v272 + 120 * v131;
              if (v146 < v10 && *(float*)(v133 + 96) < *(float*)(v133 + 216)) {
                v133 += 120;
                v131 = v146;
              }
              v134 = v145;
            } while (*(float*)(v133 + 96) >= v144);
            GmapSpotNameManager_199fe60(v145, &v256_.v256);
            GmapSpotNameManager_17be200_alt1((__int64)&v256_.v256);
          }
        }
        v129 = v130 - 1;
      } while (v130 != 0);
      v147 = v127;
      v148 = 0xEEEEEEEEEEEEEEEFLL * ((unsigned __int64)v8 >> 3);
      while (1) {
        v150 = v256_.v272;
        v151 = *(_QWORD*)(v256_.v272 + 8);
        v243_.v243[0] = *(_QWORD*)v256_.v272;
        v243_.v243[1] = v151;
        if (v151 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v151 + 8), 1u,
                                    memory_order_relaxed);
        }
        v152 = *(_QWORD*)(v150 + 24);
        v243_.v243[2] = *(_QWORD*)(v150 + 16);
        v243_.v243[3] = v152;
        v153 = *(_QWORD*)(v150 + 40);
        v243_.v244 = *(_QWORD*)(v150 + 32);
        v243_.v245 = v153;
        if (v153 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v153 + 8), 1u,
                                    memory_order_relaxed);
        }
        v154 = *(_QWORD*)(v150 + 56);
        v243_.v246 = *(_QWORD*)(v150 + 48);
        v243_.v247 = v154;
        if (v154 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v154 + 8), 1u,
                                    memory_order_relaxed);
        }
        v155 = *(_DWORD*)(v150 + 64);
        v242 = v147;
        v243_.v249 = *(_WORD*)(v150 + 68);
        v243_.v248 = v155;
        v156 = *(_QWORD*)(v150 + 80);
        v243_.v250 = *(_QWORD*)(v150 + 72);
        v243_.v251 = v156;
        if (v156 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v156 + 8), 1u,
                                    memory_order_relaxed);
        }
        v157 = *(_QWORD*)(v150 + 96);
        v158 = *(_QWORD*)(v150 + 104);
        v159 = 0;
        v160 = *(_DWORD*)(v150 + 112);
        v243_.v252 = *(_QWORD*)(v150 + 88);
        v243_.v255 = v160;
        v243_.v253 = v157;
        v243_.v254 = v158;
        do {
          v164 = v150;
          v165 = v150 + 120 * v159;
          v166 = 2 * v159 + 2;
          v150 = v165 + 120;
          v159 = (2 * v159) | 1;
          if (v166 < v148 && *(float*)(v165 + 216) < *(float*)(v165 + 336)) {
            v150 = v165 + 240;
            v159 = v166;
          }
          v168 = *(_QWORD*)v150;
          v167 = *(_QWORD*)(v150 + 8);
          if (v167 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v167 + 8), 1u,
                                      memory_order_relaxed);
          }
          v169 = *(_QWORD*)(v164 + 8);
          *(_QWORD*)v164 = v168;
          *(_QWORD*)(v164 + 8) = v167;
          if (v169 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v169 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v169 + 16LL))(v169);
            std___1___shared_weak_count___release_weak_alt1(v169);
          }
          v170 = *(_QWORD*)(v150 + 24);
          *(_QWORD*)(v164 + 16) = *(_QWORD*)(v150 + 16);
          *(_QWORD*)(v164 + 24) = v170;
          v172 = *(_QWORD*)(v150 + 32);
          v171 = *(_QWORD*)(v150 + 40);
          if (v171 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v171 + 8), 1u,
                                      memory_order_relaxed);
          }
          v173 = *(_QWORD*)(v164 + 40);
          *(_QWORD*)(v164 + 32) = v172;
          *(_QWORD*)(v164 + 40) = v171;
          if (v173 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v173 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v173 + 16LL))(v173);
            std___1___shared_weak_count___release_weak_alt1(v173);
            v175 = *(_QWORD*)(v150 + 48);
            v174 = *(_QWORD*)(v150 + 56);
            if (v174 == 0) {
              goto LABEL_204;
            }
          LABEL_203:
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v174 + 8), 1u,
                                      memory_order_relaxed);
            goto LABEL_204;
          }
          v175 = *(_QWORD*)(v150 + 48);
          v174 = *(_QWORD*)(v150 + 56);
          if (v174 != 0) {
            goto LABEL_203;
          }
        LABEL_204:
          v176 = *(_QWORD*)(v164 + 56);
          *(_QWORD*)(v164 + 48) = v175;
          *(_QWORD*)(v164 + 56) = v174;
          if (v176 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v176 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v176 + 16LL))(v176);
            std___1___shared_weak_count___release_weak_alt1(v176);
          }
          v177 = *(_WORD*)(v150 + 68);
          *(_DWORD*)(v164 + 64) = *(_DWORD*)(v150 + 64);
          *(_WORD*)(v164 + 68) = v177;
          v179 = *(_QWORD*)(v150 + 72);
          v178 = *(_QWORD*)(v150 + 80);
          if (v178 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v178 + 8), 1u,
                                      memory_order_relaxed);
          }
          v180 = *(_QWORD*)(v164 + 80);
          *(_QWORD*)(v164 + 72) = v179;
          *(_QWORD*)(v164 + 80) = v178;
          if (v180 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v180 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v180 + 16LL))(v180);
            std___1___shared_weak_count___release_weak_alt1(v180);
          }
          v161 = *(_QWORD*)(v150 + 96);
          v162 = *(_QWORD*)(v150 + 104);
          v163 = *(_DWORD*)(v150 + 112);
          *(_QWORD*)(v164 + 88) = *(_QWORD*)(v150 + 88);
          *(_DWORD*)(v164 + 112) = v163;
          *(_QWORD*)(v164 + 96) = v161;
          *(_QWORD*)(v164 + 104) = v162;
        } while (v159 <= (__int64)((unsigned __int64)(v148 - 2) >> 1));
        if (v150 == v242 - 120) {
          v147 = v242 - 120;
          GmapSpotNameManager_199fe60(v150, v243_.v243);
          goto LABEL_179;
        }
        GmapSpotNameManager_199fe60(v150, (__int64*)(v242 - 120));
        v147 = v242 - 120;
        GmapSpotNameManager_199fe60(v242 - 120, v243_.v243);
        v181 = v150 - v256_.v272 + 120;
        if (v181 >= 121) {
          v182 =
              (-2LL - 0x1111111111111111LL * ((unsigned __int64)v181 >> 3)) >>
              1;
          v183 = v256_.v272 + 120 * v182;
          if (*(float*)(v183 + 96) < *(float*)(v150 + 96)) {
            v184 = *(_QWORD*)(v150 + 8);
            v256_.v256 = *(_QWORD*)v150;
            v256_.v257 = v184;
            if (v184 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v184 + 8), 1u,
                                        memory_order_relaxed);
            }
            v185 = *(_QWORD*)(v150 + 24);
            v256_.v258 = *(_QWORD*)(v150 + 16);
            v256_.v259 = v185;
            v186 = *(_QWORD*)(v150 + 40);
            v256_.v260 = *(_QWORD*)(v150 + 32);
            v256_.v261 = v186;
            if (v186 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v186 + 8), 1u,
                                        memory_order_relaxed);
            }
            v187 = *(_QWORD*)(v150 + 56);
            v256_.v262 = *(_QWORD*)(v150 + 48);
            v256_.v263 = v187;
            if (v187 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v187 + 8), 1u,
                                        memory_order_relaxed);
            }
            v188 = *(_DWORD*)(v150 + 64);
            v256_.v265 = *(_WORD*)(v150 + 68);
            v256_.v264 = v188;
            v189 = *(_QWORD*)(v150 + 80);
            v256_.v266 = *(_QWORD*)(v150 + 72);
            v256_.v267 = v189;
            if (v189 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v189 + 8), 1u,
                                        memory_order_relaxed);
            }
            v190 = *(_QWORD*)(v150 + 88);
            v191 = *(_QWORD*)(v150 + 96);
            v192 = *(_QWORD*)(v150 + 104);
            v256_.v271 = *(_DWORD*)(v150 + 112);
            v256_.v269 = v191;
            v256_.v270 = v192;
            v256_.v268 = v190;
            v193 = *(float*)&v191;
            while (1) {
              v194 = v183;
              v196 = *(_QWORD*)v183;
              v195 = *(_QWORD*)(v183 + 8);
              if (v195 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v195 + 8),
                                          1u, memory_order_relaxed);
              }
              v197 = *(_QWORD*)(v150 + 8);
              *(_QWORD*)v150 = v196;
              *(_QWORD*)(v150 + 8) = v195;
              if (v197 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v197 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v197 + 16LL))(v197);
                std___1___shared_weak_count___release_weak_alt1(v197);
              }
              v198 = *(_QWORD*)(v194 + 24);
              *(_QWORD*)(v150 + 16) = *(_QWORD*)(v194 + 16);
              *(_QWORD*)(v150 + 24) = v198;
              v200 = *(_QWORD*)(v194 + 32);
              v199 = *(_QWORD*)(v194 + 40);
              if (v199 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v199 + 8),
                                          1u, memory_order_relaxed);
              }
              v201 = *(_QWORD*)(v150 + 40);
              *(_QWORD*)(v150 + 32) = v200;
              *(_QWORD*)(v150 + 40) = v199;
              if (v201 == 0 ||
                  atomic_fetch_add((atomic_ullong* volatile)(v201 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0) {
                break;
              }
              (*(void (**)(__int64))(*(_QWORD*)v201 + 16LL))(v201);
              std___1___shared_weak_count___release_weak_alt1(v201);
              v203 = *(_QWORD*)(v194 + 48);
              v202 = *(_QWORD*)(v194 + 56);
              if (v202 != 0) {
                goto LABEL_236;
              }
            LABEL_237:
              v204 = *(_QWORD*)(v150 + 56);
              *(_QWORD*)(v150 + 48) = v203;
              *(_QWORD*)(v150 + 56) = v202;
              if (v204 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v204 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v204 + 16LL))(v204);
                std___1___shared_weak_count___release_weak_alt1(v204);
              }
              v205 = *(_DWORD*)(v194 + 64);
              *(_WORD*)(v150 + 68) = *(_WORD*)(v194 + 68);
              *(_DWORD*)(v150 + 64) = v205;
              v207 = *(_QWORD*)(v194 + 72);
              v206 = *(_QWORD*)(v194 + 80);
              if (v206 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v206 + 8),
                                          1u, memory_order_relaxed);
              }
              v208 = *(_QWORD*)(v150 + 80);
              *(_QWORD*)(v150 + 72) = v207;
              *(_QWORD*)(v150 + 80) = v206;
              if (v208 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v208 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v208 + 16LL))(v208);
                std___1___shared_weak_count___release_weak_alt1(v208);
              }
              v209 = *(_QWORD*)(v194 + 88);
              v210 = *(_QWORD*)(v194 + 96);
              v211 = *(_QWORD*)(v194 + 104);
              *(_DWORD*)(v150 + 112) = *(_DWORD*)(v194 + 112);
              *(_QWORD*)(v150 + 96) = v210;
              *(_QWORD*)(v150 + 104) = v211;
              *(_QWORD*)(v150 + 88) = v209;
              if (v182 != 0) {
                v150 = v194;
                v182 = (v182 - 1) >> 1;
                v183 = v256_.v272 + 120 * v182;
                if (*(float*)(v183 + 96) < v193) {
                  continue;
                }
              }
              GmapSpotNameManager_199fe60(v194, &v256_.v256);
              GmapSpotNameManager_17be200_alt1((__int64)&v256_.v256);
              goto LABEL_179;
            }
            v203 = *(_QWORD*)(v194 + 48);
            v202 = *(_QWORD*)(v194 + 56);
            if (v202 == 0) {
              goto LABEL_237;
            }
          LABEL_236:
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v202 + 8), 1u,
                                      memory_order_relaxed);
            goto LABEL_237;
          }
        }
      LABEL_179:
        result = GmapSpotNameManager_17be200_alt1((__int64)v243_.v243);
        if (v148-- <= 2) {
          return result;
        }
      }
    }
    v12 = (__int64*)(v9 + 120 * ((unsigned __int64)v10 >> 1));
    if ((unsigned __int64)v8 < 0x3C01) {
      GmapSpotNameManager_199f1d0((__int64)v12, v9, (__int64)v241);
      --a3;
      if ((a4 & 1) != 0) {
        goto LABEL_25;
      }
    LABEL_24:
      if (*(float*)(v9 - 24) < *(float*)(v9 + 96)) {
        goto LABEL_25;
      }
      v56 = *(_QWORD*)(v9 + 8);
      v243_.v243[0] = *(_QWORD*)v9;
      v243_.v243[1] = v56;
      if (v56 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v56 + 8), 1u,
                                  memory_order_relaxed);
      }
      v57 = *(_QWORD*)(v9 + 24);
      v243_.v243[2] = *(_QWORD*)(v9 + 16);
      v243_.v243[3] = v57;
      v58 = *(_QWORD*)(v9 + 40);
      v243_.v244 = *(_QWORD*)(v9 + 32);
      v243_.v245 = v58;
      if (v58 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v58 + 8), 1u,
                                  memory_order_relaxed);
      }
      v59 = *(_QWORD*)(v9 + 56);
      v243_.v246 = *(_QWORD*)(v9 + 48);
      v243_.v247 = v59;
      if (v59 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v59 + 8), 1u,
                                  memory_order_relaxed);
      }
      v60 = *(_DWORD*)(v9 + 64);
      v243_.v249 = *(_WORD*)(v9 + 68);
      v243_.v248 = v60;
      v61 = *(_QWORD*)(v9 + 80);
      v243_.v250 = *(_QWORD*)(v9 + 72);
      v243_.v251 = v61;
      if (v61 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v61 + 8), 1u,
                                  memory_order_relaxed);
      }
      v62 = *(_QWORD*)(v9 + 88);
      v63 = *(_QWORD*)(v9 + 96);
      v64 = *(_QWORD*)(v9 + 104);
      v243_.v255 = *(_DWORD*)(v9 + 112);
      v243_.v253 = v63;
      v243_.v254 = v64;
      v243_.v252 = v62;
      if (*(float*)&v63 >= *((float*)a2 - 6)) {
        v67 = v9 + 120;
        do {
          v7 = v67;
          if (v67 >= (unsigned __int64)a2) {
            break;
          }
          v68 = *(float*)(v67 + 96);
          v67 += 120LL;
        } while (*(float*)&v243_.v253 >= v68);
      }
      else {
        v65 = v9;
        do {
          v66 = *(float*)(v65 + 216);
          v7 = v65 + 120;
          v65 += 120;
        } while (*(float*)&v243_.v253 >= v66);
      }
      v69 = a2;
      if (v7 < (unsigned __int64)a2) {
        v70 = (unsigned __int64)a2;
        do {
          v71 = *(float*)(v70 - 24);
          v69 = (__int64*)(v70 - 120);
          v70 -= 120LL;
        } while (*(float*)&v243_.v253 < v71);
      }
      while (v7 < (unsigned __int64)v69) {
        v72 = *(_QWORD*)(v7 + 8);
        v256_.v256 = *(_QWORD*)v7;
        v256_.v257 = v72;
        if (v72 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v72 + 8), 1u,
                                    memory_order_relaxed);
        }
        v73 = *(_QWORD*)(v7 + 24);
        v256_.v258 = *(_QWORD*)(v7 + 16);
        v256_.v259 = v73;
        v74 = *(_QWORD*)(v7 + 40);
        v256_.v260 = *(_QWORD*)(v7 + 32);
        v256_.v261 = v74;
        if (v74 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v74 + 8), 1u,
                                    memory_order_relaxed);
        }
        v75 = *(_QWORD*)(v7 + 56);
        v256_.v262 = *(_QWORD*)(v7 + 48);
        v256_.v263 = v75;
        if (v75 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v75 + 8), 1u,
                                    memory_order_relaxed);
        }
        v76 = *(_DWORD*)(v7 + 64);
        v256_.v265 = *(_WORD*)(v7 + 68);
        v256_.v264 = v76;
        v77 = *(_QWORD*)(v7 + 80);
        v256_.v266 = *(_QWORD*)(v7 + 72);
        v256_.v267 = v77;
        if (v77 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v77 + 8), 1u,
                                    memory_order_relaxed);
        }
        v78 = *(_QWORD*)(v7 + 88);
        v79 = *(_QWORD*)(v7 + 96);
        v80 = *(_QWORD*)(v7 + 104);
        v256_.v271 = *(_DWORD*)(v7 + 112);
        v256_.v269 = v79;
        v256_.v270 = v80;
        v256_.v268 = v78;
        GmapSpotNameManager_199fe60(v7, v69);
        GmapSpotNameManager_199fe60((__int64)v69, &v256_.v256);
        GmapSpotNameManager_17be200_alt1((__int64)&v256_.v256);
        do {
          v81 = *(float*)(v7 + 216);
          v7 += 120LL;
        } while (*(float*)&v243_.v253 >= v81);
        do {
          v82 = *((float*)v69 - 6);
          v69 -= 15;
        } while (*(float*)&v243_.v253 < v82);
      }
      if (v9 != v7 - 120) {
        GmapSpotNameManager_199fe60(v9, (__int64*)(v7 - 120));
      }
      GmapSpotNameManager_199fe60(v7 - 120, v243_.v243);
      result = GmapSpotNameManager_17be200_alt1((__int64)v243_.v243);
      a4 = 0;
    }
    else {
      GmapSpotNameManager_199f1d0(v9, (__int64)v12, (__int64)v241);
      GmapSpotNameManager_199f1d0(v9 + 120, (__int64)(v12 - 15), v240);
      GmapSpotNameManager_199f1d0(v9 + 240, (__int64)(v12 + 15), v239);
      GmapSpotNameManager_199f1d0((__int64)(v12 - 15), (__int64)v12,
                                  (__int64)(v12 + 15));
      v13 = *(_QWORD*)(v9 + 8);
      v256_.v256 = *(_QWORD*)v9;
      v256_.v257 = v13;
      if (v13 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                  memory_order_relaxed);
      }
      v14 = *(_QWORD*)(v9 + 24);
      v256_.v258 = *(_QWORD*)(v9 + 16);
      v256_.v259 = v14;
      v15 = *(_QWORD*)(v9 + 40);
      v256_.v260 = *(_QWORD*)(v9 + 32);
      v256_.v261 = v15;
      if (v15 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                  memory_order_relaxed);
      }
      v16 = *(_QWORD*)(v9 + 56);
      v256_.v262 = *(_QWORD*)(v9 + 48);
      v256_.v263 = v16;
      if (v16 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                                  memory_order_relaxed);
      }
      v17 = *(_DWORD*)(v9 + 64);
      v256_.v265 = *(_WORD*)(v9 + 68);
      v256_.v264 = v17;
      v18 = *(_QWORD*)(v9 + 80);
      v256_.v266 = *(_QWORD*)(v9 + 72);
      v256_.v267 = v18;
      if (v18 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                  memory_order_relaxed);
      }
      v19 = *(_QWORD*)(v9 + 88);
      v20 = *(_QWORD*)(v9 + 96);
      v21 = *(_QWORD*)(v9 + 104);
      v256_.v271 = *(_DWORD*)(v9 + 112);
      v256_.v269 = v20;
      v256_.v270 = v21;
      v256_.v268 = v19;
      GmapSpotNameManager_199fe60(v9, v12);
      GmapSpotNameManager_199fe60((__int64)v12, &v256_.v256);
      GmapSpotNameManager_17be200_alt1((__int64)&v256_.v256);
      --a3;
      if ((a4 & 1) == 0) {
        goto LABEL_24;
      }
    LABEL_25:
      v22 = *(_QWORD*)(v9 + 8);
      v243_.v243[0] = *(_QWORD*)v9;
      v243_.v243[1] = v22;
      if (v22 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                                  memory_order_relaxed);
      }
      v23 = *(_QWORD*)(v9 + 24);
      v243_.v243[2] = *(_QWORD*)(v9 + 16);
      v243_.v243[3] = v23;
      v24 = *(_QWORD*)(v9 + 40);
      v243_.v244 = *(_QWORD*)(v9 + 32);
      v243_.v245 = v24;
      if (v24 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 8), 1u,
                                  memory_order_relaxed);
      }
      v25 = *(_QWORD*)(v9 + 56);
      v243_.v246 = *(_QWORD*)(v9 + 48);
      v243_.v247 = v25;
      if (v25 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                                  memory_order_relaxed);
      }
      v26 = *(_DWORD*)(v9 + 64);
      v243_.v249 = *(_WORD*)(v9 + 68);
      v243_.v248 = v26;
      v27 = *(_QWORD*)(v9 + 80);
      v243_.v250 = *(_QWORD*)(v9 + 72);
      v243_.v251 = v27;
      if (v27 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 8), 1u,
                                  memory_order_relaxed);
      }
      v28 = *(_QWORD*)(v9 + 88);
      v29 = *(_QWORD*)(v9 + 96);
      v30 = *(_QWORD*)(v9 + 104);
      v31 = 0;
      v243_.v255 = *(_DWORD*)(v9 + 112);
      v243_.v253 = v29;
      v243_.v254 = v30;
      v243_.v252 = v28;
      do {
        v32 = v9 + v31;
        v31 += 120;
      } while (*(float*)(v32 + 216) < *(float*)&v243_.v253);
      v33 = v9 + v31;
      v34 = (unsigned __int64)a2;
      v35 = (unsigned __int64)a2;
      if (v31 == 120) {
        v38 = (unsigned __int64)a2;
        while (v33 < v38) {
          v39 = *(float*)(v38 - 24);
          v37 = (__int64*)(v38 - 120);
          v38 -= 120LL;
          if (v39 < *(float*)&v243_.v253) {
            goto LABEL_41;
          }
        }
        v37 = (__int64*)v38;
      LABEL_57:
        v53 = (__int64*)(v33 - 120);
        goto LABEL_58;
      }
      do {
        v36 = *(float*)(v35 - 24);
        v37 = (__int64*)(v35 - 120);
        v35 -= 120LL;
      } while (v36 >= *(float*)&v243_.v253);
    LABEL_41:
      if (v33 >= (unsigned __int64)v37) {
        goto LABEL_57;
      }
      v40 = v33;
      v41 = v37;
      do {
        v42 = *(_QWORD*)(v40 + 8);
        v256_.v256 = *(_QWORD*)v40;
        v256_.v257 = v42;
        if (v42 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v42 + 8), 1u,
                                    memory_order_relaxed);
        }
        v43 = *(_QWORD*)(v40 + 24);
        v256_.v258 = *(_QWORD*)(v40 + 16);
        v256_.v259 = v43;
        v44 = *(_QWORD*)(v40 + 40);
        v256_.v260 = *(_QWORD*)(v40 + 32);
        v256_.v261 = v44;
        if (v44 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v44 + 8), 1u,
                                    memory_order_relaxed);
        }
        v45 = *(_QWORD*)(v40 + 56);
        v256_.v262 = *(_QWORD*)(v40 + 48);
        v256_.v263 = v45;
        if (v45 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 8), 1u,
                                    memory_order_relaxed);
        }
        v46 = *(_DWORD*)(v40 + 64);
        v256_.v265 = *(_WORD*)(v40 + 68);
        v256_.v264 = v46;
        v47 = *(_QWORD*)(v40 + 80);
        v256_.v266 = *(_QWORD*)(v40 + 72);
        v256_.v267 = v47;
        if (v47 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v47 + 8), 1u,
                                    memory_order_relaxed);
        }
        v48 = *(_QWORD*)(v40 + 88);
        v49 = *(_QWORD*)(v40 + 96);
        v50 = *(_QWORD*)(v40 + 104);
        v256_.v271 = *(_DWORD*)(v40 + 112);
        v256_.v269 = v49;
        v256_.v270 = v50;
        v256_.v268 = v48;
        GmapSpotNameManager_199fe60(v40, v41);
        GmapSpotNameManager_199fe60((__int64)v41, &v256_.v256);
        GmapSpotNameManager_17be200_alt1((__int64)&v256_.v256);
        do {
          v51 = *(float*)(v40 + 216);
          v40 += 120LL;
        } while (v51 < *(float*)&v243_.v253);
        do {
          v52 = *((float*)v41 - 6);
          v41 -= 15;
        } while (v52 >= *(float*)&v243_.v253);
      } while (v40 < (unsigned __int64)v41);
      v53 = (__int64*)(v40 - 120);
    LABEL_58:
      if ((__int64*)v256_.v272 != v53) {
        GmapSpotNameManager_199fe60(v256_.v272, v53);
      }
      GmapSpotNameManager_199fe60((__int64)v53, v243_.v243);
      GmapSpotNameManager_17be200_alt1((__int64)v243_.v243);
      v54 = v33 >= (unsigned __int64)v37;
      a2 = (__int64*)v34;
      if (v54) {
        v7 = (unsigned __int64)(v53 + 15);
        v55 = GmapSpotNameManager_199fb60(v256_.v272, (__int64)v53);
        result = GmapSpotNameManager_199fb60((__int64)(v53 + 15), (__int64)a2);
        if ((result & 1) != 0) {
          a2 = v53;
          if (v55) {
            return result;
          }
          goto LABEL_2;
        }
        if (!v55) {
          goto LABEL_64;
        }
      }
      else {
      LABEL_64:
        result = GmapSpotNameManager_199de80(v256_.v272, (unsigned __int64)v53,
                                             a3, a4 & 1);
        a4 = 0;
        v7 = (unsigned __int64)(v53 + 15);
      }
    }
  }
  if ((a4 & 1) == 0) {
    if ((__int64*)v9 == a2) {
      return result;
    }
    v212 = (__int64*)(v256_.v272 + 120);
    if ((__int64*)(v256_.v272 + 120) == a2) {
      return result;
    }
    while (1) {
      v213 = v256_.v272;
      v214 = v212;
      if (*(float*)(v256_.v272 + 216) < *(float*)(v256_.v272 + 96)) {
        break;
      }
    LABEL_255:
      v212 = v214 + 15;
      v256_.v272 = (__int64)v214;
      if (v214 + 15 == a2) {
        return result;
      }
    }
    v215 = *(_QWORD*)(v256_.v272 + 128);
    v256_.v256 = *v214;
    v256_.v257 = v215;
    if (v215 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v215 + 8), 1u,
                                memory_order_relaxed);
    }
    v216 = *(_QWORD*)(v213 + 144);
    v256_.v258 = *(_QWORD*)(v213 + 136);
    v256_.v259 = v216;
    v217 = *(_QWORD*)(v213 + 160);
    v256_.v260 = *(_QWORD*)(v213 + 152);
    v256_.v261 = v217;
    if (v217 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v217 + 8), 1u,
                                memory_order_relaxed);
    }
    v218 = *(_QWORD*)(v213 + 176);
    v256_.v262 = *(_QWORD*)(v213 + 168);
    v256_.v263 = v218;
    if (v218 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v218 + 8), 1u,
                                memory_order_relaxed);
    }
    v219 = (unsigned __int64)a2;
    v256_.v264 = *(_DWORD*)(v213 + 184);
    v256_.v265 = *(_WORD*)(v213 + 188);
    v220 = *(_QWORD*)(v213 + 200);
    v256_.v266 = *(_QWORD*)(v213 + 192);
    v256_.v267 = v220;
    if (v220 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v220 + 8), 1u,
                                memory_order_relaxed);
    }
    v221 = *(_QWORD*)(v213 + 216);
    v222 = (__int64)v214;
    v256_.v268 = *(_QWORD*)(v213 + 208);
    v256_.v269 = v221;
    v256_.v270 = *(_QWORD*)(v213 + 224);
    v256_.v271 = *(_DWORD*)(v213 + 232);
    while (1) {
      v226 = *(_QWORD*)(v222 - 120);
      v225 = *(_QWORD*)(v222 - 112);
      v227 = v222 - 120;
      if (v225 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v225 + 8), 1u,
                                  memory_order_relaxed);
      }
      v228 = *(_QWORD*)(v222 + 8);
      *(_QWORD*)v222 = v226;
      *(_QWORD*)(v222 + 8) = v225;
      if (v228 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v228 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v228 + 16LL))(v228);
        std___1___shared_weak_count___release_weak_alt1(v228);
      }
      v229 = *(_QWORD*)(v222 - 96);
      *(_QWORD*)(v222 + 16) = *(_QWORD*)(v222 - 104);
      *(_QWORD*)(v222 + 24) = v229;
      v231 = *(_QWORD*)(v222 - 88);
      v230 = *(_QWORD*)(v222 - 80);
      if (v230 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v230 + 8), 1u,
                                  memory_order_relaxed);
      }
      v232 = *(_QWORD*)(v222 + 40);
      *(_QWORD*)(v222 + 32) = v231;
      *(_QWORD*)(v222 + 40) = v230;
      if (v232 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v232 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) != 0) {
        break;
      }
      (*(void (**)(__int64))(*(_QWORD*)v232 + 16LL))(v232);
      std___1___shared_weak_count___release_weak_alt1(v232);
      v234 = *(_QWORD*)(v222 - 72);
      v233 = *(_QWORD*)(v222 - 64);
      if (v233 != 0) {
        goto LABEL_277;
      }
    LABEL_278:
      v235 = *(_QWORD*)(v222 + 56);
      *(_QWORD*)(v222 + 48) = v234;
      *(_QWORD*)(v222 + 56) = v233;
      if (v235 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v235 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v235 + 16LL))(v235);
        std___1___shared_weak_count___release_weak_alt1(v235);
      }
      *(_DWORD*)(v222 + 64) = *(_DWORD*)(v222 - 56);
      *(_WORD*)(v222 + 68) = *(_WORD*)(v222 - 52);
      v237 = *(_QWORD*)(v222 - 48);
      v236 = *(_QWORD*)(v222 - 40);
      if (v236 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v236 + 8), 1u,
                                  memory_order_relaxed);
      }
      v238 = *(_QWORD*)(v222 + 80);
      *(_QWORD*)(v222 + 72) = v237;
      *(_QWORD*)(v222 + 80) = v236;
      if (v238 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v238 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v238 + 16LL))(v238);
        std___1___shared_weak_count___release_weak_alt1(v238);
      }
      v223 = *(_QWORD*)(v222 - 24);
      v224 = *(float*)(v222 - 144);
      v222 -= 120;
      *(_QWORD*)(v227 + 208) = *(_QWORD*)(v227 + 88);
      *(_QWORD*)(v227 + 216) = v223;
      *(_QWORD*)(v227 + 224) = *(_QWORD*)(v227 + 104);
      *(_DWORD*)(v227 + 232) = *(_DWORD*)(v227 + 112);
      if (*(float*)&v256_.v269 >= v224) {
        GmapSpotNameManager_199fe60(v222, &v256_.v256);
        result = GmapSpotNameManager_17be200_alt1((__int64)&v256_.v256);
        a2 = (__int64*)v219;
        goto LABEL_255;
      }
    }
    v234 = *(_QWORD*)(v222 - 72);
    v233 = *(_QWORD*)(v222 - 64);
    if (v233 == 0) {
      goto LABEL_278;
    }
  LABEL_277:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v233 + 8), 1u,
                              memory_order_relaxed);
    goto LABEL_278;
  }
  if ((__int64*)v9 != a2) {
    v93 = (__int64*)(v256_.v272 + 120);
    if ((__int64*)(v256_.v272 + 120) != a2) {
      v94 = v256_.v272;
      v95 = v256_.v272;
      v96 = 0;
      do {
        v98 = v93;
        if (*(float*)(v94 + 216) < *(float*)(v94 + 96)) {
          v99 = *(_QWORD*)(v94 + 128);
          v256_.v256 = *v98;
          v256_.v257 = v99;
          if (v99 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v99 + 8), 1u,
                                      memory_order_relaxed);
          }
          v100 = *(_QWORD*)(v94 + 144);
          v256_.v258 = *(_QWORD*)(v94 + 136);
          v256_.v259 = v100;
          v101 = *(_QWORD*)(v94 + 160);
          v256_.v260 = *(_QWORD*)(v94 + 152);
          v256_.v261 = v101;
          if (v101 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v101 + 8), 1u,
                                      memory_order_relaxed);
          }
          v102 = *(_QWORD*)(v94 + 176);
          v256_.v262 = *(_QWORD*)(v94 + 168);
          v256_.v263 = v102;
          if (v102 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v102 + 8), 1u,
                                      memory_order_relaxed);
          }
          v256_.v264 = *(_DWORD*)(v94 + 184);
          v256_.v265 = *(_WORD*)(v94 + 188);
          v103 = *(_QWORD*)(v94 + 200);
          v256_.v266 = *(_QWORD*)(v94 + 192);
          v256_.v267 = v103;
          if (v103 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v103 + 8), 1u,
                                      memory_order_relaxed);
          }
          v104 = *(_QWORD*)(v94 + 216);
          v105 = v96;
          v256_.v268 = *(_QWORD*)(v94 + 208);
          v256_.v269 = v104;
          v106 = *(_QWORD*)(v94 + 224);
          v107 = *(_DWORD*)(v94 + 232);
          v256_.v270 = v106;
          v256_.v271 = v107;
          do {
            v108 = v95 + v105;
            v110 = *(_QWORD*)(v95 + v105);
            v109 = *(_QWORD*)(v95 + v105 + 8);
            if (v109 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v109 + 8), 1u,
                                        memory_order_relaxed);
            }
            v111 = *(_QWORD*)(v108 + 128);
            *(_QWORD*)(v108 + 120) = v110;
            *(_QWORD*)(v108 + 128) = v109;
            if (v111 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v111 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v111 + 16LL))(v111);
              std___1___shared_weak_count___release_weak_alt1(v111);
            }
            v112 = (_QWORD*)(v95 + v105);
            v113 = *(_QWORD*)(v95 + v105 + 24);
            v112[17] = *(_QWORD*)(v95 + v105 + 16);
            v112[18] = v113;
            v115 = *(_QWORD*)(v95 + v105 + 32);
            v114 = *(_QWORD*)(v95 + v105 + 40);
            if (v114 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v114 + 8), 1u,
                                        memory_order_relaxed);
            }
            v116 = v112[20];
            v112[19] = v115;
            v112[20] = v114;
            if (v116 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v116 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v116 + 16LL))(v116);
              std___1___shared_weak_count___release_weak_alt1(v116);
            }
            v117 = v95 + v105;
            v119 = *(_QWORD*)(v95 + v105 + 48);
            v118 = *(_QWORD*)(v95 + v105 + 56);
            if (v118 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v118 + 8), 1u,
                                        memory_order_relaxed);
            }
            v120 = *(_QWORD*)(v117 + 176);
            *(_QWORD*)(v117 + 168) = v119;
            *(_QWORD*)(v117 + 176) = v118;
            if (v120 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v120 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v120 + 16LL))(v120);
              std___1___shared_weak_count___release_weak_alt1(v120);
            }
            v121 = v95 + v105;
            *(_DWORD*)(v121 + 184) = *(_DWORD*)(v95 + v105 + 64);
            *(_WORD*)(v121 + 188) = *(_WORD*)(v95 + v105 + 68);
            v123 = *(_QWORD*)(v95 + v105 + 72);
            v122 = *(_QWORD*)(v95 + v105 + 80);
            if (v122 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v122 + 8), 1u,
                                        memory_order_relaxed);
            }
            v124 = *(_QWORD*)(v121 + 200);
            *(_QWORD*)(v121 + 192) = v123;
            *(_QWORD*)(v121 + 200) = v122;
            if (v124 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v124 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v124 + 16LL))(v124);
              std___1___shared_weak_count___release_weak_alt1(v124);
            }
            v125 = v95 + v105;
            v126 = *(_QWORD*)(v95 + v105 + 96);
            *(_QWORD*)(v125 + 208) = *(_QWORD*)(v95 + v105 + 88);
            *(_QWORD*)(v125 + 216) = v126;
            *(_QWORD*)(v125 + 224) = *(_QWORD*)(v95 + v105 + 104);
            *(_DWORD*)(v125 + 232) = *(_DWORD*)(v95 + v105 + 112);
            if (v105 == 0) {
              v97 = v95;
              goto LABEL_119;
            }
            v105 -= 120;
          } while (*(float*)&v256_.v269 < *(float*)(v125 - 24));
          v97 = v95 + v105 + 120;
        LABEL_119:
          GmapSpotNameManager_199fe60(v97, &v256_.v256);
          result = GmapSpotNameManager_17be200_alt1((__int64)&v256_.v256);
        }
        v93 = v98 + 15;
        v96 += 120;
        v94 = (__int64)v98;
      } while (v98 + 15 != a2);
    }
  }
  return result;
}

__int64 GmapSpotNameManager_199f1d0(__int64 result, __int64 a2, __int64 a3)
{

#pragma clang fp contract(off)
  float v3;
  float v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
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
  struct {
    __int64 v40[2];
    __int64 v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
    __int64 v46;
    int v47;
    __int16 v48;
    char gap78_[2];
    __int64 v49;
    __int64 v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    int v54;
  } v40_;

  v3 = *(float*)(a2 + 96);
  v4 = *(float*)(a3 + 96);
  if (v3 >= *(float*)(result + 96)) {
    if (v4 < v3) {
      v14 = *(_QWORD*)(a2 + 8);
      v40_.v40[0] = *(_QWORD*)a2;
      v40_.v40[1] = v14;
      if (v14 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                  memory_order_relaxed);
      }
      v15 = *(_QWORD*)(a2 + 24);
      v40_.v41 = *(_QWORD*)(a2 + 16);
      v40_.v42 = v15;
      v16 = *(_QWORD*)(a2 + 40);
      v40_.v43 = *(_QWORD*)(a2 + 32);
      v40_.v44 = v16;
      if (v16 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                                  memory_order_relaxed);
      }
      v17 = *(_QWORD*)(a2 + 56);
      v40_.v45 = *(_QWORD*)(a2 + 48);
      v40_.v46 = v17;
      if (v17 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                                  memory_order_relaxed);
      }
      v18 = result;
      v40_.v47 = *(_DWORD*)(a2 + 64);
      v40_.v48 = *(_WORD*)(a2 + 68);
      v19 = *(_QWORD*)(a2 + 80);
      v40_.v49 = *(_QWORD*)(a2 + 72);
      v40_.v50 = v19;
      if (v19 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                  memory_order_relaxed);
      }
      v20 = *(_QWORD*)(a2 + 96);
      v40_.v51 = *(_QWORD*)(a2 + 88);
      v40_.v52 = v20;
      v40_.v53 = *(_QWORD*)(a2 + 104);
      v40_.v54 = *(_DWORD*)(a2 + 112);
      GmapSpotNameManager_199fe60(a2, (__int64*)a3);
      GmapSpotNameManager_199fe60(a3, v40_.v40);
      result = GmapSpotNameManager_17be200_alt1((__int64)v40_.v40);
      if (*(float*)(a2 + 96) < *(float*)(v18 + 96)) {
        v21 = *(_QWORD*)(v18 + 8);
        v40_.v40[0] = *(_QWORD*)v18;
        v40_.v40[1] = v21;
        if (v21 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                                    memory_order_relaxed);
        }
        v22 = *(_QWORD*)(v18 + 24);
        v40_.v41 = *(_QWORD*)(v18 + 16);
        v40_.v42 = v22;
        v23 = *(_QWORD*)(v18 + 40);
        v40_.v43 = *(_QWORD*)(v18 + 32);
        v40_.v44 = v23;
        if (v23 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8), 1u,
                                    memory_order_relaxed);
        }
        v24 = *(_QWORD*)(v18 + 56);
        v40_.v45 = *(_QWORD*)(v18 + 48);
        v40_.v46 = v24;
        if (v24 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 8), 1u,
                                    memory_order_relaxed);
        }
        v40_.v47 = *(_DWORD*)(v18 + 64);
        v40_.v48 = *(_WORD*)(v18 + 68);
        v25 = *(_QWORD*)(v18 + 80);
        v40_.v49 = *(_QWORD*)(v18 + 72);
        v40_.v50 = v25;
        if (v25 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                                    memory_order_relaxed);
        }
        v26 = *(_QWORD*)(v18 + 96);
        v40_.v51 = *(_QWORD*)(v18 + 88);
        v40_.v52 = v26;
        v40_.v53 = *(_QWORD*)(v18 + 104);
        v40_.v54 = *(_DWORD*)(v18 + 112);
        GmapSpotNameManager_199fe60(v18, (__int64*)a2);
        v27 = a2;
        goto LABEL_50;
      }
    }
  }
  else {
    if (v4 < v3) {
      v7 = *(_QWORD*)(result + 8);
      v40_.v40[0] = *(_QWORD*)result;
      v40_.v40[1] = v7;
      if (v7 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                  memory_order_relaxed);
      }
      v8 = *(_QWORD*)(result + 24);
      v40_.v41 = *(_QWORD*)(result + 16);
      v40_.v42 = v8;
      v9 = *(_QWORD*)(result + 40);
      v40_.v43 = *(_QWORD*)(result + 32);
      v40_.v44 = v9;
      if (v9 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                  memory_order_relaxed);
      }
      v10 = *(_QWORD*)(result + 56);
      v40_.v45 = *(_QWORD*)(result + 48);
      v40_.v46 = v10;
      if (v10 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                  memory_order_relaxed);
      }
      v40_.v47 = *(_DWORD*)(result + 64);
      v40_.v48 = *(_WORD*)(result + 68);
      v11 = *(_QWORD*)(result + 80);
      v40_.v49 = *(_QWORD*)(result + 72);
      v40_.v50 = v11;
      if (v11 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
      }
      v12 = *(_QWORD*)(result + 96);
      v40_.v51 = *(_QWORD*)(result + 88);
      v40_.v52 = v12;
      v40_.v53 = *(_QWORD*)(result + 104);
      v13 = *(_DWORD*)(result + 112);
    LABEL_49:
      v40_.v54 = v13;
      GmapSpotNameManager_199fe60(result, (__int64*)a3);
      v27 = a3;
    LABEL_50:
      GmapSpotNameManager_199fe60(v27, v40_.v40);
      return GmapSpotNameManager_17be200_alt1((__int64)v40_.v40);
    }
    v28 = *(_QWORD*)(result + 8);
    v40_.v40[0] = *(_QWORD*)result;
    v40_.v40[1] = v28;
    if (v28 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 8), 1u,
                                memory_order_relaxed);
    }
    v29 = *(_QWORD*)(result + 24);
    v40_.v41 = *(_QWORD*)(result + 16);
    v40_.v42 = v29;
    v30 = *(_QWORD*)(result + 40);
    v40_.v43 = *(_QWORD*)(result + 32);
    v40_.v44 = v30;
    if (v30 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 8), 1u,
                                memory_order_relaxed);
    }
    v31 = *(_QWORD*)(result + 56);
    v40_.v45 = *(_QWORD*)(result + 48);
    v40_.v46 = v31;
    if (v31 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 8), 1u,
                                memory_order_relaxed);
    }
    v40_.v47 = *(_DWORD*)(result + 64);
    v40_.v48 = *(_WORD*)(result + 68);
    v32 = *(_QWORD*)(result + 80);
    v40_.v49 = *(_QWORD*)(result + 72);
    v40_.v50 = v32;
    if (v32 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 8), 1u,
                                memory_order_relaxed);
    }
    v33 = *(_QWORD*)(result + 96);
    v40_.v51 = *(_QWORD*)(result + 88);
    v40_.v52 = v33;
    v40_.v53 = *(_QWORD*)(result + 104);
    v40_.v54 = *(_DWORD*)(result + 112);
    GmapSpotNameManager_199fe60(result, (__int64*)a2);
    GmapSpotNameManager_199fe60(a2, v40_.v40);
    result = GmapSpotNameManager_17be200_alt1((__int64)v40_.v40);
    if (*(float*)(a3 + 96) < *(float*)(a2 + 96)) {
      v34 = *(_QWORD*)(a2 + 8);
      v40_.v40[0] = *(_QWORD*)a2;
      v40_.v40[1] = v34;
      if (v34 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 8), 1u,
                                  memory_order_relaxed);
      }
      v35 = *(_QWORD*)(a2 + 24);
      v40_.v41 = *(_QWORD*)(a2 + 16);
      v40_.v42 = v35;
      v36 = *(_QWORD*)(a2 + 40);
      v40_.v43 = *(_QWORD*)(a2 + 32);
      v40_.v44 = v36;
      if (v36 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 8), 1u,
                                  memory_order_relaxed);
      }
      v37 = *(_QWORD*)(a2 + 56);
      v40_.v45 = *(_QWORD*)(a2 + 48);
      v40_.v46 = v37;
      if (v37 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 8), 1u,
                                  memory_order_relaxed);
      }
      v40_.v47 = *(_DWORD*)(a2 + 64);
      v40_.v48 = *(_WORD*)(a2 + 68);
      v38 = *(_QWORD*)(a2 + 80);
      v40_.v49 = *(_QWORD*)(a2 + 72);
      v40_.v50 = v38;
      if (v38 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v38 + 8), 1u,
                                  memory_order_relaxed);
      }
      v39 = *(_QWORD*)(a2 + 96);
      result = a2;
      v40_.v51 = *(_QWORD*)(a2 + 88);
      v40_.v52 = v39;
      v40_.v53 = *(_QWORD*)(a2 + 104);
      v13 = *(_DWORD*)(a2 + 112);
      goto LABEL_49;
    }
  }
  return result;
}

__int64 GmapSpotNameManager_199f590(__int64 a1, __int64 a2, __int64 a3,
                                    __int64 a4)
{
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
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
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD v27[2];
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int16 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;

  result = GameRoutine_199f1d0(a1, a2, a3);
  if (*(float*)(a4 + 96) < *(float*)(a3 + 96)) {
    v9 = *(_QWORD*)(a3 + 8);
    v27[0] = *(_QWORD*)a3;
    v27[1] = v9;
    if (v9 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                memory_order_relaxed);
    }
    v10 = *(_QWORD*)(a3 + 24);
    v28 = *(_QWORD*)(a3 + 16);
    v29 = v10;
    v11 = *(_QWORD*)(a3 + 40);
    v30 = *(_QWORD*)(a3 + 32);
    v31 = v11;
    if (v11 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                memory_order_relaxed);
    }
    v12 = *(_QWORD*)(a3 + 56);
    v32 = *(_QWORD*)(a3 + 48);
    v33 = v12;
    if (v12 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                memory_order_relaxed);
    }
    v34 = *(_DWORD*)(a3 + 64);
    v35 = *(_WORD*)(a3 + 68);
    v13 = *(_QWORD*)(a3 + 80);
    v36 = *(_QWORD*)(a3 + 72);
    v37 = v13;
    if (v13 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                memory_order_relaxed);
    }
    v14 = *(_QWORD*)(a3 + 96);
    v38 = *(_QWORD*)(a3 + 88);
    v39 = v14;
    v40 = *(_QWORD*)(a3 + 104);
    v41 = *(_DWORD*)(a3 + 112);
    GmapSpotNameManager_199fe60(a3, a4);
    GmapSpotNameManager_199fe60(a4, v27);
    result = GmapSpotNameManager_17be200(v27);
    if (*(float*)(a3 + 96) < *(float*)(a2 + 96)) {
      v15 = *(_QWORD*)(a2 + 8);
      v27[0] = *(_QWORD*)a2;
      v27[1] = v15;
      if (v15 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                  memory_order_relaxed);
      }
      v16 = *(_QWORD*)(a2 + 24);
      v28 = *(_QWORD*)(a2 + 16);
      v29 = v16;
      v17 = *(_QWORD*)(a2 + 40);
      v30 = *(_QWORD*)(a2 + 32);
      v31 = v17;
      if (v17 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                                  memory_order_relaxed);
      }
      v18 = *(_QWORD*)(a2 + 56);
      v32 = *(_QWORD*)(a2 + 48);
      v33 = v18;
      if (v18 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                  memory_order_relaxed);
      }
      v34 = *(_DWORD*)(a2 + 64);
      v35 = *(_WORD*)(a2 + 68);
      v19 = *(_QWORD*)(a2 + 80);
      v36 = *(_QWORD*)(a2 + 72);
      v37 = v19;
      if (v19 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                  memory_order_relaxed);
      }
      v20 = *(_QWORD*)(a2 + 96);
      v38 = *(_QWORD*)(a2 + 88);
      v39 = v20;
      v40 = *(_QWORD*)(a2 + 104);
      v41 = *(_DWORD*)(a2 + 112);
      GmapSpotNameManager_199fe60(a2, a3);
      GmapSpotNameManager_199fe60(a3, v27);
      result = GmapSpotNameManager_17be200(v27);
      if (*(float*)(a2 + 96) < *(float*)(a1 + 96)) {
        v21 = *(_QWORD*)(a1 + 8);
        v27[0] = *(_QWORD*)a1;
        v27[1] = v21;
        if (v21 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                                    memory_order_relaxed);
        }
        v22 = *(_QWORD*)(a1 + 24);
        v28 = *(_QWORD*)(a1 + 16);
        v29 = v22;
        v23 = *(_QWORD*)(a1 + 40);
        v30 = *(_QWORD*)(a1 + 32);
        v31 = v23;
        if (v23 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8), 1u,
                                    memory_order_relaxed);
        }
        v24 = *(_QWORD*)(a1 + 56);
        v32 = *(_QWORD*)(a1 + 48);
        v33 = v24;
        if (v24 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 8), 1u,
                                    memory_order_relaxed);
        }
        v34 = *(_DWORD*)(a1 + 64);
        v35 = *(_WORD*)(a1 + 68);
        v25 = *(_QWORD*)(a1 + 80);
        v36 = *(_QWORD*)(a1 + 72);
        v37 = v25;
        if (v25 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                                    memory_order_relaxed);
        }
        v26 = *(_QWORD*)(a1 + 96);
        v38 = *(_QWORD*)(a1 + 88);
        v39 = v26;
        v40 = *(_QWORD*)(a1 + 104);
        v41 = *(_DWORD*)(a1 + 112);
        GmapSpotNameManager_199fe60(a1, a2);
        GmapSpotNameManager_199fe60(a2, v27);
        return GmapSpotNameManager_17be200(v27);
      }
    }
  }
  return result;
}

__int64 GmapSpotNameManager_199f810(__int64 a1, __int64 a2, __int64 a3,
                                    __int64 a4, __int64 a5)
{
  __int64 result;
  __int64 v11;
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
  _QWORD v35[2];
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  __int16 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int v49;

  result = GmapSpotNameManager_199f590(a1, a2, a3, a4);
  if (*(float*)(a5 + 96) < *(float*)(a4 + 96)) {
    v11 = *(_QWORD*)(a4 + 8);
    v35[0] = *(_QWORD*)a4;
    v35[1] = v11;
    if (v11 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                memory_order_relaxed);
    }
    v12 = *(_QWORD*)(a4 + 24);
    v36 = *(_QWORD*)(a4 + 16);
    v37 = v12;
    v13 = *(_QWORD*)(a4 + 40);
    v38 = *(_QWORD*)(a4 + 32);
    v39 = v13;
    if (v13 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                memory_order_relaxed);
    }
    v14 = *(_QWORD*)(a4 + 56);
    v40 = *(_QWORD*)(a4 + 48);
    v41 = v14;
    if (v14 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                                memory_order_relaxed);
    }
    v42 = *(_DWORD*)(a4 + 64);
    v43 = *(_WORD*)(a4 + 68);
    v15 = *(_QWORD*)(a4 + 80);
    v44 = *(_QWORD*)(a4 + 72);
    v45 = v15;
    if (v15 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                memory_order_relaxed);
    }
    v16 = *(_QWORD*)(a4 + 96);
    v46 = *(_QWORD*)(a4 + 88);
    v47 = v16;
    v48 = *(_QWORD*)(a4 + 104);
    v49 = *(_DWORD*)(a4 + 112);
    GmapSpotNameManager_199fe60(a4, a5);
    GmapSpotNameManager_199fe60(a5, v35);
    result = GmapSpotNameManager_17be200(v35);
    if (*(float*)(a4 + 96) < *(float*)(a3 + 96)) {
      v17 = *(_QWORD*)(a3 + 8);
      v35[0] = *(_QWORD*)a3;
      v35[1] = v17;
      if (v17 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                                  memory_order_relaxed);
      }
      v18 = *(_QWORD*)(a3 + 24);
      v36 = *(_QWORD*)(a3 + 16);
      v37 = v18;
      v19 = *(_QWORD*)(a3 + 40);
      v38 = *(_QWORD*)(a3 + 32);
      v39 = v19;
      if (v19 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                  memory_order_relaxed);
      }
      v20 = *(_QWORD*)(a3 + 56);
      v40 = *(_QWORD*)(a3 + 48);
      v41 = v20;
      if (v20 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                  memory_order_relaxed);
      }
      v42 = *(_DWORD*)(a3 + 64);
      v43 = *(_WORD*)(a3 + 68);
      v21 = *(_QWORD*)(a3 + 80);
      v44 = *(_QWORD*)(a3 + 72);
      v45 = v21;
      if (v21 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                                  memory_order_relaxed);
      }
      v22 = *(_QWORD*)(a3 + 96);
      v46 = *(_QWORD*)(a3 + 88);
      v47 = v22;
      v48 = *(_QWORD*)(a3 + 104);
      v49 = *(_DWORD*)(a3 + 112);
      GmapSpotNameManager_199fe60(a3, a4);
      GmapSpotNameManager_199fe60(a4, v35);
      result = GmapSpotNameManager_17be200(v35);
      if (*(float*)(a3 + 96) < *(float*)(a2 + 96)) {
        v23 = *(_QWORD*)(a2 + 8);
        v35[0] = *(_QWORD*)a2;
        v35[1] = v23;
        if (v23 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8), 1u,
                                    memory_order_relaxed);
        }
        v24 = *(_QWORD*)(a2 + 24);
        v36 = *(_QWORD*)(a2 + 16);
        v37 = v24;
        v25 = *(_QWORD*)(a2 + 40);
        v38 = *(_QWORD*)(a2 + 32);
        v39 = v25;
        if (v25 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                                    memory_order_relaxed);
        }
        v26 = *(_QWORD*)(a2 + 56);
        v40 = *(_QWORD*)(a2 + 48);
        v41 = v26;
        if (v26 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 8), 1u,
                                    memory_order_relaxed);
        }
        v42 = *(_DWORD*)(a2 + 64);
        v43 = *(_WORD*)(a2 + 68);
        v27 = *(_QWORD*)(a2 + 80);
        v44 = *(_QWORD*)(a2 + 72);
        v45 = v27;
        if (v27 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 8), 1u,
                                    memory_order_relaxed);
        }
        v28 = *(_QWORD*)(a2 + 96);
        v46 = *(_QWORD*)(a2 + 88);
        v47 = v28;
        v48 = *(_QWORD*)(a2 + 104);
        v49 = *(_DWORD*)(a2 + 112);
        GmapSpotNameManager_199fe60(a2, a3);
        GmapSpotNameManager_199fe60(a3, v35);
        result = GmapSpotNameManager_17be200(v35);
        if (*(float*)(a2 + 96) < *(float*)(a1 + 96)) {
          v29 = *(_QWORD*)(a1 + 8);
          v35[0] = *(_QWORD*)a1;
          v35[1] = v29;
          if (v29 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                                      memory_order_relaxed);
          }
          v30 = *(_QWORD*)(a1 + 24);
          v36 = *(_QWORD*)(a1 + 16);
          v37 = v30;
          v31 = *(_QWORD*)(a1 + 40);
          v38 = *(_QWORD*)(a1 + 32);
          v39 = v31;
          if (v31 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 8), 1u,
                                      memory_order_relaxed);
          }
          v32 = *(_QWORD*)(a1 + 56);
          v40 = *(_QWORD*)(a1 + 48);
          v41 = v32;
          if (v32 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 8), 1u,
                                      memory_order_relaxed);
          }
          v42 = *(_DWORD*)(a1 + 64);
          v43 = *(_WORD*)(a1 + 68);
          v33 = *(_QWORD*)(a1 + 80);
          v44 = *(_QWORD*)(a1 + 72);
          v45 = v33;
          if (v33 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 8), 1u,
                                      memory_order_relaxed);
          }
          v34 = *(_QWORD*)(a1 + 96);
          v46 = *(_QWORD*)(a1 + 88);
          v47 = v34;
          v48 = *(_QWORD*)(a1 + 104);
          v49 = *(_DWORD*)(a1 + 112);
          GmapSpotNameManager_199fe60(a1, a2);
          GmapSpotNameManager_199fe60(a2, v35);
          return GmapSpotNameManager_17be200(v35);
        }
      }
    }
  }
  return result;
}

bool GmapSpotNameManager_199fb60(__int64 a1, __int64 a2)
{
  signed __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  float v23;
  __int64 v24;
  _QWORD v26[2];
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int16 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;

  v4 = 0xEEEEEEEEEEEEEEEFLL * ((a2 - a1) >> 3);
  if (v4 <= 2) {
    if ((unsigned __int64)v4 >= 2) {
      if (v4 == 2) {
        if (*(float*)(a2 - 24) < *(float*)(a1 + 96)) {
          v5 = *(_QWORD*)(a1 + 8);
          v26[0] = *(_QWORD*)a1;
          v26[1] = v5;
          if (v5 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                      memory_order_relaxed);
          }
          v6 = *(_QWORD*)(a1 + 24);
          v27 = *(_QWORD*)(a1 + 16);
          v28 = v6;
          v7 = *(_QWORD*)(a1 + 40);
          v29 = *(_QWORD*)(a1 + 32);
          v30 = v7;
          if (v7 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                      memory_order_relaxed);
          }
          v8 = *(_QWORD*)(a1 + 56);
          v9 = a2 - 120;
          v31 = *(_QWORD*)(a1 + 48);
          v32 = v8;
          if (v8 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                      memory_order_relaxed);
          }
          v33 = *(_DWORD*)(a1 + 64);
          v34 = *(_WORD*)(a1 + 68);
          v10 = *(_QWORD*)(a1 + 80);
          v35 = *(_QWORD*)(a1 + 72);
          v36 = v10;
          if (v10 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                      memory_order_relaxed);
          }
          v11 = *(_QWORD*)(a1 + 96);
          v37 = *(_QWORD*)(a1 + 88);
          v38 = v11;
          v39 = *(_QWORD*)(a1 + 104);
          v40 = *(_DWORD*)(a1 + 112);
          GmapSpotNameManager_199fe60(a1, a2 - 120);
          GmapSpotNameManager_199fe60(v9, v26);
          GmapSpotNameManager_17be200(v26);
        }
        return true;
      }
      goto LABEL_19;
    }
    return true;
  }
  switch (v4) {
  case 3LL:
    GameRoutine_199f1d0(a1, a1 + 120, a2 - 120);
    return true;
  case 4LL:
    GmapSpotNameManager_199f590(a1, a1 + 120, a1 + 240, a2 - 120);
    return true;
  case 5LL:
    GmapSpotNameManager_199f810(a1, a1 + 120, a1 + 240, a1 + 360, a2 - 120);
    return true;
  default:
    break;
  }
LABEL_19:
  v12 = a1 + 240;
  GameRoutine_199f1d0(a1, a1 + 120, a1 + 240);
  v13 = a1 + 360;
  if (a1 + 360 == a2) {
    return true;
  }
  v14 = 0;
  v15 = 0;
  while (*(float*)(v13 + 96) >= *(float*)(v12 + 96)) {
  LABEL_21:
    v12 = v13;
    v13 += 120;
    v14 += 120;
    if (v13 == a2) {
      return true;
    }
  }
  v16 = *(_QWORD*)(v13 + 8);
  v26[0] = *(_QWORD*)v13;
  v26[1] = v16;
  if (v16 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                              memory_order_relaxed);
  }
  v17 = *(_QWORD*)(v13 + 24);
  v27 = *(_QWORD*)(v13 + 16);
  v28 = v17;
  v18 = *(_QWORD*)(v13 + 40);
  v29 = *(_QWORD*)(v13 + 32);
  v30 = v18;
  if (v18 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                              memory_order_relaxed);
  }
  v19 = *(_QWORD*)(v13 + 56);
  v31 = *(_QWORD*)(v13 + 48);
  v32 = v19;
  if (v19 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                              memory_order_relaxed);
  }
  v33 = *(_DWORD*)(v13 + 64);
  v34 = *(_WORD*)(v13 + 68);
  v20 = *(_QWORD*)(v13 + 80);
  v35 = *(_QWORD*)(v13 + 72);
  v36 = v20;
  if (v20 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                              memory_order_relaxed);
  }
  v21 = *(_QWORD*)(v13 + 96);
  v22 = v14;
  v37 = *(_QWORD*)(v13 + 88);
  v38 = v21;
  v39 = *(_QWORD*)(v13 + 104);
  v40 = *(_DWORD*)(v13 + 112);
  while (1) {
    GmapSpotNameManager_199fe60(a1 + v22 + 360, a1 + v22 + 240);
    if (v22 == -240) {
      break;
    }
    v23 = *(float*)(a1 + v22 + 216);
    v22 -= 120;
    if (*(float*)&v38 >= v23) {
      v24 = a1 + v22 + 360;
      goto LABEL_36;
    }
  }
  v24 = a1;
LABEL_36:
  GmapSpotNameManager_199fe60(v24, v26);
  if (++v15 != 8) {
    GmapSpotNameManager_17be200(v26);
    goto LABEL_21;
  }
  GmapSpotNameManager_17be200(v26);
  return v13 + 120 == a2;
}

__int64 GmapSpotNameManager_199fe60(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v3 = *a2;
  v2 = a2[1];
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  v6 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)a1 = v3;
  *(_QWORD*)(a1 + 8) = v2;
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = a2[3];
  *(_QWORD*)(a1 + 16) = a2[2];
  *(_QWORD*)(a1 + 24) = v7;
  v9 = a2[4];
  v8 = a2[5];
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
  }
  v10 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a1 + 32) = v9;
  *(_QWORD*)(a1 + 40) = v8;
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
  }
  v12 = a2[6];
  v11 = a2[7];
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                              memory_order_relaxed);
  }
  v13 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 48) = v12;
  *(_QWORD*)(a1 + 56) = v11;
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v13);
  }
  v14 = *((_DWORD*)a2 + 16);
  *(_WORD*)(a1 + 68) = *((_WORD*)a2 + 34);
  *(_DWORD*)(a1 + 64) = v14;
  v16 = a2[9];
  v15 = a2[10];
  if (v15 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                              memory_order_relaxed);
  }
  v17 = *(_QWORD*)(a1 + 80);
  *(_QWORD*)(a1 + 72) = v16;
  *(_QWORD*)(a1 + 80) = v15;
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak(v17);
  }
  v18 = a2[11];
  v19 = a2[12];
  v20 = a2[13];
  *(_DWORD*)(a1 + 112) = *((_DWORD*)a2 + 28);
  *(_QWORD*)(a1 + 96) = v19;
  *(_QWORD*)(a1 + 104) = v20;
  *(_QWORD*)(a1 + 88) = v18;
  return a1;
}

__int64 game_gmap_GmapSpotNameManager_Update_lambda0_Invoke(__int64 a1,
                                                            __int64 a2)
{
  __int64 result;

  if ((*(_BYTE*)(a2 + 105) & 1) == 0) {
    return GameRoutine_165f3c0(a2);
  }
  return result;
}

__int64 game_gmap_GmapSpotNameManager_Update_lambda2_Invoke(__int64 result,
                                                            __int64 a2)
{
  int v2;
  int v3;
  __int64** v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _BOOL4 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  if (*(_BYTE*)(a2 + 105) == 1) {
    v4 = *(__int64***)(result + 8);
    v6 = *(__int64**)a2;
    v5 = *(_QWORD*)(a2 + 8);
    if (v5 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                memory_order_relaxed);
      if (v6[2] == 0) {
        goto LABEL_28;
      }
      v7 = v6[1];
      if (v7 == 0) {
        goto LABEL_28;
      }
      v8 = std___1___shared_weak_count_lock(v7);
      if (v8 == 0) {
        goto LABEL_22;
      }
      v9 = *v6;
      if (*v6 != 0) {
        v3 = *(unsigned __int8*)(v9 + 24);
        v10 = v9 + 152;
        if (v3 == 0) {
          v10 = 0;
        }
        v11 = v10 != v6[2];
      }
      else {
        v11 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v17 = v8;
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak_alt1(v17);
      }
      if (!v11) {
        if ((v3 & 1) == 0) {
          goto LABEL_28;
        }
      }
      else {
      LABEL_22:
        v18 = v6[1];
        if (v18 == 0 || *(_QWORD*)(v18 + 8) == -1) {
          goto LABEL_28;
        }
      }
      v19 = v6[2];
      if (v19 != 0) {
        v20 = *(_QWORD**)(v19 + 24);
        goto LABEL_29;
      }
    LABEL_28:
      v20 = nullptr;
    LABEL_29:
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak_alt1(v5);
      }
      goto LABEL_42;
    }
    if (v6[2] == 0) {
      goto LABEL_41;
    }
    v12 = v6[1];
    if (v12 == 0) {
      goto LABEL_41;
    }
    v13 = std___1___shared_weak_count_lock(v12);
    if (v13 == 0) {
      goto LABEL_35;
    }
    v14 = *v6;
    if (*v6 != 0) {
      v2 = *(unsigned __int8*)(v14 + 24);
      v15 = v14 + 152;
      if (v2 == 0) {
        v15 = 0;
      }
      v16 = v15 != v6[2];
    }
    else {
      v16 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v21 = v13;
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak_alt1(v21);
    }
    if (!v16) {
      if ((v2 & 1) == 0) {
        goto LABEL_41;
      }
    }
    else {
    LABEL_35:
      v22 = v6[1];
      if (v22 == 0 || *(_QWORD*)(v22 + 8) == -1) {
        goto LABEL_41;
      }
    }
    v23 = v6[2];
    if (v23 != 0) {
      v20 = *(_QWORD**)(v23 + 24);
    LABEL_42:
      Pane_58df60(**v4, v20);
      return Pane_58dee0(**v4, (__int64)v20);
    }
  LABEL_41:
    v20 = nullptr;
    goto LABEL_42;
  }
  return result;
}

__int64 game_gmap_GmapSpotNameManager_Update_lambda3_Invoke(__int64 result,
                                                            __int64 a2)
{
  int v2;
  int v3;
  __int64** v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _BOOL4 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  if (*(_BYTE*)(a2 + 105) == 1 &&
      *(_QWORD*)(a2 + 88) ==
          *(_QWORD*)(*(_QWORD*)(*GameData_212d708 + 16) + 96LL)) {
    v4 = *(__int64***)(result + 8);
    v6 = *(__int64**)a2;
    v5 = *(_QWORD*)(a2 + 8);
    if (v5 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                memory_order_relaxed);
      if (v6[2] == 0) {
        goto LABEL_29;
      }
      v7 = v6[1];
      if (v7 == 0) {
        goto LABEL_29;
      }
      v8 = std___1___shared_weak_count_lock(v7);
      if (v8 == 0) {
        goto LABEL_23;
      }
      v9 = *v6;
      if (*v6 != 0) {
        v3 = *(unsigned __int8*)(v9 + 24);
        v10 = v9 + 152;
        if (v3 == 0) {
          v10 = 0;
        }
        v11 = v10 != v6[2];
      }
      else {
        v11 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v17 = v8;
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak_alt1(v17);
      }
      if (!v11) {
        if ((v3 & 1) == 0) {
          goto LABEL_29;
        }
      }
      else {
      LABEL_23:
        v18 = v6[1];
        if (v18 == 0 || *(_QWORD*)(v18 + 8) == -1) {
          goto LABEL_29;
        }
      }
      v19 = v6[2];
      if (v19 != 0) {
        v20 = *(_QWORD**)(v19 + 24);
        goto LABEL_30;
      }
    LABEL_29:
      v20 = nullptr;
    LABEL_30:
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak_alt1(v5);
      }
      goto LABEL_43;
    }
    if (v6[2] == 0) {
      goto LABEL_42;
    }
    v12 = v6[1];
    if (v12 == 0) {
      goto LABEL_42;
    }
    v13 = std___1___shared_weak_count_lock(v12);
    if (v13 == 0) {
      goto LABEL_36;
    }
    v14 = *v6;
    if (*v6 != 0) {
      v2 = *(unsigned __int8*)(v14 + 24);
      v15 = v14 + 152;
      if (v2 == 0) {
        v15 = 0;
      }
      v16 = v15 != v6[2];
    }
    else {
      v16 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v21 = v13;
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak_alt1(v21);
    }
    if (!v16) {
      if ((v2 & 1) == 0) {
        goto LABEL_42;
      }
    }
    else {
    LABEL_36:
      v22 = v6[1];
      if (v22 == 0 || *(_QWORD*)(v22 + 8) == -1) {
        goto LABEL_42;
      }
    }
    v23 = v6[2];
    if (v23 != 0) {
      v20 = *(_QWORD**)(v23 + 24);
    LABEL_43:
      Pane_58df60(**v4, v20);
      return Pane_58dee0(**v4, (__int64)v20);
    }
  LABEL_42:
    v20 = nullptr;
    goto LABEL_43;
  }
  return result;
}

__int64 game_gmap_GmapSpotNameManager_PersistentTick_lambda0_Invoke(__int64 a1,
                                                                    __int64 a2)
{
  __int64 result;

  if (*(_QWORD*)(a2 + 88) != 0) {
    GameRoutine_165eb40(a2 + 32);
    return GameRoutine_1596b00(*(_QWORD*)(a2 + 72));
  }
  return result;
}

#pragma GCC visibility pop
