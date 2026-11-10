#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_660f80(_QWORD);
__int64 GameRoutine_6e2a20(_QWORD);
__int64 GameRoutine_6e2b60(_QWORD);
__int64 GameRoutine_7fe910(_QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1f9d090[])();
extern __int64 GameData_21c99c0;
extern __int64 GameData_21d99a8;
extern __int64 GameData_21d99b0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c868;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
__int64 game_UnitMastery_GetMaxJobRank(__int64 a1, __int64 a2, __int64 a3);
__int64 UnitMastery_7fcee0(__int64 a1, __int64 a2);
__int64 UnitMastery_7fd6e0(__int64 a1, __int64 a2, int a3, __int64 a4,
                           __int64 a5, __int64 a6);
__int64 game_UnitMastery_GetMaxJobRank_lambda0_Invoke(__int64 result,
                                                      __int64 a2, _WORD* a3);
_QWORD* GameRoutine_7fe910_alt1(_QWORD* result, unsigned __int64, __int64,
                                __int64, __int64,
                                __int64) __asm__("GameRoutine_7fe910");
__int64 GameRoutine_2b0();
__int64 memset_alt1(_QWORD, _QWORD, _QWORD) __asm__("memset");
extern __int64 GameData_21da2ea;
extern __int64 GameData_21da2f2;
extern __int64 GameData_21da2fa;
extern __int64 GameData_21da302;
extern __int64 GameData_21da318;
extern __int64 GameData_21da320;
extern __int64 GameData_21da328;
__int64 UnitMastery_7febc0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6);

__int64 game_UnitMastery_GetMaxJobRank(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  _QWORD v15[4];
  _QWORD* v16;
  unsigned __int8 v17;
  __int64 v18;

  v17 = 0;
  if (a2 == 0) {
    return 0;
  }
  if (*(_QWORD*)(a2 + 408) == 0) {
    v4 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 400) + 24LL) + 1104LL);
    if (v4 != 0) {
      v17 = *(_BYTE*)(v4 + 49);
    }
  }
  v5 = v15;
  v15[0] = GameData_1f9d090;
  v15[1] = &v17;
  v16 = v15;
  v6 = GameData_21c99c0;
  v7 = *(_QWORD*)(GameData_21c99c0 + 64);
  v8 = (unsigned __int64)(*(_QWORD*)(GameData_21c99c0 + 72) - v7) >> 3;
  if ((__int64)(*(_QWORD*)(a1 + 56) - *(_QWORD*)(a1 + 48)) >> 1 == (int)v8 &&
      (int)v8 >= 1) {
    v10 = 0;
    v11 = 0;
    do {
      v12 = *(_QWORD*)(a1 + 48);
      if (*(_WORD*)(v12 + v10) != 0) {
        v18 = *(_QWORD*)(v7 + 8 * v11);
        if (v16 == nullptr) {
          GameRoutine_60a310(0, a2, a3);
        }
        (*(void (**)(_QWORD*, __int64*, __int64))(*v16 + 48LL))(v16, &v18,
                                                                v12 + v10);
        v6 = GameData_21c99c0;
      }
      v7 = *(_QWORD*)(v6 + 64);
      ++v11;
      v10 += 2;
    } while (v11 < (int)((unsigned __int64)(*(_QWORD*)(v6 + 72) - v7) >> 3));
    v5 = v16;
    if (v16 != v15) {
      if (v16 != nullptr) {
        v14 = 40;
      LABEL_19:
        (*(void (**)(_QWORD*, __int64))(*v5 + v14))(v5, a2);
      }
      return v17;
    }
  }
  v14 = 32;
  goto LABEL_19;
}

__int64 UnitMastery_7fcee0(__int64 a1, __int64 a2)
{
  void (**v2)(__int64, int*);
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  bool v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  int v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  int v69;
  __int64* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int16 v75;
  __int64 v76;
  unsigned int* v77;
  __int64 v78;
  unsigned int v79;
  __int64 v80;
  unsigned int v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  unsigned __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  int v96;
  __int64 v97;
  __int64 v98;
  int v100;

  v2 = *(void (***)(__int64, int*))a2;
  v100 = 0;
  (*v2)(a2, &v100);
  v5 = *(int*)(a2 + 20);
  v6 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *(_BYTE*)(v6 + v5) = 0;
  if (*(_WORD*)(a1 + 2) != 0) {
    v7 = *(int*)(a2 + 20);
    v8 = 1;
    *(_DWORD*)(a2 + 20) = v7 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7) = 0;
    v9 = *(int*)(a2 + 20);
    LOWORD(v7) = *(_WORD*)(a1 + 2);
    *(_DWORD*)(a2 + 20) = v9 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = v7;
    v10 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v10 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) = BYTE1(v7);
    if (*(_WORD*)(a1 + 4) == 0) {
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  v8 = 0;
  if (*(_WORD*)(a1 + 4) != 0) {
  LABEL_3:
    v11 = *(int*)(a2 + 20);
    ++v8;
    *(_DWORD*)(a2 + 20) = v11 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = 1;
    v12 = *(int*)(a2 + 20);
    LOWORD(v11) = *(_WORD*)(a1 + 4);
    *(_DWORD*)(a2 + 20) = v12 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = v11;
    v13 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v13 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13) = BYTE1(v11);
  }
LABEL_4:
  if (*(_WORD*)(a1 + 6) != 0) {
    v14 = *(int*)(a2 + 20);
    ++v8;
    *(_DWORD*)(a2 + 20) = v14 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = 2;
    v15 = *(int*)(a2 + 20);
    LOWORD(v14) = *(_WORD*)(a1 + 6);
    *(_DWORD*)(a2 + 20) = v15 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = v14;
    v16 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v16 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = BYTE1(v14);
  }
  if (*(_WORD*)(a1 + 8) != 0) {
    v17 = *(int*)(a2 + 20);
    ++v8;
    *(_DWORD*)(a2 + 20) = v17 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = 3;
    v18 = *(int*)(a2 + 20);
    LOWORD(v17) = *(_WORD*)(a1 + 8);
    *(_DWORD*)(a2 + 20) = v18 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = v17;
    v19 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v19 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v19) = BYTE1(v17);
  }
  if (*(_WORD*)(a1 + 10) != 0) {
    v20 = *(int*)(a2 + 20);
    ++v8;
    *(_DWORD*)(a2 + 20) = v20 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v20) = 4;
    v21 = *(int*)(a2 + 20);
    LOWORD(v20) = *(_WORD*)(a1 + 10);
    *(_DWORD*)(a2 + 20) = v21 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = v20;
    v22 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v22 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v22) = BYTE1(v20);
  }
  if (*(_WORD*)(a1 + 12) != 0) {
    v23 = *(int*)(a2 + 20);
    ++v8;
    *(_DWORD*)(a2 + 20) = v23 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v23) = 5;
    v24 = *(int*)(a2 + 20);
    LOWORD(v23) = *(_WORD*)(a1 + 12);
    *(_DWORD*)(a2 + 20) = v24 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v24) = v23;
    v25 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v25 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v25) = BYTE1(v23);
  }
  if (*(_WORD*)(a1 + 14) != 0) {
    v26 = *(int*)(a2 + 20);
    ++v8;
    *(_DWORD*)(a2 + 20) = v26 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v26) = 6;
    v27 = *(int*)(a2 + 20);
    LOWORD(v26) = *(_WORD*)(a1 + 14);
    *(_DWORD*)(a2 + 20) = v27 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v27) = v26;
    v28 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v28 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v28) = BYTE1(v26);
  }
  if (*(_WORD*)(a1 + 16) != 0) {
    v29 = *(int*)(a2 + 20);
    ++v8;
    *(_DWORD*)(a2 + 20) = v29 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v29) = 7;
    v30 = *(int*)(a2 + 20);
    LOWORD(v29) = *(_WORD*)(a1 + 16);
    *(_DWORD*)(a2 + 20) = v30 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v30) = v29;
    v31 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v31 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v31) = BYTE1(v29);
  }
  if (*(_WORD*)(a1 + 18) != 0) {
    v32 = *(int*)(a2 + 20);
    ++v8;
    *(_DWORD*)(a2 + 20) = v32 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v32) = 8;
    v33 = *(int*)(a2 + 20);
    LOWORD(v32) = *(_WORD*)(a1 + 18);
    *(_DWORD*)(a2 + 20) = v33 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v33) = v32;
    v34 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v34 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v34) = BYTE1(v32);
  }
  if (*(_WORD*)(a1 + 20) != 0) {
    v35 = *(int*)(a2 + 20);
    ++v8;
    *(_DWORD*)(a2 + 20) = v35 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v35) = 9;
    v36 = *(int*)(a2 + 20);
    LOWORD(v35) = *(_WORD*)(a1 + 20);
    *(_DWORD*)(a2 + 20) = v36 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v36) = v35;
    v37 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v37 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v37) = BYTE1(v35);
  }
  if (*(_WORD*)(a1 + 22) != 0) {
    v38 = *(int*)(a2 + 20);
    ++v8;
    *(_DWORD*)(a2 + 20) = v38 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v38) = 10;
    v39 = *(int*)(a2 + 20);
    LOWORD(v38) = *(_WORD*)(a1 + 22);
    *(_DWORD*)(a2 + 20) = v39 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v39) = v38;
    v40 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v40 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v40) = BYTE1(v38);
  }
  if (*(_WORD*)(a1 + 24) != 0) {
    v41 = *(int*)(a2 + 20);
    ++v8;
    *(_DWORD*)(a2 + 20) = v41 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v41) = 11;
    v42 = *(int*)(a2 + 20);
    LOWORD(v41) = *(_WORD*)(a1 + 24);
    *(_DWORD*)(a2 + 20) = v42 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v42) = v41;
    v43 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v43 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v43) = BYTE1(v41);
  }
  if (*(_WORD*)(a1 + 26) != 0) {
    v44 = *(int*)(a2 + 20);
    LOBYTE(v8) = v8 + 1;
    *(_DWORD*)(a2 + 20) = v44 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v44) = 12;
    v45 = *(int*)(a2 + 20);
    LOWORD(v44) = *(_WORD*)(a1 + 26);
    *(_DWORD*)(a2 + 20) = v45 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v45) = v44;
    v46 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v46 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v46) = BYTE1(v44);
  }
  else if (v8 == 0) {
    goto LABEL_41;
  }
  v47 = *(_QWORD*)(a2 + 32);
  v48 = *(_QWORD*)(a2 + 40);
  v49 = ((v48 - v47) << 7) - 1;
  if (v48 == v47) {
    v49 = 0;
  }
  v50 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
  if (v49 == v50) {
    GameRoutine_660f80(a2 + 24);
    v47 = *(_QWORD*)(a2 + 32);
    v50 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
  }
  *(_DWORD*)(*(_QWORD*)(v47 + 8 * (v50 >> 10)) + 4 * (v50 & 0x3FF)) =
      *(_DWORD*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  ++*(_QWORD*)(a2 + 64);
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = v8;
  v52 = *(_QWORD*)(a2 + 56);
  v51 = *(_QWORD*)(a2 + 64);
  v54 = *(_QWORD*)(a2 + 32);
  v53 = *(_QWORD*)(a2 + 40);
  v55 = v53 == v54;
  v56 = v51 - 1 + v52;
  v57 = v56 >> 10;
  v58 = v56 & 0x3FF;
  v59 = ((v53 - v54) << 7) - 1;
  v60 = *(_QWORD*)(v54 + 8 * v57);
  if (v55) {
    v59 = 0;
  }
  v61 = *(_DWORD*)(v60 + 4 * v58);
  *(_QWORD*)(a2 + 64) = v51 - 1;
  *(_DWORD*)(a2 + 20) = v61;
  if ((unsigned __int64)(v59 - (v51 + v52) + 1) >= 0x800) {
    v62 = *(_QWORD*)(v53 - 8);
    if (v62 != 0) {
      v63 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v63 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v63, v62);
      v53 = *(_QWORD*)(a2 + 40);
    }
    *(_QWORD*)(a2 + 40) = v53 - 8;
  }
LABEL_41:
  v64 = *(int*)(a2 + 20);
  v65 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v64 + 1;
  *(_BYTE*)(v65 + v64) = 0;
  v67 = *(_QWORD*)(a1 + 48);
  v66 = *(_QWORD*)(a1 + 56);
  if (v66 != v67) {
    v68 = 0;
    v69 = 0;
    v70 = GameData_212c868;
    do {
      if (*(_WORD*)(v67 + 2 * v68) != 0) {
        v77 = *(unsigned int**)(*(_QWORD*)(*v70 + 64) + 8 * v68);
        v78 = *(int*)(a2 + 20);
        if (v77 != nullptr) {
          v79 = *v77;
          *(_DWORD*)(a2 + 20) = v78 + 1;
          *(_BYTE*)(*(_QWORD*)(a2 + 8) + v78) = v79;
          v80 = *(int*)(a2 + 20);
          *(_DWORD*)(a2 + 20) = v80 + 1;
          *(_BYTE*)(*(_QWORD*)(a2 + 8) + v80) = BYTE1(v79);
          v81 = HIWORD(v79);
          LODWORD(v77) = HIBYTE(v79);
          v82 = *(int*)(a2 + 20);
          *(_DWORD*)(a2 + 20) = v82 + 1;
          *(_BYTE*)(*(_QWORD*)(a2 + 8) + v82) = v81;
        }
        else {
          *(_DWORD*)(a2 + 20) = v78 + 1;
          *(_BYTE*)(*(_QWORD*)(a2 + 8) + v78) = 0;
          v71 = *(int*)(a2 + 20);
          *(_DWORD*)(a2 + 20) = v71 + 1;
          *(_BYTE*)(*(_QWORD*)(a2 + 8) + v71) = 0;
          v72 = *(int*)(a2 + 20);
          *(_DWORD*)(a2 + 20) = v72 + 1;
          *(_BYTE*)(*(_QWORD*)(a2 + 8) + v72) = 0;
        }
        v73 = *(int*)(a2 + 20);
        ++v69;
        *(_DWORD*)(a2 + 20) = v73 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v73) = (_BYTE)v77;
        v74 = *(int*)(a2 + 20);
        v75 = *(_WORD*)(*(_QWORD*)(a1 + 48) + 2 * v68);
        *(_DWORD*)(a2 + 20) = v74 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v74) = v75;
        v76 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v76 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v76) = HIBYTE(v75);
        v67 = *(_QWORD*)(a1 + 48);
        v66 = *(_QWORD*)(a1 + 56);
      }
      ++v68;
    } while (v68 < (v66 - v67) >> 1);
    if (v69 > 0) {
      v83 = *(_QWORD*)(a2 + 32);
      v84 = *(_QWORD*)(a2 + 40);
      v85 = ((v84 - v83) << 7) - 1;
      if (v84 == v83) {
        v85 = 0;
      }
      v86 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
      if (v85 == v86) {
        GameRoutine_660f80(a2 + 24);
        v83 = *(_QWORD*)(a2 + 32);
        v86 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
      }
      *(_DWORD*)(*(_QWORD*)(v83 + 8 * (v86 >> 10)) + 4 * (v86 & 0x3FF)) =
          *(_DWORD*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v64 + 1;
      ++*(_QWORD*)(a2 + 64);
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v64) = v69;
      v88 = *(_QWORD*)(a2 + 56);
      v87 = *(_QWORD*)(a2 + 64);
      v90 = *(_QWORD*)(a2 + 32);
      v89 = *(_QWORD*)(a2 + 40);
      v55 = v89 == v90;
      v91 = v87 - 1 + v88;
      v92 = v91 >> 10;
      v93 = v91 & 0x3FF;
      v94 = ((v89 - v90) << 7) - 1;
      v95 = *(_QWORD*)(v90 + 8 * v92);
      if (v55) {
        v94 = 0;
      }
      v96 = *(_DWORD*)(v95 + 4 * v93);
      *(_QWORD*)(a2 + 64) = v87 - 1;
      *(_DWORD*)(a2 + 20) = v96;
      if ((unsigned __int64)(v94 - (v87 + v88) + 1) >= 0x800) {
        v97 = *(_QWORD*)(v89 - 8);
        if (v97 != 0) {
          v98 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v98 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v98, v97);
          v89 = *(_QWORD*)(a2 + 40);
        }
        *(_QWORD*)(a2 + 40) = v89 - 8;
      }
    }
  }
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
}

__int64 UnitMastery_7fd6e0(__int64 a1, __int64 a2, int a3, __int64 a4,
                           __int64 a5, __int64 a6)
{
  _WORD* v6;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  int* v16;
  unsigned __int64 v17;
  int v18;
  __int64 v19;
  int v20;
  int v21;
  int v22;
  signed int v23;
  int v24;
  int v25;
  signed int v26;
  unsigned int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  signed int v41;
  int v42;
  int v43;
  int v44;
  signed int v45;
  unsigned int v46;
  int v47;
  signed int v48;
  int v49;
  int v50;
  int v51;
  signed int v52;
  unsigned int v53;
  int v54;
  signed int v55;
  int v56;
  int v57;
  int v58;
  signed int v59;
  unsigned int v60;
  int v61;
  signed int v62;
  int v63;
  int v64;
  int v65;
  signed int v66;
  unsigned int v67;
  int v68;
  signed int v69;
  int v70;
  int v71;
  int v72;
  signed int v73;
  unsigned int v74;
  int v75;
  signed int v76;
  int v77;
  int v78;
  int v79;
  signed int v80;
  unsigned int v81;
  int v82;
  signed int v83;
  int v84;
  int v85;
  int v86;
  signed int v87;
  unsigned int v88;
  int v89;
  signed int v90;
  int v91;
  int v92;
  int v93;
  signed int v94;
  unsigned int v95;
  int v96;
  signed int v97;
  int v98;
  int v99;
  int v100;
  signed int v101;
  unsigned int v102;
  int v103;
  signed int v104;
  int v105;
  int v106;
  int v107;
  signed int v108;
  unsigned int v109;
  int v110;
  signed int v111;
  int v112;
  int v113;
  int v114;
  signed int v115;
  unsigned int v116;
  int v117;
  int v118;
  int v119;
  int v120;
  unsigned int v121;
  int v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  int v126;
  int v127;
  int* v128;
  int v129;
  unsigned __int64 v130;
  int v131;
  __int64 v132;
  signed int v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  int v137;
  int v138;
  int v139;
  int v140;
  int v141;
  signed int v142;
  unsigned int v143;
  int v144;
  __int64 v145;
  __int64 v146;
  int v147;
  int* v148;
  int v149;
  unsigned __int64 v150;
  int v151;
  __int64 v152;
  signed int v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  int v157;
  int v158;
  int v159;
  int v160;
  int v161;
  signed int v162;
  unsigned int v163;
  int v164;
  int v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int16 v170;
  __int64 v171;
  int v172;
  int* v173;
  unsigned __int64 v174;
  int v175;
  __int64 v176;
  int v177;
  signed int v178;
  int v179;
  int v180;
  signed int v181;
  unsigned int v182;
  int v183;
  __int64 v184;
  __int64 v185;
  int v186;
  int v187;
  int v188;
  signed int v189;
  int v190;
  int v191;
  signed int v192;
  unsigned int v193;
  int v194;
  __int64 v195;
  __int64 v196;
  int v197;
  int v198;
  int v199;
  signed int v200;
  int v201;
  int v202;
  signed int v203;
  unsigned int v204;
  int v205;
  __int64 v206;
  __int64 v207;
  int v208;
  int v209;
  int v210;
  signed int v211;
  int v212;
  int v213;
  signed int v214;
  unsigned int v215;
  int v216;
  __int64 v217;
  __int64 v218;
  int v219;
  int v220;
  int v221;
  signed int v222;
  int v223;
  int v224;
  signed int v225;
  unsigned int v226;
  int v227;
  __int64 v228;
  __int64 v229;
  int v230;
  int v231;
  int v232;
  signed int v233;
  int v234;
  int v235;
  signed int v236;
  unsigned int v237;
  int v238;
  __int64 v239;
  __int64 v240;
  int v241;
  int v242;
  int v243;
  signed int v244;
  int v245;
  int v246;
  signed int v247;
  unsigned int v248;
  int v249;
  __int64 v250;
  __int64 v251;
  int v252;
  int v253;
  int v254;
  signed int v255;
  int v256;
  int v257;
  signed int v258;
  unsigned int v259;
  int v260;
  __int64 v261;
  __int64 v262;
  int v263;
  int v264;
  int v265;
  signed int v266;
  int v267;
  int v268;
  signed int v269;
  unsigned int v270;
  int v271;
  __int64 v272;
  __int64 v273;
  int v274;
  int v275;
  int v276;
  signed int v277;
  int v278;
  int v279;
  signed int v280;
  unsigned int v281;
  int v282;
  __int64 v283;
  __int64 v284;
  int v285;
  int v286;
  int v287;
  signed int v288;
  int v289;
  int v290;
  signed int v291;
  unsigned int v292;
  int v293;
  __int64 v294;
  __int64 v295;
  int v296;
  int v297;
  int v298;
  signed int v299;
  int v300;
  int v301;
  signed int v302;
  unsigned int v303;
  int v304;
  __int64 v305;
  __int64 v306;
  int v307;
  int v308;
  int v309;
  int v310;
  int v311;
  int v312;
  unsigned int v313;
  int v314;
  __int64 v315;
  __int64 v316;
  int v317;
  __int64 v318;
  __int64 v319;
  __int64 v320;
  __int64 v321;
  __int64 v322;
  __int16 v323;
  int v325;

  *(_QWORD*)(a1 + 2) = 0;
  v6 = (_WORD*)(a1 + 2);
  *(_QWORD*)(a1 + 33) = 0;
  *(_QWORD*)(a1 + 18) = 0;
  *(_QWORD*)(a1 + 26) = 0;
  *(_QWORD*)(a1 + 10) = 0;
  if (*GameData_212c868 != 0) {
    v11 = *(_QWORD*)(a1 + 48);
    v10 = a1 + 48;
    v12 = (*(_QWORD*)(a1 + 56) - v11) >> 1;
    v13 = (int)((__int64)(*(_QWORD*)(*GameData_212c868 + 72) -
                          *(_QWORD*)(*GameData_212c868 + 64)) >>
                3);
    if (v13 != v12) {
      if (v13 <= v12) {
        if (v13 < v12) {
          *(_QWORD*)(a1 + 56) = v11 + 2 * v13;
        }
      }
      else {
        GameRoutine_7fe910(v10, v13 - v12);
      }
    }
  }
  v14 = *(_QWORD*)(a1 + 48);
  v15 = *(_QWORD*)(a1 + 56);
  if (v14 != v15) {
    memset(v14, 0, v15 - v14, a4, a5, a6);
  }
  v16 = (int*)GameData_21d99a8;
  v17 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
  if ((int)v17 >= 12) {
    v18 = 12;
  }
  else {
    v18 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
  }
  v19 = GameData_21d99a8 + 4LL * v18;
  v20 = *(_DWORD*)(v19 - 4);
  v21 = v20 & (v20 >> 31);
  *(_WORD*)(a1 + 2) = v20 & (v20 >> 31);
  if ((int)v17 <= 0) {
    *(_BYTE*)(a1 + 28) = 0;
    LOBYTE(v29) = 0;
    v30 = *(_DWORD*)(v19 - 4);
    *(_BYTE*)(a1 + 29) = 0;
    *(_WORD*)(a1 + 4) = v30 & (v30 >> 31);
    v31 = *(_DWORD*)(v19 - 4);
    *(_BYTE*)(a1 + 30) = 0;
    *(_WORD*)(a1 + 6) = v31 & (v31 >> 31);
    v32 = *(_DWORD*)(v19 - 4);
    *(_BYTE*)(a1 + 31) = 0;
    *(_WORD*)(a1 + 8) = v32 & (v32 >> 31);
    v33 = *(_DWORD*)(v19 - 4);
    *(_BYTE*)(a1 + 32) = 0;
    *(_WORD*)(a1 + 10) = v33 & (v33 >> 31);
    v34 = *(_DWORD*)(v19 - 4);
    *(_BYTE*)(a1 + 33) = 0;
    *(_WORD*)(a1 + 12) = v34 & (v34 >> 31);
    v35 = *(_DWORD*)(v19 - 4);
    *(_BYTE*)(a1 + 34) = 0;
    *(_WORD*)(a1 + 14) = v35 & (v35 >> 31);
    v36 = *(_DWORD*)(v19 - 4);
    *(_BYTE*)(a1 + 35) = 0;
    *(_WORD*)(a1 + 16) = v36 & (v36 >> 31);
    v37 = *(_DWORD*)(v19 - 4);
    *(_BYTE*)(a1 + 36) = 0;
    *(_WORD*)(a1 + 18) = v37 & (v37 >> 31);
    v38 = *(_DWORD*)(v19 - 4);
    *(_BYTE*)(a1 + 37) = 0;
    *(_WORD*)(a1 + 20) = v38 & (v38 >> 31);
    v39 = *(_DWORD*)(v19 - 4);
    *(_BYTE*)(a1 + 38) = 0;
    *(_WORD*)(a1 + 22) = v39 & (v39 >> 31);
    v40 = *(_DWORD*)(v19 - 4);
    *(_BYTE*)(a1 + 39) = 0;
    *(_WORD*)(a1 + 24) = v40 & (v40 >> 31);
    *(_WORD*)(a1 + 26) = *(_WORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
  }
  else {
    v22 = v17 - 1;
    v23 = 0;
    v24 = v16[(unsigned int)(v17 - 1)];
    if (v24 >= v21) {
      v24 = v21;
    }
    if (v21 >= *v16) {
      v25 = v24;
    }
    else {
      v25 = *v16;
    }
    v26 = v17;
    while (1) {
      v27 = (unsigned int)(v23 + v26) >> 1;
      v28 = v16[v27];
      if (v25 == v28) {
        break;
      }
      if (v25 < v28) {
        v26 = (unsigned int)(v23 + v26) >> 1;
      }
      else {
        v23 = v27 + 1;
      }
      if (v23 >= v26) {
        goto LABEL_27;
      }
    }
    LOBYTE(v23) = v27 + 1;
  LABEL_27:
    *(_BYTE*)(a1 + 28) = v23;
    v41 = 0;
    v42 = *(_DWORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    *(_WORD*)(a1 + 4) = *(_WORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    v43 = v16[v22];
    if (v43 >= v42) {
      v43 = v42;
    }
    if (v42 >= *v16) {
      v44 = v43;
    }
    else {
      v44 = *v16;
    }
    v45 = v17;
    while (1) {
      v46 = (unsigned int)(v41 + v45) >> 1;
      v47 = v16[v46];
      if (v44 == v47) {
        break;
      }
      if (v44 < v47) {
        v45 = (unsigned int)(v41 + v45) >> 1;
      }
      else {
        v41 = v46 + 1;
      }
      if (v41 >= v45) {
        goto LABEL_40;
      }
    }
    LOBYTE(v41) = v46 + 1;
  LABEL_40:
    *(_BYTE*)(a1 + 29) = v41;
    v48 = 0;
    v49 = *(_DWORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    *(_WORD*)(a1 + 6) = *(_WORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    v50 = v16[v22];
    if (v50 >= v49) {
      v50 = v49;
    }
    if (v49 >= *v16) {
      v51 = v50;
    }
    else {
      v51 = *v16;
    }
    v52 = v17;
    while (1) {
      v53 = (unsigned int)(v48 + v52) >> 1;
      v54 = v16[v53];
      if (v51 == v54) {
        break;
      }
      if (v51 < v54) {
        v52 = (unsigned int)(v48 + v52) >> 1;
      }
      else {
        v48 = v53 + 1;
      }
      if (v48 >= v52) {
        goto LABEL_53;
      }
    }
    LOBYTE(v48) = v53 + 1;
  LABEL_53:
    *(_BYTE*)(a1 + 30) = v48;
    v55 = 0;
    v56 = *(_DWORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    *(_WORD*)(a1 + 8) = *(_WORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    v57 = v16[v22];
    if (v57 >= v56) {
      v57 = v56;
    }
    if (v56 >= *v16) {
      v58 = v57;
    }
    else {
      v58 = *v16;
    }
    v59 = v17;
    while (1) {
      v60 = (unsigned int)(v55 + v59) >> 1;
      v61 = v16[v60];
      if (v58 == v61) {
        break;
      }
      if (v58 < v61) {
        v59 = (unsigned int)(v55 + v59) >> 1;
      }
      else {
        v55 = v60 + 1;
      }
      if (v55 >= v59) {
        goto LABEL_66;
      }
    }
    LOBYTE(v55) = v60 + 1;
  LABEL_66:
    *(_BYTE*)(a1 + 31) = v55;
    v62 = 0;
    v63 = *(_DWORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    *(_WORD*)(a1 + 10) = *(_WORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    v64 = v16[v22];
    if (v64 >= v63) {
      v64 = v63;
    }
    if (v63 >= *v16) {
      v65 = v64;
    }
    else {
      v65 = *v16;
    }
    v66 = v17;
    while (1) {
      v67 = (unsigned int)(v62 + v66) >> 1;
      v68 = v16[v67];
      if (v65 == v68) {
        break;
      }
      if (v65 < v68) {
        v66 = (unsigned int)(v62 + v66) >> 1;
      }
      else {
        v62 = v67 + 1;
      }
      if (v62 >= v66) {
        goto LABEL_79;
      }
    }
    LOBYTE(v62) = v67 + 1;
  LABEL_79:
    *(_BYTE*)(a1 + 32) = v62;
    v69 = 0;
    v70 = *(_DWORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    *(_WORD*)(a1 + 12) = *(_WORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    v71 = v16[v22];
    if (v71 >= v70) {
      v71 = v70;
    }
    if (v70 >= *v16) {
      v72 = v71;
    }
    else {
      v72 = *v16;
    }
    v73 = v17;
    while (1) {
      v74 = (unsigned int)(v69 + v73) >> 1;
      v75 = v16[v74];
      if (v72 == v75) {
        break;
      }
      if (v72 < v75) {
        v73 = (unsigned int)(v69 + v73) >> 1;
      }
      else {
        v69 = v74 + 1;
      }
      if (v69 >= v73) {
        goto LABEL_92;
      }
    }
    LOBYTE(v69) = v74 + 1;
  LABEL_92:
    *(_BYTE*)(a1 + 33) = v69;
    v76 = 0;
    v77 = *(_DWORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    *(_WORD*)(a1 + 14) = *(_WORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    v78 = v16[v22];
    if (v78 >= v77) {
      v78 = v77;
    }
    if (v77 >= *v16) {
      v79 = v78;
    }
    else {
      v79 = *v16;
    }
    v80 = v17;
    while (1) {
      v81 = (unsigned int)(v76 + v80) >> 1;
      v82 = v16[v81];
      if (v79 == v82) {
        break;
      }
      if (v79 < v82) {
        v80 = (unsigned int)(v76 + v80) >> 1;
      }
      else {
        v76 = v81 + 1;
      }
      if (v76 >= v80) {
        goto LABEL_105;
      }
    }
    LOBYTE(v76) = v81 + 1;
  LABEL_105:
    *(_BYTE*)(a1 + 34) = v76;
    v83 = 0;
    v84 = *(_DWORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    *(_WORD*)(a1 + 16) = *(_WORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    v85 = v16[v22];
    if (v85 >= v84) {
      v85 = v84;
    }
    if (v84 >= *v16) {
      v86 = v85;
    }
    else {
      v86 = *v16;
    }
    v87 = v17;
    while (1) {
      v88 = (unsigned int)(v83 + v87) >> 1;
      v89 = v16[v88];
      if (v86 == v89) {
        break;
      }
      if (v86 < v89) {
        v87 = (unsigned int)(v83 + v87) >> 1;
      }
      else {
        v83 = v88 + 1;
      }
      if (v83 >= v87) {
        goto LABEL_118;
      }
    }
    LOBYTE(v83) = v88 + 1;
  LABEL_118:
    *(_BYTE*)(a1 + 35) = v83;
    v90 = 0;
    v91 = *(_DWORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    *(_WORD*)(a1 + 18) = *(_WORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    v92 = v16[v22];
    if (v92 >= v91) {
      v92 = v91;
    }
    if (v91 >= *v16) {
      v93 = v92;
    }
    else {
      v93 = *v16;
    }
    v94 = v17;
    while (1) {
      v95 = (unsigned int)(v90 + v94) >> 1;
      v96 = v16[v95];
      if (v93 == v96) {
        break;
      }
      if (v93 < v96) {
        v94 = (unsigned int)(v90 + v94) >> 1;
      }
      else {
        v90 = v95 + 1;
      }
      if (v90 >= v94) {
        goto LABEL_131;
      }
    }
    LOBYTE(v90) = v95 + 1;
  LABEL_131:
    *(_BYTE*)(a1 + 36) = v90;
    v97 = 0;
    v98 = *(_DWORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    *(_WORD*)(a1 + 20) = *(_WORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    v99 = v16[v22];
    if (v99 >= v98) {
      v99 = v98;
    }
    if (v98 >= *v16) {
      v100 = v99;
    }
    else {
      v100 = *v16;
    }
    v101 = v17;
    while (1) {
      v102 = (unsigned int)(v97 + v101) >> 1;
      v103 = v16[v102];
      if (v100 == v103) {
        break;
      }
      if (v100 < v103) {
        v101 = (unsigned int)(v97 + v101) >> 1;
      }
      else {
        v97 = v102 + 1;
      }
      if (v97 >= v101) {
        goto LABEL_144;
      }
    }
    LOBYTE(v97) = v102 + 1;
  LABEL_144:
    *(_BYTE*)(a1 + 37) = v97;
    v104 = 0;
    v105 = *(_DWORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    *(_WORD*)(a1 + 22) = *(_WORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    v106 = v16[v22];
    if (v106 >= v105) {
      v106 = v105;
    }
    if (v105 >= *v16) {
      v107 = v106;
    }
    else {
      v107 = *v16;
    }
    v108 = v17;
    while (1) {
      v109 = (unsigned int)(v104 + v108) >> 1;
      v110 = v16[v109];
      if (v107 == v110) {
        break;
      }
      if (v107 < v110) {
        v108 = (unsigned int)(v104 + v108) >> 1;
      }
      else {
        v104 = v109 + 1;
      }
      if (v104 >= v108) {
        goto LABEL_157;
      }
    }
    LOBYTE(v104) = v109 + 1;
  LABEL_157:
    *(_BYTE*)(a1 + 38) = v104;
    v111 = 0;
    v112 = *(_DWORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    *(_WORD*)(a1 + 24) = *(_WORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    v113 = v16[v22];
    if (v113 >= v112) {
      v113 = v112;
    }
    if (v112 >= *v16) {
      v114 = v113;
    }
    else {
      v114 = *v16;
    }
    v115 = v17;
    while (1) {
      v116 = (unsigned int)(v111 + v115) >> 1;
      v117 = v16[v116];
      if (v114 == v117) {
        break;
      }
      if (v114 < v117) {
        v115 = (unsigned int)(v111 + v115) >> 1;
      }
      else {
        v111 = v116 + 1;
      }
      if (v111 >= v115) {
        goto LABEL_170;
      }
    }
    LOBYTE(v111) = v116 + 1;
  LABEL_170:
    *(_BYTE*)(a1 + 39) = v111;
    v29 = 0;
    v118 = *(_DWORD*)(v19 - 4) & (*(int*)(v19 - 4) >> 31);
    *(_WORD*)(a1 + 26) = v118;
    v119 = v16[v22];
    if (v119 >= v118) {
      v119 = v118;
    }
    if (v118 >= *v16) {
      v120 = v119;
    }
    else {
      v120 = *v16;
    }
    while (1) {
      v121 = (unsigned int)(v29 + v17) >> 1;
      v122 = v16[v121];
      if (v120 == v122) {
        break;
      }
      if (v120 < v122) {
        LODWORD(v17) = (unsigned int)(v29 + v17) >> 1;
      }
      else {
        v29 = v121 + 1;
      }
      if (v29 >= (int)v17) {
        goto LABEL_182;
      }
    }
    LOBYTE(v29) = v121 + 1;
  }
LABEL_182:
  *(_BYTE*)(a1 + 40) = v29;
  v123 = a1 + 28;
  v325 = 0;
  (*(void (**)(__int64, int*))(*(_QWORD*)a2 + 16LL))(a2, &v325);
  if (a3 < 34) {
    v145 = *(int*)(a2 + 20);
    v146 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v145 + 1;
    v147 = *(unsigned __int8*)(v146 + v145);
    if (a3 <= 25) {
      *(_DWORD*)(a2 + 20) = v145 + 2;
      v172 = v147 | (*(unsigned __int8*)(v146 + v145 + 1) << 8);
      v173 = (int*)GameData_21d99a8;
      v174 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
      if ((int)v174 >= 12) {
        v175 = 12;
      }
      else {
        v175 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
      }
      v176 = GameData_21d99a8 + 4LL * v175;
      v177 = *(_DWORD*)(v176 - 4);
      if (v177 >= v172) {
        v177 = v172;
      }
      *v6 = v177;
      if ((int)v174 < 1) {
        LOBYTE(v178) = 0;
      }
      else {
        v178 = 0;
        v179 = v173[(unsigned int)(v174 - 1)];
        if (v179 >= v177) {
          v179 = v177;
        }
        if (v177 >= *v173) {
          v180 = v179;
        }
        else {
          v180 = *v173;
        }
        v181 = v174;
        while (1) {
          v182 = (unsigned int)(v178 + v181) >> 1;
          v183 = v173[v182];
          if (v180 == v183) {
            break;
          }
          if (v180 < v183) {
            v181 = (unsigned int)(v178 + v181) >> 1;
          }
          else {
            v178 = v182 + 1;
          }
          if (v178 >= v181) {
            goto LABEL_257;
          }
        }
        LOBYTE(v178) = v182 + 1;
      }
    LABEL_257:
      *(_BYTE*)(a1 + 28) = v178;
      v184 = *(int*)(a2 + 20);
      v185 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v184 + 1;
      v186 = *(unsigned __int8*)(v185 + v184);
      *(_DWORD*)(a2 + 20) = v184 + 2;
      v187 = *(_DWORD*)(v176 - 4);
      v188 = v186 | (*(unsigned __int8*)(v185 + v184 + 1) << 8);
      if (v187 >= v188) {
        v187 = v188;
      }
      *(_WORD*)(a1 + 4) = v187;
      if ((int)v174 < 1) {
        LOBYTE(v189) = 0;
      }
      else {
        v189 = 0;
        v190 = v173[(unsigned int)(v174 - 1)];
        if (v190 >= v187) {
          v190 = v187;
        }
        if (v187 >= *v173) {
          v191 = v190;
        }
        else {
          v191 = *v173;
        }
        v192 = v174;
        while (1) {
          v193 = (unsigned int)(v189 + v192) >> 1;
          v194 = v173[v193];
          if (v191 == v194) {
            break;
          }
          if (v191 < v194) {
            v192 = (unsigned int)(v189 + v192) >> 1;
          }
          else {
            v189 = v193 + 1;
          }
          if (v189 >= v192) {
            goto LABEL_274;
          }
        }
        LOBYTE(v189) = v193 + 1;
      }
    LABEL_274:
      *(_BYTE*)(a1 + 29) = v189;
      v195 = *(int*)(a2 + 20);
      v196 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v195 + 1;
      v197 = *(unsigned __int8*)(v196 + v195);
      *(_DWORD*)(a2 + 20) = v195 + 2;
      v198 = *(_DWORD*)(v176 - 4);
      v199 = v197 | (*(unsigned __int8*)(v196 + v195 + 1) << 8);
      if (v198 >= v199) {
        v198 = v199;
      }
      *(_WORD*)(a1 + 6) = v198;
      if ((int)v174 < 1) {
        LOBYTE(v200) = 0;
      }
      else {
        v200 = 0;
        v201 = v173[(unsigned int)(v174 - 1)];
        if (v201 >= v198) {
          v201 = v198;
        }
        if (v198 >= *v173) {
          v202 = v201;
        }
        else {
          v202 = *v173;
        }
        v203 = v174;
        while (1) {
          v204 = (unsigned int)(v200 + v203) >> 1;
          v205 = v173[v204];
          if (v202 == v205) {
            break;
          }
          if (v202 < v205) {
            v203 = (unsigned int)(v200 + v203) >> 1;
          }
          else {
            v200 = v204 + 1;
          }
          if (v200 >= v203) {
            goto LABEL_291;
          }
        }
        LOBYTE(v200) = v204 + 1;
      }
    LABEL_291:
      *(_BYTE*)(a1 + 30) = v200;
      v206 = *(int*)(a2 + 20);
      v207 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v206 + 1;
      v208 = *(unsigned __int8*)(v207 + v206);
      *(_DWORD*)(a2 + 20) = v206 + 2;
      v209 = *(_DWORD*)(v176 - 4);
      v210 = v208 | (*(unsigned __int8*)(v207 + v206 + 1) << 8);
      if (v209 >= v210) {
        v209 = v210;
      }
      *(_WORD*)(a1 + 8) = v209;
      if ((int)v174 < 1) {
        LOBYTE(v211) = 0;
      }
      else {
        v211 = 0;
        v212 = v173[(unsigned int)(v174 - 1)];
        if (v212 >= v209) {
          v212 = v209;
        }
        if (v209 >= *v173) {
          v213 = v212;
        }
        else {
          v213 = *v173;
        }
        v214 = v174;
        while (1) {
          v215 = (unsigned int)(v211 + v214) >> 1;
          v216 = v173[v215];
          if (v213 == v216) {
            break;
          }
          if (v213 < v216) {
            v214 = (unsigned int)(v211 + v214) >> 1;
          }
          else {
            v211 = v215 + 1;
          }
          if (v211 >= v214) {
            goto LABEL_308;
          }
        }
        LOBYTE(v211) = v215 + 1;
      }
    LABEL_308:
      *(_BYTE*)(a1 + 31) = v211;
      v217 = *(int*)(a2 + 20);
      v218 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v217 + 1;
      v219 = *(unsigned __int8*)(v218 + v217);
      *(_DWORD*)(a2 + 20) = v217 + 2;
      v220 = *(_DWORD*)(v176 - 4);
      v221 = v219 | (*(unsigned __int8*)(v218 + v217 + 1) << 8);
      if (v220 >= v221) {
        v220 = v221;
      }
      *(_WORD*)(a1 + 10) = v220;
      if ((int)v174 < 1) {
        LOBYTE(v222) = 0;
      }
      else {
        v222 = 0;
        v223 = v173[(unsigned int)(v174 - 1)];
        if (v223 >= v220) {
          v223 = v220;
        }
        if (v220 >= *v173) {
          v224 = v223;
        }
        else {
          v224 = *v173;
        }
        v225 = v174;
        while (1) {
          v226 = (unsigned int)(v222 + v225) >> 1;
          v227 = v173[v226];
          if (v224 == v227) {
            break;
          }
          if (v224 < v227) {
            v225 = (unsigned int)(v222 + v225) >> 1;
          }
          else {
            v222 = v226 + 1;
          }
          if (v222 >= v225) {
            goto LABEL_325;
          }
        }
        LOBYTE(v222) = v226 + 1;
      }
    LABEL_325:
      *(_BYTE*)(a1 + 32) = v222;
      v228 = *(int*)(a2 + 20);
      v229 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v228 + 1;
      v230 = *(unsigned __int8*)(v229 + v228);
      *(_DWORD*)(a2 + 20) = v228 + 2;
      v231 = *(_DWORD*)(v176 - 4);
      v232 = v230 | (*(unsigned __int8*)(v229 + v228 + 1) << 8);
      if (v231 >= v232) {
        v231 = v232;
      }
      *(_WORD*)(a1 + 12) = v231;
      if ((int)v174 < 1) {
        LOBYTE(v233) = 0;
      }
      else {
        v233 = 0;
        v234 = v173[(unsigned int)(v174 - 1)];
        if (v234 >= v231) {
          v234 = v231;
        }
        if (v231 >= *v173) {
          v235 = v234;
        }
        else {
          v235 = *v173;
        }
        v236 = v174;
        while (1) {
          v237 = (unsigned int)(v233 + v236) >> 1;
          v238 = v173[v237];
          if (v235 == v238) {
            break;
          }
          if (v235 < v238) {
            v236 = (unsigned int)(v233 + v236) >> 1;
          }
          else {
            v233 = v237 + 1;
          }
          if (v233 >= v236) {
            goto LABEL_342;
          }
        }
        LOBYTE(v233) = v237 + 1;
      }
    LABEL_342:
      *(_BYTE*)(a1 + 33) = v233;
      v239 = *(int*)(a2 + 20);
      v240 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v239 + 1;
      v241 = *(unsigned __int8*)(v240 + v239);
      *(_DWORD*)(a2 + 20) = v239 + 2;
      v242 = *(_DWORD*)(v176 - 4);
      v243 = v241 | (*(unsigned __int8*)(v240 + v239 + 1) << 8);
      if (v242 >= v243) {
        v242 = v243;
      }
      *(_WORD*)(a1 + 14) = v242;
      if ((int)v174 < 1) {
        LOBYTE(v244) = 0;
      }
      else {
        v244 = 0;
        v245 = v173[(unsigned int)(v174 - 1)];
        if (v245 >= v242) {
          v245 = v242;
        }
        if (v242 >= *v173) {
          v246 = v245;
        }
        else {
          v246 = *v173;
        }
        v247 = v174;
        while (1) {
          v248 = (unsigned int)(v244 + v247) >> 1;
          v249 = v173[v248];
          if (v246 == v249) {
            break;
          }
          if (v246 < v249) {
            v247 = (unsigned int)(v244 + v247) >> 1;
          }
          else {
            v244 = v248 + 1;
          }
          if (v244 >= v247) {
            goto LABEL_359;
          }
        }
        LOBYTE(v244) = v248 + 1;
      }
    LABEL_359:
      *(_BYTE*)(a1 + 34) = v244;
      v250 = *(int*)(a2 + 20);
      v251 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v250 + 1;
      v252 = *(unsigned __int8*)(v251 + v250);
      *(_DWORD*)(a2 + 20) = v250 + 2;
      v253 = *(_DWORD*)(v176 - 4);
      v254 = v252 | (*(unsigned __int8*)(v251 + v250 + 1) << 8);
      if (v253 >= v254) {
        v253 = v254;
      }
      *(_WORD*)(a1 + 16) = v253;
      if ((int)v174 < 1) {
        LOBYTE(v255) = 0;
      }
      else {
        v255 = 0;
        v256 = v173[(unsigned int)(v174 - 1)];
        if (v256 >= v253) {
          v256 = v253;
        }
        if (v253 >= *v173) {
          v257 = v256;
        }
        else {
          v257 = *v173;
        }
        v258 = v174;
        while (1) {
          v259 = (unsigned int)(v255 + v258) >> 1;
          v260 = v173[v259];
          if (v257 == v260) {
            break;
          }
          if (v257 < v260) {
            v258 = (unsigned int)(v255 + v258) >> 1;
          }
          else {
            v255 = v259 + 1;
          }
          if (v255 >= v258) {
            goto LABEL_376;
          }
        }
        LOBYTE(v255) = v259 + 1;
      }
    LABEL_376:
      *(_BYTE*)(a1 + 35) = v255;
      v261 = *(int*)(a2 + 20);
      v262 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v261 + 1;
      v263 = *(unsigned __int8*)(v262 + v261);
      *(_DWORD*)(a2 + 20) = v261 + 2;
      v264 = *(_DWORD*)(v176 - 4);
      v265 = v263 | (*(unsigned __int8*)(v262 + v261 + 1) << 8);
      if (v264 >= v265) {
        v264 = v265;
      }
      *(_WORD*)(a1 + 18) = v264;
      if ((int)v174 < 1) {
        LOBYTE(v266) = 0;
      }
      else {
        v266 = 0;
        v267 = v173[(unsigned int)(v174 - 1)];
        if (v267 >= v264) {
          v267 = v264;
        }
        if (v264 >= *v173) {
          v268 = v267;
        }
        else {
          v268 = *v173;
        }
        v269 = v174;
        while (1) {
          v270 = (unsigned int)(v266 + v269) >> 1;
          v271 = v173[v270];
          if (v268 == v271) {
            break;
          }
          if (v268 < v271) {
            v269 = (unsigned int)(v266 + v269) >> 1;
          }
          else {
            v266 = v270 + 1;
          }
          if (v266 >= v269) {
            goto LABEL_393;
          }
        }
        LOBYTE(v266) = v270 + 1;
      }
    LABEL_393:
      *(_BYTE*)(a1 + 36) = v266;
      v272 = *(int*)(a2 + 20);
      v273 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v272 + 1;
      v274 = *(unsigned __int8*)(v273 + v272);
      *(_DWORD*)(a2 + 20) = v272 + 2;
      v275 = *(_DWORD*)(v176 - 4);
      v276 = v274 | (*(unsigned __int8*)(v273 + v272 + 1) << 8);
      if (v275 >= v276) {
        v275 = v276;
      }
      *(_WORD*)(a1 + 20) = v275;
      if ((int)v174 < 1) {
        LOBYTE(v277) = 0;
      }
      else {
        v277 = 0;
        v278 = v173[(unsigned int)(v174 - 1)];
        if (v278 >= v275) {
          v278 = v275;
        }
        if (v275 >= *v173) {
          v279 = v278;
        }
        else {
          v279 = *v173;
        }
        v280 = v174;
        while (1) {
          v281 = (unsigned int)(v277 + v280) >> 1;
          v282 = v173[v281];
          if (v279 == v282) {
            break;
          }
          if (v279 < v282) {
            v280 = (unsigned int)(v277 + v280) >> 1;
          }
          else {
            v277 = v281 + 1;
          }
          if (v277 >= v280) {
            goto LABEL_410;
          }
        }
        LOBYTE(v277) = v281 + 1;
      }
    LABEL_410:
      *(_BYTE*)(a1 + 37) = v277;
      v283 = *(int*)(a2 + 20);
      v284 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v283 + 1;
      v285 = *(unsigned __int8*)(v284 + v283);
      *(_DWORD*)(a2 + 20) = v283 + 2;
      v286 = *(_DWORD*)(v176 - 4);
      v287 = v285 | (*(unsigned __int8*)(v284 + v283 + 1) << 8);
      if (v286 >= v287) {
        v286 = v287;
      }
      *(_WORD*)(a1 + 22) = v286;
      if ((int)v174 < 1) {
        LOBYTE(v288) = 0;
      }
      else {
        v288 = 0;
        v289 = v173[(unsigned int)(v174 - 1)];
        if (v289 >= v286) {
          v289 = v286;
        }
        if (v286 >= *v173) {
          v290 = v289;
        }
        else {
          v290 = *v173;
        }
        v291 = v174;
        while (1) {
          v292 = (unsigned int)(v288 + v291) >> 1;
          v293 = v173[v292];
          if (v290 == v293) {
            break;
          }
          if (v290 < v293) {
            v291 = (unsigned int)(v288 + v291) >> 1;
          }
          else {
            v288 = v292 + 1;
          }
          if (v288 >= v291) {
            goto LABEL_427;
          }
        }
        LOBYTE(v288) = v292 + 1;
      }
    LABEL_427:
      *(_BYTE*)(a1 + 38) = v288;
      v294 = *(int*)(a2 + 20);
      v295 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v294 + 1;
      v296 = *(unsigned __int8*)(v295 + v294);
      *(_DWORD*)(a2 + 20) = v294 + 2;
      v297 = *(_DWORD*)(v176 - 4);
      v298 = v296 | (*(unsigned __int8*)(v295 + v294 + 1) << 8);
      if (v297 >= v298) {
        v297 = v298;
      }
      *(_WORD*)(a1 + 24) = v297;
      if ((int)v174 < 1) {
        LOBYTE(v299) = 0;
      }
      else {
        v299 = 0;
        v300 = v173[(unsigned int)(v174 - 1)];
        if (v300 >= v297) {
          v300 = v297;
        }
        if (v297 >= *v173) {
          v301 = v300;
        }
        else {
          v301 = *v173;
        }
        v302 = v174;
        while (1) {
          v303 = (unsigned int)(v299 + v302) >> 1;
          v304 = v173[v303];
          if (v301 == v304) {
            break;
          }
          if (v301 < v304) {
            v302 = (unsigned int)(v299 + v302) >> 1;
          }
          else {
            v299 = v303 + 1;
          }
          if (v299 >= v302) {
            goto LABEL_444;
          }
        }
        LOBYTE(v299) = v303 + 1;
      }
    LABEL_444:
      *(_BYTE*)(a1 + 39) = v299;
      v305 = *(int*)(a2 + 20);
      v306 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v305 + 1;
      v307 = *(unsigned __int8*)(v306 + v305);
      *(_DWORD*)(a2 + 20) = v305 + 2;
      v308 = *(_DWORD*)(v176 - 4);
      v309 = v307 | (*(unsigned __int8*)(v306 + v305 + 1) << 8);
      if (v308 < v309) {
        v309 = v308;
      }
      *(_WORD*)(a1 + 26) = v309;
      if ((int)v174 < 1) {
        *(_BYTE*)(a1 + 40) = 0;
      }
      else {
        v310 = 0;
        v311 = v173[(unsigned int)(v174 - 1)];
        if (v311 >= v309) {
          v311 = v309;
        }
        if (v309 >= *v173) {
          v312 = v311;
        }
        else {
          v312 = *v173;
        }
        while (1) {
          v313 = (unsigned int)(v310 + v174) >> 1;
          v314 = v173[v313];
          if (v312 == v314) {
            break;
          }
          if (v312 < v314) {
            LODWORD(v174) = (unsigned int)(v310 + v174) >> 1;
          }
          else {
            v310 = v313 + 1;
          }
          if (v310 >= (int)v174) {
            goto LABEL_460;
          }
        }
        LOBYTE(v310) = v313 + 1;
      LABEL_460:
        *(_BYTE*)(a1 + 40) = v310;
      }
    }
    else if (*(_BYTE*)(v146 + v145) != 0) {
      v148 = (int*)GameData_21d99a8;
      v149 = 0;
      v150 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
      if ((int)v150 >= 12) {
        v151 = 12;
      }
      else {
        v151 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
      }
      v152 = GameData_21d99a8 + 4LL * v151;
      do {
        v154 = *(int*)(a2 + 20);
        v155 = *(_QWORD*)(a2 + 8);
        *(_DWORD*)(a2 + 20) = v154 + 1;
        v156 = *(unsigned __int8*)(v155 + v154);
        *(_DWORD*)(a2 + 20) = v154 + 2;
        v157 = *(unsigned __int8*)(v155 + v154 + 1);
        *(_DWORD*)(a2 + 20) = v154 + 3;
        v158 = v157 | (*(unsigned __int8*)(v155 + v154 + 2) << 8);
        v159 = *(_DWORD*)(v152 - 4);
        if (v159 >= v158) {
          v159 = v158;
        }
        v6[v156] = v159;
        if ((int)v150 < 1) {
          LOBYTE(v153) = 0;
        }
        else {
          v160 = v148[(unsigned int)(v150 - 1)];
          v153 = 0;
          if (v160 >= v159) {
            v160 = v159;
          }
          if (v159 >= *v148) {
            v161 = v160;
          }
          else {
            v161 = *v148;
          }
          v162 = v150;
          while (1) {
            v163 = (unsigned int)(v153 + v162) >> 1;
            v164 = v148[v163];
            if (v161 == v164) {
              break;
            }
            if (v161 < v164) {
              v162 = (unsigned int)(v153 + v162) >> 1;
            }
            else {
              v153 = v163 + 1;
            }
            if (v153 >= v162) {
              goto LABEL_213;
            }
          }
          LOBYTE(v153) = v163 + 1;
        }
      LABEL_213:
        ++v149;
        *(_BYTE*)(v123 + v156) = v153;
      } while (v149 != v147);
    }
    v315 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v315 + 1;
    v316 = *(_QWORD*)(a2 + 8);
    v317 = *(unsigned __int8*)(v316 + v315);
    if (*(_BYTE*)(v316 + v315) != 0) {
      do {
        while (1) {
          v318 = GameRoutine_6e2b60(a2);
          if (v318 != 0) {
            break;
          }
          *(_DWORD*)(a2 + 20) += 2;
          if (--v317 == 0) {
            return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2,
                                                                           0);
          }
        }
        v319 = *(int*)(a2 + 20);
        v320 = *(_QWORD*)(a2 + 8);
        v321 = *(unsigned __int16*)(v318 + 16);
        v322 = *(_QWORD*)(a1 + 48);
        *(_DWORD*)(a2 + 20) = v319 + 1;
        v323 = *(unsigned __int8*)(v320 + v319);
        *(_DWORD*)(a2 + 20) = v319 + 2;
        *(_WORD*)(v322 + 2 * v321) =
            v323 | (*(unsigned __int8*)(v320 + v319 + 1) << 8);
        --v317;
      } while (v317 != 0);
    }
  }
  else {
    v124 = *(int*)(a2 + 20);
    v125 = *(_QWORD*)(a2 + 8);
    v126 = v124 + 1;
    *(_DWORD*)(a2 + 20) = v124 + 1;
    v127 = *(unsigned __int8*)(v125 + v124);
    if (v127 != 0) {
      v128 = (int*)GameData_21d99a8;
      v129 = 0;
      v130 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
      if ((int)v130 >= 12) {
        v131 = 12;
      }
      else {
        v131 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
      }
      v132 = GameData_21d99a8 + 4LL * v131;
      do {
        v134 = *(int*)(a2 + 20);
        v135 = *(_QWORD*)(a2 + 8);
        *(_DWORD*)(a2 + 20) = v134 + 1;
        v136 = *(unsigned __int8*)(v135 + v134);
        *(_DWORD*)(a2 + 20) = v134 + 2;
        v137 = *(unsigned __int8*)(v135 + v134 + 1);
        *(_DWORD*)(a2 + 20) = v134 + 3;
        v138 = v137 | (*(unsigned __int8*)(v135 + v134 + 2) << 8);
        v139 = *(_DWORD*)(v132 - 4);
        if (v139 >= v138) {
          v139 = v138;
        }
        v6[v136] = v139;
        if ((int)v130 < 1) {
          LOBYTE(v133) = 0;
        }
        else {
          v140 = v128[(unsigned int)(v130 - 1)];
          v133 = 0;
          if (v140 >= v139) {
            v140 = v139;
          }
          if (v139 >= *v128) {
            v141 = v140;
          }
          else {
            v141 = *v128;
          }
          v142 = v130;
          while (1) {
            v143 = (unsigned int)(v133 + v142) >> 1;
            v144 = v128[v143];
            if (v141 == v144) {
              break;
            }
            if (v141 < v144) {
              v142 = (unsigned int)(v133 + v142) >> 1;
            }
            else {
              v133 = v143 + 1;
            }
            if (v133 >= v142) {
              goto LABEL_189;
            }
          }
          LOBYTE(v133) = v143 + 1;
        }
      LABEL_189:
        ++v129;
        *(_BYTE*)(v123 + v136) = v133;
      } while (v129 != v127);
      v126 = *(_DWORD*)(a2 + 20);
      v125 = *(_QWORD*)(a2 + 8);
    }
    *(_DWORD*)(a2 + 20) = v126 + 1;
    v165 = *(unsigned __int8*)(v125 + v126);
    if (*(_BYTE*)(v125 + v126) != 0) {
      do {
        while (1) {
          v171 = GameRoutine_6e2a20(a2);
          if (v171 == 0) {
            break;
          }
          v166 = *(int*)(a2 + 20);
          v167 = *(_QWORD*)(a2 + 8);
          v168 = *(unsigned __int16*)(v171 + 16);
          v169 = *(_QWORD*)(a1 + 48);
          *(_DWORD*)(a2 + 20) = v166 + 1;
          v170 = *(unsigned __int8*)(v167 + v166);
          *(_DWORD*)(a2 + 20) = v166 + 2;
          *(_WORD*)(v169 + 2 * v168) =
              v170 | (*(unsigned __int8*)(v167 + v166 + 1) << 8);
          if (--v165 == 0) {
            return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2,
                                                                           0);
          }
        }
        *(_DWORD*)(a2 + 20) += 2;
        --v165;
      } while (v165 != 0);
    }
  }
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
}

__int64 game_UnitMastery_GetMaxJobRank_lambda0_Invoke(__int64 result,
                                                      __int64 a2, _WORD* a3)
{
  _BYTE* v3;
  unsigned int v4;

  if ((*a3 & 0x400) != 0) {
    v3 = *(_BYTE**)(result + 8);
    v4 = *(unsigned __int8*)(*(_QWORD*)a2 + 49LL);
    if ((unsigned __int8)*v3 > v4) {
      LOBYTE(v4) = *v3;
    }
    *v3 = v4;
  }
  return result;
}

__int64 UnitMastery_7febc0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6)
{
  __int64 v6;

  GameData_21da328 = 0;
  GameData_21da320 = 0;
  GameData_21da318 = 0;
  GameData_21da2ea = 0;
  GameData_21da2f2 = 0;
  GameData_21da2fa = 0;
  GameData_21da302 = 0;
  *(__int64*)((char*)&GameData_21da302 + 7) = 0;
  if (GameData_21c99c0 != 0) {
    v6 = *(_QWORD*)(GameData_21c99c0 + 72) - *(_QWORD*)(GameData_21c99c0 + 64);
    if ((unsigned int)((unsigned __int64)v6 >> 3) != 0) {
      GameRoutine_7fe910_alt1(&GameData_21da318, (int)(v6 >> 3), a3, a4, a5,
                              a6);
      if (GameData_21da318 != GameData_21da320) {
        memset_alt1(GameData_21da318, 0, GameData_21da320 - GameData_21da318);
      }
    }
  }
  return GameRoutine_2b0();
}

#pragma GCC visibility pop
