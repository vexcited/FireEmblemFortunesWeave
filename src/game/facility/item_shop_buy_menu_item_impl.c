#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 EmptyShopMenuItem_Buy_186b4c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 ItemShopBuyMenuItem_1865e80(__int64 result, _QWORD* a2);
__int64 ItemShopBuyMenuItem_18664f0(_QWORD* a1);

__int64 ItemShopBuyMenuItem_1865e80(__int64 result, _QWORD* a2)
{
  __int64 v2;

  if (a2[1] != *a2) {
    v2 = *(_QWORD*)(*(_QWORD*)*a2 + 48LL);
    if (v2 != 0 && (((0x10000000000LL << *(_BYTE*)(v2 + 72)) |
                     (1LL << *(_BYTE*)(v2 + 73))) &
                    0xFFBFFFFFFFA39FFFLL) == 0) {
      **(_BYTE**)(result + 8) = 1;
    }
  }
  return result;
}

__int64 ItemShopBuyMenuItem_18664f0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BYTE v8[32];
  _BYTE* v9;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = a1[1];
  v4 = a1[11];
  v3 = a1[12];
  v9 = nullptr;
  if (*(_QWORD*)(v2 + 152) != 0) {
    v5 = *(_QWORD*)(v2 + 152);
  }
  else {
    v5 = v2;
  }
  EmptyShopMenuItem_Buy_186b4c0(v5, v3, v4, 0, v8);
  if (v9 == v8) {
    v6 = 32;
    goto LABEL_10;
  }
  if (v9 != nullptr) {
    v6 = 40;
  LABEL_10:
    (*(void (**)(void))(*(_QWORD*)v9 + v6))();
  }
  return 9;
}

#pragma GCC visibility pop
