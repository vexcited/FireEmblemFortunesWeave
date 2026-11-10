#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

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
