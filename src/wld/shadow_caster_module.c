#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212df10;
extern int* GameData_212df08;
void __attribute__((noreturn)) GameRoutine_8123d0(void);
__int64 ShadowCasterModule_Unknown5(__int64 result);

__int64 ShadowCasterModule_Unknown5(__int64 result)
{
  __int64 v1;
  unsigned __int8 explicit;
  int* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  _DWORD* v17;
  _DWORD* j;
  _DWORD* v19;
  _DWORD* v20;
  _DWORD* v21;
  _DWORD* i;
  int v23;
  _DWORD* v24;
  _DWORD* v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;

  if (*(_BYTE*)(result + 56) == 1) {
    v1 = *(_QWORD*)(result + 8);
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                    memory_order_acquire);
    v3 = GameData_212df08;
    if ((explicit & 1) == 0) {
      v28 = v1;
      v29 = result;
      v27 = __cxa_guard_acquire(GameData_212df10);
      v3 = GameData_212df08;
      v1 = v28;
      result = v29;
      if (v27 != 0) {
        *GameData_212df08 = wld_Crc32(0, "ModelModule", 11);
        __cxa_guard_release(GameData_212df10);
        v3 = GameData_212df08;
        v1 = v28;
        result = v29;
      }
    }
    v4 = *v3;
    v6 = *(_QWORD*)(v1 + 504);
    v5 = *(_QWORD*)(v1 + 512);
    v7 = v5;
    v8 = v5;
    do {
      if (v8 == v6) {
        goto LABEL_25;
      }
      v9 = *(_DWORD*)(v8 - 16);
      v8 -= 16;
      v7 -= 16;
    } while (v9 != v4);
    if (v5 != v7) {
      v10 = *(_QWORD*)(v7 + 8);
      if (v10 != 0) {
        v11 = *(_QWORD*)(v10 + 24);
        if ((*(_BYTE*)(result + 52) & 1) != 0) {
          v12 = 1;
        }
        else {
          if (*(_BYTE*)(result + 36) != 1) {
            v21 = *(_DWORD**)(v11 + 616);
            for (i = *(_DWORD**)(v11 + 624); v21 != i; v21 += 2) {
              *v21 = v21[1];
            }
            v12 = 3;
            goto LABEL_24;
          }
          v12 = 0;
        }
        v13 = result + 16LL * v12;
        if ((*(_BYTE*)(v13 + 36) & 1) == 0) {
          GameRoutine_8123d0();
        }
        v14 = *(_DWORD*)(v13 + 24);
        v15 = *(_DWORD*)(v13 + 28);
        v16 = *(_DWORD*)(v13 + 32);
        v17 = *(_DWORD**)(v11 + 616);
        for (j = *(_DWORD**)(v11 + 624); v17 != j; v17 += 2) {
          *v17 = v17[1];
        }
        if (v15 == 0) {
          if (v16 == 1) {
            v24 = *(_DWORD**)(v11 + 616);
            v25 = *(_DWORD**)(v11 + 624);
            if (v24 != v25) {
              v26 = ~v14;
              do {
                *v24 &= v26;
                v24 += 2;
              } while (v24 != v25);
            }
          }
          else if (v16 == 0) {
            v19 = *(_DWORD**)(v11 + 616);
            v20 = *(_DWORD**)(v11 + 624);
            while (v19 != v20) {
              *v19 = v14;
              v19 += 2;
            }
          }
        }
      LABEL_24:
        *(_DWORD*)(result + 60) = v12;
      }
    }
  LABEL_25:
    *(_BYTE*)(result + 56) = 0;
  }
  v23 = *(unsigned __int8*)(result + 18);
  *(_BYTE*)(result + 18) = v23 | 4;
  if (v23 != (v23 | 4)) {
    *(_BYTE*)(*(_QWORD*)(result + 8) + 664LL) = 0;
  }
  return result;
}

#pragma GCC visibility pop
