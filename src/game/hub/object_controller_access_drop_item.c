#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void Manager_d9b810(PSEUDO_X8, __int64, __int64,
                                               __int64, __int64, unsigned int);
__int64 GameRoutine_989ea0(__int64 result, int, __int64);
__int64 GameRoutine_dbc2c0(_QWORD*, __int64);
__int64 ProcHubSeqEnter_918ce0(__int64*, __int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strtoull(_QWORD, _QWORD, _QWORD);
__n128 HubCharacterNatives_cba040(__int64, __int64*);
__n128 Object_df9f60(_QWORD*);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1fe2820[7])();
extern __int64* GameData_212d458[7];
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212ec00;
extern __int64 GameData_212ef88[8];
extern __int64 GameData_22127a8;
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_dfa900(__int64);
void game_d523c0(__int64);
void game_hub_dfa520(__int64);
void game_hub_dfc000(__int64);
__n128 ObjectControllerAccessDropItem_e05790(__int64 a1);
__attribute__((swiftcall)) void
ObjectControllerAccessDropItem_e05a00(PSEUDO_X8 x8_, __int64 a1);
__int64 game_hub_ObjectControllerAccessDropItem_InitializeImpl_lambda0_Invoke(
    __int64 a1);

__n128 ObjectControllerAccessDropItem_e05790(__int64 a1)
{

#pragma clang fp contract(off)
  __n128 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BOOL4 v6;
  __int64 v7;
  __int64 v8;
  float v9;
  __int128 v12;
  __int128 v13;
  float v14;
  __int128 v15;
  bool v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  float v26;
  struct {
    __int64 v27;
    __int64 v28;
    char v29;
  } v27_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  ObjectControllerAccessDropItem_e05a00((void*)((__int64)&v27_.v27), a1),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v27_.v29 != 1) {
    goto LABEL_39;
  }
  if (v27_.v28 != 0) {
    v3 = std___1___shared_weak_count_lock(v27_.v28),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v3 != 0) {
      v4 = v27_.v27;
      v5 = v3;
      v6 = v27_.v27 != 0;
      if (v27_.v27 == 0) {
        goto LABEL_28;
      }
      v7 = *(_QWORD*)(a1 + 8);
      v8 = *(_QWORD*)(v27_.v27 + 160);
      v9 = *(float*)(v27_.v27 + 168);
      v25 = v8;
      v26 = v9;
      if (*(_BYTE*)(v7 + 976) == 1) {
        if (COERCE_FLOAT(*(_OWORD*)(v7 + 960)) == *(float*)&v8 &&
            COERCE_FLOAT(HIDWORD(*(_QWORD*)(v7 + 960))) == *((float*)&v8 + 1) &&
            COERCE_FLOAT(*(_QWORD*)(v7 + 968)) == v9) {
        LABEL_17:
          v14 = *(float*)(v4 + 172);
          if (*(_BYTE*)(v7 + 1008) == 1) {
            v15 = *(_OWORD*)(v7 + 992);
            v16 = *(float*)&v15 == 0x0.0p+0f &&
                  COERCE_FLOAT(HIDWORD(*(_QWORD*)(v7 + 992))) == v14;
            if (v16 && *((float*)&v15 + 2) == 0x0.0p+0f) {
              goto LABEL_27;
            }
            *(_DWORD*)(v7 + 992) = 0;
            *(float*)(v7 + 996) = v14;
            *(_OWORD*)(v7 + 992) = *(unsigned __int64*)(v7 + 992);
          }
          else {
            LODWORD(v17) = 0;
            *(_BYTE*)(v7 + 1008) = 1;
            *((float*)&v17 + 1) = v14;
            *(_OWORD*)(v7 + 992) = v17;
          }
          GameRoutine_dfa900(v7),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          v7 = *(_QWORD*)(a1 + 8);
        LABEL_27:
          *(_DWORD*)(v7 + 176) = v25;
          *(_DWORD*)(*(_QWORD*)(a1 + 8) + 180LL) = HIDWORD(v25);
          *(float*)(*(_QWORD*)(a1 + 8) + 184LL) = v26;
        LABEL_28:
          if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
            std___1___shared_weak_count___release_weak(v5),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          goto LABEL_30;
        }
        *(_QWORD*)(v7 + 960) = v8;
        v12 = *(_OWORD*)(v7 + 960);
        *((_QWORD*)&v12 + 1) = LODWORD(v9);
        *(_OWORD*)(v7 + 960) = v12;
      }
      else {
        *(_QWORD*)&v13 = *(_QWORD*)(v27_.v27 + 160);
        *(_BYTE*)(v7 + 976) = 1;
        *((_QWORD*)&v13 + 1) = LODWORD(v9);
        *(_OWORD*)(v7 + 960) = v13;
      }
      GameRoutine_dfa900(v7),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v7 = *(_QWORD*)(a1 + 8);
      goto LABEL_17;
    }
  }
  v6 = false;
LABEL_30:
  v18 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v18 + 946) = v6;
  game_hub_dfa520(v18), result = COERCE_AS(__typeof__(result),
                                           PSEUDO_REGISTER(__n128, "v0", "=w"));
  v19 = *(_QWORD*)(a1 + 8);
  v20 = *(_QWORD*)(v19 + 712);
  if (v20 != 0) {
    v21 = *(_QWORD*)(v19 + 704);
    v22 = *(_QWORD*)(v19 + 712);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                              memory_order_relaxed);
    v23 = std___1___shared_weak_count_lock(v22),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    result = std___1___shared_weak_count___release_weak(v20);
    if (v23 != 0) {
      if (v21 != 0) {
        if (v6) {
          v24 = 256;
        }
        else {
          v24 = 0;
        }
        *(_DWORD*)(v21 + 1760) = *(_DWORD*)(v21 + 1760) & 0xFFFFFEFF | v24;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v23 + 16LL))(
            v23, *(long double*)&result),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        result = std___1___shared_weak_count___release_weak(v23);
      }
    }
  }
LABEL_39:
  if (v27_.v29 == 1 && v27_.v28 != 0) {
    return std___1___shared_weak_count___release_weak(v27_.v28);
  }
  return result;
}

__attribute__((swiftcall)) void

ObjectControllerAccessDropItem_e05a00(PSEUDO_X8 x8_, __int64 a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  char v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  _BYTE* v15;

  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 224LL);
  if (0xAAAAAAAAAAAAAAABLL *
          ((*(_QWORD*)(*(_QWORD*)(a1 + 8) + 232LL) - v3) >> 3) <
      2) {
    *(_BYTE*)a2 = 0;
    *(_BYTE*)(a2 + 16) = 0;
    return;
  }
  v4 = *(_BYTE*)(v3 + 24);
  v5 = *(_QWORD*)(v3 + 40);
  v6 = v3 + 25;
  if ((v4 & 1) != 0) {
    v7 = v5;
  }
  else {
    v7 = v6;
  }
  v8 = strtoull(v7, &v15, 10);
  v9 = *(_QWORD*)GameData_212ec00;
  if (*v15 != 0) {
    v10 = 0;
  }
  else {
    v10 = v8;
  }
  v11 = *(_QWORD**)(v9 + 8);
  v12 = *(_QWORD**)(v9 + 16);
  while (1) {
    if (v11 == v12) {
      *(_QWORD*)a2 = 0;
      *(_QWORD*)(a2 + 8) = 0;
    LABEL_18:
      *(_BYTE*)(a2 + 16) = 1;
      return;
    }
    v13 = *v11;
    if ((*(_BYTE*)(*v11 + 16LL) & 1) == 0 && *(_QWORD*)(v13 + 80) == v10) {
      break;
    }
    v11 += 2;
  }
  v14 = v11[1];
  if (v14 == 0) {
    *(_QWORD*)a2 = v13;
    *(_QWORD*)(a2 + 8) = 0;
    goto LABEL_18;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8), 1u,
                            memory_order_relaxed);
  *(_QWORD*)a2 = v13;
  *(_QWORD*)(a2 + 8) = v14;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                            memory_order_relaxed);
  *(_BYTE*)(a2 + 16) = 1;
  if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak(v14);
  }
}

__int64 game_hub_ObjectControllerAccessDropItem_InitializeImpl_lambda0_Invoke(
    __int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  _QWORD** v2;
  __int64 result;
  __int64 v4;
  _QWORD* v5;
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
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __n128 v23;
  __int64 v25;
  __int128* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  struct {
    __int64 v53;
    __int64 v54;
    __int64 v55;
  } v53_;
  struct {
    __int64 v56;
    __int64 v57;
    __int64 v58;
    int v59;
  } v56_;
  struct {
    __int64 v60;
    unsigned __int64 v61;
    unsigned __int64 v62;
  } v60_;
  __int64 v63[2];
  char v64;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = (_QWORD**)GameData_212c6a0[0];
  result =
      GameRoutine_dbc2c0(*(_QWORD**)GameData_212c6a0[0], *(_QWORD*)(v1 + 8));
  if (result == 0 || *(_DWORD*)(result + 12) != 0) {
    return result;
  }
  v4 = result;
  v5 = *(_QWORD**)(v1 + 8);
  if (v5[102] != 0) {
    v7 = *(_QWORD*)(v5[100] + 8LL);
    v6 = *(_QWORD*)(v5[100] + 16LL);
    if (v6 != v7) {
      while (1) {
        v8 = *(_QWORD*)(v7 + 8);
        if (*(_DWORD*)(v8 + 284) == 2) {
          break;
        }
        v7 += 32;
        if (v7 == v6) {
          goto LABEL_9;
        }
      }
      GameRoutine_989ea0(v5[102], 1, v8);
      v5 = *(_QWORD**)(v1 + 8);
    }
  }
LABEL_9:
  Object_df9f60(v5);
  v9 = *(_QWORD*)(v1 + 8);
  game_hub_dfc000(v9);
  v10 = GameRoutine_dbc2c0(*v2, v9);
  if (v10 != 0) {
    *(_BYTE*)(v10 + 8) = 0;
  }
  ObjectControllerAccessDropItem_e05a00((void*)((__int64)&v56_.v56), v1);
  if ((unsigned __int8)v56_.v58 == 1 && v56_.v57 != 0) {
    v11 = std___1___shared_weak_count_lock(v56_.v57);
    if (v11 != 0) {
      if (v56_.v56 != 0) {
        v12 = *(_QWORD*)(*(_QWORD*)GameData_212ef88[0] + 8LL);
        v13 = *(_QWORD*)(*(_QWORD*)GameData_212ef88[0] + 16LL);
        if (v12 != v13) {
          v14 = *(_QWORD*)(v56_.v56 + 80);
          do {
            v15 = *(_QWORD*)(v12 + 48);
            v16 = *(_QWORD*)(v12 + 56);
            while (v15 != v16) {
              if (*(_QWORD*)(v15 + 8) == v14) {
                *(_BYTE*)(v15 + 16) = 1;
              }
              v15 += 24;
            }
            v12 += 72;
          } while (v12 != v13);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v17 = v11;
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak(v17);
      }
    }
  }
  if ((unsigned __int8)v56_.v58 == 1 && v56_.v57 != 0) {
    std___1___shared_weak_count___release_weak(v56_.v57);
  }
  v18 = GameData_212d458[0];
  v19 = *(_QWORD*)(*GameData_212d458[0] + 80);
  if (v19 != 0) {
    v20 = *(_QWORD*)(*GameData_212d458[0] + 72);
    v21 = *(_QWORD*)(*GameData_212d458[0] + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                              memory_order_relaxed);
    v22 = std___1___shared_weak_count_lock(v21);
    v23 = std___1___shared_weak_count___release_weak(v19);
    if (v22 == 0 || v20 == 0) {
      if (v22 == 0) {
        goto LABEL_43;
      }
    }
    else {
      v25 = *(_QWORD*)(v1 + 8);
      if ((*(_BYTE*)(v25 + 976) & 1) != 0) {
        v26 = (__int128*)(v25 + 960);
      }
      else if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                     memory_order_acquire) &
                1) != 0) {
        v26 = &GameData_21a6120;
      }
      else {
        v26 = &GameData_21a6120;
        if ((unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
          v52 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v52;
          __cxa_guard_release(&GameData_21a6130);
        }
      }
      v27 = *(_QWORD*)(*(_QWORD*)(v20 + 24) + 24LL);
      *(_BYTE*)(v27 + 25) = 0;
      *(_QWORD*)(v27 + 32) = 0;
      *(_QWORD*)(v27 + 37) = 0;
      *(_BYTE*)(v27 + 48) = 0;
      *(_BYTE*)(v27 + 64) = 0;
      *(_QWORD*)(v27 + 80) = 0;
      *(_BYTE*)(v27 + 96) = 1;
      *(_DWORD*)(v27 + 32) = 1086918608;
      *(_QWORD*)(v27 + 56) = *((_QWORD*)v26 + 1);
      v28 = *(_QWORD*)v26;
      *(_BYTE*)(v27 + 64) = 1;
      *(_QWORD*)(v27 + 48) = v28;
      game_d523c0(*(_QWORD*)(*(_QWORD*)(v27 + 16) + 488LL));
      v29 = *v18;
      v63[0] = v20;
      v63[1] = v22;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 16), 1u,
                                memory_order_relaxed);
      HubCharacterNatives_cba040(v29, v63);
      v23 = std___1___shared_weak_count___release_weak(v22);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v22 + 16LL))(
          v22, *(long double*)&v23);
      std___1___shared_weak_count___release_weak(v22);
    }
  }
LABEL_43:
  v60_.v61 = 0;
  v60_.v62 = 0;
  v60_.v60 = 0;
  v56_.v56 = *(_QWORD*)(*(_QWORD*)(v1 + 8) + 72LL);
  v56_.v59 = 1;
  v60_.v61 = ProcHubSeqEnter_918ce0(&v60_.v60, (__int64)&v56_.v56);
  if (v56_.v59 != -1) {
    ((void (*)(__int64*, __int64*))GameData_1fe2820[v56_.v59])(&v53_.v53,
                                                               &v56_.v56);
  }
  v31 = *(__int64**)(*(_QWORD*)(v1 + 8) + 224LL);
  if (*(__int64**)(*(_QWORD*)(v1 + 8) + 232LL) == v31) {
    LOWORD(v53_.v53) = 0;
  }
  else if ((*(_BYTE*)v31 & 1) != 0) {
    fw_text_String_CopyTerminated(&v53_.v53, v31[2], v31[1]);
  }
  else {
    v32 = *v31;
    v33 = v31[1];
    v34 = v31[2];
    v53_.v54 = v33;
    v53_.v55 = v34;
    v53_.v53 = v32;
  }
  v35 = v53_.v53;
  v36 = v53_.v54;
  v53_.v53 = 0;
  v53_.v54 = 0;
  v56_.v56 = v35;
  v56_.v57 = v36;
  v37 = v53_.v55;
  v38 = (_QWORD*)v60_.v61;
  v53_.v55 = 0;
  v56_.v58 = v37;
  v39 = 4;
  v56_.v59 = 4;
  if (v60_.v61 >= v60_.v62) {
    v43 = ProcHubSeqEnter_918ce0(&v60_.v60, (__int64)&v56_.v56);
    v39 = v56_.v59;
    v60_.v61 = v43;
    if (v56_.v59 == -1) {
      goto LABEL_54;
    }
  }
  else {
    v40 = v56_.v56;
    v41 = v56_.v57;
    v42 = v56_.v58;
    *(_DWORD*)(v60_.v61 + 24) = 4;
    v38[1] = v41;
    v38[2] = v42;
    *v38 = v40;
    v56_.v57 = 0;
    v56_.v58 = 0;
    v56_.v56 = 0;
    v60_.v61 = (unsigned __int64)(v38 + 4);
  }
  ((void (*)(char*, __int64*))GameData_1fe2820[v39])(&v64, &v56_.v56);
LABEL_54:
  v56_.v59 = -1;
  if ((v53_.v53 & 1) != 0 && v53_.v55 != 0) {
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v44);
  }
  if (*(_QWORD*)GameData_212dbb8[0] != 0) {
    v45 = *(_QWORD*)GameData_212dbb8[0] + 248LL;
  }
  else {
    v45 = 0;
  }
  if (GameData_22127a8 != 0) {
    v46 = GameData_22127a8;
  }
  else {
    v46 = v45;
  }
  result = X8CALL_X0(__int64, Manager_d9b810((void*)((__int64)&v56_.v56), v46,
                                             (__int64)"ItemGainWaitObjAnim", 19,
                                             (__int64)&v60_.v60, 0));
  v47 = v60_.v60;
  *(_DWORD*)(v4 + 12) = 1;
  if (v47 != 0) {
    v48 = v60_.v61;
    if (v47 == v60_.v61) {
      goto LABEL_72;
    }
    do {
      v49 = *(unsigned int*)(v48 - 8);
      v50 = v48 - 32;
      if ((_DWORD)v49 != -1) {
        result =
            ((__int64 (*)(__int64*, unsigned __int64))GameData_1fe2820[v49])(
                &v56_.v56, v48 - 32);
      }
      *(_DWORD*)(v48 - 8) = -1;
      v48 -= 32LL;
    } while (v50 != v47);
    v60_.v61 = v47;
    if (v60_.v60 != 0) {
    LABEL_72:
      v51 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v51 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v51);
    }
  }
  return result;
}

#pragma GCC visibility pop
