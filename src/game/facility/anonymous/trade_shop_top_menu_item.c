#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16fdbe0(__int64, __int64, char, __int64);
extern _UNKNOWN GameData_1aac088;
extern _UNKNOWN GameData_1ab8d4c;
void* TradeShopTopMenuItem_Unknown4(__int64 a1);
__int64 TradeShopTopMenuItem_Unknown25(_QWORD* a1);
bool TradeShopTopMenuItem_1700e20(__int64 a1);

void* TradeShopTopMenuItem_Unknown4(__int64 a1)
{
  __int64 v1;
  void* v2;
  int v3;

  v1 = *(_QWORD*)(a1 + 88);
  if (v1 == 0) {
    return nullptr;
  }
  v2 = &GameData_1ab8d4c;
  v3 = *(unsigned __int8*)(*(_QWORD*)(v1 + 24) + 64LL);
  if (v3 != 5) {
    v2 = nullptr;
  }
  if (v3 == 7) {
    return &GameData_1aac088;
  }
  else {
    return v2;
  }
}

__int64 TradeShopTopMenuItem_Unknown25(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BYTE v7[32];
  _BYTE* v8;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = a1[1];
  v3 = a1[11];
  v8 = nullptr;
  if (*(_QWORD*)(v2 + 152) != 0) {
    v4 = *(_QWORD*)(v2 + 152);
  }
  else {
    v4 = v2;
  }
  GameRoutine_16fdbe0(v4, v3, 0, (__int64)v7);
  if (v8 == v7) {
    v5 = 32;
    goto LABEL_10;
  }
  if (v8 != nullptr) {
    v5 = 40;
  LABEL_10:
    (*(void (**)(void*))(*(_QWORD*)v8 + v5))((void*)v8);
  }
  return 9;
}

bool TradeShopTopMenuItem_1700e20(__int64 a1)
{
  return (*(unsigned int (**)(__int64))(*(_QWORD*)a1 + 592LL))(a1) == 0;
}

#pragma GCC visibility pop
