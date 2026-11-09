#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_cf7940(__int64);
__int64 GameRoutine_cfa2a0(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _DWORD* GameData_212d168;
extern _UNKNOWN* GameData_212deb8;
extern int* GameData_212deb0;
_QWORD* InitSetup_Unknown4(_QWORD* result);

_QWORD* InitSetup_Unknown4(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int8 explicit;
  int* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 i;
  int v15;
  __int64 v16;
  __int64 v17;
  int v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  _QWORD* v25;

  if (*GameData_212d168 != 1) {
    v1 = result[1];
    if ((*(_BYTE*)(v1 + 152) & 1) != 0 && (*(_BYTE*)(v1 + 225) & 1) == 0) {
      v2 = *(_QWORD*)(v1 + 312);
      if (v2 != 0) {
        explicit = atomic_load_explicit(
            (atomic_uchar* volatile)GameData_212deb8, memory_order_acquire);
        v4 = GameData_212deb0;
        if ((explicit & 1) == 0) {
          v24 = result;
          v22 = v2;
          v23 = v1;
          v19 = __cxa_guard_acquire(GameData_212deb8);
          v2 = v22;
          v1 = v23;
          v20 = v19;
          result = v24;
          if (v20 != 0) {
            *v4 = wld_Crc32(0, "CharacterBuilder", 16);
            __cxa_guard_release(GameData_212deb8);
            v2 = v22;
            v1 = v23;
            result = v24;
          }
        }
        v6 = *(_QWORD*)(v2 + 504);
        v5 = *(_QWORD*)(v2 + 512);
        v7 = v5;
        v8 = v5;
        while (v8 != v6) {
          v9 = *(_DWORD*)(v8 - 16);
          v8 -= 16;
          v7 -= 16;
          if (v9 == *v4) {
            if (v5 == v7) {
              break;
            }
            v10 = *(_QWORD*)(v7 + 8);
            if (v10 != 0) {
              LODWORD(v10) = *(_BYTE*)(v10 + 342) & 1;
            }
            goto LABEL_13;
          }
        }
      }
      LODWORD(v10) = 0;
    LABEL_13:
      if (*(_BYTE*)(v1 + 367) == 1) {
        if (((*(unsigned __int8*)(v1 + 366) | (unsigned int)v10) & 1) == 0) {
          return result;
        }
      }
      else if ((_DWORD)v10 == 0) {
        return result;
      }
      v11 = result;
      result = (_QWORD*)GameRoutine_cf7940(v1);
      if (result != nullptr) {
        v12 = v11;
        if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212deb8,
                                  memory_order_acquire) &
             1) == 0) {
          v25 = result;
          v21 = __cxa_guard_acquire(GameData_212deb8);
          result = v25;
          v12 = v11;
          if (v21 != 0) {
            *GameData_212deb0 = wld_Crc32(0, "CharacterBuilder", 16);
            __cxa_guard_release(GameData_212deb8);
            result = v25;
            v12 = v11;
          }
        }
        v13 = result[64];
        for (i = v13; i != result[63]; i -= 16) {
          v15 = *(_DWORD*)(i - 16);
          v13 -= 16;
          if (v15 == *GameData_212deb0) {
            if (result[64] != v13) {
              v16 = *(_QWORD*)(v13 + 8);
              if (v16 != 0 && (*(_BYTE*)(v16 + 342) & 1) != 0) {
                v17 = v12[1];
                if (*(_BYTE*)(v17 + 44) != 1 || *(_DWORD*)(v17 + 40) != 2) {
                  *(_DWORD*)(v17 + 48) = 2;
                  *(_BYTE*)(v17 + 52) = 1;
                }
                if ((*(_BYTE*)(v17 + 128) & 1) == 0 &&
                    (*(_BYTE*)(v17 + 129) & 1) != 0) {
                  return (_QWORD*)GameRoutine_cfa2a0(v17 + 32);
                }
              }
            }
            return result;
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
