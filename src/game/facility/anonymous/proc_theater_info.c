#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern char* GameData_1fafca8[4];
void LayoutAccessor_1562060(__int64*, __int64, _BYTE*);
void ProcTheaterInfo_Unknown28(__int64 a1);

void ProcTheaterInfo_Unknown28(__int64 a1)
{
  __int64 v1;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  char* v7;
  __int64* v8;

  v1 = *(_QWORD*)(a1 + 208);
  if (v1 != 0) {
    v3 = ui_LayoutAccessor_empty__ptr[0];
    if (*(_QWORD*)(a1 + 168) != 0) {
      v4 = *(__int64**)(a1 + 168);
    }
    else {
      v4 = ui_LayoutAccessor_empty__ptr[0];
    }
    LayoutAccessor_1562060(v4, (__int64)"L_Bg/T_Title", *(_BYTE**)(v1 + 48));
    if (*(_QWORD*)(a1 + 168) != 0) {
      v5 = *(__int64**)(a1 + 168);
    }
    else {
      v5 = v3;
    }
    v6 = *(unsigned __int8*)(*(_QWORD*)(a1 + 208) + 72LL);
    if (v6 == 4) {
      v7 = nullptr;
    }
    else {
      v7 = GameData_1fafca8[v6];
    }
    LayoutAccessor_1562060(v5, (__int64)"T_Genre", v7);
    if (*(_QWORD*)(a1 + 168) != 0) {
      v8 = *(__int64**)(a1 + 168);
    }
    else {
      v8 = v3;
    }
    LayoutAccessor_1562060(v8, (__int64)"T_Txt",
                           *(_BYTE**)(*(_QWORD*)(a1 + 208) + 56LL));
  }
}

#pragma GCC visibility pop
