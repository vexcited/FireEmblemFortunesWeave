#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_adf1e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 Material_addbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 strncmp(_QWORD, _QWORD, _QWORD);
__int64 GroundModule_c0f340(__int64 result, __int64 a2);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
extern _UNKNOWN* GameData_212d498;
extern _UNKNOWN* GameData_212df10;
extern _UNKNOWN* GameData_212ea68;
extern int* GameData_212d490;
extern int* GameData_212df08;
extern int* GameData_212ea60;
void Model_a64140(__int64);
__int64 GroundModule_c0f0a0(__int64 result, __int64 a2);

__int64 GroundModule_c0f0a0(__int64 result, __int64 a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  atomic_uchar* v5;
  int* v6;
  atomic_uchar* v7;
  int* v8;
  atomic_uchar* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64* i;
  __int64* v28;
  __int64 v29;
  __int64 v30;

  v2 = *(__int64**)(a2 + 744);
  v3 = *(__int64**)(a2 + 752);
  if (v2 != v3) {
    v4 = result;
    v5 = (atomic_uchar*)GameData_212d498;
    v6 = GameData_212d490;
    v7 = (atomic_uchar*)GameData_212ea68;
    v8 = GameData_212ea60;
    v9 = (atomic_uchar*)GameData_212df10;
    do {
      v10 = *v2;
      if (*(_QWORD*)(*v2 + 752) != *(_QWORD*)(*v2 + 744)) {
        result = GroundModule_c0f0a0(v4, v10);
        v10 = *v2;
      }
      if ((atomic_load_explicit(v5, memory_order_acquire) & 1) == 0) {
        v30 = v10;
        result = __cxa_guard_acquire(v5);
        v10 = v30;
        if ((_DWORD)result != 0) {
          *v6 = wld_Crc32(0, "MapObjectModule", 0xFu);
          result = __cxa_guard_release(v5);
          v10 = v30;
        }
      }
      v11 = *(_QWORD*)(v10 + 512);
      v12 = v11;
      while (v12 != *(_QWORD*)(v10 + 504)) {
        v13 = *(_DWORD*)(v12 - 16);
        v12 -= 16;
        v11 -= 16;
        if (v13 == *v6) {
          if (*(_QWORD*)(v10 + 512) != v11) {
            v14 = *(_QWORD*)(v11 + 8);
            if (v14 != 0) {
              if ((*(_BYTE*)(v14 + 121) & 1) == 0) {
                v15 = *v2;
                if ((atomic_load_explicit(v9, memory_order_acquire) & 1) == 0) {
                  result = __cxa_guard_acquire(v9);
                  if ((_DWORD)result != 0) {
                    *GameData_212df08 = wld_Crc32(0, "ModelModule", 0xBu);
                    result = __cxa_guard_release(v9);
                  }
                }
                v16 = *(_QWORD*)(v15 + 512);
                v17 = v16;
                while (v17 != *(_QWORD*)(v15 + 504)) {
                  v18 = *(_DWORD*)(v17 - 16);
                  v17 -= 16;
                  v16 -= 16;
                  if (v18 == *GameData_212df08) {
                    if (*(_QWORD*)(v15 + 512) != v16) {
                      v19 = *(_QWORD*)(v16 + 8);
                      if (v19 != 0) {
                        v20 = *(_QWORD*)(v19 + 24);
                        if (v20 != 0) {
                          result =
                              GroundModule_c0f340(v4, *(_QWORD*)(v19 + 24));
                          if (*(_QWORD*)(v19 + 32) != 0) {
                            Model_a64140(v20);
                            result = (*(__int64 (**)(__int64))(*(_QWORD*)v20 +
                                                               16LL))(v20);
                          }
                        }
                      }
                    }
                    goto LABEL_3;
                  }
                }
              }
              goto LABEL_3;
            }
          }
          break;
        }
      }
      v22 = *v2;
      if ((atomic_load_explicit(v7, memory_order_acquire) & 1) == 0) {
        result = __cxa_guard_acquire(v7);
        if ((_DWORD)result != 0) {
          *v8 = wld_Crc32(0, "GrassModule", 0xBu);
          result = __cxa_guard_release(v7);
        }
      }
      v23 = *(_QWORD*)(v22 + 512);
      v24 = v23;
      while (v24 != *(_QWORD*)(v22 + 504)) {
        v25 = *(_DWORD*)(v24 - 16);
        v24 -= 16;
        v23 -= 16;
        if (v25 == *v8) {
          if (*(_QWORD*)(v22 + 512) != v23) {
            v26 = *(_QWORD*)(v23 + 8);
            if (v26 != 0) {
              v28 = *(__int64**)(v26 + 72);
              for (i = *(__int64**)(v26 + 80); v28 != i;
                   result = GroundModule_c0f340(v4, v29)) {
                v29 = *v28;
                v28 += 2;
              }
            }
          }
          break;
        }
      }
    LABEL_3:
      ++v2;
    } while (v2 != v3);
  }
  return result;
}

__int64 GroundModule_c0f340(__int64 result, __int64 a2)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;

  v2 = *(_QWORD**)(a2 + 312);
  v3 = *(_QWORD**)(a2 + 320);
  if (v2 != v3) {
    v4 = result;
    do {
      v5 = *v2;
      v6 = *(_QWORD*)(*v2 + 16LL);
      if (v6 == 0) {
        goto LABEL_11;
      }
      v7 = *(_QWORD**)(v6 + 56);
      v8 = *(_QWORD**)(v6 + 64);
      if (v7 != v8) {
        while (1) {
          result = strncmp(*v7, "blend_ground", 12);
          if ((_DWORD)result == 0) {
            break;
          }
          if (++v7 == v8) {
            goto LABEL_11;
          }
        }
      }
      if (v7 == v8) {
      LABEL_11:
        v9 = *(_QWORD*)(v5 + 8);
        if (v9 == 0) {
          goto LABEL_5;
        }
        v7 = *(_QWORD**)(v9 + 80);
        v10 = *(_QWORD**)(v9 + 88);
        if (v7 != v10) {
          while (1) {
            result = strncmp(*v7, "blend_ground", 12);
            if ((_DWORD)result == 0) {
              break;
            }
            if (++v7 == v10) {
              goto LABEL_5;
            }
          }
        }
        if (v7 == v10) {
        LABEL_5:
          Material_addbe0(v5, "co_blend_ground", 15, 1);
          GameRoutine_adf1e0(*v2, "BakeBaseColor", 13, *(_QWORD*)(v4 + 24),
                             *(_QWORD*)(v4 + 32));
          GameRoutine_adf1e0(*v2, "BakeNormal", 10, *(_QWORD*)(v4 + 40),
                             *(_QWORD*)(v4 + 48));
          GameRoutine_adf1e0(*v2, "Height", 6, *(_QWORD*)(v4 + 56),
                             *(_QWORD*)(v4 + 64));
          (*(void (**)(_QWORD, const char*, __int64, float))(
              *(_QWORD*)*v2 + 16LL))(*v2, "GroundBlendDistanceRatio", 24,
                                     1.0 / *(float*)(v4 + 96));
          (*(void (**)(_QWORD, const char*, __int64, float))(
              *(_QWORD*)*v2 + 16LL))(*v2, "GroundBlendNormalDistanceRatio", 30,
                                     1.0 / *(float*)(v4 + 100));
          (*(void (**)(_QWORD, const char*, __int64, double))(
              *(_QWORD*)*v2 + 24LL))(*v2, "GroundSize", 10,
                                     *(double*)(v4 + 72));
          result = (*(__int64 (**)(_QWORD, const char*, __int64, double))(
              *(_QWORD*)*v2 + 24LL))(*v2, "GroundCenter", 12,
                                     *(double*)(v4 + 80));
          goto LABEL_6;
        }
      }
      if (*(_DWORD*)(*v7 + 16LL) != 0) {
        goto LABEL_5;
      }
    LABEL_6:
      v2 += 2;
    } while (v2 != v3);
  }
  return result;
}

#pragma GCC visibility pop
