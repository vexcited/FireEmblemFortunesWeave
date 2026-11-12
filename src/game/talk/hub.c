#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_112d860(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void GameRoutine_efca60(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD);
__int64 GameRoutine_108c540(_QWORD);
__int64 GameRoutine_108c760(_QWORD);
__int64 GameRoutine_10c0490(_QWORD, _QWORD);
__int64 GameRoutine_112daa0(_QWORD);
__int64 GameRoutine_112dfe0(_QWORD, _QWORD);
__int64 GameRoutine_113d7d0(__int64 result, double);
__int64 GameRoutine_119b4e0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_cdeee0(_QWORD, _QWORD);
__int64 GameRoutine_d196c0(_QWORD, _QWORD, float);
__int64 GameRoutine_efaca0(_QWORD, _QWORD);
__int64 GameRoutine_efc8c0(_QWORD, _QWORD);
__int64 HubCharacterNatives_cee710(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   float);
__int64 HubCharacterNatives_cee990(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   _QWORD, float);
__int64 Hub_119b0e0_alt1(_QWORD, _QWORD, _QWORD) __asm__("Hub_119b0e0");
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 std___1___hash_memory(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count_lock");
extern __int64 (*GameData_2015190[])();
extern __int64 (*GameData_2015210[])();
extern __int64 (*GameData_2015290[])();
extern __int64 GameData_212dbf0[2];
extern __int64 GameData_21ec7b8;
extern __int64 GameData_21f3ca8;
extern __int64 GameData_21f3d08;
extern __int64 GameData_21f3d10;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64* GameData_212d460[6];
float strtof(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(void);
void __attribute__((noreturn)) GameRoutine_64aa00(_QWORD);
__int64 Hub_1199510(__int64 a1, __int64 a2);
__int64 Hub_1199600(__int64 a1, __int64* a2, char a3);
__int64 Hub_1199720(double a1);
__int64 game_talk_Hub_DisableLookAt_alt1(__int64 a1, __int64 a2) __asm__(
    "game_talk_Hub_DisableLookAt");
__int64 Hub_1199bc0(__int64 a1, __int64 a2);
__int64 Hub_119a0b0(__int64 result, __int64 a2);
bool Hub_119a3a0(__int64 a1, __int64 a2, __int64* a3);
__int64 Hub_119adb0(__int64 a1, __int64 a2);
__int64 game_talk_Hub_PlayMotionImpl(__int64 result, __int64* a2, _BYTE* a3,
                                     __int64 a4, float a5);
__int64 Hub_119b0e0(__int64 result, __int64 a2, __int64* a3);
__int64 Hub_119b730(__int64 a1, __int64 a2, int a3, __int64* a4, __int64 a5);
bool Hub_119b940(__int64 a1, __int64* a2);
__int64 game_talk_Hub_ChangeCamera_lambda0_Invoke_alt1(__int64 a1) __asm__(
    "game_talk_Hub_ChangeCamera_lambda0_Invoke");
__int64 game_talk_Hub_DisableLookAt_lambda0_Invoke(__int64 a1, __int64 a2);
__int64 game_talk_Hub_PlayMotionImpl_lambda0_Invoke(__int64 a1, __int64 a2);
__int64 game_talk_Hub_PlayMotionImpl_lambda1_Invoke(__int64 a1, __int64* a2);
__int64 game_talk_Hub_PlayFacialImpl_lambda0_Invoke(__int64 a1, __int64 a2);
__attribute__((swiftcall)) void LocatorDispos_db4160(PSEUDO_X8, _QWORD, _QWORD,
                                                     _QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void game_hub_cdf420(PSEUDO_X8, _QWORD, _QWORD,
                                                float, float, float);
__attribute__((swiftcall)) void game_hub_efca60(PSEUDO_X8, _QWORD, _QWORD,
                                                _QWORD);
__int64 GameRoutine_119aab0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d8ce40(_QWORD);
__int64 GameRoutine_d8cf60(_QWORD);
__int64 GameRoutine_efb5b0(_QWORD, _QWORD, _QWORD, long double);
__int64 Hub_1199d20(_QWORD, _QWORD);
__int64 Hub_119b730_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD) __asm__("Hub_119b730");
__int64 game_809ba0(float);
__int64 game_809dc0(_QWORD, _QWORD, long double);
__int64 game_talk_Hub_PlayMotionImpl_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD,
    long double) __asm__("game_talk_Hub_PlayMotionImpl");
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock_alt2(void) __asm__(
    "std___1___shared_weak_count_lock");
__n128 Hub_119adb0_alt1(__int64, __n128 result) __asm__("Hub_119adb0");
extern _UNKNOWN* GameData_212c960;
extern __int64 (*GameData_2015100[])();
extern __int64 (*GameData_2015390[])();
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dc60[2];
extern __int64 GameData_212ec00;
extern __int64 GameData_21f3cb8;
extern __int64 game_ProcFadeView_instance_;
float fmodf(float, float);
float game_hub_efc240(_QWORD, _QWORD);
long double CharacterRotate_d52080(_QWORD);
void __attribute__((noreturn)) GameRoutine_119baf0(void);
void __attribute__((noreturn)) GameRoutine_60a210(void);
bool Hub_1197e80(__int64 a1, __int64* a2);
__int64 Hub_11982a0(__int64 a1, __n128 a2);
__int64 Hub_11982c0(__int64 a1, __int64* a2);
__int64 Hub_11988e0(__int64 a1, __int64* a2);
__int64 game_talk_Hub_ChangeCamera(_QWORD* a1, __int64* a2);
__int64 Hub_1199260(__int64 a1, __int64* a2);
bool Hub_1199760(long double a1, __int64 a2, __int64* a3, char a4);
bool Hub_11998d0(long double a1, __int64 a2, __int64* a3, char a4);
__attribute__((swiftcall)) void
Hub_119acc0_alt1(PSEUDO_X8 x8_, __int64 result, __int64 a2,
                 __int64 a3) __asm__("Hub_119acc0");
__attribute__((swiftcall)) void
LocatorDispos_db4160_alt1(PSEUDO_X8, __int64 result, __int64, unsigned __int64,
                          __int64,
                          unsigned __int64) __asm__("LocatorDispos_db4160");
__attribute__((swiftcall)) void
game_hub_cdf420_alt1(PSEUDO_X8, __int64, __int64, float, float,
                     float) __asm__("game_hub_cdf420");
__attribute__((swiftcall)) void
game_hub_efca60_alt1(PSEUDO_X8, __int64, _QWORD*,
                     signed __int64) __asm__("game_hub_efca60");
__int64 GameRoutine_119aab0_alt1(__int64, __int64*, const char*,
                                 __int64) __asm__("GameRoutine_119aab0");
__int64 GameRoutine_d8ce40_alt1(__int64 result) __asm__("GameRoutine_d8ce40");
__int64 GameRoutine_efb5b0_alt1(__int64, _QWORD*, __int64*,
                                float) __asm__("GameRoutine_efb5b0");
__int64 Hub_1199d20_alt1(__int64, __int64*) __asm__("Hub_1199d20");
__int64 Hub_119b0e0_alt2(__int64 result, int, __int64*) __asm__("Hub_119b0e0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt3(__int64) __asm__(
    "std___1___shared_weak_count_lock");
float CharacterRotate_d52080_alt1(__int64) __asm__("CharacterRotate_d52080");
float game_hub_efc240_alt1(__int64, __int64*) __asm__("game_hub_efc240");
float strtof_alt1(const char*, __int64) __asm__("strtof");
void GameHr_cdeee0(__int64 result, __int64);
void GameRoutine_efaca0_alt1(__int64, __int64*) __asm__("GameRoutine_efaca0");
void Hub_119b4e0(_QWORD*, int, __int64*, __int64);
void __attribute__((noreturn))
GameRoutine_119baf0_alt1() __asm__("GameRoutine_119baf0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 game_talk_Hub_DisableLookAt(_QWORD* a1, __int64 a2);
__attribute__((swiftcall)) void Hub_119acc0(PSEUDO_X8 x8_, __int64 result,
                                            _QWORD* a2, signed __int64 a3);
void game_talk_Hub_ChangeCamera_lambda0_Invoke(__int64 a1);

bool Hub_1197e80(__int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  const char* v13;
  const char* v14;
  const char* v15;
  float v16;
  _QWORD* v17;
  unsigned __int64 v18;
  __int64 v19;
  _BYTE* v20;
  __int64 v21;
  _BOOL4 v22;
  __int64 v23;
  float v24;
  float v25;
  float v26;
  _BYTE* v27;
  unsigned __int64 v28;
  const char* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v35[2];
  __int64 v36[2];
  __int64 v37[2];
  struct {
    _BYTE* v38;
    __int64 v39;
  } v38_;
  struct {
    __int64 v40;
    unsigned __int64 v41;
    _BYTE* v42;
  } v40_;
  struct {
    __int64 v43;
    unsigned __int64 v44;
    const char* v45;
  } v43_;
  struct {
    __int64 v46;
    unsigned __int64 v47;
    _QWORD* v48;
  } v46_;

  v2 = *a2;
  if ((*(_BYTE*)(*a2 + 24) & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(&v46_.v46, *(_QWORD*)(v2 + 40),
                                       *(_QWORD*)(v2 + 32));
    v2 = *a2;
  }
  else {
    v5 = *(_QWORD*)(*a2 + 32);
    v6 = *(_QWORD*)(*a2 + 40);
    v46_.v46 = *(_QWORD*)(*a2 + 24);
    v46_.v47 = v5;
    v46_.v48 = (_QWORD*)v6;
  }
  if ((*(_BYTE*)(v2 + 48) & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(&v43_.v43, *(_QWORD*)(v2 + 64),
                                       *(_QWORD*)(v2 + 56));
    v2 = *a2;
  }
  else {
    v7 = *(_QWORD*)(v2 + 56);
    v8 = *(_QWORD*)(v2 + 64);
    v43_.v43 = *(_QWORD*)(v2 + 48);
    v43_.v44 = v7;
    v43_.v45 = (const char*)v8;
  }
  if ((*(_BYTE*)(v2 + 72) & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(&v40_.v40, *(_QWORD*)(v2 + 88),
                                       *(_QWORD*)(v2 + 80));
    v2 = *a2;
  }
  else {
    v9 = *(_QWORD*)(v2 + 80);
    v10 = *(_QWORD*)(v2 + 88);
    v40_.v40 = *(_QWORD*)(v2 + 72);
    v40_.v41 = v9;
    v40_.v42 = (_BYTE*)v10;
  }
  v11 = *(unsigned __int8*)(v2 + 96);
  v12 = *(_QWORD*)(v2 + 104);
  if ((v11 & 1) == 0) {
    v12 = v11 >> 1;
  }
  if (v12 != 0) {
    v13 = *(const char**)(v2 + 112);
    v14 = (const char*)(v2 + 97);
    v38_.v38 = nullptr;
    if ((v11 & 1) != 0) {
      v15 = v13;
    }
    else {
      v15 = v14;
    }
    v16 = strtof_alt1(v15, (__int64)&v38_.v38);
    if (*v38_.v38 == 0) {
      goto LABEL_22;
    }
    if (*v38_.v38 == 102) {
      if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v38_.v38) != 0) {
        v16 = -0x1.0000000000000p+0f;
      }
    LABEL_22:
      if ((v46_.v46 & 1) != 0) {
        v17 = v46_.v48;
      }
      else {
        v17 = (__int64*)((char*)&v46_.v46 + 1);
      }
      if ((v46_.v46 & 1) != 0) {
        v18 = v46_.v47;
      }
      else {
        v18 = (unsigned __int64)(unsigned __int8)v46_.v46 >> 1;
      }
      game_hub_efca60_alt1((void*)(&v38_.v38), *(_QWORD*)GameData_212dbf0[0],
                           v17, v18);
      if (v38_.v39 == 0) {
        goto LABEL_71;
      }
      v19 = std___1___shared_weak_count_lock_alt3(v38_.v39);
      v20 = v38_.v38;
      if (v19 != 0) {
        v21 = (__int64)v38_.v38;
      }
      else {
        v21 = 0;
      }
      if (v38_.v39 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v38_.v39);
      }
      v22 = v21 == 0;
      if (v21 == 0) {
      LABEL_48:
        if (v19 == 0) {
        LABEL_69:
          if ((v40_.v40 & 1) == 0) {
            goto LABEL_78;
          }
          goto LABEL_74;
        }
        goto LABEL_68;
      }
      v37[0] = v21;
      v37[1] = v19;
      if (v19 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                  memory_order_relaxed);
        Hub_1199d20_alt1(a1, v37);
        if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (*((_DWORD*)v20 + 278) != 0) {
            goto LABEL_50;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
          std___1___shared_weak_count___release_weak_alt1(v19);
          if (*((_DWORD*)v20 + 278) != 0) {
            goto LABEL_50;
          }
        }
      }
      else {
        Hub_1199d20_alt1(a1, v37);
        if (*((_DWORD*)v20 + 278) != 0) {
          goto LABEL_50;
        }
      }
      v23 = *(_QWORD*)(*(_QWORD*)(*((_QWORD*)v20 + 3) + 16LL) + 488LL);
      v24 = CharacterRotate_d52080_alt1(v23);
      v25 = fmodf(*(float*)(v23 + 36) - v24, 0x1.921fb60000000p+2f);
      if (v25 >= 0x0.0p+0f) {
        v26 = v25 + 0x0.0p+0f;
      }
      else {
        v26 = (float)(v25 + 0x0.0p+0f) + 0x1.921fb60000000p+2f;
      }
      if (v26 > 0x1.921fb60000000p+1f) {
        v26 = v26 + -0x1.921fb60000000p+2f;
      }
      if (fabsf(v26) > 0x1.6571840000000p+0f) {
        goto LABEL_48;
      }
    LABEL_50:
      v36[0] = v21;
      v36[1] = v19;
      if (v19 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                                  memory_order_relaxed);
      }
      if ((v40_.v40 & 1) != 0) {
        v27 = v40_.v42;
      }
      else {
        v27 = (char*)&v40_.v40 + 1;
      }
      if ((v40_.v40 & 1) != 0) {
        v28 = v40_.v41;
      }
      else {
        v28 = (unsigned __int64)(unsigned __int8)v40_.v40 >> 1;
      }
      game_talk_Hub_PlayMotionImpl(a1, v36, v27, v28, v16);
      if (v19 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v19);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                                  memory_order_relaxed);
      }
      v35[0] = v21;
      v35[1] = v19;
      if ((v43_.v43 & 1) != 0) {
        v29 = v43_.v45;
      }
      else {
        v29 = (char*)&v43_.v43 + 1;
      }
      if ((v43_.v43 & 1) != 0) {
        v30 = v43_.v44;
      }
      else {
        v30 = (unsigned __int64)(unsigned __int8)v43_.v43 >> 1;
      }
      GameRoutine_119aab0_alt1(a1, v35, v29, v30);
      if (v19 == 0) {
      LABEL_71:
        v22 = true;
        if ((v40_.v40 & 1) == 0) {
          goto LABEL_78;
        }
        goto LABEL_74;
      }
      std___1___shared_weak_count___release_weak_alt1(v19);
      v22 = true;
    LABEL_68:
      if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        goto LABEL_69;
      }
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
      std___1___shared_weak_count___release_weak_alt1(v19);
      if ((v40_.v40 & 1) != 0) {
      LABEL_74:
        if (v40_.v42 != nullptr) {
          v31 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v31 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, (__int64)v40_.v42);
        }
      }
    LABEL_78:
      if ((v43_.v43 & 1) != 0 && v43_.v45 != nullptr) {
        v32 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v32 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, (__int64)v43_.v45);
      }
      if ((v46_.v46 & 1) != 0 && v46_.v48 != nullptr) {
        v33 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v33 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, (__int64)v46_.v48);
      }
      return v22;
    }
  }
  v16 = -0x1.0000000000000p+0f;
  goto LABEL_22;
}

__int64 Hub_11982a0(__int64 a1, __n128 a2)
{
  Hub_119adb0_alt1(a1, a2);
  return 1;
}

__int64 Hub_11982c0(__int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  const char* v13;
  const char* v14;
  const char* v15;
  float v16;
  __int64* v17;
  _QWORD* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _BYTE* v23;
  unsigned __int64 v24;
  const char* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v31[2];
  __int64 v32[2];
  struct {
    __int64 v33;
    __int64 v34;
  } v33_;
  struct {
    _BYTE* v35;
    __int64 v36;
  } v35_;
  struct {
    __int64 v37;
    unsigned __int64 v38;
    _BYTE* v39;
  } v37_;
  struct {
    __int64 v40;
    unsigned __int64 v41;
    const char* v42;
  } v40_;
  struct {
    __int64 v43;
    unsigned __int64 v44;
    _QWORD* v45;
  } v43_;

  v2 = *a2;
  if ((*(_BYTE*)(*a2 + 24) & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(&v43_.v43, *(_QWORD*)(v2 + 40),
                                       *(_QWORD*)(v2 + 32));
    v2 = *a2;
  }
  else {
    v5 = *(_QWORD*)(*a2 + 32);
    v6 = *(_QWORD*)(*a2 + 40);
    v43_.v43 = *(_QWORD*)(*a2 + 24);
    v43_.v44 = v5;
    v43_.v45 = (_QWORD*)v6;
  }
  if ((*(_BYTE*)(v2 + 48) & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(&v40_.v40, *(_QWORD*)(v2 + 64),
                                       *(_QWORD*)(v2 + 56));
    v2 = *a2;
  }
  else {
    v7 = *(_QWORD*)(v2 + 56);
    v8 = *(_QWORD*)(v2 + 64);
    v40_.v40 = *(_QWORD*)(v2 + 48);
    v40_.v41 = v7;
    v40_.v42 = (const char*)v8;
  }
  if ((*(_BYTE*)(v2 + 72) & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(&v37_.v37, *(_QWORD*)(v2 + 88),
                                       *(_QWORD*)(v2 + 80));
    v2 = *a2;
  }
  else {
    v9 = *(_QWORD*)(v2 + 80);
    v10 = *(_QWORD*)(v2 + 88);
    v37_.v37 = *(_QWORD*)(v2 + 72);
    v37_.v38 = v9;
    v37_.v39 = (_BYTE*)v10;
  }
  v11 = *(unsigned __int8*)(v2 + 96);
  v12 = *(_QWORD*)(v2 + 104);
  if ((v11 & 1) == 0) {
    v12 = v11 >> 1;
  }
  if (v12 != 0) {
    v13 = *(const char**)(v2 + 112);
    v14 = (const char*)(v2 + 97);
    v35_.v35 = nullptr;
    if ((v11 & 1) != 0) {
      v15 = v13;
    }
    else {
      v15 = v14;
    }
    v16 = strtof_alt1(v15, (__int64)&v35_.v35);
    if (*v35_.v35 == 0) {
      goto LABEL_22;
    }
    if (*v35_.v35 == 102) {
      if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v35_.v35) != 0) {
        v16 = -0x1.0000000000000p+0f;
      }
    LABEL_22:
      v17 = (__int64*)GameData_212dbf0[0];
      if ((v43_.v43 & 1) != 0) {
        v18 = v43_.v45;
      }
      else {
        v18 = (__int64*)((char*)&v43_.v43 + 1);
      }
      if ((v43_.v43 & 1) != 0) {
        v19 = v43_.v44;
      }
      else {
        v19 = (unsigned __int64)(unsigned __int8)v43_.v43 >> 1;
      }
      game_hub_efca60_alt1((void*)(&v35_.v35), *(_QWORD*)GameData_212dbf0[0],
                           v18, v19);
      if (v35_.v36 == 0) {
        goto LABEL_59;
      }
      v20 = std___1___shared_weak_count_lock_alt3(v35_.v36);
      if (v20 != 0) {
        v21 = (__int64)v35_.v35;
      }
      else {
        v21 = 0;
      }
      if (v35_.v36 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v35_.v36);
      }
      if (v21 != 0) {
        v22 = *v17;
        v33_.v33 = v21;
        v33_.v34 = v20;
        if (v20 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                                    memory_order_relaxed);
        }
        GameRoutine_efaca0_alt1(v22, &v33_.v33);
        if (v33_.v34 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v33_.v34);
        }
        v32[0] = v21;
        v32[1] = v20;
        if (v20 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                                    memory_order_relaxed);
        }
        if ((v37_.v37 & 1) != 0) {
          v23 = v37_.v39;
        }
        else {
          v23 = (char*)&v37_.v37 + 1;
        }
        if ((v37_.v37 & 1) != 0) {
          v24 = v37_.v38;
        }
        else {
          v24 = (unsigned __int64)(unsigned __int8)v37_.v37 >> 1;
        }
        game_talk_Hub_PlayMotionImpl(a1, v32, v23, v24, v16);
        if (v20 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v20);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                                    memory_order_relaxed);
        }
        v31[0] = v21;
        v31[1] = v20;
        if ((v40_.v40 & 1) != 0) {
          v25 = v40_.v42;
        }
        else {
          v25 = (char*)&v40_.v40 + 1;
        }
        if ((v40_.v40 & 1) != 0) {
          v26 = v40_.v41;
        }
        else {
          v26 = (unsigned __int64)(unsigned __int8)v40_.v40 >> 1;
        }
        GameRoutine_119aab0_alt1(a1, v31, v25, v26);
        if (v20 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v20);
          goto LABEL_58;
        }
      LABEL_59:
        if ((v37_.v37 & 1) == 0) {
          goto LABEL_64;
        }
        goto LABEL_60;
      }
      if (v20 == 0) {
        goto LABEL_59;
      }
    LABEL_58:
      if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        goto LABEL_59;
      }
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      std___1___shared_weak_count___release_weak_alt1(v20);
      if ((v37_.v37 & 1) != 0) {
      LABEL_60:
        if (v37_.v39 != nullptr) {
          v27 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v27 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, (__int64)v37_.v39);
        }
      }
    LABEL_64:
      if ((v40_.v40 & 1) != 0 && v40_.v42 != nullptr) {
        v28 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v28 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, (__int64)v40_.v42);
      }
      if ((v43_.v43 & 1) != 0 && v43_.v45 != nullptr) {
        v29 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v29 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, (__int64)v43_.v45);
      }
      return 1;
    }
  }
  v16 = -0x1.0000000000000p+0f;
  goto LABEL_22;
}

__int64 Hub_11988e0(__int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  const char* v11;
  const char* v12;
  const char* v13;
  float v14;
  __int64* v15;
  _QWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  char* v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  bool v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  _BYTE* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  float v37;
  __int64 v38;
  __int128 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int128 v44;
  _QWORD v45[2];
  struct {
    __int64 v46;
    __int64 v47;
  } v46_;
  __int64 v48[2];
  struct {
    __int64 v49;
    __int64 v50;
  } v49_;
  struct {
    _BYTE* v51;
    __int64 v52;
  } v51_;
  struct {
    __int64 v53;
    unsigned __int64 v54;
    char* v55;
  } v53_;
  struct {
    __int64 v56;
    unsigned __int64 v57;
    _QWORD* v58;
  } v56_;

  v2 = *a2;
  if ((*(_BYTE*)(*a2 + 24) & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(&v56_.v56, *(_QWORD*)(v2 + 40),
                                       *(_QWORD*)(v2 + 32));
    v2 = *a2;
  }
  else {
    v5 = *(_QWORD*)(*a2 + 32);
    v6 = *(_QWORD*)(*a2 + 40);
    v56_.v56 = *(_QWORD*)(*a2 + 24);
    v56_.v57 = v5;
    v56_.v58 = (_QWORD*)v6;
  }
  if ((*(_BYTE*)(v2 + 48) & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(&v53_.v53, *(_QWORD*)(v2 + 64),
                                       *(_QWORD*)(v2 + 56));
    v2 = *a2;
  }
  else {
    v7 = *(_QWORD*)(v2 + 56);
    v8 = *(_QWORD*)(v2 + 64);
    v53_.v53 = *(_QWORD*)(v2 + 48);
    v53_.v54 = v7;
    v53_.v55 = (char*)v8;
  }
  v9 = *(unsigned __int8*)(v2 + 72);
  v10 = *(_QWORD*)(v2 + 80);
  if ((v9 & 1) == 0) {
    v10 = v9 >> 1;
  }
  if (v10 == 0) {
    goto LABEL_18;
  }
  v11 = *(const char**)(v2 + 88);
  v12 = (const char*)(v2 + 73);
  v51_.v51 = nullptr;
  if ((v9 & 1) != 0) {
    v13 = v11;
  }
  else {
    v13 = v12;
  }
  v14 = strtof_alt1(v13, (__int64)&v51_.v51);
  if (*v51_.v51 != 0) {
    if (*v51_.v51 == 102) {
      if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v51_.v51) != 0) {
        v14 = 0x1.0000000000000p+0f;
      }
    }
    else {
    LABEL_18:
      v14 = 0x1.0000000000000p+0f;
    }
  }
  v15 = (__int64*)GameData_212dbf0[0];
  if ((v56_.v56 & 1) != 0) {
    v16 = v56_.v58;
  }
  else {
    v16 = (__int64*)((char*)&v56_.v56 + 1);
  }
  if ((v56_.v56 & 1) != 0) {
    v17 = v56_.v57;
  }
  else {
    v17 = (unsigned __int64)(unsigned __int8)v56_.v56 >> 1;
  }
  game_hub_efca60_alt1((void*)(&v51_.v51), *(_QWORD*)GameData_212dbf0[0], v16,
                       v17);
  if (v51_.v52 == 0) {
    goto LABEL_63;
  }
  v18 = std___1___shared_weak_count_lock_alt3(v51_.v52);
  v19 = (__int64)v51_.v51;
  if (v18 != 0) {
    v20 = (__int64)v51_.v51;
  }
  else {
    v20 = 0;
  }
  if (v51_.v52 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v51_.v52);
  }
  if (v20 != 0) {
    v21 = *(_QWORD*)GameData_212dbb8[0];
    if ((v53_.v53 & 1) != 0) {
      v22 = v53_.v54;
    }
    else {
      v22 = (unsigned __int64)(unsigned __int8)v53_.v53 >> 1;
    }
    v23 = *(unsigned __int8*)(v21 + 88);
    if ((v53_.v53 & 1) != 0) {
      v24 = v53_.v55;
    }
    else {
      v24 = (char*)&v53_.v53 + 1;
    }
    v25 = v21 + 89;
    v28 = v21 + 96;
    v26 = *(_QWORD*)(v21 + 96);
    v27 = *(_QWORD*)(v28 + 8);
    v29 = (v23 & 1) == 0;
    v30 = v23 >> 1;
    if (v29) {
      v31 = v25;
    }
    else {
      v31 = v27;
    }
    if (v29) {
      v32 = v30;
    }
    else {
      v32 = v26;
    }
    LocatorDispos_db4160_alt1((void*)(&v51_.v51), *(_QWORD*)GameData_212ec00,
                              (__int64)v24, v22, v31, v32);
    v33 = v51_.v51;
    if (v51_.v51 != nullptr) {
      v34 = *v15;
      v49_.v49 = v20;
      v49_.v50 = v18;
      if (v18 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 16), 1u,
                                  memory_order_relaxed);
      }
      GameRoutine_efaca0_alt1(v34, &v49_.v49);
      if (v49_.v50 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v49_.v50);
      }
      v48[0] = v20;
      v48[1] = v18;
      if (v18 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 16), 1u,
                                  memory_order_relaxed);
        Hub_119b0e0_alt2(a1, 1, v48);
        std___1___shared_weak_count___release_weak_alt1(v18);
        v35 = *v15;
        v46_.v46 = v19;
        v46_.v47 = v18;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 16), 1u,
                                  memory_order_relaxed);
      }
      else {
        Hub_119b0e0_alt2(a1, 1, v48);
        v35 = *v15;
        v46_.v46 = 0;
        v46_.v47 = 0;
      }
      v37 = game_hub_efc240_alt1(v35, &v46_.v46);
      if (v46_.v47 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v46_.v47);
      }
      v38 = *v15;
      v45[0] = v20;
      v45[1] = v18;
      if (v18 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 16), 1u,
                                  memory_order_relaxed);
      }
      *(_QWORD*)&v39 = *((_QWORD*)v33 + 20);
      LODWORD(v36) = *((_DWORD*)v33 + 42);
      *((_QWORD*)&v39 + 1) = v36;
      v44 = v39;
      GameRoutine_efb5b0_alt1(v38, v45, (__int64*)&v44, v14 * v37);
      if (v18 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v18);
      }
    }
    v40 = v51_.v52;
    if (v51_.v52 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v51_.v52 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
      std___1___shared_weak_count___release_weak_alt1(v40);
    }
  }
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak_alt1(v18);
    if ((v53_.v53 & 1) == 0) {
      goto LABEL_68;
    }
  }
  else {
  LABEL_63:
    if ((v53_.v53 & 1) == 0) {
      goto LABEL_68;
    }
  }
  if (v53_.v55 != nullptr) {
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v41, (__int64)v53_.v55);
  }
LABEL_68:
  if ((v56_.v56 & 1) != 0 && v56_.v58 != nullptr) {
    v42 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v42 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v42, (__int64)v56_.v58);
  }
  return 1;
}

__int64 game_talk_Hub_ChangeCamera(_QWORD* a1, __int64* a2)
{

#pragma clang fp contract(off)
  float v2;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  const char* v8;
  const char* v9;
  const char* v10;
  float v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  const char* v14;
  const char* v15;
  const char* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  float v19;
  const char* v20;
  const char* v21;
  const char* v22;
  float v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  const char* v26;
  const char* v27;
  const char* v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  float v31;
  const char* v32;
  const char* v33;
  const char* v34;
  float v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  const char* v38;
  const char* v39;
  const char* v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  const char* v43;
  const char* v44;
  const char* v45;
  float v46;
  __int64 v47;
  char v48;
  __int64* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64* v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  struct {
    __int64 (**v69)();
    float v70;
    char gap12_[20];
    __int64 (***v71)();
  } v69_;
  struct {
    __int64 v72;
    __int64 v73;
  } v72_;
  struct {
    _DWORD v74[6];
    __int64 v75;
  } v74_;
  struct {
    _QWORD v76[4];
    _QWORD* v77;
  } v76_;
  __int64 v78[3];

  v2 = 0x0.0p+0f;
  v74_.v75 = 0x4220000000000000LL;
  v5 = *a2;
  v6 = *(unsigned __int8*)(*a2 + 24);
  v7 = *(_QWORD*)(*a2 + 32);
  if ((v6 & 1) == 0) {
    v7 = v6 >> 1;
  }
  if (v7 != 0) {
    v8 = *(const char**)(v5 + 40);
    v9 = (const char*)(v5 + 25);
    v76_.v76[0] = 0;
    if ((v6 & 1) != 0) {
      v10 = v8;
    }
    else {
      v10 = v9;
    }
    v11 = strtof_alt1(v10, (__int64)v76_.v76);
    if (*(_BYTE*)v76_.v76[0] != 0) {
      if (*(_BYTE*)v76_.v76[0] == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v76_.v76[0]) != 0) {
          v11 = 0x0.0p+0f;
        }
      }
      else {
        v11 = 0x0.0p+0f;
      }
    }
    v5 = *a2;
  }
  else {
    v11 = 0x0.0p+0f;
  }
  v12 = *(unsigned __int8*)(v5 + 48);
  v13 = *(_QWORD*)(v5 + 56);
  *(float*)v74_.v74 = v11;
  if ((v12 & 1) == 0) {
    v13 = v12 >> 1;
  }
  if (v13 != 0) {
    v14 = *(const char**)(v5 + 64);
    v15 = (const char*)(v5 + 49);
    v76_.v76[0] = 0;
    if ((v12 & 1) != 0) {
      v16 = v14;
    }
    else {
      v16 = v15;
    }
    v2 = strtof_alt1(v16, (__int64)v76_.v76);
    if (*(_BYTE*)v76_.v76[0] != 0) {
      if (*(_BYTE*)v76_.v76[0] == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v76_.v76[0]) != 0) {
          v2 = 0x0.0p+0f;
        }
      }
      else {
        v2 = 0x0.0p+0f;
      }
    }
    v5 = *a2;
  }
  v17 = *(unsigned __int8*)(v5 + 72);
  v18 = *(_QWORD*)(v5 + 80);
  *(float*)&v74_.v74[1] = v2;
  v19 = 0x0.0p+0f;
  if ((v17 & 1) == 0) {
    v18 = v17 >> 1;
  }
  if (v18 != 0) {
    v20 = *(const char**)(v5 + 88);
    v21 = (const char*)(v5 + 73);
    v76_.v76[0] = 0;
    if ((v17 & 1) != 0) {
      v22 = v20;
    }
    else {
      v22 = v21;
    }
    v23 = strtof_alt1(v22, (__int64)v76_.v76);
    if (*(_BYTE*)v76_.v76[0] != 0) {
      if (*(_BYTE*)v76_.v76[0] == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v76_.v76[0]) != 0) {
          v23 = 0x0.0p+0f;
        }
      }
      else {
        v23 = 0x0.0p+0f;
      }
    }
    v5 = *a2;
  }
  else {
    v23 = 0x0.0p+0f;
  }
  v24 = *(unsigned __int8*)(v5 + 96);
  v25 = *(_QWORD*)(v5 + 104);
  *(float*)&v74_.v74[2] = v23;
  if ((v24 & 1) == 0) {
    v25 = v24 >> 1;
  }
  if (v25 != 0) {
    v26 = *(const char**)(v5 + 112);
    v27 = (const char*)(v5 + 97);
    v76_.v76[0] = 0;
    if ((v24 & 1) != 0) {
      v28 = v26;
    }
    else {
      v28 = v27;
    }
    v19 = strtof_alt1(v28, (__int64)v76_.v76);
    if (*(_BYTE*)v76_.v76[0] != 0) {
      if (*(_BYTE*)v76_.v76[0] == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v76_.v76[0]) != 0) {
          v19 = 0x0.0p+0f;
        }
      }
      else {
        v19 = 0x0.0p+0f;
      }
    }
    v5 = *a2;
  }
  v29 = *(unsigned __int8*)(v5 + 120);
  v30 = *(_QWORD*)(v5 + 128);
  *(float*)&v74_.v74[3] = v19;
  v31 = 0x0.0p+0f;
  if ((v29 & 1) == 0) {
    v30 = v29 >> 1;
  }
  if (v30 != 0) {
    v32 = *(const char**)(v5 + 136);
    v33 = (const char*)(v5 + 121);
    v76_.v76[0] = 0;
    if ((v29 & 1) != 0) {
      v34 = v32;
    }
    else {
      v34 = v33;
    }
    v35 = strtof_alt1(v34, (__int64)v76_.v76);
    if (*(_BYTE*)v76_.v76[0] != 0) {
      if (*(_BYTE*)v76_.v76[0] == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v76_.v76[0]) != 0) {
          v35 = 0x0.0p+0f;
        }
      }
      else {
        v35 = 0x0.0p+0f;
      }
    }
    v5 = *a2;
  }
  else {
    v35 = 0x0.0p+0f;
  }
  v36 = *(unsigned __int8*)(v5 + 144);
  v37 = *(_QWORD*)(v5 + 152);
  *(float*)&v74_.v74[4] = v35;
  if ((v36 & 1) == 0) {
    v37 = v36 >> 1;
  }
  if (v37 != 0) {
    v38 = *(const char**)(v5 + 160);
    v39 = (const char*)(v5 + 145);
    v76_.v76[0] = 0;
    if ((v36 & 1) != 0) {
      v40 = v38;
    }
    else {
      v40 = v39;
    }
    v31 = strtof_alt1(v40, (__int64)v76_.v76);
    if (*(_BYTE*)v76_.v76[0] != 0) {
      if (*(_BYTE*)v76_.v76[0] == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v76_.v76[0]) != 0) {
          v31 = 0x0.0p+0f;
        }
      }
      else {
        v31 = 0x0.0p+0f;
      }
    }
    v5 = *a2;
  }
  v41 = *(unsigned __int8*)(v5 + 168);
  v42 = *(_QWORD*)(v5 + 176);
  *(float*)&v74_.v74[5] = v31;
  if ((v41 & 1) == 0) {
    v42 = v41 >> 1;
  }
  if (v42 != 0) {
    v43 = *(const char**)(v5 + 184);
    v44 = (const char*)(v5 + 169);
    v76_.v76[0] = 0;
    if ((v41 & 1) != 0) {
      v45 = v43;
    }
    else {
      v45 = v44;
    }
    v46 = strtof_alt1(v45, (__int64)v76_.v76);
    if (*(_BYTE*)v76_.v76[0] == 0) {
      goto LABEL_94;
    }
    if (*(_BYTE*)v76_.v76[0] == 102) {
      if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v76_.v76[0]) != 0) {
        v46 = 0x0.0p+0f;
      }
    LABEL_94:
      game_hub_cdf420_alt1((void*)(&v72_.v72), *(_QWORD*)GameData_212dc60[0],
                           (__int64)v74_.v74, v46, 0x1.0000000000000p+0f,
                           0x1.0000000000000p+0f);
      if (v72_.v73 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v72_.v73);
      }
      v47 = GameData_21f3d08;
      if (*(_DWORD*)(GameData_21f3d08 + 68) != 0) {
        *(_DWORD*)(GameData_21f3d08 + 68) = 0;
      }
      v48 = *(_BYTE*)(v47 + 136);
      *(_DWORD*)(v47 + 132) = 0;
      if ((v48 & 1) == 0) {
        *(_BYTE*)(v47 + 136) = 1;
        GameRoutine_d8ce40_alt1(GameData_21f3cb8);
      }
      v69_.v70 = v46;
      v69_.v69 = GameData_2015100;
      v69_.v71 = &v69_.v69;
      v49 = (__int64*)fw_memory_g_heap_manager_ptr;
      v50 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
      *(_QWORD*)(v50 + 16) = 0;
      v51 = v50 + 32;
      *(_QWORD*)(v50 + 8) = 0;
      v78[0] = 0;
      v78[1] = 0;
      *(_QWORD*)v50 = GameData_2015390;
      if (v69_.v71 != nullptr) {
        if (v69_.v71 == &v69_.v69) {
          v76_.v77 = v76_.v76;
          ((__int64 (*)(__int64))(*v69_.v71)[3])((__int64)v69_.v71);
        }
        else {
          v76_.v77 = (_QWORD*)((__int64 (*)(__int64))(*v69_.v71)[2])(
              (__int64)v69_.v71);
        }
      }
      else {
        v76_.v77 = nullptr;
      }
      Hub_119b730(v51, (__int64)a1, 4, v78, (__int64)v76_.v76);
      if (v76_.v77 == v76_.v76) {
        v52 = 32;
      }
      else {
        if (v76_.v77 == nullptr) {
          goto LABEL_110;
        }
        v52 = 40;
      }
      (*(void (**)(__int64))(*v76_.v77 + v52))((__int64)v76_.v77);
    LABEL_110:
      v53 = (__int64*)a1[22];
      v54 = a1[23];
      if ((unsigned __int64)v53 >= v54) {
        v56 = a1[21];
        v57 = (unsigned __int64)v53 - v56;
        v58 = ((__int64)v53 - v56) >> 4;
        v59 = v58 + 1;
        if ((unsigned __int64)(v58 + 1) >> 60 != 0) {
          GameRoutine_119baf0_alt1();
        }
        v60 = v54 - v56;
        if (v60 >> 3 > v59) {
          v59 = v60 >> 3;
        }
        if ((unsigned __int64)v60 >= 0x7FFFFFFFFFFFFFF0LL) {
          v61 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v61 = v59;
        }
        if (v61 >> 60 != 0) {
          GameRoutine_60a210_alt1();
        }
        v62 = fw_memory_HeapManager_Allocate_alt1(*v49, 16 * v61, 16, 0);
        v63 = (__int64*)(v62 + v57);
        v64 = v62 + 16 * v61;
        *v63 = v51;
        v63[1] = v50;
        v65 = v62 + v57 - 16 * v58;
        v55 = v62 + v57 + 16;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v50 + 8), 1u,
                                  memory_order_relaxed);
        memcpy_alt1(v65, v56, v57);
        a1[21] = v65;
        a1[22] = v55;
        a1[23] = v64;
        if (v56 != 0) {
          v66 = 128;
          if (*(_QWORD*)(*v49 + 200) == 0) {
            v66 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v49 + v66, v56);
        }
      }
      else {
        *v53 = v51;
        v53[1] = v50;
        v55 = (__int64)(v53 + 2);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v50 + 8), 1u,
                                  memory_order_relaxed);
      }
      a1[22] = v55;
      if (atomic_fetch_add((atomic_ullong* volatile)(v50 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
        std___1___shared_weak_count___release_weak_alt1(v50);
      }
      if (v69_.v71 == &v69_.v69) {
        v67 = 4;
        goto LABEL_129;
      }
      if (v69_.v71 != nullptr) {
        v67 = 5;
      LABEL_129:
        ((__int64 (*)(__int64))(*v69_.v71)[v67])((__int64)v69_.v71);
      }
      return 1;
    }
  }
  v46 = 0x0.0p+0f;
  goto LABEL_94;
}

__int64 Hub_1199260(__int64 a1, __int64* a2)
{
  __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _BYTE* v22;
  int v23;

  v2 = *a2;
  v4 = *(unsigned __int8*)(*a2 + 24);
  v5 = *(_QWORD*)(*a2 + 32);
  if ((v4 & 1) == 0) {
    v5 = v4 >> 1;
  }
  if (v5 != 0) {
    v6 = *(_QWORD*)(v2 + 40);
    v7 = v2 + 25;
    v22 = nullptr;
    if ((v4 & 1) != 0) {
      v8 = v6;
    }
    else {
      v8 = v7;
    }
    v9 = strtof(v8, &v22);
    if (*v22 == 0) {
      goto LABEL_13;
    }
    if (*v22 == 102) {
      if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v22) != 0) {
        v9 = 0.0f;
      }
    LABEL_13:
      v10 = *(__int64**)(a1 + 168);
      v11 = *(__int64**)(a1 + 176);
      if (v10 != v11) {
        while (1) {
          v12 = *v10;
          if (*v10 != 0 && *(_DWORD*)(v12 + 8) == 4) {
            v13 = *(_QWORD*)(v12 + 24);
            if (v13 == 0 || *(_QWORD*)(v13 + 8) == -1) {
              break;
            }
          }
          v10 += 2;
          if (v10 == v11) {
            goto LABEL_40;
          }
        }
      }
      if (v10 != v11) {
        v14 = v10 + 2;
        if (v10 + 2 != v11) {
          do {
            v15 = *v14;
            if (*v14 == 0 || *(_DWORD*)(v15 + 8) != 4 ||
                (v16 = *(_QWORD*)(v15 + 24)) != 0 &&
                    *(_QWORD*)(v16 + 8) != -1) {
              v17 = v14[1];
              *v14 = 0;
              v14[1] = 0;
              v18 = v10[1];
              *v10 = v15;
              v10[1] = v17;
              if (v18 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
                std___1___shared_weak_count___release_weak(v18);
              }
              v10 += 2;
            }
            v14 += 2;
          } while (v14 != v11);
          v11 = *(__int64**)(a1 + 176);
        }
      }
      if (v10 != v11) {
        do {
          v19 = *(v11 - 1);
          if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
            std___1___shared_weak_count___release_weak(v19);
          }
          v11 -= 2;
        } while (v11 != v10);
        *(_QWORD*)(a1 + 176) = v10;
      }
    LABEL_40:
      if (*(_BYTE*)(GameData_21f3d08 + 136) != 0) {
        *(_BYTE*)(GameData_21f3d08 + 136) = 0;
        GameRoutine_d8cf60(GameData_21f3cb8);
      }
      *(float*)&v22 = v9;
      v20 = *(_QWORD*)GameData_212dc60[0];
      v23 = 1065353216;
      WORD2(v22) = 257;
      GameRoutine_cdeee0(v20, &v22);
      return 1;
    }
  }
  v9 = 0.0f;
  goto LABEL_13;
}

__int64 Hub_1199510(__int64 a1, __int64 a2)
{
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  float* v8;
  int v9;
  __int64 v10;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      return 1;
    }
  }
  v4 = GameData_21f3ca8;
  v5 = *(_QWORD*)(GameData_21f3ca8 + 16);
  v6 = *(_QWORD*)(v5 + 24);
  if (v6 != 0 && (v7 = std___1___shared_weak_count_lock(v6, a2)) != 0) {
    v8 = *(float**)(v5 + 16);
    v9 = v8 != nullptr && ((*(_BYTE*)(*(_QWORD*)v8 + 12LL) & 1) != 0 ||
                           v8[8] < *(float*)(*(_QWORD*)v8 + 8LL));
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v10 = v7;
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v10);
    }
  }
  else {
    v9 = 0;
  }
  return (*(float*)(v4 + 8) <= 0.0) & (unsigned int)~v9;
}

__int64 Hub_1199600(__int64 a1, __int64* a2, char a3)
{
  char v3;
  int v4;
  int v5;
  char v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  float v13;
  int v14;
  float v15;
  __int64 v16;
  float v17;
  _BYTE* v19;

  v3 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    if (*(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
      v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      if ((v4 & 8) != 0) {
        v5 = 2;
      }
      else {
        v5 = 3;
      }
      v3 = (v5 & v4) == 0;
    }
    else {
      v3 = 0;
    }
  }
  v6 = v3 | a3 ^ 1;
  if ((v6 & 1) == 0) {
    v7 = *a2;
    v8 = *(unsigned __int8*)(*a2 + 24);
    v9 = *(_QWORD*)(*a2 + 32);
    if ((v8 & 1) == 0) {
      v9 = v8 >> 1;
    }
    if (v9 == 0) {
      v14 = 30;
    LABEL_23:
      v15 = (float)(unsigned int)v14;
      v16 = *GameData_212d460[0];
      v17 = *(float*)(*GameData_212d460[0] + 144);
      *(_WORD*)(*GameData_212d460[0] + 136) &= 0xFF97u;
      if (v17 >= (float)(unsigned int)v14) {
        v15 = v17;
      }
      *(float*)(v16 + 144) = v15;
      return v6 & 1;
    }
    v10 = *(_QWORD*)(v7 + 40);
    v11 = v7 + 25;
    v19 = nullptr;
    if ((v8 & 1) != 0) {
      v12 = v10;
    }
    else {
      v12 = v11;
    }
    v13 = strtof(v12, &v19);
    if (*v19 != 0) {
      if (*v19 == 102) {
        if (v19[1] != 0) {
          v13 = 0.5;
        }
      }
      else {
        v13 = 0.5;
      }
    }
    v14 = (int)(float)(v13 * 60.0);
    if (v14 >= 1) {
      goto LABEL_23;
    }
  }
  return v6 & 1;
}

__int64 Hub_1199720(double a1)
{
  if (GameData_21ec7b8 != 0) {
    GameRoutine_113d7d0(GameData_21ec7b8 + 216, a1);
  }
  return 1;
}

bool Hub_1199760(long double a1, __int64 a2, __int64* a3, char a4)
{
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  long double* v14;
  unsigned __int64 v15;
  long double v17;

  if ((a4 & 1) != 0) {
    v4 = *a3;
    v5 = *(unsigned __int8*)(*a3 + 24);
    v6 = *(_QWORD*)(*a3 + 32);
    if ((v5 & 1) == 0) {
      v6 = v5 >> 1;
    }
    if (v6 != 0) {
      v7 = *(_QWORD*)(v4 + 40);
      v8 = v4 + 25;
      *(_QWORD*)&v17 = 0;
      if ((v5 & 1) != 0) {
        v9 = v7;
      }
      else {
        v9 = v8;
      }
      v10 = strtof(v9, &v17);
      if (**(_BYTE**)&v17 == 0) {
        goto LABEL_12;
      }
      if (**(_BYTE**)&v17 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + *(_QWORD*)&v17) != 0) {
          v10 = 0.5;
        }
      LABEL_12:
        v11 = game_ProcFadeView_instance_;
        if (game_ProcFadeView_instance_ == 0) {
          return true;
        }
      LABEL_15:
        v12 = v11 + ((unsigned __int64)*(unsigned __int8*)(v11 + 480) << 6);
        if (*(float*)(v12 + 172) == *(float*)(v12 + 168) &&
            (v13 = v12 + 160,
             *((_QWORD*)&a1 + 1) =
                 LANES128_OF(
                     ((__n128 (*)(unsigned __int64)) *
                      (_QWORD*)(*(_QWORD*)(v12 + 160) + 16LL))(v12 + 160))
                     .n128_u64[1],
             *((float*)&a1 + 3) == 1.0)) {
          if (*(float*)(v13 + 12) == *(float*)(v13 + 8)) {
            (*(void (**)(unsigned __int64))(*(_QWORD*)v13 + 16LL))(v13);
          }
          else {
            a1 = *(long double*)(v13 + 48);
          }
          v17 = a1;
          *(_QWORD*)&a1 = 0;
          v14 = &v17;
        }
        else {
          *(_QWORD*)&a1 = 0;
          v14 = (long double*)GameData_212c960;
        }
        game_809dc0(v11, v14, a1);
        if (game_ProcFadeView_instance_ == 0) {
          return true;
        }
        game_809ba0(v10);
        goto LABEL_24;
      }
    }
    v10 = 0.5;
    v11 = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ == 0) {
      return true;
    }
    goto LABEL_15;
  }
LABEL_24:
  if (game_ProcFadeView_instance_ != 0) {
    v15 = game_ProcFadeView_instance_ +
          ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                 480)
           << 6);
    return *(float*)(v15 + 172) == *(float*)(v15 + 168);
  }
  return true;
}

bool Hub_11998d0(long double a1, __int64 a2, __int64* a3, char a4)
{
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  _BYTE* v13;

  if ((a4 & 1) != 0) {
    v4 = *a3;
    v5 = *(unsigned __int8*)(*a3 + 24);
    v6 = *(_QWORD*)(*a3 + 32);
    if ((v5 & 1) == 0) {
      v6 = v5 >> 1;
    }
    if (v6 != 0) {
      v7 = *(_QWORD*)(v4 + 40);
      v8 = v4 + 25;
      v13 = nullptr;
      if ((v5 & 1) != 0) {
        v9 = v7;
      }
      else {
        v9 = v8;
      }
      *(float*)&a1 = strtof(v9, &v13);
      if (*v13 == 0) {
      LABEL_12:
        v10 = game_ProcFadeView_instance_;
        if (game_ProcFadeView_instance_ == 0) {
          return true;
        }
      LABEL_15:
        game_809dc0(v10, GameData_212c960, a1);
        goto LABEL_16;
      }
      if (*v13 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v13) != 0) {
          *(float*)&a1 = 0.5;
        }
        goto LABEL_12;
      }
    }
    LODWORD(a1) = 0.5;
    v10 = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ == 0) {
      return true;
    }
    goto LABEL_15;
  }
LABEL_16:
  if (game_ProcFadeView_instance_ != 0) {
    v11 = game_ProcFadeView_instance_ +
          ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                 480)
           << 6);
    return *(float*)(v11 + 172) == *(float*)(v11 + 168);
  }
  return true;
}

__int64 game_talk_Hub_DisableLookAt(_QWORD* a1, __int64 a2)
{
  unsigned __int64 v3;
  __int64 v4;
  __int64* v5;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    _QWORD v17[4];
    _QWORD* v18;
  } v17_;
  __int64 v19[2];
  __int64 v20[2];
  struct {
    __int64 v21;
    __int64 v22;
  } v21_;
  struct {
    __int64 v23;
    __int64 v24;
  } v23_;
  struct {
    __int64 v25;
    unsigned __int64 v26;
    _QWORD* v27;
  } v25_;

  if ((*(_BYTE*)(*(_QWORD*)a2 + 24LL) & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(&v25_.v25,
                                       *(_QWORD*)(*(_QWORD*)a2 + 40LL),
                                       *(_QWORD*)(*(_QWORD*)a2 + 32LL));
  }
  else {
    v3 = *(_QWORD*)(*(_QWORD*)a2 + 32LL);
    v4 = *(_QWORD*)(*(_QWORD*)a2 + 40LL);
    v25_.v25 = *(_QWORD*)(*(_QWORD*)a2 + 24LL);
    v25_.v26 = v3;
    v25_.v27 = (_QWORD*)v4;
  }
  v5 = (__int64*)GameData_212dbf0[0];
  if ((v25_.v25 & 1) != 0) {
    v6 = v25_.v27;
  }
  else {
    v6 = (__int64*)((char*)&v25_.v25 + 1);
  }
  if ((v25_.v25 & 1) != 0) {
    v7 = v25_.v26;
  }
  else {
    v7 = (unsigned __int64)(unsigned __int8)v25_.v25 >> 1;
  }
  game_hub_efca60_alt1((void*)(&v23_.v23), *(_QWORD*)GameData_212dbf0[0], v6,
                       v7);
  if (v23_.v24 == 0) {
    goto LABEL_30;
  }
  if (*(_QWORD*)(v23_.v24 + 8) != -1) {
    v8 = *v5;
    v21_.v21 = v23_.v23;
    v21_.v22 = v23_.v24;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v23_.v24 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_efaca0_alt1(v8, &v21_.v21);
    if (v21_.v22 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v21_.v22);
    }
    v9 = v23_.v24;
    v20[0] = v23_.v23;
    v20[1] = v23_.v24;
    if (v23_.v24 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v23_.v24 + 16), 1u,
                                memory_order_relaxed);
      Hub_119b0e0_alt2((__int64)a1, 5, v20);
      std___1___shared_weak_count___release_weak_alt1(v9);
      v10 = v23_.v24;
      if (v23_.v24 == 0) {
        goto LABEL_30;
      }
    }
    else {
      Hub_119b0e0_alt2((__int64)a1, 5, v20);
      v10 = v23_.v24;
      if (v23_.v24 == 0) {
        goto LABEL_30;
      }
    }
    v11 = std___1___shared_weak_count_lock_alt3(v10);
    if (v11 != 0) {
      v12 = v11;
      if (v23_.v23 == 0) {
        goto LABEL_26;
      }
      v13 = *(_QWORD*)(v23_.v23 + 24);
      v19[0] = v23_.v23;
      v19[1] = v11;
      *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v13 + 8) + 336LL) + 69LL) = 1;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                                memory_order_relaxed);
      v17_.v18 = v17_.v17;
      v17_.v17[0] = GameData_2015190;
      Hub_119b4e0(a1, 5, v19, (__int64)v17_.v17);
      if (v17_.v18 == v17_.v17) {
        v14 = 32;
      }
      else {
        if (v17_.v18 == nullptr) {
        LABEL_25:
          std___1___shared_weak_count___release_weak_alt1(v12);
        LABEL_26:
          if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
            std___1___shared_weak_count___release_weak_alt1(v12);
          }
          goto LABEL_28;
        }
        v14 = 40;
      }
      (*(void (**)(__int64))(*v17_.v18 + v14))((__int64)v17_.v18);
      goto LABEL_25;
    }
  }
LABEL_28:
  if (v23_.v24 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v23_.v24);
  }
LABEL_30:
  if ((v25_.v25 & 1) != 0 && v25_.v27 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, (__int64)v25_.v27);
  }
  return 1;
}

__int64 Hub_1199bc0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3;
  __int64 v4;
  __int64* v5;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v13[2];
  struct {
    __int64 v14;
    __int64 v15;
  } v14_;
  struct {
    __int64 v16;
    __int64 v17;
  } v16_;
  struct {
    __int64 v18;
    unsigned __int64 v19;
    _QWORD* v20;
  } v18_;

  if ((*(_BYTE*)(*(_QWORD*)a2 + 24LL) & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(&v18_.v18,
                                       *(_QWORD*)(*(_QWORD*)a2 + 40LL),
                                       *(_QWORD*)(*(_QWORD*)a2 + 32LL));
  }
  else {
    v3 = *(_QWORD*)(*(_QWORD*)a2 + 32LL);
    v4 = *(_QWORD*)(*(_QWORD*)a2 + 40LL);
    v18_.v18 = *(_QWORD*)(*(_QWORD*)a2 + 24LL);
    v18_.v19 = v3;
    v18_.v20 = (_QWORD*)v4;
  }
  v5 = (__int64*)GameData_212dbf0[0];
  if ((v18_.v18 & 1) != 0) {
    v6 = v18_.v20;
  }
  else {
    v6 = (__int64*)((char*)&v18_.v18 + 1);
  }
  if ((v18_.v18 & 1) != 0) {
    v7 = v18_.v19;
  }
  else {
    v7 = (unsigned __int64)(unsigned __int8)v18_.v18 >> 1;
  }
  game_hub_efca60_alt1((void*)(&v16_.v16), *(_QWORD*)GameData_212dbf0[0], v6,
                       v7);
  if (v16_.v17 != 0) {
    if (*(_QWORD*)(v16_.v17 + 8) != -1) {
      v8 = *v5;
      v14_.v14 = v16_.v16;
      v14_.v15 = v16_.v17;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v16_.v17 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_efaca0_alt1(v8, &v14_.v14);
      if (v14_.v15 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v14_.v15);
      }
      v9 = v16_.v17;
      v13[0] = v16_.v16;
      v13[1] = v16_.v17;
      if (v16_.v17 == 0) {
        Hub_119b0e0_alt2(a1, 5, v13);
        v10 = v16_.v17;
        if (v16_.v17 == 0) {
          goto LABEL_18;
        }
        goto LABEL_17;
      }
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v16_.v17 + 16), 1u,
                                memory_order_relaxed);
      Hub_119b0e0_alt2(a1, 5, v13);
      std___1___shared_weak_count___release_weak_alt1(v9);
    }
    v10 = v16_.v17;
    if (v16_.v17 != 0) {
    LABEL_17:
      std___1___shared_weak_count___release_weak_alt1(v10);
    }
  }
LABEL_18:
  if ((v18_.v18 & 1) != 0 && v18_.v20 != nullptr) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, (__int64)v18_.v20);
  }
  return 1;
}

__int64 Hub_119a0b0(__int64 result, __int64 a2)
{
  bool v2;
  bool v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  atomic_ullong* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if (game_hub_ProcHubSeqView_instance_ != 0) {
    v2 = GameData_21f3d10 == 0 ||
         *(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 218) == 0;
    v3 = !v2 && *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 232) <= 0;
    if (v3 && (*(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 240) & 1) == 0) {
      if (a2 == 0) {
        goto LABEL_24;
      }
      if (*(_QWORD*)(result + 120) == 0) {
        goto LABEL_24;
      }
      v4 = result;
      v6 = std___1___shared_weak_count_lock(*(_QWORD*)(result + 120), a2);
      result = v4;
      if (v6 == 0) {
        goto LABEL_24;
      }
      v7 = *(_QWORD*)(v4 + 112);
      if (v7 != 0) {
        v8 = (atomic_ullong*)(v6 + 16);
        v9 = a2;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                  memory_order_relaxed);
        if (*(_BYTE*)(v4 + 160) == 1) {
          atomic_fetch_add_explicit(v8, 1u, memory_order_relaxed);
          v10 = *(_QWORD*)(v4 + 144);
          *(_QWORD*)(v4 + 136) = v7;
          *(_QWORD*)(v4 + 144) = v6;
          if (v10 != 0) {
            std___1___shared_weak_count___release_weak(v10);
            v9 = a2;
            result = v4;
          }
          *(_QWORD*)(result + 152) = v9;
        }
        else {
          *(_QWORD*)(v4 + 136) = v7;
          *(_QWORD*)(v4 + 144) = v6;
          atomic_fetch_add_explicit(v8, 1u, memory_order_relaxed);
          *(_QWORD*)(v4 + 152) = a2;
          *(_BYTE*)(v4 + 160) = 1;
        }
        std___1___shared_weak_count___release_weak(v6);
        result = v4;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak(v6);
        result = v4;
      }
      if (v7 == 0) {
      LABEL_24:
        if (*(_BYTE*)(result + 160) == 1) {
          if (*(_QWORD*)(result + 144) != 0) {
            v11 = result;
            std___1___shared_weak_count___release_weak(
                *(_QWORD*)(result + 144));
            result = v11;
          }
          *(_BYTE*)(result + 160) = 0;
        }
      }
    }
  }
  return result;
}

bool Hub_119a3a0(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char v9;
  char v10;
  int v11;
  unsigned __int64 v12;
  bool v13;
  char v14;
  unsigned __int16* v15;
  _QWORD* v16;
  __int64 v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  char v27;
  unsigned __int64 v28;
  __int64* v29;
  unsigned __int64 v30;
  char v31;
  char* v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64** v38;
  __int64* v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64* v43;
  __int64 v44;
  _QWORD* v45;
  _QWORD* v46;
  _QWORD* v47;
  char v48;
  __int64 v49;
  __int64 v50;
  __int64* v51;
  __int64* v52;
  char v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  char* v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  __int64* v65;
  __int64 v66;
  char v67;
  char v69;
  char* v70;
  char v71;
  __int64 v72;
  unsigned __int64 v73;
  unsigned __int16* v74;
  __int64 v75;
  unsigned __int64 v76;
  unsigned __int16* v77;
  __int64 v78;
  unsigned __int64 v79;
  char* v80;
  __int64 v81;
  _QWORD* v82;
  __int64 v83;
  __int64* v84;
  __int64* v85;
  __int64 v86;
  __int64 v87;
  unsigned __int64 v88;
  char* v89;
  char v90[12];

  v5 = fw_memory_g_heap_manager_ptr;
  do {
    v6 = *(unsigned __int8*)a3;
    v7 = (v6 & 1) != 0 ? a3[1] : v6 >> 1;
    if (v7 == 0) {
      break;
    }
    if ((v6 & 1) != 0) {
      fw_text_String_CopyTerminated(&v78, a3[2], a3[1]);
    }
    else {
      v8 = a3[1];
      v78 = *a3;
      v79 = v8;
      v80 = (char*)a3[2];
    }
    GameRoutine_112d860((void*)&v75, &v78);
    v9 = *(_BYTE*)(a1 + 129);
    v10 = v75;
    *(_BYTE*)(a1 + 129) = 0;
    if ((v10 & 1) != 0) {
      fw_text_String_CopyTerminated(&v72, v77, v76);
    }
    else {
      v72 = v75;
      v73 = v76;
      v74 = v77;
    }
    *(_WORD*)((char*)&v87 + 1) = 12079;
    v11 = v72 & 1;
    v12 = (unsigned __int64)(unsigned __int8)v72 >> 1;
    if (v11 != 0) {
      v12 = v73;
    }
    if (v12 >= 2) {
      v15 = v74;
      if (v11 == 0) {
        v15 = (unsigned __int16*)((char*)&v72 + 1);
      }
      v13 = *v15 == *(unsigned __int16*)((char*)&v87 + 1);
      v14 = 1;
    }
    else {
      v13 = false;
      v14 = 1;
      if (v12 == 0) {
        goto LABEL_98;
      }
    }
    if (!v13) {
      v71 = v9;
      v16 = (_QWORD*)v5;
      GameRoutine_112daa0(&v72);
      v85 = nullptr;
      v86 = 0;
      v84 = nullptr;
      v17 = GameRoutine_112dfe0(&v72, &v84);
      v18 = v84;
      v19 = v85;
      v82 = nullptr;
      v83 = 0;
      v20 = (char*)v85 - (char*)v84;
      v81 = 0;
      if (v85 == v84) {
        v5 = (__int64)v16;
        v29 = v84;
        if (v84 != nullptr) {
          goto LABEL_85;
        }
        goto LABEL_97;
      }
      if (0xAAAAAAAAAAAAAAABLL * (v20 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
        GameRoutine_64aa00(v17);
      }
      v21 =
          fw_memory_HeapManager_Allocate(*v16, (char*)v85 - (char*)v84, 16, 0);
      v22 = v21 + v20;
      v23 = v21;
      v81 = v21;
      v24 = (_QWORD*)v21;
      v83 = v22;
      do {
        if ((*(_BYTE*)v18 & 1) != 0) {
          fw_text_String_CopyTerminated(v24, v18[2], v18[1]);
        }
        else {
          v25 = *v18;
          v26 = v18[2];
          v24[1] = v18[1];
          v24[2] = v26;
          *v24 = v25;
        }
        v18 += 3;
        v24 += 3;
      } while (v18 != v19);
      v27 = *(_BYTE*)v23;
      v82 = v24;
      if ((v27 & 1) != 0) {
        fw_text_String_CopyTerminated(&v87, *(_QWORD*)(v23 + 16),
                                      *(_QWORD*)(v23 + 8));
      }
      else {
        v28 = *(_QWORD*)(v23 + 8);
        v87 = *(_QWORD*)v23;
        v88 = v28;
        v89 = *(char**)(v23 + 16);
      }
      v30 = *(_QWORD*)(a1 + 80);
      v31 = v87;
      v14 = 1;
      if (v30 != 0 && *(_QWORD*)(a1 + 96) != 0) {
        if ((v87 & 1) != 0) {
          v32 = v89;
        }
        else {
          v32 = (char*)&v87 + 1;
        }
        if ((v87 & 1) != 0) {
          v33 = v88;
        }
        else {
          v33 = (unsigned __int64)(unsigned __int8)v87 >> 1;
        }
        v70 = v32;
        v34 = std___1___hash_memory();
        v35 = v30 - 1;
        v36 = v34;
        if ((v30 & (v30 - 1)) != 0) {
          v37 = v34;
          if (v34 >= v30) {
            v37 = v34 % v30;
          }
        }
        else {
          v37 = v34 & v35;
        }
        v38 = *(__int64***)(*(_QWORD*)(a1 + 72) + 8 * v37);
        if (v38 != nullptr) {
          v69 = v31;
          v39 = *v38;
          if (*v38 != nullptr) {
            if ((v30 & v35) != 0) {
              while (1) {
                v40 = v39[1];
                if (v40 == v36) {
                  v41 = *((unsigned __int8*)v39 + 16);
                  v42 = v39[3];
                  if ((v41 & 1) == 0) {
                    v42 = v41 >> 1;
                  }
                  if (v42 == v33) {
                    v43 = (v41 & 1) != 0 ? (__int64*)v39[4]
                                         : (__int64*)((char*)v39 + 17);
                    if ((unsigned int)memcmp(v43, v70, v33) == 0) {
                      v5 = (__int64)v16;
                      goto LABEL_145;
                    }
                  }
                }
                else {
                  if (v40 >= v30) {
                    v40 %= v30;
                  }
                  if (v40 != v37) {
                    goto LABEL_63;
                  }
                }
                v39 = (__int64*)*v39;
                if (v39 == nullptr) {
                  goto LABEL_63;
                }
              }
            }
            v5 = (__int64)v16;
            while (1) {
              v62 = v39[1];
              if (v62 == v36) {
                v63 = *((unsigned __int8*)v39 + 16);
                v64 = v39[3];
                if ((v63 & 1) == 0) {
                  v64 = v63 >> 1;
                }
                if (v64 == v33) {
                  v65 = (v63 & 1) != 0 ? (__int64*)v39[4]
                                       : (__int64*)((char*)v39 + 17);
                  if ((unsigned int)memcmp(v65, v70, v33) == 0) {
                  LABEL_145:
                    v66 = v39[10];
                    v90[0] = v71 ^ 1;
                    if (v66 == 0) {
                      GameRoutine_60a310();
                    }
                    v67 = (*(__int64 (**)(__int64, __int64, __int64*, char*))(
                        *(_QWORD*)v66 + 48LL))(v66, a1, &v81, v90);
                    v31 = v87;
                    v14 = v67;
                  LABEL_66:
                    if ((v31 & 1) != 0 && v89 != nullptr) {
                      v44 = 56;
                      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
                        v44 = 128;
                      }
                      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v44);
                    }
                    v45 = (_QWORD*)v81;
                    if (v81 != 0) {
                      v46 = v82;
                      if ((_QWORD*)v81 == v82) {
                        goto LABEL_81;
                      }
                      v47 = v82;
                      do {
                        v48 = *((_BYTE*)v47 - 24);
                        v47 -= 3;
                        if ((v48 & 1) != 0 && *(v46 - 1) != 0) {
                          v49 = 56;
                          if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
                            v49 = 128;
                          }
                          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 +
                                                             v49);
                        }
                        v46 = v47;
                      } while (v47 != v45);
                      v82 = v45;
                      if (v81 != 0) {
                      LABEL_81:
                        v50 = 56;
                        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
                          v50 = 128;
                        }
                        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v50);
                      }
                      v29 = v84;
                      if (v84 != nullptr) {
                      LABEL_85:
                        v51 = v85;
                        if (v29 == v85) {
                          goto LABEL_94;
                        }
                        v52 = v85;
                        do {
                          v53 = *((_BYTE*)v52 - 24);
                          v52 -= 3;
                          if ((v53 & 1) != 0 && *(v51 - 1) != 0) {
                            v54 = 56;
                            if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
                              v54 = 128;
                            }
                            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 +
                                                               v54);
                          }
                          v51 = v52;
                        } while (v52 != v29);
                        v85 = v29;
                        if (v84 != nullptr) {
                        LABEL_94:
                          v55 = 56;
                          if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
                            v55 = 128;
                          }
                          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 +
                                                             v55);
                        }
                      }
                    }
                    else {
                      v29 = v84;
                      if (v84 != nullptr) {
                        goto LABEL_85;
                      }
                    }
                  LABEL_97:
                    v11 = v72 & 1;
                    goto LABEL_98;
                  }
                }
              }
              else if ((v62 & v35) != v37) {
                goto LABEL_144;
              }
              v39 = (__int64*)*v39;
              if (v39 == nullptr) {
              LABEL_144:
                v31 = v69;
                v14 = 1;
                goto LABEL_66;
              }
            }
          }
        LABEL_63:
          v31 = v69;
        }
        v14 = 1;
      }
      v5 = (__int64)v16;
      goto LABEL_66;
    }
  LABEL_98:
    if (v11 != 0 && v74 != nullptr) {
      v56 = 56;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
        v56 = 128;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v56);
    }
    if ((v14 & 1) == 0) {
      *(_BYTE*)(a1 + 129) = 1;
      if ((v75 & 1) != 0) {
        goto LABEL_119;
      }
      goto LABEL_123;
    }
    if (a3 == &v78) {
      goto LABEL_118;
    }
    if ((*(_BYTE*)a3 & 1) != 0) {
      if ((v78 & 1) != 0) {
        v58 = v80;
      }
      else {
        v58 = (char*)&v78 + 1;
      }
      if ((v78 & 1) != 0) {
        v59 = v79;
      }
      else {
        v59 = (unsigned __int64)(unsigned __int8)v78 >> 1;
      }
      SpineModel_64dde0(a3, v58, v59);
    LABEL_118:
      if ((v75 & 1) != 0) {
        goto LABEL_119;
      }
      goto LABEL_123;
    }
    if ((v78 & 1) != 0) {
      GameRoutine_64df20(a3, v80, v79);
      if ((v75 & 1) != 0) {
      LABEL_119:
        if (v77 != nullptr) {
          v60 = 56;
          if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
            v60 = 128;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v60);
        }
      }
    }
    else {
      v57 = v79;
      *a3 = v78;
      a3[1] = v57;
      a3[2] = (__int64)v80;
      if ((v75 & 1) != 0) {
        goto LABEL_119;
      }
    }
  LABEL_123:
    if ((v78 & 1) != 0 && v80 != nullptr) {
      v61 = 56;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
        v61 = 128;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v61);
    }
  } while ((v14 & 1) != 0);
  return v7 == 0;
}

__attribute__((swiftcall)) void Hub_119acc0(PSEUDO_X8 x8_, __int64 result,
                                            _QWORD* a2, signed __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64 v6;
  __int64 v7;
  struct {
    __int64 v8;
    __int64 v9;
  } v8_;

  v5 = *(_QWORD*)(result + 120);
  if (v5 != 0 && *(_QWORD*)(v5 + 8) != -1) {
    *a4 = *(_QWORD*)(result + 112);
    a4[1] = v5;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
    {
      result;
      return;
    }
  }
  if (a3 == 0) {
    goto LABEL_18;
  }
  game_hub_efca60_alt1((void*)(&v8_.v8), GameData_21f3d08, a2, a3);
  result = v8_.v9;
  if (v8_.v9 == 0) {
    goto LABEL_18;
  }
  v6 = std___1___shared_weak_count_lock_alt3(v8_.v9);
  result = v8_.v9;
  if (v6 != 0) {
    v7 = v8_.v8;
  }
  else {
    v7 = 0;
  }
  if (v8_.v9 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v8_.v9);
  }
  if (v7 != 0) {
    *a4 = v7;
    a4[1] = v6;
    if (v6 == 0) {
      result;
      return;
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                              memory_order_relaxed);
  }
  else if (v6 == 0) {
  LABEL_18:
    *a4 = 0;
    a4[1] = 0;
    {
      result;
      return;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    result = std___1___shared_weak_count___release_weak_alt1(v6);
  }
  if (v7 == 0) {
    goto LABEL_18;
  }
  {
    result;
    return;
  }
}

__int64 Hub_119adb0(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  atomic_ullong* v6;
  _QWORD v7[2];
  _QWORD v8[2];
  _QWORD v9[2];

  result = *(_QWORD*)(a1 + 120);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result, a2);
    if (result != 0) {
      v4 = *(_QWORD*)(a1 + 112);
      v5 = result;
      if (v4 != 0) {
        v9[0] = *(_QWORD*)(a1 + 112);
        v9[1] = result;
        v6 = (atomic_ullong*)(result + 16);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 16), 1u,
                                  memory_order_relaxed);
        Hub_119b0e0_alt1(a1, 0, v9);
        std___1___shared_weak_count___release_weak(v5);
        v8[0] = v4;
        v8[1] = v5;
        atomic_fetch_add_explicit(v6, 1u, memory_order_relaxed);
        Hub_119b0e0_alt1(a1, 2, v8);
        std___1___shared_weak_count___release_weak(v5);
        v7[0] = v4;
        v7[1] = v5;
        atomic_fetch_add_explicit(v6, 1u, memory_order_relaxed);
        Hub_119b0e0_alt1(a1, 3, v7);
        std___1___shared_weak_count___release_weak(v5);
        result = *(_QWORD*)(a1 + 120);
        *(_QWORD*)(a1 + 112) = 0;
        *(_QWORD*)(a1 + 120) = 0;
        if (result != 0) {
          result = std___1___shared_weak_count___release_weak(result);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        return std___1___shared_weak_count___release_weak(v5);
      }
    }
  }
  return result;
}

__int64 game_talk_Hub_PlayMotionImpl(__int64 result, __int64* a2, _BYTE* a3,
                                     __int64 a4, float a5)
{
  int v5;
  unsigned __int8* v6;
  unsigned int v7;
  int v8;
  __int64 v9;
  __int64 v12;
  __int64 v13;
  char v14;
  float v15;
  char v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD v21[4];
  _QWORD* v22;
  _QWORD v23[2];
  _QWORD v24[4];
  _QWORD* v25;
  _QWORD v26[2];
  _QWORD v27[2];

  if (a4 != 0) {
    v5 = (unsigned __int8)*a3;
    if (*a3 != 0) {
      v6 = a3 + 1;
      v7 = 0;
      do {
        v7 = v5 - v7 + 32 * v7;
        v8 = *v6++;
        v5 = v8;
      } while (v8 != 0);
      if (v7 != 0 && a2[1] != 0) {
        v9 = result;
        result = std___1___shared_weak_count_lock_alt1(a2[1]);
        v12 = result;
        if (result != 0) {
          v13 = *a2;
          if (*a2 == 0 || (*(_BYTE*)(v13 + 184) & 0x80) != 0) {
          LABEL_26:
            if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
              return std___1___shared_weak_count___release_weak(v12);
            }
            return result;
          }
          v27[0] = *a2;
          v27[1] = result;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 16), 1u,
                                    memory_order_relaxed);
          Hub_119b0e0_alt1(v9, 0, v27);
          std___1___shared_weak_count___release_weak(v12);
          v14 = GameRoutine_108c760(v7);
          v15 = 0.0f;
          v16 = v14;
          v17 = *(_QWORD*)(v13 + 24);
          v18 = 0x100000000LL;
          if (a5 < 0.0f) {
            v18 = 0;
          }
          else {
            v15 = a5;
          }
          if ((v16 & 1) != 0) {
            HubCharacterNatives_cee710(v17, v7, v18 | LODWORD(v15), 0, 0, 1.0f);
            v19 = a2[1];
            v26[0] = *a2;
            v26[1] = v19;
            if (v19 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                                        memory_order_relaxed);
            }
            v24[0] = GameData_2015210;
            v25 = v24;
            GameRoutine_119b4e0(v9, 0, v26, v24);
            result = (__int64)v25;
            if (v25 != v24) {
            LABEL_17:
              if (result != 0) {
                v20 = 40;
              LABEL_23:
                result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v20))(
                    (__int64)result);
              }
              if (v19 != 0) {
                result = std___1___shared_weak_count___release_weak(v19);
              }
              goto LABEL_26;
            }
          }
          else {
            HubCharacterNatives_cee990(v17, v7, 2, v18 | LODWORD(v15), 0, 0,
                                       1.0f);
            v19 = a2[1];
            v23[0] = *a2;
            v23[1] = v19;
            if (v19 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                                        memory_order_relaxed);
            }
            v21[0] = GameData_2015290;
            v22 = v21;
            GameRoutine_119b4e0(v9, 0, v23, v21);
            result = (__int64)v22;
            if (v22 != v21) {
              goto LABEL_17;
            }
          }
          v20 = 32;
          goto LABEL_23;
        }
      }
    }
  }
  return result;
}

__int64 Hub_119b0e0(__int64 result, __int64 a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64** v6;
  __int64* v7;
  __int64* v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  unsigned __int64 add;
  char v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  char v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;

  v3 = a3[1];
  v4 = result;
  if (v3 == 0) {
    v6 = (__int64**)(result + 176);
    v8 = *(__int64**)(result + 176);
    goto LABEL_57;
  }
  v5 = *a3;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                            memory_order_relaxed);
  v6 = (__int64**)(result + 176);
  v7 = *(__int64**)(result + 176);
  v8 = *(__int64**)(result + 168);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                            memory_order_relaxed);
  if (v8 == v7) {
    goto LABEL_57;
  }
  if (v5 == 0) {
    do {
      if (*v8 != 0) {
        result = std___1___shared_weak_count_lock(v3, a2);
        if (result != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v18 = result;
          (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
          result = std___1___shared_weak_count___release_weak(v18);
        }
      }
      v8 += 2;
    } while (v8 != v7);
  LABEL_56:
    v8 = v7;
    goto LABEL_57;
  }
  v9 = a2;
  v31 = v5;
  while (1) {
    if (*v8 != 0) {
      result = std___1___shared_weak_count_lock(v3, a2);
      if (result != 0) {
        v10 = *v8;
        if (*(_DWORD*)(*v8 + 8) == v9 && *(_QWORD*)(v10 + 24) != 0) {
          v11 = result;
          v12 = std___1___shared_weak_count_lock(*(_QWORD*)(v10 + 24), a2);
          if (v12 != 0) {
            v13 = v12;
            v14 = *(_QWORD*)(v10 + 16) == v31;
            add = atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL);
            v16 = v14;
            if (add == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
              std___1___shared_weak_count___release_weak(v13);
            }
          }
          else {
            v16 = 0;
          }
          result = v11;
        }
        else {
          v16 = 0;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v17 = result;
          (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
          result = std___1___shared_weak_count___release_weak(v17);
        }
        if ((v16 & 1) != 0) {
          break;
        }
      }
    }
    v8 += 2;
    if (v8 == v7) {
      goto LABEL_56;
    }
  }
  if (v8 == v7) {
    goto LABEL_56;
  }
  v19 = v8 + 2;
  if (v8 + 2 != v7) {
    while (*v19 != 0) {
      result = std___1___shared_weak_count_lock(v3, a2);
      v20 = *v19;
      if (result == 0) {
        goto LABEL_53;
      }
      if (*(_DWORD*)(v20 + 8) == v9 && *(_QWORD*)(v20 + 24) != 0) {
        v21 = result;
        v22 = std___1___shared_weak_count_lock(*(_QWORD*)(v20 + 24), a2);
        if (v22 != 0) {
          v23 = v22;
          v14 = *(_QWORD*)(v20 + 16) == v31;
          v24 = atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                 0xFFFFFFFFFFFFFFFFLL);
          v25 = v14;
          if (v24 == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
            std___1___shared_weak_count___release_weak(v23);
          }
        }
        else {
          v25 = 0;
        }
        result = v21;
      }
      else {
        v25 = 0;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if ((v25 & 1) == 0) {
          goto LABEL_52;
        }
      }
      else {
        v26 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        result = std___1___shared_weak_count___release_weak(v26);
        if ((v25 & 1) == 0) {
        LABEL_52:
          v20 = *v19;
        LABEL_53:
          v27 = v19[1];
          *v19 = 0;
          v19[1] = 0;
          v28 = v8[1];
          *v8 = v20;
          v8[1] = v27;
          if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
            result = std___1___shared_weak_count___release_weak(v28);
          }
          v8 += 2;
        }
      }
      v19 += 2;
      if (v19 == v7) {
        goto LABEL_57;
      }
    }
    v20 = 0;
    goto LABEL_53;
  }
LABEL_57:
  v29 = *(__int64**)(v4 + 176);
  if (v8 != v29) {
    do {
      v30 = *(v29 - 1);
      if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
        result = std___1___shared_weak_count___release_weak(v30);
      }
      v29 -= 2;
    } while (v29 != v8);
    *v6 = v8;
  }
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64 Hub_119b730(__int64 a1, __int64 a2, int a3, __int64* a4, __int64 a5)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BYTE* v11;
  _BYTE* v12;
  _QWORD* v13;
  _BYTE* v14;
  _BYTE* v15;
  __int64 v16;
  __int64 v17;
  __int64 result;
  __int64 v19;
  _BYTE v20[32];
  _BYTE* v21;
  _QWORD v22[4];

  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)a1 = a2;
  *(_DWORD*)(a1 + 8) = a3;
  v7 = *a4;
  v8 = a4[1];
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                              memory_order_relaxed);
    v9 = *(_QWORD*)(a1 + 24);
    *(_QWORD*)(a1 + 16) = v7;
    *(_QWORD*)(a1 + 24) = v8;
    if (v9 != 0) {
      std___1___shared_weak_count___release_weak(v9);
    }
  }
  else {
    *(_QWORD*)(a1 + 16) = v7;
    *(_QWORD*)(a1 + 24) = 0;
  }
  v10 = *(_QWORD*)(a5 + 32);
  v11 = (_BYTE*)(a1 + 32);
  if (v10 != 0) {
    if (v10 == a5) {
      v21 = v20;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v10 + 24LL))(v10, v20);
    }
    else {
      v21 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    }
  }
  else {
    v21 = nullptr;
  }
  if (v11 != v20) {
    v12 = v21;
    v13 = *(_QWORD**)(a1 + 64);
    if (v21 == v20) {
      if (v13 == (_QWORD*)v11) {
        (*(void (**)(void*, void*))(*(_QWORD*)v21 + 24))(v21, v22);
        (*(void (**)(_BYTE*))(*(_QWORD*)v21 + 32LL))(v21);
        v16 = *(_QWORD*)(a1 + 64);
        v21 = nullptr;
        (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v16 + 24LL))(v16, v20);
        (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 64) + 32LL))(
            *(_QWORD*)(a1 + 64));
        v17 = v22[0];
        *(_QWORD*)(a1 + 64) = 0;
        v21 = v20;
        (*(void (**)(_QWORD*, __int64))(v17 + 24))(v22, a1 + 32);
        (*(void (**)(_QWORD*))(v22[0] + 32LL))(v22);
        *(_QWORD*)(a1 + 64) = v11;
      }
      else {
        (*(void (**)(void*, void*))(*(_QWORD*)v21 + 24))(v21, v11);
        (*(void (**)(_BYTE*))(*(_QWORD*)v21 + 32LL))(v21);
        v14 = *(_BYTE**)(a1 + 64);
        *(_QWORD*)(a1 + 64) = v11;
        v21 = v14;
      }
    }
    else if (v13 == (_QWORD*)v11) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, _BYTE*))(
          *v13 + 24LL))((void*)v13, *(_QWORD*)(a1 + 64), v20);
      (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 64) + 32LL))(*(_QWORD*)(a1 + 64));
      v15 = v21;
      v21 = v20;
      *(_QWORD*)(a1 + 64) = v15;
    }
    else {
      v21 = *(_BYTE**)(a1 + 64);
      *(_QWORD*)(a1 + 64) = v12;
    }
  }
  result = (__int64)v21;
  if (v21 == v20) {
    v19 = 32;
  }
  else {
    if (v21 == nullptr) {
      return result;
    }
    v19 = 40;
  }
  return (*(__int64 (**)(void*))(*(_QWORD*)v21 + v19))((void*)v21);
}

bool Hub_119b940(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  unsigned __int64 add;
  char v14;
  __int64 v15;
  _BOOL4 v16;
  __int64 v17;
  __int64 v18;

  v2 = a2[1];
  if (v2 != 0) {
    v3 = *(__int64**)(a1 + 168);
    v4 = *(__int64**)(a1 + 176);
    v5 = *a2;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
    if (v3 != v4) {
      if (v5 != 0) {
        while (1) {
          if (*v3 != 0) {
            v7 = std___1___shared_weak_count_lock_alt1(v2);
            if (v7 != 0) {
              v8 = *v3;
              if (*(_DWORD*)(*v3 + 8) == 2 && *(_QWORD*)(v8 + 24) != 0) {
                v9 = v7;
                v10 =
                    std___1___shared_weak_count_lock_alt1(*(_QWORD*)(v8 + 24));
                if (v10 != 0) {
                  v11 = v10;
                  v12 = *(_QWORD*)(v8 + 16) == v5;
                  add = atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                         0xFFFFFFFFFFFFFFFFLL);
                  v14 = v12;
                  if (add == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
                    std___1___shared_weak_count___release_weak(v11);
                  }
                }
                else {
                  v14 = 0;
                }
                v7 = v9;
              }
              else {
                v14 = 0;
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                v15 = v7;
                (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
                std___1___shared_weak_count___release_weak(v15);
              }
              if ((v14 & 1) != 0) {
                break;
              }
            }
          }
          v3 += 2;
          if (v3 == v4) {
            goto LABEL_29;
          }
        }
      }
      else {
        do {
          if (*v3 != 0) {
            v17 = std___1___shared_weak_count_lock_alt1(v2);
            if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              v18 = v17;
              (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
              std___1___shared_weak_count___release_weak(v18);
            }
          }
          v3 += 2;
        } while (v3 != v4);
      LABEL_29:
        v3 = v4;
      }
    }
    v16 = v3 != *(__int64**)(a1 + 176);
    std___1___shared_weak_count___release_weak(v2);
  }
  else {
    return false;
  }
  return v16;
}

void game_talk_Hub_ChangeCamera_lambda0_Invoke(__int64 a1)
{
  float v1;
  float v2;
  float v3;
  float v4;
  struct {
    float v5;
    __int16 v6;
    char gap10_[2];
    int v7;
  } v5_;

  v1 = *(float*)(a1 + 8);
  v2 = *(float*)(*(_QWORD*)GameData_212dbf0[0] + 132LL);
  v5_.v7 = 1065353216;
  v5_.v6 = 257;
  if (v2 > 0x1.0000000000000p-1f) {
    v2 = (float)((float)(v2 + -0x1.0000000000000p-1f) * 0x1.0000000000000p-1f) +
         0x1.0000000000000p-1f;
  }
  v3 = 0x1.0000000000000p+1f;
  if (v2 <= 0x1.0000000000000p+1f) {
    v3 = v2;
  }
  if (v2 >= 0x1.0000000000000p-2f) {
    v4 = v3;
  }
  else {
    v4 = 0x1.0000000000000p-2f;
  }
  if (v1 >= v4) {
    v1 = v4;
  }
  if (v4 < 0x0.0p+0f) {
    v1 = 0x0.0p+0f;
  }
  v5_.v5 = v1;
  GameHr_cdeee0(GameData_21f3ca8, (__int64)&v5_.v5);
}

__int64 game_talk_Hub_DisableLookAt_lambda0_Invoke(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;

  result = *(_QWORD*)(a2 + 24);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result, a2);
    if (result != 0) {
      v4 = *(_QWORD*)(a2 + 16);
      if (v4 != 0) {
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 24) + 8LL) + 336LL) +
                  69LL) = 0;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v5 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        return std___1___shared_weak_count___release_weak(v5);
      }
    }
  }
  return result;
}

__int64 game_talk_Hub_PlayMotionImpl_lambda0_Invoke(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  float v10;
  int v11;
  __int64 v12;
  int v13;

  result = *(_QWORD*)(a2 + 24);
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v4 = *(_QWORD*)(a2 + 16);
      v5 = result;
      if (v4 != 0) {
        v6 = *(
            _DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 24) + 8LL) + 344LL) +
                     360LL);
        result = GameRoutine_108c540(v6);
        if (v6 == 699171365) {
          v7 = 869686455;
        }
        else {
          v7 = 0;
        }
        if (v6 == -1841313413) {
          v7 = 387327021;
        }
        if ((result & 1) != 0) {
          v8 = v6;
        }
        else {
          v8 = v7;
        }
        v9 = *(_QWORD*)(v4 + 24);
        v10 = *(float*)(v9 + 280);
        v11 = *(unsigned __int8*)(v9 + 272);
        *(_DWORD*)(v9 + 280) = 0;
        if (v11 == 1) {
          *(_BYTE*)(v9 + 272) = 0;
        }
        v12 = *(_QWORD*)(*(_QWORD*)(v9 + 8) + 344LL);
        if (*(_BYTE*)(v12 + 345) != 0) {
          v13 = *(unsigned __int8*)(v12 + 88);
          *(_BYTE*)(v12 + 345) = 0;
          if (v13 == 1) {
            *(_BYTE*)(v12 + 88) = 0;
          }
        }
        if (v10 > 0.33f) {
          result = GameRoutine_efc8c0(GameData_21f3d08, v8);
          if ((_DWORD)result != 0) {
            result = HubCharacterNatives_cee990(
                *(_QWORD*)(v4 + 24), (unsigned int)result, 1, 0, 0, 0, 1.0f);
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        return std___1___shared_weak_count___release_weak(v5);
      }
    }
  }
  return result;
}

__int64 game_talk_Hub_PlayMotionImpl_lambda1_Invoke(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18[2];

  result = a2[3];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result, a2);
    if (result != 0) {
      v4 = a2[2];
      v5 = result;
      if (v4 == 0) {
        goto LABEL_21;
      }
      v6 = *(_QWORD*)(v4 + 24);
      v7 = *(unsigned __int8*)(v6 + 272);
      *(_DWORD*)(v6 + 280) = 0;
      if (v7 == 1) {
        *(_BYTE*)(v6 + 272) = 0;
      }
      v8 = *(_QWORD*)(*(_QWORD*)(v6 + 8) + 344LL);
      if (*(_BYTE*)(v8 + 345) != 0) {
        v9 = *(unsigned __int8*)(v8 + 88);
        *(_BYTE*)(v8 + 345) = 0;
        if (v9 == 1) {
          *(_BYTE*)(v8 + 88) = 0;
        }
      }
      GameRoutine_d196c0(*(_QWORD*)(*(_QWORD*)(v6 + 8) + 344LL), 1, 0.5);
      v10 = *a2;
      v11 = a2[2];
      v12 = a2[3];
      v18[0] = v11;
      v18[1] = v12;
      if (v12 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                                  memory_order_relaxed);
        v13 = Hub_119b940(v10, v18);
        result = std___1___shared_weak_count___release_weak(v12);
        if (v13) {
        LABEL_21:
          if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
            return std___1___shared_weak_count___release_weak(v5);
          }
          return result;
        }
      }
      else {
        result = Hub_119b940(v10, v18);
        if ((result & 1) != 0) {
          goto LABEL_21;
        }
      }
      v14 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 24) + 8LL) + 352LL);
      if (*(_BYTE*)(v14 + 48) == 1) {
        if ((*(_BYTE*)(v14 + 16) & 1) != 0) {
          v15 = *(_QWORD*)(v14 + 32);
          if (v15 != 0) {
            v16 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 24) + 8LL) + 352LL);
            v17 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v17 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v15);
            v14 = v16;
          }
        }
        *(_BYTE*)(v14 + 48) = 0;
      }
      result = GameRoutine_10c0490(v14, 0);
      goto LABEL_21;
    }
  }
  return result;
}

__int64 game_talk_Hub_PlayFacialImpl_lambda0_Invoke(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  result = *(_QWORD*)(a2 + 24);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result, a2);
    if (result != 0) {
      v4 = *(_QWORD*)(a2 + 16);
      v5 = result;
      if (v4 != 0) {
        v6 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 24) + 8LL) + 352LL);
        if (*(_BYTE*)(v6 + 48) == 1) {
          if ((*(_BYTE*)(v6 + 16) & 1) != 0) {
            v7 = *(_QWORD*)(v6 + 32);
            if (v7 != 0) {
              v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 24) + 8LL) + 352LL);
              v9 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v9 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v7);
              v6 = v8;
            }
          }
          *(_BYTE*)(v6 + 48) = 0;
        }
        result = GameRoutine_10c0490(v6, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        return std___1___shared_weak_count___release_weak(v5);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
