#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_132b230(__int64, __int64);
__int64 GameRoutine_132b480(__int64, __int64*, int);
__int64 GameRoutine_876a40(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_202c2e8[])();
extern __int64 (*game_gmap_SpotMgr_Impl_vtable[])();
extern __int64 GameData_21c9700;
extern __int64 GameData_21eea40;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d6d0;
void __attribute__((noreturn)) GameRoutine_60a210(void);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_8875e0(_QWORD);
__int64 Impl_Destructor_1337380(_QWORD* a1);
__int64 Impl_Unknown7_1337600(__int64 result, __int64 a2);
_QWORD* Impl_Unknown8_13378e0(_QWORD* result, __int64 a2, int a3);

__int64 Impl_Destructor_1337380(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
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
  _QWORD* v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v27;

  v1 = a1[21];
  *a1 = game_gmap_SpotMgr_Impl_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[22] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = a1[18];
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    a1[19] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8);
  }
  v9 = a1[15];
  if (v9 != 0) {
    v10 = *(_QWORD*)v3;
    a1[16] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(v10 + v11);
  }
  v12 = a1[12];
  if (v12 != 0) {
    v13 = *(_QWORD*)v3;
    a1[13] = v12;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(v13 + v14);
  }
  v15 = a1[9];
  if (v15 != 0) {
    v16 = *(_QWORD*)v3;
    a1[10] = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(v16 + v17);
  }
  v18 = a1[6];
  if (v18 != 0) {
    v19 = *(_QWORD*)v3;
    a1[7] = v18;
    v20 = 128;
    if (*(_QWORD*)(v19 + 200) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(v19 + v20);
  }
  v21 = (_QWORD*)a1[3];
  if (v21 != nullptr) {
    do {
      v22 = (_QWORD*)*v21;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v23 = 128;
      }
      else {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v23);
      v21 = v22;
    } while (v22 != nullptr);
  }
  v24 = a1[1];
  a1[1] = 0;
  if (v24 != 0) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v25);
  }
  v27 = a1;
  *a1 = GameData_212d6d0 + 2;
  return GameRoutine_876a40(&GameData_21eea40, &v27);
}

__int64 Impl_Unknown7_1337600(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* i;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64* j;
  __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64* k;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;

  v2 = *(int*)(a2 + 20);
  v4 = result;
  v5 = *(_QWORD*)(result + 56) - *(_QWORD*)(result + 48);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v2) = v5 >> 3;
  v6 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = v5 >> 11;
  v7 = *(__int64**)(result + 48);
  for (i = *(__int64**)(result + 56); v7 != i;
       result = GameRoutine_132b230(v10, a2)) {
    v9 = *(int*)(a2 + 20);
    v10 = *v7++;
    v11 = *(_DWORD*)(v10 + 96);
    *(_DWORD*)(a2 + 20) = v9 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = v11;
    v12 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v12 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = BYTE1(v11);
    v13 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v13 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13) = BYTE2(v11);
    v14 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v14 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = HIBYTE(v11);
  }
  v15 = *(int*)(a2 + 20);
  v16 = *(_BYTE*)(v4 + 208);
  *(_DWORD*)(a2 + 20) = v15 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = v16;
  v17 = *(_QWORD*)(v4 + 200);
  if (v17 != 0) {
    LODWORD(v17) = *(_DWORD*)(v17 + 96);
  }
  v18 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v18 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = v17;
  v19 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v19 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v19) = BYTE1(v17);
  v20 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v20 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v20) = BYTE2(v17);
  v21 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v21 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = BYTE3(v17);
  v22 = *(int*)(a2 + 20);
  v23 = *(_QWORD*)(v4 + 152) - *(_QWORD*)(v4 + 144);
  *(_DWORD*)(a2 + 20) = v22 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v22) = v23 >> 3;
  v24 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v24 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v24) = v23 >> 11;
  v25 = *(__int64**)(v4 + 144);
  for (j = *(__int64**)(v4 + 152); v25 != j;
       *(_BYTE*)(*(_QWORD*)(a2 + 8) + v32) = HIBYTE(v29)) {
    v27 = *(int*)(a2 + 20);
    v28 = *v25++;
    v29 = *(_DWORD*)(v28 + 96);
    *(_DWORD*)(a2 + 20) = v27 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v27) = v29;
    v30 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v30 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v30) = BYTE1(v29);
    v31 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v31 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v31) = BYTE2(v29);
    v32 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v32 + 1;
  }
  v33 = *(int*)(a2 + 20);
  v34 = *(_QWORD*)(v4 + 176) - *(_QWORD*)(v4 + 168);
  *(_DWORD*)(a2 + 20) = v33 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v33) = v34 >> 3;
  v35 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v35 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v35) = v34 >> 11;
  v36 = *(__int64**)(v4 + 168);
  for (k = *(__int64**)(v4 + 176); v36 != k;
       *(_BYTE*)(*(_QWORD*)(a2 + 8) + v43) = HIBYTE(v40)) {
    v38 = *(int*)(a2 + 20);
    v39 = *v36++;
    v40 = *(_DWORD*)(v39 + 96);
    *(_DWORD*)(a2 + 20) = v38 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v38) = v40;
    v41 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v41 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v41) = BYTE1(v40);
    v42 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v42 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v42) = BYTE2(v40);
    v43 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v43 + 1;
  }
  return result;
}

_QWORD* Impl_Unknown8_13378e0(_QWORD* result, __int64 a2, int a3)
{
  __int64 v3;
  __int64 v4;
  _QWORD* v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  int v17;
  int v18;
  unsigned __int64 v19;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64** v24;
  __int64* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  int v33;
  __int64 v34;
  int v35;
  unsigned __int64 v36;
  int v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64** v41;
  __int64* v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int v49;
  int v50;
  int v51;
  int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  int v56;
  int v57;
  __int64 v58;
  int v59;
  unsigned __int64 v60;
  int v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  __int64** v66;
  __int64* v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  _QWORD* v72;
  __int64 v73;
  char* v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  char* v81;
  __int64 v82;
  __int64 v83;
  int v84;
  int v85;
  int v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  int v90;
  int v91;
  __int64 v92;
  int v93;
  unsigned __int64 v94;
  int v96;
  unsigned __int64 v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  __int64** v100;
  __int64* v101;
  unsigned __int64 v102;
  __int64 v103;
  __int64 v104;
  unsigned __int64 v105;
  _QWORD* v106;
  __int64 v107;
  char* v108;
  __int64 v109;
  unsigned __int64 v110;
  __int64 v111;
  unsigned __int64 v112;
  __int64 v113;
  unsigned __int64 v114;
  char* v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64* v119;
  __int64* v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  _QWORD v124[4];
  _QWORD* v125;
  int v126;
  __int64 v127;

  if (a3 < 5) {
    return result;
  }
  v3 = *(int*)(a2 + 20);
  v4 = *(_QWORD*)(a2 + 8);
  v7 = result;
  v8 = v3 + 1;
  *(_DWORD*)(a2 + 20) = v3 + 1;
  v9 = *(unsigned __int8*)(v4 + v3);
  v10 = v3 + 2;
  *(_DWORD*)(a2 + 20) = v10;
  v11 = v9 | (*(unsigned __int8*)(v4 + v8) << 8);
  if (v11 != 0) {
    v12 = 0;
    while (1) {
      v13 = *(int*)(a2 + 20);
      v14 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v13 + 1;
      v15 = *(unsigned __int8*)(v14 + v13);
      *(_DWORD*)(a2 + 20) = v13 + 2;
      v16 = *(unsigned __int8*)(v14 + v13 + 1);
      *(_DWORD*)(a2 + 20) = v13 + 3;
      v17 = *(unsigned __int8*)(v14 + v13 + 2);
      *(_DWORD*)(a2 + 20) = v13 + 4;
      v18 = *(unsigned __int8*)(v14 + v13 + 3);
      if (a3 == 5) {
        *(_DWORD*)(a2 + 20) = v13 + 8;
      }
      v19 = v7[2];
      if (v19 == 0 || v7[4] == 0) {
        goto LABEL_32;
      }
      v21 = v15 | (v16 << 8) | (v17 << 16) | (unsigned int)(v18 << 24);
      v22 = v19 - 1;
      if ((v19 & (v19 - 1)) != 0) {
        v23 = v21;
        if (v19 <= v21) {
          v23 = (unsigned int)v21 % (unsigned int)v19;
        }
      }
      else {
        v23 = ((_DWORD)v19 - 1) & (unsigned int)v21;
      }
      v24 = *(__int64***)(v7[1] + 8 * v23);
      if (v24 == nullptr) {
        goto LABEL_32;
      }
      v25 = *v24;
      if (v25 == nullptr) {
        goto LABEL_32;
      }
      if ((v19 & v22) == 0) {
        while (1) {
          v27 = v25[1];
          if (v27 == v21) {
            if (*((_DWORD*)v25 + 4) == (_DWORD)v21) {
              goto LABEL_30;
            }
          }
          else if ((v27 & v22) != v23) {
            goto LABEL_32;
          }
          v25 = (__int64*)*v25;
          if (v25 == nullptr) {
            goto LABEL_32;
          }
        }
      }
      while (1) {
        v26 = v25[1];
        if (v26 == v21) {
          break;
        }
        if (v26 >= v19) {
          v26 %= v19;
        }
        if (v26 != v23) {
          goto LABEL_32;
        }
      LABEL_19:
        v25 = (__int64*)*v25;
        if (v25 == nullptr) {
          goto LABEL_32;
        }
      }
      if (*((_DWORD*)v25 + 4) != (_DWORD)v21) {
        goto LABEL_19;
      }
    LABEL_30:
      v28 = v25[3];
      if (v28 != 0) {
        result = (_QWORD*)GameRoutine_132b480(v28, (__int64*)a2, a3);
        goto LABEL_33;
      }
    LABEL_32:
      v29 = *(_QWORD*)a2;
      LODWORD(v124[0]) = 0;
      (*(void (**)(__int64, _QWORD*))(v29 + 16))(a2, v124);
      result = (_QWORD*)(*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(
          a2, 0);
    LABEL_33:
      if (++v12 == v11) {
        v10 = *(_DWORD*)(a2 + 20);
        v4 = *(_QWORD*)(a2 + 8);
        break;
      }
    }
  }
  *(_DWORD*)(a2 + 20) = v10 + 1;
  *((_BYTE*)v7 + 208) = *(_BYTE*)(v4 + v10) != 0;
  if (a3 <= 8) {
    goto LABEL_154;
  }
  v30 = *(int*)(a2 + 20);
  v31 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v30 + 1;
  v32 = *(unsigned __int8*)(v31 + v30);
  *(_DWORD*)(a2 + 20) = v30 + 2;
  v33 = *(unsigned __int8*)(v31 + v30 + 1);
  v34 = v30 + 3;
  *(_DWORD*)(a2 + 20) = v30 + 3;
  v35 = *(unsigned __int8*)(v31 + v30 + 2);
  *(_DWORD*)(a2 + 20) = v30 + 4;
  v36 = v7[2];
  if (v36 != 0 && v7[4] != 0) {
    v37 = v32 | (v33 << 8);
    v38 = v36 - 1;
    v39 = v37 | (v35 << 16) | (*(unsigned __int8*)(v31 + v34) << 24);
    if ((v36 & (v36 - 1)) != 0) {
      v40 = v39;
      if (v36 <= v39) {
        v40 = (unsigned int)v39 % (unsigned int)v36;
      }
    }
    else {
      v40 = ((_DWORD)v36 - 1) & (unsigned int)v39;
    }
    v41 = *(__int64***)(v7[1] + 8 * v40);
    if (v41 != nullptr) {
      v42 = *v41;
      if (v42 != nullptr) {
        if ((v36 & v38) == 0) {
          while (1) {
            v44 = v42[1];
            if (v44 == v39) {
              if (*((_DWORD*)v42 + 4) == (_DWORD)v39) {
                goto LABEL_58;
              }
            }
            else if ((v44 & v38) != v40) {
              goto LABEL_60;
            }
            v42 = (__int64*)*v42;
            if (v42 == nullptr) {
              goto LABEL_60;
            }
          }
        }
        do {
          v43 = v42[1];
          if (v43 == v39) {
            if (*((_DWORD*)v42 + 4) == (_DWORD)v39) {
            LABEL_58:
              v45 = v42[3];
              if (v45 != 0) {
                v7[25] = v45;
              }
              break;
            }
          }
          else {
            if (v43 >= v36) {
              v43 %= v36;
            }
            if (v43 != v40) {
              break;
            }
          }
          v42 = (__int64*)*v42;
        } while (v42 != nullptr);
      }
    }
  }

LABEL_60:
  if (a3 == 9) {
    goto LABEL_154;
  }
  v46 = *(int*)(a2 + 20);
  v47 = *(_QWORD*)(a2 + 8);
  v48 = v46 + 1;
  *(_DWORD*)(a2 + 20) = v46 + 1;
  v49 = *(unsigned __int8*)(v47 + v46);
  v50 = v46 + 2;
  *(_DWORD*)(a2 + 20) = v50;
  v51 = v49 | (*(unsigned __int8*)(v47 + v48) << 8);
  if (v51 == 0) {
    goto LABEL_108;
  }
  v52 = 0;
  while (2) {
    v54 = *(int*)(a2 + 20);
    v55 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v54 + 1;
    v56 = *(unsigned __int8*)(v55 + v54);
    *(_DWORD*)(a2 + 20) = v54 + 2;
    v57 = *(unsigned __int8*)(v55 + v54 + 1);
    v58 = v54 + 3;
    *(_DWORD*)(a2 + 20) = v54 + 3;
    v59 = *(unsigned __int8*)(v55 + v54 + 2);
    *(_DWORD*)(a2 + 20) = v54 + 4;
    v60 = v7[2];
    if (v60 == 0 || v7[4] == 0) {
      goto LABEL_65;
    }
    v62 = v56 | (v57 << 8);
    v63 = v60 - 1;
    v64 = v62 | (v59 << 16) | (*(unsigned __int8*)(v55 + v58) << 24);
    if ((v60 & (v60 - 1)) != 0) {
      v65 = v64;
      if (v60 <= v64) {
        v65 = (unsigned int)v64 % (unsigned int)v60;
      }
    }
    else {
      v65 = ((_DWORD)v60 - 1) & (unsigned int)v64;
    }
    v66 = *(__int64***)(v7[1] + 8 * v65);
    if (v66 == nullptr) {
      goto LABEL_65;
    }
    v67 = *v66;
    if (v67 == nullptr) {
      goto LABEL_65;
    }
    if ((v60 & v63) == 0) {
      while (1) {
        v69 = v67[1];
        if (v69 == v64) {
          if (*((_DWORD*)v67 + 4) == (_DWORD)v64) {
            goto LABEL_90;
          }
        }
        else if ((v69 & v63) != v65) {
          goto LABEL_65;
        }
        v67 = (__int64*)*v67;
        if (v67 == nullptr) {
          goto LABEL_65;
        }
      }
    }
    while (1) {
      v68 = v67[1];
      if (v68 == v64) {
        break;
      }
      if (v68 >= v60) {
        v68 %= v60;
      }
      if (v68 != v65) {
        goto LABEL_65;
      }
    LABEL_79:
      v67 = (__int64*)*v67;
      if (v67 == nullptr) {
        goto LABEL_65;
      }
    }
    if (*((_DWORD*)v67 + 4) != (_DWORD)v64) {
      goto LABEL_79;
    }
  LABEL_90:
    v70 = v67[3];
    if (v70 == 0) {
      goto LABEL_65;
    }
    v72 = (_QWORD*)v7[19];
    v71 = v7[20];
    if ((unsigned __int64)v72 < v71) {
      *v72 = v70;
      v53 = (__int64)(v72 + 1);
      goto LABEL_64;
    }
    v73 = v7[18];
    v74 = (char*)v72 - v73;
    v75 = ((__int64)v72 - v73) >> 3;
    v76 = v75 + 1;
    if ((unsigned __int64)(v75 + 1) >> 61 == 0) {
      v77 = v71 - v73;
      if (v77 >> 2 > v76) {
        v76 = v77 >> 2;
      }
      if ((unsigned __int64)v77 >= 0x7FFFFFFFFFFFFFF8LL) {
        v78 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v78 = v76;
      }
      if (v78 == 0) {
        v79 = 0;
        goto LABEL_102;
      }
      if (v78 >> 61 != 0) {
      LABEL_171:
        GameRoutine_60a210();
      }
      v79 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v78, 16, 0);
    LABEL_102:
      v80 = v79 + 8 * v78;
      v81 = (char*)v72 - v73;
      v82 = (__int64)&v74[v79 + -8 * v75];
      *(_QWORD*)&v74[v79] = v70;
      v53 = (__int64)&v74[v79 + 8];
      result = (_QWORD*)memcpy(v82, v73, v81);
      v7[18] = v82;
      v7[19] = v53;
      v7[20] = v80;
      if (v73 != 0) {
        v83 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v83 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v83);
      }
    LABEL_64:
      v7[19] = v53;
    LABEL_65:
      if (++v52 != v51) {
        continue;
      }
      v50 = *(_DWORD*)(a2 + 20);
      v47 = *(_QWORD*)(a2 + 8);
    LABEL_108:
      *(_DWORD*)(a2 + 20) = v50 + 1;
      v84 = *(unsigned __int8*)(v47 + v50);
      *(_DWORD*)(a2 + 20) = v50 + 2;
      v85 = v84 | (*(unsigned __int8*)(v47 + v50 + 1LL) << 8);
      if (v85 == 0) {
        goto LABEL_154;
      }
      v86 = 0;
      while (2) {
        v88 = *(int*)(a2 + 20);
        v89 = *(_QWORD*)(a2 + 8);
        *(_DWORD*)(a2 + 20) = v88 + 1;
        v90 = *(unsigned __int8*)(v89 + v88);
        *(_DWORD*)(a2 + 20) = v88 + 2;
        v91 = *(unsigned __int8*)(v89 + v88 + 1);
        v92 = v88 + 3;
        *(_DWORD*)(a2 + 20) = v88 + 3;
        v93 = *(unsigned __int8*)(v89 + v88 + 2);
        *(_DWORD*)(a2 + 20) = v88 + 4;
        v94 = v7[2];
        if (v94 == 0 || v7[4] == 0) {
          goto LABEL_112;
        }
        v96 = v90 | (v91 << 8);
        v97 = v94 - 1;
        v98 = v96 | (v93 << 16) | (*(unsigned __int8*)(v89 + v92) << 24);
        if ((v94 & (v94 - 1)) != 0) {
          v99 = v98;
          if (v94 <= v98) {
            v99 = (unsigned int)v98 % (unsigned int)v94;
          }
        }
        else {
          v99 = ((_DWORD)v94 - 1) & (unsigned int)v98;
        }
        v100 = *(__int64***)(v7[1] + 8 * v99);
        if (v100 == nullptr) {
          goto LABEL_112;
        }
        v101 = *v100;
        if (v101 == nullptr) {
          goto LABEL_112;
        }
        if ((v94 & v97) == 0) {
          while (1) {
            v103 = v101[1];
            if (v103 == v98) {
              if (*((_DWORD*)v101 + 4) == (_DWORD)v98) {
                goto LABEL_137;
              }
            }
            else if ((v103 & v97) != v99) {
              goto LABEL_112;
            }
            v101 = (__int64*)*v101;
            if (v101 == nullptr) {
              goto LABEL_112;
            }
          }
        }
        while (2) {
          v102 = v101[1];
          if (v102 != v98) {
            if (v102 >= v94) {
              v102 %= v94;
            }
            if (v102 != v99) {
              goto LABEL_112;
            }
          }
          else if (*((_DWORD*)v101 + 4) == (_DWORD)v98) {
            break;
          }
          v101 = (__int64*)*v101;
          if (v101 == nullptr) {
            goto LABEL_112;
          }
          continue;
        }
      LABEL_137:
        v104 = v101[3];
        if (v104 == 0) {
          goto LABEL_112;
        }
        v106 = (_QWORD*)v7[22];
        v105 = v7[23];
        if ((unsigned __int64)v106 < v105) {
          *v106 = v104;
          v87 = (__int64)(v106 + 1);
          goto LABEL_111;
        }
        v107 = v7[21];
        v108 = (char*)v106 - v107;
        v109 = ((__int64)v106 - v107) >> 3;
        v110 = v109 + 1;
        if ((unsigned __int64)(v109 + 1) >> 61 == 0) {
          v111 = v105 - v107;
          if (v111 >> 2 > v110) {
            v110 = v111 >> 2;
          }
          if ((unsigned __int64)v111 >= 0x7FFFFFFFFFFFFFF8LL) {
            v112 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v112 = v110;
          }
          if (v112 == 0) {
            v113 = 0;
            goto LABEL_149;
          }
          if (v112 >> 61 != 0) {
            goto LABEL_171;
          }
          v113 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v112, 16, 0);
        LABEL_149:
          v114 = v113 + 8 * v112;
          v115 = (char*)v106 - v107;
          v116 = (__int64)&v108[v113 + -8 * v109];
          *(_QWORD*)&v108[v113] = v104;
          v87 = (__int64)&v108[v113 + 8];
          result = (_QWORD*)memcpy(v116, v107, v115);
          v7[21] = v116;
          v7[22] = v87;
          v7[23] = v114;
          if (v107 != 0) {
            v117 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v117 = 56;
            }
            result = (_QWORD*)nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v117);
          }
        LABEL_111:
          v7[22] = v87;
        LABEL_112:
          if (++v86 != v85) {
            continue;
          }
        LABEL_154:
          result = v124;
          v126 = 0;
          v124[0] = GameData_202c2e8;
          v124[1] = &v126;
          v125 = v124;
          v118 = *(_QWORD*)(GameData_21c9700 + 8);
          v119 = *(__int64**)(v118 + 48);
          v120 = *(__int64**)(v118 + 56);
          if (v119 == v120) {
            goto LABEL_167;
          }
          do {
            v121 = *v119;
            v122 = *(_QWORD*)(*v119 + 280);
            if (v122 != 0 &&
                ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v122 + 24LL))(
                     v122) != 1 ||
                 ((*(__int64 (**)(_QWORD))(**(_QWORD**)(v121 + 280) + 112LL))(
                      *(_QWORD*)(v121 + 280)) &
                  1) == 0) &&
                *(_QWORD*)(v121 + 280) != 0) {
              v127 = v121;
              if (v125 == nullptr) {
                GameRoutine_60a310(0, a2);
              }
              (*(void (**)(_QWORD*, __int64*))(*v125 + 48LL))(v125, &v127);
            }
            ++v119;
          } while (v119 != v120);
          result = v125;
          if (v125 == v124) {
          LABEL_167:
            v123 = 32;
            return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v123))(
                result, a2);
          }
          else if (v125 != nullptr) {
            v123 = 40;
            return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v123))(
                result, a2);
          }
          return result;
        }
        break;
      }
    }
    break;
  }
  GameRoutine_8875e0(result);
}

#pragma GCC visibility pop
