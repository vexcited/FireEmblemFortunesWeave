#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void game_hub_d96ce0(PSEUDO_X8, _QWORD*, __int64,
                                                __int64);
__int64* GameRoutine_cb27c0(__int64*, unsigned __int8*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 game_hub_d96f00(__int64, __int64*);
__int64 game_hub_d97c00(_QWORD*, char);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern __int64 GameData_212dc60[2];
extern __int64 GameData_212ef90[7];
void GameHr_cb2900(__int64, __int64*);
void GameHr_cdeee0(__int64, __int64);
void GameRoutine_6b7aa0(__int64, __int64*, __int64*, unsigned __int64);
__int64* game_hub_d6d880(__int64* a1, __int64 a2);
__int64 game_hub_d97ac0(_QWORD* a1, __int64 a2, __int64 a3);

__int64* game_hub_d6d880(__int64* a1, __int64 a2)
{
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  bool v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  char v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  bool v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64* v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  bool v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  bool v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  bool v52;
  unsigned __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  bool v59;
  unsigned __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  bool v66;
  unsigned __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  bool v73;
  unsigned __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64* v80;
  unsigned __int64 v81;
  __int64 v82;
  __int64 v83;
  bool v84;
  unsigned __int64 v85;
  __int64 v86;
  unsigned __int64 v87;

  GameRoutine_cb27c0(a1, (unsigned __int8*)a2);
  if (a1 == (__int64*)a2) {
    v7 = *(_QWORD*)(a2 + 136);
    v8 = *(_QWORD*)(a2 + 144);
    v9 = *(_QWORD*)(a2 + 160);
    a1[19] = *(_QWORD*)(a2 + 152);
    a1[20] = v9;
    a1[17] = v7;
    a1[18] = v8;
  }
  else {
    v4 = *(unsigned __int8*)(a2 + 88);
    if ((a1[11] & 1) != 0) {
      v10 = (v4 & 1) == 0;
      v11 = v4 >> 1;
      if (v10) {
        v12 = a2 + 89;
      }
      else {
        v12 = *(_QWORD*)(a2 + 104);
      }
      if (v10) {
        v13 = v11;
      }
      else {
        v13 = *(_QWORD*)(a2 + 96);
      }
      SpineModel_64dde0(a1 + 11, v12, v13);
    }
    else if ((v4 & 1) != 0) {
      GameRoutine_64df20(a1 + 11, *(_QWORD*)(a2 + 104), *(_QWORD*)(a2 + 96));
    }
    else {
      v5 = *(_QWORD*)(a2 + 88);
      v6 = *(_QWORD*)(a2 + 104);
      a1[12] = *(_QWORD*)(a2 + 96);
      a1[13] = v6;
      a1[11] = v5;
    }
    v14 = a1 + 14;
    v15 = *(unsigned __int8*)(a2 + 112);
    if ((a1[14] & 1) != 0) {
      v18 = (v15 & 1) == 0;
      v19 = v15 >> 1;
      if (v18) {
        v20 = a2 + 113;
      }
      else {
        v20 = *(_QWORD*)(a2 + 128);
      }
      if (v18) {
        v21 = v19;
      }
      else {
        v21 = *(_QWORD*)(a2 + 120);
      }
      SpineModel_64dde0(v14, v20, v21);
    }
    else if ((v15 & 1) != 0) {
      GameRoutine_64df20(v14, *(_QWORD*)(a2 + 128), *(_QWORD*)(a2 + 120));
    }
    else {
      v16 = *(_QWORD*)(a2 + 112);
      v17 = *(_QWORD*)(a2 + 128);
      a1[15] = *(_QWORD*)(a2 + 120);
      a1[16] = v17;
      *v14 = v16;
    }
    v22 = *(_QWORD*)(a2 + 136);
    v23 = *(_QWORD*)(a2 + 144);
    v24 = *(_QWORD*)(a2 + 160);
    v25 = a1 + 21;
    v26 = *((_BYTE*)a1 + 168);
    a1[19] = *(_QWORD*)(a2 + 152);
    a1[20] = v24;
    a1[17] = v22;
    a1[18] = v23;
    v27 = *(unsigned __int8*)(a2 + 168);
    if ((v26 & 1) != 0) {
      v30 = (v27 & 1) == 0;
      v31 = v27 >> 1;
      if (v30) {
        v32 = a2 + 169;
      }
      else {
        v32 = *(_QWORD*)(a2 + 184);
      }
      if (v30) {
        v33 = v31;
      }
      else {
        v33 = *(_QWORD*)(a2 + 176);
      }
      SpineModel_64dde0(v25, v32, v33);
    }
    else if ((v27 & 1) != 0) {
      GameRoutine_64df20(v25, *(_QWORD*)(a2 + 184), *(_QWORD*)(a2 + 176));
    }
    else {
      v28 = *(_QWORD*)(a2 + 168);
      v29 = *(_QWORD*)(a2 + 184);
      a1[22] = *(_QWORD*)(a2 + 176);
      a1[23] = v29;
      *v25 = v28;
    }
    GameRoutine_6b7aa0(
        (__int64)(a1 + 24), *(__int64**)(a2 + 192), *(__int64**)(a2 + 200),
        0xAAAAAAAAAAAAAAABLL *
            ((__int64)(*(_QWORD*)(a2 + 200) - *(_QWORD*)(a2 + 192)) >> 3));
    v34 = a1 + 27;
    v35 = *(unsigned __int8*)(a2 + 216);
    if ((a1[27] & 1) != 0) {
      v38 = (v35 & 1) == 0;
      v39 = v35 >> 1;
      if (v38) {
        v40 = a2 + 217;
      }
      else {
        v40 = *(_QWORD*)(a2 + 232);
      }
      if (v38) {
        v41 = v39;
      }
      else {
        v41 = *(_QWORD*)(a2 + 224);
      }
      SpineModel_64dde0(v34, v40, v41);
    }
    else if ((v35 & 1) != 0) {
      GameRoutine_64df20(v34, *(_QWORD*)(a2 + 232), *(_QWORD*)(a2 + 224));
    }
    else {
      v36 = *(_QWORD*)(a2 + 216);
      v37 = *(_QWORD*)(a2 + 232);
      a1[28] = *(_QWORD*)(a2 + 224);
      a1[29] = v37;
      *v34 = v36;
    }
    GameRoutine_6b7aa0(
        (__int64)(a1 + 30), *(__int64**)(a2 + 240), *(__int64**)(a2 + 248),
        0xAAAAAAAAAAAAAAABLL *
            ((__int64)(*(_QWORD*)(a2 + 248) - *(_QWORD*)(a2 + 240)) >> 3));
    v42 = *(unsigned __int8*)(a2 + 264);
    if ((a1[33] & 1) != 0) {
      v45 = (v42 & 1) == 0;
      v46 = v42 >> 1;
      if (v45) {
        v47 = a2 + 265;
      }
      else {
        v47 = *(_QWORD*)(a2 + 280);
      }
      if (v45) {
        v48 = v46;
      }
      else {
        v48 = *(_QWORD*)(a2 + 272);
      }
      SpineModel_64dde0(a1 + 33, v47, v48);
    }
    else if ((v42 & 1) != 0) {
      GameRoutine_64df20(a1 + 33, *(_QWORD*)(a2 + 280), *(_QWORD*)(a2 + 272));
    }
    else {
      v43 = *(_QWORD*)(a2 + 264);
      v44 = *(_QWORD*)(a2 + 280);
      a1[34] = *(_QWORD*)(a2 + 272);
      a1[35] = v44;
      a1[33] = v43;
    }
    GameRoutine_6b7aa0(
        (__int64)(a1 + 36), *(__int64**)(a2 + 288), *(__int64**)(a2 + 296),
        0xAAAAAAAAAAAAAAABLL *
            ((__int64)(*(_QWORD*)(a2 + 296) - *(_QWORD*)(a2 + 288)) >> 3));
    v49 = *(unsigned __int8*)(a2 + 312);
    if ((a1[39] & 1) != 0) {
      v52 = (v49 & 1) == 0;
      v53 = v49 >> 1;
      if (v52) {
        v54 = a2 + 313;
      }
      else {
        v54 = *(_QWORD*)(a2 + 328);
      }
      if (v52) {
        v55 = v53;
      }
      else {
        v55 = *(_QWORD*)(a2 + 320);
      }
      SpineModel_64dde0(a1 + 39, v54, v55);
    }
    else if ((v49 & 1) != 0) {
      GameRoutine_64df20(a1 + 39, *(_QWORD*)(a2 + 328), *(_QWORD*)(a2 + 320));
    }
    else {
      v50 = *(_QWORD*)(a2 + 312);
      v51 = *(_QWORD*)(a2 + 328);
      a1[40] = *(_QWORD*)(a2 + 320);
      a1[41] = v51;
      a1[39] = v50;
    }
    GameRoutine_6b7aa0(
        (__int64)(a1 + 42), *(__int64**)(a2 + 336), *(__int64**)(a2 + 344),
        0xAAAAAAAAAAAAAAABLL *
            ((__int64)(*(_QWORD*)(a2 + 344) - *(_QWORD*)(a2 + 336)) >> 3));
    v56 = *(unsigned __int8*)(a2 + 360);
    if ((a1[45] & 1) != 0) {
      v59 = (v56 & 1) == 0;
      v60 = v56 >> 1;
      if (v59) {
        v61 = a2 + 361;
      }
      else {
        v61 = *(_QWORD*)(a2 + 376);
      }
      if (v59) {
        v62 = v60;
      }
      else {
        v62 = *(_QWORD*)(a2 + 368);
      }
      SpineModel_64dde0(a1 + 45, v61, v62);
    }
    else if ((v56 & 1) != 0) {
      GameRoutine_64df20(a1 + 45, *(_QWORD*)(a2 + 376), *(_QWORD*)(a2 + 368));
    }
    else {
      v57 = *(_QWORD*)(a2 + 360);
      v58 = *(_QWORD*)(a2 + 376);
      a1[46] = *(_QWORD*)(a2 + 368);
      a1[47] = v58;
      a1[45] = v57;
    }
    GameRoutine_6b7aa0(
        (__int64)(a1 + 48), *(__int64**)(a2 + 384), *(__int64**)(a2 + 392),
        0xAAAAAAAAAAAAAAABLL *
            ((__int64)(*(_QWORD*)(a2 + 392) - *(_QWORD*)(a2 + 384)) >> 3));
    v63 = *(unsigned __int8*)(a2 + 408);
    if ((a1[51] & 1) != 0) {
      v66 = (v63 & 1) == 0;
      v67 = v63 >> 1;
      if (v66) {
        v68 = a2 + 409;
      }
      else {
        v68 = *(_QWORD*)(a2 + 424);
      }
      if (v66) {
        v69 = v67;
      }
      else {
        v69 = *(_QWORD*)(a2 + 416);
      }
      SpineModel_64dde0(a1 + 51, v68, v69);
    }
    else if ((v63 & 1) != 0) {
      GameRoutine_64df20(a1 + 51, *(_QWORD*)(a2 + 424), *(_QWORD*)(a2 + 416));
    }
    else {
      v64 = *(_QWORD*)(a2 + 408);
      v65 = *(_QWORD*)(a2 + 424);
      a1[52] = *(_QWORD*)(a2 + 416);
      a1[53] = v65;
      a1[51] = v64;
    }
    GameRoutine_6b7aa0(
        (__int64)(a1 + 54), *(__int64**)(a2 + 432), *(__int64**)(a2 + 440),
        0xAAAAAAAAAAAAAAABLL *
            ((__int64)(*(_QWORD*)(a2 + 440) - *(_QWORD*)(a2 + 432)) >> 3));
    v70 = *(unsigned __int8*)(a2 + 456);
    if ((a1[57] & 1) != 0) {
      v73 = (v70 & 1) == 0;
      v74 = v70 >> 1;
      if (v73) {
        v75 = a2 + 457;
      }
      else {
        v75 = *(_QWORD*)(a2 + 472);
      }
      if (v73) {
        v76 = v74;
      }
      else {
        v76 = *(_QWORD*)(a2 + 464);
      }
      SpineModel_64dde0(a1 + 57, v75, v76);
    }
    else if ((v70 & 1) != 0) {
      GameRoutine_64df20(a1 + 57, *(_QWORD*)(a2 + 472), *(_QWORD*)(a2 + 464));
    }
    else {
      v71 = *(_QWORD*)(a2 + 456);
      v72 = *(_QWORD*)(a2 + 472);
      a1[58] = *(_QWORD*)(a2 + 464);
      a1[59] = v72;
      a1[57] = v71;
    }
    GameRoutine_6b7aa0(
        (__int64)(a1 + 60), *(__int64**)(a2 + 480), *(__int64**)(a2 + 488),
        0xAAAAAAAAAAAAAAABLL *
            ((__int64)(*(_QWORD*)(a2 + 488) - *(_QWORD*)(a2 + 480)) >> 3));
  }
  GameHr_cb2900((__int64)(a1 + 63), (__int64*)(a2 + 504));
  GameHr_cb2900((__int64)(a1 + 72), (__int64*)(a2 + 576));
  GameHr_cb2900((__int64)(a1 + 81), (__int64*)(a2 + 648));
  v77 = *(_QWORD*)(a2 + 720);
  v78 = *(_QWORD*)(a2 + 728);
  if (v78 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v78 + 8), 1u,
                              memory_order_relaxed);
  }
  v79 = a1[91];
  a1[90] = v77;
  a1[91] = v78;
  if (v79 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v79 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v79 + 16LL))(v79);
    std___1___shared_weak_count___release_weak(v79);
  }
  if (a1 != (__int64*)a2) {
    v80 = a1 + 92;
    v81 = *(unsigned __int8*)(a2 + 736);
    if ((a1[92] & 1) != 0) {
      v84 = (v81 & 1) == 0;
      v85 = v81 >> 1;
      if (v84) {
        v86 = a2 + 737;
      }
      else {
        v86 = *(_QWORD*)(a2 + 752);
      }
      if (v84) {
        v87 = v85;
      }
      else {
        v87 = *(_QWORD*)(a2 + 744);
      }
      SpineModel_64dde0(v80, v86, v87);
    }
    else if ((v81 & 1) != 0) {
      GameRoutine_64df20(v80, *(_QWORD*)(a2 + 752), *(_QWORD*)(a2 + 744));
    }
    else {
      v82 = *(_QWORD*)(a2 + 736);
      v83 = *(_QWORD*)(a2 + 752);
      a1[93] = *(_QWORD*)(a2 + 744);
      a1[94] = v83;
      *v80 = v82;
    }
  }
  memcpy((__int64)(a1 + 95), a2 + 760, 0x100u);
  return a1;
}

__int64 game_hub_d97ac0(_QWORD* a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  _QWORD** v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  struct {
    __int64 v16;
    __int64 v17;
  } v16_;
  struct {
    int v18;
    __int16 v19;
    char gap26_[2];
    int v20;
  } v18_;

  v3 = a1[3];
  v5 = (_QWORD**)GameData_212ef90[0];
  if (v3 != 0 && *(_QWORD*)(v3 + 8) != -1) {
    v6 = *(_QWORD*)GameData_212ef90[0];
    v7 = a2;
    v8 = a3;
    v16_.v16 = a1[2];
    v16_.v17 = v3;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    game_hub_d96f00(v6, &v16_.v16);
    if (v16_.v17 != 0) {
      std___1___shared_weak_count___release_weak(v16_.v17);
    }
    v9 = a1[3];
    a1[2] = 0;
    a1[3] = 0;
    if (v9 != 0) {
      std___1___shared_weak_count___release_weak(v9);
    }
    v18_.v20 = 1065353216;
    v18_.v18 = 0;
    v18_.v19 = 0;
    GameHr_cdeee0(*(_QWORD*)GameData_212dc60[0], (__int64)&v18_.v18);
    a3 = v8;
    a2 = v7;
  }
  game_hub_d96ce0((void*)(&v16_.v16), *v5, a2, a3);
  v10 = v16_.v17;
  v11 = a1[3];
  a1[2] = v16_.v16;
  a1[3] = v10;
  if (v11 != 0) {
    std___1___shared_weak_count___release_weak(v11);
    v10 = a1[3];
  }
  if (v10 != 0) {
    v12 = std___1___shared_weak_count_lock(v10);
    if (v12 != 0) {
      v13 = a1[2];
      if (v13 != 0) {
        *(_BYTE*)(v13 + 16) = 1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v14 = v12;
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        std___1___shared_weak_count___release_weak(v14);
      }
    }
  }
  return game_hub_d97c00(a1, 1);
}

#pragma GCC visibility pop
