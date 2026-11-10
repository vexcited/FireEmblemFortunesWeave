#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1921e00(_QWORD);
__int64 GameRoutine_1922700(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_SpineCaptureProcessor_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* SpineCaptureProcessor_Unknown2(__int64 a1, __int64 a2);
_QWORD* SpineCaptureProcessor_Destructor(_QWORD* result);
__int64 SpineCaptureProcessor_DeletingDestructor(_QWORD* a1);
__int64 DGame_1920490(__int64);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 SpineCaptureProcessor_1921e00(__int64 result);
bool SpineCaptureProcessor_1922700(unsigned __int8* a1, unsigned __int8* a2);
__attribute__((swiftcall)) void GameRoutine_190bad0(PSEUDO_X8, __int64*,
                                                    __int64);
__int64 DGame_1920490_alt1(_QWORD) __asm__("DGame_1920490");
__int64 GameRoutine_190bf00(_QWORD, _QWORD);
__int64 GameRoutine_19170a0(_QWORD, _QWORD);
__int64 GameRoutine_191ab90(__int64, unsigned __int8*, _DWORD*);
__int64 GameRoutine_191bab0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_191bd10(__int64 result, __int64);
__int64 GameRoutine_191c250(_QWORD, _QWORD);
__int64 GameRoutine_191d680(__int64 result, char);
__int64 GameRoutine_191eea0(_QWORD, _QWORD);
__int64 GameRoutine_5fc1f0(_QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 SpineCaptureProcessor_1922700_alt1(_QWORD, _QWORD) __asm__(
    "SpineCaptureProcessor_1922700");
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 SpineSlotChecker_1922460(_QWORD, _QWORD);
__int64 SpineSlotChecker_1923b20(_QWORD, _QWORD);
__int64 cspine_SpineModel_AsyncArgument_Destroy_AsyncArgument(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_AcquireReadLock(_QWORD);
__int64 nn_os_ReleaseReadLock(_QWORD);
__int64 spine_AnimationState_getCurrent(_QWORD, _QWORD);
__int64 spine_AnimationState_setTimeScale(float);
__int64 spine_TrackEntry_setTrackTime(double);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__n128 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 (*GameData_21108e8[])();
extern __int64 (*GameData_2110970[])();
extern __int64* GameData_212fcd0;
extern __int64* GameData_2132350[3];
extern __int64* game_spine_g_resource_releaser_ptr;
extern __int64 GameData_1ab7c2e;
extern __int64 GameData_1ac2fd3;
extern __int64 GameData_1aed621;
extern __int64 GameData_21c9730;
extern __int64 GameData_21c9738;
extern char* GameData_21109b0[7];
extern char GameData_1a9f09e;
void __attribute__((noreturn)) String_60a230(_QWORD);
__n128 SpineCaptureProcessor_191e360(_DWORD* a1, unsigned __int64 a2, char a3,
                                     __int64 a4, __int64 a5, __int64 a6,
                                     __n128 result);
void SpineCaptureProcessor_1920da0(__int64 a1);

__n128 SpineCaptureProcessor_191e360(_DWORD* a1, unsigned __int64 a2, char a3,
                                     __int64 a4, __int64 a5, __int64 a6,
                                     __n128 result)
{
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  int v25;
  _DWORD* v27;
  _QWORD* v28;
  int v29;
  __int64 v30;
  __int64 v31;
  _QWORD v32[3];

  if ((int)a2 >= 1) {
    result = memset(a1, 0, 4 * (a2 & 0x7FFFFFFF), a4, a5, a6);
  }
  v10 = (_QWORD*)GameData_21c9730;
  if (GameData_21c9730 == 0) {
    v11 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 248, 16, 0);
    v12 = GameData_21c9738;
    v11[1] = 0;
    v11[2] = 0;
    v11[4] = 0;
    v11[5] = 0;
    v11[6] = 0;
    v11[7] = 0;
    v11[8] = 0;
    v11[9] = 0;
    v11[10] = 0;
    v11[11] = 0;
    v11[12] = 0;
    v11[13] = 0;
    v11[18] = 0;
    v11[19] = 0;
    v11[20] = 0;
    v11[21] = 0;
    v11[22] = 0;
    v11[23] = 0;
    *v11 = GameData_21108e8;
    v11[24] = 0;
    v11[25] = 0;
    v11[26] = 0;
    v11[27] = 0;
    v11[28] = 0;
    v11[29] = 0;
    v11[30] = 0;
    v11[8] = 0;
    v11[9] = 0;
    v11[10] = 0;
    v11[11] = 0;
    v11[13] = 0;
    v11[14] = 0;
    v11[14] = 0;
    v11[15] = 0;
    v11[15] = 0;
    v11[16] = 0;
    v11[16] = 0;
    v11[17] = 0;
    *((_DWORD*)v11 + 14) = 1065353216;
    *((_DWORD*)v11 + 24) = 1065353216;
    *((_DWORD*)v11 + 34) = 1065353216;
    v11[18] = 0;
    v11[19] = 0;
    v11[20] = 0;
    v11[21] = 0;
    v11[22] = 0;
    v11[23] = 0;
    v11[24] = 0;
    v11[25] = 0;
    v11[26] = 0;
    v11[27] = 0;
    v11[28] = 0;
    v11[29] = 0;
    *((_BYTE*)v11 + 240) = 0;
    GameData_21c9738 = (__int64)v11;
    v11[3] = 0;
    v13 = (__int64)(v11 + 3);
    GameData_21c9730 = v13;
    if (v12 != 0) {
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        v13 = GameData_21c9730;
        if (GameData_21c9730 != 0) {
          goto LABEL_7;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        result = std___1___shared_weak_count___release_weak_alt1(v12);
        v13 = GameData_21c9730;
        if (GameData_21c9730 != 0) {
          goto LABEL_7;
        }
      }
      v10 = nullptr;
      v14 = GameData_21c9738;
      if (GameData_21c9738 == 0) {
        return result;
      }
      goto LABEL_9;
    }
  LABEL_7:
    GameRoutine_191d680(v13, 0);
    v10 = (_QWORD*)GameData_21c9730;
  }
  v14 = GameData_21c9738;
  if (GameData_21c9738 == 0) {
    return result;
  }
LABEL_9:
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                            memory_order_relaxed);
  v15 = std___1___shared_weak_count_lock(v14);
  result = std___1___shared_weak_count___release_weak_alt1(v14);
  if (v15 == 0) {
    return result;
  }
  if (v10 != nullptr) {
    __builtin_memset(v32, 0, sizeof(v32));
    switch (a3) {
    case 6:
      v16 = &GameData_1aed621;
      break;
    case 5:
      v16 = &GameData_1ac2fd3;
      break;
    case 1:
      v16 = &GameData_1ab7c2e;
      break;
    default:
      goto LABEL_36;
    }
    v17 = *v16;
    v18 = *(__int64*)((char*)v16 + 5);
    v19 = (_QWORD*)v10[15];
    v20 = (_QWORD*)v10[16];
    *(_QWORD*)((char*)v32 + 1) = v17;
    *(_QWORD*)((char*)v32 + 6) = v18;
    if (v19 != v20) {
      while (1) {
        v21 = *v19;
        v22 = strlen(*v19);
        if (v22 == -1) {
          String_60a230(-1);
        }
        v23 = v22;
        v24 = v22 >= 0xD ? 13LL : v22;
        v25 = memcmp((char*)v32 + 1, v21, v24);
        if (v23 == 13 && v25 == 0) {
          break;
        }
        v19 += 2;
        if (v19 == v20) {
          goto LABEL_36;
        }
      }
      if (v19 != v20) {
        if (a2 == 0) {
          goto LABEL_48;
        }
        *a1 = *(_DWORD*)(v19[1] + 264LL);
        if (a2 == 1) {
          goto LABEL_48;
        }
        a1[1] = *(_DWORD*)(v19[1] + 268LL);
        if (a2 < 3) {
          goto LABEL_48;
        }
        v27 = (_DWORD*)v19[1];
        goto LABEL_47;
      }
    }
  LABEL_36:
    v28 = (_QWORD*)v10[2];
    if (v28 == nullptr) {
      goto LABEL_48;
    }
    v29 = 0x7FFFFFFF;
    v30 = 0;
    v27 = nullptr;
    do {
      v31 = v28[3];
      if (v31 != 0 && *(unsigned __int16*)(v31 + 22) + 1 < v29) {
        v30 = v28[2];
        v27 = (_DWORD*)v28[3];
        v29 = *(unsigned __int16*)(v31 + 22) + 1;
      }
      v28 = (_QWORD*)*v28;
    } while (v28 != nullptr);
    if (a2 == 0) {
      goto LABEL_48;
    }
    if (v30 == 0) {
      goto LABEL_48;
    }
    if (v27 == nullptr) {
      goto LABEL_48;
    }
    *a1 = v27[66];
    if (a2 < 2) {
      goto LABEL_48;
    }
    a1[1] = v27[67];
    if (a2 == 2) {
      goto LABEL_48;
    }
  LABEL_47:
    a1[2] = v27[68];
  }
LABEL_48:
  if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v15 + 16LL))(
        v15, *(long double*)&result);
    return std___1___shared_weak_count___release_weak_alt1(v15);
  }
  return result;
}

void SpineCaptureProcessor_1920da0(__int64 a1)
{
  int v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  char v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64* v33;
  char v34;
  __int64* v35;
  __int64* v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  long double v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64* v50;
  unsigned __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  _BYTE* v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  _QWORD* v63;
  atomic_ullong* v64;
  _QWORD* v65;
  _QWORD* v66;
  unsigned __int64 v67;
  char* v68;
  char* v69;
  _QWORD* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  _BYTE* v80;
  unsigned __int8* v81;
  char* v82;
  unsigned __int8* v83;
  unsigned int v84;
  __int64 v85;
  float v86;
  __int64 v87;
  __int64 v88;
  double v89;
  int v90;
  bool v91;
  int v92;
  __int64* v93;
  __int64* v94;
  __int64* v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  unsigned __int64 v99;
  __int16 v100;
  char v101;
  __int16 v102;
  __int16 v103;
  __int16 v104;
  int v105;
  _QWORD* v106;
  _QWORD* v107;
  _QWORD v108[2];
  char* v109;
  _BYTE* v110;

  v93 = (__int64*)(a1 + 120);
  v110 = (_BYTE*)(a1 + 121);
  v3 = (_QWORD*)(a1 + 184);
  v2 = *(_DWORD*)a1;
  v95 = GameData_2132350[0] + 2;
  v94 = GameData_212fcd0 + 2;
  while (1) {
    while (1) {
      while (1) {
        while (v2 > 3) {
          if (v2 <= 5) {
            if (v2 == 4) {
              v14 = *(_QWORD*)(a1 + 168);
              if (**(_DWORD**)(v14 + 8) != 0) {
                return;
              }
              v15 = *(__int64**)(v14 + 128);
              v16 = *(__int64**)(v14 + 136);
              if (v15 != v16) {
                v17 = 0;
                do {
                  v19 = (__int64*)*v15;
                  if (*(_BYTE*)(*v15 + 120) == 1) {
                    v20 = *v19;
                    nn_os_AcquireReadLock(*v19 + 696);
                    v21 = *(_DWORD*)(v20 + 656);
                    nn_os_ReleaseReadLock(v20 + 696);
                    if ((v21 & 8) != 0) {
                      v22 = GameRoutine_5fc1f0(*(_QWORD*)(*v19 + 592));
                      v19[1] = v22;
                      v23 = *(_QWORD*)(**(_QWORD**)(v22 + 40) + 144LL);
                      *((_WORD*)v19 + 60) = 256;
                      v19[11] = v23;
                    }
                  }
                  v18 = (__int64*)*v15++;
                  v17 |= *((_BYTE*)v18 + 121) ^ 1;
                } while (v15 != v16);
                if ((v17 & 1) != 0) {
                  return;
                }
                v14 = *(_QWORD*)(a1 + 168);
              }
              SpineSlotChecker_1922460(a1 + 72, v14);
              v2 = 5;
              *(_DWORD*)a1 = 5;
            }
            else {
              v5 = *(_QWORD*)(a1 + 24);
              if (*(_QWORD*)(v5 + 160) != 0) {
                v2 = 7;
                *(_DWORD*)a1 = 7;
              }
              else {
                v48 = *(_QWORD*)(a1 + 168);
                if (v48 != 0) {
                  v49 = *(unsigned __int8*)(a1 + 120);
                  v50 = (__int64*)(v5 + 64);
                  v51 = *(unsigned __int8*)(v5 + 64);
                  v52 = *(_QWORD*)(v5 + 72);
                  if ((v49 & 1) != 0) {
                    v53 = *(_QWORD*)(a1 + 128);
                  }
                  else {
                    v53 = v49 >> 1;
                  }
                  if ((v51 & 1) != 0) {
                    v54 = *(_QWORD*)(v5 + 72);
                  }
                  else {
                    v54 = v51 >> 1;
                  }
                  if (v53 != v54 ||
                      ((v49 & 1) != 0 ? (v55 = *(_BYTE**)(a1 + 136))
                                      : (v55 = v110),
                       (v51 & 1) != 0 ? (v56 = *(_QWORD*)(v5 + 80))
                                      : (v56 = v5 + 65),
                       (unsigned int)memcmp(v55, v56, v53) != 0)) {
                    if (v54 != 0) {
                      if (v93 != v50) {
                        if ((v49 & 1) != 0) {
                          if ((v51 & 1) != 0) {
                            v79 = *(_QWORD*)(v5 + 80);
                          }
                          else {
                            v79 = v5 + 65;
                          }
                          SpineModel_64dde0(v93, v79, v54);
                        }
                        else if ((v51 & 1) != 0) {
                          GameRoutine_64df20(v93, *(_QWORD*)(v5 + 80), v52);
                        }
                        else {
                          v57 = *v50;
                          v58 = *(_QWORD*)(v5 + 80);
                          v93[1] = *(_QWORD*)(v5 + 72);
                          v93[2] = v58;
                          *v93 = v57;
                        }
                      }
                    }
                    else if ((v49 & 1) != 0) {
                      **(_BYTE**)(a1 + 136) = 0;
                      *(_QWORD*)(a1 + 128) = 0;
                    }
                    else {
                      *v110 = 0;
                      *(_BYTE*)v93 = 0;
                    }
                    if ((*(_BYTE*)(a1 + 120) & 1) != 0) {
                      v80 = *(_BYTE**)(a1 + 136);
                    }
                    else {
                      v80 = v110;
                    }
                    GameRoutine_19170a0(v48, v80);
                  }
                  if (*(_BYTE*)(v5 + 209) != 0) {
                    v81 = (unsigned __int8*)(v5 + 208);
                  }
                  else {
                    v81 = (unsigned __int8*)(*(_QWORD*)(v5 + 112) + 48LL);
                  }
                  GameRoutine_191bab0(v48, *v81, v5 + 192);
                  v82 = &GameData_1a9f09e;
                  if (*(_BYTE*)(v5 + 209) != 0) {
                    v83 = (unsigned __int8*)(v5 + 208);
                  }
                  else {
                    v83 = (unsigned __int8*)(*(_QWORD*)(v5 + 112) + 48LL);
                  }
                  v84 = *v83 - 1;
                  if (v84 <= 6) {
                    v82 = GameData_21109b0[(unsigned __int8)v84];
                  }
                  GameRoutine_60a020(a1 + 144, v82);
                  v85 = *(_QWORD*)(a1 + 168);
                  if (v85 != 0) {
                    GameRoutine_191bd10(v85, *(_QWORD*)(v5 + 120));
                  }
                }
                v86 = *(float*)(v5 + 156);
                if (v86 <= 0.0) {
                  v2 = 6;
                  *(_DWORD*)a1 = 6;
                }
                else {
                  v87 = *(_QWORD*)(a1 + 168);
                  if (*(_BYTE*)(v87 + 1041) == 1) {
                    if (*(_QWORD*)(v87 + 104) != 0) {
                      spine_AnimationState_setTimeScale(0.0);
                      v87 = *(_QWORD*)(a1 + 168);
                      if (*(_BYTE*)(v87 + 1041) == 1) {
                        v86 = *(float*)(v5 + 156);
                        goto LABEL_171;
                      }
                      v2 = 6;
                      *(_DWORD*)a1 = 6;
                    }
                    else {
                    LABEL_171:
                      v88 = *(_QWORD*)(v87 + 104);
                      if (v88 != 0) {
                        if (spine_AnimationState_getCurrent(v88, 1) != 0) {
                          *(float*)&v89 = v86;
                          spine_TrackEntry_setTrackTime(v89);
                        }
                        v2 = 6;
                        *(_DWORD*)a1 = 6;
                      }
                      else {
                        v2 = 6;
                        *(_DWORD*)a1 = 6;
                      }
                    }
                  }
                  else {
                    v2 = 6;
                    *(_DWORD*)a1 = 6;
                  }
                }
              }
            }
          }
          else {
            switch (v2) {
            case 6:
              v31 = *(_QWORD*)(a1 + 168);
              if (**(_DWORD**)(v31 + 8) != 0) {
                return;
              }
              v32 = *(__int64**)(v31 + 128);
              v33 = *(__int64**)(v31 + 136);
              if (v32 == v33) {
                v2 = 7;
                *(_DWORD*)a1 = 7;
              }
              else {
                v34 = 0;
                do {
                  v36 = (__int64*)*v32;
                  if (*(_BYTE*)(*v32 + 120) == 1) {
                    v37 = *v36;
                    nn_os_AcquireReadLock(*v36 + 696);
                    v38 = *(_DWORD*)(v37 + 656);
                    nn_os_ReleaseReadLock(v37 + 696);
                    if ((v38 & 8) != 0) {
                      v39 = GameRoutine_5fc1f0(*(_QWORD*)(*v36 + 592));
                      v36[1] = v39;
                      v40 = *(_QWORD*)(**(_QWORD**)(v39 + 40) + 144LL);
                      *((_WORD*)v36 + 60) = 256;
                      v36[11] = v40;
                    }
                  }
                  v35 = (__int64*)*v32++;
                  v34 |= *((_BYTE*)v35 + 121) ^ 1;
                } while (v32 != v33);
                if ((v34 & 1) != 0) {
                  return;
                }
                v2 = 7;
                *(_DWORD*)a1 = 7;
              }
              break;
            case 7:
              v10 = *(_QWORD*)(a1 + 24);
              v11 = *(_QWORD*)(a1 + 40);
              v13 = *(_QWORD*)(v10 + 176);
              v12 = v10 + 176;
              if (v13 != 0) {
                (*(void (**)(__int64, __int64))(*(_QWORD*)v11 + 16LL))(v11,
                                                                       v12);
                v11 = *(_QWORD*)(a1 + 40);
              }
              (*(void (**)(__int64, __int64))(*(_QWORD*)v11 + 48LL))(v11, 1);
              v2 = 8;
              *(_DWORD*)a1 = 8;
              break;
            case 8:
              if (*(_QWORD*)(*(_QWORD*)(a1 + 40) + 80LL) != 0) {
                return;
              }
              v2 = 3;
              *(_DWORD*)a1 = 3;
              break;
            default:
              break;
            }
          }
        }
        if (v2 <= 1) {
          break;
        }
        if (v2 == 2) {
          v25 = *(_QWORD*)(a1 + 24);
          v26 = *(_QWORD*)(a1 + 168);
          v27 = *(_QWORD*)(v25 + 160);
          if (v27 == 0) {
            if (v26 == 0) {
              goto LABEL_114;
            }
            v41 = *(_QWORD*)(v26 + 1328);
            *(_QWORD*)(v26 + 1320) = 0;
            *(_QWORD*)(v26 + 1328) = 0;
            if (v41 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) != 0) {
              v42 = *(_QWORD*)(a1 + 168);
              if (v42 == 0) {
                goto LABEL_114;
              }
            LABEL_69:
              if ((SpineCaptureProcessor_1922700_alt1(a1 + 72, v25 + 16) & 1) ==
                      0 ||
                  (GameRoutine_191eea0(v3, v25 + 192) & 1) == 0 &&
                      *(_BYTE*)(v25 + 195) == 0) {
                v43 = *game_spine_g_resource_releaser_ptr;
                v44 = *(_QWORD*)(a1 + 176);
                v98 = v42;
                v99 = v44;
                if (v44 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v44 + 8),
                                            1u, memory_order_relaxed);
                }
                GameRoutine_190bf00(v43, &v98);
                v46 = v99;
                if (v99 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v99 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(unsigned __int64))(*(_QWORD*)v46 + 16LL))(v46);
                  *(__n128*)&v45 =
                      std___1___shared_weak_count___release_weak_alt1(v46);
                }
                v47 = *(_QWORD*)(a1 + 176);
                *(_QWORD*)(a1 + 168) = 0;
                *(_QWORD*)(a1 + 176) = 0;
                if (v47 != 0 &&
                    atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64, long double))(*(_QWORD*)v47 + 16LL))(
                      v47, v45);
                  std___1___shared_weak_count___release_weak_alt1(v47);
                }
                goto LABEL_114;
              }
              if (*(_BYTE*)(v25 + 195) != 0) {
                GameRoutine_191ab90(v42, (unsigned __int8*)(v25 + 16),
                                    (_DWORD*)(v25 + 192));
              }
              goto LABEL_138;
            }
            (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
            std___1___shared_weak_count___release_weak_alt1(v41);
            v42 = *(_QWORD*)(a1 + 168);
            if (v42 != 0) {
              goto LABEL_69;
            }
          LABEL_114:
            v62 = *(_QWORD*)(v25 + 112);
            v108[1] = 0;
            v109 = nullptr;
            v108[0] = 0;
            SpineSlotChecker_1923b20(v108, v62);
            v63 = (_QWORD*)fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 120, 16, 0);
            v63[1] = 0;
            v64 = (atomic_ullong*)(v63 + 1);
            v63[2] = 0;
            v63[4] = 0;
            v63[5] = 0;
            v65 = v63;
            v63[6] = 0;
            v63[7] = 0;
            *v63 = GameData_2110970;
            v63[8] = 0;
            v63[9] = 0;
            v63[10] = 0;
            v63[11] = 0;
            v63[12] = 0;
            v63[13] = 0;
            v63[14] = 0;
            v100 = 0;
            v101 = 1;
            v63[3] = v95;
            v66 = v63 + 3;
            v67 = *(unsigned int*)(v25 + 152) |
                  ((unsigned __int64)*(unsigned int*)(v25 + 152) << 32);
            v98 = *(_QWORD*)(v25 + 144);
            v99 = v67;
            GameRoutine_191c250(v63 + 3, &v98);
            (*(void (**)(_QWORD*, __int64))(*v66 + 40LL))(v66, v25 + 192);
            LOWORD(v99) = 0;
            v102 = 0;
            v103 = 0;
            v104 = 0;
            v106 = nullptr;
            v107 = nullptr;
            v105 = 1065353216;
            v98 = (__int64)v94;
            v68 = (char*)v108 + 1;
            if ((v108[0] & 1) != 0) {
              v68 = v109;
            }
            if (v68 != nullptr) {
              v69 = v68;
            }
            else {
              v69 = &GameData_1a9f09e;
            }
            GameRoutine_60a020(&v99, v69);
            v105 = *(_DWORD*)(v25 + 152);
            atomic_fetch_add_explicit(v64, 1u, memory_order_relaxed);
            atomic_fetch_add_explicit(v64, 1u, memory_order_relaxed);
            v70 = v107;
            v106 = v66;
            v107 = v65;
            if (v70 != nullptr &&
                atomic_fetch_add((atomic_ullong* volatile)(v70 + 1),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(_QWORD*))(*v70 + 16LL))(v70);
              std___1___shared_weak_count___release_weak_alt1(v70);
            }
            if (atomic_fetch_add(v64, 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(_QWORD*))(*v65 + 16LL))(v65);
              std___1___shared_weak_count___release_weak_alt1(v65);
            }
            GameRoutine_190bad0((void*)(&v96),
                                (__int64*)*game_spine_g_resource_releaser_ptr,
                                (__int64)&v98);
            v71 = v96;
            v72 = v97;
            v73 = *(_QWORD*)(a1 + 176);
            v96 = 0;
            v97 = 0;
            *(_QWORD*)(a1 + 168) = v71;
            *(_QWORD*)(a1 + 176) = v72;
            if (v73 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v73 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v73 + 16LL))(v73);
              std___1___shared_weak_count___release_weak_alt1(v73);
              v74 = v97;
              if (v97 != 0) {
                goto LABEL_127;
              }
            }
            else {
              v74 = v97;
              if (v97 != 0) {
              LABEL_127:
                if (atomic_fetch_add((atomic_ullong* volatile)(v74 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v74 + 16LL))(v74);
                  std___1___shared_weak_count___release_weak_alt1(v74);
                }
              }
            }
            cspine_SpineModel_AsyncArgument_Destroy_AsyncArgument(&v98);
            if (atomic_fetch_add(v64, 0xFFFFFFFFFFFFFFFFLL) != 0) {
              if ((v108[0] & 1) == 0) {
                goto LABEL_138;
              }
            }
            else {
              (*(void (**)(_QWORD*))(*v65 + 16LL))(v65);
              std___1___shared_weak_count___release_weak_alt1(v65);
              if ((v108[0] & 1) == 0) {
                goto LABEL_138;
              }
            }
            if (v109 != nullptr) {
              v75 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v75 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v75);
            }
          LABEL_138:
            v27 = *(_QWORD*)(a1 + 168);
            if (v27 == 0) {
              goto LABEL_2;
            }
          LABEL_139:
            v77 = *(_QWORD*)(a1 + 40);
            v76 = *(_QWORD*)(a1 + 48);
            if (v76 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v76 + 8), 1u,
                                        memory_order_relaxed);
            }
            v78 = *(_QWORD*)(v27 + 1328);
            *(_QWORD*)(v27 + 1320) = v77;
            *(_QWORD*)(v27 + 1328) = v76;
            if (v78 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v78 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v78 + 16LL))(v78);
              std___1___shared_weak_count___release_weak_alt1(v78);
            }
            goto LABEL_2;
          }
          if (v26 != 0) {
            v28 = *(_QWORD*)(v26 + 1328);
            *(_QWORD*)(v26 + 1320) = 0;
            *(_QWORD*)(v26 + 1328) = 0;
            if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
              std___1___shared_weak_count___release_weak_alt1(v28);
            }
            v27 = *(_QWORD*)(v25 + 160);
          }
          v29 = *(_QWORD*)(v25 + 168);
          if (v29 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                                      memory_order_relaxed);
          }
          v30 = *(_QWORD*)(a1 + 176);
          *(_QWORD*)(a1 + 168) = v27;
          *(_QWORD*)(a1 + 176) = v29;
          if (v30 != 0) {
            if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
              std___1___shared_weak_count___release_weak_alt1(v30);
            }
            v27 = *(_QWORD*)(a1 + 168);
          }
          if (v27 != 0) {
            goto LABEL_139;
          }
        LABEL_2:
          v4 = *(_QWORD*)(v25 + 200);
          *v3 = *(_QWORD*)(v25 + 192);
          v3[1] = v4;
          if (*(_QWORD*)(a1 + 168) != 0) {
            v2 = 4;
          }
          else {
            v2 = 3;
          }
          *(_DWORD*)a1 = v2;
        }
        else {
          v6 = *(_QWORD**)(a1 + 24);
          v7 = (_QWORD*)v6[1];
          *(_QWORD*)(*v6 + 8LL) = v7;
          *v7 = *v6;
          --*(_QWORD*)(a1 + 32);
          DGame_1920490_alt1(v6 + 2);
          v8 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v8);
          v9 = *(_QWORD*)(a1 + 40);
          if (v9 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v9 + 32LL))(v9);
          }
          v2 = 1;
          *(_DWORD*)a1 = 1;
        }
      }
      if (v2 == 0) {
        break;
      }
      if (v2 == 1) {
        if (*(_QWORD*)(a1 + 32) != 0) {
          v2 = 2;
          *(_DWORD*)a1 = 2;
        }
        else {
          v59 = *(_QWORD*)(a1 + 168);
          if (v59 != 0) {
            v60 = *(_QWORD*)(v59 + 1328);
            *(_QWORD*)(v59 + 1320) = 0;
            *(_QWORD*)(v59 + 1328) = 0;
            if (v60 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v60 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v60 + 16LL))(v60);
              std___1___shared_weak_count___release_weak_alt1(v60);
            }
          }
          v61 = *(_QWORD*)(a1 + 176);
          *(_QWORD*)(a1 + 168) = 0;
          *(_QWORD*)(a1 + 176) = 0;
          if (v61 != 0) {
            if (atomic_fetch_add((atomic_ullong* volatile)(v61 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v61 + 16LL))(v61);
              std___1___shared_weak_count___release_weak_alt1(v61);
            }
            v2 = 0;
            *(_DWORD*)a1 = 0;
          }
          else {
            v2 = 0;
            *(_DWORD*)a1 = 0;
          }
        }
      }
    }
    if (*(_QWORD*)(a1 + 32) == 0) {
      break;
    }
    v24 = *(_DWORD*)(a1 + 8);
    v2 = 1;
    *(_DWORD*)a1 = 1;
    *(_DWORD*)(a1 + 4) = v24;
  }
  v90 = *(_DWORD*)(a1 + 4);
  v91 = __OFSUB__(v90, 1);
  v92 = v90 - 1;
  if (v92 < 0 == v91) {
    *(_DWORD*)(a1 + 4) = v92;
  }
}

_QWORD* SpineCaptureProcessor_Unknown2(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;

  v2 = *(_QWORD**)(a1 + 48);
  v3 = (_QWORD*)(a1 + 40);
  if (v2 == (_QWORD*)(a1 + 40)) {
    v9 = (_QWORD*)(a1 + 40);
    v8 = (_QWORD*)(a1 + 40);
  }
  else {
    v5 = (_QWORD*)(a1 + 40);
    v6 = (_QWORD*)(a1 + 40);
    do {
      v7 = (_QWORD*)v2[5];
      if (v7 == v2 + 4) {
      LABEL_7:
        v8 = v5;
      }
      else {
        while ((GameRoutine_1922700(a2, v7 + 2) & 1) == 0) {
          v7 = (_QWORD*)v7[1];
          if (v7 == v2 + 4) {
            goto LABEL_7;
          }
        }
        v8 = v2;
        if (v5 != v3) {
          if (v5[6] <= v2[6]) {
            v8 = v5;
          }
          else {
            v8 = v2;
          }
        }
      }
      v9 = v2;
      if (v6 != v3) {
        if (v6[6] <= v2[6]) {
          v9 = v6;
        }
        else {
          v9 = v2;
        }
      }
      v2 = (_QWORD*)v2[1];
      v5 = v8;
      v6 = v9;
    } while (v2 != v3);
  }
  if (v8 == v3) {
    return v9;
  }
  else {
    return v8;
  }
}

_QWORD* SpineCaptureProcessor_Destructor(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;

  v1 = result;
  *result = game_SpineCaptureProcessor_vtable;
  if (result[7] != 0) {
    v2 = (_QWORD*)result[6];
    v3 = result + 5;
    v4 = *(_QWORD**)(result[5] + 8LL);
    *(_QWORD*)(*v2 + 8LL) = v4;
    *v4 = *v2;
    result[7] = 0;
    if (v2 != result + 5) {
      v5 = fw_memory_g_heap_manager_ptr;
      do {
        v6 = (_QWORD*)v2[1];
        GameRoutine_1921e00(v2 + 2);
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v7);
        v2 = v6;
      } while (v6 != v3);
    }
  }
  v8 = v1[4];
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    return (_QWORD*)std___1___shared_weak_count___release_weak(v8);
  }
  return result;
}

__int64 SpineCaptureProcessor_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *a1 = game_SpineCaptureProcessor_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if (a1[7] != 0) {
    v3 = (_QWORD*)a1[6];
    v4 = a1 + 5;
    v5 = *(_QWORD**)(a1[5] + 8LL);
    *(_QWORD*)(*v3 + 8LL) = v5;
    *v5 = *v3;
    a1[7] = 0;
    if (v3 != a1 + 5) {
      do {
        v6 = (_QWORD*)v3[1];
        GameRoutine_1921e00(v3 + 2);
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v7);
        v3 = v6;
      } while (v6 != v4);
    }
  }
  v8 = a1[4];
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v9);
}

__int64 SpineCaptureProcessor_1921e00(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;

  v1 = *(_QWORD*)(result + 176);
  v2 = result;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    result = std___1___shared_weak_count___release_weak(v1);
    if ((*(_BYTE*)(v2 + 144) & 1) == 0) {
      goto LABEL_9;
    }
  }
  else if ((*(_BYTE*)(result + 144) & 1) == 0) {
    goto LABEL_9;
  }
  if (*(_QWORD*)(v2 + 160) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }

LABEL_9:
  if ((*(_BYTE*)(v2 + 120) & 1) != 0 && *(_QWORD*)(v2 + 136) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  if ((*(_BYTE*)(v2 + 96) & 1) != 0 && *(_QWORD*)(v2 + 112) != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  if ((*(_BYTE*)(v2 + 72) & 1) != 0 && *(_QWORD*)(v2 + 88) != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
  }
  v7 = *(_QWORD*)(v2 + 64);
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    result = std___1___shared_weak_count___release_weak(v7);
  }
  v8 = *(_QWORD*)(v2 + 48);
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    result = std___1___shared_weak_count___release_weak(v8);
  }
  if (*(_QWORD*)(v2 + 32) != 0) {
    v9 = *(_QWORD**)(v2 + 24);
    v10 = (_QWORD*)(v2 + 16);
    v11 = *(_QWORD**)(*(_QWORD*)(v2 + 16) + 8LL);
    *(_QWORD*)(*v9 + 8LL) = v11;
    *v11 = *v9;
    *(_QWORD*)(v2 + 32) = 0;
    if (v9 != (_QWORD*)(v2 + 16)) {
      v12 = fw_memory_g_heap_manager_ptr;
      do {
        v13 = (_QWORD*)v9[1];
        DGame_1920490((__int64)(v9 + 2));
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
          v14 = 128;
        }
        else {
          v14 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v14);
        v9 = v13;
      } while (v13 != v10);
    }
  }
  return result;
}

bool SpineCaptureProcessor_1922700(unsigned __int8* a1, unsigned __int8* a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int8* v8;
  unsigned __int8* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int8* v14;
  unsigned __int8* v15;

  v2 = *a1;
  if ((v2 & 1) != 0) {
    v3 = *((_QWORD*)a1 + 1);
  }
  else {
    v3 = v2 >> 1;
  }
  v4 = *a2;
  v5 = *((_QWORD*)a2 + 1);
  if ((v4 & 1) == 0) {
    v5 = v4 >> 1;
  }
  if (v3 != v5) {
    return false;
  }
  if ((v2 & 1) != 0) {
    v8 = *((unsigned __int8**)a1 + 2);
  }
  else {
    v8 = a1 + 1;
  }
  if ((v4 & 1) != 0) {
    v9 = *((unsigned __int8**)a2 + 2);
  }
  else {
    v9 = a2 + 1;
  }
  if ((unsigned int)memcmp(v8, v9, v3) != 0) {
    return false;
  }
  v10 = a1[24];
  if ((v10 & 1) != 0) {
    v11 = *((_QWORD*)a1 + 4);
  }
  else {
    v11 = v10 >> 1;
  }
  v12 = a2[24];
  v13 = *((_QWORD*)a2 + 4);
  if ((v12 & 1) == 0) {
    v13 = v12 >> 1;
  }
  if (v11 != v13) {
    return false;
  }
  if ((v10 & 1) != 0) {
    v14 = *((unsigned __int8**)a1 + 5);
  }
  else {
    v14 = a1 + 25;
  }
  if ((v12 & 1) != 0) {
    v15 = *((unsigned __int8**)a2 + 5);
  }
  else {
    v15 = a2 + 25;
  }
  return (unsigned int)memcmp(v14, v15, v11) == 0;
}

#pragma GCC visibility pop
