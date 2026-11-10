#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_1098db0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern __int64 (*game_combat_ActionAttack_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ActionAttack_DeletingDestructor(_QWORD* a1);
__int64 ActionAttack_Unknown2(_QWORD* a1);
__int64 ActionAttack_Unknown7(__int64 result);
__int64 GameRoutine_1061280(__int64 result, unsigned __int8, int, __int64);
__int64 GameRoutine_1063460(_QWORD, _QWORD);
__int64 GameRoutine_10635c0(_QWORD, _QWORD);
__int64 GameRoutine_1063720(_QWORD, _QWORD);
__int64 GameRoutine_10b64f0(_QWORD, _QWORD, float);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_2005ce0[])();
extern __int64 fw_memory_g_heap_manager;
extern __int64* GameData_212d448[9];
struct PseudoSret GameRoutine_10691b0(_QWORD);
void __attribute__((noreturn)) GameRoutine_1063f60(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
char** ActionAttack_1063100(char** result);
float game_combat_ActionAttack_OnEnter_lambda2_Clone(__int64 a1);
float game_combat_ActionAttack_OnEnter_lambda2_CloneInto(__int64 a1,
                                                         __int64 a2);
__int64 game_combat_ActionAttack_OnEnter_lambda3_Invoke(__int64 a1);
__int64 game_combat_ActionAttack_OnEnter_lambda4_Invoke(__int64 a1);
__int64 GameRoutine_106aeb0(_QWORD, _QWORD);
__int64 GameRoutine_d2b5f0(_QWORD);
__int64 __dynamic_cast(void);
__int64 game_combat_ActionAttack_OnEnter_lambda2_Clone_alt1(void) __asm__(
    "game_combat_ActionAttack_OnEnter_lambda2_Clone");
extern __int64 GameData_2235e30;
__int64 game_combat_ActionAttack_OnEnter_lambda2_Invoke(__int64 result,
                                                        __int64* a2);

__int64 ActionAttack_DeletingDestructor(_QWORD* a1)
{
  *a1 = game_combat_ActionAttack_vtable;
  GameRoutine_1098db0(a1 + 34);
  GameRoutine_1098db0(a1 + 27);
  GameRoutine_1098db0(a1 + 20);
  GameRoutine_1098db0(a1 + 13);
  return GameRoutine_1098db0(a1 + 6);
}

__int64 ActionAttack_Unknown2(_QWORD* a1)
{
  long double v3;
  __int64 v4;

  *a1 = game_combat_ActionAttack_vtable;
  GameRoutine_1098db0(a1 + 34);
  GameRoutine_1098db0(a1 + 27);
  GameRoutine_1098db0(a1 + 20);
  GameRoutine_1098db0(a1 + 13);
  GameRoutine_1098db0(a1 + 6);
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
}

__int64 ActionAttack_Unknown7(__int64 result)
{
  __int64 v1;

  v1 = *(_QWORD*)(result + 8);
  if (*(_DWORD*)(v1 + 536) == 2) {
    *(_DWORD*)(v1 + 536) = 1;
  }
  return result;
}

char** ActionAttack_1063100(char** result)
{
  char* v1;
  char* v2;
  char** v3;
  __int64 v4;
  char* v5;
  __int64 v6;
  char* v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  char* v12;
  long double v13;
  char** v14;
  char* v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  long double v20;
  __int64 v21;
  char* v22;
  char* v23;
  char* v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  long double v29;
  __int64 v30;
  bool v31;
  signed __int64 v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  char* v36;
  char* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;

  v2 = result[1];
  v1 = result[2];
  v3 = result;
  if (v1 == v2) {
    v4 = 0;
  }
  else {
    v4 = ((v1 - v2) << 6) - 1;
  }
  v5 = result[4];
  if (v4 - (unsigned __int64)&v5[(_QWORD)result[5]] < 0x200) {
    v7 = result[3];
    v8 = *result;
    v9 = v7 - *result;
    if (v1 - v2 >= (unsigned __int64)v9) {
      if (v7 == v8) {
        v10 = 1;
      }
      else {
        v10 = v9 >> 2;
      }
      if (v10 >> 61 != 0) {
      LABEL_49:
        GameRoutine_60a210(result);
      }
      v11 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      v12 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v10, 16, 0);
      result = (char**)fw_memory_HeapManager_Allocate(*v11, 4096, 16, 0);
      v14 = result;
      if (v10 != 0) {
        v15 = &v12[8 * v10];
      }
      else {
        v19 = fw_memory_HeapManager_Allocate(*v11, 8, 16, 0);
        v15 = (char*)(v19 + 8);
        v21 = 128;
        if (*(_QWORD*)(*v11 + 200LL) == 0) {
          v21 = 56;
        }
        result = (char**)nn_mem_StandardAllocator_Free(*v11 + v21, v20);
        v2 = v3[1];
        v1 = v3[2];
        v12 = (char*)v19;
      }
      *(_QWORD*)v12 = v14;
      v22 = v12 + 8;
      if (v2 != v1) {
        v23 = v12;
        while (1) {
          if (v22 == v15) {
            if (v12 <= v23) {
              if (v22 == v23) {
                v27 = 1;
              }
              else {
                v27 = (v22 - v23) >> 2;
              }
              if (v27 >> 61 != 0) {
                goto LABEL_49;
              }
              v28 = fw_memory_HeapManager_Allocate(*v11, 8 * v27, 16, 0);
              v30 = v28;
              v24 = (char*)(v28 + 8 * (v27 >> 2));
              v32 = v22 - v12;
              v31 = v22 == v12;
              v22 = v24;
              if (!v31) {
                v22 = &v24[v32];
                v33 = (_QWORD*)(v28 + 8 * (v27 >> 2));
                do {
                  v34 = *(_QWORD*)v12;
                  v12 += 8;
                  v32 -= 8LL;
                  *v33++ = v34;
                } while (v32 != 0);
              }
              v15 = (char*)(v28 + 8 * v27);
              v35 = 128;
              if (*(_QWORD*)(*v11 + 200LL) == 0) {
                v35 = 56;
              }
              result = (char**)nn_mem_StandardAllocator_Free(*v11 + v35, v29);
              v23 = (char*)v30;
            }
            else {
              v26 = (((v12 - v23) >> 3) + 1 +
                     ((unsigned __int64)(((v12 - v23) >> 3) + 1) >> 63)) >>
                    1;
              v24 = &v12[-8 * v26];
              if (v22 != v12) {
                result = (char**)memmove(&v12[-8 * v26], v12, v22 - v12);
              }
              v22 = &v24[v22 - v12];
            }
          }
          else {
            v24 = v12;
          }
          v25 = *(_QWORD*)v2;
          v2 += 8;
          v12 = v24;
          *(_QWORD*)v22 = v25;
          v22 += 8;
          if (v2 == v3[2]) {
            goto LABEL_42;
          }
        }
      }
      v23 = v12;
      v24 = v12;
    LABEL_42:
      v36 = v3[4];
      v37 = *v3;
      *v3 = v23;
      v3[1] = v24;
      v38 = 256;
      v3[2] = v22;
      v3[3] = v15;
      v39 = (__int64)(v36 + 512);
      if (v22 - v24 != 8) {
        v38 = v39;
      }
      v3[4] = (char*)v38;
      if (v37 != nullptr) {
        v40 = 128;
        if (*(_QWORD*)(*v11 + 200LL) == 0) {
          v40 = 56;
        }
        return (char**)nn_mem_StandardAllocator_Free(*v11 + v40, v13);
      }
    }
    else {
      if (v2 == v8) {
        v41 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 4096, 16,
                                             0);
        GameRoutine_1063720(v3, &v41);
        v16 = v3[2];
        v17 = *((_QWORD*)v16 - 1);
        v3[2] = v16 - 8;
        v41 = v17;
        result = (char**)GameRoutine_1063460(v3, &v41);
      }
      else {
        v41 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 4096, 16,
                                             0);
        result = (char**)GameRoutine_10635c0(v3, &v41);
      }
      v18 = 256;
      if (v3[2] - v3[1] != 8) {
        v18 = (__int64)(v3[4] + 512);
      }
      v3[4] = (char*)v18;
    }
  }
  else {
    result[4] = v5 + 512;
    v6 = *((_QWORD*)v1 - 1);
    result[2] = v1 - 8;
    v41 = v6;
    return (char**)GameRoutine_1063460(result, &v41);
  }
  return result;
}

__int64 game_combat_ActionAttack_OnEnter_lambda2_Invoke(__int64 result,
                                                        __int64* a2)
{
  __int64 v2;
  float v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  bool v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  __int64* v19;
  __int64 v20;
  float v21;
  __int64 v22;
  __int64 v23;
  __int64 v25;
  __int64 v26;
  float v27;
  float v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int v48;
  __int64 v49;
  __int128 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  char v57;
  _BYTE v58[32];
  _BYTE* v59;

  v4 = *(_QWORD*)(result + 8);
  v5 = *(_QWORD*)(v4 + 8);
  if (*(_DWORD*)(v5 + 648) == 2) {
    return result;
  }
  if (*GameData_212d448[0] == 0) {
    return result;
  }
  v6 = *(_QWORD*)(*GameData_212d448[0] + 8);
  if (v6 == 0) {
    return result;
  }
  v7 = *(_QWORD*)(*(_QWORD*)(v5 + 368) + 96LL);
  if (v7 == 0) {
    return result;
  }
  v8 = *a2;
  v9 = *(float*)(*a2 + 8);
  result = GameRoutine_d2b5f0(*(_QWORD*)(v7 + 32) + 72LL);
  if ((result & 0x100000000LL) == 0) {
    return result;
  }
  v10 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v7 + 24) + 72LL) +
                   104LL * (int)result + 16);
  if (v10 == 0) {
    return result;
  }
  v11 = *(__int64**)(v10 + 80);
  v12 = *(__int64**)(v10 + 88);
  if (v11 == v12) {
    return result;
  }
  while (1) {
    result = *v11;
    v13 = v11[1];
    if (v13 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                memory_order_relaxed);
    }
    if (*(float*)(result + 8) < v9) {
      v14 = true;
      if (v13 == 0) {
        goto LABEL_18;
      }
    LABEL_16:
      if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        result = std___1___shared_weak_count___release_weak(v13);
      }
      goto LABEL_18;
    }
    result = __dynamic_cast();
    v14 = result == 0;
    if (result != 0) {
      v2 = result;
    }
    if (v13 != 0) {
      goto LABEL_16;
    }
  LABEL_18:
    if (!v14) {
      break;
    }
    v11 += 2;
    if (v11 == v12) {
      return result;
    }
  }
  if (v2 != 0) {
    v15 = *(_QWORD*)(v6 + 32);
    v16 = *(_QWORD*)(v6 + 40);
    if (v15 == v16) {
      v19 = &GameData_2235e30;
    }
    else {
      v17 = 954437177 * ((unsigned __int64)(v16 - v15) >> 4) - 1;
      v18 = *(_DWORD*)(v6 + 56);
      if (v18 < v17) {
        v17 = *(_DWORD*)(v6 + 56);
      }
      if (v18 < 0) {
        v17 = 0;
      }
      v19 = (__int64*)(v15 + 144LL * v17);
    }
    v20 = *(_QWORD*)(v4 + 8);
    v21 = *(float*)(v8 + 32);
    v22 = *(_QWORD*)(v20 + 80);
    if (v22 == 0) {
      goto LABEL_42;
    }
    v23 = *(_QWORD*)(v20 + 88);
    if (*(_QWORD*)(v22 + 8) == -1 || v23 == 0) {
      goto LABEL_42;
    }
    v26 = *(_QWORD*)(v23 + 392);
    v25 = *(_QWORD*)(v23 + 400);
    if (v25 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v26 != 0) {
      v3 = fmaxf(*(float*)(v26 + 32), 1.0);
    }
    if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
      result = std___1___shared_weak_count___release_weak(v25);
    }
    if (v26 == 0) {
    LABEL_42:
      v3 = 1.0;
    }
    v27 = *(float*)(v2 + 8);
    v28 = *(float*)(v8 + 8);
    v29 = v19[10];
    v30 = *(_QWORD*)(v4 + 8);
    v54 = *v19;
    v55 = v19[1];
    v50 = *((_OWORD*)v19 + 2);
    v56 = v19[2];
    v57 = *((_BYTE*)v19 + 24);
    v51 = v19[6];
    v52 = v19[7];
    v31 = v19[9];
    v53 = v19[8];
    v32 = v29 - v31;
    v33 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    if (v29 == v31) {
      v39 = 0;
      v38 = 0;
      v35 = 0;
    }
    else {
      if (0xAAAAAAAAAAAAAAABLL * (v32 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
        GameRoutine_1063f60(result);
      }
      v34 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v29 - v31, 16, 0);
      v35 = v34;
      v36 = 0;
      do {
        v37 = v34 + v36;
        *(_DWORD*)v37 = -1;
        *(_QWORD*)(v37 + 8) = 0;
        *(_BYTE*)(v37 + 16) = 0;
        if (v34 != v31) {
          *(_DWORD*)v37 = *(_DWORD*)(v31 + v36);
          *(_QWORD*)(v37 + 8) = *(_QWORD*)(v31 + v36 + 8);
          *(_BYTE*)(v37 + 16) = *(_BYTE*)(v31 + v36 + 16);
        }
        v36 += 24;
      } while (v31 + v36 != v29);
      v38 = v34 + v32;
      v39 = v34 + v36;
    }
    v40 = fw_memory_HeapManager_Allocate(*v33, 176, 16, 0);
    *(_QWORD*)(v40 + 96) = v39;
    *(_QWORD*)(v40 + 104) = v38;
    v41 = v40;
    *(_QWORD*)v40 = GameData_2005ce0;
    *(_BYTE*)(v40 + 40) = v57;
    *(_OWORD*)(v40 + 48) = v50;
    *(_QWORD*)(v40 + 24) = v55;
    *(_QWORD*)(v40 + 32) = v56;
    *(_QWORD*)(v40 + 16) = v54;
    *(_QWORD*)(v40 + 64) = v51;
    *(_QWORD*)(v40 + 72) = v52;
    *(_QWORD*)(v40 + 80) = v53;
    *(_QWORD*)(v40 + 88) = v35;
    v42 = v19[13];
    *(_QWORD*)(v40 + 112) = v19[12];
    *(_QWORD*)(v40 + 120) = v42;
    v43 = v19[14];
    v44 = v19[15];
    v45 = v19[16];
    v46 = v19[17];
    *(float*)(v40 + 160) = fabsf(v21) * v3;
    *(_QWORD*)(v40 + 144) = v45;
    *(_QWORD*)(v40 + 152) = v46;
    *(_QWORD*)(v40 + 128) = v43;
    *(_QWORD*)(v40 + 136) = v44;
    *(_DWORD*)(v30 + 672) = 0;
    *(_DWORD*)(v30 + 648) = 2;
    v47 = *(_QWORD*)(v30 + 616);
    *(_DWORD*)(v30 + 676) = *(_DWORD*)(v47 + 40);
    v48 = *(_DWORD*)(v47 + 44);
    *(float*)(v30 + 684) = (float)(v27 / 60.0) - (float)(v28 / 60.0);
    *(_DWORD*)(v30 + 680) = v48;
    v59 = (_BYTE*)game_combat_ActionAttack_OnEnter_lambda2_Clone_alt1();
    GameRoutine_106aeb0(v58, v30 + 688);
    if (v59 == v58) {
      v49 = 32;
    LABEL_55:
      (*(void (**)(void))(*(_QWORD*)v59 + v49))();
    }
    else if (v59 != nullptr) {
      v49 = 40;
      goto LABEL_55;
    }
    return (*(__int64 (**)(__int64))(*(_QWORD*)v41 + 40LL))(v41);
  }
  return result;
}

float game_combat_ActionAttack_OnEnter_lambda2_Clone(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float result;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      176, 16, 0);
  v4 = *(_QWORD*)(a1 + 96);
  *(_QWORD*)(v3 + 96) = 0;
  *(_QWORD*)(v3 + 104) = 0;
  *(_QWORD*)v3 = GameData_2005ce0;
  v5 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(v3 + 16) = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(v3 + 24) = v5;
  *(_QWORD*)(v3 + 32) = *(_QWORD*)(a1 + 32);
  *(_BYTE*)(v3 + 40) = *(_BYTE*)(a1 + 40);
  v6 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(v3 + 48) = *(_QWORD*)(a1 + 48);
  *(_QWORD*)(v3 + 56) = v6;
  v7 = *(_QWORD*)(a1 + 72);
  *(_QWORD*)(v3 + 64) = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(v3 + 72) = v7;
  v8 = *(_QWORD*)(a1 + 88);
  v9 = v4 - v8;
  *(_QWORD*)(v3 + 80) = *(_QWORD*)(a1 + 80);
  *(_QWORD*)(v3 + 88) = 0;
  if (v4 != v8) {
    if (0xAAAAAAAAAAAAAAABLL * (v9 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
      GameRoutine_1063f60(v3);
    }
    v10 = (_QWORD*)v3;
    v11 = fw_memory_HeapManager_Allocate(*v2, v4 - v8, 16, 0);
    v12 = 0;
    v3 = (__int64)v10;
    v10[11] = v11;
    v10[13] = v11 + v9;
    do {
      v13 = v11 + v12;
      *(_DWORD*)v13 = -1;
      *(_QWORD*)(v13 + 8) = 0;
      *(_BYTE*)(v13 + 16) = 0;
      if (v11 != v8) {
        *(_DWORD*)v13 = *(_DWORD*)(v8 + v12);
        *(_QWORD*)(v13 + 8) = *(_QWORD*)(v8 + v12 + 8);
        *(_BYTE*)(v13 + 16) = *(_BYTE*)(v8 + v12 + 16);
      }
      v12 += 24;
    } while (v8 + v12 != v4);
    v10[12] = v11 + v12;
  }
  v14 = *(_QWORD*)(a1 + 136);
  result = *(float*)(a1 + 160);
  *(_QWORD*)(v3 + 128) = *(_QWORD*)(a1 + 128);
  *(_QWORD*)(v3 + 136) = v14;
  v16 = *(_QWORD*)(a1 + 144);
  v17 = *(_QWORD*)(a1 + 152);
  *(float*)(v3 + 160) = result;
  *(_QWORD*)(v3 + 144) = v16;
  *(_QWORD*)(v3 + 152) = v17;
  v18 = *(_QWORD*)(a1 + 120);
  *(_QWORD*)(v3 + 112) = *(_QWORD*)(a1 + 112);
  *(_QWORD*)(v3 + 120) = v18;
  return result;
}

float game_combat_ActionAttack_OnEnter_lambda2_CloneInto(__int64 a1, __int64 a2)
{
  char v4;
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
  __int64 v15;
  __int64 v16;
  __int64 v17;
  float result;

  *(_QWORD*)a2 = GameData_2005ce0;
  v4 = *(_BYTE*)(a1 + 40);
  *(_QWORD*)(a2 + 24) = *(_QWORD*)(a1 + 24);
  v5 = *(_QWORD*)(a1 + 16);
  v6 = *(_QWORD*)(a1 + 32);
  *(_BYTE*)(a2 + 40) = v4;
  *(_QWORD*)(a2 + 32) = v6;
  *(_QWORD*)(a2 + 16) = v5;
  *(_QWORD*)(a2 + 56) = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a2 + 48) = *(_QWORD*)(a1 + 48);
  v8 = *(_QWORD*)(a1 + 64);
  v7 = *(_QWORD*)(a1 + 72);
  v9 = *(_QWORD*)(a1 + 80);
  *(_QWORD*)(a2 + 96) = 0;
  *(_QWORD*)(a2 + 104) = 0;
  *(_QWORD*)(a2 + 64) = v8;
  *(_QWORD*)(a2 + 72) = v7;
  *(_QWORD*)(a2 + 80) = v9;
  *(_QWORD*)(a2 + 88) = 0;
  v10 = *(_QWORD*)(a1 + 88);
  v11 = *(_QWORD*)(a1 + 96);
  v12 = v11 - v10;
  if (v11 != v10) {
    if (0xAAAAAAAAAAAAAAABLL * (v12 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
      GameRoutine_1063f60(a1);
    }
    v13 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v11 - v10, 16, 0);
    v14 = 0;
    *(_QWORD*)(a2 + 88) = v13;
    *(_QWORD*)(a2 + 96) = v13;
    *(_QWORD*)(a2 + 104) = v13 + v12;
    do {
      v15 = v13 + v14;
      *(_DWORD*)v15 = -1;
      *(_QWORD*)(v15 + 8) = 0;
      *(_BYTE*)(v15 + 16) = 0;
      if (v13 != v10) {
        *(_DWORD*)v15 = *(_DWORD*)(v10 + v14);
        *(_QWORD*)(v15 + 8) = *(_QWORD*)(v10 + v14 + 8);
        *(_BYTE*)(v15 + 16) = *(_BYTE*)(v10 + v14 + 16);
      }
      v14 += 24;
    } while (v10 + v14 != v11);
    *(_QWORD*)(a2 + 96) = v13 + v14;
  }
  v16 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)(a2 + 136) = *(_QWORD*)(a1 + 136);
  *(_QWORD*)(a2 + 152) = v16;
  *(_QWORD*)(a2 + 120) = *(_QWORD*)(a1 + 120);
  *(_QWORD*)(a2 + 112) = *(_QWORD*)(a1 + 112);
  v17 = *(_QWORD*)(a1 + 128);
  *(_QWORD*)(a2 + 144) = *(_QWORD*)(a1 + 144);
  *(_QWORD*)(a2 + 128) = v17;
  result = *(float*)(a1 + 160);
  *(float*)(a2 + 160) = result;
  return result;
}

__int64 game_combat_ActionAttack_OnEnter_lambda3_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  bool v5;
  __int64 v6;
  bool v7;
  _QWORD v9[2];

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *GameData_212d448[0] +
       24LL * (((*(_DWORD*)(*(_QWORD*)(v1 + 8) + 96LL) - 1) & 0xFFFFFFFD) != 0);
  v3 = *(_QWORD*)(v2 + 32);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                            memory_order_relaxed);
  v4 = *(_QWORD*)(v2 + 40);
  v5 = *(_QWORD*)(v3 + 8) == -1 || v4 == 0;
  if (v5 || (v6 = *(_QWORD*)(v4 + 80)) == 0 ||
      (*(_QWORD*)(v6 + 8) != -1 ? (v7 = *(_QWORD*)(v4 + 88) == 0) : (v7 = true),
       v7)) {
    v4 = 0;
  }
  std___1___shared_weak_count___release_weak(v3);
  *(struct PseudoSret*)(v9) = GameRoutine_10691b0(v4);
  return GameRoutine_10b64f0(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 8) + 88LL) + 64LL), v9, -1234.5f);
}

__int64 game_combat_ActionAttack_OnEnter_lambda4_Invoke(__int64 a1)
{
  __int64 v1;
  _QWORD v3[2];

  v1 = *(_QWORD*)(a1 + 8);
  v3[0] = 0;
  v3[1] = 0;
  return GameRoutine_1061280(v1, 0, 0, (__int64)v3);
}

#pragma GCC visibility pop
