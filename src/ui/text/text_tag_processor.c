#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1909a50(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1909b00(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1909ba0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1909c50(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_55c2c0(_QWORD);
__int64 GameRoutine_561000(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_561100(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5612a0(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(long double, double);
char* GameRoutine_1905ba0(char**, char*);
extern __int64 fw_memory_g_heap_manager_ptr;
float GameRoutine_55c240(_QWORD);
float GameRoutine_55c280(_QWORD);
void __attribute__((noreturn)) GameRoutine_190af40(void);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 TextTagProcessor_Unknown6(__int64 a1, _DWORD** a2);
__int64 TextTagProcessor_Unknown4_alt1(
    _QWORD* a1, __int64 a2, __int64* a3,
    unsigned int a4) __asm__("TextTagProcessor_Unknown4");
__int64 nn_util_PickOutCharacterFromUtf8String(_QWORD, _QWORD);
__int64 TextTagProcessor_561320(__int64 a1, _BYTE* a2, __int64 a3);
_QWORD* TextTagProcessor_1909b00(_QWORD* result, __int64, _DWORD**, __int64);
__int64 GameRoutine_561000_alt1(__int64, int,
                                float*) __asm__("GameRoutine_561000");
__int64 GameRoutine_561100_alt1(__int64, float*, float*,
                                int) __asm__("GameRoutine_561100");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
char* TextSelector_1905ba0(char**, char*);
float TextTagProcessor_55c240(__int64);
float TextTagProcessor_55c280(__int64);
float TextTagProcessor_55c2c0(__int64);
void GameHr_1909a50(__int64, __int64, __int64, __int64);
void GameHr_1909ba0(__int64, __int64, __int64, __int64);
void TextTagProcessor_1909c50(__int64, unsigned int, __int64);
void __attribute__((noreturn))
GameRoutine_190af40_alt1() __asm__("GameRoutine_190af40");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 TextTagProcessor_Unknown4(_QWORD* a1, __int64 a2, __int64 a3, int a4);
__int64 GameRoutine_560fc0(_QWORD);
__int64 GameRoutine_5662e0(_QWORD);
extern __int64 (*GameData_210fc28[])();
extern __int64 (*GameData_210fcc8[])();
extern __int64 (*GameData_210fd68[])();
extern __int64 (*ui_text_TextTagProcessor_vtable[])();
void GameRoutine_1905ad0();
void GameRoutine_1905b30();
void GameRoutine_1905b40();
__int64 TextTagProcessor_DeletingDestructor(__int64 a1);
__attribute__((swiftcall)) void
TextTagProcessor_1908c60(PSEUDO_X8 x8_, __int64 a1, __int64 a2);
__attribute__((swiftcall)) void
TextTagProcessor_1908f00(PSEUDO_X8 x8_, __int64 a1, __int64 a2);
__attribute__((swiftcall)) void
TextTagProcessor_19091a0(PSEUDO_X8 x8_, __int64 a1, __int64 a2);
__int64 GameRoutine_1905b00();
extern __int64 (*GameData_210fb78[])();
__attribute__((swiftcall)) void
TextTagProcessor_19089c0(PSEUDO_X8 x8_, __int64 a1, __int64 a2);

__int64 TextTagProcessor_561320(__int64 a1, _BYTE* a2, __int64 a3)
{
  __int64 result;
  int v5;
  __int64 v6;

  v6 = a3;
  v5 = 0;
  nn_util_PickOutCharacterFromUtf8String(&v5, &v6);
  result = v6;
  *a2 = 1;
  return result;
}

__int64 TextTagProcessor_DeletingDestructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  *(_QWORD*)a1 = ui_text_TextTagProcessor_vtable;
  v2 = (_QWORD*)(a1 + 336);
  v3 = *(_QWORD**)(a1 + 368);
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  v5 = *(_QWORD**)(a1 + 320);
  if (v5 == (_QWORD*)(a1 + 288)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_11;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_11:
  v7 = *(_QWORD**)(a1 + 272);
  if (v7 == (_QWORD*)(a1 + 240)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_16;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_16:
  v9 = *(_QWORD**)(a1 + 224);
  if (v9 == (_QWORD*)(a1 + 192)) {
    v10 = 32;
    goto LABEL_20;
  }
  if (v9 != nullptr) {
    v10 = 40;
  LABEL_20:
    (*(void (**)(__int64))(*v9 + v10))((__int64)v9);
  }
  if ((*(_BYTE*)(a1 + 152) & 1) != 0) {
    v11 = *(_QWORD*)(a1 + 168);
    if (v11 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v11);
    }
  }
  GameRoutine_5662e0(a1 + 8);
  return GameRoutine_560fc0(a1);
}

__attribute__((swiftcall)) void TextTagProcessor_19089c0(PSEUDO_X8 x8_,
                                                         __int64 a1, __int64 a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  _BYTE* v4;
  _BYTE* v5;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  _BYTE* v10;
  _QWORD* v11;
  _BYTE* v12;
  _BYTE* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 result;
  __int64 v18;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
  } v19_;
  struct {
    _BYTE v21[32];
    _BYTE* v22;
  } v21_;
  _QWORD v23[4];

  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = (_BYTE*)(a1 + 192);
  {
    v5 = *(_BYTE**)(a1 + 224);
    __asm__ volatile("" ::"r"(v5));
  }
  if (v5 == nullptr) {
    *(_QWORD*)(a3 + 32) = 0;
    {
      v7 = *(_QWORD*)(a2 + 32);
      __asm__ volatile("" ::"r"(v7));
    }
    if (v7 != 0) {
      goto LABEL_6;
    }
    goto LABEL_11;
  }
  if (v5 == v4) {
    *(_QWORD*)(a3 + 32) = a3;
    (*(void (**)(_BYTE*, __int64))(*(_QWORD*)v5 + 24LL))(v5, a3),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    {
      v7 = *(_QWORD*)(a2 + 32);
      __asm__ volatile("" ::"r"(v7));
    }
    if (v7 != 0) {
      goto LABEL_6;
    }
  LABEL_11:
    v19_.v19[0] = GameData_210fb78;
    v19_.v19[1] = GameRoutine_1905b00;
    v8 = v19_.v19;
    v19_.v20 = v19_.v19;
  LABEL_12:
    v21_.v22 = v21_.v21;
    (*(void (**)(_QWORD*, _BYTE*))(*v8 + 24LL))(v8, v21_.v21),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_15;
  }
  *(_QWORD*)(a3 +
             32) = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v5 + 16LL))(v5),
             v9 = COERCE_AS(__typeof__(v9),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  {
    v7 = *(_QWORD*)(a2 + 32);
    __asm__ volatile("" ::"r"(v7));
  }
  if (v7 == 0) {
    goto LABEL_11;
  }
LABEL_6:
  if (v7 == a2) {
    v19_.v20 = v19_.v19;
    (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v7 + 24LL))(v7, v19_.v19),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v8 = v19_.v20;
    if (v19_.v20 != nullptr) {
    LABEL_8:
      if (v8 != v19_.v19) {
        v21_.v22 = (_BYTE*)(*(__int64 (**)(_QWORD*))(*v8 + 16LL))(v8),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        goto LABEL_15;
      }
      goto LABEL_12;
    }
  }
  else {
    v8 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v19_.v20 = v8;
    if (v8 != nullptr) {
      goto LABEL_8;
    }
  }
  v21_.v22 = nullptr;
LABEL_15:
  if (v4 != v21_.v21) {
    v10 = v21_.v22;
    {
      v11 = *(_QWORD**)(a1 + 224);
      __asm__ volatile("" ::"r"(v11));
    }
    if (v21_.v22 == v21_.v21) {
      if (v11 == (_QWORD*)v4) {
        (*(void (**)(_BYTE*, _QWORD*))(*(_QWORD*)v21_.v22 + 24LL))(v21_.v22,
                                                                   v23),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(_BYTE*))(*(_QWORD*)v21_.v22 + 32LL))(v21_.v22),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        {
          v14 = *(_QWORD*)(a1 + 224);
          __asm__ volatile("" ::"r"(v14));
        }
        v21_.v22 = nullptr;
        (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v14 + 24LL))(v14, v21_.v21),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 224) + 32LL))(
            *(_QWORD*)(a1 + 224)),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        {
          v15 = v23[0];
          __asm__ volatile("" ::"r"(v15));
        }
        *(_QWORD*)(a1 + 224) = 0;
        v21_.v22 = v21_.v21;
        (*(void (**)(_QWORD*, _BYTE*))(v15 + 24))(v23, v4),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(_QWORD*))(v23[0] + 32LL))(v23),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *(_QWORD*)(a1 + 224) = v4;
      }
      else {
        (*(void (**)(_BYTE*, _BYTE*))(*(_QWORD*)v21_.v22 + 24LL))(v21_.v22, v4),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(_BYTE*))(*(_QWORD*)v21_.v22 + 32LL))(v21_.v22),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        {
          v12 = *(_BYTE**)(a1 + 224);
          __asm__ volatile("" ::"r"(v12));
        }
        *(_QWORD*)(a1 + 224) = v4;
        v21_.v22 = v12;
      }
    }
    else if (v11 == (_QWORD*)v4) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, _BYTE*))(
          *v11 + 24LL))((void*)(v11), *(_QWORD*)(a1 + 224), v21_.v21),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 224) + 32LL))(
          *(_QWORD*)(a1 + 224)),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v13 = v21_.v22;
      v21_.v22 = v21_.v21;
      *(_QWORD*)(a1 + 224) = v13;
    }
    else {
      v21_.v22 = *(_BYTE**)(a1 + 224);
      *(_QWORD*)(a1 + 224) = v10;
    }
  }
  if (v21_.v22 == v21_.v21) {
    v16 = 32;
  }
  else {
    if (v21_.v22 == nullptr) {
      goto LABEL_28;
    }
    v16 = 40;
  }
  (*(void (**)(_BYTE*, __int64))(*(_QWORD*)v21_.v22 + v16))(v21_.v22, v9),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_28:
  result = (__int64)v19_.v20;
  if (v19_.v20 == v19_.v19) {
    v18 = 32;
  }
  else {
    if (v19_.v20 == nullptr) {
      result;
      return;
    }
    v18 = 40;
  }
  {
    (*(__int64 (**)(_QWORD*, __int64))(*v19_.v20 + v18))(v19_.v20, v9),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return;
  }
}

__attribute__((swiftcall)) void TextTagProcessor_1908c60(PSEUDO_X8 x8_,
                                                         __int64 a1, __int64 a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  _BYTE* v4;
  _BYTE* v5;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  _BYTE* v10;
  _QWORD* v11;
  _BYTE* v12;
  _BYTE* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 result;
  __int64 v18;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
  } v19_;
  struct {
    _BYTE v21[32];
    _BYTE* v22;
  } v21_;
  _QWORD v23[4];

  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = (_BYTE*)(a1 + 240);
  v5 = *(_BYTE**)(a1 + 272);
  if (v5 == nullptr) {
    *(_QWORD*)(a3 + 32) = 0;
    v7 = *(_QWORD*)(a2 + 32);
    if (v7 != 0) {
      goto LABEL_6;
    }
    goto LABEL_11;
  }
  if (v5 == v4) {
    *(_QWORD*)(a3 + 32) = a3;
    (*(void (**)(_BYTE*, __int64))(*(_QWORD*)v5 + 24LL))(v5, a3),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v7 = *(_QWORD*)(a2 + 32);
    if (v7 != 0) {
      goto LABEL_6;
    }
  LABEL_11:
    v19_.v19[0] = GameData_210fc28;
    v19_.v19[1] = &GameRoutine_1905ad0;
    v8 = v19_.v19;
    v19_.v20 = v19_.v19;
  LABEL_12:
    v21_.v22 = v21_.v21;
    (*(void (**)(_QWORD*, _BYTE*))(*v8 + 24LL))(v8, v21_.v21),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_15;
  }
  *(_QWORD*)(a3 +
             32) = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v5 + 16LL))(v5),
             v9 = COERCE_AS(__typeof__(v9),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = *(_QWORD*)(a2 + 32);
  if (v7 == 0) {
    goto LABEL_11;
  }
LABEL_6:
  if (v7 == a2) {
    v19_.v20 = v19_.v19;
    (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v7 + 24LL))(v7, v19_.v19),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v8 = v19_.v20;
    if (v19_.v20 != nullptr) {
    LABEL_8:
      if (v8 != v19_.v19) {
        v21_.v22 = (_BYTE*)(*(__int64 (**)(_QWORD*))(*v8 + 16LL))(v8),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        goto LABEL_15;
      }
      goto LABEL_12;
    }
  }
  else {
    v8 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v19_.v20 = v8;
    if (v8 != nullptr) {
      goto LABEL_8;
    }
  }
  v21_.v22 = nullptr;
LABEL_15:
  if (v4 != v21_.v21) {
    v10 = v21_.v22;
    v11 = *(_QWORD**)(a1 + 272);
    if (v21_.v22 == v21_.v21) {
      if (v11 == (_QWORD*)v4) {
        (*(void (**)(_BYTE*, _QWORD*))(*(_QWORD*)v21_.v22 + 24LL))(v21_.v22,
                                                                   v23),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(_BYTE*))(*(_QWORD*)v21_.v22 + 32LL))(v21_.v22),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v14 = *(_QWORD*)(a1 + 272);
        v21_.v22 = nullptr;
        (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v14 + 24LL))(v14, v21_.v21),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 272) + 32LL))(
            *(_QWORD*)(a1 + 272)),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v15 = v23[0];
        *(_QWORD*)(a1 + 272) = 0;
        v21_.v22 = v21_.v21;
        (*(void (**)(_QWORD*, _BYTE*))(v15 + 24))(v23, v4),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(_QWORD*))(v23[0] + 32LL))(v23),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *(_QWORD*)(a1 + 272) = v4;
      }
      else {
        (*(void (**)(_BYTE*, _BYTE*))(*(_QWORD*)v21_.v22 + 24LL))(v21_.v22, v4),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(_BYTE*))(*(_QWORD*)v21_.v22 + 32LL))(v21_.v22),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v12 = *(_BYTE**)(a1 + 272);
        *(_QWORD*)(a1 + 272) = v4;
        v21_.v22 = v12;
      }
    }
    else if (v11 == (_QWORD*)v4) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, _BYTE*))(
          *v11 + 24LL))((void*)(v11), *(_QWORD*)(a1 + 272), v21_.v21),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 272) + 32LL))(
          *(_QWORD*)(a1 + 272)),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v13 = v21_.v22;
      v21_.v22 = v21_.v21;
      *(_QWORD*)(a1 + 272) = v13;
    }
    else {
      v21_.v22 = *(_BYTE**)(a1 + 272);
      *(_QWORD*)(a1 + 272) = v10;
    }
  }
  if (v21_.v22 == v21_.v21) {
    v16 = 32;
  }
  else {
    if (v21_.v22 == nullptr) {
      goto LABEL_28;
    }
    v16 = 40;
  }
  (*(void (**)(_BYTE*, __int64))(*(_QWORD*)v21_.v22 + v16))(v21_.v22, v9),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_28:
  result = (__int64)v19_.v20;
  if (v19_.v20 == v19_.v19) {
    v18 = 32;
  }
  else {
    if (v19_.v20 == nullptr) {
      result;
      return;
    }
    v18 = 40;
  }
  {
    (*(__int64 (**)(_QWORD*, __int64))(*v19_.v20 + v18))(v19_.v20, v9),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return;
  }
}

__attribute__((swiftcall)) void TextTagProcessor_1908f00(PSEUDO_X8 x8_,
                                                         __int64 a1, __int64 a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  _BYTE* v4;
  _BYTE* v5;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  _BYTE* v10;
  _QWORD* v11;
  _BYTE* v12;
  _BYTE* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 result;
  __int64 v18;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
  } v19_;
  struct {
    _BYTE v21[32];
    _BYTE* v22;
  } v21_;
  _QWORD v23[4];

  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = (_BYTE*)(a1 + 288);
  v5 = *(_BYTE**)(a1 + 320);
  if (v5 == nullptr) {
    *(_QWORD*)(a3 + 32) = 0;
    v7 = *(_QWORD*)(a2 + 32);
    if (v7 != 0) {
      goto LABEL_6;
    }
    goto LABEL_11;
  }
  if (v5 == v4) {
    *(_QWORD*)(a3 + 32) = a3;
    (*(void (**)(_BYTE*, __int64))(*(_QWORD*)v5 + 24LL))(v5, a3),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v7 = *(_QWORD*)(a2 + 32);
    if (v7 != 0) {
      goto LABEL_6;
    }
  LABEL_11:
    v19_.v19[0] = GameData_210fcc8;
    v19_.v19[1] = &GameRoutine_1905b30;
    v8 = v19_.v19;
    v19_.v20 = v19_.v19;
  LABEL_12:
    v21_.v22 = v21_.v21;
    (*(void (**)(_QWORD*, _BYTE*))(*v8 + 24LL))(v8, v21_.v21),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_15;
  }
  *(_QWORD*)(a3 +
             32) = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v5 + 16LL))(v5),
             v9 = COERCE_AS(__typeof__(v9),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = *(_QWORD*)(a2 + 32);
  if (v7 == 0) {
    goto LABEL_11;
  }
LABEL_6:
  if (v7 == a2) {
    v19_.v20 = v19_.v19;
    (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v7 + 24LL))(v7, v19_.v19),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v8 = v19_.v20;
    if (v19_.v20 != nullptr) {
    LABEL_8:
      if (v8 != v19_.v19) {
        v21_.v22 = (_BYTE*)(*(__int64 (**)(_QWORD*))(*v8 + 16LL))(v8),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        goto LABEL_15;
      }
      goto LABEL_12;
    }
  }
  else {
    v8 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v19_.v20 = v8;
    if (v8 != nullptr) {
      goto LABEL_8;
    }
  }
  v21_.v22 = nullptr;
LABEL_15:
  if (v4 != v21_.v21) {
    v10 = v21_.v22;
    v11 = *(_QWORD**)(a1 + 320);
    if (v21_.v22 == v21_.v21) {
      if (v11 == (_QWORD*)v4) {
        (*(void (**)(_BYTE*, _QWORD*))(*(_QWORD*)v21_.v22 + 24LL))(v21_.v22,
                                                                   v23),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(_BYTE*))(*(_QWORD*)v21_.v22 + 32LL))(v21_.v22),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v14 = *(_QWORD*)(a1 + 320);
        v21_.v22 = nullptr;
        (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v14 + 24LL))(v14, v21_.v21),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 320) + 32LL))(
            *(_QWORD*)(a1 + 320)),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v15 = v23[0];
        *(_QWORD*)(a1 + 320) = 0;
        v21_.v22 = v21_.v21;
        (*(void (**)(_QWORD*, _BYTE*))(v15 + 24))(v23, v4),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(_QWORD*))(v23[0] + 32LL))(v23),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *(_QWORD*)(a1 + 320) = v4;
      }
      else {
        (*(void (**)(_BYTE*, _BYTE*))(*(_QWORD*)v21_.v22 + 24LL))(v21_.v22, v4),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(_BYTE*))(*(_QWORD*)v21_.v22 + 32LL))(v21_.v22),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v12 = *(_BYTE**)(a1 + 320);
        *(_QWORD*)(a1 + 320) = v4;
        v21_.v22 = v12;
      }
    }
    else if (v11 == (_QWORD*)v4) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, _BYTE*))(
          *v11 + 24LL))((void*)(v11), *(_QWORD*)(a1 + 320), v21_.v21),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 320) + 32LL))(
          *(_QWORD*)(a1 + 320)),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v13 = v21_.v22;
      v21_.v22 = v21_.v21;
      *(_QWORD*)(a1 + 320) = v13;
    }
    else {
      v21_.v22 = *(_BYTE**)(a1 + 320);
      *(_QWORD*)(a1 + 320) = v10;
    }
  }
  if (v21_.v22 == v21_.v21) {
    v16 = 32;
  }
  else {
    if (v21_.v22 == nullptr) {
      goto LABEL_28;
    }
    v16 = 40;
  }
  (*(void (**)(_BYTE*, __int64))(*(_QWORD*)v21_.v22 + v16))(v21_.v22, v9),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_28:
  result = (__int64)v19_.v20;
  if (v19_.v20 == v19_.v19) {
    v18 = 32;
  }
  else {
    if (v19_.v20 == nullptr) {
      result;
      return;
    }
    v18 = 40;
  }
  {
    (*(__int64 (**)(_QWORD*, __int64))(*v19_.v20 + v18))(v19_.v20, v9),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return;
  }
}

__attribute__((swiftcall)) void TextTagProcessor_19091a0(PSEUDO_X8 x8_,
                                                         __int64 a1, __int64 a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  _BYTE* v4;
  _BYTE* v5;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  _BYTE* v10;
  _QWORD* v11;
  _BYTE* v12;
  _BYTE* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 result;
  __int64 v18;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
  } v19_;
  struct {
    _BYTE v21[32];
    _BYTE* v22;
  } v21_;
  _QWORD v23[4];

  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = (_BYTE*)(a1 + 336);
  v5 = *(_BYTE**)(a1 + 368);
  if (v5 == nullptr) {
    *(_QWORD*)(a3 + 32) = 0;
    v7 = *(_QWORD*)(a2 + 32);
    if (v7 != 0) {
      goto LABEL_6;
    }
    goto LABEL_11;
  }
  if (v5 == v4) {
    *(_QWORD*)(a3 + 32) = a3;
    (*(void (**)(_BYTE*, __int64))(*(_QWORD*)v5 + 24LL))(v5, a3),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v7 = *(_QWORD*)(a2 + 32);
    if (v7 != 0) {
      goto LABEL_6;
    }
  LABEL_11:
    v19_.v19[0] = GameData_210fd68;
    v19_.v19[1] = &GameRoutine_1905b40;
    v8 = v19_.v19;
    v19_.v20 = v19_.v19;
  LABEL_12:
    v21_.v22 = v21_.v21;
    (*(void (**)(_QWORD*, _BYTE*))(*v8 + 24LL))(v8, v21_.v21),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_15;
  }
  *(_QWORD*)(a3 +
             32) = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v5 + 16LL))(v5),
             v9 = COERCE_AS(__typeof__(v9),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = *(_QWORD*)(a2 + 32);
  if (v7 == 0) {
    goto LABEL_11;
  }
LABEL_6:
  if (v7 == a2) {
    v19_.v20 = v19_.v19;
    (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v7 + 24LL))(v7, v19_.v19),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v8 = v19_.v20;
    if (v19_.v20 != nullptr) {
    LABEL_8:
      if (v8 != v19_.v19) {
        v21_.v22 = (_BYTE*)(*(__int64 (**)(_QWORD*))(*v8 + 16LL))(v8),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        goto LABEL_15;
      }
      goto LABEL_12;
    }
  }
  else {
    v8 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v19_.v20 = v8;
    if (v8 != nullptr) {
      goto LABEL_8;
    }
  }
  v21_.v22 = nullptr;
LABEL_15:
  if (v4 != v21_.v21) {
    v10 = v21_.v22;
    v11 = *(_QWORD**)(a1 + 368);
    if (v21_.v22 == v21_.v21) {
      if (v11 == (_QWORD*)v4) {
        (*(void (**)(_BYTE*, _QWORD*))(*(_QWORD*)v21_.v22 + 24LL))(v21_.v22,
                                                                   v23),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(_BYTE*))(*(_QWORD*)v21_.v22 + 32LL))(v21_.v22),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v14 = *(_QWORD*)(a1 + 368);
        v21_.v22 = nullptr;
        (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v14 + 24LL))(v14, v21_.v21),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 368) + 32LL))(
            *(_QWORD*)(a1 + 368)),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v15 = v23[0];
        *(_QWORD*)(a1 + 368) = 0;
        v21_.v22 = v21_.v21;
        (*(void (**)(_QWORD*, _BYTE*))(v15 + 24))(v23, v4),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(_QWORD*))(v23[0] + 32LL))(v23),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *(_QWORD*)(a1 + 368) = v4;
      }
      else {
        (*(void (**)(_BYTE*, _BYTE*))(*(_QWORD*)v21_.v22 + 24LL))(v21_.v22, v4),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(_BYTE*))(*(_QWORD*)v21_.v22 + 32LL))(v21_.v22),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v12 = *(_BYTE**)(a1 + 368);
        *(_QWORD*)(a1 + 368) = v4;
        v21_.v22 = v12;
      }
    }
    else if (v11 == (_QWORD*)v4) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, _BYTE*))(
          *v11 + 24LL))((void*)(v11), *(_QWORD*)(a1 + 368), v21_.v21),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 368) + 32LL))(
          *(_QWORD*)(a1 + 368)),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v13 = v21_.v22;
      v21_.v22 = v21_.v21;
      *(_QWORD*)(a1 + 368) = v13;
    }
    else {
      v21_.v22 = *(_BYTE**)(a1 + 368);
      *(_QWORD*)(a1 + 368) = v10;
    }
  }
  if (v21_.v22 == v21_.v21) {
    v16 = 32;
  }
  else {
    if (v21_.v22 == nullptr) {
      goto LABEL_28;
    }
    v16 = 40;
  }
  (*(void (**)(_BYTE*, __int64))(*(_QWORD*)v21_.v22 + v16))(v21_.v22, v9),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_28:
  result = (__int64)v19_.v20;
  if (v19_.v20 == v19_.v19) {
    v18 = 32;
  }
  else {
    if (v19_.v20 == nullptr) {
      result;
      return;
    }
    v18 = 40;
  }
  {
    (*(__int64 (**)(_QWORD*, __int64))(*v19_.v20 + v18))(v19_.v20, v9),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return;
  }
}

__int64 TextTagProcessor_Unknown6(__int64 a1, _DWORD** a2)
{
  if (*a2 != nullptr) {
    *(_DWORD*)(a1 + 177) = **a2;
  }
  if ((*(_BYTE*)(a1 + 152) & 1) != 0) {
    **(_BYTE**)(a1 + 168) = 0;
    *(_QWORD*)(a1 + 160) = 0;
  }
  else {
    *(_WORD*)(a1 + 152) = 0;
  }
  return GameRoutine_5612a0();
}

__int64 TextTagProcessor_Unknown4(_QWORD* a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  bool v24;
  bool v25;
  __int64 v26;
  float v28;
  __int64 v30;
  unsigned int v31;
  int v32;
  int v33;
  float* v35;
  __int64 v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  __int64 v42;
  float v43;
  int v44;
  float v45;
  unsigned __int64 v46;
  unsigned __int8* v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v59;
  __int64 v60;
  _QWORD* v61;
  __int64 v62;
  float* v63;
  float v64;
  float v65;
  __int64 v66;
  unsigned int v67;
  float v68;
  float v69;
  int v70;
  int v71;
  float v72;
  char* v73;
  struct {
    __int64 v74;
    __int64 v75;
    __int64 v76;
  } v74_;
  struct {
    _QWORD* v77;
    __int64 v78;
  } v77_;
  unsigned __int64 v79;

  v15 = a2;
  v16 = a3;
  if (a2 != 0) {
    *(_QWORD*)a2 = 0;
    *(_QWORD*)(a2 + 8) = 0;
  }
  if ((a4 & 0xFFFFFFFE) == 0xE) {
    v17 = *(_QWORD*)(a3 + 8);
    v19 = v15;
    v74_.v75 = 0;
    v74_.v76 = 0;
    v74_.v74 = 0;
    v20 = &TextSelector_1905ba0(&v73, (char*)(v17 - 1))[v17 - 1];
    v21 = v74_.v74;
    v22 = v74_.v75;
    *(_QWORD*)(v16 + 8) = v20;
    if (v22 == v21) {
      GameRoutine_190af40_alt1();
    }
    v23 = *(_QWORD*)(v21 + 8);
    v24 = *(_DWORD*)v21 == 0 || v23 == 0;
    if (v24 || (*(_DWORD*)v21 == 1 ? (v25 = *(unsigned __int16*)(v21 + 16) == 0)
                                   : (v25 = true),
                v25)) {
      do {
        *(_DWORD*)(v22 - 24) = 0;
        v22 -= 24;
        *(_QWORD*)(v22 + 8) = 0;
        *(_WORD*)(v22 + 16) = 0;
      } while (v22 != v21);
      goto LABEL_15;
    }
    v32 = *(unsigned __int16*)(v23 + 1);
    v33 = *(unsigned __int16*)(v23 + 3);
    if (v32 == 0) {
      if (v33 > 15) {
        v57 = v21;
        if (v33 == 16) {
          GameHr_1909ba0((__int64)a1, (__int64)&v74_.v74, v16, v19);
          v21 = v57;
          if (v57 == v22) {
            goto LABEL_78;
          }
        }
        else if (v33 == 17 && v19 == 0) {
          TextTagProcessor_1909c50((__int64)a1, 1u, v16);
          v21 = v57;
          if (v57 == v22) {
            goto LABEL_78;
          }
        }
        else if (v21 == v22) {
          goto LABEL_78;
        }
        do {
        LABEL_77:
          *(_DWORD*)(v22 - 24) = 0;
          v22 -= 24;
          *(_QWORD*)(v22 + 8) = 0;
          *(_WORD*)(v22 + 16) = 0;
        } while (v22 != v21);
      LABEL_78:
        if (v21 == 0) {
          return 0;
        }
      LABEL_15:
        v26 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v21);
        return 0;
      }
      v55 = v19;
      if (v33 == 0) {
        v59 = v21;
        GameHr_1909a50((__int64)a1, (__int64)&v74_.v74, v16, v55);
        v21 = v59;
        if (v59 == v22) {
          goto LABEL_78;
        }
        goto LABEL_77;
      }
      if (v33 == 3) {
        v56 = v21;
        TextTagProcessor_1909b00(a1, (__int64)&v74_.v74, (_DWORD**)v16, v55);
        v21 = v56;
        if (v56 == v22) {
          goto LABEL_78;
        }
        goto LABEL_77;
      }
    LABEL_76:
      if (v21 == v22) {
        goto LABEL_78;
      }
      goto LABEL_77;
    }
    if (v32 != 3 || v33 != 16) {
      goto LABEL_76;
    }
    v35 = *(float**)v16;
    v36 = v21;
    v37 = v35[5];
    v38 = -v35[6];
    v39 = TextTagProcessor_55c240((__int64)v35);
    v40 = TextTagProcessor_55c280((__int64)v35);
    v41 = TextTagProcessor_55c2c0((__int64)v35);
    v42 = a1[40];
    v43 = 0x0.0p+0f;
    if (v42 == 0) {
      goto LABEL_72;
    }
    v44 = *(_DWORD*)(v36 + 24);
    v45 = v41;
    v46 = 0;
    if (v44 == 0) {
      goto LABEL_59;
    }
    v47 = *(unsigned __int8**)(v36 + 32);
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    if (v47 == nullptr) {
      goto LABEL_60;
    }
    v46 = 0;
    if (v44 == 1) {
    LABEL_59:
      v48 = 0;
      v49 = 0;
      v50 = 0;
      v51 = 0;
      v52 = 0;
      v53 = 0;
      v54 = 0;
    }
    else {
      v48 = 0;
      v49 = 0;
      v50 = 0;
      v51 = 0;
      v52 = 0;
      v53 = 0;
      v54 = 0;
      if (*(_WORD*)(v36 + 40) != 0) {
        v51 = (unsigned __int64)v47[3] << 24;
        v54 = *v47;
        v46 = (unsigned __int64)v47[7] << 56;
        v48 = (unsigned __int64)v47[6] << 48;
        v49 = (unsigned __int64)v47[5] << 40;
        v50 = (unsigned __int64)v47[4] << 32;
        v52 = (unsigned __int64)v47[2] << 16;
        v53 = (unsigned __int64)v47[1] << 8;
      }
    }
  LABEL_60:
    v79 = v48 | v46 | v49 | v50 | v51 | v52 | v53 | v54;
    (*(__attribute__((swiftcall)) void (**)(
        PSEUDO_X8, __int64, unsigned __int64*))(*(_QWORD*)v42 + 48LL))(
        (void*)(&v77_.v77), v42, &v79);
    if (v77_.v78 == 0) {
    LABEL_72:
      v63 = (float*)v19;
      goto LABEL_73;
    }
    v60 = std___1___shared_weak_count_lock_alt1(v77_.v78);
    v61 = v77_.v77;
    if (v77_.v78 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v77_.v78);
    }
    if (v60 == 0 || v61 == nullptr) {
      v63 = (float*)v19;
      if (v60 == 0) {
        goto LABEL_73;
      }
      goto LABEL_70;
    }
    v43 = (*(float (**)(_QWORD*))(*v61 + 112LL))(v61);
    if (v19 != 0) {
      goto LABEL_66;
    }
    v66 = v61[11];
    if (v66 == 0) {
      goto LABEL_66;
    }
    v67 = *(unsigned __int8*)(v66 + 278);
    if ((v67 & 3) == 2) {
      v68 = 0x1.0000000000000p-1f;
    }
    else {
      if ((v67 & 3) != 1) {
      LABEL_88:
        v69 = *(float*)(v66 + 84);
        v70 = (v67 >> 2) & 3;
        if ((*(_WORD*)(v66 + 276) & 0x1000) != 0) {
          v71 = 0;
        }
        else {
          v71 = v70;
        }
        if (v71 == 2) {
          v72 = -0x1.0000000000000p-1f;
          goto LABEL_95;
        }
        if (v71 == 1) {
          v72 = 0x1.0000000000000p-1f;
        LABEL_95:
          v38 = v38 + (float)(v69 * v72);
        }
      LABEL_66:
        LODWORD(v77_.v78) = 0;
        *(float*)&v77_.v77 = v37 + (float)(v43 * 0x1.0000000000000p-1f);
        *((float*)&v77_.v77 + 1) =
            v38 + (float)((float)(v40 - v45) * 0x1.0000000000000p-1f);
        (*(void (**)(_QWORD*, _QWORD**))(*v61 + 56LL))(v61, &v77_.v77);
        v62 = a1[46];
        if (v62 != 0) {
          LODWORD(v77_.v77) = v19 != 0;
          (*(void (**)(__int64, _QWORD*, _QWORD**))(*(_QWORD*)v62 + 48LL))(
              v62, v61, &v77_.v77);
        }
        v63 = (float*)v19;
      LABEL_70:
        if (atomic_fetch_add((atomic_ullong* volatile)(v60 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v60 + 16LL))(v60);
          std___1___shared_weak_count___release_weak_alt1(v60);
          goto LABEL_72;
        }
      LABEL_73:
        if (v63 != nullptr) {
          v64 = v37 + (float)(v43 * 0x1.0000000000000p-1f);
          v65 = (float)(PSEUDO_UNFUSED(v39 * 0x1.0000000000000p-1f)) - v38;
          *v63 = v64 - (float)(PSEUDO_UNFUSED(v43 * 0x1.0000000000000p-1f));
          v63[1] = v65 - (float)(PSEUDO_UNFUSED(v39 * 0x1.0000000000000p-1f));
          v63[2] = (float)(PSEUDO_UNFUSED(v43 * 0x1.0000000000000p-1f)) + v64;
          v63[3] = (float)(PSEUDO_UNFUSED(v39 * 0x1.0000000000000p-1f)) + v65;
        }
        v21 = v74_.v74;
        v22 = v74_.v75;
        v35[5] = v43 + v35[5];
        goto LABEL_76;
      }
      v68 = -0x1.0000000000000p-1f;
    }
    v37 = v37 + (float)(*(float*)(v66 + 80) * v68);
    goto LABEL_88;
  }
  if (a4 == 19) {
    if (a2 == 0) {
      v30 = a1[28];
      if (v30 == 0) {
        GameRoutine_60a310_alt1();
      }
      v31 = (*(__int64 (**)(__int64))(*(_QWORD*)v30 + 48LL))(v30);
      TextTagProcessor_1909c50((__int64)a1, v31, v16);
    }
    return 0;
  }
  if (a4 == 17) {
    if (a2 != 0) {
      v28 = *(float*)(a2 + 4) + 0x0.0p+0f;
      *(float*)(a2 + 8) = *(float*)a2 + 0x0.0p+0f;
      *(float*)(a2 + 12) = v28;
    }
    return 4;
  }
  else if (a2 != 0) {
    return GameRoutine_561100_alt1((__int64)a1, (float*)a2, (float*)a3, a4);
  }
  else {
    return GameRoutine_561000_alt1((__int64)a1, a4, (float*)a3);
  }
}

#pragma GCC visibility pop
