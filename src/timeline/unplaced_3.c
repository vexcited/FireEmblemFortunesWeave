#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_651190(__int64);
void GameRoutine_651250(__int64);
void __attribute__((noreturn)) GameHr_4c20();
__int64 timeline_5fa0(unsigned int* a1, unsigned __int64 a2);
void __attribute__((noreturn)) timeline_6118();
void __attribute__((noreturn)) timeline_7790();
void __attribute__((noreturn)) timeline_77a0();
void __attribute__((noreturn)) timeline_77b0();

__int64 timeline_5fa0(unsigned int* a1, unsigned __int64 a2)
{
  __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v9;
  __int64 v10;
  unsigned __int64* v11;

  v2 = *((_QWORD*)a1 + 2);
  if (v2 != 0) {
    v4 = *(_QWORD*)v2;
    if (a2 != 0) {
      goto LABEL_3;
    }
  LABEL_10:
    v7 = v4 + 1;
    if (v4 + 1 <= 0x1C) {
      goto LABEL_12;
    }
    return 0;
  }
  v4 = 0;
  if (a2 == 0) {
    goto LABEL_10;
  }
LABEL_3:
  if (a2 > 0xFFFFFFF0) {
    return 0;
  }
  v5 = *a1;
  v6 = 28LL - __clz(a2 - v5 + 16);
  if (a2 >= v5) {
    v7 = v6;
  }
  else {
    v7 = 0;
  }
  if (v7 <= v4) {
    return 1;
  }
LABEL_12:
  if (v2 != 0) {
    if (v4 < v7) {
      goto LABEL_16;
    }
    goto LABEL_18;
  }
  v2 = GameRoutine_651190(232);
  *(_QWORD*)(v2 + 224) = 0;
  *((_QWORD*)a1 + 2) = v2;
  *(_OWORD*)v2 = (__typeof__(*(_OWORD*)v2)){0};
  *(_OWORD*)(v2 + 16) = (__typeof__(*(_OWORD*)(v2 + 16))){0};
  *(_OWORD*)(v2 + 32) = (__typeof__(*(_OWORD*)(v2 + 32))){0};
  *(_OWORD*)(v2 + 48) = (__typeof__(*(_OWORD*)(v2 + 48))){0};
  *(_OWORD*)(v2 + 64) = (__typeof__(*(_OWORD*)(v2 + 64))){0};
  *(_OWORD*)(v2 + 80) = (__typeof__(*(_OWORD*)(v2 + 80))){0};
  *(_OWORD*)(v2 + 96) = (__typeof__(*(_OWORD*)(v2 + 96))){0};
  *(_OWORD*)(v2 + 112) = (__typeof__(*(_OWORD*)(v2 + 112))){0};
  *(_OWORD*)(v2 + 128) = (__typeof__(*(_OWORD*)(v2 + 128))){0};
  *(_OWORD*)(v2 + 144) = (__typeof__(*(_OWORD*)(v2 + 144))){0};
  *(_OWORD*)(v2 + 160) = (__typeof__(*(_OWORD*)(v2 + 160))){0};
  *(_OWORD*)(v2 + 176) = (__typeof__(*(_OWORD*)(v2 + 176))){0};
  *(_OWORD*)(v2 + 192) = (__typeof__(*(_OWORD*)(v2 + 192))){0};
  *(_OWORD*)(v2 + 208) = (__typeof__(*(_OWORD*)(v2 + 208))){0};
  if (v4 < v7) {
  LABEL_16:
    while ((unsigned __int64)((16LL << v4) - 0x2000000000000000LL) >=
           0xE000000000000001LL) {
      v9 = GameRoutine_651190(128LL << v4);
      v10 = v2 + 8 * v4++;
      *(_QWORD*)(v10 + 8) = v9;
      if (v7 == v4) {
        goto LABEL_18;
      }
    }
    if (v4 > *(_QWORD*)v2) {
      do {
        GameRoutine_651250(*(_QWORD*)(v2 + 8 * v4));
        v11 = *((unsigned __int64**)a1 + 2);
        *(_QWORD*)(v2 + 8 * v4--) = 0;
      } while (v4 > *v11);
    }
    return 0;
  }
LABEL_18:
  *(_QWORD*)v2 = v7;
  return 1;
}

void __attribute__((noreturn)) timeline_6118() { GameHr_4c20(); }

void __attribute__((noreturn)) timeline_7790() { GameHr_4c20(); }

void __attribute__((noreturn)) timeline_77a0() { GameHr_4c20(); }

void __attribute__((noreturn)) timeline_77b0() { GameHr_4c20(); }

#pragma GCC visibility pop
