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
__int64 game_gmap_GmapSpotNameManager_ShowOnlyDagsionHp(__int64 a1, char a2);
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

__int64 game_gmap_GmapSpotNameManager_ShowOnlyDagsionHp(__int64 a1, char a2)
{
  _QWORD* v4;
  __int64 v5;
  __int64 i;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 result;
  int v12;
  __int64 v13;
  _QWORD v14[4];
  _QWORD* v15;
  char v16;

  v16 = a2;
  *(_BYTE*)(a1 + 5833) = a2;
  v4 = v14;
  v14[0] = GameData_211eaf8;
  v14[1] = &v16;
  v5 = 11880;
  v15 = v14;
  for (i = GameData_2265728 + 24;; i += 120) {
    (*(void (**)(_QWORD*, __int64))(*v4 + 48LL))(v4, i);
    if (v5 == 0) {
      break;
    }
    v4 = v15;
    v5 -= 120;
    if (v15 == nullptr) {
      GameRoutine_60a310(0, v7);
    }
  }
  if (v15 == v14) {
    v8 = 32;
  }
  else {
    if (v15 == nullptr) {
      goto LABEL_10;
    }
    v8 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v15 + v8))(v15, v7);
LABEL_10:
  if ((a2 & 1) != 0) {
    v9 = game_gameui_Footer_instance_;
    *(_DWORD*)(a1 + 5864) = *(_DWORD*)(a1 + 5856);
    v10 = 1;
    *(_DWORD*)(a1 + 5856) = 1;
    if (v9 != 0) {
      LayoutAccessor_1567000(v9, 0);
      v10 = *(_DWORD*)(a1 + 5856) & 0xFFFDFFFF;
    }
    *(_DWORD*)(a1 + 5856) = v10;
    result = game_hub_ProgressEventView_instance_;
    if (game_hub_ProgressEventView_instance_ != 0) {
      return GameRoutine_17b8f40(game_hub_ProgressEventView_instance_, 1);
    }
  }
  else {
    v12 = *(_DWORD*)(a1 + 5864);
    *(_DWORD*)(a1 + 5856) = v12;
    v13 = *(_QWORD*)game_hub_ProgressEventView_instance__ptr[0];
    if ((v12 & 0x10000) != 0) {
      if (v13 != 0) {
        GameRoutine_17b8e80(v13, 1);
      }
    }
    else if (v13 != 0) {
      GameRoutine_17b8f40(v13, 1);
    }
    if ((v12 & 0x20000) != 0) {
      return GameRoutine_17bd0e0(a1);
    }
    else {
      result = game_gameui_Footer_instance_;
      if (game_gameui_Footer_instance_ != 0) {
        result = LayoutAccessor_1567000(game_gameui_Footer_instance_, 0);
      }
      *(_DWORD*)(a1 + 5856) &= ~0x20000u;
    }
  }
  return result;
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
