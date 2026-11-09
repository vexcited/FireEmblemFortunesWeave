#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1415980(_QWORD* result);
__int64 GameRoutine_1416c80(_QWORD, _QWORD);
__int64 GameRoutine_7a88a0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strlen(_QWORD);
extern __int64 (*game_facility_SceneCharacterLookAt_vtable[])();
extern __int64 GameData_212dce8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
_QWORD* SceneCharacterLookAt_Destructor(__int64 a1);
__int64 SceneCharacterLookAt_1416860(__int64 a1, _QWORD* a2);
__int64 SceneCharacterLookAt_1416a00(__int64 a1, __int64 a2, float a3,
                                     float a4);
__int64 GameRoutine_14172a0(_QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 SceneCharacterLookAt_1416c80(__int64* a1, _QWORD* a2);

_QWORD* SceneCharacterLookAt_Destructor(__int64 a1)
{
  _QWORD* result;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  unsigned __int64 v6;
  _QWORD* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  *(_QWORD*)a1 = game_facility_SceneCharacterLookAt_vtable;
  result = GameRoutine_1415980((_QWORD*)(a1 + 168));
  v3 = *(_QWORD**)(a1 + 176);
  v4 = *(_QWORD**)(a1 + 184);
  if (v4 == v3) {
    v5 = (_QWORD*)(a1 + 208);
    v14 = *(_QWORD**)(a1 + 176);
    goto LABEL_21;
  }
  v5 = (_QWORD*)(a1 + 208);
  v6 = *(_QWORD*)(a1 + 200);
  v7 = &v3[v6 / 0x33];
  v8 = *v7 + 80 * (v6 % 0x33);
  v9 = v3[(*(_QWORD*)(a1 + 208) + v6) / 0x33] +
       80 * ((*(_QWORD*)(a1 + 208) + v6) % 0x33);
  if (v8 == v9) {
    goto LABEL_19;
  }
  v10 = fw_memory_g_heap_manager_ptr;
  do {
    if ((*(_BYTE*)(v8 + 56) & 1) != 0 && *(_QWORD*)(v8 + 72) != 0) {
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) != 0) {
        v11 = 128;
      }
      else {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v11);
    }
    result = *(_QWORD**)(v8 + 32);
    if (result == (_QWORD*)v8) {
      v12 = 32;
    }
    else {
      if (result == nullptr) {
        goto LABEL_16;
      }
      v12 = 40;
    }
    result = (_QWORD*)(*(__int64 (**)(void))(*result + v12))();
  LABEL_16:
    v8 += 80LL;
    if (v8 - *v7 == 4080) {
      v13 = v7[1];
      ++v7;
      v8 = v13;
    }
  } while (v8 != v9);
  v3 = *(_QWORD**)(a1 + 176);
  v4 = *(_QWORD**)(a1 + 184);

LABEL_19:
  v14 = v4;

LABEL_21:
  *v5 = 0;
  v15 = v14 - v3;
  if (v15 >= 3) {
    v16 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v3 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) != 0) {
          v17 = 128;
        }
        else {
          v17 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v17);
        v3 = *(_QWORD**)(a1 + 176);
        v4 = *(_QWORD**)(a1 + 184);
        v14 = v4;
      }
      *(_QWORD*)(a1 + 176) = ++v3;
      v15 = v14 - v3;
    } while (v15 > 2);
  }
  if (v15 == 1) {
    v18 = 25;
  LABEL_33:
    *(_QWORD*)(a1 + 200) = v18;
  }
  else if (v15 == 2) {
    v18 = 51;
    goto LABEL_33;
  }
  if (v3 != v4) {
    v19 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v3 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) != 0) {
          v20 = 128;
        }
        else {
          v20 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v19 + v20);
      }
      ++v3;
    } while (v3 != v4);
    v21 = *(_QWORD*)(a1 + 184);
    v22 = *(_QWORD*)(a1 + 176) - v21;
    if (v22 != 0) {
      *(_QWORD*)(a1 + 184) = v21 + ((v22 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  if (*(_QWORD*)(a1 + 168) != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v23);
  }
  if ((*(_BYTE*)(a1 + 144) & 1) != 0 && *(_QWORD*)(a1 + 160) != 0) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
  }
  return result;
}

__int64 SceneCharacterLookAt_1416860(__int64 a1, _QWORD* a2)
{
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v22;
  unsigned __int64 v23;
  char* v24;
  _QWORD v25[2];

  v3 = *a2;
  v4 = *(_QWORD*)GameData_212dce8;
  v5 = strlen(*a2);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v5);
  }
  v6 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v5 | 7) + 1;
    }
    v7 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v8, 16,
                                               0);
    v23 = v6;
    v24 = v7;
    v22 = v8 | 1;
    goto LABEL_9;
  }
  LOBYTE(v22) = 2 * v5;
  v7 = (char*)&v22 + 1;
  if (v5 != 0) {
  LABEL_9:
    memmove(v7, v3, v6);
  }
  v7[v6] = 0;
  v9 = *(__int64**)(v4 + 160);
  v10 = *(__int64**)(v4 + 168);
  if (v9 == v10) {
    v11 = 0;
    if ((v22 & 1) == 0) {
      goto LABEL_27;
    }
    goto LABEL_23;
  }
  while (1) {
    v12 = *v9++;
    v11 = v12;
    v13 = *(_QWORD*)(v12 + 40);
    v14 = v12 + 25;
    v15 = (*(_BYTE*)(v12 + 24) & 1) != 0 ? v13 : v14;
    v16 = v24;
    v17 = (unsigned __int64)(unsigned __int8)v22 >> 1;
    if ((v22 & 1) != 0) {
      v17 = v23;
    }
    else {
      v16 = (char*)&v22 + 1;
    }
    v25[0] = v16;
    v25[1] = v17;
    v18 = game_HashString(v15);
    if (v18 == GameRoutine_7a88a0(v25)) {
      break;
    }
    if (v9 == v10) {
      v11 = 0;
      break;
    }
  }
  if ((v22 & 1) != 0) {
  LABEL_23:
    if (v24 != nullptr) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v19);
    }
  }

LABEL_27:
  if (v11 == *(_QWORD*)(a1 + 8) || v11 == 0) {
    return 0;
  }
  else {
    return v11;
  }
}

__int64 SceneCharacterLookAt_1416a00(__int64 a1, __int64 a2, float a3, float a4)
{
  __int64 v5;
  float v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  _BYTE v12[32];
  _BYTE* v13;
  float v14;
  float v15;
  __int16 v16;
  __int64 v17;

  v5 = *(_QWORD*)(a2 + 32);
  if (v5 != 0) {
    if (v5 == a2) {
      v13 = v12;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 24LL))(v5, v12);
    }
    else {
      v13 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    }
  }
  else {
    v13 = nullptr;
  }
  v8 = 1.0;
  v16 = 0;
  if (a3 <= 1.0) {
    v8 = a3;
  }
  if (a3 < 1.1755e-38) {
    v8 = 1.1755e-38;
  }
  v14 = v8;
  v15 = a4;
  GameRoutine_1416c80(a1 + 168, v12);
  if ((v16 & 1) != 0 && v17 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
  }
  result = (__int64)v13;
  if (v13 == v12) {
    v11 = 32;
  }
  else {
    if (v13 == nullptr) {
      return result;
    }
    v11 = 40;
  }
  return (*(__int64 (**)(void))(*(_QWORD*)v13 + v11))();
}

__int64 SceneCharacterLookAt_1416c80(__int64* a1, _QWORD* a2)
{
  char* v2;
  char* v3;
  __int64* v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  bool v10;
  unsigned __int64 v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  _QWORD* v15;
  __int64* v16;
  char* v17;
  char* v18;
  char* v19;
  signed __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  char* v26;
  char* v27;
  __int64* v28;
  char* v29;
  unsigned __int64 v30;
  __int64* v31;
  __int64 v32;
  char* v33;
  char* v34;
  __int64 v35;
  __int64 v36;
  char* v37;
  __int64 v38;
  signed __int64 v39;
  bool v40;
  signed __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  signed __int64 v45;
  _QWORD* v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  char* v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  signed __int64 v54;
  char* v55;
  _QWORD* v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  _QWORD* v60;
  __int64 result;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  signed __int64 v68;
  unsigned __int64 v69;
  _QWORD* v70;
  __int64* v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;

  v2 = (char*)a1[1];
  v3 = (char*)a1[2];
  v5 = a1;
  v6 = v3 - v2;
  v7 = (v3 - v2) >> 3;
  if (v3 == v2) {
    v8 = 0;
  }
  else {
    v8 = 17 * (v7 + ((v3 - v2) >> 2)) - 1;
  }
  v9 = a1[4];
  if (v8 == a1[5] + v9) {
    v10 = v9 >= 0x33;
    v11 = v9 - 51;
    if (v10) {
      a1[4] = v11;
      v12 = *(_QWORD*)v2;
      a1[1] = (__int64)(v2 + 8);
      v76 = v12;
    }
    else {
      v13 = (char*)a1[3];
      v14 = (__int64)&v13[-*a1];
      if (v6 >= v14) {
        v23 = v14 >> 2;
        if (v13 == (char*)*a1) {
          v24 = 1;
        }
        else {
          v24 = v23;
        }
        if (v24 >> 61 == 0) {
          v25 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v24, 16, 0);
          v26 = (char*)(v25 + v6);
          v27 = (char*)(v25 + 8 * v24);
          a1 = (__int64*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 4080, 16, 0);
          if (v6 == 8 * v24) {
            if (v3 == v2) {
              v31 = a1;
              v28 = (__int64*)fw_memory_g_heap_manager_ptr;
              v26 = (char*)fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
              v27 = v26 + 8;
              v32 = 128;
              if (*(_QWORD*)(*v28 + 200) == 0) {
                v32 = 56;
              }
              nn_mem_StandardAllocator_Free(*v28 + v32);
              a1 = v31;
              v2 = (char*)v5[1];
              v3 = (char*)v5[2];
              v25 = (__int64)v26;
            }
            else {
              v28 = (__int64*)fw_memory_g_heap_manager_ptr;
              v26 -= 8 * ((v7 + 1 + ((unsigned __int64)(v7 + 1) >> 63)) >> 1);
            }
          }
          else {
            v28 = &fw_memory_g_heap_manager;
          }
          *(_QWORD*)v26 = a1;
          v33 = v26 + 8;
          if (v3 != v2) {
            while (1) {
              if (v26 == (char*)v25) {
                if (v33 >= v27) {
                  if (v27 == v26) {
                    v42 = 1;
                  }
                  else {
                    v42 = (v27 - v26) >> 2;
                  }
                  if (v42 >> 61 != 0) {
                    goto LABEL_91;
                  }
                  v43 = fw_memory_HeapManager_Allocate(*v28, 8 * v42, 16, 0);
                  v44 = v43;
                  v37 = (char*)(v43 + ((2 * v42 + 6) & 0xFFFFFFFFFFFFFFF8LL));
                  v45 = v33 - v26;
                  v40 = v33 == v26;
                  v33 = v37;
                  if (!v40) {
                    v33 = &v37[v45];
                    v46 =
                        (_QWORD*)(v43 + ((2 * v42 + 6) & 0xFFFFFFFFFFFFFFF8LL));
                    do {
                      v47 = *(_QWORD*)v26;
                      v26 += 8;
                      v45 -= 8LL;
                      *v46++ = v47;
                    } while (v45 != 0);
                  }
                  v27 = (char*)(v43 + 8 * v42);
                  v48 = 128;
                  if (*(_QWORD*)(*v28 + 200) == 0) {
                    v48 = 56;
                  }
                  a1 = (__int64*)nn_mem_StandardAllocator_Free(*v28 + v48);
                  v25 = v44;
                }
                else {
                  v39 = v33 - v26;
                  v41 = v33 - v26;
                  v40 = v33 == v26;
                  v33 +=
                      8 *
                      ((((v27 - v33) >> 3) + 1 +
                        ((unsigned __int64)(((v27 - v33) >> 3) + 1) >> 63)) >>
                       1);
                  v37 = &v33[-v39];
                  if (!v40) {
                    a1 = (__int64*)memmove(&v33[-v39], v26, v41);
                  }
                }
              }
              else {
                v37 = v26;
              }
              v38 = *((_QWORD*)v3 - 1);
              v3 -= 8;
              *((_QWORD*)v37 - 1) = v38;
              v34 = v37 - 8;
              v26 = v34;
              if (v3 == (char*)v5[1]) {
                goto LABEL_31;
              }
            }
          }
          v34 = v26;
        LABEL_31:
          v35 = *v5;
          *v5 = v25;
          v5[1] = (__int64)v34;
          v5[2] = (__int64)v33;
          v5[3] = (__int64)v27;
          if (v35 != 0) {
            v36 = 128;
            if (*(_QWORD*)(*v28 + 200) == 0) {
              v36 = 56;
            }
            nn_mem_StandardAllocator_Free(*v28 + v36);
          }
          goto LABEL_67;
        }
        goto LABEL_91;
      }
      v15 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      a1 = (__int64*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4080, 16, 0);
      v16 = a1;
      if (v13 != v3) {
        v17 = (char*)v5[2];
        if (v17 != (char*)v5[3]) {
        LABEL_66:
          *(_QWORD*)v17 = v16;
          v5[2] += 8;
          goto LABEL_67;
        }
        v19 = (char*)*v5;
        v18 = (char*)v5[1];
        if ((unsigned __int64)v18 > *v5) {
          v20 = v17 - v18;
          v21 = ((__int64)&v18[-*v5] >> 3) + 1;
          v22 = &v18[-8 * (v21 / 2)];
          if (v20 != 0) {
            memmove(&v18[-8 * (v21 / 2)], v5[1], v20);
            v18 = (char*)v5[1];
          }
          v17 = &v22[v20];
          v5[1] = (__int64)&v18[8 * (v21 / -2)];
          v5[2] = (__int64)v17;
          goto LABEL_66;
        }
        if (v17 == v19) {
          v52 = 1;
        }
        else {
          v52 = (v17 - v19) >> 2;
        }
        if (v52 >> 61 == 0) {
          v53 = fw_memory_HeapManager_Allocate(*v15, 8 * v52, 16, 0);
          v54 = v17 - v18;
          v40 = v17 == v18;
          v55 = (char*)(v53 + 8 * (v52 >> 2));
          v17 = v55;
          if (!v40) {
            v17 = &v55[v54];
            v56 = (_QWORD*)(v53 + 8 * (v52 >> 2));
            do {
              v57 = *(_QWORD*)v18;
              v18 += 8;
              v54 -= 8LL;
              *v56++ = v57;
            } while (v54 != 0);
          }
          *v5 = v53;
          v5[1] = (__int64)v55;
          v5[2] = (__int64)v17;
          v5[3] = v53 + 8 * v52;
          if (v19 != nullptr) {
            v58 = 128;
            if (*(_QWORD*)(*v15 + 200LL) == 0) {
              v58 = 56;
            }
            nn_mem_StandardAllocator_Free(*v15 + v58);
            v17 = (char*)v5[2];
          }
          goto LABEL_66;
        }
      LABEL_91:
        GameRoutine_60a210(a1);
      }
      v29 = (char*)v5[1];
      if (v29 == (char*)*v5) {
        v50 = (char*)v5[2];
        v49 = v5[3];
        if ((unsigned __int64)v50 >= v49) {
          v64 = v49 - (_QWORD)v29;
          v40 = v64 == 0;
          v65 = v64 >> 2;
          if (v40) {
            v66 = 1;
          }
          else {
            v66 = v65;
          }
          if (v66 >> 61 != 0) {
            goto LABEL_91;
          }
          v67 = fw_memory_HeapManager_Allocate(*v15, 8 * v66, 16, 0);
          v68 = v50 - v29;
          v30 = v67 + ((2 * v66 + 6) & 0xFFFFFFFFFFFFFFF8LL);
          v69 = v30;
          if (v50 != v29) {
            v69 = v30 + v68;
            v70 = (_QWORD*)(v67 + ((2 * v66 + 6) & 0xFFFFFFFFFFFFFFF8LL));
            v71 = (__int64*)v29;
            do {
              v72 = *v71++;
              v68 -= 8LL;
              *v70++ = v72;
            } while (v68 != 0);
          }
          *v5 = v67;
          v5[1] = v30;
          v5[2] = v69;
          v5[3] = v67 + 8 * v66;
          if (v29 != nullptr) {
            v73 = 128;
            if (*(_QWORD*)(*v15 + 200LL) == 0) {
              v73 = 56;
            }
            nn_mem_StandardAllocator_Free(*v15 + v73);
            v30 = v5[1];
          }
        }
        else {
          v51 = (((__int64)(v49 - (_QWORD)v50) >> 3) + 1) / 2;
          v30 = (unsigned __int64)&v29[8 * v51];
          if (v50 != v29) {
            memmove(&v29[8 * v51], v5[1], v50 - v29);
            v50 = (char*)v5[2];
          }
          v5[1] = v30;
          v5[2] = (__int64)&v50[8 * v51];
        }
      }
      else {
        v30 = v5[1];
      }
      *(_QWORD*)(v30 - 8) = v16;
      v74 = v5[1];
      v5[1] = v74 - 8;
      v75 = *(_QWORD*)(v74 - 8);
      v5[1] = v74;
      v76 = v75;
    }
    GameRoutine_14172a0(v5, &v76);
  LABEL_67:
    v2 = (char*)v5[1];
    v3 = (char*)v5[2];
  }
  if (v3 == v2) {
    v60 = nullptr;
    result = a2[4];
    if (result != 0) {
    LABEL_70:
      if ((_QWORD*)result == a2) {
        v60[4] = v60;
        result = (*(__int64 (**)(_QWORD, _QWORD*))(*(_QWORD*)a2[4] + 24LL))(
            a2[4], v60);
      }
      else {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        v60[4] = result;
      }
      goto LABEL_75;
    }
  }
  else {
    v59 = v5[5] + v5[4];
    v60 = (_QWORD*)(*(_QWORD*)&v2[8 * (v59 / 0x33)] + 80 * (v59 % 0x33));
    result = a2[4];
    if (result != 0) {
      goto LABEL_70;
    }
  }
  v60[4] = 0;

LABEL_75:
  v60[6] = a2[6];
  if ((a2[7] & 1) != 0) {
    result = fw_text_String_CopyTerminated(v60 + 7, a2[9], a2[8]);
  }
  else {
    v62 = a2[7];
    v63 = a2[9];
    v60[8] = a2[8];
    v60[9] = v63;
    v60[7] = v62;
  }
  ++v5[5];
  return result;
}

#pragma GCC visibility pop
