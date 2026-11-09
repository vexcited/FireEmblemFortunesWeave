#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_8e17a0(_QWORD, _QWORD, _QWORD);
extern __int64 (***GameData_212dae8)();
extern __int64 GameData_22407a8;
extern __int64 game_GameModeData_instance_;
__int64 Reliance_Destructor(__int64 a1, __int64 a2);

__int64 Reliance_Destructor(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 (***v14)();
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int16 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int16 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  _QWORD v41[2];
  __int64 v42;
  _QWORD v43[2];
  __int64 v44;
  __int64 v45;
  __int64 v46;

  v4 = *(int*)(a2 + 20);
  result = a2;
  *(_DWORD*)(a2 + 20) = v4 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v4) = 0;
  v6 = GameData_22407a8;
  if (GameData_22407a8 != 0) {
    v45 = v2;
    v46 = v3;
    v7 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v7 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7) = 2;
    v9 = 0xAAAAAAAAAAAAAAABLL *
         ((__int64)(*(_QWORD*)(v6 + 16) - *(_QWORD*)(v6 + 8)) >> 3);
    v10 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v10 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) = v9;
    v11 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v11 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = BYTE1(v9);
    v12 = *(__int64**)(v6 + 8);
    v13 = *(__int64**)(v6 + 16);
    if (v12 != v13) {
      v14 = GameData_212dae8;
      do {
        v21 = *v12;
        v43[0] = 0;
        v43[1] = v21;
        if (v21 != 0) {
          v21 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v21 + 24) + 1784LL) + 272LL);
        }
        v44 = v21;
        v22 = v12[1];
        v41[0] = 0;
        v41[1] = v22;
        if (v22 != 0) {
          v23 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v22 + 24) + 1784LL) + 272LL);
          v42 = v23;
          if (v21 != 0) {
            v24 = (__int64)v14;
            if (v23 == 0) {
              goto LABEL_16;
            }
            v25 = *(_QWORD*)(game_GameModeData_instance_ + 128);
            result = GameRoutine_8e17a0(v25, v43, v41);
            if ((result & 0x80000000) == 0) {
              v24 = *(_QWORD*)(v25 + 8) + 56LL * (unsigned int)result;
              goto LABEL_16;
            }
          }
        }
        else {
          v42 = 0;
        }
        v24 = (__int64)v14;
      LABEL_16:
        v26 = *(_WORD*)(v24 + 12);
        v27 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v27 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v27) = v26;
        v28 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v28 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v28) = HIBYTE(v26);
        v29 = *v12;
        v43[0] = 0;
        v43[1] = v29;
        if (v29 != 0) {
          v29 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v29 + 24) + 1784LL) + 272LL);
        }
        v44 = v29;
        v30 = v12[1];
        v41[0] = 0;
        v41[1] = v30;
        if (v30 != 0) {
          v31 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v30 + 24) + 1784LL) + 272LL);
          v42 = v31;
          if (v29 != 0) {
            v32 = (__int64)v14;
            if (v31 == 0) {
              goto LABEL_25;
            }
            v33 = *(_QWORD*)(game_GameModeData_instance_ + 128);
            result = GameRoutine_8e17a0(v33, v43, v41);
            if ((result & 0x80000000) == 0) {
              v32 = *(_QWORD*)(v33 + 8) + 56LL * (unsigned int)result;
              goto LABEL_25;
            }
          }
        }
        else {
          v42 = 0;
        }
        v32 = (__int64)v14;
      LABEL_25:
        v34 = *(_WORD*)(v32 + 14);
        v35 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v35 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v35) = v34;
        v36 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v36 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v36) = HIBYTE(v34);
        v37 = *v12;
        v43[0] = 0;
        v43[1] = v37;
        if (v37 != 0) {
          v37 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v37 + 24) + 1784LL) + 272LL);
        }
        v44 = v37;
        v38 = v12[1];
        v41[0] = 0;
        v41[1] = v38;
        if (v38 != 0) {
          v39 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v38 + 24) + 1784LL) + 272LL);
          v42 = v39;
          if (v37 != 0) {
            v15 = (__int64)v14;
            if (v39 == 0) {
              goto LABEL_6;
            }
            v40 = *(_QWORD*)(game_GameModeData_instance_ + 128);
            result = GameRoutine_8e17a0(v40, v43, v41);
            if ((result & 0x80000000) == 0) {
              v15 = *(_QWORD*)(v40 + 8) + 56LL * (unsigned int)result;
              goto LABEL_6;
            }
          }
        }
        else {
          v42 = 0;
        }
        v15 = (__int64)v14;
      LABEL_6:
        v16 = *(_DWORD*)(v15 + 16);
        v17 = *(int*)(a2 + 20);
        v12 += 3;
        *(_DWORD*)(a2 + 20) = v17 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = v16;
        v18 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v18 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = BYTE1(v16);
        v19 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v19 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v19) = BYTE2(v16);
        v20 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v20 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v20) = HIBYTE(v16);
      } while (v12 != v13);
    }
  }
  return result;
}

#pragma GCC visibility pop
