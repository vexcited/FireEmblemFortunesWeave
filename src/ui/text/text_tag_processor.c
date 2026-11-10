#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1909a50(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1909b00(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1909ba0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1909c50(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_55c2c0(_QWORD);
__int64 GameRoutine_561000(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_561100(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5612a0(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(long double, double);
char* GameRoutine_1905ba0(char**, char*);
extern __int64 fw_memory_g_heap_manager_ptr;
float GameRoutine_55c240(_QWORD);
float GameRoutine_55c280(_QWORD);
void __attribute__((noreturn)) GameRoutine_190af40(void);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 TextTagProcessor_Unknown6(__int64 a1, _DWORD** a2);
__int64 TextTagProcessor_Unknown4(_QWORD* a1, __int64 a2, __int64* a3,
                                  unsigned int a4);
__int64 nn_util_PickOutCharacterFromUtf8String(_QWORD, _QWORD);
__int64 TextTagProcessor_561320(__int64 a1, _BYTE* a2, __int64 a3);

__int64 TextTagProcessor_561320(__int64 a1, _BYTE* a2, __int64 a3)
{
  __int64 result;
  int v5;
  __int64 v6;

  v6 = a3;
  v5 = 0;
  nn_util_PickOutCharacterFromUtf8String(&v5, &v6);
  result = v6;
  *a2 = 1;
  return result;
}

__int64 TextTagProcessor_Unknown6(__int64 a1, _DWORD** a2)
{
  if (*a2 != nullptr) {
    *(_DWORD*)(a1 + 177) = **a2;
  }
  if ((*(_BYTE*)(a1 + 152) & 1) != 0) {
    **(_BYTE**)(a1 + 168) = 0;
    *(_QWORD*)(a1 + 160) = 0;
  }
  else {
    *(_WORD*)(a1 + 152) = 0;
  }
  return GameRoutine_5612a0();
}

__int64 TextTagProcessor_Unknown4(_QWORD* a1, __int64 a2, __int64* a3,
                                  unsigned int a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  float* v15;
  __int64* v16;
  __int64 v17;
  float* v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  bool v24;
  bool v25;
  __int64 v26;
  float v28;
  __int64 v30;
  unsigned int v31;
  int v32;
  int v33;
  __int64 v35;
  __int64 v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  __int64 v42;
  float v43;
  int v44;
  float v45;
  unsigned __int64 v46;
  unsigned __int8* v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  float* v55;
  __int64 v56;
  __int64 v57;
  __int64 v59;
  long double v60;
  double v61;
  __int64 v62;
  _QWORD* v63;
  __int64 v64;
  float* v65;
  float v66;
  float v67;
  __int64 v68;
  unsigned int v69;
  float v70;
  float v71;
  int v72;
  int v73;
  float v74;
  char* v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  _QWORD* v79;
  __int64 v80;
  unsigned __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;

  v15 = (float*)a2;
  v82 = v11;
  v83 = v10;
  v84 = v9;
  v85 = v8;
  v86 = v7;
  v87 = v6;
  v88 = v4;
  v89 = v5;
  v16 = a3;
  if (a2 != 0) {
    *(_QWORD*)a2 = 0;
    *(_QWORD*)(a2 + 8) = 0;
  }
  if ((a4 & 0xFFFFFFFE) == 0xE) {
    v17 = a3[1];
    v19 = v15;
    v77 = 0;
    v78 = 0;
    v76 = 0;
    v20 = &GameRoutine_1905ba0(&v75, (char*)(v17 - 1))[v17 - 1];
    v21 = v76;
    v22 = v77;
    v16[1] = (__int64)v20;
    if (v22 == v21) {
      GameRoutine_190af40();
    }
    v23 = *(_QWORD*)(v21 + 8);
    v24 = *(_DWORD*)v21 == 0 || v23 == 0;
    if (v24 || (*(_DWORD*)v21 == 1 ? (v25 = *(unsigned __int16*)(v21 + 16) == 0)
                                   : (v25 = true),
                v25)) {
      do {
        *(_DWORD*)(v22 - 24) = 0;
        v22 -= 24;
        *(_QWORD*)(v22 + 8) = 0;
        *(_WORD*)(v22 + 16) = 0;
      } while (v22 != v21);
      goto LABEL_15;
    }
    v32 = *(unsigned __int16*)(v23 + 1);
    v33 = *(unsigned __int16*)(v23 + 3);
    if (v32 == 0) {
      if (v33 > 15) {
        v57 = v21;
        if (v33 == 16) {
          GameRoutine_1909ba0(a1, &v76, v16, v19);
          v21 = v57;
          if (v57 == v22) {
            goto LABEL_78;
          }
        }
        else if (v33 == 17 && v19 == nullptr) {
          GameRoutine_1909c50(a1, 1, v16);
          v21 = v57;
          if (v57 == v22) {
            goto LABEL_78;
          }
        }
        else if (v21 == v22) {
          goto LABEL_78;
        }
        do {
        LABEL_77:
          *(_DWORD*)(v22 - 24) = 0;
          v22 -= 24;
          *(_QWORD*)(v22 + 8) = 0;
          *(_WORD*)(v22 + 16) = 0;
        } while (v22 != v21);
      LABEL_78:
        if (v21 == 0) {
          return 0;
        }
      LABEL_15:
        v26 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v26);
        return 0;
      }
      v55 = v19;
      if (v33 == 0) {
        v59 = v21;
        GameRoutine_1909a50(a1, &v76, v16, v55);
        v21 = v59;
        if (v59 == v22) {
          goto LABEL_78;
        }
        goto LABEL_77;
      }
      if (v33 == 3) {
        v56 = v21;
        GameRoutine_1909b00(a1, &v76, v16, v55);
        v21 = v56;
        if (v56 == v22) {
          goto LABEL_78;
        }
        goto LABEL_77;
      }
    LABEL_76:
      if (v21 == v22) {
        goto LABEL_78;
      }
      goto LABEL_77;
    }
    if (v32 != 3 || v33 != 16) {
      goto LABEL_76;
    }
    v35 = *v16;
    v36 = v21;
    v37 = *(float*)(v35 + 20);
    v38 = -*(float*)(v35 + 24);
    v39 = GameRoutine_55c240(v35);
    v40 = GameRoutine_55c280(v35);
    GameRoutine_55c2c0(v35);
    v42 = a1[40];
    v43 = 0.0;
    if (v42 == 0) {
      goto LABEL_72;
    }
    v44 = *(_DWORD*)(v36 + 24);
    v45 = v41;
    v46 = 0;
    if (v44 == 0) {
      goto LABEL_59;
    }
    v47 = *(unsigned __int8**)(v36 + 32);
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    if (v47 == nullptr) {
      goto LABEL_60;
    }
    v46 = 0;
    if (v44 == 1) {
    LABEL_59:
      v48 = 0;
      v49 = 0;
      v50 = 0;
      v51 = 0;
      v52 = 0;
      v53 = 0;
      v54 = 0;
    }
    else {
      v48 = 0;
      v49 = 0;
      v50 = 0;
      v51 = 0;
      v52 = 0;
      v53 = 0;
      v54 = 0;
      if (*(_WORD*)(v36 + 40) != 0) {
        v51 = (unsigned __int64)v47[3] << 24;
        v54 = *v47;
        v46 = (unsigned __int64)v47[7] << 56;
        v48 = (unsigned __int64)v47[6] << 48;
        v49 = (unsigned __int64)v47[5] << 40;
        v50 = (unsigned __int64)v47[4] << 32;
        v52 = (unsigned __int64)v47[2] << 16;
        v53 = (unsigned __int64)v47[1] << 8;
      }
    }
  LABEL_60:
    v81 = v48 | v46 | v49 | v50 | v51 | v52 | v53 | v54;
    (*(__attribute__((swiftcall)) void (**)(
        PSEUDO_X8, __int64, unsigned __int64*))(*(_QWORD*)v42 + 48LL))(
        (void*)&v79, v42, &v81);
    if (v80 == 0) {
    LABEL_72:
      v65 = v19;
      goto LABEL_73;
    }
    v62 = std___1___shared_weak_count_lock(v60, v61);
    v63 = v79;
    if (v80 != 0) {
      std___1___shared_weak_count___release_weak(v80);
    }
    if (v62 == 0 || v63 == nullptr) {
      v65 = v19;
      if (v62 == 0) {
        goto LABEL_73;
      }
      goto LABEL_70;
    }
    v43 = (*(float (**)(_QWORD*))(*v63 + 112LL))(v63);
    if (v19 != nullptr) {
      goto LABEL_66;
    }
    v68 = v63[11];
    if (v68 == 0) {
      goto LABEL_66;
    }
    v69 = *(unsigned __int8*)(v68 + 278);
    if ((v69 & 3) == 2) {
      v70 = 0.5;
    }
    else {
      if ((v69 & 3) != 1) {
      LABEL_88:
        v71 = *(float*)(v68 + 84);
        v72 = (v69 >> 2) & 3;
        if ((*(_WORD*)(v68 + 276) & 0x1000) != 0) {
          v73 = 0;
        }
        else {
          v73 = v72;
        }
        if (v73 == 2) {
          v74 = -0.5;
          goto LABEL_95;
        }
        if (v73 == 1) {
          v74 = 0.5;
        LABEL_95:
          v38 = v38 + (float)(v71 * v74);
        }
      LABEL_66:
        LODWORD(v80) = 0;
        *(float*)&v79 = v37 + (float)(v43 * 0.5);
        *((float*)&v79 + 1) = v38 + (float)((float)(v40 - v45) * 0.5);
        (*(void (**)(_QWORD*, _QWORD**))(*v63 + 56LL))(v63, &v79);
        v64 = a1[46];
        if (v64 != 0) {
          LODWORD(v79) = v19 != nullptr;
          (*(void (**)(__int64, _QWORD*, _QWORD**))(*(_QWORD*)v64 + 48LL))(
              v64, v63, &v79);
        }
        v65 = v19;
      LABEL_70:
        if (atomic_fetch_add((atomic_ullong* volatile)(v62 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v62 + 16LL))(v62);
          std___1___shared_weak_count___release_weak(v62);
          goto LABEL_72;
        }
      LABEL_73:
        if (v65 != nullptr) {
          v66 = v37 + (float)(v43 * 0.5);
          v67 = (float)(v39 * 0.5) - v38;
          *v65 = v66 - (float)(v43 * 0.5);
          v65[1] = v67 - (float)(v39 * 0.5);
          v65[2] = (float)(v43 * 0.5) + v66;
          v65[3] = (float)(v39 * 0.5) + v67;
        }
        v21 = v76;
        v22 = v77;
        *(float*)(v35 + 20) = v43 + *(float*)(v35 + 20);
        goto LABEL_76;
      }
      v70 = -0.5;
    }
    v37 = v37 + (float)(*(float*)(v68 + 80) * v70);
    goto LABEL_88;
  }
  if (a4 == 19) {
    if (a2 == 0) {
      v30 = a1[28];
      if (v30 == 0) {
        GameRoutine_60a310(0, a3);
      }
      v31 = (*(__int64 (**)(__int64))(*(_QWORD*)v30 + 48LL))(v30);
      GameRoutine_1909c50(a1, v31, v16);
    }
    return 0;
  }
  if (a4 == 17) {
    if (a2 != 0) {
      v28 = *(float*)(a2 + 4) + 0.0;
      *(float*)(a2 + 8) = *(float*)a2 + 0.0;
      *(float*)(a2 + 12) = v28;
    }
    return 4;
  }
  else if (a2 != 0) {
    return GameRoutine_561100(a1, a2, a3, a4);
  }
  else {
    return GameRoutine_561000(a1, a4, a3);
  }
}

#pragma GCC visibility pop
