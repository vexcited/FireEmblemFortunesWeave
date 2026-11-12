#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10b5e70(_QWORD, _QWORD);
__int64 GameRoutine_11c53a0(__int64, __int64, __int128*, __int128*, __int128*,
                            __int128*);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strcmp(_QWORD, _QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_1ab52a0;
extern _UNKNOWN* GameData_212ff28;
extern __int64 (*GameData_2016850[])();
extern __int64 (*GameData_2016950[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern int* GameData_212ff20;
__int64 CharacterWork_11c56e0(__int64 a1);
__int64 CharacterWork_11c5860(__int64 a1, __int64 a2);
__int64 game_evt_demo_CharacterWork_CharacterWork_lambda0_DeletingDestructor(
    __int64 a1);
_QWORD* game_evt_demo_CharacterWork_CharacterWork_lambda0_Clone(__int64 a1);
_QWORD* game_evt_demo_CharacterWork_Equip_lambda0_CloneInto(_QWORD* result,
                                                            _QWORD* a2);
__int64 GameRoutine_a59220(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN* GameData_212ec88;
extern int* GameData_212ec80;
__int64
game_evt_demo_CharacterWork_CharacterWork_lambda0_Destructor(__int64 result);
_QWORD*
game_evt_demo_CharacterWork_CharacterWork_lambda0_CloneInto(_QWORD* result,
                                                            _QWORD* a2);
__int64
game_evt_demo_CharacterWork_CharacterWork_lambda0_Destroy(__int64 result);
__int64
game_evt_demo_CharacterWork_SetClothControl_lambda0_Invoke(__int64 result,
                                                           __int64 a2);
__int64 game_character_1085470(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212c2b0;
extern _UNKNOWN GameData_21f4cb8;
extern __int128 GameData_1a82c50;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int64* GameData_212e460[2];
extern __int64 GameData_212e438;
extern int GameData_21f4cb0;
__int64 CharacterWork_11c5740(__int64 result, char a2);
__int64 game_evt_demo_CharacterWork_Equip_lambda0_Invoke(float32x4_t* a1,
                                                         __int64* a2);
long double CharacterWork_11c6f00(__int64 a1);
__int64 CharacterAnimatorSound_10f73b0(_QWORD, _QWORD, _QWORD, _QWORD,
                                       long double);
__int64 CharacterAnimator_1079580(_QWORD, _QWORD, double, float, float);
__int64 GameRoutine_1152360(_QWORD, _QWORD);
__int64 GameRoutine_11c46e0(_QWORD);
__int64 ProcInst_657a50(void);
__int64 game_HashString(_QWORD);
__int64 CharacterModel_1071880(_QWORD, _QWORD);
extern _DWORD* GameData_212d280;
extern __int64 (*GameData_20168c0[])();
extern __int64 GameData_21c9d80;
extern __int64 GameData_21f8018;
extern __int64 GameData_22336e0;
float GameRoutine_11c4de0(__int64, char, float result);
void CharacterWork_11c5ae0(__int64, double, double, long double);
_QWORD* game_evt_demo_CharacterWork_CharacterWork_lambda0_Invoke_11c6440_alt1(
    _QWORD* result, _QWORD* a2) __asm__("game_evt_demo_CharacterWork_"
                                        "CharacterWork_lambda0_Invoke_11c6440");
_BYTE* ProcInst_657a50_alt1(__int64, char) __asm__("ProcInst_657a50");
__int64*
GameRoutine_1152360_alt1(_QWORD*,
                         unsigned __int8*) __asm__("GameRoutine_1152360");
__int64 CharacterAnimatorSound_10f73b0_alt1(
    _QWORD*, __int64*, __int64, int) __asm__("CharacterAnimatorSound_10f73b0");
__int64 CharacterModel_1071880_alt1(__int64,
                                    int) __asm__("CharacterModel_1071880");
__int64 GameRoutine_11c46e0_alt1(__int64 result) __asm__("GameRoutine_11c46e0");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
float CharacterAnimator_1079580_alt1(__int64, int, float, float, float) __asm__(
    "CharacterAnimator_1079580");
void CharacterWork_11c5ae0_alt1(__int64) __asm__("CharacterWork_11c5ae0");
unsigned __int8*
game_evt_demo_CharacterWork_CharacterWork_lambda0_Invoke_11c6440(
    unsigned __int8* result, _QWORD* a2);

__int64 CharacterWork_11c56e0(__int64 a1)
{
  __int128 v2;
  __int128 v3;
  __int128 v4;
  __int128 v5;

  v5 = 0u;
  v3 = 0u;
  v4 = 0u;
  v2 = 0u;
  return GameRoutine_11c53a0(a1, (__int64)&GameData_1ab52a0, &v5, &v4, &v3,
                             &v2);
}

__int64 CharacterWork_11c5740(__int64 result, char a2)
{
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
  char v12;

  v2 = *(_QWORD*)(result + 152);
  if (v2 != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4cb8,
                              memory_order_acquire) &
         1) == 0) {
      v12 = a2;
      v11 = v2;
      result = __cxa_guard_acquire(&GameData_21f4cb8);
      v2 = v11;
      a2 = v12;
      if ((_DWORD)result != 0) {
        GameData_21f4cb0 = wld_Crc32(0, "CharacterBuilder", 16);
        result = __cxa_guard_release(&GameData_21f4cb8);
        v2 = v11;
        a2 = v12;
      }
    }
    v4 = *(_QWORD*)(v2 + 504);
    v3 = *(_QWORD*)(v2 + 512);
    v5 = v3;
    v6 = v3;
    while (v6 != v4) {
      v7 = *(_DWORD*)(v6 - 16);
      v6 -= 16;
      v5 -= 16;
      if (v7 == GameData_21f4cb0) {
        if (v3 != v5) {
          v8 = *(_QWORD*)(v5 + 8);
          v9 = *(_QWORD*)(v8 + 440);
          if (v9 == 0) {
            goto LABEL_11;
          }
          goto LABEL_10;
        }
        break;
      }
    }
    v8 = 0;
    v9 = *(_QWORD*)((char*)((_QWORD*)0x1B4LL) + 4);
    if (*(_QWORD*)((char*)((_QWORD*)0x1B4LL) + 4) != 0) {
    LABEL_10:
      *(_BYTE*)(v9 + 289) = a2 & 1;
    }
  LABEL_11:
    v10 = *(_QWORD*)(v8 + 432);
    if (v10 != 0) {
      *(_BYTE*)(v10 + 289) = a2 & 1;
    }
  }
  return result;
}

__int64 CharacterWork_11c5860(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  unsigned __int8 explicit;
  int* v8;
  __int64 v9;
  __int64 i;
  int v11;
  unsigned int v12;

  result = strcmp(a2, "Idle");
  if ((_DWORD)result != 0) {
    result = strcmp(a2, "Open");
    if ((_DWORD)result != 0) {
      result = strcmp(a2, "Close");
      if ((_DWORD)result != 0) {
        return result;
      }
      v5 = 2;
    }
    else {
      v5 = 1;
    }
  }
  else {
    v5 = 0;
  }
  v6 = *(_QWORD*)(a1 + 152);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ff28,
                                  memory_order_acquire);
  v8 = GameData_212ff20;
  if ((explicit & 1) == 0) {
    v12 = v5;
    result = __cxa_guard_acquire(GameData_212ff28);
    v5 = v12;
    if ((_DWORD)result != 0) {
      *v8 = wld_Crc32(0, "CharacterWeaponAnimator", 23);
      result = __cxa_guard_release(GameData_212ff28);
      v5 = v12;
    }
  }
  v9 = *(_QWORD*)(v6 + 512);
  for (i = v9; i != *(_QWORD*)(v6 + 504); i -= 16) {
    v11 = *(_DWORD*)(i - 16);
    v9 -= 16;
    if (v11 == *v8) {
      if (*(_QWORD*)(v6 + 512) != v9) {
        result = *(_QWORD*)(v9 + 8);
        if (result != 0) {
          return GameRoutine_10b5e70(result, v5);
        }
      }
      return result;
    }
  }
  return result;
}

__int64

game_evt_demo_CharacterWork_CharacterWork_lambda0_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)result = GameData_2016850;
  if ((*(_BYTE*)(result + 40) & 1) != 0) {
    v1 = *(_QWORD*)(result + 56);
    if (v1 != 0) {
      v2 = result;
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v1);
      result = v2;
    }
  }
  if ((*(_BYTE*)(result + 16) & 1) != 0) {
    v4 = *(_QWORD*)(result + 32);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  return result;
}

__int64

game_evt_demo_CharacterWork_CharacterWork_lambda0_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = GameData_2016850;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 56);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 32);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v6, v5);
    }
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v7, a1);
}

_QWORD* game_evt_demo_CharacterWork_CharacterWork_lambda0_Clone(__int64 a1)
{
  _QWORD* v2;
  char v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  v3 = *(_BYTE*)(a1 + 16);
  v4 = v2;
  v5 = *(_QWORD*)(a1 + 8);
  *v2 = GameData_2016850;
  v2[1] = v5;
  if ((v3 & 1) != 0) {
    fw_text_String_CopyTerminated(v2 + 2, *(_QWORD*)(a1 + 32),
                                  *(_QWORD*)(a1 + 24));
  }
  else {
    v6 = *(_QWORD*)(a1 + 24);
    v7 = *(_QWORD*)(a1 + 32);
    v2[2] = *(_QWORD*)(a1 + 16);
    v2[3] = v6;
    v2[4] = v7;
  }
  if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
    fw_text_String_CopyTerminated(v4 + 5, *(_QWORD*)(a1 + 56),
                                  *(_QWORD*)(a1 + 48));
  }
  else {
    v8 = *(_QWORD*)(a1 + 48);
    v9 = *(_QWORD*)(a1 + 56);
    v4[5] = *(_QWORD*)(a1 + 40);
    v4[6] = v8;
    v4[7] = v9;
  }
  return v4;
}

_QWORD*

game_evt_demo_CharacterWork_CharacterWork_lambda0_CloneInto(_QWORD* result,
                                                            _QWORD* a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v3 = result;
  *a2 = GameData_2016850;
  a2[1] = result[1];
  if ((result[2] & 1) != 0) {
    result =
        (_QWORD*)fw_text_String_CopyTerminated(a2 + 2, result[4], result[3]);
  }
  else {
    v4 = result[2];
    v5 = result[4];
    a2[3] = result[3];
    a2[4] = v5;
    a2[2] = v4;
  }
  if ((v3[5] & 1) != 0) {
    return (_QWORD*)fw_text_String_CopyTerminated(a2 + 5, v3[7], v3[6]);
  }
  v6 = v3[5];
  v7 = v3[7];
  a2[6] = v3[6];
  a2[7] = v7;
  a2[5] = v6;
  return result;
}

__int64

game_evt_demo_CharacterWork_CharacterWork_lambda0_Destroy(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  if ((*(_BYTE*)(result + 40) & 1) != 0) {
    v1 = *(_QWORD*)(result + 56);
    if (v1 != 0) {
      v2 = result;
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v1);
      result = v2;
    }
  }
  if ((*(_BYTE*)(result + 16) & 1) != 0) {
    v4 = *(_QWORD*)(result + 32);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  return result;
}

unsigned __int8*

game_evt_demo_CharacterWork_CharacterWork_lambda0_Invoke_11c6440(
    unsigned __int8* result, _QWORD* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  _QWORD* v3;
  unsigned __int8* v4;
  int v5;
  bool v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v20;
  unsigned __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  unsigned __int64 v24;
  __int64 v25;
  _DWORD* v26;
  int v27;
  int v28;
  unsigned int v29;
  __int128 v30;
  long double v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  struct {
    _QWORD v42[4];
    unsigned __int8* v43;
  } v42_;
  struct {
    __int64 v44;
    __int64 v45;
  } v44_;

  v2 = *((_QWORD*)result + 1);
  v3 = (_QWORD*)*a2;
  v4 = result;
  if (*(_QWORD*)(v2 + 120) != 0) {
    result = (unsigned __int8*)GameData_21f8018;
    if (GameData_21f8018 != 0) {
      v5 = *(_DWORD*)(GameData_21f8018 + 160);
      v6 = __OFSUB__(v5, 1);
      v7 = v5 - 1;
      if (v7 < 0 != v6) {
        if ((*(_WORD*)(GameData_21f8018 + 136) & 1) == 0) {
          result = ProcInst_657a50_alt1(GameData_21f8018, 1);
        }
      }
      else {
        *(_DWORD*)(GameData_21f8018 + 160) = v7;
        if (v7 == 0) {
          result = (unsigned __int8*)(*(__int64 (**)(_QWORD*))(
              *((_QWORD*)result + 19) + 8LL))((_QWORD*)result + 19);
        }
      }
    }
  }
  if (GameData_22336e0 != 0) {
    result = (unsigned __int8*)GameRoutine_1152360_alt1(
        (_QWORD*)(GameData_22336e0 + 560), v4 + 16);
    if (result != nullptr) {
      v8 = *((_QWORD*)result + 5);
      if (v8 != 0) {
        *(_QWORD*)(v8 + 160) = v3;
        GameRoutine_11c46e0_alt1(v2);
        v9 = v3[9];
        v10 = *(_QWORD*)(v9 + 40);
        v11 = *(_QWORD*)(v10 + 392);
        v12 = *(_QWORD*)(v10 + 400);
        if (v12 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                    memory_order_relaxed);
          v13 = *(_QWORD*)(v11 + 11608);
          if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v14 = v13;
            (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
            std___1___shared_weak_count___release_weak_alt1(v12);
            v13 = v14;
          }
        }
        else {
          v13 = *(_QWORD*)(v11 + 11608);
        }
        v15 = CharacterModel_1071880_alt1(v13, 1669996436);
        CharacterAnimator_1079580_alt1(
            v9, v15, 0x0.0p+0f, -0x1.0000000000000p+0f, 0x1.0000000000000p+0f);
        *(_DWORD*)(v8 + 232) = -1;
        if ((v4[40] & 1) != 0) {
          v16 = *((_QWORD*)v4 + 7);
        }
        else {
          v16 = (__int64)(v4 + 41);
        }
        v17 = game_HashString_alt1(v16);
        if (v17 != 0) {
          v18 = *(_QWORD*)(GameData_21c9d80 + 96);
          if (v18 != 0 && *(_QWORD*)(GameData_21c9d80 + 112) != 0) {
            v20 = v18 - 1;
            if ((v18 & (v18 - 1)) != 0) {
              v21 = v17;
              if (v17 >= v18) {
                v21 = v17 % v18;
              }
            }
            else {
              v21 = v20 & v17;
            }
            v22 = *(_QWORD**)(*(_QWORD*)(GameData_21c9d80 + 88) + 8 * v21);
            if (v22 != nullptr) {
              v23 = (_QWORD*)*v22;
              if (v23 != nullptr) {
                if ((v18 & v20) == 0) {
                  while (1) {
                    v25 = v23[1];
                    if (v25 == v17) {
                      if (v23[2] == v17) {
                        goto LABEL_43;
                      }
                    }
                    else if ((v25 & v20) != v21) {
                      goto LABEL_45;
                    }
                    v23 = (_QWORD*)*v23;
                    if (v23 == nullptr) {
                      goto LABEL_45;
                    }
                  }
                }
                do {
                  v24 = v23[1];
                  if (v24 == v17) {
                    if (v23[2] == v17) {
                    LABEL_43:
                      v26 = (_DWORD*)v23[3];
                      if (v26 != nullptr) {
                        v27 = v26[8];
                        v28 = v26[9];
                        v29 = v26[10];
                        *(_BYTE*)(v8 + 192) = 1;
                        *(_DWORD*)(v8 + 176) = v27;
                        *(_DWORD*)(v8 + 180) = v28;
                        v30 = *(_OWORD*)(v8 + 176);
                        *((_QWORD*)&v30 + 1) = v29;
                        *(_OWORD*)(v8 + 176) = v30;
                        LODWORD(v30) = v26[11];
                        *(_BYTE*)(v8 + 228) = 1;
                        *(_QWORD*)(v8 + 216) = 0x3F8000003F800000LL;
                        *(_DWORD*)(v8 + 224) = 3;
                        *(_DWORD*)(v8 + 200) = v30;
                        *(_DWORD*)(v8 + 204) = v30;
                        *(_DWORD*)(v8 + 208) = v30;
                        *(_DWORD*)(v8 + 212) = v30;
                        CharacterWork_11c5ae0_alt1(v8);
                      }
                      break;
                    }
                  }
                  else {
                    if (v24 >= v18) {
                      v24 %= v18;
                    }
                    if (v24 != v21) {
                      break;
                    }
                  }
                  v23 = (_QWORD*)*v23;
                } while (v23 != nullptr);
              }
            }
          }
        }
      LABEL_45:
        *(_DWORD*)(v8 + 392) = *GameData_212d280;
        *(float*)&v31 = GameRoutine_11c4de0(v8, 0, 0x0.0p+0f);
        v32 = v3[15];
        v33 = *(_QWORD*)(v32 + 152);
        v34 = *(_QWORD*)(v32 + 160);
        if (v33 == v34) {
        LABEL_46:
          *(_QWORD*)(v32 + 160) = v33;
          v35 = v3[15];
          v36 = v3[6];
          v37 = v3[7];
          if (v37 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 16), 1u,
                                      memory_order_relaxed);
            v44_.v44 = v36;
            v44_.v45 = v37;
            v42_.v42[0] = GameData_20168c0;
            v42_.v42[1] = v3;
            v42_.v43 = (unsigned __int8*)v42_.v42;
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 16), 1u,
                                      memory_order_relaxed);
          }
          else {
            v44_.v44 = v3[6];
            v44_.v45 = 0;
            v42_.v42[0] = GameData_20168c0;
            v42_.v42[1] = v3;
            v42_.v43 = (unsigned __int8*)v42_.v42;
          }
          CharacterAnimatorSound_10f73b0_alt1((_QWORD*)(v35 + 152), &v44_.v44,
                                              (__int64)v42_.v42, 1);
          if (v44_.v45 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v44_.v45);
          }
          result = v42_.v43;
          if (v42_.v43 == (unsigned __int8*)v42_.v42) {
            v41 = 32;
          }
          else {
            if (v42_.v43 == nullptr) {
            LABEL_64:
              if (v37 != 0) {
                result = (unsigned __int8*)
                    std___1___shared_weak_count___release_weak_alt1(v37);
              }
              *(_QWORD*)(v2 + 368) = *(_QWORD*)(v8 + 152);
              *(_BYTE*)(v8 + 129) = 1;
              return result;
            }
            v41 = 40;
          }
          result = (unsigned __int8*)(*(__int64 (**)(__int64))(
              *(_QWORD*)v42_.v43 + v41))((__int64)v42_.v43);
          goto LABEL_64;
        }
        while (1) {
          v38 = *(_QWORD**)(v34 - 16);
          if ((_QWORD*)(v34 - 48) == v38) {
            break;
          }
          if (v38 != nullptr) {
            v39 = 40;
          LABEL_53:
            (*(void (**)(void*))(*v38 + v39))(v38);
          }
          v40 = *(_QWORD*)(v34 - 64);
          if (v40 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v40);
          }
          v34 -= 80;
          if (v34 == v33) {
            goto LABEL_46;
          }
        }
        v39 = 32;
        goto LABEL_53;
      }
    }
  }
  return result;
}

_QWORD* game_evt_demo_CharacterWork_Equip_lambda0_CloneInto(_QWORD* result,
                                                            _QWORD* a2)
{
  *a2 = GameData_2016950;
  a2[2] = result[2];
  a2[5] = result[5];
  a2[4] = result[4];
  a2[7] = result[7];
  a2[6] = result[6];
  a2[9] = result[9];
  a2[8] = result[8];
  a2[11] = result[11];
  a2[10] = result[10];
  return result;
}

__int64 game_evt_demo_CharacterWork_Equip_lambda0_Invoke(float32x4_t* a1,
                                                         __int64* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  float32x4_t v4;
  float32x4_t v5;
  __int64 result;
  float32x4_t v7;
  float32x4_t v8;

  v2 = *a2;
  v3 = LANES128(a1[1]).n128_u64[0];
  v4 = vdupq_n_s32(0x3C8EFA35u);
  v5 = vmulq_f32(a1[3], v4);
  v7 = vmulq_f32(a1[5], v4);
  v8 = v5;
  result = game_character_1085470(v2, &a1[2], &v8, &a1[4], &v7);
  *(_BYTE*)(v3 + 130) = 0;
  return result;
}

__int64

game_evt_demo_CharacterWork_SetClothControl_lambda0_Invoke(__int64 result,
                                                           __int64 a2)
{
  unsigned __int8 explicit;
  int* v3;
  __int64 v4;
  __int64 i;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 j;
  float v15;
  __int64 v16;
  int v17;
  __int64 v18;

  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ec88,
                                  memory_order_acquire);
  v3 = GameData_212ec80;
  if ((explicit & 1) == 0) {
    v16 = a2;
    v18 = result;
    v17 = __cxa_guard_acquire(GameData_212ec88);
    result = v18;
    a2 = v16;
    if (v17 != 0) {
      *v3 = wld_Crc32(0, "ClothModule", 11);
      __cxa_guard_release(GameData_212ec88);
      result = v18;
      a2 = v16;
    }
  }
  v4 = *(_QWORD*)(a2 + 512);
  for (i = v4; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v6 = *(_DWORD*)(i - 16);
    v4 -= 16;
    if (v6 == *v3) {
      if (*(_QWORD*)(a2 + 512) != v4) {
        v7 = *(_QWORD*)(v4 + 8);
        if (v7 != 0) {
          if (*(_BYTE*)(result + 8) == 1 &&
              (v8 = *(_QWORD*)(result + 16)) != 0) {
            v9 = *(_QWORD*)(v7 + 24);
            v10 = *(_QWORD*)(v7 + 32);
            if (v9 != v10) {
              do {
                *(_BYTE*)(v9 + 133) = 0;
                v9 += 176;
              } while (v9 != v10);
              v8 = *(_QWORD*)(result + 16);
            }
            v11 = result;
            v12 = strlen(v8);
            GameRoutine_a59220(v7 + 24, v8, v12, 1);
            result = v11;
          }
          else {
            v13 = *(_QWORD*)(v7 + 24);
            for (j = *(_QWORD*)(v7 + 32); v13 != j; v13 += 176) {
              *(_BYTE*)(v13 + 133) = 1;
            }
          }
          v15 = 0.0;
          if (*(_BYTE*)(result + 8) != 0) {
            v15 = 1.0;
          }
          *(float*)(v7 + 52) = v15;
        }
      }
      return result;
    }
  }
  return result;
}

long double CharacterWork_11c6f00(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
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
  __int128 v31;
  __int128 v32;
  __int128 v33;
  __int128 v34;
  __int128 v36;

  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0x3F80000000000000LL;
  *(_QWORD*)(a1 + 204) = 0x3F80000000000000LL;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)a1 = 0;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 96) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 192) = 1065353216;
  *(_BYTE*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 304) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 312) = 0;
  *(_WORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_DWORD*)(a1 + 360) = -1082130432;
  *(_BYTE*)(a1 + 364) = 1;
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  v2 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  v3 = fw_memory_HeapManager_Allocate(v2, 432, 16, 0);
  v4 = (__int64*)GameData_212c2a0;
  v5 = (__int64*)GameData_212c2b0;
  v6 = GameData_212e460[0];
  *(_QWORD*)(v3 + 112) = 1065353216;
  *(_QWORD*)(v3 + 120) = 0x100000000LL;
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 40) = 0;
  *(_DWORD*)(v3 + 152) = 0;
  *(_QWORD*)(v3 + 168) = 1092616192;
  *(_QWORD*)(v3 + 144) = 0x4110000041800000LL;
  *(_QWORD*)(v3 + 128) = 0x4248000041D80000LL;
  *(_QWORD*)(v3 + 136) = 0x41C0000042100000LL;
  *(_BYTE*)(v3 + 164) = 1;
  v7 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v4);
  v8 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v4 + 8);
  v9 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v4);
  v10 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v4);
  v12 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v5);
  v11 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v5 + 8);
  *(_DWORD*)(v3 + 176) = 0;
  *(_QWORD*)(v3 + 408) = 0;
  *(_QWORD*)(v3 + 416) = 0;
  *(_QWORD*)v3 = v6 + 2;
  *(_QWORD*)(v3 + 8) = 0;
  v13 = *v4;
  v14 = v4[1];
  *(_QWORD*)(v3 + 224) = v7;
  *(_QWORD*)(v3 + 232) = v8;
  v16 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v4);
  v15 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v4 + 8);
  *(_QWORD*)(v3 + 240) = v9;
  *(_QWORD*)(v3 + 248) = v10;
  v17 = *v5;
  *(_QWORD*)(v3 + 192) = v13;
  *(_QWORD*)(v3 + 200) = v14;
  v19 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v5);
  v18 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v5);
  *(_QWORD*)(v3 + 208) = v16;
  *(_QWORD*)(v3 + 216) = v15;
  v20 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5);
  v22 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v5);
  v21 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v5 + 8);
  *(_QWORD*)(v3 + 272) =
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5 + 8);
  *(_QWORD*)(v3 + 280) = v21;
  v23 = *v5;
  v24 = v5[1];
  *(_QWORD*)(v3 + 320) = v17;
  *(_QWORD*)(v3 + 328) = v20;
  *(_QWORD*)(v3 + 256) = v23;
  *(_QWORD*)(v3 + 264) = v24;
  v25 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v5);
  *(_QWORD*)(v3 + 304) =
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v5);
  *(_QWORD*)(v3 + 312) = v18;
  v27 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v5 + 8);
  v26 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v5 + 16);
  v28 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v5);
  *(_QWORD*)(v3 + 352) = v12;
  *(_QWORD*)(v3 + 360) = v25;
  *(_QWORD*)(v3 + 288) = v26;
  *(_QWORD*)(v3 + 296) = v11;
  *(_QWORD*)(v3 + 336) = v22;
  *(_QWORD*)(v3 + 344) = v27;
  *(_QWORD*)(v3 + 368) = v19;
  *(_QWORD*)(v3 + 376) = v28;
  *(_OWORD*)(v3 + 48) = GameData_1a83090;
  *(_OWORD*)(v3 + 64) = (__typeof__(*(_OWORD*)(v3 + 64))){0};
  *(_OWORD*)(v3 + 80) = GameData_1a83610;
  *(_OWORD*)(v3 + 96) = (__typeof__(*(_OWORD*)(v3 + 96))){0};
  v29 = GameData_212e438;
  *(_BYTE*)(v3 + 165) = 1;
  v30 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)(v3 + 384) = 0;
  *(_QWORD*)(v3 + 392) = 0;
  *(_QWORD*)(v3 + 156) = 0x469C40003DCCCCCDLL;
  *(_QWORD*)(v3 + 424) = 1023;
  *(_QWORD*)(v3 + 392) = 1023;
  *(_QWORD*)(v3 + 400) = 0;
  *(_QWORD*)(a1 + 32) = v3;
  *(_QWORD*)(v3 + 32) = v29 + 16;
  *(_QWORD*)(a1 + 24) = v3 + 32;
  if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    std___1___shared_weak_count___release_weak(v30);
  }
  *(_DWORD*)(*(_QWORD*)(a1 + 24) + 8LL) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_DWORD*)(a1 + 104) = 5;
  *(_DWORD*)(a1 + 168) = 5;
  *(_QWORD*)(a1 + 96) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 160) = 0x3F8000003F800000LL;
  v31 = *(_OWORD*)(a1 + 80);
  v32 = *(_OWORD*)(a1 + 144);
  *(_QWORD*)(a1 + 64) = v31;
  *(_QWORD*)(a1 + 128) = v32;
  v33 = *(_OWORD*)(a1 + 64);
  v34 = *(_OWORD*)(a1 + 128);
  *(_OWORD*)(a1 + 80) = (unsigned __int64)v31;
  *(_QWORD*)(a1 + 48) = v33;
  *(_QWORD*)(a1 + 112) = v34;
  *(_QWORD*)(a1 + 176) = 0x41F0000041F00000LL;
  *(_QWORD*)(a1 + 184) = 0x3F80000041F00000LL;
  *(_QWORD*)(a1 + 192) = 0x53F800000LL;
  *((_QWORD*)&v32 + 1) = 3212836864LL;
  *((_QWORD*)&v34 + 1) = 3212836864LL;
  *(_OWORD*)(a1 + 144) = v32;
  *(_OWORD*)(a1 + 48) = *(unsigned __int64*)(a1 + 48);
  *(_OWORD*)(a1 + 64) = (unsigned __int64)v33;
  v36 = *(_OWORD*)(a1 + 112);
  *((_QWORD*)&v36 + 1) = 3212836864LL;
  *(_OWORD*)(a1 + 112) = v36;
  *(_OWORD*)(a1 + 128) = v34;
  return *(long double*)&GameData_1a82c50;
}

#pragma GCC visibility pop
