#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_193ab40(_QWORD);
__int64 GameRoutine_193b240(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_193b3e0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a9a7e0(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_os_ConvertToTimeSpan(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _DWORD GameData_1b5e540[10];
extern __int64 (*wld_LODModule_vtable[])();
extern __int64 GameData_2132398[3];
extern __int64 as_g_base_frame_counter;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* game_g_frame_clock_ptr[3];
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);
__int64 LODModule_Destructor(__int64 a1);
__int64 LODModule_Unknown6(__int64 result);
__int64 LODModule_Unknown7(__int64 result);
__int64 LODModule_Unknown8(__int64 result);
__int64 LODModule_Unknown9(__int64 result);
__int64 LODModule_a98560(__int64 result);

__int64 LODModule_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = wld_LODModule_vtable;
  v3 = a1 + 40;
  v4 = a1 + 48;
  if (*(_QWORD*)(a1 + 40) != 0 && *(_QWORD*)(a1 + 48) != v2) {
    GameRoutine_a9a7e0();
    *(_QWORD*)(a1 + 40) = 0;
    GameRoutine_193b240(v4, 0, 0, 0);
    GameRoutine_193b3e0(a1 + 72, 0, 0, 0);
    *(_DWORD*)(a1 + 104) = 0;
  }
  v6 = *(_QWORD**)(a1 + 184);
  v7 = fw_memory_g_heap_manager_ptr;
  if (v6 != nullptr) {
    do {
      v8 = (_QWORD*)*v6;
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
        v9 = 128;
      }
      else {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v9, v6);
      v6 = v8;
    } while (v8 != nullptr);
  }
  v10 = *(_QWORD*)(a1 + 168);
  *(_QWORD*)(a1 + 168) = 0;
  if (v10 != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v11, v10);
  }
  v12 = *(_QWORD*)(a1 + 136);
  if (v12 != 0) {
    v13 = *(_QWORD*)v7;
    *(_QWORD*)(a1 + 144) = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(v13 + v14, v12);
  }
  GameRoutine_193ab40(v3);
  result = *(_QWORD*)(a1 + 32);
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

__int64 LODModule_Unknown6(__int64 result)
{
  __int64 v1;
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
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
  int v21;
  __int64 v22;
  __int64 v23;
  int v24;
  _QWORD* v25;
  __int64 v26;
  float v27;
  float v28;
  bool v29;
  int v30;
  __int64 v31;
  int v32;
  __int64 v33;
  __int64 v34;
  float v35;
  __int64 v36;
  __int64 v37;
  float v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  _DWORD* v46;
  int v47;
  __int64 v48;
  _DWORD* v49;
  int v50;
  _DWORD* v51;
  int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  char v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  _DWORD* v62;
  _QWORD* v63;
  __int64 v64;
  float v65;
  float v66;
  bool v67;
  int v68;
  __int64 v69;
  int v70;
  _QWORD* v71;
  __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  float v77;
  float v78;
  bool v79;
  int v80;
  __int64 v81;
  int v82;
  unsigned __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;

  v1 = *(_QWORD*)(result + 8);
  v2 = GameData_1b5e540[*(int*)(v1 + 284)];
  if (*(_BYTE*)(v1 + 300) != 2) {
    if (*(_BYTE*)(result + 216) != 0) {
      v14 = *(_QWORD*)(result + 56) - *(_QWORD*)(result + 48);
      if (v14 != 0) {
        v15 = v14 >> 3;
        v16 = 0;
        do {
          v17 = *(_QWORD*)(*(_QWORD*)(result + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(result + 48) + 8 * v16);
          *(_QWORD*)(result + 96) = v17;
          *(_DWORD*)(v17 + 180) = v2;
          v18 = *(_QWORD*)(result + 96);
          if (*(_BYTE*)(v18 + 186) == 1) {
            v19 = *(_QWORD*)(v18 + 192);
            v20 = *(_QWORD*)(v18 + 200);
            while (v19 != v20) {
              if ((*(_BYTE*)(v19 + 22) & 1) == 0 &&
                  (*(_BYTE*)(v19 + 20) & 1) != 0) {
                v21 = *(_DWORD*)(v19 + 12);
                *(_DWORD*)v19 = v21;
                *(_DWORD*)(v19 + 4) = v21;
              }
              *(_DWORD*)(v19 + 16) = -2;
              *(_BYTE*)(v19 + 21) = 0;
              v19 += 24;
            }
            *(_BYTE*)(v18 + 186) = 0;
            v18 = *(_QWORD*)(result + 96);
          }
          v22 = *(_QWORD*)(v18 + 192);
          v23 = *(_QWORD*)(v18 + 200);
          while (v22 != v23) {
            if ((*(_BYTE*)(v22 + 20) & 1) == 0 &&
                (*(_BYTE*)(v22 + 21) & 1) == 0 &&
                (*(_BYTE*)(v22 + 22) & 1) == 0) {
              v24 = *(_DWORD*)(v22 + 4);
              *(_DWORD*)(v22 + 8) = 0;
              *(_DWORD*)v22 = v24;
            }
            v22 += 24;
          }
          *(_BYTE*)(v18 + 187) = 0;
          ++v16;
          *(_BYTE*)(*(_QWORD*)(result + 96) + 185LL) = 1;
          *(_QWORD*)(result + 96) = 0;
        } while (v16 != v15);
      }
      *(_BYTE*)(result + 216) = 0;
    }
    if ((*(_BYTE*)(result + 164) & 1) != 0) {
      goto LABEL_48;
    }
    v54 = *(_QWORD*)(result + 48);
    v53 = *(_QWORD*)(result + 56);
    v55 = v53 - v54;
    if (v53 == v54) {
      goto LABEL_97;
    }
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v59 = (v55 >> 3) - 1;
    while (1) {
      v60 = *(_QWORD*)(result + 136);
      v61 = *(_QWORD*)(*(_QWORD*)(result + 40) + 56LL) +
            224LL * *(_QWORD*)(v54 + 8 * v57);
      *(_QWORD*)(result + 96) = v61;
      v62 = *(_DWORD**)(v61 + 192);
      if (v62[2] == 2) {
        v58 = 1;
        v62[2] = 3;
        *(_BYTE*)(v60 + v56) = 1;
        *(_DWORD*)(result + 160) = 1065353216;
        *(_BYTE*)(result + 164) = 1;
        v62 = *(_DWORD**)(*(_QWORD*)(result + 96) + 192LL);
      }
      if (v62[8] == 2) {
        v62[8] = 3;
        v58 = 1;
        *(_BYTE*)(v60 + v56 + 1) = 1;
        *(_DWORD*)(result + 160) = 1065353216;
        *(_BYTE*)(result + 164) = 1;
        v62 = *(_DWORD**)(*(_QWORD*)(result + 96) + 192LL);
      }
      if (v62[14] == 2) {
        v58 = 1;
        v62[14] = 3;
        *(_BYTE*)(v60 + v56 + 2) = 1;
        *(_DWORD*)(result + 160) = 1065353216;
        *(_BYTE*)(result + 164) = 1;
        *(_QWORD*)(result + 96) = 0;
        if (v59 == v57) {
          goto LABEL_48;
        }
      }
      else {
        *(_QWORD*)(result + 96) = 0;
        if (v59 == v57) {
          if ((v58 & 1) == 0) {
            goto LABEL_97;
          }
        LABEL_48:
          v33 = result;
          v34 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 16632);
          if (*(_QWORD*)(*game_g_frame_clock_ptr[0] + 16616) != 0) {
            v34 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 16616);
          }
          v35 = *(float*)(v34 + 60);
          v36 = nn_os_ConvertToTimeSpan(
              *(_QWORD*)(as_g_base_frame_counter + 136));
          if ((*(_BYTE*)(v33 + 164) & 1) == 0) {
            GameRoutine_8123d0(v36);
          }
          v37 = v36;
          result = v33;
          v38 = fmaxf(
              *(float*)(v33 + 160) +
                  (float)((float)((float)(v37 / 1000000) * -0.001f) / v35),
              0.0f);
          if (v38 == 0.0f) {
            v40 = *(_QWORD*)(v33 + 48);
            v39 = *(_QWORD*)(v33 + 56);
            if (v39 != v40) {
              v41 = (v39 - v40) >> 3;
              v42 = 0;
              v43 = 0;
              do {
                v44 = *(_QWORD*)(v33 + 136);
                v45 = *(_QWORD*)(*(_QWORD*)(v33 + 40) + 56LL) +
                      224LL * *(_QWORD*)(*(_QWORD*)(v33 + 48) + 8 * v43);
                *(_QWORD*)(v33 + 96) = v45;
                if (*(_BYTE*)(v44 + v42) == 1) {
                  v46 = *(_DWORD**)(v45 + 192);
                  if (v46[2] == 3) {
                    v47 = v46[1];
                    v46[2] = 1;
                    *v46 = v47;
                  }
                  *(_BYTE*)(v44 + v42) = 0;
                }
                v48 = v44 + v42;
                if (*(_BYTE*)(v48 + 1) == 1) {
                  v49 = *(_DWORD**)(*(_QWORD*)(v33 + 96) + 192LL);
                  if (v49[8] == 3) {
                    v50 = v49[7];
                    v49[8] = 1;
                    v49[6] = v50;
                  }
                  *(_BYTE*)(v48 + 1) = 0;
                }
                if (*(_BYTE*)(v48 + 2) == 1) {
                  v51 = *(_DWORD**)(*(_QWORD*)(v33 + 96) + 192LL);
                  if (v51[14] == 3) {
                    v52 = v51[13];
                    v51[14] = 1;
                    v51[12] = v52;
                  }
                  *(_BYTE*)(v48 + 2) = 0;
                }
                ++v43;
                v42 += 3;
                *(_QWORD*)(v33 + 96) = 0;
              } while (v41 != v43);
            }
            v63 = *(_QWORD**)(v33 + 184);
            *(_DWORD*)(v33 + 160) = 0;
            *(_BYTE*)(v33 + 164) = 0;
            if (v63 == nullptr) {
            LABEL_97:
              v72 = *(_QWORD*)(result + 56) - *(_QWORD*)(result + 48);
              if (v72 != 0) {
                v73 = v72 >> 3;
                v74 = ((unsigned __int64)v72 >> 3) & 3;
                if (v73 >= 4) {
                  v83 = v73 & 0xFFFFFFFFFFFFFFFCLL;
                  v75 = 0;
                  do {
                    v84 = *(_QWORD*)(*(_QWORD*)(result + 40) + 56LL) +
                          224LL * *(_QWORD*)(*(_QWORD*)(result + 48) + 8 * v75);
                    *(_QWORD*)(result + 96) = v84;
                    *(_DWORD*)(v84 + 180) = v2;
                    *(_BYTE*)(*(_QWORD*)(result + 96) + 185LL) = 1;
                    *(_QWORD*)(result + 96) = 0;
                    v85 = *(_QWORD*)(*(_QWORD*)(result + 40) + 56LL) +
                          224LL *
                              *(_QWORD*)(*(_QWORD*)(result + 48) + 8 * v75 + 8);
                    *(_QWORD*)(result + 96) = v85;
                    *(_DWORD*)(v85 + 180) = v2;
                    *(_BYTE*)(*(_QWORD*)(result + 96) + 185LL) = 1;
                    *(_QWORD*)(result + 96) = 0;
                    v86 = *(_QWORD*)(*(_QWORD*)(result + 40) + 56LL) +
                          224LL * *(_QWORD*)(*(_QWORD*)(result + 48) + 8 * v75 +
                                             16);
                    *(_QWORD*)(result + 96) = v86;
                    *(_DWORD*)(v86 + 180) = v2;
                    *(_BYTE*)(*(_QWORD*)(result + 96) + 185LL) = 1;
                    *(_QWORD*)(result + 96) = 0;
                    v87 = *(_QWORD*)(result + 48) + 8 * v75;
                    v75 += 4;
                    v88 = *(_QWORD*)(*(_QWORD*)(result + 40) + 56LL) +
                          224LL * *(_QWORD*)(v87 + 24);
                    *(_QWORD*)(result + 96) = v88;
                    *(_DWORD*)(v88 + 180) = v2;
                    *(_BYTE*)(*(_QWORD*)(result + 96) + 185LL) = 1;
                    *(_QWORD*)(result + 96) = 0;
                  } while (v83 != v75);
                }
                else {
                  v75 = 0;
                }
                if (v74 != 0) {
                  v89 = 8 * v75;
                  do {
                    --v74;
                    v90 = *(_QWORD*)(*(_QWORD*)(result + 48) + v89);
                    v89 += 8;
                    v91 =
                        *(_QWORD*)(*(_QWORD*)(result + 40) + 56LL) + 224 * v90;
                    *(_QWORD*)(result + 96) = v91;
                    *(_DWORD*)(v91 + 180) = v2;
                    *(_BYTE*)(*(_QWORD*)(result + 96) + 185LL) = 1;
                    *(_QWORD*)(result + 96) = 0;
                  } while (v74 != 0);
                }
              }
              return result;
            }
            while (2) {
              v64 = v63[2];
              if (*(float*)(v64 + 132) == 1.0f) {
                if ((*(_BYTE*)(v64 + 169) & 1) != 0) {
                  goto LABEL_94;
                }
              }
              else {
                v65 = *(float*)(v64 + 120);
                v66 = *(float*)(v64 + 144);
                *(_DWORD*)(v64 + 132) = 1065353216;
                if (v65 == v66 &&
                    *(float*)(v64 + 124) == *(float*)(v64 + 148) &&
                    (*(float*)(v64 + 128) == *(float*)(v64 + 152)
                         ? (v67 = *(float*)(v64 + 156) == 1.0f)
                         : (v67 = false),
                     v67)) {
                  v68 = *(_DWORD*)(v64 + 136);
                  v69 = ((unsigned __int8)v68 ^
                         (unsigned __int8)*(_DWORD*)(v64 + 160)) &
                        0x3F;
                  *(_BYTE*)(v64 + 169) =
                      (((unsigned __int8)v68 ^
                        (unsigned __int8)*(_DWORD*)(v64 + 160)) &
                       0x3F) != 0;
                  if (v69 != 0) {
                    goto LABEL_94;
                  }
                }
                else {
                  *(_BYTE*)(v64 + 169) = 1;
                LABEL_94:
                  v70 = *(unsigned __int8*)(v64 + 20);
                  *(_BYTE*)(v64 + 20) = v70 & 0xFB;
                  if (v70 != (v70 & 0xFFFFFFFB)) {
                    *(_BYTE*)(*(_QWORD*)(v64 + 8) + 728LL) = 0;
                  }
                }
              }
              v63 = (_QWORD*)*v63;
              if (v63 == nullptr) {
                goto LABEL_97;
              }
              continue;
            }
          }
          v71 = *(_QWORD**)(v33 + 184);
          *(float*)(v33 + 160) = v38;
          *(_BYTE*)(v33 + 164) = 1;
          if (v71 == nullptr) {
            goto LABEL_97;
          }
          while (2) {
            v76 = v71[2];
            if (*(float*)(v76 + 132) == v38) {
              if ((*(_BYTE*)(v76 + 169) & 1) != 0) {
                goto LABEL_112;
              }
            }
            else {
              v77 = *(float*)(v76 + 120);
              v78 = *(float*)(v76 + 144);
              *(float*)(v76 + 132) = v38;
              if (v77 == v78 && *(float*)(v76 + 124) == *(float*)(v76 + 148) &&
                  (*(float*)(v76 + 128) == *(float*)(v76 + 152)
                       ? (v79 = v38 == *(float*)(v76 + 156))
                       : (v79 = false),
                   v79)) {
                v80 = *(_DWORD*)(v76 + 136);
                v81 = ((unsigned __int8)v80 ^
                       (unsigned __int8)*(_DWORD*)(v76 + 160)) &
                      0x3F;
                *(_BYTE*)(v76 + 169) =
                    (((unsigned __int8)v80 ^
                      (unsigned __int8)*(_DWORD*)(v76 + 160)) &
                     0x3F) != 0;
                if (v81 != 0) {
                  goto LABEL_112;
                }
              }
              else {
                *(_BYTE*)(v76 + 169) = 1;
              LABEL_112:
                v82 = *(unsigned __int8*)(v76 + 20);
                *(_BYTE*)(v76 + 20) = v82 & 0xFB;
                if (v82 != (v82 & 0xFFFFFFFB)) {
                  *(_BYTE*)(*(_QWORD*)(v76 + 8) + 728LL) = 0;
                }
              }
            }
            v71 = (_QWORD*)*v71;
            if (v71 == nullptr) {
              goto LABEL_97;
            }
            continue;
          }
        }
      }
      v54 = *(_QWORD*)(result + 48);
      ++v57;
      v56 += 3;
    }
  }
  if ((*(_BYTE*)(result + 216) & 1) == 0) {
    v3 = *(_QWORD*)(result + 56) - *(_QWORD*)(result + 48);
    if (v3 != 0) {
      v4 = v3 >> 3;
      v5 = 0;
      v6 = (_QWORD*)GameData_2132398[0];
      do {
        v9 = *(_QWORD*)(*(_QWORD*)(result + 40) + 56LL) +
             224LL * *(_QWORD*)(*(_QWORD*)(result + 48) + 8 * v5);
        *(_QWORD*)(result + 96) = v9;
        *(_DWORD*)(v9 + 180) = v2;
        v10 = *(_QWORD*)(result + 96);
        v11 = *(_QWORD*)(v10 + 192);
        v12 = *(_QWORD*)(v10 + 200);
        if (v11 != v12) {
          v13 = *(_DWORD*)(*v6 + 112LL * *(int*)(v10 + 176) + 64) - 1;
          do {
            if ((*(_BYTE*)(v11 + 22) & 1) == 0) {
              *(_DWORD*)v11 = v13;
              *(_DWORD*)(v11 + 4) = v13;
              *(_DWORD*)(v11 + 8) = 1;
            }
            *(_DWORD*)(v11 + 16) = v13;
            *(_BYTE*)(v11 + 21) = 1;
            v11 += 24;
          } while (v11 != v12);
        }
        *(_BYTE*)(v10 + 186) = 1;
        v7 = 3 * v5++;
        *(_QWORD*)(result + 96) = 0;
        v8 = *(_QWORD*)(result + 136) + v7;
        *(_BYTE*)(v8 + 2) = 0;
        *(_WORD*)v8 = 0;
      } while (v5 != v4);
    }
    v25 = *(_QWORD**)(result + 184);
    *(_DWORD*)(result + 160) = 0;
    for (*(_BYTE*)(result + 164) = 0; v25 != nullptr; v25 = (_QWORD*)*v25) {
      v26 = v25[2];
      if (*(float*)(v26 + 132) == 1.0f) {
        if ((*(_BYTE*)(v26 + 169) & 1) != 0) {
          goto LABEL_44;
        }
      }
      else {
        v27 = *(float*)(v26 + 120);
        v28 = *(float*)(v26 + 144);
        *(_DWORD*)(v26 + 132) = 1065353216;
        if (v27 != v28 || *(float*)(v26 + 124) != *(float*)(v26 + 148) ||
            (*(float*)(v26 + 128) == *(float*)(v26 + 152)
                 ? (v29 = *(float*)(v26 + 156) == 1.0f)
                 : (v29 = false),
             !v29)) {
          *(_BYTE*)(v26 + 169) = 1;
        LABEL_44:
          v32 = *(unsigned __int8*)(v26 + 20);
          *(_BYTE*)(v26 + 20) = v32 & 0xFB;
          if (v32 != (v32 & 0xFFFFFFFB)) {
            *(_BYTE*)(*(_QWORD*)(v26 + 8) + 728LL) = 0;
          }
          continue;
        }
        v30 = *(_DWORD*)(v26 + 136);
        v31 = ((unsigned __int8)v30 ^ (unsigned __int8)*(_DWORD*)(v26 + 160)) &
              0x3F;
        *(_BYTE*)(v26 + 169) =
            (((unsigned __int8)v30 ^ (unsigned __int8)*(_DWORD*)(v26 + 160)) &
             0x3F) != 0;
        if (v31 != 0) {
          goto LABEL_44;
        }
      }
    }
    *(_BYTE*)(result + 216) = 1;
  }
  return result;
}

__int64 LODModule_Unknown7(__int64 result)
{
  char v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  _QWORD* v10;
  __int64 v11;
  float v12;
  float v13;
  bool v14;
  int v15;
  __int64 v16;
  int v17;

  v1 = *(_BYTE*)(result + 164);
  v2 = *(_QWORD*)(result + 56) - *(_QWORD*)(result + 48);
  if (v2 != 0) {
    v3 = v2 >> 3;
    v4 = 0;
    do {
      v5 = *(_QWORD*)(result + 136) + 3 * v4;
      v6 = *(_QWORD*)(*(_QWORD*)(result + 40) + 56LL) +
           224LL * *(_QWORD*)(*(_QWORD*)(result + 48) + 8 * v4);
      *(_QWORD*)(result + 96) = v6;
      if (*(_BYTE*)(v6 + 187) == 1) {
        v7 = *(_QWORD*)(v6 + 192);
        v8 = *(_QWORD*)(v6 + 200);
        while (v7 != v8) {
          if ((*(_BYTE*)(v7 + 20) & 1) == 0 && (*(_BYTE*)(v7 + 21) & 1) == 0 &&
              (*(_BYTE*)(v7 + 22) & 1) == 0) {
            v9 = *(_DWORD*)(v7 + 4);
            *(_DWORD*)(v7 + 8) = 0;
            *(_DWORD*)v7 = v9;
          }
          v7 += 24;
        }
        *(_BYTE*)(v6 + 187) = 0;
        *(_BYTE*)(*(_QWORD*)(result + 96) + 185LL) = 1;
        *(_BYTE*)(v5 + 2) = 0;
        *(_WORD*)v5 = 0;
      }
      else if ((v1 & 1) == 0 || (*(_BYTE*)v5 & 1) != 0 ||
               (*(_BYTE*)(v5 + 1) & 1) != 0) {
        v1 = 0;
      }
      else {
        v1 = *(_BYTE*)(v5 + 2) ^ 1;
      }
      ++v4;
      *(_QWORD*)(result + 96) = 0;
    } while (v4 != v3);
  }
  if ((v1 & 1) != 0) {
    v10 = *(_QWORD**)(result + 184);
    *(_DWORD*)(result + 160) = 0;
    for (*(_BYTE*)(result + 164) = 0; v10 != nullptr; v10 = (_QWORD*)*v10) {
      v11 = v10[2];
      if (*(float*)(v11 + 132) == 1.0) {
        if ((*(_BYTE*)(v11 + 169) & 1) != 0) {
          goto LABEL_33;
        }
      }
      else {
        v12 = *(float*)(v11 + 120);
        v13 = *(float*)(v11 + 144);
        *(_DWORD*)(v11 + 132) = 1065353216;
        if (v12 != v13 || *(float*)(v11 + 124) != *(float*)(v11 + 148) ||
            (*(float*)(v11 + 128) == *(float*)(v11 + 152)
                 ? (v14 = *(float*)(v11 + 156) == 1.0)
                 : (v14 = false),
             !v14)) {
          *(_BYTE*)(v11 + 169) = 1;
        LABEL_33:
          v17 = *(unsigned __int8*)(v11 + 20);
          *(_BYTE*)(v11 + 20) = v17 & 0xFB;
          if (v17 != (v17 & 0xFFFFFFFB)) {
            *(_BYTE*)(*(_QWORD*)(v11 + 8) + 728LL) = 0;
          }
          continue;
        }
        v15 = *(_DWORD*)(v11 + 136);
        v16 = ((unsigned __int8)v15 ^ (unsigned __int8)*(_DWORD*)(v11 + 160)) &
              0x3F;
        *(_BYTE*)(v11 + 169) =
            (((unsigned __int8)v15 ^ (unsigned __int8)*(_DWORD*)(v11 + 160)) &
             0x3F) != 0;
        if (v16 != 0) {
          goto LABEL_33;
        }
      }
    }
  }
  return result;
}

__int64 LODModule_Unknown8(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;

  if (*(_BYTE*)(result + 217) != 1) {
    return result;
  }
  v1 = *(_QWORD*)(result + 56) - *(_QWORD*)(result + 48);
  if (v1 == 0) {
    goto LABEL_33;
  }
  if (v1 != 8) {
    v2 = 0;
  LABEL_16:
    v8 = *(_QWORD*)(*(_QWORD*)(result + 40) + 56LL) +
         224LL * *(_QWORD*)(*(_QWORD*)(result + 48) + 8 * v2);
    *(_QWORD*)(result + 96) = v8;
    v9 = *(_QWORD*)(v8 + 192);
    v10 = *(_QWORD*)(v8 + 200);
    while (v9 != v10) {
      if ((*(_BYTE*)(v9 + 21) & 1) != 0) {
        v11 = 16;
      LABEL_18:
        v12 = *(_DWORD*)(v9 + v11);
        *(_DWORD*)v9 = v12;
        *(_DWORD*)(v9 + 4) = v12;
        goto LABEL_19;
      }
      if (*(_BYTE*)(v9 + 20) == 1) {
        v11 = 12;
        goto LABEL_18;
      }
    LABEL_19:
      *(_BYTE*)(v9 + 22) = 0;
      v9 += 24;
    }
    v14 = *(_QWORD*)(result + 40);
    v13 = *(_QWORD*)(result + 48);
    *(_QWORD*)(result + 96) = 0;
    v15 = *(_QWORD*)(v14 + 56) + 224LL * *(_QWORD*)(v13 + 8 * v2 + 8);
    *(_QWORD*)(result + 96) = v15;
    v16 = *(_QWORD*)(v15 + 192);
    v17 = *(_QWORD*)(v15 + 200);
    while (1) {
      if (v16 == v17) {
        v2 += 2;
        *(_QWORD*)(result + 96) = 0;
        if (v2 == ((v1 >> 3) & 0xFFFFFFFFFFFFFFFELL)) {
          goto LABEL_5;
        }
        goto LABEL_16;
      }
      if ((*(_BYTE*)(v16 + 21) & 1) != 0) {
        break;
      }
      if (*(_BYTE*)(v16 + 20) == 1) {
        v18 = 12;
        goto LABEL_26;
      }
    LABEL_27:
      *(_BYTE*)(v16 + 22) = 0;
      v16 += 24;
    }
    v18 = 16;
  LABEL_26:
    v19 = *(_DWORD*)(v16 + v18);
    *(_DWORD*)v16 = v19;
    *(_DWORD*)(v16 + 4) = v19;
    goto LABEL_27;
  }
  v2 = 0;

LABEL_5:
  if ((v1 & 8) == 0) {
    goto LABEL_33;
  }
  v3 = *(_QWORD*)(*(_QWORD*)(result + 40) + 56LL) +
       224LL * *(_QWORD*)(*(_QWORD*)(result + 48) + 8 * v2);
  *(_QWORD*)(result + 96) = v3;
  v4 = *(_QWORD*)(v3 + 192);
  v5 = *(_QWORD*)(v3 + 200);
  while (v4 != v5) {
    if ((*(_BYTE*)(v4 + 21) & 1) != 0) {
      v6 = 16;
    LABEL_8:
      v7 = *(_DWORD*)(v4 + v6);
      *(_DWORD*)v4 = v7;
      *(_DWORD*)(v4 + 4) = v7;
      goto LABEL_9;
    }
    if (*(_BYTE*)(v4 + 20) == 1) {
      v6 = 12;
      goto LABEL_8;
    }
  LABEL_9:
    *(_BYTE*)(v4 + 22) = 0;
    v4 += 24;
  }
  *(_QWORD*)(result + 96) = 0;

LABEL_33:
  *(_BYTE*)(result + 217) = 0;
  return result;
}

__int64 LODModule_Unknown9(__int64 result)
{
  _BYTE* v1;
  bool v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 k;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 ii;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 i;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 j;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 m;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 n;

  v1 = *(_BYTE**)(result + 8);
  v2 = v1[300] == 3 && v1[301] == 3;
  if (v2 || v1[302] == 1) {
    v3 = *(_QWORD*)(result + 56) - *(_QWORD*)(result + 48);
    if (v3 != 0) {
      if (v3 == 8) {
        v4 = 0;
      }
      else {
        v4 = 0;
        do {
          v17 = *(_QWORD*)(*(_QWORD*)(result + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(result + 48) + 8 * v4);
          *(_QWORD*)(result + 96) = v17;
          v18 = *(_QWORD*)(v17 + 192);
          for (i = *(_QWORD*)(v17 + 200); v18 != i; v18 += 24) {
            *(_QWORD*)v18 = 0xFFFFFFFEFFFFFFFELL;
            *(_QWORD*)(v18 + 8) = 0xFFFFFFFE00000000LL;
            *(_DWORD*)(v18 + 16) = -2;
            *(_WORD*)(v18 + 20) = 0;
            *(_BYTE*)(v18 + 22) = 0;
          }
          *(_WORD*)(v17 + 186) = 0;
          *(_QWORD*)(result + 96) = 0;
          v20 = *(_QWORD*)(result + 136) + 3 * v4;
          *(_BYTE*)(v20 + 2) = 0;
          *(_WORD*)v20 = 0;
          v21 = v4 | 1;
          v22 = *(_QWORD*)(*(_QWORD*)(result + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(result + 48) + 8 * (v4 | 1));
          *(_QWORD*)(result + 96) = v22;
          v23 = *(_QWORD*)(v22 + 192);
          for (j = *(_QWORD*)(v22 + 200); v23 != j; v23 += 24) {
            *(_QWORD*)v23 = 0xFFFFFFFEFFFFFFFELL;
            *(_QWORD*)(v23 + 8) = 0xFFFFFFFE00000000LL;
            *(_DWORD*)(v23 + 16) = -2;
            *(_WORD*)(v23 + 20) = 0;
            *(_BYTE*)(v23 + 22) = 0;
          }
          *(_WORD*)(v22 + 186) = 0;
          v4 += 2;
          *(_QWORD*)(result + 96) = 0;
          v16 = *(_QWORD*)(result + 136) + 3 * v21;
          *(_BYTE*)(v16 + 2) = 0;
          *(_WORD*)v16 = 0;
        } while (v4 != ((v3 >> 3) & 0xFFFFFFFFFFFFFFFELL));
      }
      if ((v3 & 8) != 0) {
        v5 = *(_QWORD*)(*(_QWORD*)(result + 40) + 56LL) +
             224LL * *(_QWORD*)(*(_QWORD*)(result + 48) + 8 * v4);
        *(_QWORD*)(result + 96) = v5;
        v6 = *(_QWORD*)(v5 + 192);
        for (k = *(_QWORD*)(v5 + 200); v6 != k; v6 += 24) {
          *(_QWORD*)v6 = 0xFFFFFFFEFFFFFFFELL;
          *(_QWORD*)(v6 + 8) = 0xFFFFFFFE00000000LL;
          *(_DWORD*)(v6 + 16) = -2;
          *(_WORD*)(v6 + 20) = 0;
          *(_BYTE*)(v6 + 22) = 0;
        }
        *(_WORD*)(v5 + 186) = 0;
        *(_QWORD*)(result + 96) = 0;
        v8 = *(_QWORD*)(result + 136) + 3 * v4;
        *(_BYTE*)(v8 + 2) = 0;
        *(_WORD*)v8 = 0;
      }
    }
  }
  else if ((*(_BYTE*)(result + 217) & 1) == 0) {
    v9 = *(_QWORD*)(result + 56) - *(_QWORD*)(result + 48);
    if (v9 != 0) {
      if (v9 == 8) {
        v10 = 0;
      }
      else {
        v10 = 0;
        do {
          v27 = *(_QWORD*)(*(_QWORD*)(result + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(result + 48) + 8 * v10);
          *(_QWORD*)(result + 96) = v27;
          v28 = *(_QWORD*)(v27 + 192);
          for (m = *(_QWORD*)(v27 + 200); v28 != m; v28 += 24) {
            *(_QWORD*)v28 = 0;
            *(_DWORD*)(v28 + 8) = 1;
            *(_BYTE*)(v28 + 22) = 1;
          }
          v30 = *(_QWORD*)(result + 136);
          *(_QWORD*)(result + 96) = 0;
          v31 = v30 + 3 * v10;
          *(_BYTE*)(v31 + 2) = 0;
          *(_WORD*)v31 = 0;
          v32 = v10 | 1;
          v33 = *(_QWORD*)(*(_QWORD*)(result + 40) + 56LL) +
                224LL * *(_QWORD*)(*(_QWORD*)(result + 48) + 8 * (v10 | 1));
          *(_QWORD*)(result + 96) = v33;
          v34 = *(_QWORD*)(v33 + 192);
          for (n = *(_QWORD*)(v33 + 200); v34 != n; v34 += 24) {
            *(_QWORD*)v34 = 0;
            *(_DWORD*)(v34 + 8) = 1;
            *(_BYTE*)(v34 + 22) = 1;
          }
          v25 = *(_QWORD*)(result + 136);
          v10 += 2;
          *(_QWORD*)(result + 96) = 0;
          v26 = v25 + 3 * v32;
          *(_BYTE*)(v26 + 2) = 0;
          *(_WORD*)v26 = 0;
        } while (v10 != ((v9 >> 3) & 0xFFFFFFFFFFFFFFFELL));
      }
      if ((v9 & 8) != 0) {
        v11 = *(_QWORD*)(*(_QWORD*)(result + 40) + 56LL) +
              224LL * *(_QWORD*)(*(_QWORD*)(result + 48) + 8 * v10);
        *(_QWORD*)(result + 96) = v11;
        v12 = *(_QWORD*)(v11 + 192);
        for (ii = *(_QWORD*)(v11 + 200); v12 != ii; v12 += 24) {
          *(_QWORD*)v12 = 0;
          *(_DWORD*)(v12 + 8) = 1;
          *(_BYTE*)(v12 + 22) = 1;
        }
        v14 = *(_QWORD*)(result + 136);
        *(_QWORD*)(result + 96) = 0;
        v15 = v14 + 3 * v10;
        *(_BYTE*)(v15 + 2) = 0;
        *(_WORD*)v15 = 0;
      }
    }
    *(_BYTE*)(result + 217) = 1;
  }
  return result;
}

__int64 LODModule_a98560(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  _QWORD* v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  _QWORD* v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  __int64 v30;
  int v31;
  __int64 v32;
  int v33;
  __int64 v34;

  v1 = *(_QWORD*)(result + 56) - *(_QWORD*)(result + 48);
  if (v1 != 0) {
    v2 = *(_QWORD*)(result + 8);
    v3 = v1 >> 3;
    v4 = GameData_1b5e540[*(int*)(v2 + 284)];
    if (*(_BYTE*)(v2 + 300) == 2) {
      v5 = 0;
      v6 = (_QWORD*)GameData_2132398[0];
      do {
        v7 = *(_DWORD*)(result + 212);
        v8 = *(_QWORD*)(*(_QWORD*)(result + 40) + 56LL) +
             224LL * *(_QWORD*)(*(_QWORD*)(result + 48) + 8 * v5);
        *(_QWORD*)(result + 96) = v8;
        *(_DWORD*)(v8 + 176) = v7;
        if (*(_BYTE*)(v8 + 186) == 1) {
          v9 = *(_QWORD*)(v8 + 192);
          v10 = *(_QWORD*)(v8 + 200);
          if (v9 != v10) {
            v11 = *(_DWORD*)(*v6 + 112LL * v7 + 64) - 1;
            do {
              if ((*(_BYTE*)(v9 + 22) & 1) == 0) {
                *(_DWORD*)v9 = v11;
                *(_DWORD*)(v9 + 4) = v11;
                *(_DWORD*)(v9 + 8) = 1;
              }
              *(_DWORD*)(v9 + 16) = v11;
              *(_BYTE*)(v9 + 21) = 1;
              v9 += 24;
            } while (v9 != v10);
          }
        }
        *(_DWORD*)(*(_QWORD*)(result + 96) + 180LL) = v4;
        if (*(_BYTE*)(result + 116) == 1) {
          v12 = *(_DWORD*)(result + 112);
          v13 = *(_QWORD*)(*(_QWORD*)(result + 96) + 192LL);
          if ((*(_BYTE*)(v13 + 22) & 1) == 0 &&
              (*(_BYTE*)(v13 + 21) & 1) == 0) {
            *(_DWORD*)v13 = v12;
            *(_DWORD*)(v13 + 4) = v12;
            *(_DWORD*)(v13 + 8) = 1;
          }
          *(_DWORD*)(v13 + 12) = v12;
          *(_BYTE*)(v13 + 20) = 1;
        }
        if (*(_BYTE*)(result + 124) == 1) {
          v14 = *(_DWORD*)(result + 120);
          v15 = *(_QWORD*)(*(_QWORD*)(result + 96) + 192LL);
          if ((*(_BYTE*)(v15 + 46) & 1) == 0 &&
              (*(_BYTE*)(v15 + 45) & 1) == 0) {
            *(_DWORD*)(v15 + 24) = v14;
            *(_DWORD*)(v15 + 28) = v14;
            *(_DWORD*)(v15 + 32) = 1;
          }
          *(_DWORD*)(v15 + 36) = v14;
          *(_BYTE*)(v15 + 44) = 1;
        }
        if (*(_BYTE*)(result + 132) == 1) {
          v16 = *(_DWORD*)(result + 128);
          v17 = *(_QWORD*)(*(_QWORD*)(result + 96) + 192LL);
          if ((*(_BYTE*)(v17 + 70) & 1) == 0 &&
              (*(_BYTE*)(v17 + 69) & 1) == 0) {
            *(_DWORD*)(v17 + 48) = v16;
            *(_DWORD*)(v17 + 52) = v16;
            *(_DWORD*)(v17 + 56) = 1;
          }
          *(_DWORD*)(v17 + 60) = v16;
          *(_BYTE*)(v17 + 68) = 1;
        }
        v18 = *(_QWORD*)(result + 96);
        v19 = *(_QWORD*)(v18 + 192);
        v20 = *(_QWORD*)(v18 + 200);
        if (v19 != v20) {
          v21 = *(_DWORD*)(*v6 + 112LL * *(int*)(v18 + 176) + 64) - 1;
          do {
            if ((*(_BYTE*)(v19 + 22) & 1) == 0) {
              *(_DWORD*)v19 = v21;
              *(_DWORD*)(v19 + 4) = v21;
              *(_DWORD*)(v19 + 8) = 1;
            }
            *(_DWORD*)(v19 + 16) = v21;
            *(_BYTE*)(v19 + 21) = 1;
            v19 += 24;
          } while (v19 != v20);
        }
        ++v5;
        *(_BYTE*)(v18 + 186) = 1;
        *(_QWORD*)(result + 96) = 0;
      } while (v5 != v3);
    }
    else {
      v22 = 0;
      v23 = (_QWORD*)GameData_2132398[0];
      do {
        v24 = *(_DWORD*)(result + 212);
        v25 = *(_QWORD*)(*(_QWORD*)(result + 40) + 56LL) +
              224LL * *(_QWORD*)(*(_QWORD*)(result + 48) + 8 * v22);
        *(_QWORD*)(result + 96) = v25;
        *(_DWORD*)(v25 + 176) = v24;
        if (*(_BYTE*)(v25 + 186) == 1) {
          v26 = *(_QWORD*)(v25 + 192);
          v27 = *(_QWORD*)(v25 + 200);
          if (v26 != v27) {
            v28 = *(_DWORD*)(*v23 + 112LL * v24 + 64) - 1;
            do {
              if ((*(_BYTE*)(v26 + 22) & 1) == 0) {
                *(_DWORD*)v26 = v28;
                *(_DWORD*)(v26 + 4) = v28;
                *(_DWORD*)(v26 + 8) = 1;
              }
              *(_DWORD*)(v26 + 16) = v28;
              *(_BYTE*)(v26 + 21) = 1;
              v26 += 24;
            } while (v26 != v27);
          }
        }
        *(_DWORD*)(*(_QWORD*)(result + 96) + 180LL) = v4;
        if (*(_BYTE*)(result + 116) == 1) {
          v29 = *(_DWORD*)(result + 112);
          v30 = *(_QWORD*)(*(_QWORD*)(result + 96) + 192LL);
          if ((*(_BYTE*)(v30 + 22) & 1) == 0 &&
              (*(_BYTE*)(v30 + 21) & 1) == 0) {
            *(_DWORD*)v30 = v29;
            *(_DWORD*)(v30 + 4) = v29;
            *(_DWORD*)(v30 + 8) = 1;
          }
          *(_DWORD*)(v30 + 12) = v29;
          *(_BYTE*)(v30 + 20) = 1;
        }
        if (*(_BYTE*)(result + 124) == 1) {
          v31 = *(_DWORD*)(result + 120);
          v32 = *(_QWORD*)(*(_QWORD*)(result + 96) + 192LL);
          if ((*(_BYTE*)(v32 + 46) & 1) == 0 &&
              (*(_BYTE*)(v32 + 45) & 1) == 0) {
            *(_DWORD*)(v32 + 24) = v31;
            *(_DWORD*)(v32 + 28) = v31;
            *(_DWORD*)(v32 + 32) = 1;
          }
          *(_DWORD*)(v32 + 36) = v31;
          *(_BYTE*)(v32 + 44) = 1;
        }
        if (*(_BYTE*)(result + 132) == 1) {
          v33 = *(_DWORD*)(result + 128);
          v34 = *(_QWORD*)(*(_QWORD*)(result + 96) + 192LL);
          if ((*(_BYTE*)(v34 + 70) & 1) == 0 &&
              (*(_BYTE*)(v34 + 69) & 1) == 0) {
            *(_DWORD*)(v34 + 48) = v33;
            *(_DWORD*)(v34 + 52) = v33;
            *(_DWORD*)(v34 + 56) = 1;
          }
          *(_DWORD*)(v34 + 60) = v33;
          *(_BYTE*)(v34 + 68) = 1;
        }
        ++v22;
        *(_QWORD*)(result + 96) = 0;
      } while (v22 != v3);
    }
  }
  return result;
}

#pragma GCC visibility pop
