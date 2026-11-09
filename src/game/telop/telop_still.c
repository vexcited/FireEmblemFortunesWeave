#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_5fc1f0(_QWORD);
__int64 Pane_58f8a0(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 nn_os_AcquireReadLock(_QWORD);
__int64 nn_os_ReleaseReadLock(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPriority(_QWORD, _QWORD, long double);
__int64 ui_LayoutAccessor_Setup_155dda0(_QWORD, _QWORD);
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
__int64 TelopStill_Unknown31(__int64 result);
__int64 TelopStill_Unknown33(__int64 a1);

__int64 TelopStill_Unknown31(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  int v4;
  __int64 v5;
  long double v6;
  __int64 v7;
  __int64 v8;
  unsigned __int8* v9;
  unsigned int v10;
  __int16 v11;
  _QWORD v12[2];

  v1 = *(_QWORD*)(result + 152);
  if (*(_BYTE*)(v1 + 24) == 1) {
    v2 = *(_QWORD*)(result + 880);
    v3 = (_QWORD*)result;
    if (v2 != 0) {
      nn_os_AcquireReadLock(v2 + 696);
      v4 = *(_DWORD*)(v2 + 656);
      result = nn_os_ReleaseReadLock(v2 + 696);
      if ((v4 & 8) == 0) {
        return result;
      }
      v1 = v3[19];
    }
    v5 = v3[20];
    v12[0] = v1;
    v12[1] = v5;
    if (v5 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                memory_order_relaxed);
      ui_LayoutAccessor_Setup_155dda0(v3 + 21, v12);
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v5);
      }
    }
    else {
      ui_LayoutAccessor_Setup_155dda0(v3 + 21, v12);
    }
    GameRoutine_155e830(v3 + 21, 1);
    ui_LayoutAccessor_SetPriority(v3 + 21, 0xFFFFFFFFLL, v6);
    result = (*(__int64 (**)(_QWORD*))(*v3 + 264LL))(v3);
    if (*((_BYTE*)v3 + 824) == 1) {
      v7 = (*(__int64 (**)(_QWORD*))(*v3 + 224LL))(v3);
      result = GameRoutine_1562680(v3 + 21, v7, 1.0);
      v8 = v3[1];
      if (v8 != 0) {
        while (1) {
          if (*(_BYTE*)v8 == 2) {
            if (*(_DWORD*)(v8 + 32) == 3) {
              v3[2] = v8;
              v11 = v3[17] & 0xFF7F;
              goto LABEL_23;
            }
          }
          else if (*(_BYTE*)v8 == 0) {
            return result;
          }
          v8 += 64;
        }
      }
    }
    else {
      v9 = (unsigned __int8*)v3[2];
      if (v9 != nullptr) {
        v10 = *v9;
        if (v10 <= 0x10 && ((1 << v10) & 0x1CE00) != 0) {
          *((_WORD*)v3 + 68) |= 0x80u;
        }
      }
      v11 = *((_WORD*)v3 + 68) | 8;
    LABEL_23:
      *((_WORD*)v3 + 68) = v11;
    }
  }
  return result;
}

__int64 TelopStill_Unknown33(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  float v6;
  float v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v16[15];

  strcpy(v16, "Default");
  if (*(_QWORD*)(a1 + 880) != 0) {
    v2 = ui_LayoutAccessor_FindPane(a1 + 168, "Img");
    if (v2 != 0) {
      v3 = __dynamic_cast(v2, GameData_212d670[0], GameData_212d678[0], 0);
    }
    else {
      v3 = 0;
    }
    *(_QWORD*)(a1 + 912) = *(_QWORD*)(*(_QWORD*)(Pane_58f8a0(v3) + 24) + 8LL);
    v4 = *(__int64**)(GameRoutine_5fc1f0(
                          *(_QWORD*)(*(_QWORD*)(a1 + 880) + 592LL)) +
                      40);
    v5 = *v4;
    *(_QWORD*)(a1 + 896) = *(_QWORD*)(*v4 + 144);
    *(_QWORD*)(*(_QWORD*)(Pane_58f8a0(v3) + 24) + 8LL) = a1 + 888;
    v6 = (float)*(int*)(v5 + 36);
    v7 = (float)*(int*)(v5 + 40);
    *(_BYTE*)(v3 + 88) |= 0x10u;
    *(float*)(v3 + 80) = v6;
    *(float*)(v3 + 84) = v7;
    v8 = *(unsigned __int8*)(a1 + 832);
    v9 = *(_QWORD*)(a1 + 840);
    if ((v8 & 1) == 0) {
      v9 = v8 >> 1;
    }
    if (v9 != 0) {
      v10 = (v8 & 1) != 0 ? *(_QWORD*)(a1 + 848) : a1 + 833;
      if (v9 >= 10) {
        v11 = v10 + v9;
        v12 = v10;
        do {
          v13 = memchr(v12, 105, v9 - 9);
          if (v13 == 0) {
            break;
          }
          if (*(_QWORD*)v13 == 0x6C6974736D657469LL &&
              *(_WORD*)(v13 + 8) == 24428) {
            if (v13 == v10) {
              strcpy(v16, "Item");
            }
            return GameRoutine_1562cf0(a1 + 168, v16);
          }
          v12 = v13 + 1;
          v9 = v11 - v12;
        } while (v11 - v12 >= 10);
      }
    }
  }
  return GameRoutine_1562cf0(a1 + 168, v16);
}

#pragma GCC visibility pop
