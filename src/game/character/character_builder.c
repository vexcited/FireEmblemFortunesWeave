#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 AnimCtrlModule_a77d60(_QWORD, _QWORD);
__int64 GameRoutine_1084b20(_QWORD, _QWORD);
__int64 GameRoutine_1084ea0(_QWORD, _QWORD);
__int64 GameRoutine_1085140(_QWORD, _QWORD);
__int64 GameRoutine_10873c0(_QWORD);
__int64 GameRoutine_10877a0(_QWORD);
__int64 GameRoutine_1087ba0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1087f80(_QWORD, _QWORD);
__int64 GameRoutine_10965c0(_QWORD, _QWORD);
__int64 GameRoutine_10a0100(_QWORD, _QWORD);
__int64 GameRoutine_10cbfe0(_QWORD, _QWORD);
__int64 GameRoutine_112aaa0(_QWORD);
__int64 GameRoutine_98f140(_QWORD, _QWORD);
__int64 GameRoutine_a59e60(_QWORD, _QWORD);
__int64 GameRoutine_a64140(_QWORD);
__int64 GameRoutine_a8c0c0(_QWORD);
__int64 GameRoutine_ce3010(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_2167580;
extern _UNKNOWN GameData_21a5680;
extern _UNKNOWN GameData_21f4d48;
extern _UNKNOWN GameData_2203510;
extern _UNKNOWN GameData_220f868;
extern _UNKNOWN GameData_2235638;
extern _UNKNOWN GameData_2235668;
extern _UNKNOWN GameData_22356c8;
extern _UNKNOWN* GameData_212c2f8;
extern _UNKNOWN* GameData_212d4e8;
extern _UNKNOWN* GameData_212df10;
extern _UNKNOWN* GameData_212df28;
extern _UNKNOWN* GameData_212eab0;
extern _UNKNOWN* GameData_212ed90;
extern _UNKNOWN* GameData_212eda0;
extern _UNKNOWN* GameData_212fa30;
extern _UNKNOWN* GameData_212fe90;
extern _UNKNOWN* GameData_212fef8;
extern _UNKNOWN* GameData_212ff08;
extern _UNKNOWN* GameData_212ff18;
extern _UNKNOWN* GameData_212ff28;
extern _UNKNOWN* GameData_212ff38;
extern _UNKNOWN* GameData_212ff48;
extern __int128 GameData_1a83160;
extern __int128 GameData_21a5670;
extern __int64 (*game_character_CharacterAim_vtable[])();
extern __int64 (*game_character_CharacterEffect_vtable[])();
extern __int64 (*game_character_CharacterSelfie_vtable[])();
extern __int64 (*game_character_WeaponHoldModule_vtable[])();
extern __int64 GameData_212d270;
extern __int64 GameData_212e370[3];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212fe80;
extern __int64* GameData_212fee0[2];
extern __int64* GameData_212ff50[18];
extern __int64* GameData_212ff58[17];
extern __int64* GameData_212ff60[16];
extern __int64* GameData_212ff68[15];
extern __int64* GameData_212ff70[14];
extern int GameData_21f4d44;
extern int GameData_2203508;
extern int GameData_220f860;
extern int GameData_2235630;
extern int GameData_2235660;
extern int GameData_22356c0;
extern int* GameData_212d4e0;
extern int* GameData_212df08;
extern int* GameData_212ed88;
extern int* GameData_212ed98;
extern int* GameData_212fa28;
extern int* GameData_212fe88;
extern int* GameData_212fef0;
extern int* GameData_212ff00;
extern int* GameData_212ff10;
extern int* GameData_212ff20;
extern int* GameData_212ff30;
extern int* GameData_212ff40;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
void __attribute__((noreturn)) GameRoutine_98f290(_QWORD);
__int64 CharacterBuilder_107b580(_QWORD* a1);
__int64 CharacterBuilder_107b620(__int64 a1);
__int64 CharacterBuilder_107ba20(__int64 a1);
__int64 CharacterBuilder_107be40(__int64 a1);
__int64 CharacterBuilder_107c220(__int64 a1);
__int64 CharacterBuilder_107c700(__int64 a1);
__int64 CharacterBuilder_107cb40(__int64 a1);
__int64 CharacterBuilder_107d0c0(__int64 a1);
__int64 CharacterBuilder_107d480(__int64 a1);
__int64 CharacterBuilder_107d880(__int64 a1);
__int64 CharacterBuilder_107dca0(__int64 a1);
__int64 CharacterBuilder_10823c0(_QWORD* a1);
__int64 CharacterBuilder_1082900(__int64 a1);
__int64 CharacterBuilder_1082ce0(__int64 a1);
__int64 CharacterBuilder_1083180(__int64 a1);
__int64 CharacterBuilder_1083580(__int64 result, __int64 a2, __int64 a3);
__int64 CharacterBuilder_1083780(__int64 a1, _BYTE* a2);
_QWORD* CharacterBuilder_1083bf0(_QWORD* result);
__int64 CharacterBuilder_1083e90(_QWORD* a1, __int64 a2);
_QWORD* CharacterBuilder_1084020(_QWORD* result);
__int64 CharacterBuilder_1084400(__int64 result, int a2);
__int64 CharacterBuilder_1084780(__int64 result);
__int64 CharacterBuilder_1084a50(__int64 a1, _BYTE* a2);
__int64 CharacterBuilder_1084db0(__int64 a1, _BYTE* a2);
__int64 CharacterBuilder_1085070(__int64 a1, _BYTE* a2);
__int64 GameRoutine_1078600(_QWORD*, __int64*, __int64, int);
__int64 GameRoutine_193adc0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a6b620(_QWORD, _QWORD, long double);
__int64 GameRoutine_a993a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_bd92c0(void);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_21ec9a0;
extern _UNKNOWN GameData_220f840;
extern _UNKNOWN GameData_2235628;
extern _UNKNOWN GameData_22356a8;
extern __int64 (*GameData_2007178[])();
extern __int64 (*GameData_2007208[])();
extern __int64 (*GameData_2007328[])();
extern __int64 (*GameData_20075d8[])();
extern __int64 (*GameData_212e510)();
extern __int64 GameData_2132398[3];
extern __int64 GameData_2235760;
extern __int64 GameData_2235768;
extern int GameData_21ec998;
extern int GameData_220f838;
extern int GameData_2235620;
extern int GameData_22356a0;
__n128 CharacterBuilder_107e090(__int64 a1, __int64 a2);
void game_character_CharacterBuilder_FullbodyCleanup_lambda0_Invoke(__int64 a1,
                                                                    __int64 a2);
void game_character_CharacterBuilder_LateUpdate_lambda0_Invoke(__int64 a1,
                                                               __int64 a2);
void game_character_CharacterBuilder_LateUpdate_lambda1_Invoke(__int64 a1,
                                                               __int64 a2);
void game_character_CharacterBuilder_BuildImpl_lambda3_Invoke(__int64 a1,
                                                              __int64 a2);
__int64 game_character_CharacterBuilder_BuildImpl_lambda0_Invoke(__int64 result,
                                                                 __int64 a2);
void game_character_CharacterBuilder_CommitMaterialParams_lambda1_Invoke(
    __int64 a1, __int64 a2);
__int64 CharacterBuilder_1089270(__int64 result, _BYTE* a2);
void CharacterBuilder_1089370(__int64 a1, _DWORD* a2);
void game_character_CharacterBuilder_CommitMaterialParams_lambda2_Invoke(
    __int64 a1, __int64 a2);
__int64 CharacterBuilder_1089680(__int64 a1, _QWORD* a2);
__int64 game_character_CharacterBuilder_SetupLOD_lambda0_Invoke(__int64 result,
                                                                __int64 a2,
                                                                long double a3);
_QWORD* game_character_CharacterBuilder_SetMaterialColor_lambda0_CloneInto(
    _QWORD* result, _QWORD* a2);
float game_character_CharacterBuilder_SetDitherAlpha_lambda1_Invoke(__int64 a1,
                                                                    __int64 a2);
extern __int64 (*GameData_2006dc0[])();
extern __int64 (*GameData_2006e40[])();
__int64 game_character_CharacterBuilder_LateUpdate(__int64 result);
__int64 CharacterAppearance_1074940(__int64);
__int64 GameRoutine_107ec40(__int64);
__int64 GameRoutine_10adb80(_DWORD*, _BYTE*);
__int64 GameRoutine_10e8800(__int64*, __int64);
__int64 GameRoutine_a867a0(__int64 result);
__int64 GameRoutine_d31080(__int64 result);
__int64 Model_a661a0(__int64, int, __int64, int);
__n128 GameRoutine_10e8690(_QWORD*);
bool CharacterAnimator_107aaa0(__int64, int);
bool GameRoutine_108cb20(int);
extern _QWORD GameData_212d168;
extern __int64 (*GameData_1fc0970[])();
extern __int64 (*GameData_200d938[])();
float CharacterAnimator_1079580(__int64, int, long double, float, float);
unsigned __int64 GameRoutine_d2b5f0(__int64);
void CharacterBuilder_1083840(__int64);
void CharacterFacialController_10b2280(__int64, unsigned int, float);
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
__int64 CharacterBuilder_Unknown5(__int64 a1, long double a2);

__int64 CharacterBuilder_107b580(_QWORD* a1)
{
  __int64 v1;
  __int64 result;

  v1 = a1[1];
  a1[8] = CharacterBuilder_107b620(v1);
  a1[9] = CharacterBuilder_107ba20(v1);
  a1[10] = CharacterBuilder_107be40(v1);
  a1[11] = CharacterBuilder_107c220(v1);
  a1[13] = CharacterBuilder_107c700(v1);
  a1[14] = CharacterBuilder_107cb40(v1);
  a1[15] = CharacterBuilder_107d0c0(v1);
  a1[16] = CharacterBuilder_107d480(v1);
  a1[17] = CharacterBuilder_107d880(v1);
  result = CharacterBuilder_107dca0(v1);
  a1[18] = result;
  return result;
}

__int64 CharacterBuilder_107b620(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  long double v10;
  __int64 v11;
  _BYTE* v12;
  _BYTE* v13;
  bool v14;
  __int64* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  char* v26;
  __int64 v27;
  long double v28;
  __int64 v29;
  __int64* v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  char* v41;
  __int64 v42;
  long double v43;
  __int64 v44;
  int v46;
  __int64 v47;

  nn_os_LockMutex(&GameData_2167580);
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      176, 16, 0);
  v4 = GameRoutine_10965c0(v3, a1);
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_QWORD*)(v3 + 80) = 0;
  *(_QWORD*)(v3 + 96) = 0;
  *(_QWORD*)(v3 + 104) = 0;
  *(_QWORD*)(v3 + 112) = 0;
  *(_QWORD*)(v3 + 120) = 0;
  *(_QWORD*)(v3 + 128) = 0;
  *(_QWORD*)(v3 + 136) = 0;
  *(_QWORD*)(v3 + 144) = 0;
  *(_QWORD*)(v3 + 149) = 0;
  *(_QWORD*)v3 = game_character_CharacterAim_vtable;
  *(_DWORD*)(v3 + 56) = -1;
  *(_DWORD*)(v3 + 160) = -1082130432;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2235638,
                            memory_order_acquire) &
       1) == 0) {
    v4 = __cxa_guard_acquire(&GameData_2235638);
    if ((_DWORD)v4 != 0) {
      GameData_2235630 = wld_Crc32(0, "CharacterAim", 12);
      v4 = __cxa_guard_release(&GameData_2235638);
    }
  }
  v5 = *(_QWORD*)(a1 + 504);
  v6 = *(_QWORD*)(a1 + 512);
  v7 = v6;
  v46 = GameData_2235630;
  v47 = v3;
  while (v7 != v5) {
    v8 = *(_DWORD*)(v7 - 16);
    v7 -= 16;
    if (v8 == GameData_2235630) {
      if ((*(_BYTE*)(v3 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v5 == v6 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v5) <= 0x6F) {
    v9 = fw_memory_HeapManager_Allocate(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v9;
    *(_QWORD*)(a1 + 512) = v9;
    *(_QWORD*)(a1 + 520) = v9 + 112;
    if (v6 != 0) {
      v11 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(*v2 + v11, v10);
    }
  }
  v4 = GameRoutine_98f140(a1 + 504, &v46);
  if ((*(_BYTE*)(v3 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v3 + 16) = 1;
    *(_BYTE*)(v3 + 17) &= ~2u;
    *(_BYTE*)(v3 + 18) &= ~2u;
    *(_BYTE*)(v3 + 19) &= ~2u;
    *(_BYTE*)(v3 + 20) &= ~2u;
    v12 = *(_BYTE**)(v3 + 8);
    v12[632] = 0;
    v12[664] = 0;
    v12[696] = 0;
    v12[728] = 0;
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 64LL))(v3);
    v13 = *(_BYTE**)(v3 + 8);
    v14 = v13[300] == 3 && v13[301] == 3;
    if (v14 || v13[302] == 1) {
      v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 72LL))(v3);
    }
  }

LABEL_20:
  v15 = *(__int64**)(a1 + 536);
  v16 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v15 >= v16) {
    v18 = *(_QWORD*)(a1 + 528);
    v19 = (char*)v15 - v18;
    v20 = ((__int64)v15 - v18) >> 3;
    v21 = v20 + 1;
    if ((unsigned __int64)(v20 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v22 = v16 - v18;
    if (v22 >> 2 > v21) {
      v21 = v22 >> 2;
    }
    if ((unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFF8LL) {
      v23 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v23 = v21;
    }
    if (v23 != 0) {
      if (v23 >> 61 != 0) {
        goto LABEL_56;
      }
      v24 = fw_memory_HeapManager_Allocate(*v2, 8 * v23, 16, 0);
    }
    else {
      v24 = 0;
    }
    v25 = v24 + 8 * v23;
    v26 = (char*)v15 - v18;
    v27 = (__int64)&v19[v24 + -8 * v20];
    *(_QWORD*)&v19[v24] = v3;
    v17 = (__int64)&v19[v24 + 8];
    v4 = memcpy(v27, v18, v26);
    *(_QWORD*)(a1 + 528) = v27;
    *(_QWORD*)(a1 + 536) = v17;
    *(_QWORD*)(a1 + 544) = v25;
    if (v18 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v29 = 56;
      }
      v4 = nn_mem_StandardAllocator_Free(*v2 + v29, v28);
    }
  }
  else {
    *v15 = v3;
    v17 = (__int64)(v15 + 1);
  }
  *(_QWORD*)(a1 + 536) = v17;
  v30 = *(__int64**)(a1 + 560);
  v31 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v30 < v31) {
    *v30 = v3;
    v32 = (__int64)(v30 + 1);
    goto LABEL_52;
  }
  v33 = *(_QWORD*)(a1 + 552);
  v34 = (char*)v30 - v33;
  v35 = ((__int64)v30 - v33) >> 3;
  v36 = v35 + 1;
  if ((unsigned __int64)(v35 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290(v4);
  }
  v37 = v31 - v33;
  if (v37 >> 2 > v36) {
    v36 = v37 >> 2;
  }
  if ((unsigned __int64)v37 >= 0x7FFFFFFFFFFFFFF8LL) {
    v38 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v38 = v36;
  }
  if (v38 != 0) {
    if (v38 >> 61 == 0) {
      v39 = fw_memory_HeapManager_Allocate(*v2, 8 * v38, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210(v4);
  }
  v39 = 0;

LABEL_48:
  v40 = v39 + 8 * v38;
  v41 = (char*)v30 - v33;
  v42 = (__int64)&v34[v39 + -8 * v35];
  *(_QWORD*)&v34[v39] = v3;
  v32 = (__int64)&v34[v39 + 8];
  memcpy(v42, v33, v41);
  *(_QWORD*)(a1 + 552) = v42;
  *(_QWORD*)(a1 + 560) = v32;
  *(_QWORD*)(a1 + 568) = v40;
  if (v33 != 0) {
    v44 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v44, v43);
  }

LABEL_52:
  *(_QWORD*)(a1 + 560) = v32;
  GameRoutine_a8c0c0(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex(GameData_212df28);
  return v3;
}

__int64 CharacterBuilder_107ba20(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  int* v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  long double v13;
  __int64 v14;
  _BYTE* v15;
  _BYTE* v16;
  bool v17;
  __int64* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  char* v29;
  __int64 v30;
  long double v31;
  __int64 v32;
  __int64* v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  char* v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  char* v44;
  __int64 v45;
  long double v46;
  __int64 v47;
  int v49;
  __int64 v50;

  nn_os_LockMutex(GameData_212df28);
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      160, 16, 0);
  v4 = GameRoutine_10965c0(v3, a1);
  v5 = GameData_212fee0[0];
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_BYTE*)(v3 + 80) = 0;
  *(_BYTE*)(v3 + 88) = 0;
  *(_QWORD*)(v3 + 96) = 0;
  *(_QWORD*)(v3 + 104) = 0;
  *(_QWORD*)(v3 + 112) = 0;
  *(_QWORD*)(v3 + 120) = 0;
  *(_QWORD*)(v3 + 128) = 0;
  *(_QWORD*)(v3 + 136) = 0;
  *(_QWORD*)(v3 + 144) = 0;
  *(_WORD*)(v3 + 156) = 0;
  *(_BYTE*)(v3 + 158) = 0;
  *(_QWORD*)v3 = v5 + 2;
  *(_DWORD*)(v3 + 152) = 1065353216;
  LOBYTE(v5) = atomic_load_explicit((atomic_uchar* volatile)GameData_212eda0,
                                    memory_order_acquire);
  v6 = GameData_212ed98;
  if (((unsigned __int8)v5 & 1) == 0) {
    v4 = __cxa_guard_acquire(GameData_212eda0);
    if ((_DWORD)v4 != 0) {
      *v6 = wld_Crc32(0, "CharacterAnimator", 17);
      v4 = __cxa_guard_release(GameData_212eda0);
    }
  }
  v7 = *v6;
  v8 = *(_QWORD*)(a1 + 504);
  v9 = *(_QWORD*)(a1 + 512);
  v10 = v9;
  v49 = v7;
  v50 = v3;
  while (v10 != v8) {
    v11 = *(_DWORD*)(v10 - 16);
    v10 -= 16;
    if (v11 == v7) {
      if ((*(_BYTE*)(v3 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v8 == v9 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v8) <= 0x6F) {
    v12 = fw_memory_HeapManager_Allocate(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v12;
    *(_QWORD*)(a1 + 512) = v12;
    *(_QWORD*)(a1 + 520) = v12 + 112;
    if (v9 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(*v2 + v14, v13);
    }
  }
  v4 = GameRoutine_98f140(a1 + 504, &v49);
  if ((*(_BYTE*)(v3 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v3 + 16) = 1;
    *(_BYTE*)(v3 + 17) &= ~2u;
    *(_BYTE*)(v3 + 18) &= ~2u;
    *(_BYTE*)(v3 + 19) &= ~2u;
    *(_BYTE*)(v3 + 20) &= ~2u;
    v15 = *(_BYTE**)(v3 + 8);
    v15[632] = 0;
    v15[664] = 0;
    v15[696] = 0;
    v15[728] = 0;
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 64LL))(v3);
    v16 = *(_BYTE**)(v3 + 8);
    v17 = v16[300] == 3 && v16[301] == 3;
    if (v17 || v16[302] == 1) {
      v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 72LL))(v3);
    }
  }

LABEL_20:
  v18 = *(__int64**)(a1 + 536);
  v19 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v18 >= v19) {
    v21 = *(_QWORD*)(a1 + 528);
    v22 = (char*)v18 - v21;
    v23 = ((__int64)v18 - v21) >> 3;
    v24 = v23 + 1;
    if ((unsigned __int64)(v23 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v25 = v19 - v21;
    if (v25 >> 2 > v24) {
      v24 = v25 >> 2;
    }
    if ((unsigned __int64)v25 >= 0x7FFFFFFFFFFFFFF8LL) {
      v26 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v26 = v24;
    }
    if (v26 != 0) {
      if (v26 >> 61 != 0) {
        goto LABEL_56;
      }
      v27 = fw_memory_HeapManager_Allocate(*v2, 8 * v26, 16, 0);
    }
    else {
      v27 = 0;
    }
    v28 = v27 + 8 * v26;
    v29 = (char*)v18 - v21;
    v30 = (__int64)&v22[v27 + -8 * v23];
    *(_QWORD*)&v22[v27] = v3;
    v20 = (__int64)&v22[v27 + 8];
    v4 = memcpy(v30, v21, v29);
    *(_QWORD*)(a1 + 528) = v30;
    *(_QWORD*)(a1 + 536) = v20;
    *(_QWORD*)(a1 + 544) = v28;
    if (v21 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v32 = 56;
      }
      v4 = nn_mem_StandardAllocator_Free(*v2 + v32, v31);
    }
  }
  else {
    *v18 = v3;
    v20 = (__int64)(v18 + 1);
  }
  *(_QWORD*)(a1 + 536) = v20;
  v33 = *(__int64**)(a1 + 560);
  v34 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v33 < v34) {
    *v33 = v3;
    v35 = (__int64)(v33 + 1);
    goto LABEL_52;
  }
  v36 = *(_QWORD*)(a1 + 552);
  v37 = (char*)v33 - v36;
  v38 = ((__int64)v33 - v36) >> 3;
  v39 = v38 + 1;
  if ((unsigned __int64)(v38 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290(v4);
  }
  v40 = v34 - v36;
  if (v40 >> 2 > v39) {
    v39 = v40 >> 2;
  }
  if ((unsigned __int64)v40 >= 0x7FFFFFFFFFFFFFF8LL) {
    v41 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v41 = v39;
  }
  if (v41 != 0) {
    if (v41 >> 61 == 0) {
      v42 = fw_memory_HeapManager_Allocate(*v2, 8 * v41, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210(v4);
  }
  v42 = 0;

LABEL_48:
  v43 = v42 + 8 * v41;
  v44 = (char*)v33 - v36;
  v45 = (__int64)&v37[v42 + -8 * v38];
  *(_QWORD*)&v37[v42] = v3;
  v35 = (__int64)&v37[v42 + 8];
  memcpy(v45, v36, v44);
  *(_QWORD*)(a1 + 552) = v45;
  *(_QWORD*)(a1 + 560) = v35;
  *(_QWORD*)(a1 + 568) = v43;
  if (v36 != 0) {
    v47 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v47 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v47, v46);
  }

LABEL_52:
  *(_QWORD*)(a1 + 560) = v35;
  GameRoutine_a8c0c0(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex(GameData_212df28);
  return v3;
}

__int64 CharacterBuilder_107be40(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  unsigned __int8 explicit;
  int* v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  long double v13;
  __int64 v14;
  _BYTE* v15;
  _BYTE* v16;
  bool v17;
  __int64* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  char* v29;
  __int64 v30;
  long double v31;
  __int64 v32;
  __int64* v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  char* v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  char* v44;
  __int64 v45;
  long double v46;
  __int64 v47;
  int v49;
  __int64 v50;

  nn_os_LockMutex(GameData_212df28);
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      80, 16, 0);
  v4 = GameRoutine_10965c0(v3, a1);
  *(_DWORD*)(v3 + 72) = 0;
  *(_QWORD*)v3 = game_character_CharacterEffect_vtable;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 1065353216;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212fe90,
                                  memory_order_acquire);
  v6 = GameData_212fe88;
  if ((explicit & 1) == 0) {
    v4 = __cxa_guard_acquire(GameData_212fe90);
    if ((_DWORD)v4 != 0) {
      *v6 = wld_Crc32(0, "CharacterEffect", 15);
      v4 = __cxa_guard_release(GameData_212fe90);
    }
  }
  v7 = *v6;
  v8 = *(_QWORD*)(a1 + 504);
  v9 = *(_QWORD*)(a1 + 512);
  v10 = v9;
  v49 = v7;
  v50 = v3;
  while (v10 != v8) {
    v11 = *(_DWORD*)(v10 - 16);
    v10 -= 16;
    if (v11 == v7) {
      if ((*(_BYTE*)(v3 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v8 == v9 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v8) <= 0x6F) {
    v12 = fw_memory_HeapManager_Allocate(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v12;
    *(_QWORD*)(a1 + 512) = v12;
    *(_QWORD*)(a1 + 520) = v12 + 112;
    if (v9 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(*v2 + v14, v13);
    }
  }
  v4 = GameRoutine_98f140(a1 + 504, &v49);
  if ((*(_BYTE*)(v3 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v3 + 16) = 1;
    *(_BYTE*)(v3 + 17) &= ~2u;
    *(_BYTE*)(v3 + 18) &= ~2u;
    *(_BYTE*)(v3 + 19) &= ~2u;
    *(_BYTE*)(v3 + 20) &= ~2u;
    v15 = *(_BYTE**)(v3 + 8);
    v15[632] = 0;
    v15[664] = 0;
    v15[696] = 0;
    v15[728] = 0;
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 64LL))(v3);
    v16 = *(_BYTE**)(v3 + 8);
    v17 = v16[300] == 3 && v16[301] == 3;
    if (v17 || v16[302] == 1) {
      v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 72LL))(v3);
    }
  }

LABEL_20:
  v18 = *(__int64**)(a1 + 536);
  v19 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v18 >= v19) {
    v21 = *(_QWORD*)(a1 + 528);
    v22 = (char*)v18 - v21;
    v23 = ((__int64)v18 - v21) >> 3;
    v24 = v23 + 1;
    if ((unsigned __int64)(v23 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v25 = v19 - v21;
    if (v25 >> 2 > v24) {
      v24 = v25 >> 2;
    }
    if ((unsigned __int64)v25 >= 0x7FFFFFFFFFFFFFF8LL) {
      v26 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v26 = v24;
    }
    if (v26 != 0) {
      if (v26 >> 61 != 0) {
        goto LABEL_56;
      }
      v27 = fw_memory_HeapManager_Allocate(*v2, 8 * v26, 16, 0);
    }
    else {
      v27 = 0;
    }
    v28 = v27 + 8 * v26;
    v29 = (char*)v18 - v21;
    v30 = (__int64)&v22[v27 + -8 * v23];
    *(_QWORD*)&v22[v27] = v3;
    v20 = (__int64)&v22[v27 + 8];
    v4 = memcpy(v30, v21, v29);
    *(_QWORD*)(a1 + 528) = v30;
    *(_QWORD*)(a1 + 536) = v20;
    *(_QWORD*)(a1 + 544) = v28;
    if (v21 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v32 = 56;
      }
      v4 = nn_mem_StandardAllocator_Free(*v2 + v32, v31);
    }
  }
  else {
    *v18 = v3;
    v20 = (__int64)(v18 + 1);
  }
  *(_QWORD*)(a1 + 536) = v20;
  v33 = *(__int64**)(a1 + 560);
  v34 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v33 < v34) {
    *v33 = v3;
    v35 = (__int64)(v33 + 1);
    goto LABEL_52;
  }
  v36 = *(_QWORD*)(a1 + 552);
  v37 = (char*)v33 - v36;
  v38 = ((__int64)v33 - v36) >> 3;
  v39 = v38 + 1;
  if ((unsigned __int64)(v38 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290(v4);
  }
  v40 = v34 - v36;
  if (v40 >> 2 > v39) {
    v39 = v40 >> 2;
  }
  if ((unsigned __int64)v40 >= 0x7FFFFFFFFFFFFFF8LL) {
    v41 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v41 = v39;
  }
  if (v41 != 0) {
    if (v41 >> 61 == 0) {
      v42 = fw_memory_HeapManager_Allocate(*v2, 8 * v41, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210(v4);
  }
  v42 = 0;

LABEL_48:
  v43 = v42 + 8 * v41;
  v44 = (char*)v33 - v36;
  v45 = (__int64)&v37[v42 + -8 * v38];
  *(_QWORD*)&v37[v42] = v3;
  v35 = (__int64)&v37[v42 + 8];
  memcpy(v45, v36, v44);
  *(_QWORD*)(a1 + 552) = v45;
  *(_QWORD*)(a1 + 560) = v35;
  *(_QWORD*)(a1 + 568) = v43;
  if (v36 != 0) {
    v47 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v47 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v47, v46);
  }

LABEL_52:
  *(_QWORD*)(a1 + 560) = v35;
  GameRoutine_a8c0c0(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex(GameData_212df28);
  return v3;
}

__int64 CharacterBuilder_107c220(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  atomic_ullong* v6;
  __int64* v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  int* v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  long double v19;
  __int64 v20;
  _BYTE* v21;
  _BYTE* v22;
  bool v23;
  __int64* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  char* v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  char* v35;
  __int64 v36;
  long double v37;
  __int64 v38;
  __int64* v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  char* v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  char* v50;
  __int64 v51;
  long double v52;
  __int64 v53;
  int v55;
  __int64 v56;

  nn_os_LockMutex(GameData_212df28);
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      368, 16, 0);
  GameRoutine_10965c0(v3, a1);
  v4 = fw_memory_HeapManager_Allocate(*v2, 32, 16, 0);
  v5 = GameData_212fe80;
  *(_DWORD*)(v4 + 24) = 0;
  *(_QWORD*)(v3 + 64) = v4 + 24;
  *(_QWORD*)(v3 + 72) = v4;
  *(_QWORD*)(v3 + 80) = v4 + 24;
  *(_QWORD*)(v3 + 88) = v4;
  *(_QWORD*)v4 = v5 + 2;
  *(_QWORD*)(v4 + 8) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  v6 = (atomic_ullong*)(v4 + 16);
  atomic_fetch_add_explicit(v6, 1u, memory_order_relaxed);
  v7 = GameData_212ff50[0];
  *(_QWORD*)(v3 + 100) = 0;
  *(_BYTE*)(v3 + 112) = 0;
  *(_QWORD*)(v3 + 136) = 0;
  *(_QWORD*)(v3 + 144) = 0;
  *(_QWORD*)(v3 + 152) = 0;
  *(_QWORD*)(v3 + 160) = 0;
  *(_DWORD*)(v3 + 184) = 0;
  *(_QWORD*)(v3 + 56) = v7 + 14;
  *(_DWORD*)(v3 + 96) = 1;
  *(_QWORD*)v3 = v7 + 2;
  *(_QWORD*)(v3 + 120) = v3 + 96;
  *(_QWORD*)(v3 + 128) = 0;
  *(_DWORD*)(v3 + 108) = 1048576000;
  *(_QWORD*)(v3 + 168) = 0;
  *(_QWORD*)(v3 + 176) = 1050253722;
  v8 = *(_QWORD*)GameData_212d270;
  v9 = *(_DWORD*)(*(_QWORD*)GameData_212d270 + 364LL);
  *(_QWORD*)(v3 + 188) = 0;
  *(_QWORD*)(v3 + 196) = 1050253722;
  *(_DWORD*)(v3 + 204) = 0;
  *(_DWORD*)(v3 + 176) = v9;
  v10 = *(_DWORD*)(v8 + 364);
  *(_DWORD*)(v3 + 224) = 0;
  *(_QWORD*)(v3 + 208) = 0;
  *(_QWORD*)(v3 + 216) = 0;
  *(_QWORD*)(v3 + 232) = 0;
  *(_QWORD*)(v3 + 240) = 0;
  *(_QWORD*)(v3 + 248) = 0;
  *(_QWORD*)(v3 + 256) = 1050253722;
  *(_DWORD*)(v3 + 264) = 0;
  *(_DWORD*)(v3 + 196) = v10;
  v11 = *(_DWORD*)(v8 + 364);
  *(_QWORD*)(v3 + 296) = 0;
  *(_DWORD*)(v3 + 288) = 0;
  *(_QWORD*)(v3 + 272) = 0;
  *(_QWORD*)(v3 + 280) = 0;
  *(_BYTE*)(v3 + 312) = 1;
  *(_QWORD*)(v3 + 320) = 0;
  *(_QWORD*)(v3 + 336) = 0;
  *(_DWORD*)(v3 + 344) = 1050253722;
  *(_DWORD*)(v3 + 352) = 0;
  *(_WORD*)(v3 + 356) = 0;
  *(_DWORD*)(v3 + 360) = 0;
  *(_DWORD*)(v3 + 304) = 0x2000;
  *(_DWORD*)(v3 + 328) = 0x2000;
  *(_DWORD*)(v3 + 256) = v11;
  LOBYTE(v5) = atomic_load_explicit((atomic_uchar* volatile)GameData_212fa30,
                                    memory_order_acquire);
  v12 = GameData_212fa28;
  if (((unsigned __int8)v5 & 1) == 0) {
    v6 = (atomic_ullong*)__cxa_guard_acquire(GameData_212fa30);
    if ((_DWORD)v6 != 0) {
      *v12 = wld_Crc32(0, "CharacterFacialController", 25);
      v6 = (atomic_ullong*)__cxa_guard_release(GameData_212fa30);
    }
  }
  v13 = *v12;
  v14 = *(_QWORD*)(a1 + 504);
  v15 = *(_QWORD*)(a1 + 512);
  v16 = v15;
  v55 = v13;
  v56 = v3;
  while (v16 != v14) {
    v17 = *(_DWORD*)(v16 - 16);
    v16 -= 16;
    if (v17 == v13) {
      if ((*(_BYTE*)(v3 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v14 == v15 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v14) <= 0x6F) {
    v18 = fw_memory_HeapManager_Allocate(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v18;
    *(_QWORD*)(a1 + 512) = v18;
    *(_QWORD*)(a1 + 520) = v18 + 112;
    if (v15 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free(*v2 + v20, v19);
    }
  }
  v6 = (atomic_ullong*)GameRoutine_98f140(a1 + 504, &v55);
  if ((*(_BYTE*)(v3 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v3 + 16) = 1;
    *(_BYTE*)(v3 + 17) &= ~2u;
    *(_BYTE*)(v3 + 18) &= ~2u;
    *(_BYTE*)(v3 + 19) &= ~2u;
    *(_BYTE*)(v3 + 20) &= ~2u;
    v21 = *(_BYTE**)(v3 + 8);
    v21[632] = 0;
    v21[664] = 0;
    v21[696] = 0;
    v21[728] = 0;
    v6 = (atomic_ullong*)(*(__int64 (**)(__int64))(*(_QWORD*)v3 + 64LL))(v3);
    v22 = *(_BYTE**)(v3 + 8);
    v23 = v22[300] == 3 && v22[301] == 3;
    if (v23 || v22[302] == 1) {
      v6 = (atomic_ullong*)(*(__int64 (**)(__int64))(*(_QWORD*)v3 + 72LL))(v3);
    }
  }

LABEL_20:
  v24 = *(__int64**)(a1 + 536);
  v25 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v24 >= v25) {
    v27 = *(_QWORD*)(a1 + 528);
    v28 = (char*)v24 - v27;
    v29 = ((__int64)v24 - v27) >> 3;
    v30 = v29 + 1;
    if ((unsigned __int64)(v29 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v31 = v25 - v27;
    if (v31 >> 2 > v30) {
      v30 = v31 >> 2;
    }
    if ((unsigned __int64)v31 >= 0x7FFFFFFFFFFFFFF8LL) {
      v32 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v32 = v30;
    }
    if (v32 != 0) {
      if (v32 >> 61 != 0) {
        goto LABEL_56;
      }
      v33 = fw_memory_HeapManager_Allocate(*v2, 8 * v32, 16, 0);
    }
    else {
      v33 = 0;
    }
    v34 = v33 + 8 * v32;
    v35 = (char*)v24 - v27;
    v36 = (__int64)&v28[v33 + -8 * v29];
    *(_QWORD*)&v28[v33] = v3;
    v26 = (__int64)&v28[v33 + 8];
    v6 = (atomic_ullong*)memcpy(v36, v27, v35);
    *(_QWORD*)(a1 + 528) = v36;
    *(_QWORD*)(a1 + 536) = v26;
    *(_QWORD*)(a1 + 544) = v34;
    if (v27 != 0) {
      v38 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v38 = 56;
      }
      v6 = (atomic_ullong*)nn_mem_StandardAllocator_Free(*v2 + v38, v37);
    }
  }
  else {
    *v24 = v3;
    v26 = (__int64)(v24 + 1);
  }
  *(_QWORD*)(a1 + 536) = v26;
  v39 = *(__int64**)(a1 + 560);
  v40 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v39 < v40) {
    *v39 = v3;
    v41 = (__int64)(v39 + 1);
    goto LABEL_52;
  }
  v42 = *(_QWORD*)(a1 + 552);
  v43 = (char*)v39 - v42;
  v44 = ((__int64)v39 - v42) >> 3;
  v45 = v44 + 1;
  if ((unsigned __int64)(v44 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290(v6);
  }
  v46 = v40 - v42;
  if (v46 >> 2 > v45) {
    v45 = v46 >> 2;
  }
  if ((unsigned __int64)v46 >= 0x7FFFFFFFFFFFFFF8LL) {
    v47 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v47 = v45;
  }
  if (v47 != 0) {
    if (v47 >> 61 == 0) {
      v48 = fw_memory_HeapManager_Allocate(*v2, 8 * v47, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210(v6);
  }
  v48 = 0;

LABEL_48:
  v49 = v48 + 8 * v47;
  v50 = (char*)v39 - v42;
  v51 = (__int64)&v43[v48 + -8 * v44];
  *(_QWORD*)&v43[v48] = v3;
  v41 = (__int64)&v43[v48 + 8];
  memcpy(v51, v42, v50);
  *(_QWORD*)(a1 + 552) = v51;
  *(_QWORD*)(a1 + 560) = v41;
  *(_QWORD*)(a1 + 568) = v49;
  if (v42 != 0) {
    v53 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v53 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v53, v52);
  }

LABEL_52:
  *(_QWORD*)(a1 + 560) = v41;
  GameRoutine_a8c0c0(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex(GameData_212df28);
  return v3;
}

__int64 CharacterBuilder_107c700(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  atomic_uchar* v6;
  int* v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  long double v14;
  __int64 v15;
  _BYTE* v16;
  _BYTE* v17;
  bool v18;
  __int64* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  char* v30;
  __int64 v31;
  long double v32;
  __int64 v33;
  __int64* v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  char* v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  char* v45;
  __int64 v46;
  long double v47;
  __int64 v48;
  int v50;
  __int64 v51;

  nn_os_LockMutex(GameData_212df28);
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      224, 16, 0);
  v4 = GameRoutine_10965c0(v3, a1);
  v5 = GameData_212ff58[0];
  *(_BYTE*)(v3 + 72) = 0;
  *(_BYTE*)(v3 + 76) = 0;
  *(_QWORD*)(v3 + 80) = 0;
  *(_QWORD*)(v3 + 88) = 0;
  *(_QWORD*)(v3 + 96) = 0;
  *(_QWORD*)(v3 + 112) = 0;
  *(_QWORD*)(v3 + 120) = 0;
  *(_QWORD*)(v3 + 128) = 0;
  *(_QWORD*)(v3 + 144) = 0;
  *(_QWORD*)(v3 + 152) = 0;
  *(_QWORD*)(v3 + 160) = 0;
  *(_QWORD*)(v3 + 168) = 0;
  *(_QWORD*)v3 = v5 + 2;
  *(_QWORD*)(v3 + 56) = 1;
  *(_QWORD*)(v3 + 64) = 0x3E80000000000000LL;
  *(_DWORD*)(v3 + 104) = -1;
  *(_QWORD*)(v3 + 176) = 0;
  *(_QWORD*)(v3 + 184) = 1050253722;
  *(_QWORD*)(v3 + 192) = 0x3E99999A00000000LL;
  *(_QWORD*)(v3 + 200) = 0;
  v6 = (atomic_uchar*)GameData_212fef8;
  *(_QWORD*)(v3 + 208) = 0;
  *(_DWORD*)(v3 + 216) = 0;
  LOBYTE(v6) = atomic_load_explicit(v6, memory_order_acquire);
  v7 = GameData_212fef0;
  if (((unsigned __int8)v6 & 1) == 0) {
    v4 = __cxa_guard_acquire(GameData_212fef8);
    if ((_DWORD)v4 != 0) {
      *v7 = wld_Crc32(0, "CharacterIK", 11);
      v4 = __cxa_guard_release(GameData_212fef8);
    }
  }
  v8 = *v7;
  v9 = *(_QWORD*)(a1 + 504);
  v10 = *(_QWORD*)(a1 + 512);
  v11 = v10;
  v50 = v8;
  v51 = v3;
  while (v11 != v9) {
    v12 = *(_DWORD*)(v11 - 16);
    v11 -= 16;
    if (v12 == v8) {
      if ((*(_BYTE*)(v3 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v9 == v10 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v9) <= 0x6F) {
    v13 = fw_memory_HeapManager_Allocate(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v13;
    *(_QWORD*)(a1 + 512) = v13;
    *(_QWORD*)(a1 + 520) = v13 + 112;
    if (v10 != 0) {
      v15 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(*v2 + v15, v14);
    }
  }
  v4 = GameRoutine_98f140(a1 + 504, &v50);
  if ((*(_BYTE*)(v3 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v3 + 16) = 1;
    *(_BYTE*)(v3 + 17) &= ~2u;
    *(_BYTE*)(v3 + 18) &= ~2u;
    *(_BYTE*)(v3 + 19) &= ~2u;
    *(_BYTE*)(v3 + 20) &= ~2u;
    v16 = *(_BYTE**)(v3 + 8);
    v16[632] = 0;
    v16[664] = 0;
    v16[696] = 0;
    v16[728] = 0;
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 64LL))(v3);
    v17 = *(_BYTE**)(v3 + 8);
    v18 = v17[300] == 3 && v17[301] == 3;
    if (v18 || v17[302] == 1) {
      v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 72LL))(v3);
    }
  }

LABEL_20:
  v19 = *(__int64**)(a1 + 536);
  v20 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v19 >= v20) {
    v22 = *(_QWORD*)(a1 + 528);
    v23 = (char*)v19 - v22;
    v24 = ((__int64)v19 - v22) >> 3;
    v25 = v24 + 1;
    if ((unsigned __int64)(v24 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v26 = v20 - v22;
    if (v26 >> 2 > v25) {
      v25 = v26 >> 2;
    }
    if ((unsigned __int64)v26 >= 0x7FFFFFFFFFFFFFF8LL) {
      v27 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v27 = v25;
    }
    if (v27 != 0) {
      if (v27 >> 61 != 0) {
        goto LABEL_56;
      }
      v28 = fw_memory_HeapManager_Allocate(*v2, 8 * v27, 16, 0);
    }
    else {
      v28 = 0;
    }
    v29 = v28 + 8 * v27;
    v30 = (char*)v19 - v22;
    v31 = (__int64)&v23[v28 + -8 * v24];
    *(_QWORD*)&v23[v28] = v3;
    v21 = (__int64)&v23[v28 + 8];
    v4 = memcpy(v31, v22, v30);
    *(_QWORD*)(a1 + 528) = v31;
    *(_QWORD*)(a1 + 536) = v21;
    *(_QWORD*)(a1 + 544) = v29;
    if (v22 != 0) {
      v33 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v33 = 56;
      }
      v4 = nn_mem_StandardAllocator_Free(*v2 + v33, v32);
    }
  }
  else {
    *v19 = v3;
    v21 = (__int64)(v19 + 1);
  }
  *(_QWORD*)(a1 + 536) = v21;
  v34 = *(__int64**)(a1 + 560);
  v35 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v34 < v35) {
    *v34 = v3;
    v36 = (__int64)(v34 + 1);
    goto LABEL_52;
  }
  v37 = *(_QWORD*)(a1 + 552);
  v38 = (char*)v34 - v37;
  v39 = ((__int64)v34 - v37) >> 3;
  v40 = v39 + 1;
  if ((unsigned __int64)(v39 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290(v4);
  }
  v41 = v35 - v37;
  if (v41 >> 2 > v40) {
    v40 = v41 >> 2;
  }
  if ((unsigned __int64)v41 >= 0x7FFFFFFFFFFFFFF8LL) {
    v42 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v42 = v40;
  }
  if (v42 != 0) {
    if (v42 >> 61 == 0) {
      v43 = fw_memory_HeapManager_Allocate(*v2, 8 * v42, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210(v4);
  }
  v43 = 0;

LABEL_48:
  v44 = v43 + 8 * v42;
  v45 = (char*)v34 - v37;
  v46 = (__int64)&v38[v43 + -8 * v39];
  *(_QWORD*)&v38[v43] = v3;
  v36 = (__int64)&v38[v43 + 8];
  memcpy(v46, v37, v45);
  *(_QWORD*)(a1 + 552) = v46;
  *(_QWORD*)(a1 + 560) = v36;
  *(_QWORD*)(a1 + 568) = v44;
  if (v37 != 0) {
    v48 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v48, v47);
  }

LABEL_52:
  *(_QWORD*)(a1 + 560) = v36;
  GameRoutine_a8c0c0(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex(GameData_212df28);
  return v3;
}

__int64 CharacterBuilder_107cb40(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int128 v7;
  atomic_uchar* v8;
  int* v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  long double v16;
  __int64 v17;
  _BYTE* v18;
  _BYTE* v19;
  bool v20;
  __int64* v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  char* v32;
  __int64 v33;
  long double v34;
  __int64 v35;
  __int64* v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  char* v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  char* v47;
  __int64 v48;
  long double v49;
  __int64 v50;
  __int64 v52;
  int v53;
  __int64 v54;

  nn_os_LockMutex(GameData_212df28);
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      512, 16, 0);
  GameRoutine_10965c0(v3, a1);
  v4 = fw_memory_HeapManager_Allocate(*v2, 32, 16, 0);
  *(_QWORD*)v4 = GameData_212fe80 + 2;
  *(_QWORD*)(v4 + 8) = 0;
  *(_DWORD*)(v4 + 24) = 0;
  *(_QWORD*)(v3 + 64) = v4 + 24;
  *(_QWORD*)(v3 + 72) = v4;
  *(_QWORD*)(v3 + 80) = v4 + 24;
  *(_QWORD*)(v3 + 88) = v4;
  *(_QWORD*)(v4 + 16) = 0;
  v5 = (atomic_ullong*)(v4 + 16);
  atomic_fetch_add_explicit(v5, 1u, memory_order_relaxed);
  v6 = GameData_212ff60[0];
  *(_DWORD*)(v3 + 96) = 1;
  *(_QWORD*)(v3 + 100) = 0;
  *(_BYTE*)(v3 + 112) = 0;
  *(_QWORD*)(v3 + 156) = 0;
  *(_QWORD*)(v3 + 176) = 0;
  *(_QWORD*)(v3 + 184) = 0;
  *(_QWORD*)(v3 + 192) = 0;
  *(_QWORD*)(v3 + 208) = 0;
  *(_QWORD*)(v3 + 216) = 0;
  *(_QWORD*)(v3 + 224) = 0;
  *(_QWORD*)(v3 + 240) = 0;
  *(_QWORD*)(v3 + 248) = 0;
  *(_QWORD*)(v3 + 256) = 0;
  *(_QWORD*)(v3 + 264) = 0;
  *(_DWORD*)(v3 + 108) = 1048576000;
  *(_DWORD*)(v3 + 152) = 1041865114;
  *(_QWORD*)(v3 + 144) = 0x3F8000003F800000LL;
  *(_QWORD*)v3 = v6 + 2;
  *(_QWORD*)(v3 + 56) = v6 + 14;
  *(_QWORD*)(v3 + 164) = -3253102182LL;
  *(_OWORD*)(v3 + 128) = GameData_1a83160;
  *(_DWORD*)(v3 + 200) = -1;
  *(_DWORD*)(v3 + 232) = -1;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a5680,
                            memory_order_acquire) &
       1) == 0) {
    v5 = (atomic_ullong*)__cxa_guard_acquire(&GameData_21a5680);
    if ((_DWORD)v5 != 0) {
      v52 = *((_QWORD*)GameData_212c2f8 + 1);
      *(_QWORD*)&GameData_21a5670 = *(_QWORD*)GameData_212c2f8;
      *((_QWORD*)&GameData_21a5670 + 1) = v52;
      v5 = (atomic_ullong*)__cxa_guard_release(&GameData_21a5680);
    }
  }
  v7 = GameData_21a5670;
  *(_QWORD*)(v3 + 448) = 0;
  *(_QWORD*)(v3 + 288) = 0;
  *(_QWORD*)(v3 + 296) = 0;
  *(_QWORD*)(v3 + 304) = 0;
  *(_QWORD*)(v3 + 312) = 0;
  *(_QWORD*)(v3 + 320) = 0;
  *(_QWORD*)(v3 + 336) = 0;
  *(_QWORD*)(v3 + 344) = 0;
  *(_QWORD*)(v3 + 352) = 0;
  *(_QWORD*)(v3 + 360) = 0;
  *(_QWORD*)(v3 + 368) = 0;
  *(_QWORD*)(v3 + 376) = 0;
  *(_QWORD*)(v3 + 384) = 0;
  *(_QWORD*)(v3 + 392) = 0;
  *(_QWORD*)(v3 + 400) = 0;
  *(_QWORD*)(v3 + 408) = 0;
  *(_QWORD*)(v3 + 416) = 0;
  *(_QWORD*)(v3 + 424) = 0;
  *(_QWORD*)(v3 + 432) = 0;
  *(_OWORD*)(v3 + 272) = v7;
  *(_QWORD*)(v3 + 460) = 0x3D4CCCCD3F800000LL;
  *(_DWORD*)(v3 + 456) = 1065353216;
  *(_QWORD*)(v3 + 472) = 0x3D4CCCCD3F333333LL;
  *(_DWORD*)(v3 + 468) = 1060320051;
  *(_QWORD*)(v3 + 484) = 0x3D4CCCCD3E99999ALL;
  *(_DWORD*)(v3 + 480) = 1050253722;
  *(_QWORD*)(v3 + 496) = 0x3D4CCCCD42C80000LL;
  v8 = (atomic_uchar*)GameData_212ff08;
  *(_DWORD*)(v3 + 440) = 0;
  *(_DWORD*)(v3 + 492) = 1120403456;
  LOBYTE(v8) = atomic_load_explicit(v8, memory_order_acquire);
  v9 = GameData_212ff00;
  if (((unsigned __int8)v8 & 1) == 0) {
    v5 = (atomic_ullong*)__cxa_guard_acquire(GameData_212ff08);
    if ((_DWORD)v5 != 0) {
      *v9 = wld_Crc32(0, "CharacterLookAt", 15);
      v5 = (atomic_ullong*)__cxa_guard_release(GameData_212ff08);
    }
  }
  v10 = *v9;
  v11 = *(_QWORD*)(a1 + 504);
  v12 = *(_QWORD*)(a1 + 512);
  v13 = v12;
  v53 = v10;
  v54 = v3;
  while (v13 != v11) {
    v14 = *(_DWORD*)(v13 - 16);
    v13 -= 16;
    if (v14 == v10) {
      if ((*(_BYTE*)(v3 + 16) & 1) != 0) {
        goto LABEL_21;
      }
      goto LABEL_15;
    }
  }
  if (v11 == v12 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v11) <= 0x6F) {
    v15 = fw_memory_HeapManager_Allocate(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v15;
    *(_QWORD*)(a1 + 512) = v15;
    *(_QWORD*)(a1 + 520) = v15 + 112;
    if (v12 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(*v2 + v17, v16);
    }
  }
  v5 = (atomic_ullong*)GameRoutine_98f140(a1 + 504, &v53);
  if ((*(_BYTE*)(v3 + 16) & 1) == 0) {
  LABEL_15:
    *(_BYTE*)(v3 + 16) = 1;
    *(_BYTE*)(v3 + 17) &= ~2u;
    *(_BYTE*)(v3 + 18) &= ~2u;
    *(_BYTE*)(v3 + 19) &= ~2u;
    *(_BYTE*)(v3 + 20) &= ~2u;
    v18 = *(_BYTE**)(v3 + 8);
    v18[632] = 0;
    v18[664] = 0;
    v18[696] = 0;
    v18[728] = 0;
    v5 = (atomic_ullong*)(*(__int64 (**)(__int64))(*(_QWORD*)v3 + 64LL))(v3);
    v19 = *(_BYTE**)(v3 + 8);
    v20 = v19[300] == 3 && v19[301] == 3;
    if (v20 || v19[302] == 1) {
      v5 = (atomic_ullong*)(*(__int64 (**)(__int64))(*(_QWORD*)v3 + 72LL))(v3);
    }
  }

LABEL_21:
  v21 = *(__int64**)(a1 + 536);
  v22 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v21 >= v22) {
    v24 = *(_QWORD*)(a1 + 528);
    v25 = (char*)v21 - v24;
    v26 = ((__int64)v21 - v24) >> 3;
    v27 = v26 + 1;
    if ((unsigned __int64)(v26 + 1) >> 61 != 0) {
      goto LABEL_58;
    }
    v28 = v22 - v24;
    if (v28 >> 2 > v27) {
      v27 = v28 >> 2;
    }
    if ((unsigned __int64)v28 >= 0x7FFFFFFFFFFFFFF8LL) {
      v29 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v29 = v27;
    }
    if (v29 != 0) {
      if (v29 >> 61 != 0) {
        goto LABEL_59;
      }
      v30 = fw_memory_HeapManager_Allocate(*v2, 8 * v29, 16, 0);
    }
    else {
      v30 = 0;
    }
    v31 = v30 + 8 * v29;
    v32 = (char*)v21 - v24;
    v33 = (__int64)&v25[v30 + -8 * v26];
    *(_QWORD*)&v25[v30] = v3;
    v23 = (__int64)&v25[v30 + 8];
    v5 = (atomic_ullong*)memcpy(v33, v24, v32);
    *(_QWORD*)(a1 + 528) = v33;
    *(_QWORD*)(a1 + 536) = v23;
    *(_QWORD*)(a1 + 544) = v31;
    if (v24 != 0) {
      v35 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v35 = 56;
      }
      v5 = (atomic_ullong*)nn_mem_StandardAllocator_Free(*v2 + v35, v34);
    }
  }
  else {
    *v21 = v3;
    v23 = (__int64)(v21 + 1);
  }
  *(_QWORD*)(a1 + 536) = v23;
  v36 = *(__int64**)(a1 + 560);
  v37 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v36 < v37) {
    *v36 = v3;
    v38 = (__int64)(v36 + 1);
    goto LABEL_53;
  }
  v39 = *(_QWORD*)(a1 + 552);
  v40 = (char*)v36 - v39;
  v41 = ((__int64)v36 - v39) >> 3;
  v42 = v41 + 1;
  if ((unsigned __int64)(v41 + 1) >> 61 != 0) {
  LABEL_58:
    GameRoutine_98f290(v5);
  }
  v43 = v37 - v39;
  if (v43 >> 2 > v42) {
    v42 = v43 >> 2;
  }
  if ((unsigned __int64)v43 >= 0x7FFFFFFFFFFFFFF8LL) {
    v44 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v44 = v42;
  }
  if (v44 != 0) {
    if (v44 >> 61 == 0) {
      v45 = fw_memory_HeapManager_Allocate(*v2, 8 * v44, 16, 0);
      goto LABEL_49;
    }
  LABEL_59:
    GameRoutine_60a210(v5);
  }
  v45 = 0;

LABEL_49:
  v46 = v45 + 8 * v44;
  v47 = (char*)v36 - v39;
  v48 = (__int64)&v40[v45 + -8 * v41];
  *(_QWORD*)&v40[v45] = v3;
  v38 = (__int64)&v40[v45 + 8];
  memcpy(v48, v39, v47);
  *(_QWORD*)(a1 + 552) = v48;
  *(_QWORD*)(a1 + 560) = v38;
  *(_QWORD*)(a1 + 568) = v46;
  if (v39 != 0) {
    v50 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v50 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v50, v49);
  }

LABEL_53:
  *(_QWORD*)(a1 + 560) = v38;
  GameRoutine_a8c0c0(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex(GameData_212df28);
  return v3;
}

__int64 CharacterBuilder_107d0c0(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  long double v10;
  __int64 v11;
  _BYTE* v12;
  _BYTE* v13;
  bool v14;
  __int64* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  char* v26;
  __int64 v27;
  long double v28;
  __int64 v29;
  __int64* v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  char* v41;
  __int64 v42;
  long double v43;
  __int64 v44;
  int v46;
  __int64 v47;

  nn_os_LockMutex(&GameData_2167580);
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      480, 16, 0);
  v4 = GameRoutine_10cbfe0(v3, a1);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2235668,
                            memory_order_acquire) &
       1) == 0) {
    v4 = __cxa_guard_acquire(&GameData_2235668);
    if ((_DWORD)v4 != 0) {
      GameData_2235660 = wld_Crc32(0, "CharacterObservable", 19);
      v4 = __cxa_guard_release(&GameData_2235668);
    }
  }
  v5 = *(_QWORD*)(a1 + 504);
  v6 = *(_QWORD*)(a1 + 512);
  v7 = v6;
  v46 = GameData_2235660;
  v47 = v3;
  while (v7 != v5) {
    v8 = *(_DWORD*)(v7 - 16);
    v7 -= 16;
    if (v8 == GameData_2235660) {
      if ((*(_BYTE*)(v3 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v5 == v6 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v5) <= 0x6F) {
    v9 = fw_memory_HeapManager_Allocate(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v9;
    *(_QWORD*)(a1 + 512) = v9;
    *(_QWORD*)(a1 + 520) = v9 + 112;
    if (v6 != 0) {
      v11 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(*v2 + v11, v10);
    }
  }
  v4 = GameRoutine_98f140(a1 + 504, &v46);
  if ((*(_BYTE*)(v3 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v3 + 16) = 1;
    *(_BYTE*)(v3 + 17) &= ~2u;
    *(_BYTE*)(v3 + 18) &= ~2u;
    *(_BYTE*)(v3 + 19) &= ~2u;
    *(_BYTE*)(v3 + 20) &= ~2u;
    v12 = *(_BYTE**)(v3 + 8);
    v12[632] = 0;
    v12[664] = 0;
    v12[696] = 0;
    v12[728] = 0;
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 64LL))(v3);
    v13 = *(_BYTE**)(v3 + 8);
    v14 = v13[300] == 3 && v13[301] == 3;
    if (v14 || v13[302] == 1) {
      v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 72LL))(v3);
    }
  }

LABEL_20:
  v15 = *(__int64**)(a1 + 536);
  v16 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v15 >= v16) {
    v18 = *(_QWORD*)(a1 + 528);
    v19 = (char*)v15 - v18;
    v20 = ((__int64)v15 - v18) >> 3;
    v21 = v20 + 1;
    if ((unsigned __int64)(v20 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v22 = v16 - v18;
    if (v22 >> 2 > v21) {
      v21 = v22 >> 2;
    }
    if ((unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFF8LL) {
      v23 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v23 = v21;
    }
    if (v23 != 0) {
      if (v23 >> 61 != 0) {
        goto LABEL_56;
      }
      v24 = fw_memory_HeapManager_Allocate(*v2, 8 * v23, 16, 0);
    }
    else {
      v24 = 0;
    }
    v25 = v24 + 8 * v23;
    v26 = (char*)v15 - v18;
    v27 = (__int64)&v19[v24 + -8 * v20];
    *(_QWORD*)&v19[v24] = v3;
    v17 = (__int64)&v19[v24 + 8];
    v4 = memcpy(v27, v18, v26);
    *(_QWORD*)(a1 + 528) = v27;
    *(_QWORD*)(a1 + 536) = v17;
    *(_QWORD*)(a1 + 544) = v25;
    if (v18 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v29 = 56;
      }
      v4 = nn_mem_StandardAllocator_Free(*v2 + v29, v28);
    }
  }
  else {
    *v15 = v3;
    v17 = (__int64)(v15 + 1);
  }
  *(_QWORD*)(a1 + 536) = v17;
  v30 = *(__int64**)(a1 + 560);
  v31 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v30 < v31) {
    *v30 = v3;
    v32 = (__int64)(v30 + 1);
    goto LABEL_52;
  }
  v33 = *(_QWORD*)(a1 + 552);
  v34 = (char*)v30 - v33;
  v35 = ((__int64)v30 - v33) >> 3;
  v36 = v35 + 1;
  if ((unsigned __int64)(v35 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290(v4);
  }
  v37 = v31 - v33;
  if (v37 >> 2 > v36) {
    v36 = v37 >> 2;
  }
  if ((unsigned __int64)v37 >= 0x7FFFFFFFFFFFFFF8LL) {
    v38 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v38 = v36;
  }
  if (v38 != 0) {
    if (v38 >> 61 == 0) {
      v39 = fw_memory_HeapManager_Allocate(*v2, 8 * v38, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210(v4);
  }
  v39 = 0;

LABEL_48:
  v40 = v39 + 8 * v38;
  v41 = (char*)v30 - v33;
  v42 = (__int64)&v34[v39 + -8 * v35];
  *(_QWORD*)&v34[v39] = v3;
  v32 = (__int64)&v34[v39 + 8];
  memcpy(v42, v33, v41);
  *(_QWORD*)(a1 + 552) = v42;
  *(_QWORD*)(a1 + 560) = v32;
  *(_QWORD*)(a1 + 568) = v40;
  if (v33 != 0) {
    v44 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v44, v43);
  }

LABEL_52:
  *(_QWORD*)(a1 + 560) = v32;
  GameRoutine_a8c0c0(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex(GameData_212df28);
  return v3;
}

__int64 CharacterBuilder_107d480(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  atomic_uchar* v5;
  int* v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  long double v13;
  __int64 v14;
  _BYTE* v15;
  _BYTE* v16;
  bool v17;
  __int64* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  char* v29;
  __int64 v30;
  long double v31;
  __int64 v32;
  __int64* v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  char* v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  char* v44;
  __int64 v45;
  long double v46;
  __int64 v47;
  int v49;
  __int64 v50;

  nn_os_LockMutex(GameData_212df28);
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      192, 16, 0);
  v4 = GameRoutine_10965c0(v3, a1);
  *(_QWORD*)(v3 + 96) = 0;
  *(_QWORD*)(v3 + 104) = 0;
  *(_QWORD*)(v3 + 80) = 0;
  *(_QWORD*)(v3 + 88) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_QWORD*)(v3 + 120) = 0;
  *(_QWORD*)(v3 + 128) = 0;
  *(_QWORD*)(v3 + 136) = 0;
  *(_DWORD*)(v3 + 144) = 0;
  *(_DWORD*)(v3 + 188) = 0;
  *(_QWORD*)(v3 + 152) = 0;
  *(_QWORD*)(v3 + 160) = 0;
  *(_DWORD*)(v3 + 112) = 1106247680;
  *(_QWORD*)v3 = game_character_CharacterSelfie_vtable;
  v5 = (atomic_uchar*)GameData_212ff18;
  *(_QWORD*)(v3 + 168) = 0;
  *(_QWORD*)(v3 + 176) = 0;
  *(_BYTE*)(v3 + 184) = 0;
  LOBYTE(v5) = atomic_load_explicit(v5, memory_order_acquire);
  v6 = GameData_212ff10;
  if (((unsigned __int8)v5 & 1) == 0) {
    v4 = __cxa_guard_acquire(GameData_212ff18);
    if ((_DWORD)v4 != 0) {
      *v6 = wld_Crc32(0, "CharacterSelfie", 15);
      v4 = __cxa_guard_release(GameData_212ff18);
    }
  }
  v7 = *v6;
  v8 = *(_QWORD*)(a1 + 504);
  v9 = *(_QWORD*)(a1 + 512);
  v10 = v9;
  v49 = v7;
  v50 = v3;
  while (v10 != v8) {
    v11 = *(_DWORD*)(v10 - 16);
    v10 -= 16;
    if (v11 == v7) {
      if ((*(_BYTE*)(v3 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v8 == v9 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v8) <= 0x6F) {
    v12 = fw_memory_HeapManager_Allocate(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v12;
    *(_QWORD*)(a1 + 512) = v12;
    *(_QWORD*)(a1 + 520) = v12 + 112;
    if (v9 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(*v2 + v14, v13);
    }
  }
  v4 = GameRoutine_98f140(a1 + 504, &v49);
  if ((*(_BYTE*)(v3 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v3 + 16) = 1;
    *(_BYTE*)(v3 + 17) &= ~2u;
    *(_BYTE*)(v3 + 18) &= ~2u;
    *(_BYTE*)(v3 + 19) &= ~2u;
    *(_BYTE*)(v3 + 20) &= ~2u;
    v15 = *(_BYTE**)(v3 + 8);
    v15[632] = 0;
    v15[664] = 0;
    v15[696] = 0;
    v15[728] = 0;
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 64LL))(v3);
    v16 = *(_BYTE**)(v3 + 8);
    v17 = v16[300] == 3 && v16[301] == 3;
    if (v17 || v16[302] == 1) {
      v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 72LL))(v3);
    }
  }

LABEL_20:
  v18 = *(__int64**)(a1 + 536);
  v19 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v18 >= v19) {
    v21 = *(_QWORD*)(a1 + 528);
    v22 = (char*)v18 - v21;
    v23 = ((__int64)v18 - v21) >> 3;
    v24 = v23 + 1;
    if ((unsigned __int64)(v23 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v25 = v19 - v21;
    if (v25 >> 2 > v24) {
      v24 = v25 >> 2;
    }
    if ((unsigned __int64)v25 >= 0x7FFFFFFFFFFFFFF8LL) {
      v26 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v26 = v24;
    }
    if (v26 != 0) {
      if (v26 >> 61 != 0) {
        goto LABEL_56;
      }
      v27 = fw_memory_HeapManager_Allocate(*v2, 8 * v26, 16, 0);
    }
    else {
      v27 = 0;
    }
    v28 = v27 + 8 * v26;
    v29 = (char*)v18 - v21;
    v30 = (__int64)&v22[v27 + -8 * v23];
    *(_QWORD*)&v22[v27] = v3;
    v20 = (__int64)&v22[v27 + 8];
    v4 = memcpy(v30, v21, v29);
    *(_QWORD*)(a1 + 528) = v30;
    *(_QWORD*)(a1 + 536) = v20;
    *(_QWORD*)(a1 + 544) = v28;
    if (v21 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v32 = 56;
      }
      v4 = nn_mem_StandardAllocator_Free(*v2 + v32, v31);
    }
  }
  else {
    *v18 = v3;
    v20 = (__int64)(v18 + 1);
  }
  *(_QWORD*)(a1 + 536) = v20;
  v33 = *(__int64**)(a1 + 560);
  v34 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v33 < v34) {
    *v33 = v3;
    v35 = (__int64)(v33 + 1);
    goto LABEL_52;
  }
  v36 = *(_QWORD*)(a1 + 552);
  v37 = (char*)v33 - v36;
  v38 = ((__int64)v33 - v36) >> 3;
  v39 = v38 + 1;
  if ((unsigned __int64)(v38 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290(v4);
  }
  v40 = v34 - v36;
  if (v40 >> 2 > v39) {
    v39 = v40 >> 2;
  }
  if ((unsigned __int64)v40 >= 0x7FFFFFFFFFFFFFF8LL) {
    v41 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v41 = v39;
  }
  if (v41 != 0) {
    if (v41 >> 61 == 0) {
      v42 = fw_memory_HeapManager_Allocate(*v2, 8 * v41, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210(v4);
  }
  v42 = 0;

LABEL_48:
  v43 = v42 + 8 * v41;
  v44 = (char*)v33 - v36;
  v45 = (__int64)&v37[v42 + -8 * v38];
  *(_QWORD*)&v37[v42] = v3;
  v35 = (__int64)&v37[v42 + 8];
  memcpy(v45, v36, v44);
  *(_QWORD*)(a1 + 552) = v45;
  *(_QWORD*)(a1 + 560) = v35;
  *(_QWORD*)(a1 + 568) = v43;
  if (v36 != 0) {
    v47 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v47 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v47, v46);
  }

LABEL_52:
  *(_QWORD*)(a1 + 560) = v35;
  GameRoutine_a8c0c0(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex(GameData_212df28);
  return v3;
}

__int64 CharacterBuilder_107d880(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  int* v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  long double v13;
  __int64 v14;
  _BYTE* v15;
  _BYTE* v16;
  bool v17;
  __int64* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  char* v29;
  __int64 v30;
  long double v31;
  __int64 v32;
  __int64* v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  char* v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  char* v44;
  __int64 v45;
  long double v46;
  __int64 v47;
  int v49;
  __int64 v50;

  nn_os_LockMutex(GameData_212df28);
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      136, 16, 0);
  v4 = GameRoutine_10965c0(v3, a1);
  v5 = GameData_212ff68[0];
  *(_BYTE*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_QWORD*)(v3 + 88) = 0;
  *(_QWORD*)(v3 + 104) = 0;
  *(_QWORD*)(v3 + 120) = 0;
  *(_DWORD*)(v3 + 128) = 0;
  *(_QWORD*)v3 = v5 + 2;
  *(_DWORD*)(v3 + 60) = 1065353216;
  *(_DWORD*)(v3 + 80) = 0x2000;
  *(_DWORD*)(v3 + 96) = 0x2000;
  *(_DWORD*)(v3 + 112) = 0x2000;
  LOBYTE(v5) = atomic_load_explicit((atomic_uchar* volatile)GameData_212d4e8,
                                    memory_order_acquire);
  v6 = GameData_212d4e0;
  if (((unsigned __int8)v5 & 1) == 0) {
    v4 = __cxa_guard_acquire(GameData_212d4e8);
    if ((_DWORD)v4 != 0) {
      *v6 = wld_Crc32(0, "CharacterSound", 14);
      v4 = __cxa_guard_release(GameData_212d4e8);
    }
  }
  v7 = *v6;
  v8 = *(_QWORD*)(a1 + 504);
  v9 = *(_QWORD*)(a1 + 512);
  v10 = v9;
  v49 = v7;
  v50 = v3;
  while (v10 != v8) {
    v11 = *(_DWORD*)(v10 - 16);
    v10 -= 16;
    if (v11 == v7) {
      if ((*(_BYTE*)(v3 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v8 == v9 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v8) <= 0x6F) {
    v12 = fw_memory_HeapManager_Allocate(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v12;
    *(_QWORD*)(a1 + 512) = v12;
    *(_QWORD*)(a1 + 520) = v12 + 112;
    if (v9 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(*v2 + v14, v13);
    }
  }
  v4 = GameRoutine_98f140(a1 + 504, &v49);
  if ((*(_BYTE*)(v3 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v3 + 16) = 1;
    *(_BYTE*)(v3 + 17) &= ~2u;
    *(_BYTE*)(v3 + 18) &= ~2u;
    *(_BYTE*)(v3 + 19) &= ~2u;
    *(_BYTE*)(v3 + 20) &= ~2u;
    v15 = *(_BYTE**)(v3 + 8);
    v15[632] = 0;
    v15[664] = 0;
    v15[696] = 0;
    v15[728] = 0;
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 64LL))(v3);
    v16 = *(_BYTE**)(v3 + 8);
    v17 = v16[300] == 3 && v16[301] == 3;
    if (v17 || v16[302] == 1) {
      v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 72LL))(v3);
    }
  }

LABEL_20:
  v18 = *(__int64**)(a1 + 536);
  v19 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v18 >= v19) {
    v21 = *(_QWORD*)(a1 + 528);
    v22 = (char*)v18 - v21;
    v23 = ((__int64)v18 - v21) >> 3;
    v24 = v23 + 1;
    if ((unsigned __int64)(v23 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v25 = v19 - v21;
    if (v25 >> 2 > v24) {
      v24 = v25 >> 2;
    }
    if ((unsigned __int64)v25 >= 0x7FFFFFFFFFFFFFF8LL) {
      v26 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v26 = v24;
    }
    if (v26 != 0) {
      if (v26 >> 61 != 0) {
        goto LABEL_56;
      }
      v27 = fw_memory_HeapManager_Allocate(*v2, 8 * v26, 16, 0);
    }
    else {
      v27 = 0;
    }
    v28 = v27 + 8 * v26;
    v29 = (char*)v18 - v21;
    v30 = (__int64)&v22[v27 + -8 * v23];
    *(_QWORD*)&v22[v27] = v3;
    v20 = (__int64)&v22[v27 + 8];
    v4 = memcpy(v30, v21, v29);
    *(_QWORD*)(a1 + 528) = v30;
    *(_QWORD*)(a1 + 536) = v20;
    *(_QWORD*)(a1 + 544) = v28;
    if (v21 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v32 = 56;
      }
      v4 = nn_mem_StandardAllocator_Free(*v2 + v32, v31);
    }
  }
  else {
    *v18 = v3;
    v20 = (__int64)(v18 + 1);
  }
  *(_QWORD*)(a1 + 536) = v20;
  v33 = *(__int64**)(a1 + 560);
  v34 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v33 < v34) {
    *v33 = v3;
    v35 = (__int64)(v33 + 1);
    goto LABEL_52;
  }
  v36 = *(_QWORD*)(a1 + 552);
  v37 = (char*)v33 - v36;
  v38 = ((__int64)v33 - v36) >> 3;
  v39 = v38 + 1;
  if ((unsigned __int64)(v38 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290(v4);
  }
  v40 = v34 - v36;
  if (v40 >> 2 > v39) {
    v39 = v40 >> 2;
  }
  if ((unsigned __int64)v40 >= 0x7FFFFFFFFFFFFFF8LL) {
    v41 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v41 = v39;
  }
  if (v41 != 0) {
    if (v41 >> 61 == 0) {
      v42 = fw_memory_HeapManager_Allocate(*v2, 8 * v41, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210(v4);
  }
  v42 = 0;

LABEL_48:
  v43 = v42 + 8 * v41;
  v44 = (char*)v33 - v36;
  v45 = (__int64)&v37[v42 + -8 * v38];
  *(_QWORD*)&v37[v42] = v3;
  v35 = (__int64)&v37[v42 + 8];
  memcpy(v45, v36, v44);
  *(_QWORD*)(a1 + 552) = v45;
  *(_QWORD*)(a1 + 560) = v35;
  *(_QWORD*)(a1 + 568) = v43;
  if (v36 != 0) {
    v47 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v47 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v47, v46);
  }

LABEL_52:
  *(_QWORD*)(a1 + 560) = v35;
  GameRoutine_a8c0c0(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex(GameData_212df28);
  return v3;
}

__int64 CharacterBuilder_107dca0(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int8 explicit;
  int* v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  long double v16;
  __int64 v17;
  _BYTE* v18;
  _BYTE* v19;
  bool v20;
  __int64* v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  char* v32;
  __int64 v33;
  long double v34;
  __int64 v35;
  __int64* v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  char* v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  char* v47;
  __int64 v48;
  long double v49;
  __int64 v50;
  int v52;
  __int64 v53;

  nn_os_LockMutex(GameData_212df28);
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      360, 16, 0);
  GameRoutine_10965c0(v3, a1);
  *(_QWORD*)v3 = GameData_212ff70[0] + 2;
  v7 = memset(v3 + 56, 0, 304, v4, v5, v6);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ff28,
                                  memory_order_acquire);
  v9 = GameData_212ff20;
  if ((explicit & 1) == 0) {
    v7 = __cxa_guard_acquire(GameData_212ff28);
    if ((_DWORD)v7 != 0) {
      *v9 = wld_Crc32(0, "CharacterWeaponAnimator", 23);
      v7 = __cxa_guard_release(GameData_212ff28);
    }
  }
  v10 = *v9;
  v11 = *(_QWORD*)(a1 + 504);
  v12 = *(_QWORD*)(a1 + 512);
  v13 = v12;
  v52 = v10;
  v53 = v3;
  while (v13 != v11) {
    v14 = *(_DWORD*)(v13 - 16);
    v13 -= 16;
    if (v14 == v10) {
      if ((*(_BYTE*)(v3 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v11 == v12 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v11) <= 0x6F) {
    v15 = fw_memory_HeapManager_Allocate(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v15;
    *(_QWORD*)(a1 + 512) = v15;
    *(_QWORD*)(a1 + 520) = v15 + 112;
    if (v12 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(*v2 + v17, v16);
    }
  }
  v7 = GameRoutine_98f140(a1 + 504, &v52);
  if ((*(_BYTE*)(v3 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v3 + 16) = 1;
    *(_BYTE*)(v3 + 17) &= ~2u;
    *(_BYTE*)(v3 + 18) &= ~2u;
    *(_BYTE*)(v3 + 19) &= ~2u;
    *(_BYTE*)(v3 + 20) &= ~2u;
    v18 = *(_BYTE**)(v3 + 8);
    v18[632] = 0;
    v18[664] = 0;
    v18[696] = 0;
    v18[728] = 0;
    v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 64LL))(v3);
    v19 = *(_BYTE**)(v3 + 8);
    v20 = v19[300] == 3 && v19[301] == 3;
    if (v20 || v19[302] == 1) {
      v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 72LL))(v3);
    }
  }

LABEL_20:
  v21 = *(__int64**)(a1 + 536);
  v22 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v21 >= v22) {
    v24 = *(_QWORD*)(a1 + 528);
    v25 = (char*)v21 - v24;
    v26 = ((__int64)v21 - v24) >> 3;
    v27 = v26 + 1;
    if ((unsigned __int64)(v26 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v28 = v22 - v24;
    if (v28 >> 2 > v27) {
      v27 = v28 >> 2;
    }
    if ((unsigned __int64)v28 >= 0x7FFFFFFFFFFFFFF8LL) {
      v29 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v29 = v27;
    }
    if (v29 != 0) {
      if (v29 >> 61 != 0) {
        goto LABEL_56;
      }
      v30 = fw_memory_HeapManager_Allocate(*v2, 8 * v29, 16, 0);
    }
    else {
      v30 = 0;
    }
    v31 = v30 + 8 * v29;
    v32 = (char*)v21 - v24;
    v33 = (__int64)&v25[v30 + -8 * v26];
    *(_QWORD*)&v25[v30] = v3;
    v23 = (__int64)&v25[v30 + 8];
    v7 = memcpy(v33, v24, v32);
    *(_QWORD*)(a1 + 528) = v33;
    *(_QWORD*)(a1 + 536) = v23;
    *(_QWORD*)(a1 + 544) = v31;
    if (v24 != 0) {
      v35 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v35 = 56;
      }
      v7 = nn_mem_StandardAllocator_Free(*v2 + v35, v34);
    }
  }
  else {
    *v21 = v3;
    v23 = (__int64)(v21 + 1);
  }
  *(_QWORD*)(a1 + 536) = v23;
  v36 = *(__int64**)(a1 + 560);
  v37 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v36 < v37) {
    *v36 = v3;
    v38 = (__int64)(v36 + 1);
    goto LABEL_52;
  }
  v39 = *(_QWORD*)(a1 + 552);
  v40 = (char*)v36 - v39;
  v41 = ((__int64)v36 - v39) >> 3;
  v42 = v41 + 1;
  if ((unsigned __int64)(v41 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290(v7);
  }
  v43 = v37 - v39;
  if (v43 >> 2 > v42) {
    v42 = v43 >> 2;
  }
  if ((unsigned __int64)v43 >= 0x7FFFFFFFFFFFFFF8LL) {
    v44 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v44 = v42;
  }
  if (v44 != 0) {
    if (v44 >> 61 == 0) {
      v45 = fw_memory_HeapManager_Allocate(*v2, 8 * v44, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210(v7);
  }
  v45 = 0;

LABEL_48:
  v46 = v45 + 8 * v44;
  v47 = (char*)v36 - v39;
  v48 = (__int64)&v40[v45 + -8 * v41];
  *(_QWORD*)&v40[v45] = v3;
  v38 = (__int64)&v40[v45 + 8];
  memcpy(v48, v39, v47);
  *(_QWORD*)(a1 + 552) = v48;
  *(_QWORD*)(a1 + 560) = v38;
  *(_QWORD*)(a1 + 568) = v46;
  if (v39 != 0) {
    v50 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v50 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v50, v49);
  }

LABEL_52:
  *(_QWORD*)(a1 + 560) = v38;
  GameRoutine_a8c0c0(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex(GameData_212df28);
  return v3;
}

__n128 CharacterBuilder_107e090(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __n128 result;
  __int64 v6;
  __int64 v7;

  v2 = *(_QWORD**)(a2 + 32);
  if (v2 != nullptr) {
    if ((*(_BYTE*)(a1 + 342) & 1) != 0) {
      v6 = a1;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, __int64*))(
          *v2 + 48LL))((void*)v2, v2, &v6);
    }
    else {
      v3 = GameData_2235760;
      v4 = GameData_2235768;
      if (GameData_2235768 != 0) {
        atomic_fetch_add_explicit(
            (atomic_ullong* volatile)(GameData_2235768 + 16), 1u,
            memory_order_relaxed);
        v6 = v3;
        v7 = v4;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                  memory_order_relaxed);
      }
      else {
        v6 = GameData_2235760;
        v7 = 0;
      }
      GameRoutine_1078600((_QWORD*)(a1 + 240), &v6, a2, -1);
      if (v7 != 0) {
        result = std___1___shared_weak_count___release_weak(v7);
      }
      if (v4 != 0) {
        return std___1___shared_weak_count___release_weak(v4);
      }
    }
  }
  return result;
}

__int64 CharacterBuilder_Unknown5(__int64 a1, long double a2)
{
  __int64* v2;
  __int64 v4;
  __int64 v5;
  int* v6;
  bool v7;
  __int64 v8;
  float v9;
  float v10;
  int v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  float* v15;
  int v16;
  __int64 v17;
  __int64 v18;
  _BYTE** v19;
  _BYTE* v21;
  float v22;
  __n128 v23;
  int32x2_t v24;
  __int64 v25;
  int v26;
  bool v27;
  long double v28;
  float v29;
  int v30;
  float v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v37;
  __int64 v38;
  unsigned int v39;
  __int64 v40;
  float32x4_t* v41;
  float32x4_t v42;
  float32x4_t v43;
  int8x16_t v44;
  float32x4_t v45;
  __int64** v46;
  __int64** v47;
  float v48;
  __int64 v49;
  __int64* v50;
  __int64 v51;
  __int128 v52;
  char v53;
  __int64 v54;
  int v55;
  int v56;
  __int64 v57;
  __int64 v58;
  unsigned int v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  _QWORD* v64;
  __int64 v65;
  int v66;
  float32x4_t* v67;
  __int128 v68;
  __int64 v69;
  _QWORD* v70;
  __int64 v71;
  __int64 v72;
  __int64 v74;
  int v75;
  __int64 v76;
  int v77;
  __int64 v78;
  unsigned int v79;
  float32x4_t v80;
  __int64 v81;
  __int64 v82;
  unsigned int v83;
  __int64 v84;
  float v85;
  __int64 v86;
  float v87;
  int v88;
  bool v89;
  int v90;
  bool v91;
  int v92;
  __int16 v93;
  __int16 v94;
  __int64 v95;
  _QWORD* v96;
  _QWORD* v97;
  _QWORD* v98;
  __int64 v99;
  __int64 result;
  float v101;
  struct {
    _QWORD v102[4];
    _QWORD* v103;
  } v102_;

  v2 = *(__int64**)(a1 + 584);
  v4 = *v2;
  v5 = v2[2];
  v6 = (int*)GameData_212d168;
  v7 = v4 == 0 || v5 == 0;
  if (!v7 && (CharacterAppearance_1074940(v4) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 72);
    v9 = 0x0.0p+0f;
    v10 = *(float*)(v8 + 148);
    v11 = *(_DWORD*)(v8 + 120);
    v12 = *(_QWORD*)(v8 + 96);
    if (v12 != 0) {
      v13 = GameRoutine_d2b5f0(*(_QWORD*)(v12 + 32) + 72LL);
      if ((v13 & 0x100000000LL) != 0) {
        v14 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v12 + 24) + 72LL) +
                         104LL * (int)v13);
        if (v14 != 0) {
          v15 = *(float**)(v14 + 16);
          if (v15 != nullptr) {
            v9 = *v15 * 0x1.1111120000000p-6f;
          }
        }
      }
    }
    v16 = *(_DWORD*)(*(_QWORD*)(a1 + 72) + 112LL);
    v17 = *(_QWORD*)(a1 + 88);
    v18 = *(_QWORD*)(v17 + 136);
    v19 = *(_BYTE***)(v17 + 152);
    if (v18 == 0 || v19 == nullptr) {
      v21 = nullptr;
    }
    else {
      v21 = *v19;
    }
    v22 = *(float*)(a1 + 336);
    GameRoutine_107ec40(a1);
    if (v16 != 0 && CharacterAnimator_107aaa0(*(_QWORD*)(a1 + 72), v16)) {
      v25 = *(_QWORD*)(a1 + 72);
      if (GameRoutine_108cb20(v16)) {
        v26 = v16 == 119788728 ? 0 : v16;
        if (*(_DWORD*)(v25 + 112) != v26) {
          *(_DWORD*)(v25 + 112) = v26;
        }
      }
    }
    if (v11 != 0) {
      v27 = !CharacterAnimator_107aaa0(*(_QWORD*)(a1 + 72), v11);
      if (v27) {
        v29 = 0x0.0p+0f;
      }
      else {
        v29 = v9;
      }
      if (v27) {
        v30 = 119788728;
      }
      else {
        v30 = v11;
      }
      if (v27) {
        v31 = 0x1.0000000000000p+0f;
      }
      else {
        v31 = v10;
      }
      *(_QWORD*)&v28 = 0;
      LANES128(v23).n128_f32[0] =
          CharacterAnimator_1079580(*(_QWORD*)(a1 + 72), v30, v28, v29, v31);
    }
    if (v21 != nullptr) {
      v32 = *(_QWORD*)(a1 + 88);
      v33 = *(_QWORD*)(v32 + 32);
      if (v33 != 0) {
        v34 = *(_QWORD*)(v33 + 8);
        v35 = *(_QWORD*)(v32 + 40);
        if (v34 != -1 && v35 != 0) {
          v38 = *(_QWORD*)(v35 + 392);
          v37 = *(_QWORD*)(v35 + 400);
          if (v37 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 8), 1u,
                                      memory_order_relaxed);
            if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64, long double))(*(_QWORD*)v37 + 16LL))(
                  v37, *(long double*)&v23);
              std___1___shared_weak_count___release_weak(v37);
            }
          }
          v39 = GameRoutine_10adb80((_DWORD*)(v38 + 1432), v21);
          if ((v39 & 0x80000000) == 0) {
            CharacterFacialController_10b2280(v32, v39, 0x0.0p+0f);
          }
        }
      }
    }
    if (v22 >= 0x0.0p+0f) {
      v40 = *(_QWORD*)(a1 + 392);
      *(float*)(a1 + 336) = v22;
      if (v40 != 0) {
        v41 = *(float32x4_t**)(a1 + 8);
        PSEUDO_LOW_LANE64(
            v24, n64_f32,
            *(float*)(v40 + 40) +
                (float)((float)(0x1.0000000000000p+0f - *(float*)(v40 + 40)) *
                        v22));
        v42 = vdupq_lane_s32(v24, 0);
        LANES128(v42).n128_u32[3] = 0;
        v43 = vsubq_f32(v41[22], v42);
        v44 = vmulq_f32(v43, v43);
        LANES128(v44).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v44, v44, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0])))
                .n64_f32[0] != 0x0.0p+0f) {
          LANES128(v41[22]).n128_u32[0] = LANES64(v24).n64_u32[0];
          LANES128(v41[22]).n128_u32[1] = LANES64(v24).n64_u32[0];
          v45 = v41[22];
          LANES128(v41[18]).n128_u32[2] |= 1u;
          LANES128(v45).n128_u64[1] = LANES64(v24).n64_u32[0];
          v41[22] = v45;
          v40 = *(_QWORD*)(a1 + 392);
        }
        v46 = *(__int64***)(a1 + 528);
        v47 = *(__int64***)(a1 + 536);
        if (v46 != v47) {
          v48 = *(float*)(v40 + 44) +
                (float)((float)(0x1.0000000000000p+0f - *(float*)(v40 + 44)) *
                        v22);
          v101 = v48;
          do {
            v50 = *v46;
            *((float*)v50 + 28) = v48;
            *((float*)v50 + 29) = v48;
            v51 = *v50;
            v52 = *((_OWORD*)v50 + 7);
            *((_DWORD*)v50 + 32) |= 0x20u;
            v53 = *((_BYTE*)v50 + 28);
            *((_QWORD*)&v52 + 1) = LODWORD(v48);
            *((_OWORD*)v50 + 7) = v52;
            if ((v53 & 1) != 0) {
              goto LABEL_56;
            }
            v54 = *(_QWORD*)(v51 + 24);
            v55 = *((_DWORD*)v50 + 4);
            v102_.v102[0] = GameData_1fc0970;
            v102_.v102[1] = v51;
            v102_.v102[2] = v50;
            v102_.v103 = v102_.v102;
            v56 = Model_a661a0(v54, v55, (__int64)v102_.v102, 0);
            if (v102_.v103 == v102_.v102) {
              v49 = 32;
            }
            else {
              if (v102_.v103 == nullptr) {
                goto LABEL_55;
              }
              v49 = 40;
            }
            (*(void (**)(__int64))(*v102_.v103 + v49))((__int64)v102_.v103);
          LABEL_55:
            v48 = v101;
            *((_DWORD*)v50 + 6) = v56;
            *((_BYTE*)v50 + 28) = 1;
          LABEL_56:
            ++v46;
            *(_BYTE*)(*(_QWORD*)(v51 + 24) + 504LL) = 1;
          } while (v46 != v47);
        }
        CharacterBuilder_1083840(a1);
      }
    }
    if (*(_DWORD*)(a1 + 384) == 0) {
      if (*v6 != 2) {
        goto LABEL_73;
      }
      v57 = *(_QWORD*)(a1 + 392);
      v58 = *(_QWORD*)(a1 + 400);
      if (v58 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v58 + 8), 1u,
                                  memory_order_relaxed);
        v59 = *(_DWORD*)(v57 + 11784);
        if (atomic_fetch_add((atomic_ullong* volatile)(v58 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64, long double))(*(_QWORD*)v58 + 16LL))(
              v58, *(long double*)&v23);
          v23 = std___1___shared_weak_count___release_weak(v58);
        }
      }
      else {
        v59 = *(_DWORD*)(v57 + 11784);
      }
      if (v59 > 0x1A) {
        goto LABEL_73;
      }
      if (((1 << v59) & 0x410C) != 0) {
        *(_DWORD*)(*(_QWORD*)(a1 + 104) + 212LL) = 0;
        goto LABEL_74;
      }
      if (((1 << v59) & 0x5000080) != 0) {
        *(_DWORD*)(*(_QWORD*)(a1 + 104) + 212LL) = 0;
      }
      else {
      LABEL_73:
        *(_DWORD*)(a1 + 384) = 1;
      }
    }
  LABEL_74:
    v60 = *(_QWORD*)(a1 + 240);
    v61 = *(_QWORD*)(a1 + 248);
    *(_DWORD*)(a1 + 340) |= 0x10000u;
    *(_BYTE*)(a1 + 264) = 1;
    if (v60 != v61) {
      do {
        if (*(_DWORD*)v60 != 0) {
          v62 = *(_QWORD*)(v60 + 16);
          if (v62 == 0 || *(_QWORD*)(v62 + 8) == -1) {
            goto LABEL_76;
          }
          v102_.v102[0] = a1;
          v63 = *(_QWORD*)(v60 + 64);
          if (v63 == 0) {
            GameRoutine_60a310_alt1();
          }
          (*(void (**)(__int64, _QWORD*, long double))(*(_QWORD*)v63 + 48LL))(
              v63, v102_.v102, *(long double*)&v23);
          if ((*(_DWORD*)v60 & 0x80000000) != 0) {
          LABEL_76:
            *(_DWORD*)v60 = 0;
          }
        }
        v60 += 80;
      } while (v60 != v61);
      v60 = *(_QWORD*)(a1 + 240);
      v61 = *(_QWORD*)(a1 + 248);
    }
    *(_BYTE*)(a1 + 264) = 0;
    if (v60 == v61) {
    LABEL_86:
      v64 = *(_QWORD**)(a1 + 584);
      *(_QWORD*)(a1 + 248) = v60;
      *(__n128*)&a2 = GameRoutine_10e8690(v64);
      goto LABEL_87;
    }
    while (1) {
      v70 = *(_QWORD**)(v61 - 16);
      if ((_QWORD*)(v61 - 48) == v70) {
        break;
      }
      if (v70 != nullptr) {
        v71 = 40;
      LABEL_100:
        (*(void (**)(void*))(*v70 + v71))(v70);
      }
      v72 = *(_QWORD*)(v61 - 64);
      if (v72 != 0) {
        v23 = std___1___shared_weak_count___release_weak(v72);
      }
      v61 -= 80;
      if (v61 == v60) {
        goto LABEL_86;
      }
    }
    v71 = 32;
    goto LABEL_100;
  }
LABEL_87:
  v65 = **(_QWORD**)(a1 + 584);
  if (v65 != 0 && (CharacterAppearance_1074940(v65) & 1) != 0) {
    GameRoutine_10e8800(*(__int64**)(a1 + 584), *(_QWORD*)(a1 + 8));
  }
  v66 = *v6;
  if (*(_DWORD*)(a1 + 344) != *v6) {
    if (v66 == 6 || v66 == 1) {
      v74 = *(_QWORD*)(a1 + 104);
      *(_QWORD*)&a2 = 0;
      v75 = *(_DWORD*)(v74 + 56);
      *(_DWORD*)(v74 + 64) = 0;
      *(_DWORD*)(v74 + 56) = v75 | 0x20000;
      v76 = *(_QWORD*)(a1 + 112);
      v77 = *(_DWORD*)(v76 + 96);
      *(_DWORD*)(v76 + 104) = 0;
      *(_DWORD*)(v76 + 96) = v77 | 0x20000;
      v78 = *(_QWORD*)(a1 + 88);
      v79 = *(_DWORD*)(v78 + 96) | 0x20000;
    }
    else {
      v84 = *(_QWORD*)(a1 + 104);
      *(_QWORD*)&a2 = 0;
      if ((*(_DWORD*)(v84 + 56) & 0xFFFDFFFF) != 0) {
        v85 = 0x0.0p+0f;
      }
      else {
        v85 = 0x1.0000000000000p+0f;
      }
      *(_DWORD*)(v84 + 56) &= ~0x20000u;
      *(float*)(v84 + 64) = v85;
      v86 = *(_QWORD*)(a1 + 112);
      if ((*(_DWORD*)(v86 + 96) & 0xFFFDFFFF) != 0) {
        v87 = 0x0.0p+0f;
      }
      else {
        v87 = 0x1.0000000000000p+0f;
      }
      *(_DWORD*)(v86 + 96) &= ~0x20000u;
      *(float*)(v86 + 104) = v87;
      v78 = *(_QWORD*)(a1 + 88);
      v79 = *(_DWORD*)(v78 + 96) & 0xFFFDFFFF;
      if (v79 == 0) {
        *(float*)&a2 = 0x1.0000000000000p+0f;
      }
    }
    *(_DWORD*)(v78 + 96) = v79;
    *(_DWORD*)(v78 + 104) = LODWORD(a2);
    if ((*(_BYTE*)(a1 + 343) & 2) != 0) {
      v88 = *(_DWORD*)(a1 + 344);
      v89 = v88 == 1 || v88 == 6;
      v90 = !v89;
      v91 = v66 == 1 || v66 == 6;
      v92 = !v91;
      if (v88 == 0 || v92 != v90) {
        v102_.v103 = v102_.v102;
        if (v92 != 0) {
          v93 = 256;
        }
        else {
          v93 = 0;
        }
        if (v88 != 0) {
          v94 = v93;
        }
        else {
          v94 = v93 + 1;
        }
        v102_.v102[0] = GameData_200d938;
        LOWORD(v102_.v102[1]) = v94;
        CharacterBuilder_1083e90((_QWORD*)a1, (__int64)v102_.v102);
        if (v102_.v103 == v102_.v102) {
          v95 = 32;
        }
        else {
          if (v102_.v103 == nullptr) {
            goto LABEL_150;
          }
          v95 = 40;
        }
        (*(void (**)(__int64))(*v102_.v103 + v95))((__int64)v102_.v103);
      }
    }
  LABEL_150:
    *(_DWORD*)(a1 + 344) = v66;
    if ((*(_BYTE*)(a1 + 341) & 0x20) == 0) {
      goto LABEL_92;
    }
    goto LABEL_151;
  }
  if ((*(_BYTE*)(a1 + 341) & 0x20) == 0) {
  LABEL_92:
    v67 = *(float32x4_t**)(a1 + 8);
    if (*(_DWORD*)(a1 + 384) == 0) {
      if ((*(_BYTE*)(a1 + 368) & 1) == 0 &&
              (LANES128(v67[18]).n128_u8[1] & 1) != 0 ||
          (v80 = vsubq_f32(v67[19], *(float32x4_t*)(a1 + 352)),
           a2 = COERCE_LONG_DOUBLE(vmulq_f32(v80, v80)),
           *(float32x2_t*)& a2 =
               vadd_f32(COERCE_AS(float32x2_t,
                                  LANES128_OF(vextq_s8(*(int8x16_t*)&a2,
                                                       *(int8x16_t*)&a2, 8u))
                                      .n128_u64[0]),
                        *(float32x2_t*)&a2),
           *(float32x2_t*)& a2 =
               vpadd_f32(*(float32x2_t*)&a2, *(float32x2_t*)&a2),
           *(float*)&a2 > 0x1.2000000000000p+3f)) {
        if (*v6 != 2) {
          goto LABEL_179;
        }
        v81 = *(_QWORD*)(a1 + 392);
        v82 = *(_QWORD*)(a1 + 400);
        if (v82 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v82 + 8), 1u,
                                    memory_order_relaxed);
          v83 = *(_DWORD*)(v81 + 11784);
          if (atomic_fetch_add((atomic_ullong* volatile)(v82 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64, long double))(*(_QWORD*)v82 + 16LL))(v82, a2);
            std___1___shared_weak_count___release_weak(v82);
          }
        }
        else {
          v83 = *(_DWORD*)(v81 + 11784);
        }
        if (v83 > 0x1A) {
          goto LABEL_179;
        }
        if (((1 << v83) & 0x410C) != 0) {
          *(_DWORD*)(*(_QWORD*)(a1 + 104) + 212LL) = 0;
          goto LABEL_93;
        }
        if (((1 << v83) & 0x5000080) != 0) {
          *(_DWORD*)(*(_QWORD*)(a1 + 104) + 212LL) = 0;
        }
        else {
        LABEL_179:
          *(_DWORD*)(a1 + 384) = 1;
        }
      }
    }
  LABEL_93:
    *(_DWORD*)(a1 + 352) = LANES128(v67[19]).n128_u32[0];
    *(_DWORD*)(a1 + 356) = LANES128(v67[19]).n128_u32[1];
    v68 = *(_OWORD*)(a1 + 352);
    *((_QWORD*)&v68 + 1) = LANES128(v67[19]).n128_u32[2];
    *(_OWORD*)(a1 + 352) = v68;
    *(_BYTE*)(a1 + 368) = LANES128(v67[18]).n128_u8[1];
    v69 = *(_QWORD*)(a1 + 512);
    if (v69 == 0) {
      goto LABEL_170;
    }
    goto LABEL_152;
  }
LABEL_151:
  v69 = *(_QWORD*)(a1 + 512);
  if (v69 == 0) {
    goto LABEL_170;
  }
LABEL_152:
  v96 = *(_QWORD**)(v69 + 24);
  v97 = *(_QWORD**)(v69 + 32);
  if (v96 != v97) {
    do {
      if (*(_BYTE*)(v96[1] + 88LL) == 1) {
        GameRoutine_a867a0((__int64)v96);
        *v96 = 0;
      }
      v96 += 2;
    } while (v96 != v97);
    v96 = *(_QWORD**)(v69 + 24);
    v97 = *(_QWORD**)(v69 + 32);
    if (v96 != v97) {
      while (*v96 != 0) {
        v96 += 2;
        if (v96 == v97) {
          goto LABEL_170;
        }
      }
    }
  }
  if (v96 != v97) {
    v98 = v96 + 2;
    if (v96 + 2 != v97) {
      do {
        if (*v98 != 0) {
          v99 = v98[1];
          *v96 = *v98;
          v96[1] = v99;
          v96 += 2;
        }
        v98 += 2;
      } while (v98 != v97);
      v97 = *(_QWORD**)(v69 + 32);
    }
  }
  if (v96 != v97) {
    *(_QWORD*)(v69 + 32) = v96;
  }
LABEL_170:
  result = *(_QWORD*)(a1 + 320);
  if (result != 0) {
    return GameRoutine_d31080(result);
  }
  return result;
}

__int64 game_character_CharacterBuilder_LateUpdate(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  struct {
    __int64 (**v4)();
    char v5;
    char gap9_[23];
    __int64 (***v6)();
  } v4_;

  if (*(_DWORD*)(result + 384) != 0) {
    v1 = result;
    if ((*(_BYTE*)(result + 342) & 1) != 0) {
      v4_.v5 = 0;
      *(_DWORD*)(result + 384) = 2;
      v4_.v6 = &v4_.v4;
      v4_.v4 = GameData_2006dc0;
      CharacterBuilder_1083e90((_QWORD*)result, (__int64)&v4_.v4);
      if (v4_.v6 == &v4_.v4) {
        v2 = 4;
      }
      else {
        if (v4_.v6 == nullptr) {
          goto LABEL_8;
        }
        v2 = 5;
      }
      ((__int64 (*)(__int64))(*v4_.v6)[v2])((__int64)v4_.v6);
    LABEL_8:
      v4_.v5 = 0;
      v4_.v4 = GameData_2006e40;
      v4_.v6 = &v4_.v4;
      CharacterBuilder_1083e90((_QWORD*)v1, (__int64)&v4_.v4);
      result = (__int64)v4_.v6;
      if (v4_.v6 == &v4_.v4) {
        v3 = 4;
      }
      else {
        if (v4_.v6 == nullptr) {
        LABEL_13:
          *(_DWORD*)(v1 + 384) = 0;
          return result;
        }
        v3 = 5;
      }
      result = ((__int64 (*)(__int64))(*v4_.v6)[v3])((__int64)v4_.v6);
      goto LABEL_13;
    }
  }
  return result;
}

__int64 CharacterBuilder_10823c0(_QWORD* a1)
{
  __int64 v1;
  atomic_uchar* v2;
  unsigned __int8 explicit;
  int* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  unsigned __int8 v10;
  int* v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v26;
  long double v27;
  __int64 v28;
  _BYTE* v29;
  _BYTE* v30;
  bool v31;
  __int64* v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  char* v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  char* v43;
  __int64 v44;
  long double v45;
  __int64 v46;
  __int64* v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  char* v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  char* v58;
  __int64 v59;
  long double v60;
  __int64 v61;
  _QWORD* v62;
  int v63;
  _QWORD* v64;
  int v65;
  int v66;
  __int64 v67;

  v1 = *a1;
  v2 = (atomic_uchar*)GameData_212ed90;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ed90,
                                  memory_order_acquire);
  v4 = GameData_212ed88;
  if ((explicit & 1) == 0) {
    v62 = a1;
    v63 = __cxa_guard_acquire(GameData_212ed90);
    a1 = v62;
    if (v63 != 0) {
      *v4 = wld_Crc32(0, "AnimLayerCtrlModule", 19);
      __cxa_guard_release(GameData_212ed90);
      a1 = v62;
    }
  }
  v5 = *(_QWORD*)(v1 + 512);
  v6 = v5;
  do {
    if (v6 == *(_QWORD*)(v1 + 504)) {
      goto LABEL_7;
    }
    v7 = *(_DWORD*)(v6 - 16);
    v6 -= 16;
    v5 -= 16;
  } while (v7 != *v4);
  if (*(_QWORD*)(v1 + 512) == v5 || (v8 = *(_QWORD*)(v5 + 8)) == 0) {
  LABEL_7:
    v9 = *a1;
    v10 = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                               memory_order_acquire);
    v11 = GameData_212df08;
    if ((v10 & 1) == 0) {
      v64 = a1;
      v65 = __cxa_guard_acquire(GameData_212df10);
      a1 = v64;
      if (v65 != 0) {
        *v11 = wld_Crc32(0, "ModelModule", 11);
        __cxa_guard_release(GameData_212df10);
        a1 = v64;
      }
    }
    v12 = *(_QWORD*)(v9 + 512);
    v13 = v12;
    do {
      if (v13 == *(_QWORD*)(v9 + 504)) {
        return 0;
      }
      v14 = *(_DWORD*)(v13 - 16);
      v13 -= 16;
      v12 -= 16;
    } while (v14 != *v11);
    if (*(_QWORD*)(v9 + 512) != v12) {
      v15 = *(_QWORD*)(v12 + 8);
      if (v15 != 0) {
        v16 = *(_QWORD*)(v15 + 24);
        if (v16 != 0) {
          v17 = *a1;
          nn_os_LockMutex(GameData_212df28);
          v18 = (_QWORD*)fw_memory_g_heap_manager_ptr;
          v8 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 120, 16, 0);
          v19 = GameRoutine_ce3010(v8, v17, v16, 2, 6);
          if ((atomic_load_explicit(v2, memory_order_acquire) & 1) == 0) {
            v19 = __cxa_guard_acquire(GameData_212ed90);
            if ((_DWORD)v19 != 0) {
              *v4 = wld_Crc32(0, "AnimLayerCtrlModule", 19);
              v19 = __cxa_guard_release(GameData_212ed90);
            }
          }
          v20 = *v4;
          v21 = *(_QWORD*)(v17 + 504);
          v22 = *(_QWORD*)(v17 + 512);
          v23 = v22;
          v66 = v20;
          v67 = v8;
          while (v23 != v21) {
            v24 = *(_DWORD*)(v23 - 16);
            v23 -= 16;
            if (v24 == v20) {
              if ((*(_BYTE*)(v8 + 16) & 1) != 0) {
                goto LABEL_35;
              }
              goto LABEL_29;
            }
          }
          if (v21 == v22 &&
              (unsigned __int64)(*(_QWORD*)(v17 + 520) - v21) <= 0x6F) {
            v26 = fw_memory_HeapManager_Allocate(*v18, 112, 16, 0);
            *(_QWORD*)(v17 + 504) = v26;
            *(_QWORD*)(v17 + 512) = v26;
            *(_QWORD*)(v17 + 520) = v26 + 112;
            if (v22 != 0) {
              v28 = 128;
              if (*(_QWORD*)(*v18 + 200LL) == 0) {
                v28 = 56;
              }
              nn_mem_StandardAllocator_Free(*v18 + v28, v27);
            }
          }
          v19 = GameRoutine_98f140(v17 + 504, &v66);
          if ((*(_BYTE*)(v8 + 16) & 1) == 0) {
          LABEL_29:
            *(_BYTE*)(v8 + 16) = 1;
            *(_BYTE*)(v8 + 17) &= ~2u;
            *(_BYTE*)(v8 + 18) &= ~2u;
            *(_BYTE*)(v8 + 19) &= ~2u;
            *(_BYTE*)(v8 + 20) &= ~2u;
            v29 = *(_BYTE**)(v8 + 8);
            v29[632] = 0;
            v29[664] = 0;
            v29[696] = 0;
            v29[728] = 0;
            v19 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 64LL))(v8);
            v30 = *(_BYTE**)(v8 + 8);
            v31 = v30[300] == 3 && v30[301] == 3;
            if (v31 || v30[302] == 1) {
              v19 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 72LL))(v8);
            }
          }
        LABEL_35:
          v32 = *(__int64**)(v17 + 536);
          v33 = *(_QWORD*)(v17 + 544);
          if ((unsigned __int64)v32 >= v33) {
            v35 = *(_QWORD*)(v17 + 528);
            v36 = (char*)v32 - v35;
            v37 = ((__int64)v32 - v35) >> 3;
            v38 = v37 + 1;
            if ((unsigned __int64)(v37 + 1) >> 61 != 0) {
              goto LABEL_74;
            }
            v39 = v33 - v35;
            if (v39 >> 2 > v38) {
              v38 = v39 >> 2;
            }
            if ((unsigned __int64)v39 >= 0x7FFFFFFFFFFFFFF8LL) {
              v40 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v40 = v38;
            }
            if (v40 != 0) {
              if (v40 >> 61 != 0) {
                goto LABEL_75;
              }
              v41 = fw_memory_HeapManager_Allocate(*v18, 8 * v40, 16, 0);
            }
            else {
              v41 = 0;
            }
            v42 = v41 + 8 * v40;
            v43 = (char*)v32 - v35;
            v44 = (__int64)&v36[v41 + -8 * v37];
            *(_QWORD*)&v36[v41] = v8;
            v34 = (__int64)&v36[v41 + 8];
            v19 = memcpy(v44, v35, v43);
            *(_QWORD*)(v17 + 528) = v44;
            *(_QWORD*)(v17 + 536) = v34;
            *(_QWORD*)(v17 + 544) = v42;
            if (v35 != 0) {
              v46 = 128;
              if (*(_QWORD*)(*v18 + 200LL) == 0) {
                v46 = 56;
              }
              v19 = nn_mem_StandardAllocator_Free(*v18 + v46, v45);
            }
          }
          else {
            *v32 = v8;
            v34 = (__int64)(v32 + 1);
          }
          *(_QWORD*)(v17 + 536) = v34;
          v47 = *(__int64**)(v17 + 560);
          v48 = *(_QWORD*)(v17 + 568);
          if ((unsigned __int64)v47 < v48) {
            *v47 = v8;
            v49 = (__int64)(v47 + 1);
          LABEL_67:
            *(_QWORD*)(v17 + 560) = v49;
            GameRoutine_a8c0c0(v17);
            *(_BYTE*)(v17 + 576) = 1;
            nn_os_UnlockMutex(GameData_212df28);
            *(_DWORD*)(*(_QWORD*)(v8 + 24) + 312LL) = 2;
            return v8;
          }
          v50 = *(_QWORD*)(v17 + 552);
          v51 = (char*)v47 - v50;
          v52 = ((__int64)v47 - v50) >> 3;
          v53 = v52 + 1;
          if ((unsigned __int64)(v52 + 1) >> 61 == 0) {
            v54 = v48 - v50;
            if (v54 >> 2 > v53) {
              v53 = v54 >> 2;
            }
            if ((unsigned __int64)v54 >= 0x7FFFFFFFFFFFFFF8LL) {
              v55 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v55 = v53;
            }
            if (v55 == 0) {
              v56 = 0;
            LABEL_63:
              v57 = v56 + 8 * v55;
              v58 = (char*)v47 - v50;
              v59 = (__int64)&v51[v56 + -8 * v52];
              *(_QWORD*)&v51[v56] = v8;
              v49 = (__int64)&v51[v56 + 8];
              memcpy(v59, v50, v58);
              *(_QWORD*)(v17 + 552) = v59;
              *(_QWORD*)(v17 + 560) = v49;
              *(_QWORD*)(v17 + 568) = v57;
              if (v50 != 0) {
                v61 = 128;
                if (*(_QWORD*)(*v18 + 200LL) == 0) {
                  v61 = 56;
                }
                nn_mem_StandardAllocator_Free(*v18 + v61, v60);
              }
              goto LABEL_67;
            }
            if (v55 >> 61 == 0) {
              v56 = fw_memory_HeapManager_Allocate(*v18, 8 * v55, 16, 0);
              goto LABEL_63;
            }
          LABEL_75:
            GameRoutine_60a210(v19);
          }
        LABEL_74:
          GameRoutine_98f290(v19);
        }
      }
    }
    return 0;
  }
  return v8;
}

__int64 CharacterBuilder_1082900(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  unsigned __int8 explicit;
  int* v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  long double v13;
  __int64 v14;
  _BYTE* v15;
  _BYTE* v16;
  bool v17;
  __int64* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  char* v29;
  __int64 v30;
  long double v31;
  __int64 v32;
  __int64* v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  char* v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  char* v44;
  __int64 v45;
  long double v46;
  __int64 v47;
  int v49;
  __int64 v50;

  nn_os_LockMutex(GameData_212df28);
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      176, 16, 0);
  v4 = GameRoutine_a59e60(v3, a1);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ff38,
                                  memory_order_acquire);
  v6 = GameData_212ff30;
  if ((explicit & 1) == 0) {
    v4 = __cxa_guard_acquire(GameData_212ff38);
    if ((_DWORD)v4 != 0) {
      *v6 = wld_Crc32(0, "ClothColliderModule", 19);
      v4 = __cxa_guard_release(GameData_212ff38);
    }
  }
  v7 = *v6;
  v8 = *(_QWORD*)(a1 + 504);
  v9 = *(_QWORD*)(a1 + 512);
  v10 = v9;
  v49 = v7;
  v50 = v3;
  while (v10 != v8) {
    v11 = *(_DWORD*)(v10 - 16);
    v10 -= 16;
    if (v11 == v7) {
      if ((*(_BYTE*)(v3 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v8 == v9 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v8) <= 0x6F) {
    v12 = fw_memory_HeapManager_Allocate(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v12;
    *(_QWORD*)(a1 + 512) = v12;
    *(_QWORD*)(a1 + 520) = v12 + 112;
    if (v9 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(*v2 + v14, v13);
    }
  }
  v4 = GameRoutine_98f140(a1 + 504, &v49);
  if ((*(_BYTE*)(v3 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v3 + 16) = 1;
    *(_BYTE*)(v3 + 17) &= ~2u;
    *(_BYTE*)(v3 + 18) &= ~2u;
    *(_BYTE*)(v3 + 19) &= ~2u;
    *(_BYTE*)(v3 + 20) &= ~2u;
    v15 = *(_BYTE**)(v3 + 8);
    v15[632] = 0;
    v15[664] = 0;
    v15[696] = 0;
    v15[728] = 0;
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 64LL))(v3);
    v16 = *(_BYTE**)(v3 + 8);
    v17 = v16[300] == 3 && v16[301] == 3;
    if (v17 || v16[302] == 1) {
      v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 72LL))(v3);
    }
  }

LABEL_20:
  v18 = *(__int64**)(a1 + 536);
  v19 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v18 >= v19) {
    v21 = *(_QWORD*)(a1 + 528);
    v22 = (char*)v18 - v21;
    v23 = ((__int64)v18 - v21) >> 3;
    v24 = v23 + 1;
    if ((unsigned __int64)(v23 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v25 = v19 - v21;
    if (v25 >> 2 > v24) {
      v24 = v25 >> 2;
    }
    if ((unsigned __int64)v25 >= 0x7FFFFFFFFFFFFFF8LL) {
      v26 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v26 = v24;
    }
    if (v26 != 0) {
      if (v26 >> 61 != 0) {
        goto LABEL_56;
      }
      v27 = fw_memory_HeapManager_Allocate(*v2, 8 * v26, 16, 0);
    }
    else {
      v27 = 0;
    }
    v28 = v27 + 8 * v26;
    v29 = (char*)v18 - v21;
    v30 = (__int64)&v22[v27 + -8 * v23];
    *(_QWORD*)&v22[v27] = v3;
    v20 = (__int64)&v22[v27 + 8];
    v4 = memcpy(v30, v21, v29);
    *(_QWORD*)(a1 + 528) = v30;
    *(_QWORD*)(a1 + 536) = v20;
    *(_QWORD*)(a1 + 544) = v28;
    if (v21 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v32 = 56;
      }
      v4 = nn_mem_StandardAllocator_Free(*v2 + v32, v31);
    }
  }
  else {
    *v18 = v3;
    v20 = (__int64)(v18 + 1);
  }
  *(_QWORD*)(a1 + 536) = v20;
  v33 = *(__int64**)(a1 + 560);
  v34 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v33 < v34) {
    *v33 = v3;
    v35 = (__int64)(v33 + 1);
    goto LABEL_52;
  }
  v36 = *(_QWORD*)(a1 + 552);
  v37 = (char*)v33 - v36;
  v38 = ((__int64)v33 - v36) >> 3;
  v39 = v38 + 1;
  if ((unsigned __int64)(v38 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290(v4);
  }
  v40 = v34 - v36;
  if (v40 >> 2 > v39) {
    v39 = v40 >> 2;
  }
  if ((unsigned __int64)v40 >= 0x7FFFFFFFFFFFFFF8LL) {
    v41 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v41 = v39;
  }
  if (v41 != 0) {
    if (v41 >> 61 == 0) {
      v42 = fw_memory_HeapManager_Allocate(*v2, 8 * v41, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210(v4);
  }
  v42 = 0;

LABEL_48:
  v43 = v42 + 8 * v41;
  v44 = (char*)v33 - v36;
  v45 = (__int64)&v37[v42 + -8 * v38];
  *(_QWORD*)&v37[v42] = v3;
  v35 = (__int64)&v37[v42 + 8];
  memcpy(v45, v36, v44);
  *(_QWORD*)(a1 + 552) = v45;
  *(_QWORD*)(a1 + 560) = v35;
  *(_QWORD*)(a1 + 568) = v43;
  if (v36 != 0) {
    v47 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v47 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v47, v46);
  }

LABEL_52:
  *(_QWORD*)(a1 + 560) = v35;
  GameRoutine_a8c0c0(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex(GameData_212df28);
  return v3;
}

__int64 CharacterBuilder_1082ce0(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  unsigned __int8 explicit;
  int* v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  long double v19;
  __int64 v20;
  _BYTE* v21;
  _BYTE* v22;
  bool v23;
  __int64* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  char* v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  char* v35;
  __int64 v36;
  long double v37;
  __int64 v38;
  __int64* v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  char* v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  char* v50;
  __int64 v51;
  long double v52;
  __int64 v53;
  int v55;
  __int64 v56;

  nn_os_LockMutex(GameData_212df28);
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      112, 16, 0);
  *(_BYTE*)(v3 + 16) = 0;
  v4 = v3;
  *(_DWORD*)(v3 + 17) = 33686018;
  v5 = GameData_212e370[0];
  *(_BYTE*)(v3 + 32) = 0;
  *(_QWORD*)(v3 + 36) = 0;
  *(_QWORD*)(v3 + 44) = 0;
  *(_QWORD*)(v3 + 52) = 0;
  *(_QWORD*)(v3 + 60) = 0;
  *(_QWORD*)(v3 + 68) = 0;
  *(_QWORD*)(v3 + 80) = 0;
  *(_QWORD*)(v3 + 88) = 0;
  *(_QWORD*)(v3 + 96) = 0;
  *(_QWORD*)v3 = v5 + 16;
  *(_QWORD*)(v3 + 8) = a1;
  LOBYTE(v5) = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                    memory_order_acquire);
  v6 = GameData_212df08;
  if ((v5 & 1) == 0) {
    v3 = __cxa_guard_acquire(GameData_212df10);
    if ((_DWORD)v3 != 0) {
      *v6 = wld_Crc32(0, "ModelModule", 11);
      v3 = __cxa_guard_release(GameData_212df10);
    }
  }
  v7 = *(_QWORD*)(a1 + 512);
  v8 = v7;
  do {
    v9 = *(_DWORD*)(v8 - 16);
    v8 -= 16;
    v7 -= 16;
  } while (v9 != *v6);
  v10 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v7 + 8) + 24LL) + 168LL);
  if (v10 != 0) {
    *(_QWORD*)(v4 + 96) = *(_QWORD*)(v10 + 32);
  }
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ff48,
                                  memory_order_acquire);
  v12 = GameData_212ff40;
  if ((explicit & 1) == 0) {
    v3 = __cxa_guard_acquire(GameData_212ff48);
    if ((_DWORD)v3 != 0) {
      *v12 = wld_Crc32(0, "ClothWindModule", 15);
      v3 = __cxa_guard_release(GameData_212ff48);
    }
  }
  v13 = *v12;
  v14 = *(_QWORD*)(a1 + 504);
  v15 = *(_QWORD*)(a1 + 512);
  v16 = v15;
  v55 = v13;
  v56 = v4;
  while (v16 != v14) {
    v17 = *(_DWORD*)(v16 - 16);
    v16 -= 16;
    if (v17 == v13) {
      if ((*(_BYTE*)(v4 + 16) & 1) != 0) {
        goto LABEL_25;
      }
      goto LABEL_19;
    }
  }
  if (v14 == v15 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v14) <= 0x6F) {
    v18 = fw_memory_HeapManager_Allocate(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v18;
    *(_QWORD*)(a1 + 512) = v18;
    *(_QWORD*)(a1 + 520) = v18 + 112;
    if (v15 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free(*v2 + v20, v19);
    }
  }
  v3 = GameRoutine_98f140(a1 + 504, &v55);
  if ((*(_BYTE*)(v4 + 16) & 1) == 0) {
  LABEL_19:
    *(_BYTE*)(v4 + 16) = 1;
    *(_BYTE*)(v4 + 17) &= ~2u;
    *(_BYTE*)(v4 + 18) &= ~2u;
    *(_BYTE*)(v4 + 19) &= ~2u;
    *(_BYTE*)(v4 + 20) &= ~2u;
    v21 = *(_BYTE**)(v4 + 8);
    v21[632] = 0;
    v21[664] = 0;
    v21[696] = 0;
    v21[728] = 0;
    v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 64LL))(v4);
    v22 = *(_BYTE**)(v4 + 8);
    v23 = v22[300] == 3 && v22[301] == 3;
    if (v23 || v22[302] == 1) {
      v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 72LL))(v4);
    }
  }

LABEL_25:
  v24 = *(__int64**)(a1 + 536);
  v25 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v24 >= v25) {
    v27 = *(_QWORD*)(a1 + 528);
    v28 = (char*)v24 - v27;
    v29 = ((__int64)v24 - v27) >> 3;
    v30 = v29 + 1;
    if ((unsigned __int64)(v29 + 1) >> 61 != 0) {
      goto LABEL_62;
    }
    v31 = v25 - v27;
    if (v31 >> 2 > v30) {
      v30 = v31 >> 2;
    }
    if ((unsigned __int64)v31 >= 0x7FFFFFFFFFFFFFF8LL) {
      v32 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v32 = v30;
    }
    if (v32 != 0) {
      if (v32 >> 61 != 0) {
        goto LABEL_63;
      }
      v33 = fw_memory_HeapManager_Allocate(*v2, 8 * v32, 16, 0);
    }
    else {
      v33 = 0;
    }
    v34 = v33 + 8 * v32;
    v35 = (char*)v24 - v27;
    v36 = (__int64)&v28[v33 + -8 * v29];
    *(_QWORD*)&v28[v33] = v4;
    v26 = (__int64)&v28[v33 + 8];
    v3 = memcpy(v36, v27, v35);
    *(_QWORD*)(a1 + 528) = v36;
    *(_QWORD*)(a1 + 536) = v26;
    *(_QWORD*)(a1 + 544) = v34;
    if (v27 != 0) {
      v38 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v38 = 56;
      }
      v3 = nn_mem_StandardAllocator_Free(*v2 + v38, v37);
    }
  }
  else {
    *v24 = v4;
    v26 = (__int64)(v24 + 1);
  }
  *(_QWORD*)(a1 + 536) = v26;
  v39 = *(__int64**)(a1 + 560);
  v40 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v39 < v40) {
    *v39 = v4;
    v41 = (__int64)(v39 + 1);
    goto LABEL_57;
  }
  v42 = *(_QWORD*)(a1 + 552);
  v43 = (char*)v39 - v42;
  v44 = ((__int64)v39 - v42) >> 3;
  v45 = v44 + 1;
  if ((unsigned __int64)(v44 + 1) >> 61 != 0) {
  LABEL_62:
    GameRoutine_98f290(v3);
  }
  v46 = v40 - v42;
  if (v46 >> 2 > v45) {
    v45 = v46 >> 2;
  }
  if ((unsigned __int64)v46 >= 0x7FFFFFFFFFFFFFF8LL) {
    v47 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v47 = v45;
  }
  if (v47 != 0) {
    if (v47 >> 61 == 0) {
      v48 = fw_memory_HeapManager_Allocate(*v2, 8 * v47, 16, 0);
      goto LABEL_53;
    }
  LABEL_63:
    GameRoutine_60a210(v3);
  }
  v48 = 0;

LABEL_53:
  v49 = v48 + 8 * v47;
  v50 = (char*)v39 - v42;
  v51 = (__int64)&v43[v48 + -8 * v44];
  *(_QWORD*)&v43[v48] = v4;
  v41 = (__int64)&v43[v48 + 8];
  memcpy(v51, v42, v50);
  *(_QWORD*)(a1 + 552) = v51;
  *(_QWORD*)(a1 + 560) = v41;
  *(_QWORD*)(a1 + 568) = v49;
  if (v42 != 0) {
    v53 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v53 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v53, v52);
  }

LABEL_57:
  *(_QWORD*)(a1 + 560) = v41;
  GameRoutine_a8c0c0(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex(GameData_212df28);
  return v4;
}

__int64 CharacterBuilder_1083180(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  long double v10;
  __int64 v11;
  _BYTE* v12;
  _BYTE* v13;
  bool v14;
  __int64* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  char* v26;
  __int64 v27;
  long double v28;
  __int64 v29;
  __int64* v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  char* v41;
  __int64 v42;
  long double v43;
  __int64 v44;
  int v46;
  __int64 v47;

  nn_os_LockMutex(&GameData_2167580);
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      72, 16, 0);
  *(_BYTE*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 32) = 0;
  *(_QWORD*)(v3 + 40) = 0;
  v4 = v3;
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_DWORD*)(v3 + 17) = 33686018;
  *(_QWORD*)v3 = game_character_WeaponHoldModule_vtable;
  *(_QWORD*)(v3 + 8) = a1;
  *(_DWORD*)(v3 + 24) = -1;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22356c8,
                            memory_order_acquire) &
       1) == 0) {
    v3 = __cxa_guard_acquire(&GameData_22356c8);
    if ((_DWORD)v3 != 0) {
      GameData_22356c0 = wld_Crc32(0, "WeaponHoldModule", 16);
      v3 = __cxa_guard_release(&GameData_22356c8);
    }
  }
  v5 = *(_QWORD*)(a1 + 504);
  v6 = *(_QWORD*)(a1 + 512);
  v7 = v6;
  v46 = GameData_22356c0;
  v47 = v4;
  while (v7 != v5) {
    v8 = *(_DWORD*)(v7 - 16);
    v7 -= 16;
    if (v8 == GameData_22356c0) {
      if ((*(_BYTE*)(v4 + 16) & 1) != 0) {
        goto LABEL_20;
      }
      goto LABEL_14;
    }
  }
  if (v5 == v6 && (unsigned __int64)(*(_QWORD*)(a1 + 520) - v5) <= 0x6F) {
    v9 = fw_memory_HeapManager_Allocate(*v2, 112, 16, 0);
    *(_QWORD*)(a1 + 504) = v9;
    *(_QWORD*)(a1 + 512) = v9;
    *(_QWORD*)(a1 + 520) = v9 + 112;
    if (v6 != 0) {
      v11 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(*v2 + v11, v10);
    }
  }
  v3 = GameRoutine_98f140(a1 + 504, &v46);
  if ((*(_BYTE*)(v4 + 16) & 1) == 0) {
  LABEL_14:
    *(_BYTE*)(v4 + 16) = 1;
    *(_BYTE*)(v4 + 17) &= ~2u;
    *(_BYTE*)(v4 + 18) &= ~2u;
    *(_BYTE*)(v4 + 19) &= ~2u;
    *(_BYTE*)(v4 + 20) &= ~2u;
    v12 = *(_BYTE**)(v4 + 8);
    v12[632] = 0;
    v12[664] = 0;
    v12[696] = 0;
    v12[728] = 0;
    v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 64LL))(v4);
    v13 = *(_BYTE**)(v4 + 8);
    v14 = v13[300] == 3 && v13[301] == 3;
    if (v14 || v13[302] == 1) {
      v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 72LL))(v4);
    }
  }

LABEL_20:
  v15 = *(__int64**)(a1 + 536);
  v16 = *(_QWORD*)(a1 + 544);
  if ((unsigned __int64)v15 >= v16) {
    v18 = *(_QWORD*)(a1 + 528);
    v19 = (char*)v15 - v18;
    v20 = ((__int64)v15 - v18) >> 3;
    v21 = v20 + 1;
    if ((unsigned __int64)(v20 + 1) >> 61 != 0) {
      goto LABEL_55;
    }
    v22 = v16 - v18;
    if (v22 >> 2 > v21) {
      v21 = v22 >> 2;
    }
    if ((unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFF8LL) {
      v23 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v23 = v21;
    }
    if (v23 != 0) {
      if (v23 >> 61 != 0) {
        goto LABEL_56;
      }
      v24 = fw_memory_HeapManager_Allocate(*v2, 8 * v23, 16, 0);
    }
    else {
      v24 = 0;
    }
    v25 = v24 + 8 * v23;
    v26 = (char*)v15 - v18;
    v27 = (__int64)&v19[v24 + -8 * v20];
    *(_QWORD*)&v19[v24] = v4;
    v17 = (__int64)&v19[v24 + 8];
    v3 = memcpy(v27, v18, v26);
    *(_QWORD*)(a1 + 528) = v27;
    *(_QWORD*)(a1 + 536) = v17;
    *(_QWORD*)(a1 + 544) = v25;
    if (v18 != 0) {
      v29 = 128;
      if (*(_QWORD*)(*v2 + 200LL) == 0) {
        v29 = 56;
      }
      v3 = nn_mem_StandardAllocator_Free(*v2 + v29, v28);
    }
  }
  else {
    *v15 = v4;
    v17 = (__int64)(v15 + 1);
  }
  *(_QWORD*)(a1 + 536) = v17;
  v30 = *(__int64**)(a1 + 560);
  v31 = *(_QWORD*)(a1 + 568);
  if ((unsigned __int64)v30 < v31) {
    *v30 = v4;
    v32 = (__int64)(v30 + 1);
    goto LABEL_52;
  }
  v33 = *(_QWORD*)(a1 + 552);
  v34 = (char*)v30 - v33;
  v35 = ((__int64)v30 - v33) >> 3;
  v36 = v35 + 1;
  if ((unsigned __int64)(v35 + 1) >> 61 != 0) {
  LABEL_55:
    GameRoutine_98f290(v3);
  }
  v37 = v31 - v33;
  if (v37 >> 2 > v36) {
    v36 = v37 >> 2;
  }
  if ((unsigned __int64)v37 >= 0x7FFFFFFFFFFFFFF8LL) {
    v38 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v38 = v36;
  }
  if (v38 != 0) {
    if (v38 >> 61 == 0) {
      v39 = fw_memory_HeapManager_Allocate(*v2, 8 * v38, 16, 0);
      goto LABEL_48;
    }
  LABEL_56:
    GameRoutine_60a210(v3);
  }
  v39 = 0;

LABEL_48:
  v40 = v39 + 8 * v38;
  v41 = (char*)v30 - v33;
  v42 = (__int64)&v34[v39 + -8 * v35];
  *(_QWORD*)&v34[v39] = v4;
  v32 = (__int64)&v34[v39 + 8];
  memcpy(v42, v33, v41);
  *(_QWORD*)(a1 + 552) = v42;
  *(_QWORD*)(a1 + 560) = v32;
  *(_QWORD*)(a1 + 568) = v40;
  if (v33 != 0) {
    v44 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v44, v43);
  }

LABEL_52:
  *(_QWORD*)(a1 + 560) = v32;
  GameRoutine_a8c0c0(a1);
  *(_BYTE*)(a1 + 576) = 1;
  nn_os_UnlockMutex(GameData_212df28);
  return v4;
}

__int64 CharacterBuilder_1083580(__int64 result, __int64 a2, __int64 a3)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  _BYTE v17[4];

  if (a2 != 0) {
    v4 = (_QWORD*)result;
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212ed90,
                              memory_order_acquire) &
         1) == 0) {
      v15 = a3;
      result = __cxa_guard_acquire(&GameData_220f868);
      a3 = v15;
      if ((_DWORD)result != 0) {
        GameData_220f860 = wld_Crc32(0, "AnimLayerCtrlModule", 19);
        result = __cxa_guard_release(&GameData_220f868);
        a3 = v15;
      }
    }
    v5 = *(_QWORD*)(a3 + 512);
    v6 = v5;
    while (v6 != *(_QWORD*)(a3 + 504)) {
      v7 = *(_DWORD*)(v6 - 16);
      v6 -= 16;
      v5 -= 16;
      if (v7 == GameData_220f860) {
        if (*(_QWORD*)(a3 + 512) != v5) {
          v8 = *(_QWORD*)(v5 + 8);
          if (v8 != 0) {
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4d48,
                                      memory_order_acquire) &
                 1) == 0) {
              v16 = v8;
              v14 = __cxa_guard_acquire(&GameData_21f4d48);
              v8 = v16;
              if (v14 != 0) {
                GameData_21f4d44 = wld_Crc32(0, "ModelModule", 11);
                __cxa_guard_release(&GameData_21f4d48);
                v8 = v16;
              }
            }
            v9 = *(_QWORD*)(a2 + 512);
            v10 = v9;
            while (v10 != *(_QWORD*)(a2 + 504)) {
              v11 = *(_DWORD*)(v10 - 16);
              v10 -= 16;
              v9 -= 16;
              if (v11 == GameData_21f4d44) {
                if (*(_QWORD*)(a2 + 512) != v9) {
                  v12 = *(_QWORD*)(v9 + 8);
                  if (v12 != 0) {
                    v13 = *(_QWORD*)(v12 + 24);
                    goto LABEL_16;
                  }
                }
                break;
              }
            }
            v13 = 0;
          LABEL_16:
            AnimCtrlModule_a77d60(*(_QWORD*)(v8 + 24), v13);
            v17[0] = 0;
            GameRoutine_1087f80(a2, v4);
            if (v4[1] != 0 && v4[2] != 0) {
              GameRoutine_10873c0(a2);
            }
            result = GameRoutine_10877a0(a2);
            if (v4[3] != 0) {
              return GameRoutine_1087ba0(a2, v4, v4 + 3, v17);
            }
          }
        }
        return result;
      }
    }
  }
  return result;
}

__int64 CharacterBuilder_1083780(__int64 a1, _BYTE* a2)
{
  _BYTE* v2;
  __int64 result;
  __int64 v5;

  if (a2 == nullptr) {
    return 0;
  }
  v2 = a2;
  if (*a2 != 45 || (v2 = a2 + 1, (*(_BYTE*)(a1 + 341) & 4) != 0)) {
    result = GameRoutine_10a0100(*(_QWORD*)(a1 + 448), v2);
    if (result != 0) {
      return result;
    }
    v5 = *(_QWORD*)(a1 + 408);
  }
  else {
    result = GameRoutine_10a0100(*(_QWORD*)(a1 + 408), v2);
    if (result != 0) {
      return result;
    }
    v5 = *(_QWORD*)(a1 + 448);
  }
  result = GameRoutine_10a0100(v5, v2);
  if (result == 0) {
    result = GameRoutine_10a0100(*(_QWORD*)(a1 + 416), v2);
    if (result == 0) {
      result = GameRoutine_10a0100(*(_QWORD*)(a1 + 440), v2);
      if (result == 0) {
        return GameRoutine_10a0100(*(_QWORD*)(a1 + 432), v2);
      }
    }
  }
  return result;
}

_QWORD* CharacterBuilder_1083bf0(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v6;
  __int64 v8;
  __int64 v10;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;

  v1 = result[1];
  v2 = result[51];
  if (v2 != 0 && (*(_QWORD*)(v2 + 768) != v1 || *(_DWORD*)(v2 + 784) != 7)) {
    *(_QWORD*)(v2 + 768) = 0;
    *(_QWORD*)(v2 + 776) = 0;
    *(_QWORD*)(v2 + 768) = v1;
    *(_DWORD*)(v2 + 784) = 7;
    *(_DWORD*)(v2 + 296) |= 4u;
  }
  v4 = result[52];
  if (v4 != 0 && (*(_QWORD*)(v4 + 768) != v1 || *(_DWORD*)(v4 + 784) != 7)) {
    *(_QWORD*)(v4 + 768) = 0;
    *(_QWORD*)(v4 + 776) = 0;
    *(_QWORD*)(v4 + 768) = v1;
    *(_DWORD*)(v4 + 784) = 7;
    *(_DWORD*)(v4 + 296) |= 4u;
  }
  v6 = result[53];
  if (v6 != 0 && (*(_QWORD*)(v6 + 768) != v1 || *(_DWORD*)(v6 + 784) != 7)) {
    *(_QWORD*)(v6 + 768) = 0;
    *(_QWORD*)(v6 + 776) = 0;
    *(_QWORD*)(v6 + 768) = v1;
    *(_DWORD*)(v6 + 784) = 7;
    *(_DWORD*)(v6 + 296) |= 4u;
  }
  v8 = result[56];
  if (v8 != 0 && (*(_QWORD*)(v8 + 768) != v1 || *(_DWORD*)(v8 + 784) != 7)) {
    *(_QWORD*)(v8 + 768) = 0;
    *(_QWORD*)(v8 + 776) = 0;
    *(_QWORD*)(v8 + 768) = v1;
    *(_DWORD*)(v8 + 784) = 7;
    *(_DWORD*)(v8 + 296) |= 4u;
  }
  v10 = result[57];
  if (v10 != 0 && (*(_QWORD*)(v10 + 768) != v1 || *(_DWORD*)(v10 + 784) != 7)) {
    *(_QWORD*)(v10 + 768) = 0;
    *(_QWORD*)(v10 + 776) = 0;
    *(_QWORD*)(v10 + 768) = v1;
    *(_DWORD*)(v10 + 784) = 7;
    *(_DWORD*)(v10 + 296) |= 4u;
  }
  v12 = result[58];
  if (v12 != 0 && (*(_QWORD*)(v12 + 768) != v1 || *(_DWORD*)(v12 + 784) != 7)) {
    *(_QWORD*)(v12 + 768) = 0;
    *(_QWORD*)(v12 + 776) = 0;
    *(_QWORD*)(v12 + 768) = v1;
    *(_DWORD*)(v12 + 784) = 7;
    *(_DWORD*)(v12 + 296) |= 4u;
  }
  v14 = result[63];
  if ((v14 & 1) != 0) {
    v15 = result[59];
    if (v15 != 0 &&
        (*(_QWORD*)(v15 + 768) != v1 || *(_DWORD*)(v15 + 784) != 7)) {
      *(_QWORD*)(v15 + 768) = 0;
      *(_QWORD*)(v15 + 776) = 0;
      *(_QWORD*)(v15 + 768) = v1;
      *(_DWORD*)(v15 + 784) = 7;
      *(_DWORD*)(v15 + 296) |= 4u;
      v14 = result[63];
    }
  }
  if ((v14 & 2) != 0) {
    v16 = result[60];
    if (v16 != 0 &&
        (*(_QWORD*)(v16 + 768) != v1 || *(_DWORD*)(v16 + 784) != 7)) {
      *(_QWORD*)(v16 + 768) = 0;
      *(_QWORD*)(v16 + 776) = 0;
      *(_QWORD*)(v16 + 768) = v1;
      *(_DWORD*)(v16 + 784) = 7;
      *(_DWORD*)(v16 + 296) |= 4u;
      v14 = result[63];
    }
  }
  if ((v14 & 4) != 0) {
    v17 = result[61];
    if (v17 != 0 &&
        (*(_QWORD*)(v17 + 768) != v1 || *(_DWORD*)(v17 + 784) != 7)) {
      *(_QWORD*)(v17 + 768) = 0;
      *(_QWORD*)(v17 + 776) = 0;
      *(_QWORD*)(v17 + 768) = v1;
      *(_DWORD*)(v17 + 784) = 7;
      *(_DWORD*)(v17 + 296) |= 4u;
      v14 = result[63];
    }
  }
  if ((v14 & 8) != 0) {
    v18 = result[62];
    if (v18 != 0 &&
        (*(_QWORD*)(v18 + 768) != v1 || *(_DWORD*)(v18 + 784) != 7)) {
      *(_QWORD*)(v18 + 768) = 0;
      *(_QWORD*)(v18 + 776) = 0;
      *(_QWORD*)(v18 + 768) = v1;
      v19 = *(_DWORD*)(v18 + 296);
      *(_DWORD*)(v18 + 784) = 7;
      *(_DWORD*)(v18 + 296) = v19 | 4;
    }
  }
  return result;
}

__int64 CharacterBuilder_1083e90(_QWORD* a1, __int64 a2)
{
  __int64 v4;
  __int64 result;

  v4 = a1[51];
  result = *(_QWORD*)(a2 + 32);
  if (v4 != 0) {
    if (result == 0) {
      goto LABEL_38;
    }
    (*(void (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    result = *(_QWORD*)(a2 + 32);
  }
  if (a1[52] != 0) {
    if (result == 0) {
      goto LABEL_38;
    }
    (*(void (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    result = *(_QWORD*)(a2 + 32);
  }
  if (a1[53] != 0) {
    if (result == 0) {
      goto LABEL_38;
    }
    (*(void (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    result = *(_QWORD*)(a2 + 32);
  }
  if (a1[54] != 0) {
    if (result == 0) {
      goto LABEL_38;
    }
    (*(void (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    result = *(_QWORD*)(a2 + 32);
  }
  if (a1[55] != 0) {
    if (result == 0) {
      goto LABEL_38;
    }
    (*(void (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    result = *(_QWORD*)(a2 + 32);
  }
  if (a1[56] != 0) {
    if (result == 0) {
      goto LABEL_38;
    }
    (*(void (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    result = *(_QWORD*)(a2 + 32);
  }
  if (a1[57] != 0) {
    if (result == 0) {
      goto LABEL_38;
    }
    (*(void (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    result = *(_QWORD*)(a2 + 32);
  }
  if (a1[58] != 0) {
    if (result == 0) {
      goto LABEL_38;
    }
    (*(void (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    result = *(_QWORD*)(a2 + 32);
  }
  if (a1[59] != 0) {
    if (result == 0) {
      goto LABEL_38;
    }
    (*(void (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    result = *(_QWORD*)(a2 + 32);
  }
  if (a1[60] != 0) {
    if (result == 0) {
      goto LABEL_38;
    }
    (*(void (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    result = *(_QWORD*)(a2 + 32);
  }
  if (a1[61] != 0) {
    if (result == 0) {
      goto LABEL_38;
    }
    (*(void (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    result = *(_QWORD*)(a2 + 32);
  }
  if (a1[62] != 0) {
    if (result != 0) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    }
  LABEL_38:
    GameRoutine_60a310(result);
  }
  return result;
}

_QWORD* CharacterBuilder_1084020(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  _QWORD* v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v19;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v25;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v31;
  __int64 v33;
  __int64 v34;
  int v35;
  int v36;
  int v37;
  __int64 v38;
  int v39;
  __int64 v40;
  _QWORD* v41;
  _QWORD* v42;

  v1 = result[54];
  if (v1 != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22356c8,
                              memory_order_acquire) &
         1) == 0) {
      v41 = result;
      v40 = v1;
      v36 = __cxa_guard_acquire(&GameData_22356c8);
      v1 = v40;
      v37 = v36;
      result = v41;
      if (v37 != 0) {
        GameData_22356c0 = wld_Crc32(0, "WeaponHoldModule", 16);
        __cxa_guard_release(&GameData_22356c8);
        v1 = v40;
        result = v41;
      }
    }
    v3 = *(_QWORD*)(v1 + 504);
    v2 = *(_QWORD*)(v1 + 512);
    v4 = v2;
    v5 = v2;
    while (v5 != v3) {
      v6 = *(_DWORD*)(v5 - 16);
      v5 -= 16;
      v4 -= 16;
      if (v6 == GameData_22356c0) {
        if (v2 != v4 && *(_QWORD*)(v4 + 8) != 0) {
          v7 = result;
          GameRoutine_112aaa0(*(_QWORD*)(v4 + 8));
          result = v7;
        }
        break;
      }
    }
  }
  v8 = result[55];
  if (v8 != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22356c8,
                              memory_order_acquire) &
         1) == 0) {
      v42 = result;
      v38 = v8;
      v39 = __cxa_guard_acquire(&GameData_22356c8);
      result = v42;
      v8 = v38;
      if (v39 != 0) {
        GameData_22356c0 = wld_Crc32(0, "WeaponHoldModule", 16);
        __cxa_guard_release(&GameData_22356c8);
        result = v42;
        v8 = v38;
      }
    }
    v10 = *(_QWORD*)(v8 + 504);
    v9 = *(_QWORD*)(v8 + 512);
    v11 = v9;
    v12 = v9;
    while (v12 != v10) {
      v13 = *(_DWORD*)(v12 - 16);
      v12 -= 16;
      v11 -= 16;
      if (v13 == GameData_22356c0) {
        if (v9 != v11 && *(_QWORD*)(v11 + 8) != 0) {
          v14 = result;
          GameRoutine_112aaa0(*(_QWORD*)(v11 + 8));
          result = v14;
        }
        break;
      }
    }
  }
  v15 = result[51];
  v16 = *(_DWORD*)(v15 + 296);
  *(_DWORD*)(v15 + 784) = 0;
  *(_QWORD*)(v15 + 768) = 0;
  *(_QWORD*)(v15 + 776) = 0;
  *(_DWORD*)(v15 + 296) = v16 & 0xFFFFFFFB;
  v17 = result[52];
  if (v17 != 0 &&
      (*(_QWORD*)(v17 + 768) != v15 || *(_DWORD*)(v17 + 784) != 7)) {
    *(_QWORD*)(v17 + 768) = 0;
    *(_QWORD*)(v17 + 776) = 0;
    *(_QWORD*)(v17 + 768) = v15;
    *(_DWORD*)(v17 + 784) = 7;
    *(_DWORD*)(v17 + 296) |= 4u;
  }
  v19 = result[53];
  if (v19 != 0 &&
      (*(_QWORD*)(v19 + 768) != v15 || *(_DWORD*)(v19 + 784) != 7)) {
    *(_QWORD*)(v19 + 768) = 0;
    *(_QWORD*)(v19 + 776) = 0;
    *(_QWORD*)(v19 + 768) = v15;
    *(_DWORD*)(v19 + 784) = 7;
    *(_DWORD*)(v19 + 296) |= 4u;
  }
  v21 = result[56];
  if (v21 != 0) {
    v22 = *(_DWORD*)(v21 + 296);
    *(_DWORD*)(v21 + 784) = 0;
    *(_QWORD*)(v21 + 776) = 0;
    *(_QWORD*)(v21 + 768) = 0;
    *(_DWORD*)(v21 + 296) = v22 & 0xFFFFFFFB;
    v23 = result[57];
    if (v23 != 0 &&
        (*(_QWORD*)(v23 + 768) != v21 || *(_DWORD*)(v23 + 784) != 7)) {
      *(_QWORD*)(v23 + 768) = 0;
      *(_QWORD*)(v23 + 776) = 0;
      *(_QWORD*)(v23 + 768) = v21;
      *(_DWORD*)(v23 + 784) = 7;
      *(_DWORD*)(v23 + 296) |= 4u;
    }
    v25 = result[58];
    if (v25 != 0 &&
        (*(_QWORD*)(v25 + 768) != v21 || *(_DWORD*)(v25 + 784) != 7)) {
      *(_QWORD*)(v25 + 768) = 0;
      *(_QWORD*)(v25 + 776) = 0;
      *(_QWORD*)(v25 + 768) = v21;
      v27 = *(_DWORD*)(v25 + 296);
      *(_DWORD*)(v25 + 784) = 7;
      *(_DWORD*)(v25 + 296) = v27 | 4;
    }
  }
  v28 = result[63];
  if ((v28 & 1) != 0) {
    v29 = result[59];
    if (v29 != 0 &&
        (*(_QWORD*)(v29 + 768) != v15 || *(_DWORD*)(v29 + 784) != 7)) {
      *(_QWORD*)(v29 + 768) = 0;
      *(_QWORD*)(v29 + 776) = 0;
      *(_QWORD*)(v29 + 768) = v15;
      *(_DWORD*)(v29 + 784) = 7;
      *(_DWORD*)(v29 + 296) |= 4u;
      v28 = result[63];
    }
  }
  if ((v28 & 2) != 0) {
    v31 = result[60];
    if (v31 != 0 &&
        (*(_QWORD*)(v31 + 768) != v15 || *(_DWORD*)(v31 + 784) != 7)) {
      *(_QWORD*)(v31 + 768) = 0;
      *(_QWORD*)(v31 + 776) = 0;
      *(_QWORD*)(v31 + 768) = v15;
      *(_DWORD*)(v31 + 784) = 7;
      *(_DWORD*)(v31 + 296) |= 4u;
      v28 = result[63];
    }
  }
  if ((v28 & 4) != 0) {
    v33 = result[61];
    if (v33 != 0 &&
        (*(_QWORD*)(v33 + 768) != v15 || *(_DWORD*)(v33 + 784) != 7)) {
      *(_QWORD*)(v33 + 768) = 0;
      *(_QWORD*)(v33 + 776) = 0;
      *(_QWORD*)(v33 + 768) = v15;
      *(_DWORD*)(v33 + 784) = 7;
      *(_DWORD*)(v33 + 296) |= 4u;
      v28 = result[63];
    }
  }
  if ((v28 & 8) != 0) {
    v34 = result[62];
    if (v34 != 0 &&
        (*(_QWORD*)(v34 + 768) != v15 || *(_DWORD*)(v34 + 784) != 7)) {
      *(_QWORD*)(v34 + 768) = 0;
      *(_QWORD*)(v34 + 776) = 0;
      *(_QWORD*)(v34 + 768) = v15;
      v35 = *(_DWORD*)(v34 + 296);
      *(_DWORD*)(v34 + 784) = 7;
      *(_DWORD*)(v34 + 296) = v35 | 4;
    }
  }
  return result;
}

__int64 CharacterBuilder_1084400(__int64 result, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 i;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
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
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;

  v2 = *(_QWORD*)(result + 408);
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212eab0,
                            memory_order_acquire) &
       1) == 0) {
    v41 = a2;
    v40 = v2;
    result = __cxa_guard_acquire(&GameData_2203510);
    v2 = v40;
    a2 = v41;
    if ((_DWORD)result != 0) {
      GameData_2203508 = wld_Crc32(0, "LODModule", 9);
      result = __cxa_guard_release(&GameData_2203510);
      v2 = v40;
      a2 = v41;
    }
  }
  v4 = *(_QWORD*)(v2 + 504);
  v3 = *(_QWORD*)(v2 + 512);
  v5 = v3;
  for (i = v3; i != v4; i -= 16) {
    v7 = *(_DWORD*)(i - 16);
    v5 -= 16;
    if (v7 == GameData_2203508) {
      if (v3 != v5) {
        v8 = *(_QWORD*)(v5 + 8);
        if (v8 != 0) {
          v10 = *(_QWORD*)(v8 + 48);
          v9 = *(_QWORD*)(v8 + 56);
          v11 = v9 - v10;
          v12 = (v9 - v10) >> 3;
          if (a2 < 0) {
            if (*(_BYTE*)(v8 + 116) == 1) {
              *(_BYTE*)(v8 + 116) = 0;
            }
            if (v9 != v10) {
              v16 = (v11 >> 3) & 3;
              if (v12 >= 4) {
                v17 = 0;
                do {
                  v27 = *(_QWORD*)(*(_QWORD*)(v8 + 40) + 56LL) +
                        224LL * *(_QWORD*)(*(_QWORD*)(v8 + 48) + 8 * v17);
                  *(_QWORD*)(v8 + 96) = v27;
                  v28 = *(_QWORD*)(v27 + 192);
                  *(_DWORD*)(v28 + 12) = -2;
                  *(_BYTE*)(v28 + 20) = 0;
                  *(_QWORD*)(v8 + 96) = 0;
                  v29 = *(_QWORD*)(*(_QWORD*)(v8 + 40) + 56LL) +
                        224LL * *(_QWORD*)(*(_QWORD*)(v8 + 48) + 8 * v17 + 8);
                  *(_QWORD*)(v8 + 96) = v29;
                  v30 = *(_QWORD*)(v29 + 192);
                  *(_DWORD*)(v30 + 12) = -2;
                  *(_BYTE*)(v30 + 20) = 0;
                  *(_QWORD*)(v8 + 96) = 0;
                  v31 = *(_QWORD*)(*(_QWORD*)(v8 + 40) + 56LL) +
                        224LL * *(_QWORD*)(*(_QWORD*)(v8 + 48) + 8 * v17 + 16);
                  *(_QWORD*)(v8 + 96) = v31;
                  v32 = *(_QWORD*)(v31 + 192);
                  *(_DWORD*)(v32 + 12) = -2;
                  *(_BYTE*)(v32 + 20) = 0;
                  *(_QWORD*)(v8 + 96) = 0;
                  v33 = *(_QWORD*)(v8 + 48) + 8 * v17;
                  v17 += 4;
                  v34 = *(_QWORD*)(*(_QWORD*)(v8 + 40) + 56LL) +
                        224LL * *(_QWORD*)(v33 + 24);
                  *(_QWORD*)(v8 + 96) = v34;
                  v35 = *(_QWORD*)(v34 + 192);
                  *(_DWORD*)(v35 + 12) = -2;
                  *(_BYTE*)(v35 + 20) = 0;
                  *(_QWORD*)(v8 + 96) = 0;
                } while ((v12 & 0xFFFFFFFFFFFFFFFCLL) != v17);
              }
              else {
                v17 = 0;
              }
              if (v16 != 0) {
                v36 = 8 * v17;
                do {
                  --v16;
                  v37 = *(_QWORD*)(*(_QWORD*)(v8 + 48) + v36);
                  v36 += 8;
                  v38 = *(_QWORD*)(*(_QWORD*)(v8 + 40) + 56LL) + 224 * v37;
                  *(_QWORD*)(v8 + 96) = v38;
                  v39 = *(_QWORD*)(v38 + 192);
                  *(_DWORD*)(v39 + 12) = -2;
                  *(_BYTE*)(v39 + 20) = 0;
                  *(_QWORD*)(v8 + 96) = 0;
                } while (v16 != 0);
              }
            }
          }
          else {
            *(_DWORD*)(v8 + 112) = a2;
            *(_BYTE*)(v8 + 116) = 1;
            if (v9 != v10) {
              if (v11 == 8) {
                v13 = 0;
              }
              else {
                v18 = v12 & 0xFFFFFFFFFFFFFFFELL;
                v19 = 0;
                v13 = 0;
                do {
                  v22 = *(_QWORD*)(*(_QWORD*)(v8 + 40) + 56LL) +
                        224LL * *(_QWORD*)(*(_QWORD*)(v8 + 48) + 8 * v13);
                  *(_QWORD*)(v8 + 96) = v22;
                  v23 = *(_QWORD*)(v22 + 192);
                  if ((*(_BYTE*)(v23 + 22) & 1) == 0 &&
                      (*(_BYTE*)(v23 + 21) & 1) == 0) {
                    *(_DWORD*)v23 = a2;
                    *(_DWORD*)(v23 + 4) = a2;
                    *(_DWORD*)(v23 + 8) = 1;
                  }
                  *(_DWORD*)(v23 + 12) = a2;
                  *(_BYTE*)(v23 + 20) = 1;
                  v24 = *(_QWORD*)(v8 + 136);
                  *(_QWORD*)(v8 + 96) = 0;
                  *(_BYTE*)(v24 + v19) = 0;
                  v25 = *(_QWORD*)(*(_QWORD*)(v8 + 40) + 56LL) +
                        224LL * *(_QWORD*)(*(_QWORD*)(v8 + 48) + 8 * v13 + 8);
                  *(_QWORD*)(v8 + 96) = v25;
                  v26 = *(_QWORD*)(v25 + 192);
                  if ((*(_BYTE*)(v26 + 22) & 1) == 0 &&
                      (*(_BYTE*)(v26 + 21) & 1) == 0) {
                    *(_DWORD*)v26 = a2;
                    *(_DWORD*)(v26 + 4) = a2;
                    *(_DWORD*)(v26 + 8) = 1;
                  }
                  *(_DWORD*)(v26 + 12) = a2;
                  *(_BYTE*)(v26 + 20) = 1;
                  v13 += 2;
                  v20 = *(_QWORD*)(v8 + 136);
                  *(_QWORD*)(v8 + 96) = 0;
                  v21 = v20 + v19;
                  v19 += 6;
                  *(_BYTE*)(v21 + 3) = 0;
                } while (v18 != v13);
              }
              if ((v11 & 8) != 0) {
                v14 = *(_QWORD*)(*(_QWORD*)(v8 + 40) + 56LL) +
                      224LL * *(_QWORD*)(*(_QWORD*)(v8 + 48) + 8 * v13);
                *(_QWORD*)(v8 + 96) = v14;
                v15 = *(_QWORD*)(v14 + 192);
                if ((*(_BYTE*)(v15 + 22) & 1) == 0 &&
                    (*(_BYTE*)(v15 + 21) & 1) == 0) {
                  *(_DWORD*)v15 = a2;
                  *(_DWORD*)(v15 + 4) = a2;
                  *(_DWORD*)(v15 + 8) = 1;
                }
                *(_DWORD*)(v15 + 12) = a2;
                *(_BYTE*)(v15 + 20) = 1;
                *(_QWORD*)(v8 + 96) = 0;
                *(_BYTE*)(*(_QWORD*)(v8 + 136) + 3 * v13) = 0;
              }
            }
          }
        }
      }
      return result;
    }
  }
  return result;
}

__int64 CharacterBuilder_1084780(__int64 result)
{
  __int64 v1;
  atomic_uchar* v2;
  int* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 i;
  int v17;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  v1 = *(_QWORD*)(result + 408);
  v2 = (atomic_uchar*)GameData_212df10;
  v3 = GameData_212df08;
  if (v1 != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                              memory_order_acquire) &
         1) == 0) {
      v23 = result;
      v22 = v1;
      v19 = __cxa_guard_acquire(GameData_212df10);
      v1 = v22;
      v20 = v19;
      result = v23;
      if (v20 != 0) {
        *v3 = wld_Crc32(0, "ModelModule", 11);
        __cxa_guard_release(GameData_212df10);
        v1 = v22;
        result = v23;
      }
    }
    v5 = *(_QWORD*)(v1 + 504);
    v4 = *(_QWORD*)(v1 + 512);
    v6 = v4;
    v7 = v4;
    while (v7 != v5) {
      v8 = *(_DWORD*)(v7 - 16);
      v7 -= 16;
      v6 -= 16;
      if (v8 == *v3) {
        if (v4 != v6) {
          v9 = *(_QWORD*)(v6 + 8);
          if (v9 != 0) {
            v10 = *(_QWORD*)(v9 + 24);
            if (v10 != 0) {
              v11 = result;
              *(_BYTE*)(v10 + 504) = 1;
              GameRoutine_a64140(v10);
              result = v11;
            }
          }
        }
        break;
      }
    }
  }
  v12 = *(_QWORD*)(result + 448);
  if (v12 != 0) {
    if ((atomic_load_explicit(v2, memory_order_acquire) & 1) == 0) {
      v21 = v12;
      result = __cxa_guard_acquire(GameData_212df10);
      v12 = v21;
      if ((_DWORD)result != 0) {
        *v3 = wld_Crc32(0, "ModelModule", 11);
        result = __cxa_guard_release(GameData_212df10);
        v12 = v21;
      }
    }
    v14 = *(_QWORD*)(v12 + 504);
    v13 = *(_QWORD*)(v12 + 512);
    v15 = v13;
    for (i = v13; i != v14; i -= 16) {
      v17 = *(_DWORD*)(i - 16);
      v15 -= 16;
      if (v17 == *v3) {
        if (v13 != v15) {
          v18 = *(_QWORD*)(v15 + 8);
          if (v18 != 0) {
            result = *(_QWORD*)(v18 + 24);
            if (result != 0) {
              *(_BYTE*)(result + 504) = 1;
              return GameRoutine_a64140(result);
            }
          }
        }
        return result;
      }
    }
  }
  return result;
}

__int64 CharacterBuilder_1084a50(__int64 a1, _BYTE* a2)
{
  _BYTE* v2;
  __int64 result;
  __int64 v5;

  if (a2 == nullptr) {
    return 0;
  }
  v2 = a2;
  if (*a2 != 45 || (v2 = a2 + 1, (*(_BYTE*)(a1 + 341) & 4) != 0)) {
    result = GameRoutine_1084b20(*(_QWORD*)(a1 + 448), v2);
    if (result != 0) {
      return result;
    }
    v5 = *(_QWORD*)(a1 + 408);
  }
  else {
    result = GameRoutine_1084b20(*(_QWORD*)(a1 + 408), v2);
    if (result != 0) {
      return result;
    }
    v5 = *(_QWORD*)(a1 + 448);
  }
  result = GameRoutine_1084b20(v5, v2);
  if (result == 0) {
    result = GameRoutine_1084b20(*(_QWORD*)(a1 + 416), v2);
    if (result == 0) {
      result = GameRoutine_1084b20(*(_QWORD*)(a1 + 440), v2);
      if (result == 0) {
        return GameRoutine_1084b20(*(_QWORD*)(a1 + 432), v2);
      }
    }
  }
  return result;
}

__int64 CharacterBuilder_1084db0(__int64 a1, _BYTE* a2)
{
  _BYTE* v2;
  __int64 result;
  __int64 v5;
  __int64 v6;

  v2 = a2;
  if (*a2 != 45 || (v2 = a2 + 1, (*(_BYTE*)(a1 + 341) & 4) != 0)) {
    v6 = *(_QWORD*)(a1 + 448);
    result = GameRoutine_1084ea0(&v6, v2);
    if (result != 0) {
      return result;
    }
    v5 = *(_QWORD*)(a1 + 408);
  }
  else {
    v6 = *(_QWORD*)(a1 + 408);
    result = GameRoutine_1084ea0(&v6, v2);
    if (result != 0) {
      return result;
    }
    v5 = *(_QWORD*)(a1 + 448);
  }
  v6 = v5;
  result = GameRoutine_1084ea0(&v6, v2);
  if (result == 0) {
    v6 = *(_QWORD*)(a1 + 416);
    result = GameRoutine_1084ea0(&v6, v2);
    if (result == 0) {
      v6 = *(_QWORD*)(a1 + 440);
      result = GameRoutine_1084ea0(&v6, v2);
      if (result == 0) {
        v6 = *(_QWORD*)(a1 + 432);
        return GameRoutine_1084ea0(&v6, v2);
      }
    }
  }
  return result;
}

__int64 CharacterBuilder_1085070(__int64 a1, _BYTE* a2)
{
  _BYTE* v2;
  __int64 result;
  __int64 v5;

  if (a2 == nullptr) {
    return 0;
  }
  v2 = a2;
  if (*a2 != 45 || (v2 = a2 + 1, (*(_BYTE*)(a1 + 341) & 4) != 0)) {
    result = GameRoutine_1085140(*(_QWORD*)(a1 + 448), v2);
    if (result != 0) {
      return result;
    }
    v5 = *(_QWORD*)(a1 + 408);
  }
  else {
    result = GameRoutine_1085140(*(_QWORD*)(a1 + 408), v2);
    if (result != 0) {
      return result;
    }
    v5 = *(_QWORD*)(a1 + 448);
  }
  result = GameRoutine_1085140(v5, v2);
  if (result == 0) {
    result = GameRoutine_1085140(*(_QWORD*)(a1 + 416), v2);
    if (result == 0) {
      result = GameRoutine_1085140(*(_QWORD*)(a1 + 440), v2);
      if (result == 0) {
        return GameRoutine_1085140(*(_QWORD*)(a1 + 432), v2);
      }
    }
  }
  return result;
}

void game_character_CharacterBuilder_FullbodyCleanup_lambda0_Invoke(__int64 a1,
                                                                    __int64 a2)
{
  __int64 v2;
  __int64 i;
  int v4;
  int v5;
  __int64 v6;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ec9a0,
                            memory_order_acquire) &
       1) == 0) {
    v6 = a2;
    v5 = __cxa_guard_acquire(&GameData_21ec9a0);
    a2 = v6;
    if (v5 != 0) {
      GameData_21ec998 = wld_Crc32(0, "CharacterMaterial", 17);
      __cxa_guard_release(&GameData_21ec9a0);
      a2 = v6;
    }
  }
  v2 = *(_QWORD*)(a2 + 512);
  for (i = v2; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v4 = *(_DWORD*)(i - 16);
    v2 -= 16;
    if (v4 == GameData_21ec998) {
      if (*(_QWORD*)(a2 + 512) != v2 && *(_QWORD*)(v2 + 8) != 0) {
        GameRoutine_bd92c0();
      }
      return;
    }
  }
}

void game_character_CharacterBuilder_LateUpdate_lambda0_Invoke(__int64 a1,
                                                               __int64 a2)
{
  __int64 v2;
  __int64 i;
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_220f840,
                            memory_order_acquire) &
       1) == 0) {
    v7 = a2;
    v6 = __cxa_guard_acquire(&GameData_220f840);
    a2 = v7;
    if (v6 != 0) {
      GameData_220f838 = wld_Crc32(0, "ClothModule", 11);
      __cxa_guard_release(&GameData_220f840);
      a2 = v7;
    }
  }
  v2 = *(_QWORD*)(a2 + 512);
  for (i = v2; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v4 = *(_DWORD*)(i - 16);
    v2 -= 16;
    if (v4 == GameData_220f838) {
      if (*(_QWORD*)(a2 + 512) != v2) {
        v5 = *(_QWORD*)(v2 + 8);
        if (v5 != 0) {
          *(_WORD*)(v5 + 61) = 1;
        }
      }
      return;
    }
  }
}

void game_character_CharacterBuilder_LateUpdate_lambda1_Invoke(__int64 a1,
                                                               __int64 a2)
{
  __int64 v2;
  __int64 i;
  int v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4d48,
                            memory_order_acquire) &
       1) == 0) {
    v8 = a2;
    v7 = __cxa_guard_acquire(&GameData_21f4d48);
    a2 = v8;
    if (v7 != 0) {
      GameData_21f4d44 = wld_Crc32(0, "ModelModule", 11);
      __cxa_guard_release(&GameData_21f4d48);
      a2 = v8;
    }
  }
  v2 = *(_QWORD*)(a2 + 512);
  for (i = v2; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v4 = *(_DWORD*)(i - 16);
    v2 -= 16;
    if (v4 == GameData_21f4d44) {
      if (*(_QWORD*)(a2 + 512) != v2) {
        v5 = *(_QWORD*)(v2 + 8);
        if (v5 != 0) {
          v6 = *(_QWORD*)(v5 + 24);
          if (v6 != 0) {
            *(_BYTE*)(v6 + 504) = 1;
            GameRoutine_a64140(v6);
          }
        }
      }
      return;
    }
  }
}

void game_character_CharacterBuilder_BuildImpl_lambda3_Invoke(__int64 a1,
                                                              __int64 a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _WORD* v9;
  int v10;
  __int64 v11;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_220f840,
                            memory_order_acquire) &
       1) == 0) {
    v11 = a2;
    v10 = __cxa_guard_acquire(&GameData_220f840);
    a2 = v11;
    if (v10 != 0) {
      GameData_220f838 = wld_Crc32(0, "ClothModule", 11);
      __cxa_guard_release(&GameData_220f840);
      a2 = v11;
    }
  }
  v2 = *(_QWORD*)(a2 + 512);
  v3 = v2;
  while (v3 != *(_QWORD*)(a2 + 504)) {
    v4 = *(_DWORD*)(v3 - 16);
    v3 -= 16;
    v2 -= 16;
    if (v4 == GameData_220f838) {
      if (*(_QWORD*)(a2 + 512) != v2) {
        v5 = *(_QWORD*)(v2 + 8);
        if (v5 != 0) {
          v6 = *(_QWORD*)(v5 + 24);
          v7 = *(_QWORD*)(v5 + 32);
          if (v6 != v7) {
            while (1) {
              v8 = *(_QWORD*)(v6 + 112);
              if ((*(_BYTE*)(v6 + 104) & 1) == 0) {
                v8 = *(_BYTE*)(v6 + 104) >> 1;
              }
              if (v8 == 2) {
                v9 = (*(_BYTE*)(v6 + 104) & 1) != 0 ? *(_WORD**)(v6 + 120)
                                                    : (_WORD*)(v6 + 105);
                if (*v9 == 24916) {
                  break;
                }
              }
              v6 += 176;
              if (v6 == v7) {
                return;
              }
            }
          }
          if (v6 != v7 && v6 != 0) {
            *(_BYTE*)(v6 + 128) = 0;
          }
        }
      }
      return;
    }
  }
}

__int64 game_character_CharacterBuilder_BuildImpl_lambda0_Invoke(__int64 result,
                                                                 __int64 a2)
{
  *(_QWORD*)(a2 + 496) = *(_QWORD*)(*(_QWORD*)(result + 8) + 304LL);
  return result;
}

void game_character_CharacterBuilder_CommitMaterialParams_lambda1_Invoke(
    __int64 a1, __int64 a2)
{
  unsigned __int8 explicit;
  int* v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  int v19;
  _QWORD v20[4];
  _QWORD* v21;
  _QWORD v22[4];
  _QWORD* v23;
  char v24;

  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v3 = GameData_212df08;
  if ((explicit & 1) == 0) {
    v18 = a2;
    v19 = __cxa_guard_acquire(GameData_212df10);
    a2 = v18;
    if (v19 != 0) {
      *v3 = wld_Crc32(0, "ModelModule", 11);
      __cxa_guard_release(GameData_212df10);
      a2 = v18;
    }
  }
  v4 = *(_QWORD*)(a2 + 512);
  v5 = v4;
  while (v5 != *(_QWORD*)(a2 + 504)) {
    v6 = *(_DWORD*)(v5 - 16);
    v5 -= 16;
    v4 -= 16;
    if (v6 == *v3) {
      if (*(_QWORD*)(a2 + 512) == v4) {
        return;
      }
      v7 = *(_QWORD*)(v4 + 8);
      if (v7 == 0) {
        return;
      }
      v8 = *(_QWORD*)(v7 + 24);
      v9 = v22;
      v24 = 0;
      v22[0] = GameData_2007178;
      v22[1] = &v24;
      v23 = v22;
      v10 = *(_QWORD*)(v8 + 616);
      v11 = *(_QWORD*)(v8 + 624);
      if (v10 == v11) {
        goto LABEL_13;
      }
      do {
        v12 = v23;
        LODWORD(v20[0]) = *(_DWORD*)(v10 + 4);
        if (v23 == nullptr) {
        LABEL_25:
          GameRoutine_60a310(v12);
        }
        (*(void (**)(_QWORD*, _QWORD*))(*v23 + 48LL))(v23, v20);
        v10 += 8;
      } while (v10 != v11);
      v9 = v23;
      if (v23 == v22) {
      LABEL_13:
        v13 = 32;
      LABEL_14:
        (*(void (**)(_QWORD*))(*v9 + v13))(v9);
      }
      else if (v23 != nullptr) {
        v13 = 40;
        goto LABEL_14;
      }
      if ((v24 & 1) != 0) {
        return;
      }
      v14 = *(_QWORD*)(v8 + 616);
      v15 = *(_QWORD*)(v8 + 624);
      v16 = v20;
      v20[0] = GameData_2007208;
      v21 = v20;
      if (v14 == v15) {
        goto LABEL_22;
      }
      do {
        v12 = v21;
        if (v21 == nullptr) {
          goto LABEL_25;
        }
        (*(void (**)(_QWORD*, __int64))(*v21 + 48LL))(v21, v14);
        v14 += 8;
      } while (v14 != v15);
      v16 = v21;
      if (v21 == v20) {
      LABEL_22:
        v17 = 32;
      }
      else {
        if (v21 == nullptr) {
          return;
        }
        v17 = 40;
      }
      (*(void (**)(_QWORD*))(*v16 + v17))(v16);
      return;
    }
  }
}

__int64 CharacterBuilder_1089270(__int64 result, _BYTE* a2)
{
  if ((*a2 & 4) != 0) {
    **(_BYTE**)(result + 8) = 1;
  }
  return result;
}

void CharacterBuilder_1089340(__int64 a1, _QWORD* a2)
{
  *a2 = GameData_2007208;
}

void CharacterBuilder_1089370(__int64 a1, _DWORD* a2)
{
  if ((*a2 & 0x8000) == 0) {
    *a2 |= 4u;
  }
}

void game_character_CharacterBuilder_CommitMaterialParams_lambda2_Invoke(
    __int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 i;
  int v4;
  __int64 v5;
  char v6;
  int v7;
  int v8;
  __int64 v9;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22356a8,
                            memory_order_acquire) &
       1) == 0) {
    v9 = a2;
    v8 = __cxa_guard_acquire(&GameData_22356a8);
    a2 = v9;
    if (v8 != 0) {
      GameData_22356a0 = wld_Crc32(0, "ShadowCasterModule", 18);
      __cxa_guard_release(&GameData_22356a8);
      a2 = v9;
    }
  }
  v2 = *(_QWORD*)(a2 + 512);
  for (i = v2; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v4 = *(_DWORD*)(i - 16);
    v2 -= 16;
    if (v4 == GameData_22356a0) {
      if (*(_QWORD*)(a2 + 512) != v2) {
        v5 = *(_QWORD*)(v2 + 8);
        if (v5 != 0) {
          v6 = *(_BYTE*)(v5 + 52);
          *(_QWORD*)(v5 + 40) = 3;
          *(_DWORD*)(v5 + 48) = 1;
          if ((v6 & 1) == 0) {
            *(_BYTE*)(v5 + 52) = 1;
          }
          *(_BYTE*)(v5 + 56) = 1;
          v7 = *(unsigned __int8*)(v5 + 18);
          *(_BYTE*)(v5 + 18) = v7 & 0xFB;
          if (v7 != (v7 & 0xFFFFFFFB)) {
            *(_BYTE*)(*(_QWORD*)(v5 + 8) + 664LL) = 0;
          }
        }
      }
      return;
    }
  }
}

__int64 CharacterBuilder_1089680(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD))(a1 + 8))(*a2);
}

__int64 game_character_CharacterBuilder_SetupLOD_lambda0_Invoke(__int64 result,
                                                                __int64 a2,
                                                                long double a3)
{
  unsigned __int8 explicit;
  int* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  int v36;
  _QWORD v37[4];
  _QWORD* v38;
  _QWORD v39[4];
  _QWORD* v40;
  __int64 v41;

  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v4 = GameData_212df08;
  if ((explicit & 1) == 0) {
    v35 = a2;
    v41 = result;
    v36 = __cxa_guard_acquire(GameData_212df10);
    result = v41;
    a2 = v35;
    if (v36 != 0) {
      *v4 = wld_Crc32(0, "ModelModule", 11);
      __cxa_guard_release(GameData_212df10);
      result = v41;
      a2 = v35;
    }
  }
  v5 = *(_QWORD*)(a2 + 512);
  v6 = v5;
  do {
    if (v6 == *(_QWORD*)(a2 + 504)) {
      return result;
    }
    v7 = *(_DWORD*)(v6 - 16);
    v6 -= 16;
    v5 -= 16;
  } while (v7 != *v4);
  if (*(_QWORD*)(a2 + 512) == v5) {
    return result;
  }
  v8 = *(_QWORD*)(v5 + 8);
  if (v8 == 0 || v8 == **(_QWORD**)(result + 8)) {
    return result;
  }
  v9 = **(_QWORD**)(result + 24);
  if (v8 != **(_QWORD**)(result + 16)) {
    v10 = *(_DWORD*)(v9 + 208);
    v39[0] = v8;
    if (v10 == 1) {
      v11 = 80;
      if (*(_QWORD*)(v8 + 32) == 0) {
        v11 = 72;
      }
      result = GameRoutine_193adc0(v9 + 40, *(_QWORD*)(v8 + v11), 0);
      if ((result & 1) != 0) {
        return GameRoutine_a993a0(v9 + 168, v39, v39);
      }
    }
    return result;
  }
  v12 = *(_QWORD*)(result + 32);
  v13 = *(_DWORD*)(v9 + 208);
  v39[0] = v8;
  if (v13 == 1) {
    v14 = result;
    v15 = 80;
    if (*(_QWORD*)(v8 + 32) == 0) {
      v15 = 72;
    }
    v16 = GameRoutine_193adc0(v9 + 40, *(_QWORD*)(v8 + v15), 1);
    result = v14;
    if ((v16 & 1) != 0) {
      GameRoutine_a993a0(v9 + 168, v39, v39);
      result = v14;
    }
  }
  v17 = *(_QWORD*)(**(_QWORD**)(result + 16) + 24LL);
  if (*(_WORD*)(**(_QWORD**)(v17 + 168) + 58LL) != 0) {
    v18 = result;
    v38 = v37;
    v40 = v39;
    v37[0] = GameData_2007328;
    v37[1] = GameData_212e510;
    v39[0] = GameData_2007328;
    v39[1] = GameData_212e510;
    GameRoutine_a6b620(v39, v17 + 768, a3);
    if (v40 == v39) {
      v19 = 32;
    }
    else {
      if (v40 == nullptr) {
        goto LABEL_25;
      }
      v19 = 40;
    }
    (*(void (**)(__int64))(*v40 + v19))((__int64)v40);
  LABEL_25:
    if (v38 == v37) {
      v20 = 32;
    }
    else {
      if (v38 == nullptr) {
      LABEL_30:
        result = v18;
        goto LABEL_31;
      }
      v20 = 40;
    }
    (*(void (**)(__int64))(*v38 + v20))((__int64)v38);
    goto LABEL_30;
  }
LABEL_31:
  v21 = *(_QWORD*)(v12 + 392);
  v22 = *(_QWORD*)(v12 + 400);
  if (v22 == 0) {
    if (*(_DWORD*)(v21 + 11800) != 1) {
      return result;
    }
    goto LABEL_37;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                            memory_order_relaxed);
  v23 = *(_DWORD*)(v21 + 11800);
  if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v24 = result;
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    std___1___shared_weak_count___release_weak(v22);
    result = v24;
  }
  if (v23 == 1) {
  LABEL_37:
    v25 = **(_QWORD**)(result + 24);
    *(_DWORD*)(v25 + 212) = 2;
    v26 = *(_QWORD*)(v25 + 56) - *(_QWORD*)(v25 + 48);
    if (v26 != 0) {
      v27 = v26 >> 3;
      v28 = 0;
      v29 = (_QWORD*)GameData_2132398[0];
      do {
        v30 = *(_DWORD*)(v25 + 212);
        v31 = *(_QWORD*)(*(_QWORD*)(v25 + 40) + 56LL) +
              224LL * *(_QWORD*)(*(_QWORD*)(v25 + 48) + 8 * v28);
        *(_QWORD*)(v25 + 96) = v31;
        *(_DWORD*)(v31 + 176) = v30;
        if (*(_BYTE*)(v31 + 186) == 1) {
          v32 = *(_QWORD*)(v31 + 192);
          v33 = *(_QWORD*)(v31 + 200);
          if (v32 != v33) {
            v34 = *(_DWORD*)(*v29 + 112LL * v30 + 64) - 1;
            do {
              if ((*(_BYTE*)(v32 + 22) & 1) == 0) {
                *(_DWORD*)v32 = v34;
                *(_DWORD*)(v32 + 4) = v34;
                *(_DWORD*)(v32 + 8) = 1;
              }
              *(_DWORD*)(v32 + 16) = v34;
              *(_BYTE*)(v32 + 21) = 1;
              v32 += 24;
            } while (v32 != v33);
          }
        }
        ++v28;
        *(_QWORD*)(v25 + 96) = 0;
      } while (v28 != v27);
    }
  }
  return result;
}

_QWORD* game_character_CharacterBuilder_SetMaterialColor_lambda0_CloneInto(
    _QWORD* result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;

  *a2 = GameData_20075d8;
  v2 = result[5];
  a2[3] = result[3];
  a2[5] = v2;
  v3 = result[2];
  a2[4] = result[4];
  a2[2] = v3;
  return result;
}

float game_character_CharacterBuilder_SetDitherAlpha_lambda1_Invoke(__int64 a1,
                                                                    __int64 a2)
{
  __int64 v2;
  __int64 i;
  int v4;
  __int64 v5;
  float result;
  int v7;
  __int64 v8;
  __int64 v9;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2235628,
                            memory_order_acquire) &
       1) == 0) {
    v8 = a2;
    v9 = a1;
    v7 = __cxa_guard_acquire(&GameData_2235628);
    a2 = v8;
    a1 = v9;
    if (v7 != 0) {
      GameData_2235620 = wld_Crc32(0, "MultiJointAOVModule", 19);
      __cxa_guard_release(&GameData_2235628);
      a2 = v8;
      a1 = v9;
    }
  }
  v2 = *(_QWORD*)(a2 + 512);
  for (i = v2; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v4 = *(_DWORD*)(i - 16);
    v2 -= 16;
    if (v4 == GameData_2235620) {
      if (*(_QWORD*)(a2 + 512) != v2) {
        v5 = *(_QWORD*)(v2 + 8);
        if (v5 != 0) {
          result = *(float*)(a1 + 8);
          *(float*)(v5 + 96) = result;
        }
      }
      return result;
    }
  }
  return result;
}

#pragma GCC visibility pop
