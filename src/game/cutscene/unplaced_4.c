#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* GameRoutine_6380e0(__int64, __int64**);
__int64 GameRoutine_64be60();
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memchr(__int64, int, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
extern _DWORD GameData_1c0947c[3];
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
float task_618640(int, float result, float, float, float);
unsigned __int8* GameRoutine_a539c0(unsigned __int8* result, __int64,
                                    unsigned __int64);
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) fs_60a230();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void std___1_locale_Destroy_locale(__int64);
__int64 game_cutscene_17fb660(__int64 result, _OWORD* a2, float a3, float a4);
void game_cutscene_17fcd20(__int64 a1, __int64 a2, __int64 a3, char a4);

__int64 game_cutscene_17fb660(__int64 result, _OWORD* a2, float a3, float a4)
{

#pragma clang fp contract(off)
  float v5;
  __int128 v6;
  unsigned int v7;
  float v8;
  unsigned int v9;
  __int64 v10;
  int v11;

  *(_QWORD*)result = a2;
  *(float*)(result + 8) = a3;
  *(float*)(result + 12) = a4;
  v5 = 0x1.0000000000000p+0f;
  v6 = *a2;
  v7 = (int)COERCE_FLOAT(*a2);
  if (v7 <= 0xFFFFFFFD) {
    v8 = a4 - a3;
    v5 = 0x0.0p+0f;
    if (v8 > 0x0.0p+0f) {
      v5 = 0x1.0000000000000p+0f;
      if (v8 < *((float*)&v6 + 1)) {
        v9 = v7 - 1;
        v10 = result;
        if (v9 > 2) {
          v11 = 0;
        }
        else {
          v11 = GameData_1c0947c[v9];
        }
        v5 = task_618640(v11, 0x0.0p+0f, 0x1.0000000000000p+0f, v8,
                         *((float*)&v6 + 1));
        result = v10;
      }
    }
  }
  *(float*)(result + 16) = v5;
  return result;
}

void game_cutscene_17fcd20(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  _BYTE* v10;
  __int64 v11;
  char v12;
  __int64 v13;
  int v14;
  char* v15;
  signed __int64 v16;
  char* v17;
  unsigned __int64 v18;
  __int64 v19;
  char* v20;
  unsigned __int64 v21;
  unsigned __int8* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int8* v27;
  int v28;
  int v29;
  __int64 v30;
  unsigned __int8* v31;
  unsigned __int8* v32;
  int v33;
  int v34;
  unsigned __int8* v35;
  int v36;
  int v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 i;
  unsigned __int8* v43;
  int v44;
  char* v45;
  int v46;
  __int64 v47;
  _QWORD v48[5];
  struct {
    _QWORD v49[2];
    unsigned __int64 v50;
    __int64 (*v51)();
    __int64 v52;
  } v49_;
  struct {
    _BYTE v53[256];
    _BYTE* v54;
  } v53_;
  struct {
    __int64* v55;
    __int64 v56;
    char* v57;
    __int64 v58;
  } v55_;
  struct {
    char v59[8];
    char v60;
  } v59_;
  struct {
    _QWORD v61[2];
    int v62;
    char gap412_[4];
    __int64 v63;
    __int64 v64;
  } v61_;

  *(_BYTE*)a1 = 0;
  v48[0] = a2;
  v49_.v52 = 0;
  v49_.v50 = 0;
  v49_.v51 = GameRoutine_64be60;
  *(_QWORD*)(a1 + 4) = -1;
  v61_.v62 = 0;
  v59_.v59[0] = 0;
  v59_.v60 = 0;
  v49_.v49[0] = v53_.v53;
  v49_.v49[1] = 256;
  v48[1] = a3;
  v48[2] = 13;
  v53_.v54 = v53_.v53;
  v61_.v61[0] = "CutScene{}";
  v61_.v61[1] = "";
  v61_.v63 = 0;
  v61_.v64 = 1;
  v55_.v57 = (char*)v48;
  v55_.v58 = 13;
  v55_.v55 = v49_.v49;
  v55_.v56 = 1;
  GameRoutine_6380e0((__int64)v61_.v61, &v55_.v55);
  if (v59_.v60 == 1) {
    std___1_locale_Destroy_locale((__int64)v59_.v59);
  }
  v6 = v49_.v50;
  if (v49_.v50 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v7 = (__int64)v53_.v54;
  if (v49_.v50 >= 0x17) {
    if ((v49_.v50 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v49_.v50 | 7) + 1;
    }
    v8 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16,
                                               0);
    v55_.v56 = v6;
    v55_.v57 = v8;
    v55_.v55 = (__int64*)(v9 | 1);
  }
  else {
    LOBYTE(v55_.v55) = 2 * v49_.v50;
    v8 = (char*)&v55_.v55 + 1;
    if (v49_.v50 == 0) {
      goto LABEL_12;
    }
  }
  memmove((__int64)v8, v7, v6);
LABEL_12:
  v10 = v53_.v54;
  v8[v6] = 0;
  if (v10 != v53_.v53 && v10 != nullptr) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v11,
                                  (__int64)v10);
  }
  v12 = (char)v55_.v55;
  v13 = (__int64)v55_.v57;
  v14 = (unsigned __int8)v55_.v55 & 1;
  if (v14 != 0) {
    v15 = v55_.v57;
  }
  else {
    v15 = (char*)&v55_.v55 + 1;
  }
  if (((unsigned __int8)v55_.v55 & 1) != 0) {
    v16 = v55_.v56;
  }
  else {
    v16 = (unsigned __int64)(unsigned __int8)v55_.v55 >> 1;
  }
  if (v16 >= 1) {
    v17 = &v15[v16];
    v18 = v16;
    v19 = (__int64)v15;
    do {
      v20 = (char*)memchr(v19, 95, v18);
      if (v20 == nullptr) {
        break;
      }
      if (*v20 == 95) {
        if (v20 != v17) {
          v21 = v20 - v15;
          if (v20 - v15 != -1) {
            if (v21 > v16) {
              fs_60a230();
            }
            GameRoutine_a539c0((unsigned __int8*)&v55_.v55, v21, 1u);
            v12 = (char)v55_.v55;
            v13 = (__int64)v55_.v57;
            v14 = (unsigned __int8)v55_.v55 & 1;
          }
        }
        break;
      }
      v19 = (__int64)(v20 + 1);
      v18 = (unsigned __int64)&v17[-v19];
    } while ((__int64)&v17[-v19] >= 1);
  }
  if (v14 != 0) {
    v22 = (unsigned __int8*)v13;
  }
  else {
    v22 = (unsigned __int8*)&v55_.v55 + 1;
  }
  v23 = *eft_g_effectSystem_ptr[0];
  v24 = *(_QWORD*)(*eft_g_effectSystem_ptr[0] + 112);
  v25 = *(unsigned int*)(v24 + 48);
  if ((int)v25 < 1) {
  LABEL_44:
    LODWORD(v30) = -1;
  }
  else {
    v26 = *(_QWORD*)(v24 + 40);
    v29 = *v22;
    v27 = v22 + 1;
    v28 = v29;
    v30 = 0;
    while (1) {
      v31 = *(unsigned __int8**)(v26 + 8 * v30);
      v32 = v27;
      v33 = v28;
      v36 = *v31;
      v35 = v31 + 1;
      v34 = v36;
      do {
        if (v34 != v33) {
          break;
        }
        v37 = *v35++;
        v34 = v37;
        v38 = *v32++;
        v33 = v38;
        if (v34 == 0) {
          break;
        }
      } while (v33 != 0);
      if (v34 == v33) {
        break;
      }
      if (++v30 == v25) {
        goto LABEL_44;
      }
    }
  }
  *(_DWORD*)(a1 + 4) = v30;
  if ((a4 & 1) != 0) {
    v39 = *(_QWORD*)(v23 + 112);
    v40 = *(unsigned int*)(v39 + 48);
    if ((int)v40 >= 1) {
      v41 = *(_QWORD*)(v39 + 40);
      for (i = 0; v40 != i; ++i) {
        v43 = *(unsigned __int8**)(v41 + 8 * i);
        v44 = *v43;
        if (v44 == 67) {
          v44 = v43[1];
          if (v44 == 117) {
            v44 = v43[2];
            if (v43[2] == 0) {
              v45 = "tScene";
            LABEL_79:
              v46 = (unsigned __int8)*v45;
              v44 = 0;
              goto LABEL_80;
            }
            if (v44 == 116) {
              v44 = v43[3];
              if (v43[3] == 0) {
                v45 = "Scene";
                goto LABEL_79;
              }
              if (v44 == 83) {
                v44 = v43[4];
                if (v43[4] == 0) {
                  v45 = "cene";
                  goto LABEL_79;
                }
                if (v44 == 99) {
                  v44 = v43[5];
                  if (v43[5] == 0) {
                    v45 = "ene";
                    goto LABEL_79;
                  }
                  if (v44 != 101) {
                    goto LABEL_73;
                  }
                  v44 = v43[6];
                  if (v43[6] == 0) {
                    v45 = "ne";
                    goto LABEL_79;
                  }
                  if (v44 != 110) {
                    v46 = 110;
                    goto LABEL_80;
                  }
                  v44 = v43[7];
                  if (v43[7] == 0) {
                    v45 = "e";
                    goto LABEL_79;
                  }
                  if (v44 == 101) {
                    v44 = v43[8];
                    if (v43[8] == 0) {
                      v45 = "";
                      goto LABEL_79;
                    }
                    v46 = 0;
                  }
                  else {
                  LABEL_73:
                    v46 = 101;
                  }
                }
                else {
                  v46 = 99;
                }
              }
              else {
                v46 = 83;
              }
            }
            else {
              v46 = 116;
            }
          }
          else {
            v45 = "utScene";
            if (v44 == 0) {
              goto LABEL_79;
            }
            v46 = 117;
          }
        }
        else {
          v46 = 67;
        }
      LABEL_80:
        if (v44 == v46) {
          goto LABEL_83;
        }
      }
    }
    LODWORD(i) = -1;
  LABEL_83:
    *(_DWORD*)(a1 + 8) = i;
  }
  if ((v12 & 1) != 0 && v13 != 0) {
    v47 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v47 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v47,
                                  v13);
  }
}

#pragma GCC visibility pop
