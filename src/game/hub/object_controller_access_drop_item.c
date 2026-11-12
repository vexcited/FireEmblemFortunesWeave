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
__n128 ObjectControllerAccessDropItem_e05790_alt1(__int64 a1) __asm__(
    "ObjectControllerAccessDropItem_e05790");
__attribute__((swiftcall)) void
ObjectControllerAccessDropItem_e05a00(PSEUDO_X8 x8_, __int64 a1);
__int64
game_hub_ObjectControllerAccessDropItem_InitializeImpl_lambda0_Invoke_alt1(
    __int64 a1) __asm__("game_hub_ObjectControllerAccessDropItem_"
                        "InitializeImpl_lambda0_Invoke");
__attribute__((swiftcall)) void ObjectControllerAccessDropItem_e05a00_alt1(
    PSEUDO_X8,
    unsigned __int64 result) __asm__("ObjectControllerAccessDropItem_e05a00");
__int64 GameHr_dbc2c0(_QWORD*, __int64);
__int64
HubCharacterNatives_cba040_alt1(__int64,
                                __int64*) __asm__("HubCharacterNatives_cba040");
__int64 Object_df9f60_alt1(_QWORD*) __asm__("Object_df9f60");
__int64 game_hub_dfc000_alt1(__int64 result) __asm__("game_hub_dfc000");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ObjectControllerAccessDropItem_e05790(unsigned __int64 a1);
void game_hub_ObjectControllerAccessDropItem_InitializeImpl_lambda0_Invoke(
    __int64 a1);
_QWORD* ObjectControllerAccessDropItem_e05790_alt2(__int64) __asm__(
    "ObjectControllerAccessDropItem_e05790");
__int64 game_hub_Object_EnableAccess(__int64, __int64, unsigned int);
extern __int64 (*GameData_1fe2878[])();
void game_d58e20(__int64, int, __int64*, int);
_QWORD* game_hub_ObjectControllerAccessDropItem_InitializeImpl(__int64 a1);

_QWORD* game_hub_ObjectControllerAccessDropItem_InitializeImpl(__int64 a1)
{
  _QWORD* result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int128 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  __int64 v17[3];
  struct {
    _QWORD v18[4];
    _QWORD* v19;
  } v18_;

  result = (_QWORD*)GameHr_dbc2c0(*(_QWORD**)GameData_212c6a0[0],
                                  *(_QWORD*)(a1 + 8));
  if (result == nullptr) {
    return result;
  }
  v3 = *(_QWORD*)(a1 + 8);
  v18_.v18[0] = GameData_1fe2878;
  v18_.v18[1] = a1;
  v18_.v19 = v18_.v18;
  game_hub_Object_EnableAccess(v3, (__int64)v18_.v18, 1u);
  if (v18_.v19 == v18_.v18) {
    v4 = 32;
  }
  else {
    if (v18_.v19 == nullptr) {
      goto LABEL_7;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v18_.v19 + v4))((__int64)v18_.v19);
LABEL_7:
  v5 = *(_QWORD*)(a1 + 8);
  v6 = *(_QWORD*)(v5 + 712);
  if (v6 != 0) {
    v7 = *(_QWORD*)(v5 + 704);
    v8 = *(_QWORD*)(v5 + 712);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                              memory_order_relaxed);
    v9 = std___1___shared_weak_count_lock_alt1(v8);
    std___1___shared_weak_count___release_weak_alt1(v6);
    if (v9 != 0) {
      if (v7 != 0) {
        LOBYTE(v17[0]) = 30;
        strcpy((char*)v17 + 1, "SE_SYS_Item_Get");
        game_d58e20(v7, 0, v17, 0);
        *(_QWORD*)(v7 + 16) = 0x3F19999A00000000LL;
        v10 = *(_OWORD*)(v7 + 16);
        *(_DWORD*)(v7 + 1760) &= ~0x40u;
        *(_OWORD*)(v7 + 16) = (unsigned __int64)v10;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak_alt1(v9);
      }
    }
  }
  v11 = *(_QWORD*)(a1 + 8);
  v12 = *(_QWORD*)(v11 + 728);
  if (v12 != 0) {
    v13 = *(_QWORD*)(v11 + 720);
    v14 = *(_QWORD*)(v11 + 728);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                              memory_order_relaxed);
    v15 = std___1___shared_weak_count_lock_alt1(v14);
    std___1___shared_weak_count___release_weak_alt1(v12);
    if (v15 != 0) {
      if (v13 != 0) {
        if ((*(_BYTE*)(v13 + 232) & 1) != 0) {
          *(_QWORD*)(v13 + 240) = 17;
          v16 = *(char**)(v13 + 248);
        }
        else {
          *(_BYTE*)(v13 + 232) = 34;
          v16 = (char*)(v13 + 233);
        }
        strcpy(v16, "MID_Access_Common");
        *(_BYTE*)(v13 + 218) = 1;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        std___1___shared_weak_count___release_weak_alt1(v15);
      }
    }
  }
  return ObjectControllerAccessDropItem_e05790_alt2(a1);
}

void ObjectControllerAccessDropItem_e05790(unsigned __int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _BOOL4 v5;
  __int64 v6;
  __int64 v7;
  float v8;
  __int128 v11;
  __int128 v12;
  float v13;
  __int128 v14;
  bool v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  float v25;
  struct {
    __int64 v26;
    __int64 v27;
    char v28;
  } v26_;

  ObjectControllerAccessDropItem_e05a00_alt1((void*)((__int64)&v26_.v26), a1);
  if (v26_.v28 != 1) {
    goto LABEL_39;
  }
  if (v26_.v27 != 0) {
    v2 = std___1___shared_weak_count_lock_alt1(v26_.v27);
    if (v2 != 0) {
      v3 = v26_.v26;
      v4 = v2;
      v5 = v26_.v26 != 0;
      if (v26_.v26 == 0) {
        goto LABEL_28;
      }
      v6 = *(_QWORD*)(a1 + 8);
      v7 = *(_QWORD*)(v26_.v26 + 160);
      v8 = *(float*)(v26_.v26 + 168);
      v24 = v7;
      v25 = v8;
      if (*(_BYTE*)(v6 + 976) == 1) {
        if (COERCE_FLOAT(*(_OWORD*)(v6 + 960)) == *(float*)&v7 &&
            COERCE_FLOAT(HIDWORD(*(_QWORD*)(v6 + 960))) == *((float*)&v7 + 1) &&
            COERCE_FLOAT(*(_QWORD*)(v6 + 968)) == v8) {
        LABEL_17:
          v13 = *(float*)(v3 + 172);
          if (*(_BYTE*)(v6 + 1008) == 1) {
            v14 = *(_OWORD*)(v6 + 992);
            v15 = *(float*)&v14 == 0x0.0p+0f &&
                  COERCE_FLOAT(HIDWORD(*(_QWORD*)(v6 + 992))) == v13;
            if (v15 && *((float*)&v14 + 2) == 0x0.0p+0f) {
              goto LABEL_27;
            }
            *(_DWORD*)(v6 + 992) = 0;
            *(float*)(v6 + 996) = v13;
            *(_OWORD*)(v6 + 992) = *(unsigned __int64*)(v6 + 992);
          }
          else {
            LODWORD(v16) = 0;
            *(_BYTE*)(v6 + 1008) = 1;
            *((float*)&v16 + 1) = v13;
            *(_OWORD*)(v6 + 992) = v16;
          }
          GameRoutine_dfa900(v6);
          v6 = *(_QWORD*)(a1 + 8);
        LABEL_27:
          *(_DWORD*)(v6 + 176) = v24;
          *(_DWORD*)(*(_QWORD*)(a1 + 8) + 180LL) = HIDWORD(v24);
          *(float*)(*(_QWORD*)(a1 + 8) + 184LL) = v25;
        LABEL_28:
          if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
            std___1___shared_weak_count___release_weak_alt1(v4);
          }
          goto LABEL_30;
        }
        *(_QWORD*)(v6 + 960) = v7;
        v11 = *(_OWORD*)(v6 + 960);
        *((_QWORD*)&v11 + 1) = LODWORD(v8);
        *(_OWORD*)(v6 + 960) = v11;
      }
      else {
        *(_QWORD*)&v12 = *(_QWORD*)(v26_.v26 + 160);
        *(_BYTE*)(v6 + 976) = 1;
        *((_QWORD*)&v12 + 1) = LODWORD(v8);
        *(_OWORD*)(v6 + 960) = v12;
      }
      GameRoutine_dfa900(v6);
      v6 = *(_QWORD*)(a1 + 8);
      goto LABEL_17;
    }
  }
  v5 = false;
LABEL_30:
  v17 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v17 + 946) = v5;
  game_hub_dfa520(v17);
  v18 = *(_QWORD*)(a1 + 8);
  v19 = *(_QWORD*)(v18 + 712);
  if (v19 != 0) {
    v20 = *(_QWORD*)(v18 + 704);
    v21 = *(_QWORD*)(v18 + 712);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                              memory_order_relaxed);
    v22 = std___1___shared_weak_count_lock_alt1(v21);
    std___1___shared_weak_count___release_weak_alt1(v19);
    if (v22 != 0) {
      if (v20 != 0) {
        if (v5) {
          v23 = 256;
        }
        else {
          v23 = 0;
        }
        *(_DWORD*)(v20 + 1760) = *(_DWORD*)(v20 + 1760) & 0xFFFFFEFF | v23;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
        std___1___shared_weak_count___release_weak_alt1(v22);
      }
    }
  }
LABEL_39:
  if (v26_.v28 == 1 && v26_.v27 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v26_.v27);
  }
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

void game_hub_ObjectControllerAccessDropItem_InitializeImpl_lambda0_Invoke(
    __int64 a1)
{
  unsigned __int64 v1;
  _QWORD** v2;
  __int64 v3;
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
  __int64 v24;
  __int128* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  struct {
    __int64 v51;
    __int64 v52;
    __int64 v53;
  } v51_;
  struct {
    __int64 v54;
    __int64 v55;
    __int64 v56;
    int v57;
  } v54_;
  struct {
    __int64 v58;
    unsigned __int64 v59;
    unsigned __int64 v60;
  } v58_;
  __int64 v61[2];
  char v62;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = (_QWORD**)GameData_212c6a0[0];
  v3 = GameHr_dbc2c0(*(_QWORD**)GameData_212c6a0[0], *(_QWORD*)(v1 + 8));
  if (v3 == 0 || *(_DWORD*)(v3 + 12) != 0) {
    return;
  }
  v4 = v3;
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
  Object_df9f60_alt1(v5);
  v9 = *(_QWORD*)(v1 + 8);
  game_hub_dfc000_alt1(v9);
  v10 = GameHr_dbc2c0(*v2, v9);
  if (v10 != 0) {
    *(_BYTE*)(v10 + 8) = 0;
  }
  ObjectControllerAccessDropItem_e05a00_alt1((void*)((__int64)&v54_.v54), v1);
  if ((unsigned __int8)v54_.v56 == 1 && v54_.v55 != 0) {
    v11 = std___1___shared_weak_count_lock_alt1(v54_.v55);
    if (v11 != 0) {
      if (v54_.v54 != 0) {
        v12 = *(_QWORD*)(*(_QWORD*)GameData_212ef88[0] + 8LL);
        v13 = *(_QWORD*)(*(_QWORD*)GameData_212ef88[0] + 16LL);
        if (v12 != v13) {
          v14 = *(_QWORD*)(v54_.v54 + 80);
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
        std___1___shared_weak_count___release_weak_alt1(v17);
      }
    }
  }
  if ((unsigned __int8)v54_.v56 == 1 && v54_.v55 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v54_.v55);
  }
  v18 = GameData_212d458[0];
  v19 = *(_QWORD*)(*GameData_212d458[0] + 80);
  if (v19 != 0) {
    v20 = *(_QWORD*)(*GameData_212d458[0] + 72);
    v21 = *(_QWORD*)(*GameData_212d458[0] + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                              memory_order_relaxed);
    v22 = std___1___shared_weak_count_lock_alt1(v21);
    std___1___shared_weak_count___release_weak_alt1(v19);
    if (v22 == 0 || v20 == 0) {
      if (v22 == 0) {
        goto LABEL_43;
      }
    }
    else {
      v24 = *(_QWORD*)(v1 + 8);
      if ((*(_BYTE*)(v24 + 976) & 1) != 0) {
        v25 = (__int128*)(v24 + 960);
      }
      else if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                     memory_order_acquire) &
                1) != 0) {
        v25 = &GameData_21a6120;
      }
      else {
        v25 = &GameData_21a6120;
        if (__cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
          v50 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v50;
          __cxa_guard_release_alt1((__int64)&GameData_21a6130);
        }
      }
      v26 = *(_QWORD*)(*(_QWORD*)(v20 + 24) + 24LL);
      *(_BYTE*)(v26 + 25) = 0;
      *(_QWORD*)(v26 + 32) = 0;
      *(_QWORD*)(v26 + 37) = 0;
      *(_BYTE*)(v26 + 48) = 0;
      *(_BYTE*)(v26 + 64) = 0;
      *(_QWORD*)(v26 + 80) = 0;
      *(_BYTE*)(v26 + 96) = 1;
      *(_DWORD*)(v26 + 32) = 1086918608;
      *(_QWORD*)(v26 + 56) = *((_QWORD*)v25 + 1);
      v27 = *(_QWORD*)v25;
      *(_BYTE*)(v26 + 64) = 1;
      *(_QWORD*)(v26 + 48) = v27;
      game_d523c0(*(_QWORD*)(*(_QWORD*)(v26 + 16) + 488LL));
      v28 = *v18;
      v61[0] = v20;
      v61[1] = v22;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 16), 1u,
                                memory_order_relaxed);
      HubCharacterNatives_cba040_alt1(v28, v61);
      std___1___shared_weak_count___release_weak_alt1(v22);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
      std___1___shared_weak_count___release_weak_alt1(v22);
    }
  }
LABEL_43:
  v58_.v59 = 0;
  v58_.v60 = 0;
  v58_.v58 = 0;
  v54_.v54 = *(_QWORD*)(*(_QWORD*)(v1 + 8) + 72LL);
  v54_.v57 = 1;
  v58_.v59 = ProcHubSeqEnter_918ce0(&v58_.v58, (__int64)&v54_.v54);
  if (v54_.v57 != -1) {
    ((void (*)(__int64*, __int64*))GameData_1fe2820[v54_.v57])(&v51_.v51,
                                                               &v54_.v54);
  }
  v29 = *(__int64**)(*(_QWORD*)(v1 + 8) + 224LL);
  if (*(__int64**)(*(_QWORD*)(v1 + 8) + 232LL) == v29) {
    LOWORD(v51_.v51) = 0;
  }
  else if ((*(_BYTE*)v29 & 1) != 0) {
    fw_text_String_CopyTerminated(&v51_.v51, v29[2], v29[1]);
  }
  else {
    v30 = *v29;
    v31 = v29[1];
    v32 = v29[2];
    v51_.v52 = v31;
    v51_.v53 = v32;
    v51_.v51 = v30;
  }
  v33 = v51_.v51;
  v34 = v51_.v52;
  v51_.v51 = 0;
  v51_.v52 = 0;
  v54_.v54 = v33;
  v54_.v55 = v34;
  v35 = v51_.v53;
  v36 = (_QWORD*)v58_.v59;
  v51_.v53 = 0;
  v54_.v56 = v35;
  v37 = 4;
  v54_.v57 = 4;
  if (v58_.v59 >= v58_.v60) {
    v41 = ProcHubSeqEnter_918ce0(&v58_.v58, (__int64)&v54_.v54);
    v37 = v54_.v57;
    v58_.v59 = v41;
    if (v54_.v57 == -1) {
      goto LABEL_54;
    }
  }
  else {
    v38 = v54_.v54;
    v39 = v54_.v55;
    v40 = v54_.v56;
    *(_DWORD*)(v58_.v59 + 24) = 4;
    v36[1] = v39;
    v36[2] = v40;
    *v36 = v38;
    v54_.v55 = 0;
    v54_.v56 = 0;
    v54_.v54 = 0;
    v58_.v59 = (unsigned __int64)(v36 + 4);
  }
  ((void (*)(char*, __int64*))GameData_1fe2820[v37])(&v62, &v54_.v54);
LABEL_54:
  v54_.v57 = -1;
  if ((v51_.v51 & 1) != 0 && v51_.v53 != 0) {
    v42 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v42 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v42, v51_.v53);
  }
  if (*(_QWORD*)GameData_212dbb8[0] != 0) {
    v43 = *(_QWORD*)GameData_212dbb8[0] + 248LL;
  }
  else {
    v43 = 0;
  }
  if (GameData_22127a8 != 0) {
    v44 = GameData_22127a8;
  }
  else {
    v44 = v43;
  }
  Manager_d9b810((void*)((__int64)&v54_.v54), v44,
                 (__int64)"ItemGainWaitObjAnim", 19, (__int64)&v58_.v58, 0);
  v45 = v58_.v58;
  *(_DWORD*)(v4 + 12) = 1;
  if (v45 != 0) {
    v46 = v58_.v59;
    if (v45 == v58_.v59) {
      goto LABEL_72;
    }
    do {
      v47 = *(unsigned int*)(v46 - 8);
      v48 = v46 - 32;
      if ((_DWORD)v47 != -1) {
        ((void (*)(__int64*, unsigned __int64))GameData_1fe2820[v47])(&v54_.v54,
                                                                      v46 - 32);
      }
      *(_DWORD*)(v46 - 8) = -1;
      v46 -= 32LL;
    } while (v48 != v45);
    v58_.v59 = v45;
    v45 = v58_.v58;
    if (v58_.v58 != 0) {
    LABEL_72:
      v49 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v49 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v49, v45);
    }
  }
}

#pragma GCC visibility pop
