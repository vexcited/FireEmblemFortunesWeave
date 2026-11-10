#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a71f30(_QWORD, _QWORD);
__int64 GameRoutine_a73160(_QWORD);
__int64 GameRoutine_a733a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a73480(_QWORD);
__int64 GameRoutine_a9b980(void);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_world_JobContext_Drain(_QWORD);
__int64 fw_world_JobContext_Wait(_QWORD, _QWORD);
__int64 fw_world_JobQueue_Submit(_QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_os_ClearLightEvent(_QWORD);
extern _UNKNOWN GameData_1c20018;
extern _UNKNOWN GameData_21fdeb0;
extern _UNKNOWN GameData_226b918;
extern _UNKNOWN* GameData_1f50948;
extern __int64 (*GameData_1fc0568[])();
extern __int64 (*GameData_1fc05b0[])();
extern __int64 (*GameData_21323b0)();
extern __int64 GameData_212e408[7];
extern __int64 GameData_21323e8[4];
extern __int64 GameData_21fdea0;
extern __int64 GameData_21fdea8;
extern __int64 GameData_226b8f8;
extern __int64 GameData_226b900;
extern __int64 GameData_226b908;
extern __int64 GameData_226b910;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(void);
void __attribute__((noreturn)) GameRoutine_a71b80(void);
__int64 Scene_a70560(_QWORD* a1, unsigned int a2, __int64* a3);
__int64 Scene_a70700(_QWORD* a1, unsigned int a2, __int64* a3, int a4, int a5);
__int64 Scene_a70a20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6);
__int64 Scene_a70ec0(__int64 result, unsigned __int64 a2);
__int64 gfx_render_Scene_BuildRenderer(__int64 a1, __int64 (**a2)(), int* a3);
__int64 gfx_render_Scene_Update_lambda0_Invoke(__int64 result, __int64 a2,
                                               atomic_uint* a3);
__int64 Scene_a72100(__int64 a1);
_QWORD* gfx_render_Scene_BuildRenderer_lambda0_Invoke(_QWORD* result,
                                                      atomic_uint** a2);

__int64 Scene_a70560(_QWORD* a1, unsigned int a2, __int64* a3)
{
  _DWORD* v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  _BYTE* v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  __int64 v16;
  __int64 v17;
  _BYTE* v18;

  if (*a3 == 0) {
    return 0;
  }
  if (*(_BYTE*)(*a3 + 32) != 1) {
    return 0;
  }
  v5 = (_DWORD*)(a1[2] + 32LL * a2);
  *v5 |= 1u;
  if (((*(__int64 (**)(_QWORD, _QWORD))(*(_QWORD*)*a1 + 88LL))(
           *a1, *(unsigned int*)(*a3 + 36)) &
       1) == 0) {
    return 0;
  }
  *v5 |= 2u;
  v6 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 112LL))(*a1);
  v7 = *(__int64**)v6;
  v8 = *(__int64**)(v6 + 8);
  if (*(__int64**)v6 != v8) {
    v9 = GameData_212e408[0];
    do {
      v10 = (_BYTE*)v7[2];
      v11 = *a3;
      v12 = *v7;
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fdeb0,
                                memory_order_acquire) &
           1) == 0) {
        v18 = v10;
        v16 = v12;
        v17 = v11;
        v13 = __cxa_guard_acquire(&GameData_21fdeb0);
        v12 = v16;
        v11 = v17;
        v14 = v13;
        v10 = v18;
        if (v14 != 0) {
          GameData_21fdea0 = v9;
          GameData_21fdea8 = (__int64)"OcclusionCulling";
          __cxa_guard_release(&GameData_21fdeb0);
          v12 = v16;
          v11 = v17;
          v10 = v18;
        }
      }
      if ((*(_QWORD*)(v12 + 8) != *(_QWORD*)(GameData_21fdea0 + 8) ||
           (*(_BYTE*)(v11 + 104) & 1) != 0) &&
          v10[8] == 1 &&
          ((*(__int64 (**)(_BYTE*, __int64))(*(_QWORD*)v10 + 24LL))(v10,
                                                                    *a3 + 48) &
           1) == 0) {
        return 0;
      }
      v7 += 3;
    } while (v7 != v8);
  }
  *v5 |= 4u;
  return 1;
}

__int64 Scene_a70700(_QWORD* a1, unsigned int a2, __int64* a3, int a4, int a5)
{
  __int64 v5;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  _BYTE* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  bool v28;
  unsigned int v30;
  __int64* v31;
  int v32;
  int v33;

  v5 = a1[2];
  v10 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 112LL))(*a1);
  v11 = *(__int64**)v10;
  v31 = *(__int64**)(v10 + 8);
  if (*(__int64**)v10 == v31) {
    return 0;
  }
  if (a4 >= a5) {
    v24 = v11 + 3;
    v25 = GameData_212e408[0];
    while (1) {
      v26 = *a3;
      v27 = *(v24 - 3);
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fdeb0,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21fdeb0) != 0) {
        GameData_21fdea0 = v25;
        GameData_21fdea8 = (__int64)"OcclusionCulling";
        __cxa_guard_release(&GameData_21fdeb0);
      }
      if (*(_QWORD*)(v27 + 8) != *(_QWORD*)(GameData_21fdea0 + 8)) {
        break;
      }
      v30 = 0;
      if ((*(_BYTE*)(v26 + 104) & 1) == 0) {
        v28 = v24 == v31;
        v24 += 3;
        if (!v28) {
          continue;
        }
      }
      return v30;
    }
    return 0;
  }
  v12 = v5 + 32LL * a2;
  v30 = 0;
  v32 = a5;
  v33 = -a5;
  while (2) {
    v13 = (_BYTE*)v11[2];
    v14 = *a3;
    v15 = *v11;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fdeb0,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21fdeb0) != 0) {
      GameData_21fdea0 = GameData_212e408[0];
      GameData_21fdea8 = (__int64)"OcclusionCulling";
      __cxa_guard_release(&GameData_21fdeb0);
    }
    if (*(_QWORD*)(v15 + 8) == *(_QWORD*)(GameData_21fdea0 + 8) &&
        (*(_BYTE*)(v14 + 104) & 1) == 0) {
      goto LABEL_5;
    }
    v16 = a4;
    v17 = 1;
    do {
      while (1) {
        v18 = *(_QWORD*)(v12 + 8);
        if (v18 != *(_QWORD*)(v12 + 16) && *(_BYTE*)(v18 + (int)v16) != 0) {
          break;
        }
        if (v13[8] == 1 &&
            ((*(__int64 (**)(_BYTE*, __int64))(*(_QWORD*)v13 + 24LL))(
                 v13, *(_QWORD*)(*a3 + 80) + 32 * v16) &
             1) == 0) {
        LABEL_22:
          *(_BYTE*)(*(_QWORD*)(v12 + 8) + (int)v16) = -1;
          ++v30;
          break;
        }
        if (a5 != (_DWORD)v16 + 1) {
          v19 = 0;
          v20 = (v16 << 32) + 0x100000000LL;
          v21 = 32 * v16 + 32;
          while (1) {
            v22 = *(_QWORD*)(v12 + 8);
            if (v22 != *(_QWORD*)(v12 + 16) &&
                *(_BYTE*)(v22 + (v20 >> 32)) != 0) {
              break;
            }
            if (v13[8] == 1 &&
                ((*(__int64 (**)(_BYTE*, __int64))(*(_QWORD*)v13 + 24LL))(
                     v13, *(_QWORD*)(*a3 + 80) + v21) &
                 1) == 0) {
              a5 = v32;
              v17 = 0;
              v16 += v19 + 1;
              goto LABEL_22;
            }
            ++v19;
            v20 += 0x100000000LL;
            v21 += 32;
            if (v33 + (_DWORD)v16 + (_DWORD)v19 == -1) {
              a5 = v32;
              goto LABEL_5;
            }
          }
          a5 = v32;
          v17 = 0;
          v23 = v33 + v16;
          v16 += v19 + 2;
          if (v23 + (_DWORD)v19 != -2) {
            continue;
          }
        }
        goto LABEL_5;
      }
      ++v16;
    } while (a5 != (_DWORD)v16);
    if ((v17 & 1) != 0) {
      return v30;
    }
  LABEL_5:
    v11 += 3;
    if (v11 != v31) {
      continue;
    }
    return v30;
  }
}

__int64 Scene_a70a20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6)
{
  char* v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  char* v13;
  unsigned int v14;
  char* v15;
  char* v16;
  __int64 v17;
  __int64* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  bool v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned int v28;
  char* v29;
  int v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  _QWORD* v34;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64* v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  _QWORD* v43;
  unsigned __int64 v44;
  _QWORD* v45;
  int* v46;
  int* v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  bool v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  int* v62;
  unsigned __int64 v63;
  int v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  int v69;
  __int64 v70;
  __int64 i;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  _QWORD* v79;

  v6 = *(char**)(a1 + 56);
  v7 = *(char**)(a1 + 64);
  if (v6 == v7) {
    v18 = *(__int64**)(a1 + 88);
    v19 = *(_QWORD*)(a1 + 96);
    v20 = *(_QWORD*)(a1 + 104);
    v21 = v19 - (_QWORD)v18;
    v10 = (__int64)(v19 - (_QWORD)v18) >> 4;
    if (v19 >= v20) {
      v31 = v10 + 1;
      if ((unsigned __int64)(v10 + 1) >> 60 != 0) {
        GameRoutine_a71b80();
      }
      v32 = v20 - (_QWORD)v18;
      if (v32 >> 3 > v31) {
        v31 = v32 >> 3;
      }
      if ((unsigned __int64)v32 >= 0x7FFFFFFFFFFFFFF0LL) {
        v33 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v33 = v31;
      }
      if (v33 >> 60 != 0) {
      LABEL_69:
        GameRoutine_60a210(a1);
      }
      v34 = (_QWORD*)a1;
      v36 = fw_memory_g_heap_manager_ptr;
      v37 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v33, 16, 0);
      v38 = v37 + v21;
      *(_QWORD*)v38 = a2;
      *(_WORD*)(v38 + 8) = 0;
      v22 = v37 + v21 + 16;
      if (v18 != (__int64*)v19) {
        v39 = v18;
        v40 = (_QWORD*)(v37 + v21 - 16 * v10);
        do {
          v40[1] = v39[1];
          v41 = *v39;
          v39 += 2;
          *v40 = v41;
          v40 += 2;
        } while (v39 != (__int64*)v19);
      }
      v34[11] = v37 + v21 - 16 * v10;
      v34[12] = v22;
      v34[13] = v37 + 16 * v33;
      if (v18 != nullptr) {
        v42 = 128;
        if (*(_QWORD*)(*(_QWORD*)v36 + 200LL) == 0) {
          v42 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v36 + v42, v18);
      }
      a1 = (__int64)v34;
    }
    else {
      *(_QWORD*)v19 = a2;
      *(_WORD*)(v19 + 8) = 0;
      v22 = v19 + 16;
    }
    *(_QWORD*)(a1 + 96) = v22;
    v8 = (unsigned int)(v21 >> 4);
  }
  else {
    v8 = *(unsigned int*)v6;
    v9 = (v7 - v6) >> 2;
    LODWORD(v10) = *(_DWORD*)v6;
    if (v9 >= 2) {
      v11 = 0;
      v12 = *(char**)(a1 + 56);
      do {
        v16 = &v12[4 * v11];
        v17 = (2 * v11) | 1;
        v15 = v16 + 4;
        v11 = 2 * v11 + 2;
        if (v11 < v9) {
          v14 = *((_DWORD*)v16 + 2);
          v13 = v16 + 8;
          if (*((_DWORD*)v13 - 1) <= v14) {
            v11 = v17;
          }
          else {
            v15 = v13;
          }
        }
        else {
          v11 = v17;
        }
        *(_DWORD*)v12 = *(_DWORD*)v15;
        v12 = v15;
      } while (v11 <= (__int64)((unsigned __int64)(v9 - 2) >> 1));
      v23 = v7 - 4;
      if (v15 == v23) {
        *(_DWORD*)v15 = v10;
      }
      else {
        *(_DWORD*)v15 = *(_DWORD*)v23;
        *(_DWORD*)v23 = v10;
        v24 = (v15 - v6 + 4) >> 2;
        v25 = v24 < 2;
        v26 = v24 - 2;
        if (!v25) {
          v27 = v26 >> 1;
          v28 = *(_DWORD*)v15;
          v29 = &v6[4 * v27];
          v30 = *(_DWORD*)v29;
          if (*(_DWORD*)v29 > *(_DWORD*)v15) {
            do {
              *(_DWORD*)v15 = v30;
              v15 = v29;
              if (v27 == 0) {
                break;
              }
              v27 = (v27 - 1) >> 1;
              v29 = &v6[4 * v27];
              v30 = *(_DWORD*)v29;
            } while (*(_DWORD*)v29 > v28);
            *(_DWORD*)v15 = v28;
          }
        }
      }
    }
    *(_QWORD*)(a1 + 64) -= 4LL;
    *(_QWORD*)(*(_QWORD*)(a1 + 88) + 16 * v8) = a2;
  }
  v76 = a1;
  v74 = *(unsigned __int16*)(*(_QWORD*)(a1 + 88) + 16 * v8 + 8);
  v75 = v8;
  v73 = *(unsigned __int16*)(a1 + 50);
  v43 = *(_QWORD**)(a1 + 112);
  v79 = *(_QWORD**)(a1 + 120);
  if (v43 != v79) {
    v44 = (unsigned int)(v10 + 1);
    v45 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      v46 = (int*)v43[2];
      v47 = (int*)v43[3];
      v48 = ((char*)v47 - (char*)v46) >> 5;
      v49 = v44 - v48;
      if (v44 > v48) {
        v50 = v43[4];
        if (v49 <= (v50 - (__int64)v47) >> 5) {
          a1 = memset(v43[3], 0, 32 * v49, a4, a5, a6);
          v43[3] = &v47[8 * v49];
        }
        else {
          v51 = v50 - (_QWORD)v46;
          v52 = v51 >> 4;
          if (v51 >> 4 <= v44) {
            v52 = v44;
          }
          v53 = (unsigned __int64)v51 >= 0x7FFFFFFFFFFFFFE0LL;
          v54 = 0x7FFFFFFFFFFFFFFLL;
          if (!v53) {
            v54 = v52;
          }
          if (v54 >> 59 != 0) {
            goto LABEL_69;
          }
          v78 = 32 * v54;
          v55 = fw_memory_HeapManager_Allocate(*v45, 32 * v54, 16, 0);
          v56 = v55 + (char*)v47 - (char*)v46;
          v57 = 32 * v49;
          v77 = v55;
          a1 = memset(v56, 0, v57, v58, v59, v60);
          v61 = v56 - 32 * v48;
          if (v46 != v47) {
            v62 = v46;
            v63 = v61;
            do {
              v64 = *v62;
              *(_QWORD*)(v63 + 16) = 0;
              *(_QWORD*)(v63 + 24) = 0;
              *(_DWORD*)v63 = v64;
              *(_QWORD*)(v63 + 8) = *((_QWORD*)v62 + 1);
              *(_QWORD*)(v63 + 16) = *((_QWORD*)v62 + 2);
              *(_QWORD*)(v63 + 24) = *((_QWORD*)v62 + 3);
              *((_QWORD*)v62 + 2) = 0;
              *((_QWORD*)v62 + 3) = 0;
              *((_QWORD*)v62 + 1) = 0;
              v62 += 8;
              v63 += 32LL;
            } while (v62 != v47);
            do {
              v65 = *((_QWORD*)v46 + 1);
              if (v65 != 0) {
                *((_QWORD*)v46 + 2) = v65;
                if (*(_QWORD*)(*v45 + 200LL) != 0) {
                  v66 = 128;
                }
                else {
                  v66 = 56;
                }
                a1 = nn_mem_StandardAllocator_Free(*v45 + v66, v65);
              }
              v46 += 8;
            } while (v46 != v47);
            v46 = (int*)v43[2];
          }
          v43[2] = v61;
          v43[3] = v56 + v57;
          v43[4] = v77 + v78;
          if (v46 != nullptr) {
            if (*(_QWORD*)(*v45 + 200LL) != 0) {
              v67 = 128;
            }
            else {
              v67 = 56;
            }
            a1 = nn_mem_StandardAllocator_Free(*v45 + v67, v46);
          }
        }
      }
      v43 += 6;
    } while (v43 != v79);
  }
  v68 = *(_QWORD*)(v76 + 296);
  v69 = *(_DWORD*)(v68 + 16);
  if (v69 >= 1) {
    v70 = 0;
    for (i = 0; i < v69; ++i) {
      if ((unsigned int)(v75 + 1) >
          (unsigned __int64)((__int64)(*(_QWORD*)(*(_QWORD*)(v68 + 80) + v70 +
                                                  8) -
                                       *(_QWORD*)(*(_QWORD*)(v68 + 80) +
                                                  v70)) >>
                             5)) {
        GameRoutine_a9b980();
        v69 = *(_DWORD*)(v68 + 16);
      }
      v70 += 24;
    }
  }
  return (v73 << 48) | (v74 << 32) | v75;
}

__int64 Scene_a70ec0(__int64 result, unsigned __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int16 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  bool v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned int* v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int* v32;
  unsigned int v33;
  int v34;
  __int64 v35;
  __int64 v36;

  if (*(unsigned __int16*)(result + 50) == HIWORD(a2)) {
    v35 = v2;
    v36 = v3;
    v4 = *(_QWORD*)(result + 88);
    v5 = (_QWORD*)result;
    if (*(unsigned __int16*)(v4 + 16LL * (unsigned int)a2 + 8) == WORD2(a2)) {
      v6 = *(_QWORD*)(result + 296);
      v7 = (unsigned int)a2;
      v8 = v4 + 16LL * (unsigned int)a2;
      v34 = a2;
      if (*(int*)(v6 + 16) >= 1) {
        v9 = 0;
        v10 = 0;
        v11 = fw_memory_g_heap_manager_ptr;
        do {
          v12 = (_QWORD*)(*(_QWORD*)(*(_QWORD*)(v6 + 80) + v9) + 32 * v7);
          v13 = v12[1];
          *v12 = &GameData_1c20018;
          v12[2] = v13;
          if (v12[3] != v13) {
            v12[2] = 0;
            v12[3] = 0;
            v12[1] = 0;
            if (v13 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) != 0) {
                v14 = 128;
              }
              else {
                v14 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v14, v13);
            }
          }
          ++v10;
          v9 += 24;
        } while (v10 < *(int*)(v6 + 16));
      }
      v15 = v5[14];
      v16 = v5[15];
      if (v15 != v16) {
        v17 = fw_memory_g_heap_manager_ptr;
        do {
          v18 = *(_QWORD*)(v15 + 16) + 32 * v7;
          v20 = (_QWORD*)(v18 + 8);
          v19 = *(_QWORD*)(v18 + 8);
          *(_DWORD*)v18 = 0;
          if (v19 != 0) {
            *(_QWORD*)(v18 + 16) = v19;
            if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) != 0) {
              v21 = 128;
            }
            else {
              v21 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v17 + v21, v19);
          }
          v15 += 48;
          v20[1] = 0;
          v20[2] = 0;
          *v20 = 0;
        } while (v15 != v16);
      }
      v22 = *(_WORD*)(v8 + 8);
      *(_QWORD*)v8 = 0;
      *(_WORD*)(v8 + 8) = v22 + 1;
      result = GameRoutine_a71f30(v5 + 7, &v34);
      v23 = v5[7];
      v24 = v5[8];
      v25 = (v24 - v23) >> 2;
      v26 = v25 < 2;
      v27 = v25 - 2;
      if (!v26) {
        v28 = v27 >> 1;
        v31 = *(_DWORD*)(v24 - 4);
        v29 = (unsigned int*)(v24 - 4);
        v30 = v31;
        v32 = (unsigned int*)(v23 + 4 * v28);
        v33 = *v32;
        if (*v32 > v31) {
          do {
            *v29 = v33;
            v29 = v32;
            if (v28 == 0) {
              break;
            }
            v28 = (v28 - 1) >> 1;
            v32 = (unsigned int*)(v23 + 4 * v28);
            v33 = *v32;
          } while (*v32 > v30);
          *v29 = v30;
        }
      }
    }
  }
  return result;
}

__int64 gfx_render_Scene_BuildRenderer(__int64 a1, __int64 (**a2)(), int* a3)
{
  __int64 result;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 (***v17)();
  __int64 v18;
  __int64 v19;
  int* v20;
  __int64 (**v21)();
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  _DWORD* v27;
  int v28;
  unsigned __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 v33;
  int* v34;
  __int64 (**v35)();
  __int64 v36;
  __int64 (*v37)();
  __int64 v38;
  __int64 v39;
  _QWORD v40[2];
  __int64 (**v41)();
  __int64 v42;
  int* v43;
  __int64 (**v44)();
  __int64 (***v45)();
  __int64 v46;
  int* v47;
  __int64 (**v48)();

  result = GameRoutine_a73160(a2);
  if (*(_BYTE*)(a1 + 324) == 1) {
    v7 = (_QWORD*)GameData_21323e8[0];
    GameRoutine_a733a0(
        a2,
        (unsigned int)((*(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2088LL) -
                        *(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2080LL)) >>
                       3) +
            1,
        (int)((__int64)(*(_QWORD*)(a1 + 96) - *(_QWORD*)(a1 + 88)) >> 4));
    fw_world_JobContext_Drain(*v7);
    v8 = *v7;
    v9 = *v7 + 32LL;
    do {
      v10 = *(_DWORD*)(v8 + 8);
      v11 = (v10 + 1) & 0xFFFFFF;
      if (v10 + 1 <= 0) {
        v11 = -(-(v10 + 1) & 0xFFFFFF);
      }
      *(_DWORD*)(v8 + 8) = v11;
      v12 = atomic_load((unsigned __int64*)(v9 + 32LL * (v10 & 0x3F)));
      if (v12 != 0) {
        v10 = -1;
      }
    } while (v10 < 0);
    v13 = v10 | 0xC0000000;
    v14 = (unsigned __int64*)(v9 + 32LL * (v10 & 0x3F));
    nn_os_ClearLightEvent(v14 + 1);
    v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         80, 16, 0);
    *(_DWORD*)(v15 + 16) = 0;
    *(_QWORD*)(v15 + 20) = 0;
    v16 = v15;
    *(_QWORD*)(v15 + 64) = 0;
    *(_QWORD*)v15 = GameData_1fc0568;
    *(_QWORD*)(v15 + 8) = 0;
    v17 = (__int64 (***)())v14[3];
    v14[3] = v16;
    if (v17 != nullptr) {
      ((void (*)(__int64 (***)()))(*v17)[1])(v17);
      v17 = *(__int64 (****)())(v16 + 64);
    }
    atomic_store(v13, v14);
    v18 = v16 + 32;
    v43 = a3;
    v44 = a2;
    *(_QWORD*)(v16 + 8) = v8;
    *(_DWORD*)(v16 + 16) = v13;
    v41 = GameData_1fc05b0;
    v42 = a1;
    if (v17 == (__int64 (***)())(v16 + 32)) {
      v45 = nullptr;
      v46 = v42;
      v47 = v43;
      v48 = v44;
      ((void (*)(__int64 (***)(), __int64 (***)()))(*v17)[3])(v17, &v41);
      (*(void (**)(_QWORD))(**(_QWORD**)(v16 + 64) + 32LL))(
          *(_QWORD*)(v16 + 64));
      v33 = v46;
      v34 = v47;
      v45 = &v41;
      v17 = &v41;
      *(_QWORD*)(v16 + 64) = v18;
      *(_QWORD*)(v16 + 32) = GameData_1fc05b0;
      *(_QWORD*)(v16 + 40) = v33;
      v35 = v48;
      *(_QWORD*)(v16 + 48) = v34;
      *(_QWORD*)(v16 + 56) = v35;
    }
    else {
      v19 = v42;
      v20 = v43;
      v21 = v44;
      v45 = v17;
      *(_QWORD*)(v16 + 64) = v18;
      *(_QWORD*)(v16 + 32) = GameData_1fc05b0;
      *(_QWORD*)(v16 + 40) = v19;
      *(_QWORD*)(v16 + 48) = v20;
      *(_QWORD*)(v16 + 56) = v21;
      if (v17 != &v41) {
        if (v17 == nullptr) {
        LABEL_30:
          fw_world_JobQueue_Submit(*(_QWORD*)(v8 + 16), v13);
          fw_world_JobContext_Wait(*v7, v13);
          return GameRoutine_a73480(a2);
        }
        v22 = 5;
      LABEL_29:
        (*v17)[v22]();
        goto LABEL_30;
      }
    }
    v22 = 4;
    goto LABEL_29;
  }
  v23 = *(_QWORD*)(a1 + 112) + 48LL * *a3;
  v24 = *(unsigned __int8*)(v23 + 44);
  if (v24 == 1) {
    v25 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 296) + 80LL) +
                     24LL * *(int*)(v23 + 40));
  }
  else {
    v25 = 0;
  }
  v26 = *((_QWORD*)a3 + 1);
  v27 = *(_DWORD**)(v23 + 16);
  v28 = *((unsigned __int8*)a3 + 4);
  LODWORD(v43) = 0;
  v46 = v26;
  v47 = nullptr;
  v41 = a2;
  v42 = 0xFFFFFFFFLL;
  v29 = *(_QWORD*)(a1 + 96) - *(_QWORD*)(a1 + 88);
  if ((int)(v29 >> 4) >= 1) {
    v30 = (v29 >> 4) & 0x7FFFFFFF;
    if (v28 != 0) {
      v31 = -8;
    }
    else {
      v31 = -4;
    }
    if ((v24 & 1) != 0) {
      v32 = 0;
      do {
        result = *(_QWORD*)(*(_QWORD*)(a1 + 88) + v32);
        if (result != 0 && (*v27 | v31) == 0xFFFFFFFF) {
          v40[0] = v27;
          v40[1] = v25;
          result =
              (*(__int64 (**)(__int64, __int64 (***)(), __int64*, _QWORD*))(
                  *(_QWORD*)result + 32LL))(result, &v41, &v46, v40);
        }
        --v30;
        v25 += 32;
        v27 += 8;
        v32 += 16;
      } while (v30 != 0);
    }
    else {
      v36 = 0;
      v37 = GameData_21323b0;
      do {
        v39 = *(_QWORD*)(a1 + 88);
        if (*(_QWORD*)(v39 + v36) != 0 && (*v27 | v31) == 0xFFFFFFFF) {
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_226b918,
                                    memory_order_acquire) &
               1) == 0 &&
              (unsigned int)__cxa_guard_acquire(&GameData_226b918) != 0) {
            GameData_226b908 = 0;
            GameData_226b910 = 0;
            GameData_226b8f8 = (__int64)&GameData_1c20018;
            GameData_226b900 = 0;
            GameRoutine_2b0(v37, &GameData_226b8f8, &GameData_1f50948);
            __cxa_guard_release(&GameData_226b918);
          }
          v38 = *(_QWORD*)(v39 + v36);
          v40[0] = v27;
          v40[1] = &GameData_226b8f8;
          result =
              (*(__int64 (**)(__int64, __int64 (***)(), __int64*, _QWORD*))(
                  *(_QWORD*)v38 + 32LL))(v38, &v41, &v46, v40);
        }
        --v30;
        v27 += 8;
        v36 += 16;
      } while (v30 != 0);
    }
  }
  return result;
}

__int64 gfx_render_Scene_Update_lambda0_Invoke(__int64 result, __int64 a2,
                                               atomic_uint* a3)
{
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  int i;
  signed int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v3 = *(_QWORD*)(result + 8);
  v4 = (*(_QWORD*)(v3 + 216) - *(_QWORD*)(v3 + 208)) >> 3;
  if ((int)v4 /
          (int)(((*(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2088LL) -
                  *(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2080LL)) >>
                 3) +
                1) /
          2 <=
      1) {
    v5 = 1;
  }
  else {
    v5 = (int)v4 /
         (int)(((*(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2088LL) -
                 *(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2080LL)) >>
                3) +
               1) /
         2;
  }
  for (i = atomic_fetch_add(a3, v5); i < (int)v4;
       i = atomic_fetch_add(a3, v5)) {
    if (i < (int)v4) {
      v8 = i + v5;
      v9 = i;
      if ((int)(i + v5) >= (int)v4) {
        v8 = v4;
      }
      v10 = v8;
      do {
        v11 = *(_QWORD*)(*(_QWORD*)(v3 + 208) + 8 * v9);
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        result =
            (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v11 + 24LL))(v11, 0);
        ++v9;
      } while (v9 < v10);
    }
    if (v5 >> 1 <= 1) {
      v5 = 1;
    }
    else {
      v5 >>= 1;
    }
  }
  return result;
}

__int64 Scene_a72100(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;

  v1 = a1 + 20;
  v2 = *(_QWORD*)(a1 + 64);
  v4 = v1;
  if (v2 == 0) {
    GameRoutine_60a310();
  }
  return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v2 + 48LL))(v2, &v4);
}

_QWORD* gfx_render_Scene_BuildRenderer_lambda0_Invoke(_QWORD* result,
                                                      atomic_uint** a2)
{
  atomic_uint* v2;
  _QWORD* v3;
  unsigned __int64 v4;
  int add;
  unsigned __int64 v6;
  int* v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  int v14;
  int v15;
  atomic_uint* v16;
  unsigned int v17;
  int v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _DWORD* v23;
  __int64 v24;
  unsigned int v25;
  int v26;
  unsigned int* v27;
  atomic_uint* v28;
  unsigned int v29;
  int v30;
  unsigned int v31;
  __int64 v32;
  _DWORD* v33;
  __int64 v34;
  __int64 v35;
  unsigned int v36;
  int v37;
  unsigned int* v38;
  __int64 v39;
  __int64 v40;
  int v41;
  unsigned int* v42;
  _QWORD v43[2];
  _QWORD* v44;
  unsigned int v45;
  __int64 v46;
  _QWORD v47[2];

  v2 = *a2;
  v3 = (_QWORD*)result[1];
  v4 = *(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2088LL) -
       *(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2080LL);
  add = atomic_fetch_add((atomic_uint*)((char*)*a2 + 4), 1u);
  v6 = v4 >> 3;
  if (add <= (int)v6) {
    v7 = (int*)result[2];
    v41 = v6 + 1;
    v8 = v3[14] + 48LL * *v7;
    v9 = *(unsigned __int8*)(v8 + 44);
    v39 = v9 == 1
              ? *(_QWORD*)(*(_QWORD*)(v3[37] + 80LL) + 24LL * *(int*)(v8 + 40))
              : 0LL;
    v40 = *(_QWORD*)(v8 + 16);
    v10 = *((unsigned __int8*)v7 + 4);
    v11 = *((_QWORD*)v7 + 1);
    v45 = add;
    v46 = 0;
    v47[0] = v11;
    v47[1] = 0;
    v44 = (_QWORD*)result[3];
    v12 = (v3[12] - v3[11]) >> 4;
    v13 = (int)v12 / v41 / 8 <= 1 ? 1 : (int)v12 / v41 / 8;
    v14 = atomic_fetch_add(v2, v13);
    if (v14 < (int)v12) {
      v42 = (unsigned int*)v2;
      if (v10 != 0) {
        v15 = -8;
      }
      else {
        v15 = -4;
      }
      if ((v9 & 1) != 0) {
        do {
          if ((int)(v14 + v13) >= (int)v12) {
            v19 = v12;
          }
          else {
            v19 = v14 + v13;
          }
          if (v14 < (int)v12) {
            v20 = 32LL * v14;
            v21 = 16LL * v14;
            v22 = v39 + v20;
            v23 = (_DWORD*)(v40 + v20);
            do {
              v24 = v3[11];
              result = *(_QWORD**)(v24 + v21);
              if (result != nullptr && (*v23 | v15) == 0xFFFFFFFF) {
                if ((v45 & 0x80000000) == 0) {
                  LODWORD(v46) = v14;
                  HIDWORD(v46) = *(_DWORD*)(*v44 + 32LL * v45 + 28);
                  result = *(_QWORD**)(v24 + v21);
                }
                v43[0] = v23;
                v43[1] = v22;
                result = (_QWORD*)(*(__int64 (**)(_QWORD*, _QWORD**, _QWORD*,
                                                  _QWORD*))(*result + 32LL))(
                    result, &v44, v47, v43);
                if ((v45 & 0x80000000) == 0) {
                  v25 = HIDWORD(v46);
                  v26 = *(_DWORD*)(*v44 + 32LL * v45 + 28);
                  if (SHIDWORD(v46) < v26) {
                    v27 = (unsigned int*)(v44[17] + 12LL * (int)v46);
                    *v27 = v45;
                    v27[1] = v25;
                    v27[2] = v26;
                  }
                }
              }
              ++v14;
              v22 += 32;
              v23 += 8;
              v21 += 16;
            } while (v19 != v14);
          }
          if (v13 >= 2) {
            v16 = (atomic_uint*)v42;
            v17 = atomic_load(v42);
            v18 = (int)(v12 - v17) / v41 / 8;
            if (v18 <= 1) {
              v13 = 1;
            }
            else {
              v13 = v18;
            }
          }
          else {
            v16 = (atomic_uint*)v42;
            v13 = 1;
          }
          v14 = atomic_fetch_add(v16, v13);
        } while (v14 < (int)v12);
      }
      else {
        do {
          if ((int)(v14 + v13) >= (int)v12) {
            v31 = v12;
          }
          else {
            v31 = v14 + v13;
          }
          if (v14 < (int)v12) {
            v32 = 16LL * v14;
            v33 = (_DWORD*)(v40 + 32LL * v14);
            do {
              v34 = v3[11];
              if (*(_QWORD*)(v34 + v32) != 0 && (*v33 | v15) == 0xFFFFFFFF) {
                if ((atomic_load_explicit(
                         (atomic_uchar* volatile)&GameData_226b918,
                         memory_order_acquire) &
                     1) == 0 &&
                    (unsigned int)__cxa_guard_acquire(&GameData_226b918) != 0) {
                  GameData_226b908 = 0;
                  GameData_226b910 = 0;
                  GameData_226b8f8 = (__int64)&GameData_1c20018;
                  GameData_226b900 = 0;
                  GameRoutine_2b0(GameData_21323b0, &GameData_226b8f8,
                                  &GameData_1f50948);
                  __cxa_guard_release(&GameData_226b918);
                }
                if ((v45 & 0x80000000) == 0) {
                  LODWORD(v46) = v14;
                  HIDWORD(v46) = *(_DWORD*)(*v44 + 32LL * v45 + 28);
                }
                v35 = *(_QWORD*)(v34 + v32);
                v43[0] = v33;
                v43[1] = &GameData_226b8f8;
                result = (_QWORD*)(*(
                    __int64 (**)(__int64, _QWORD**, _QWORD*, _QWORD*))(
                    *(_QWORD*)v35 + 32LL))(v35, &v44, v47, v43);
                if ((v45 & 0x80000000) == 0) {
                  v36 = HIDWORD(v46);
                  v37 = *(_DWORD*)(*v44 + 32LL * v45 + 28);
                  if (SHIDWORD(v46) < v37) {
                    v38 = (unsigned int*)(v44[17] + 12LL * (int)v46);
                    *v38 = v45;
                    v38[1] = v36;
                    v38[2] = v37;
                  }
                }
              }
              ++v14;
              v33 += 8;
              v32 += 16;
            } while (v31 != v14);
          }
          if (v13 > 1) {
            v28 = (atomic_uint*)v42;
            v29 = atomic_load(v42);
            v30 = (int)(v12 - v29) / v41 / 8;
            if (v30 <= 1) {
              v13 = 1;
            }
            else {
              v13 = v30;
            }
          }
          else {
            v28 = (atomic_uint*)v42;
            v13 = 1;
          }
          v14 = atomic_fetch_add(v28, v13);
        } while (v14 < (int)v12);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
