#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1841930(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18aadd0(void);
__int64 GameRoutine_18ab160(void);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64* GameData_212c998[148];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
bool IconLegion_19abe40(__int64 a1, __int64 a2);
bool IconLegion_19ac160(__int64 a1);
__int64 IconLegion_19ac290(__int64 result, __int64* a2);

bool IconLegion_19abe40(__int64 a1, __int64 a2)
{
  int v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  const char* v10;
  __int64 v11;

  v2 = *(unsigned __int8*)(*(_QWORD*)(a2 + 400) + 96LL);
  if (v2 != 1) {
    return v2 == 1;
  }
  v5 = ui_LayoutAccessor_FindPane(a1 + 88, "Img");
  if (v5 == 0) {
    v6 = 0;
    v7 = *(unsigned __int8*)(a2 + 1944);
    if (*(_BYTE*)(a2 + 1944) != 0) {
      goto LABEL_4;
    }
  LABEL_7:
    LayoutAccessor_155e830(a1 + 88, 0);
    return v2 == 1;
  }
  v6 = __dynamic_cast(v5, GameData_212d670[0], GameData_212d678[0], 0);
  v7 = *(unsigned __int8*)(a2 + 1944);
  if (*(_BYTE*)(a2 + 1944) == 0) {
    goto LABEL_7;
  }
LABEL_4:
  v8 = GameData_212c998[0];
  v9 = *GameData_212c998[0];
  if (*(_QWORD*)(a2 + 408) != 0) {
    v10 = "Disable";
    v11 = *(_QWORD*)(*(_QWORD*)(v9 + 64) + 8 * v7);
  }
  else {
    v11 = *(_QWORD*)(*(_QWORD*)(v9 + 64) + 8 * v7);
    if (*(_WORD*)(v11 + 18) != 0) {
      v10 = "Enable";
    }
    else {
      v10 = "Disable";
    }
  }
  *(_QWORD*)(a1 + 1104) = v11;
  LayoutAccessor_155e830(a1 + 88, 1);
  LayoutAccessor_1562680(a1 + 88, "BgLegion", 1.0);
  LayoutAccessor_1562cf0(a1 + 88, v10);
  GameRoutine_1841930(
      v6,
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                            8LL * *(unsigned __int8*)(a2 + 1944)) +
                 64LL),
      0);
  return v2 == 1;
}

bool IconLegion_19ac160(__int64 a1)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 144LL))(a1) & 1) == 0 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1) & 1) == 0) {
    return false;
  }
  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL);
  while (1) {
    v2 = *(_QWORD*)(v2 + 24);
    if (v2 == 0) {
      break;
    }
    if ((*(_BYTE*)(v2 + 88) & 1) == 0) {
      return false;
    }
  }
  v4 = *(_QWORD*)(a1 + 320);
  if (v4 == 0) {
    return *(_OWORD*)(a1 + 1096) != 0;
  }
  v5 = *(_QWORD*)(a1 + 312);
  v6 = *(_QWORD*)(a1 + 320);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                            memory_order_relaxed);
  v7 = std___1___shared_weak_count_lock(v6);
  std___1___shared_weak_count___release_weak(v4);
  if (v7 == 0) {
    return *(_OWORD*)(a1 + 1096) != 0;
  }
  if (v5 != 0) {
    v8 = ((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 144LL))(v5) & 1) != 0
             ? (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5)
             : 0;
  }
  else {
    v8 = 1;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  return (v8 & 1) != 0 && *(_OWORD*)(a1 + 1096) != 0;
}

__int64 IconLegion_19ac290(__int64 result, __int64* a2)
{
  __int64 v2;
  __int64* v4;
  __int64 v5;

  if (*(_OWORD*)(result + 1096) != 0 && a2[1] != 0) {
    v2 = result;
    result = std___1___shared_weak_count_lock(a2[1]);
    if (result != 0) {
      v4 = a2;
      v5 = result;
      result = *v4;
      if (*v4 != 0) {
        if (*(_QWORD*)(v2 + 1096) != 0) {
          result = GameRoutine_18ab160();
        }
        else {
          result = GameRoutine_18aadd0();
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

#pragma GCC visibility pop
