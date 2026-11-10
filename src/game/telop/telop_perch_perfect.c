#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_174e4e0(__int64, int);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
extern __int64 game_g_game_setting;
extern __int64* game_g_frame_clock_ptr[3];
__int64 TelopPerchPerfect_Unknown43(__int64 a1);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__int64 ControlCreator_13633c0(_QWORD);
__int64 GameRoutine_14a10d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14a3920(long double);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 Manager_bc6460(_QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__n128 GameRoutine_1764a60(__int64, __int64);
__n128 std___1___shared_weak_count___release_weak();
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern _UNKNOWN GameData_1a90b0d;
extern __int64* GameData_212c890[3];
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64 game_RelianceCheck_unknown_;
extern char GameData_1a9f09e;
void GameRoutine_174e040(__int64, __int64*, __int64, __int64, unsigned int);
__int64 TelopPerchPerfect_Unknown33(_QWORD* a1);

__int64 TelopPerchPerfect_Unknown33(_QWORD* a1)
{
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  long double v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int32x4_t* v35;
  long double v36;
  __int64* v37;
  __int64 v38;
  unsigned int v39;
  unsigned int v40;
  __int64 v41;
  __int64 v43;
  __int64 v44;
  __int64 v45[2];
  _QWORD v46[3];
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;

  v2 = LayoutAccessor_155fbe0(a1 + 21, "L_RelianceExpGet_00");
  GameRoutine_1764a60(v2, a1[103]);
  v3 = game_HashString(&GameData_1a90b0d);
  if (v3 == 0) {
    goto LABEL_25;
  }
  v4 = *(_QWORD*)(*GameData_212c890[0] + 96);
  if (v4 == 0 || *(_QWORD*)(*GameData_212c890[0] + 112) == 0) {
    goto LABEL_25;
  }
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
  v8 = *(_QWORD**)(*(_QWORD*)(*GameData_212c890[0] + 88) + 8 * v7);
  if (v8 == nullptr || (v9 = (_QWORD*)*v8) == nullptr) {
  LABEL_25:
    v11 = 0;
    goto LABEL_26;
  }
  if ((v4 & v6) == 0) {
    while (1) {
      v12 = v9[1];
      if (v12 == v3) {
        if (v9[2] == v3) {
          goto LABEL_77;
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
  while (1) {
    v10 = v9[1];
    if (v10 == v3) {
      break;
    }
    if (v10 >= v4) {
      v10 %= v4;
    }
    if (v10 != v7) {
      goto LABEL_25;
    }
  LABEL_15:
    v9 = (_QWORD*)*v9;
    if (v9 == nullptr) {
      goto LABEL_25;
    }
  }
  if (v9[2] != v3) {
    goto LABEL_15;
  }
LABEL_77:
  v11 = v9[3];
LABEL_26:
  v13 = *(_QWORD*)(a1[103] + 8LL);
  if (v13 != 0) {
    v14 = *(_QWORD*)(v13 + 392);
  }
  else {
    v14 = 0;
  }
  LayoutAccessor_1560070((void*)(v45), v2, "L_RelianceAB");
  v15 = *(__int64**)game_RelianceCheck_unknown_;
  while (2) {
    if (v15 == *(__int64**)(game_RelianceCheck_unknown_ + 8)) {
      v20 = 0;
      goto LABEL_45;
    }
    v16 = *v15;
    if (v11 == 0 || (v17 = *(_QWORD*)(*(_QWORD*)(v16 + 24) + 1672LL)) !=
                        *(_QWORD*)(*(_QWORD*)(v11 + 24) + 1672LL)) {
      if (v14 == 0 || v11 == 0 ||
          *(_QWORD*)(*(_QWORD*)(v16 + 24) + 1672LL) !=
              *(_QWORD*)(*(_QWORD*)(v14 + 24) + 1672LL)) {
        goto LABEL_31;
      }
      v19 = *(_QWORD*)(*(_QWORD*)(v15[1] + 24) + 1672LL);
      v17 = *(_QWORD*)(*(_QWORD*)(v11 + 24) + 1672LL);
      goto LABEL_30;
    }
    if (v14 == 0) {
    LABEL_31:
      v15 += 3;
      continue;
    }
    break;
  }
  v18 = *(_QWORD*)(*(_QWORD*)(v14 + 24) + 1672LL);
  v19 = *(_QWORD*)(*(_QWORD*)(v15[1] + 24) + 1672LL);
  if (v19 != v18) {
    if (v17 != v18) {
      goto LABEL_31;
    }
  LABEL_30:
    if (v19 == v17) {
      goto LABEL_44;
    }
    goto LABEL_31;
  }
LABEL_44:
  v20 = *((_DWORD*)v15 + 4);
LABEL_45:
  GameRoutine_174e040((__int64)(a1 + 104), v45, v11, v14, v20);
  if (v45[1] != 0) {
    std___1___shared_weak_count___release_weak();
  }
  v21 = a1[22];
  if (v21 != 0) {
    v22 = std___1___shared_weak_count_lock(v21);
    if (v22 != 0) {
      v23 = v22;
      v24 = a1[21];
      if (v24 != 0) {
        ControlCreator_13633c0(v24);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
        std___1___shared_weak_count___release_weak();
      }
    }
  }
  v46[0] = 0;
  v46[1] = 0;
  v25 = *((_QWORD*)GameData_212c540 + 1);
  v27 = *(_QWORD*)GameData_212c548;
  v26 = *((_QWORD*)GameData_212c548 + 1);
  v48 = *(_QWORD*)GameData_212c540;
  v49 = v25;
  v52 = v48;
  v53 = v25;
  v50 = v27;
  v51 = v26;
  v47 = 9;
  v46[2] = "UI_Deco_Result_Perfect";
  v28 = Manager_bc6460(*eft_g_effectSystem_ptr[0], v46, 0);
  GameRoutine_14a10d0(&v43, v28, v29, &GameData_1a9f09e);
  v31 = v43;
  v32 = v44;
  if (v44 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v44 + 8), 1u,
                              memory_order_relaxed);
  }
  v33 = a1[128];
  a1[127] = v31;
  a1[128] = v32;
  if (v33 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
      *(__n128*)&v30 = std___1___shared_weak_count___release_weak();
    }
    v32 = a1[128];
  }
  if (v32 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
      *(__n128*)&v30 = std___1___shared_weak_count___release_weak();
    }
  }
  v34 = v44;
  if (v44 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v44 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v34 + 16LL))(v34, v30);
    std___1___shared_weak_count___release_weak();
  }
  v35 = (int32x4_t*)ui_LayoutAccessor_FindPane(a1 + 21, "N_Title");
  if (v35 != nullptr) {
    v36 = COERCE_LONG_DOUBLE(vdupq_laneq_s32(v35[7], 3));
    DWORD1(v36) = HIDWORD(LANES128(v35[8]).n128_u64[1]);
  }
  else {
    *(_QWORD*)&v36 = 0;
  }
  v37 = (__int64*)a1[127];
  v38 = *v37;
  if (*v37 != 0 && *(_DWORD*)(v38 + 16) == *((_DWORD*)v37 + 2)) {
    v39 = *(_DWORD*)(v38 + 36);
    if (v39 != 0) {
      v40 = 0;
      LODWORD(v36) = 0;
      *((_QWORD*)&v36 + 1) = 0;
      *((float*)&v36 + 1) = *((float*)&v36 + 1) + 0x1.4000000000000p+6;
      do {
        if ((int)v39 > (int)v40) {
          v41 = *(_QWORD*)(v38 + 40 + 8LL * (int)v40);
          if (v41 != 0) {
            *(long double*)(v41 + 16) = v36;
            *(_BYTE*)(v41 + 128) = 1;
            v39 = *(_DWORD*)(v38 + 36);
          }
        }
        ++v40;
      } while (v40 < v39);
    }
  }
  return GameRoutine_14a3920(v36);
}

__int64 TelopPerchPerfect_Unknown43(__int64 a1)
{
  float v1;
  float v2;
  char v4;
  float v5;
  float v6;

  v1 = *(float*)(a1 + 328);
  v2 = *(float*)(a1 + 420);
  if (v2 < v1) {
    v4 = 0;
    v5 = 60.0 / (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
    if (v5 <= 0.0) {
      v5 = 1.0;
    }
    if ((*(_DWORD*)(game_g_game_setting + 944) & 0xB) != 0) {
      v5 = v5 * 8.0;
    }
    v6 = v2 + v5;
    if (v1 >= v6) {
      v1 = v6;
    }
    *(float*)(a1 + 420) = v1;
  }
  else if ((snd_fnd_WeakHandle_isValid(a1 + 424) & 1) != 0) {
    v4 = 0;
  }
  else {
    v4 = GameRoutine_174e4e0(a1 + 832, 1) ^ 1;
  }
  return v4 & 1;
}

#pragma GCC visibility pop
