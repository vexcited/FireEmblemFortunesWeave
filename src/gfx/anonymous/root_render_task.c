#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN** GameData_212c460[2];
extern _UNKNOWN** GameData_212c468;
extern __int64 GameData_22030f8;
__int64 RootRenderTask_Unknown3(__int64 a1, _QWORD* a2);
extern int GameData_22030f8_alt1 __asm__("GameData_22030f8");
extern int GameData_22030fc;

__int64 RootRenderTask_Unknown3(__int64 a1, _QWORD* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  void (**v14)(__int64, __int64);
  _QWORD v16[2];

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ((void (*)(__int64, _QWORD))*GameData_212c468)(*a2 + 8LL, 0),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 72LL))(
      *a2, 0, 0, (unsigned int)GameData_22030f8_alt1,
      (unsigned int)GameData_22030fc),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 88LL))(
      *a2, 0, 0, (unsigned int)GameData_22030f8_alt1,
      (unsigned int)GameData_22030fc),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 96LL))(
      *a2, *(_QWORD*)(*(_QWORD*)(a1 + 8) + 440LL),
      *(_QWORD*)(*(_QWORD*)(a1 + 8) + 448LL)),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = *a2;
  v16[0] = 0;
  v16[1] = 0x3F80000000000000LL;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v4 + 144LL))(v4, 0, v16),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 72LL))(
      *a2, 0, 0, *(unsigned int*)(*(_QWORD*)(a1 + 8) + 13312LL),
      *(unsigned int*)(*(_QWORD*)(a1 + 8) + 13316LL)),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a2 + 88LL))(
      *a2, 0, 0, *(unsigned int*)(*(_QWORD*)(a1 + 8) + 13312LL),
      *(unsigned int*)(*(_QWORD*)(a1 + 8) + 13316LL)),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = *a2;
  v6 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 8) + 456LL) +
                                32LL))(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 456LL)),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v5 + 96LL))(v5, v6, v7),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v8 = *a2;
  v16[0] = 0;
  v16[1] = 0x3F80000000000000LL;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v8 + 144LL))(v8, 0, v16),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = *a2;
  v10 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 8) + 464LL) +
                                 32LL))(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 464LL)),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v9 + 96LL))(v9, v10, v11),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v12 = *a2;
  v16[0] = 0;
  v16[1] = 0x3F80000000000000LL;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v12 + 144LL))(v12, 0, v16),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v13 = *a2;
  v14 = (void (**)(__int64, __int64))GameData_212c460[0],
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64))GameData_212c460[0])(v13 + 8, 1),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*v14)(v13 + 8, 2);
  (*v14)(v13 + 8, 3);
  (*v14)(v13 + 8, 4);
  (*v14)(v13 + 8, 5);
  (*v14)(v13 + 8, 6);
  (*v14)(v13 + 8, 7);
  (*v14)(v13 + 8, 8);
  (*v14)(v13 + 8, 9);
  (*v14)(v13 + 8, 10);
  (*v14)(v13 + 8, 11);
  (*v14)(v13 + 8, 12);
  (*v14)(v13 + 8, 13);
  return ((__int64 (*)(__int64, __int64))*v14)(v13 + 8, 14);
}

#pragma GCC visibility pop
