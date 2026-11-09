#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_adf1e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 Material_addbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 strncmp(_QWORD, _QWORD, _QWORD);
__int64 GroundModule_c0f340(__int64 result, __int64 a2);

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
