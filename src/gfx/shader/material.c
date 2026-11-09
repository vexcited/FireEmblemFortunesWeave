#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5fb840(void);
__int64 GameRoutine_5fb900(_QWORD);
__int64 GameRoutine_5fba80(_QWORD, _QWORD);
__int64 GameRoutine_ad5500(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN** GameData_212e4d8[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 g3d_g_passKinds;
extern __int64* game_g_frame_clock_ptr[3];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a250(_QWORD);
void __attribute__((noreturn)) GameRoutine_adf350(void);
void __attribute__((noreturn)) GameRoutine_adf370(_QWORD);
void __attribute__((noreturn)) GameRoutine_adf6b0(void);
__int64 Material_add560(__int64 result);
__int64 Material_add7a0(__int64 result, _QWORD* a2, unsigned __int8 a3);
__int64 Material_addcc0(__int64 result, __int64 a2, __int64* a3);
__int64 Material_ade2c0(__int64 result);

__int64 Material_add560(__int64 result)
{
  _QWORD* v1;
  __int64 v2;
  _DWORD* v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  bool v10;
  int v11;
  __int64 v12;
  int* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64* v26;
  _UNKNOWN** v27;

  v1 = *(_QWORD**)(result + 8);
  if (v1 != nullptr) {
    v2 = result;
    if (v1[19] == v1[18] || *(int*)(result + 48) < 1) {
      goto LABEL_17;
    }
    v3 = (_DWORD*)(result + 64);
    v4 = *(_DWORD*)(result + 64);
    v5 = *(_DWORD*)(result + 56);
    v6 = *(_DWORD*)(result + 60);
    if (v5 < v4) {
      v4 = *(_DWORD*)(result + 56);
    }
    *v3 = v4;
    v7 = *(_DWORD*)(result + 68);
    if (v7 <= v6) {
      v7 = v6;
    }
    if (v5 >= *(_DWORD*)(result + 72)) {
      v5 = *(_DWORD*)(result + 72);
    }
    *(_DWORD*)(result + 68) = v7;
    *(_DWORD*)(result + 72) = v5;
    v8 = *(_DWORD*)(result + 76);
    if (v8 <= v6) {
      v8 = v6;
    }
    *(_DWORD*)(result + 76) = v8;
    *(_QWORD*)(result + 56) =
        (unsigned int)((*(_QWORD*)(result + 32) - *(_QWORD*)(result + 24)) >>
                       2);
    v9 = *(_DWORD*)(result + 144);
    v10 = v9 < -1;
    v11 = ((_BYTE)v9 + 1) & 1;
    if (v10) {
      v11 = -v11;
    }
    v12 = 2LL * v11;
    *(_DWORD*)(result + 144) = v11;
    v13 = &v3[v12];
    v14 = *(_QWORD*)(result + v12 * 4 + 128);
    v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 56LL))(v14);
    v16 = *v13;
    if ((int)v16 < v13[1]) {
      do {
        *(_DWORD*)(v15 + 4 * v16) = *(_DWORD*)(*(_QWORD*)(v2 + 24) + 4 * v16);
        ++v16;
      } while (v16 < v13[1]);
    }
    --*(_DWORD*)(v2 + 48);
    *(_QWORD*)v13 =
        (unsigned int)((*(_QWORD*)(v2 + 32) - *(_QWORD*)(v2 + 24)) >> 2);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 64LL))(v14);
    v1 = *(_QWORD**)(v2 + 8);
    if (v1 != nullptr) {
    LABEL_17:
      if (v1[26] != 0) {
        v17 = *(_DWORD*)(v2 + 200);
        v18 = *(_DWORD*)(v2 + 52);
        v10 = v17 < -1;
        v19 = ((_BYTE)v17 + 1) & 1;
        if (v10) {
          v19 = -v19;
        }
        *(_DWORD*)(v2 + 200) = v19;
        if (v18 >= 1) {
          v20 = *(_QWORD*)(v2 + 8LL * v19 + 184);
          v21 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 56LL))(v20);
          v22 = *(_QWORD*)(v2 + 80);
          if (*(_QWORD*)(v2 + 88) != v22) {
            v23 = 1;
            v24 = v21;
            v25 = 0;
            v26 = game_g_frame_clock_ptr[0];
            v27 = GameData_212e4d8[0];
            do {
              *(_QWORD*)(v24 + 8 * v25) =
                  ((__int64 (*)(__int64, _QWORD, _QWORD))*v27)(
                      *(_QWORD*)(*v26 + 256) + 8LL,
                      *(unsigned int*)(v22 + 16 * v25 + 8),
                      *(unsigned int*)(*(_QWORD*)(v2 + 104) + 8 * v25));
              v25 = v23++;
              v22 = *(_QWORD*)(v2 + 80);
            } while (v25 < (*(_QWORD*)(v2 + 88) - v22) >> 4);
          }
          --*(_DWORD*)(v2 + 52);
          return (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 64LL))(v20);
        }
      }
    }
  }
  return result;
}

__int64 Material_add7a0(__int64 result, _QWORD* a2, unsigned __int8 a3)
{
  _QWORD* v3;
  _QWORD* v4;
  __int64 v6;
  __int64 v8;
  int v9;
  int v11;
  int v15;
  __int64* v16;
  __int64* v17;
  _QWORD* v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  _BOOL4 v22;
  __int64* v23;
  __int64* v24;
  _QWORD* v25;
  unsigned int v26;
  __int64 v27;

  v3 = (_QWORD*)*a2;
  v4 = (_QWORD*)a2[1];
  if ((_QWORD*)*a2 != v4) {
    v6 = result;
    do {
      v8 = *v3;
      result = strlen(*v3);
      if ((a3 & (*(_DWORD*)(v8 + 16) == -1)) != 0) {
        v9 = 0;
      }
      else {
        v9 = *(_DWORD*)(v8 + 16);
      }
      if (result > 9) {
        if (result == 10) {
          if (*(_QWORD*)v8 == 0x6C635F6168706C61LL &&
              *(_WORD*)(v8 + 8) == 28777) {
            v21 = *(_QWORD*)(v6 + 320);
            v22 = v9 == 1;
            *(_BYTE*)(v6 + 408) = v22;
            if (v21 != 0) {
              v23 = *(__int64**)(v6 + 264);
              v24 = *(__int64**)(v6 + 272);
              while (v23 != v24) {
                result = *v23;
                if (*v23 != 0) {
                  GameRoutine_ad5500(result, "co_alpha_clip", 13, v22);
                  v25 = (_QWORD*)*v23;
                  v26 = GameRoutine_5fba80(*(_QWORD*)(*v23 + 120),
                                           *(_QWORD*)(*v23 + 200));
                  v27 = v25[15];
                  if ((v26 & 0x80000000) != 0) {
                    v26 = *(_DWORD*)(v27 + 224) & ~(*(int*)(v27 + 224) >> 31);
                  }
                  v25[17] =
                      *(_QWORD*)(v27 + 136) + ((unsigned __int64)v26 << 6);
                  GameRoutine_5fb840();
                  result = GameRoutine_5fb900(v25[17]);
                  v25[18] = *(_QWORD*)(result + 8);
                }
                v23 += 3;
              }
            }
          }
        }
        else if (result == 13) {
          if (*(_QWORD*)v8 == 0x6E5F646564697332LL &&
              *(_QWORD*)(v8 + 5) == 0x6C616D726F6E5F64LL) {
            if (*(_QWORD*)(v6 + 320) != 0) {
              v16 = *(__int64**)(v6 + 264);
              v17 = *(__int64**)(v6 + 272);
              while (v16 != v17) {
                result = *v16;
                if (*v16 != 0) {
                  GameRoutine_ad5500(result, "co_2sided_normal", 16,
                                     (unsigned int)v9);
                  v18 = (_QWORD*)*v16;
                  v19 = GameRoutine_5fba80(*(_QWORD*)(*v16 + 120),
                                           *(_QWORD*)(*v16 + 200));
                  v20 = v18[15];
                  if ((v19 & 0x80000000) != 0) {
                    v19 = *(_DWORD*)(v20 + 224) & ~(*(int*)(v20 + 224) >> 31);
                  }
                  v18[17] =
                      *(_QWORD*)(v20 + 136) + ((unsigned __int64)v19 << 6);
                  GameRoutine_5fb840();
                  result = GameRoutine_5fb900(v18[17]);
                  v18[18] = *(_QWORD*)(result + 8);
                }
                v16 += 3;
              }
            }
          }
          else if (*(_QWORD*)v8 == 0x736F72635F646F6CLL &&
                   *(_QWORD*)(v8 + 5) == 0x6564616673736F72LL) {
            *(_BYTE*)(v6 + 410) = v9 == 1;
          }
        }
        goto LABEL_7;
      }
      if (result != 5) {
        if (result == 7 && *(_DWORD*)v8 == 1819047267 &&
            *(_DWORD*)(v8 + 3) == 1735289196) {
          if (v9 == 1) {
            v11 = 1;
          }
          else {
            v11 = 2;
          }
          if (v9 == 2) {
            v11 = 0;
          }
          *(_DWORD*)(v6 + 404) = v11;
        }
        goto LABEL_7;
      }
      if (*(_DWORD*)v8 == 1852140642 && *(_BYTE*)(v8 + 4) == 100) {
        if (v9 <= 1) {
          if (v9 != 0) {
            if (v9 == 1) {
              *(_DWORD*)(v6 + 400) = 1;
            }
          }
          else {
            *(_DWORD*)(v6 + 400) = 0;
          }
          goto LABEL_7;
        }
        switch (v9) {
        case 2:
          v15 = 1;
          goto LABEL_68;
        case 3:
          v15 = 2;
          goto LABEL_68;
        case 4:
          v15 = 3;
        LABEL_68:
          *(_DWORD*)(v6 + 400) = v15;
          *(_BYTE*)(v6 + 409) = 0;
          break;
        default:
          break;
        }
      }
    LABEL_7:
      ++v3;
    } while (v3 != v4);
  }
  return result;
}

__int64 Material_addcc0(__int64 result, __int64 a2, __int64* a3)
{
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  int v7;
  _QWORD* v8;
  char* v9;
  unsigned __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  _DWORD* v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  char* v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  char* v30;
  __int64 v31;
  char* v32;
  int v33;
  __int16 v34;
  __int64 v35;
  __int64 v36;
  char* v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  _QWORD* i;
  __int64 v44;
  unsigned __int64 v45;
  char* v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  _QWORD* v51;

  v3 = *(_QWORD*)(result + 264);
  v4 = *(_QWORD**)(result + 272);
  v5 = (int)a2;
  v7 = a2;
  v8 = (_QWORD*)result;
  v9 = (char*)v4 - v3;
  v10 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v4 - v3) >> 3);
  if (v10 <= (int)a2) {
    v18 = ((a2 << 32) + 0x100000000LL) >> 32;
    v19 = v18 - v10;
    if (v18 <= v10) {
      if (v18 < v10) {
        for (i = (_QWORD*)(v3 + 24LL * (int)v18); v4 != i; v4 -= 3) {
          v44 = *(v4 - 2);
          if (v44 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v44 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44);
            result = std___1___shared_weak_count___release_weak(v44);
          }
        }
        v8[34] = i;
      }
    }
    else {
      v20 = *(_QWORD*)(result + 280);
      if (0xAAAAAAAAAAAAAAABLL * ((v20 - (__int64)v4) >> 3) >= v19) {
        v49 = &v4[3 * v19];
        do {
          v4[1] = 0;
          v4[2] = 0;
          *v4 = 0;
          *((_DWORD*)v4 + 4) = -1;
          v4 += 3;
        } while (v4 != v49);
        *(_QWORD*)(result + 272) = v49;
      }
      else {
        if (v18 > 0xAAAAAAAAAAAAAAALL) {
          GameRoutine_adf350();
        }
        v21 = 0xAAAAAAAAAAAAAAABLL * ((v20 - v3) >> 3);
        if (2 * v21 > v18) {
          v18 = 2 * v21;
        }
        if (v21 >= 0x555555555555555LL) {
          v22 = 0xAAAAAAAAAAAAAAALL;
        }
        else {
          v22 = v18;
        }
        if (v22 > 0xAAAAAAAAAAAAAAALL) {
          goto LABEL_60;
        }
        v23 = fw_memory_g_heap_manager_ptr;
        result = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v22, 16, 0);
        v24 = &v9[result];
        v25 = (__int64)&v9[24 * v19 + result];
        v26 = &v9[result];
        do {
          *((_QWORD*)v26 + 1) = 0;
          *((_QWORD*)v26 + 2) = 0;
          *(_QWORD*)v26 = 0;
          *((_DWORD*)v26 + 4) = -1;
          v26 += 24;
        } while (v26 != (char*)v25);
        v27 = v8[33];
        v28 = v8[34];
        v29 = (_QWORD*)(result + 24 * v22);
        v30 = &v24[v27 - v28];
        if (v28 != v27) {
          v51 = (_QWORD*)(result + 24 * v22);
          v31 = v8[33];
          v32 = v30;
          do {
            *(_QWORD*)v32 = *(_QWORD*)v31;
            *((_QWORD*)v32 + 1) = *(_QWORD*)(v31 + 8);
            *(_QWORD*)v31 = 0;
            *(_QWORD*)(v31 + 8) = 0;
            v33 = *(_DWORD*)(v31 + 16);
            v34 = *(_WORD*)(v31 + 20);
            v31 += 24;
            *((_WORD*)v32 + 10) = v34;
            *((_DWORD*)v32 + 4) = v33;
            v32 += 24;
          } while (v31 != v28);
          do {
            v35 = *(_QWORD*)(v27 + 8);
            if (v35 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
              result = std___1___shared_weak_count___release_weak(v35);
            }
            v27 += 24;
          } while (v27 != v28);
          v27 = v8[33];
          v23 = fw_memory_g_heap_manager_ptr;
          v29 = v51;
        }
        v8[33] = v30;
        v8[34] = v25;
        v8[35] = v29;
        if (v27 != 0) {
          v50 = 128;
          if (*(_QWORD*)(*(_QWORD*)v23 + 200LL) == 0) {
            v50 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v23 + v50, v27);
        }
      }
    }
  }
  v11 = (_QWORD*)(v8[33] + 24LL * (int)v5);
  v13 = *a3;
  v12 = a3[1];
  if (v12 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
  }
  v14 = v11[1];
  *v11 = v13;
  v11[1] = v12;
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    result = std___1___shared_weak_count___release_weak(v14);
  }
  *(_DWORD*)(v8[33] + 24 * v5 + 16) = v7;
  *(_BYTE*)(v8[33] + 24 * v5 + 20) = 1;
  *(_BYTE*)(v8[33] + 24 * v5 + 21) = 1;
  v16 = (_DWORD*)v8[31];
  v15 = v8[32];
  if ((unsigned __int64)v16 < v15) {
    *v16 = v7;
    v17 = (__int64)(v16 + 1);
    goto LABEL_49;
  }
  v36 = v8[30];
  v37 = (char*)v16 - v36;
  v38 = ((__int64)v16 - v36) >> 2;
  v39 = v38 + 1;
  if ((unsigned __int64)(v38 + 1) >> 62 != 0) {
    GameRoutine_adf370(result);
  }
  v40 = v15 - v36;
  if (v40 >> 1 > v39) {
    v39 = v40 >> 1;
  }
  if ((unsigned __int64)v40 >= 0x7FFFFFFFFFFFFFFCLL) {
    v41 = 0x3FFFFFFFFFFFFFFFLL;
  }
  else {
    v41 = v39;
  }
  if (v41 != 0) {
    if (v41 >> 62 == 0) {
      v42 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v41, 16, 0);
      goto LABEL_45;
    }
  LABEL_60:
    GameRoutine_60a210(result);
  }
  v42 = 0;

LABEL_45:
  v45 = v42 + 4 * v41;
  v46 = (char*)v16 - v36;
  v47 = (__int64)&v37[v42 + -4 * v38];
  *(_DWORD*)&v37[v42] = v7;
  v17 = (__int64)&v37[v42 + 4];
  result = memcpy(v47, v36, v46);
  v8[30] = v47;
  v8[31] = v17;
  v8[32] = v45;
  if (v36 != 0) {
    v48 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v48 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v48, v36);
  }

LABEL_49:
  v8[31] = v17;
  return result;
}

__int64 Material_ade2c0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  unsigned __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _DWORD* v9;
  unsigned __int64 v10;
  int v11;
  _DWORD* v12;
  __int64 v13;
  char* v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  int v18;
  __int64 v19;
  char* v20;
  int v21;
  char* v22;
  char* v23;
  char* v24;
  char* v25;
  char* v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  unsigned int v30;

  v1 = *(_QWORD*)(result + 264);
  v2 = *(_QWORD*)(result + 272);
  if (v1 != v2) {
    v3 = *(_QWORD*)(result + 288);
    v4 = (_QWORD*)result;
    v5 = 0xAAAAAAAAAAAAAAABLL * ((v2 - v1) >> 3);
    v6 = *(_QWORD*)(result + 304);
    *(_QWORD*)(result + 296) = v3;
    v7 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    if (v5 > (v6 - v3) >> 3) {
      if (v5 >> 61 != 0) {
      LABEL_33:
        GameRoutine_adf6b0();
      }
      result = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr,
          0x5555555555555558LL * ((v2 - v1) >> 3), 16, 0);
      v4[36] = result;
      v4[37] = result;
      v4[38] = result + 0x5555555555555558LL * ((v2 - v1) >> 3);
      if (v3 != 0) {
        v8 = 128;
        if (*(_QWORD*)(*v7 + 200LL) == 0) {
          v8 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*v7 + v8, v3);
        v1 = v4[33];
        v2 = v4[34];
      }
    }
    for (v4[39] &= 0xFFFFFFFFFFFFFFC0LL; v1 != v2; v1 += 24) {
      if (*(_BYTE*)(v1 + 20) == 1 && *(_BYTE*)(v1 + 21) == 1) {
        v9 = (_DWORD*)v4[37];
        v10 = v4[38];
        if ((unsigned __int64)v9 >= v10) {
          v13 = v4[36];
          v14 = (char*)v9 - v13;
          v15 = (((__int64)v9 - v13) >> 3) + 1;
          if (v15 >> 61 != 0) {
            goto LABEL_33;
          }
          v16 = v10 - v13;
          if (v16 >> 2 > v15) {
            v15 = v16 >> 2;
          }
          if ((unsigned __int64)v16 >= 0x7FFFFFFFFFFFFFF8LL) {
            v17 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v17 = v15;
          }
          if (v17 >> 61 != 0) {
            GameRoutine_60a210(result);
          }
          result = fw_memory_HeapManager_Allocate(*v7, 8 * v17, 16, 0);
          v18 = *(_DWORD*)(v1 + 16);
          v19 = g3d_g_passKinds;
          v20 = &v14[result];
          *(_DWORD*)v20 = v18;
          v21 = *(_DWORD*)(v19 + 4LL * v18);
          v22 = (char*)v4[36];
          v23 = (char*)v4[37];
          *((_DWORD*)v20 + 1) = v21;
          v24 = &v14[result + v22 - v23];
          if (v22 != v23) {
            v25 = v22;
            v26 = &v14[result + v22 - v23];
            do {
              v27 = *(_QWORD*)v25;
              v25 += 8;
              *(_QWORD*)v26 = v27;
              v26 += 8;
            } while (v25 != v23);
          }
          v28 = (_QWORD*)(result + 8 * v17);
          v12 = v20 + 8;
          v4[36] = v24;
          v4[37] = v20 + 8;
          v4[38] = v28;
          if (v22 != nullptr) {
            v29 = 128;
            if (*(_QWORD*)(*v7 + 200LL) == 0) {
              v29 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*v7 + v29, v22);
          }
        }
        else {
          v11 = *(_DWORD*)(v1 + 16);
          v12 = v9 + 2;
          *v9 = v11;
          v9[1] = *(_DWORD*)(g3d_g_passKinds + 4LL * v11);
        }
        v4[37] = v12;
        v30 = *(v12 - 1);
        if (v30 >= 6) {
          GameRoutine_60a250("bitset set argument out of range");
        }
        v4[39] |= 1LL << v30;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
