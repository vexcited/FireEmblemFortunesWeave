#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_104420(_QWORD, _QWORD);
__int64 GameRoutine_107450(_QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
extern __int64* GameData_21344b0[2];
extern __int64* GameData_21344b8;
extern __int64* snd_g_memory_ptr[2];
__int64 Archive_104120(__int64 result, __int64 a2);

__int64 Archive_104120(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  if (*(_BYTE*)(result + 40) == 1) {
    v2 = result;
    result = GameRoutine_104420(result, a2);
    v3 = *(_QWORD*)(v2 + 8);
    if (*(_QWORD*)(v2 + 16) != v3) {
      v4 = 0;
      v5 = snd_g_memory_ptr[0];
      v6 = GameData_21344b0[0] + 2;
      v7 = GameData_21344b8 + 2;
      while (1) {
        v8 = (__int64*)(v3 + 32 * v4);
        v9 = *v8;
        *v8 = 0;
        GameRoutine_107450(v9);
        result =
            (*(__int64 (**)(__int64, __int64))(*(_QWORD*)*v5 + 24LL))(*v5, v9);
        v10 = v8[1];
        if (v8[2] != v10) {
          break;
        }
      LABEL_4:
        v3 = *(_QWORD*)(v2 + 8);
        if (++v4 >= (unsigned __int64)((*(_QWORD*)(v2 + 16) - v3) >> 5)) {
          goto LABEL_23;
        }
      }
      v11 = 0;
      while (1) {
        v12 = *(_QWORD*)(v10 + 8 * v11);
        *(_QWORD*)(v10 + 8 * v11) = 0;
        v13 = *(unsigned __int8*)(v12 + 224);
        *(_QWORD*)(v12 + 152) = v6;
        if (v13 == 1) {
          if (*(_QWORD*)(v12 + 176) != 0) {
            v14 = *v5;
            v15 = *(_QWORD*)(v12 + 168);
            *(_QWORD*)(v12 + 168) = 0;
            (*(void (**)(__int64, __int64))(*(_QWORD*)v14 + 24LL))(v14, v15);
            v16 = *v5;
            v17 = *(_QWORD*)(v12 + 176);
            *(_QWORD*)(v12 + 176) = 0;
            (*(void (**)(__int64, __int64))(*(_QWORD*)v16 + 24LL))(v16, v17);
            *(_QWORD*)(v12 + 184) = 0;
          }
          *(_BYTE*)(v12 + 224) = 0;
        }
        v18 = *(_QWORD*)(v12 + 176);
        *(_QWORD*)(v12 + 160) = v7;
        if (v18 != 0) {
          v19 = *v5;
          v20 = *(_QWORD*)(v12 + 168);
          *(_QWORD*)(v12 + 168) = 0;
          (*(void (**)(__int64, __int64))(*(_QWORD*)v19 + 24LL))(v19, v20);
          v21 = *v5;
          v22 = *(_QWORD*)(v12 + 176);
          *(_QWORD*)(v12 + 176) = 0;
          (*(void (**)(__int64, __int64))(*(_QWORD*)v21 + 24LL))(v21, v22);
          *(_QWORD*)(v12 + 184) = 0;
        }
        nn_os_FinalizeMutex(v12 + 192);
        if ((*(_BYTE*)(v12 + 72) & 1) != 0) {
          (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v5 + 24LL))(
              *v5, *(_QWORD*)(v12 + 88));
          if ((*(_BYTE*)(v12 + 48) & 1) == 0) {
          LABEL_16:
            if ((*(_BYTE*)(v12 + 24) & 1) == 0) {
              goto LABEL_17;
            }
            goto LABEL_21;
          }
        }
        else if ((*(_BYTE*)(v12 + 48) & 1) == 0) {
          goto LABEL_16;
        }
        (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v5 + 24LL))(
            *v5, *(_QWORD*)(v12 + 64));
        if ((*(_BYTE*)(v12 + 24) & 1) == 0) {
        LABEL_17:
          if ((*(_BYTE*)v12 & 1) != 0) {
            goto LABEL_22;
          }
          goto LABEL_7;
        }
      LABEL_21:
        (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v5 + 24LL))(
            *v5, *(_QWORD*)(v12 + 40));
        if ((*(_BYTE*)v12 & 1) != 0) {
        LABEL_22:
          (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v5 + 24LL))(
              *v5, *(_QWORD*)(v12 + 16));
        }
      LABEL_7:
        result =
            (*(__int64 (**)(__int64, __int64))(*(_QWORD*)*v5 + 24LL))(*v5, v12);
        v10 = v8[1];
        if (++v11 >= (unsigned __int64)((v8[2] - v10) >> 3)) {
          goto LABEL_4;
        }
      }
    }
  LABEL_23:
    *(_BYTE*)(v2 + 40) = 0;
  }
  return result;
}

#pragma GCC visibility pop
