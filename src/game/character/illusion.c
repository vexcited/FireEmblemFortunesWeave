#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Components_a87260(_QWORD, _QWORD, _QWORD);
__int64 Components_a878a0(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN GameData_2167560;
extern _UNKNOWN GameData_21f4d48;
extern _UNKNOWN* GameData_212df10;
extern __int64 (*GameData_200eb60[])();
extern int GameData_21f4d44;
extern int* GameData_212df08;
void GameRoutine_109d740(__int64, __int64, _QWORD*, unsigned int);
__int64 game_character_Illusion_Illusion_lambda0_Invoke_11040c0(__int64 result,
                                                                __int64 a2);
__int64 game_character_Illusion_Illusion_lambda0_Invoke_1104b20(__int64 result);
void game_character_Illusion_Snapshot_lambda0_Invoke(__int64 a1, __int64 a2);

__int64 game_character_Illusion_Illusion_lambda0_Invoke_11040c0(__int64 result,
                                                                __int64 a2)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v9;
  __int64 v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v16;
  __int64 v17;
  char v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int v23;
  __int64 v24;
  char v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned int v30;
  __int64 v31;
  char v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned int v37;
  __int64 v38;
  char v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned int v44;
  __int64 v45;
  char v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned int v51;
  __int64 v52;
  char v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  unsigned int v57;
  __int64 v58;
  char v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned int v63;
  __int64 v64;
  char v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned int v69;
  __int64 v70;
  char v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  unsigned int v75;
  __int64 v76;
  char v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  unsigned int v81;
  __int64 v82;
  char v83;
  __int64 v84;
  _QWORD v85[2];
  __int64 v86;
  _QWORD* v87;

  v2 = *(_QWORD**)a2;
  v4 = *(_QWORD*)(result + 8);
  v3 = *(_QWORD**)(result + 16);
  v5 = result;
  v6 = *(_QWORD*)(*(_QWORD*)a2 + 408LL);
  v7 = v3[51];
  if (v6 == 0 || v7 == 0) {
    goto LABEL_13;
  }
  v9 = *(_DWORD*)(v7 + 280) + 5;
  if (*(_DWORD*)(v6 + 280) != v9) {
    v10 = *(_QWORD*)(v6 + 8);
    nn_os_LockMutex(&GameData_2167560);
    Components_a878a0(v10, v6);
    Components_a87260(v10, v6, v9);
    *(_BYTE*)(v10 + 80) = 1;
    nn_os_UnlockMutex(&GameData_2167560);
    *(_DWORD*)(v6 + 280) = v9;
  }
  v11 = *(_BYTE*)(v7 + 289);
  v85[0] = GameData_200eb60;
  v85[1] = v7;
  v86 = v6;
  v87 = v85;
  *(_BYTE*)(v6 + 289) = v11;
  GameRoutine_109d740(v4 + 16, v6, v85, 5u);
  result = (__int64)v87;
  if (v87 == v85) {
    v12 = 32;
    goto LABEL_11;
  }
  if (v87 != nullptr) {
    v12 = 40;
  LABEL_11:
    result = (*(__int64 (**)(__int64))(*v87 + v12))((__int64)v87);
  }
  v3 = *(_QWORD**)(v5 + 16);
LABEL_13:
  v13 = v2[52];
  v14 = v3[52];
  if (v13 != 0 && v14 != 0) {
    v16 = *(_DWORD*)(v14 + 280) + 5;
    if (*(_DWORD*)(v13 + 280) != v16) {
      v17 = *(_QWORD*)(v13 + 8);
      nn_os_LockMutex(&GameData_2167560);
      Components_a878a0(v17, v13);
      Components_a87260(v17, v13, v16);
      *(_BYTE*)(v17 + 80) = 1;
      nn_os_UnlockMutex(&GameData_2167560);
      *(_DWORD*)(v13 + 280) = v16;
    }
    v18 = *(_BYTE*)(v14 + 289);
    v85[0] = GameData_200eb60;
    v85[1] = v14;
    v86 = v13;
    v87 = v85;
    *(_BYTE*)(v13 + 289) = v18;
    GameRoutine_109d740(v4 + 48, v13, v85, 5u);
    result = (__int64)v87;
    if (v87 == v85) {
      v19 = 32;
    }
    else {
      if (v87 == nullptr) {
      LABEL_24:
        v3 = *(_QWORD**)(v5 + 16);
        goto LABEL_25;
      }
      v19 = 40;
    }
    result = (*(__int64 (**)(__int64))(*v87 + v19))((__int64)v87);
    goto LABEL_24;
  }
LABEL_25:
  v20 = v2[53];
  v21 = v3[53];
  if (v20 != 0 && v21 != 0) {
    v23 = *(_DWORD*)(v21 + 280) + 5;
    if (*(_DWORD*)(v20 + 280) != v23) {
      v24 = *(_QWORD*)(v20 + 8);
      nn_os_LockMutex(&GameData_2167560);
      Components_a878a0(v24, v20);
      Components_a87260(v24, v20, v23);
      *(_BYTE*)(v24 + 80) = 1;
      nn_os_UnlockMutex(&GameData_2167560);
      *(_DWORD*)(v20 + 280) = v23;
    }
    v25 = *(_BYTE*)(v21 + 289);
    v85[0] = GameData_200eb60;
    v85[1] = v21;
    v86 = v20;
    v87 = v85;
    *(_BYTE*)(v20 + 289) = v25;
    GameRoutine_109d740(v4 + 80, v20, v85, 5u);
    result = (__int64)v87;
    if (v87 == v85) {
      v26 = 32;
    }
    else {
      if (v87 == nullptr) {
      LABEL_36:
        v3 = *(_QWORD**)(v5 + 16);
        goto LABEL_37;
      }
      v26 = 40;
    }
    result = (*(__int64 (**)(__int64))(*v87 + v26))((__int64)v87);
    goto LABEL_36;
  }
LABEL_37:
  v27 = v2[56];
  v28 = v3[56];
  if (v27 != 0 && v28 != 0) {
    v30 = *(_DWORD*)(v28 + 280) + 5;
    if (*(_DWORD*)(v27 + 280) != v30) {
      v31 = *(_QWORD*)(v27 + 8);
      nn_os_LockMutex(&GameData_2167560);
      Components_a878a0(v31, v27);
      Components_a87260(v31, v27, v30);
      *(_BYTE*)(v31 + 80) = 1;
      nn_os_UnlockMutex(&GameData_2167560);
      *(_DWORD*)(v27 + 280) = v30;
    }
    v32 = *(_BYTE*)(v28 + 289);
    v85[0] = GameData_200eb60;
    v85[1] = v28;
    v86 = v27;
    v87 = v85;
    *(_BYTE*)(v27 + 289) = v32;
    GameRoutine_109d740(v4 + 176, v27, v85, 5u);
    result = (__int64)v87;
    if (v87 == v85) {
      v33 = 32;
    }
    else {
      if (v87 == nullptr) {
      LABEL_48:
        v3 = *(_QWORD**)(v5 + 16);
        goto LABEL_49;
      }
      v33 = 40;
    }
    result = (*(__int64 (**)(__int64))(*v87 + v33))((__int64)v87);
    goto LABEL_48;
  }
LABEL_49:
  v34 = v2[57];
  v35 = v3[57];
  if (v34 != 0 && v35 != 0) {
    v37 = *(_DWORD*)(v35 + 280) + 5;
    if (*(_DWORD*)(v34 + 280) != v37) {
      v38 = *(_QWORD*)(v34 + 8);
      nn_os_LockMutex(&GameData_2167560);
      Components_a878a0(v38, v34);
      Components_a87260(v38, v34, v37);
      *(_BYTE*)(v38 + 80) = 1;
      nn_os_UnlockMutex(&GameData_2167560);
      *(_DWORD*)(v34 + 280) = v37;
    }
    v39 = *(_BYTE*)(v35 + 289);
    v85[0] = GameData_200eb60;
    v85[1] = v35;
    v86 = v34;
    v87 = v85;
    *(_BYTE*)(v34 + 289) = v39;
    GameRoutine_109d740(v4 + 208, v34, v85, 5u);
    result = (__int64)v87;
    if (v87 == v85) {
      v40 = 32;
    }
    else {
      if (v87 == nullptr) {
      LABEL_60:
        v3 = *(_QWORD**)(v5 + 16);
        goto LABEL_61;
      }
      v40 = 40;
    }
    result = (*(__int64 (**)(__int64))(*v87 + v40))((__int64)v87);
    goto LABEL_60;
  }
LABEL_61:
  v41 = v2[58];
  v42 = v3[58];
  if (v41 != 0 && v42 != 0) {
    v44 = *(_DWORD*)(v42 + 280) + 5;
    if (*(_DWORD*)(v41 + 280) != v44) {
      v45 = *(_QWORD*)(v41 + 8);
      nn_os_LockMutex(&GameData_2167560);
      Components_a878a0(v45, v41);
      Components_a87260(v45, v41, v44);
      *(_BYTE*)(v45 + 80) = 1;
      nn_os_UnlockMutex(&GameData_2167560);
      *(_DWORD*)(v41 + 280) = v44;
    }
    v46 = *(_BYTE*)(v42 + 289);
    v85[0] = GameData_200eb60;
    v85[1] = v42;
    v86 = v41;
    v87 = v85;
    *(_BYTE*)(v41 + 289) = v46;
    GameRoutine_109d740(v4 + 240, v41, v85, 5u);
    result = (__int64)v87;
    if (v87 == v85) {
      v47 = 32;
    }
    else {
      if (v87 == nullptr) {
      LABEL_72:
        v3 = *(_QWORD**)(v5 + 16);
        goto LABEL_73;
      }
      v47 = 40;
    }
    result = (*(__int64 (**)(__int64))(*v87 + v47))((__int64)v87);
    goto LABEL_72;
  }
LABEL_73:
  v48 = v2[54];
  v49 = v3[54];
  if (v48 != 0 && v49 != 0) {
    v51 = *(_DWORD*)(v49 + 280) + 5;
    if (*(_DWORD*)(v48 + 280) != v51) {
      v52 = *(_QWORD*)(v48 + 8);
      nn_os_LockMutex(&GameData_2167560);
      Components_a878a0(v52, v48);
      Components_a87260(v52, v48, v51);
      *(_BYTE*)(v52 + 80) = 1;
      nn_os_UnlockMutex(&GameData_2167560);
      *(_DWORD*)(v48 + 280) = v51;
    }
    v53 = *(_BYTE*)(v49 + 289);
    v85[0] = GameData_200eb60;
    v85[1] = v49;
    v86 = v48;
    v87 = v85;
    *(_BYTE*)(v48 + 289) = v53;
    GameRoutine_109d740(v4 + 112, v48, v85, 5u);
    result = (__int64)v87;
    if (v87 == v85) {
      v54 = 32;
    }
    else {
      if (v87 == nullptr) {
      LABEL_84:
        v3 = *(_QWORD**)(v5 + 16);
        goto LABEL_85;
      }
      v54 = 40;
    }
    result = (*(__int64 (**)(__int64))(*v87 + v54))((__int64)v87);
    goto LABEL_84;
  }
LABEL_85:
  v55 = v2[55];
  if (v55 != 0) {
    v56 = v3[55];
    if (v56 != 0) {
      v57 = *(_DWORD*)(v56 + 280) + 5;
      if (*(_DWORD*)(v55 + 280) != v57) {
        v58 = *(_QWORD*)(v55 + 8);
        nn_os_LockMutex(&GameData_2167560);
        Components_a878a0(v58, v55);
        Components_a87260(v58, v55, v57);
        *(_BYTE*)(v58 + 80) = 1;
        nn_os_UnlockMutex(&GameData_2167560);
        *(_DWORD*)(v55 + 280) = v57;
      }
      v59 = *(_BYTE*)(v56 + 289);
      v85[0] = GameData_200eb60;
      v85[1] = v56;
      v86 = v55;
      v87 = v85;
      *(_BYTE*)(v55 + 289) = v59;
      GameRoutine_109d740(v4 + 144, v55, v85, 5u);
      result = (__int64)v87;
      if (v87 == v85) {
        v60 = 32;
      }
      else {
        if (v87 == nullptr) {
        LABEL_94:
          v3 = *(_QWORD**)(v5 + 16);
          goto LABEL_95;
        }
        v60 = 40;
      }
      result = (*(__int64 (**)(__int64))(*v87 + v60))((__int64)v87);
      goto LABEL_94;
    }
  }
LABEL_95:
  v61 = v2[59];
  if (v61 != 0) {
    v62 = v3[59];
    if (v62 != 0) {
      v63 = *(_DWORD*)(v62 + 280) + 5;
      if (*(_DWORD*)(v61 + 280) != v63) {
        v64 = *(_QWORD*)(v61 + 8);
        nn_os_LockMutex(&GameData_2167560);
        Components_a878a0(v64, v61);
        Components_a87260(v64, v61, v63);
        *(_BYTE*)(v64 + 80) = 1;
        nn_os_UnlockMutex(&GameData_2167560);
        *(_DWORD*)(v61 + 280) = v63;
      }
      v65 = *(_BYTE*)(v62 + 289);
      v85[0] = GameData_200eb60;
      v85[1] = v62;
      v86 = v61;
      v87 = v85;
      *(_BYTE*)(v61 + 289) = v65;
      GameRoutine_109d740(v4 + 272, v61, v85, 5u);
      result = (__int64)v87;
      if (v87 == v85) {
        v66 = 32;
      }
      else {
        if (v87 == nullptr) {
        LABEL_104:
          v3 = *(_QWORD**)(v5 + 16);
          goto LABEL_105;
        }
        v66 = 40;
      }
      result = (*(__int64 (**)(__int64))(*v87 + v66))((__int64)v87);
      goto LABEL_104;
    }
  }
LABEL_105:
  v67 = v2[60];
  if (v67 != 0) {
    v68 = v3[60];
    if (v68 != 0) {
      v69 = *(_DWORD*)(v68 + 280) + 5;
      if (*(_DWORD*)(v67 + 280) != v69) {
        v70 = *(_QWORD*)(v67 + 8);
        nn_os_LockMutex(&GameData_2167560);
        Components_a878a0(v70, v67);
        Components_a87260(v70, v67, v69);
        *(_BYTE*)(v70 + 80) = 1;
        nn_os_UnlockMutex(&GameData_2167560);
        *(_DWORD*)(v67 + 280) = v69;
      }
      v71 = *(_BYTE*)(v68 + 289);
      v85[0] = GameData_200eb60;
      v85[1] = v68;
      v86 = v67;
      v87 = v85;
      *(_BYTE*)(v67 + 289) = v71;
      GameRoutine_109d740(v4 + 304, v67, v85, 5u);
      result = (__int64)v87;
      if (v87 == v85) {
        v72 = 32;
      }
      else {
        if (v87 == nullptr) {
        LABEL_114:
          v3 = *(_QWORD**)(v5 + 16);
          goto LABEL_115;
        }
        v72 = 40;
      }
      result = (*(__int64 (**)(__int64))(*v87 + v72))((__int64)v87);
      goto LABEL_114;
    }
  }
LABEL_115:
  v73 = v2[61];
  if (v73 != 0) {
    v74 = v3[61];
    if (v74 != 0) {
      v75 = *(_DWORD*)(v74 + 280) + 5;
      if (*(_DWORD*)(v73 + 280) != v75) {
        v76 = *(_QWORD*)(v73 + 8);
        nn_os_LockMutex(&GameData_2167560);
        Components_a878a0(v76, v73);
        Components_a87260(v76, v73, v75);
        *(_BYTE*)(v76 + 80) = 1;
        nn_os_UnlockMutex(&GameData_2167560);
        *(_DWORD*)(v73 + 280) = v75;
      }
      v77 = *(_BYTE*)(v74 + 289);
      v85[0] = GameData_200eb60;
      v85[1] = v74;
      v86 = v73;
      v87 = v85;
      *(_BYTE*)(v73 + 289) = v77;
      GameRoutine_109d740(v4 + 336, v73, v85, 5u);
      result = (__int64)v87;
      if (v87 == v85) {
        v78 = 32;
      }
      else {
        if (v87 == nullptr) {
        LABEL_124:
          v3 = *(_QWORD**)(v5 + 16);
          goto LABEL_125;
        }
        v78 = 40;
      }
      result = (*(__int64 (**)(__int64))(*v87 + v78))((__int64)v87);
      goto LABEL_124;
    }
  }
LABEL_125:
  v79 = v2[62];
  if (v79 != 0) {
    v80 = v3[62];
    if (v80 != 0) {
      v81 = *(_DWORD*)(v80 + 280) + 5;
      if (*(_DWORD*)(v79 + 280) != v81) {
        v82 = *(_QWORD*)(v79 + 8);
        nn_os_LockMutex(&GameData_2167560);
        Components_a878a0(v82, v79);
        Components_a87260(v82, v79, v81);
        *(_BYTE*)(v82 + 80) = 1;
        nn_os_UnlockMutex(&GameData_2167560);
        *(_DWORD*)(v79 + 280) = v81;
      }
      v83 = *(_BYTE*)(v80 + 289);
      v85[0] = GameData_200eb60;
      v85[1] = v80;
      v86 = v79;
      v87 = v85;
      *(_BYTE*)(v79 + 289) = v83;
      GameRoutine_109d740(v4 + 368, v79, v85, 5u);
      result = (__int64)v87;
      if (v87 == v85) {
        v84 = 32;
      }
      else {
        if (v87 == nullptr) {
          return result;
        }
        v84 = 40;
      }
      return (*(__int64 (**)(__int64))(*v87 + v84))((__int64)v87);
    }
  }
  return result;
}

__int64 game_character_Illusion_Illusion_lambda0_Invoke_1104b20(__int64 result)
{
  __int64 v1;
  __int64 v2;
  atomic_uchar* v3;
  unsigned __int8 explicit;
  int* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 j;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  v1 = *(_QWORD*)(result + 8);
  if (v1 != 0) {
    v2 = *(_QWORD*)(result + 16);
    v3 = (atomic_uchar*)GameData_212df10;
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                    memory_order_acquire);
    v5 = GameData_212df08;
    if ((explicit & 1) == 0) {
      v22 = v1;
      v24 = v2;
      result = __cxa_guard_acquire(GameData_212df10);
      v1 = v22;
      v2 = v24;
      v3 = (atomic_uchar*)GameData_212df10;
      v5 = GameData_212df08;
      if ((_DWORD)result != 0) {
        *GameData_212df08 = wld_Crc32(0, "ModelModule", 11);
        result = __cxa_guard_release(GameData_212df10);
        v1 = v22;
        v2 = v24;
        v3 = (atomic_uchar*)GameData_212df10;
        v5 = GameData_212df08;
      }
    }
    v7 = *(_QWORD*)(v1 + 504);
    v6 = *(_QWORD*)(v1 + 512);
    v8 = v6;
    for (i = v6; i != v7; i -= 16) {
      v10 = *(_DWORD*)(i - 16);
      v8 -= 16;
      if (v10 == *v5) {
        if (v6 != v8) {
          v11 = *(_QWORD*)(v8 + 8);
          if (v11 != 0) {
            v12 = *(_QWORD*)(v11 + 24);
            if (v12 != 0 && v2 != 0) {
              v13 = *(_QWORD*)(*(_QWORD*)(v12 + 168) + 32LL);
              if ((atomic_load_explicit(v3, memory_order_acquire) & 1) == 0) {
                v23 = v13;
                v25 = v2;
                result = __cxa_guard_acquire(GameData_212df10);
                v5 = GameData_212df08;
                v13 = v23;
                v2 = v25;
                if ((_DWORD)result != 0) {
                  *GameData_212df08 = wld_Crc32(0, "ModelModule", 11);
                  result = __cxa_guard_release(GameData_212df10);
                  v5 = GameData_212df08;
                  v13 = v23;
                  v2 = v25;
                }
              }
              v14 = *v5;
              v16 = *(_QWORD*)(v2 + 504);
              v15 = *(_QWORD*)(v2 + 512);
              v17 = v15;
              for (j = v15; j != v16; j -= 16) {
                v19 = *(_DWORD*)(j - 16);
                v17 -= 16;
                if (v19 == v14) {
                  if (v15 != v17) {
                    v20 = *(_QWORD*)(v17 + 8);
                    if (v20 != 0) {
                      v21 = *(_QWORD*)(v20 + 24);
                      if (v21 != 0) {
                        return memcpy(
                            *(_QWORD*)(*(_QWORD*)(v21 + 168) + 32LL), v13,
                            (unsigned __int64)*(
                                unsigned __int16*)(*(_QWORD*)(v21 + 168) + 80LL)
                                << 6);
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
    }
  }
  return result;
}

void game_character_Illusion_Snapshot_lambda0_Invoke(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 i;
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4d48,
                            memory_order_acquire) &
       1) == 0) {
    v7 = a2;
    v6 = __cxa_guard_acquire(&GameData_21f4d48);
    a2 = v7;
    if (v6 != 0) {
      GameData_21f4d44 = wld_Crc32(0, "ModelModule", 11);
      __cxa_guard_release(&GameData_21f4d48);
      a2 = v7;
    }
  }
  v2 = *(_QWORD*)(a2 + 512);
  for (i = v2; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v4 = *(_DWORD*)(i - 16);
    v2 -= 16;
    if (v4 == GameData_21f4d44) {
      if (*(_QWORD*)(a2 + 512) != v2) {
        v5 = *(_QWORD*)(v2 + 8);
        if (v5 != 0) {
          *(_BYTE*)(*(_QWORD*)(v5 + 24) + 504LL) = 1;
        }
      }
      return;
    }
  }
}

#pragma GCC visibility pop
