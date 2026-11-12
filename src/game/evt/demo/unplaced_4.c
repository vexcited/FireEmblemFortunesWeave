#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64* GameHr_10aa000(__int64* result, _QWORD*);
__int64* GameRoutine_1152360(_QWORD*, unsigned __int8*);
__int64* GameRoutine_1152500(_QWORD*, unsigned __int8*);
__int64 EveryFrameProc_10aa5e0(__int64, __int64, float);
__int64 GameRoutine_112ea40(__int64, _BYTE*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
double cos(double);
double sin(double);
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83800;
extern __int64 (*GameData_2013520[])();
extern __int64* GameData_212d460[6];
extern __int64* GameData_212fc38[2];
extern __int64 GameData_212c638;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern char GameData_1a9f09e;
extern float game_script_math_kDirCorrections[91];
float strtof(const char*, __int64);
unsigned __int64 strlen(const char*);
void GameRoutine_11c4fc0(__int64, __int64, __int64, float);
void __attribute__((noreturn)) String_60a1d0();
void game_11c2f00(__int64, __int64, unsigned __int64, float);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_evt_demo_1156900(__int64 a1);
__int64* game_evt_demo_115b9e0(__int64 a1);
float game_evt_demo_11c7720(__int64 a1, float32x4_t* a2, float32x4_t* a3,
                            int8x16_t* a4, int8x16_t* a5, const char* a6,
                            _DWORD* a7, _DWORD* a8, float a9, float a10,
                            float a11, float a12);

__int64 game_evt_demo_1156900(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  const char* v11;
  const char* v12;
  const char* v13;
  float v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  const char* v17;
  const char* v18;
  const char* v19;
  float v20;
  __int64* v21;
  int v22;
  int v23;
  __int64* v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  _BYTE* v31;
  __int64 v32;
  int v33;
  float v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  _QWORD* v47;
  _QWORD* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  struct {
    __int64 v59;
    unsigned __int64 v60;
    __int64 v61;
  } v59_;
  struct {
    __int64 v62;
    unsigned __int64 v63;
    _BYTE* v64;
  } v62_;
  struct {
    __int64 v65;
    unsigned __int64 v66;
    __int64 v67;
    float v68;
  } v65_;
  struct {
    char v69[32];
    __int64 v70;
  } v69_;
  struct {
    __int64 v71;
    unsigned __int64 v72;
    __int64 v73;
  } v71_;
  struct {
    __int64 v74;
    unsigned __int64 v75;
    _BYTE* v76;
  } v74_;
  struct {
    __int64 v77;
    unsigned __int64 v78;
    __int64 v79;
    float v80;
  } v77_;
  struct {
    __int64 v81;
    unsigned __int64 v82;
    __int64 v83;
  } v81_;
  struct {
    __int64 v84;
    unsigned __int64 v85;
    _BYTE* v86;
  } v84_;
  struct {
    __int64 v87;
    unsigned __int64 v88;
    __int64 v89;
  } v87_;

  v1 = *(_QWORD*)(a1 + 120);
  if ((*(_BYTE*)v1 & 1) != 0) {
    fw_text_String_CopyTerminated(&v87_.v87, *(_QWORD*)(v1 + 16),
                                  *(_QWORD*)(v1 + 8));
    v1 = *(_QWORD*)(a1 + 120);
  }
  else {
    v3 = *(_QWORD*)v1;
    v4 = *(_QWORD*)(v1 + 16);
    v87_.v88 = *(_QWORD*)(v1 + 8);
    v87_.v89 = v4;
    v87_.v87 = v3;
  }
  if ((*(_BYTE*)(v1 + 24) & 1) != 0) {
    fw_text_String_CopyTerminated(&v84_.v84, *(_QWORD*)(v1 + 40),
                                  *(_QWORD*)(v1 + 32));
    v1 = *(_QWORD*)(a1 + 120);
  }
  else {
    v5 = *(_QWORD*)(v1 + 32);
    v6 = *(_QWORD*)(v1 + 40);
    v84_.v84 = *(_QWORD*)(v1 + 24);
    v84_.v85 = v5;
    v84_.v86 = (_BYTE*)v6;
  }
  if ((*(_BYTE*)(v1 + 48) & 1) != 0) {
    fw_text_String_CopyTerminated(&v81_.v81, *(_QWORD*)(v1 + 64),
                                  *(_QWORD*)(v1 + 56));
    v1 = *(_QWORD*)(a1 + 120);
  }
  else {
    v7 = *(_QWORD*)(v1 + 56);
    v8 = *(_QWORD*)(v1 + 64);
    v81_.v81 = *(_QWORD*)(v1 + 48);
    v81_.v82 = v7;
    v81_.v83 = v8;
  }
  v9 = *(unsigned __int8*)(v1 + 72);
  v10 = *(_QWORD*)(v1 + 80);
  if ((v9 & 1) == 0) {
    v10 = v9 >> 1;
  }
  if (v10 != 0) {
    v11 = *(const char**)(v1 + 88);
    v12 = (const char*)(v1 + 73);
    v71_.v71 = 0;
    if ((v9 & 1) != 0) {
      v13 = v11;
    }
    else {
      v13 = v12;
    }
    v14 = strtof(v13, (__int64)&v71_.v71);
    if (*(_BYTE*)v71_.v71 != 0) {
      if (*(_BYTE*)v71_.v71 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v71_.v71) != 0) {
          v14 = 0x1.0000000000000p+0f;
        }
      }
      else {
        v14 = 0x1.0000000000000p+0f;
      }
    }
    v1 = *(_QWORD*)(a1 + 120);
  }
  else {
    v14 = 0x1.0000000000000p+0f;
  }
  v15 = *(unsigned __int8*)(v1 + 96);
  v16 = *(_QWORD*)(v1 + 104);
  if ((v15 & 1) == 0) {
    v16 = v15 >> 1;
  }
  if (v16 != 0) {
    v17 = *(const char**)(v1 + 112);
    v18 = (const char*)(v1 + 97);
    v71_.v71 = 0;
    if ((v15 & 1) != 0) {
      v19 = v17;
    }
    else {
      v19 = v18;
    }
    v20 = strtof(v19, (__int64)&v71_.v71);
    if (*(_BYTE*)v71_.v71 == 0) {
      goto LABEL_36;
    }
    if (*(_BYTE*)v71_.v71 == 102) {
      if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v71_.v71) != 0) {
        v20 = 0x0.0p+0f;
      }
    LABEL_36:
      v21 = GameData_212fc38[0];
      if ((*GameData_212d460[0] == 0 ||
           (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) == 0) &&
          game_ProcGameSkipView_instance_ != 0 &&
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
        v22 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
        v23 = (v22 & 8) != 0 ? 2 : 3;
        if ((v23 & v22) == 0) {
          if (*GameData_212fc38[0] != 0) {
            v28 = GameRoutine_1152360((_QWORD*)(*GameData_212fc38[0] + 560),
                                      (unsigned __int8*)&v87_.v87);
            if (v28 != nullptr) {
              v29 = v28[5];
              if (v29 != 0) {
                if ((*(_BYTE*)(v29 + 48) & 1) != 0) {
                  v30 = *(_QWORD*)(v29 + 64);
                }
                else {
                  v30 = v29 + 49;
                }
                if ((v84_.v84 & 1) != 0) {
                  v31 = v84_.v86;
                }
                else {
                  v31 = (char*)&v84_.v84 + 1;
                }
                v32 = GameRoutine_112ea40(v30, v31);
                if (v32 != 0) {
                  v33 = *(unsigned __int16*)(v32 + 16);
                }
                else {
                  v33 = -1;
                }
                LODWORD(v27) = 0;
                *(_DWORD*)(v29 + 232) = v33;
                goto LABEL_118;
              }
            }
          }
        LABEL_117:
          LODWORD(v27) = 0;
          goto LABEL_118;
        }
      }
      if (*GameData_212fc38[0] == 0) {
        goto LABEL_117;
      }
      v24 = GameRoutine_1152360((_QWORD*)(*GameData_212fc38[0] + 560),
                                (unsigned __int8*)&v87_.v87);
      if (v24 == nullptr) {
        goto LABEL_117;
      }
      v25 = v24[5];
      if (v25 == 0) {
        goto LABEL_117;
      }
      if (*(_QWORD*)(v25 + 136) == 0) {
        goto LABEL_117;
      }
      if (*v21 == 0) {
        goto LABEL_117;
      }
      v26 = GameRoutine_1152360((_QWORD*)(*v21 + 560),
                                (unsigned __int8*)&v87_.v87);
      if (v26 == nullptr) {
        goto LABEL_117;
      }
      v27 = v26[5];
      if (v27 == 0) {
        goto LABEL_118;
      }
      if (*(_BYTE*)(v27 + 128) != 1) {
        goto LABEL_117;
      }
      if (*(_BYTE*)(v27 + 129) == 1) {
        if (v20 <= 0x0.0p+0f) {
          GameRoutine_11c4fc0(v26[5], (__int64)&v81_.v81, (__int64)&v84_.v84,
                              v14);
        }
        else {
          if ((v87_.v87 & 1) != 0) {
            fw_text_String_CopyTerminated(&v71_.v71, v87_.v89, v87_.v88);
          }
          else {
            v71_.v71 = v87_.v87;
            v71_.v72 = v87_.v88;
            v71_.v73 = v87_.v89;
          }
          if ((v84_.v84 & 1) != 0) {
            fw_text_String_CopyTerminated(&v74_.v74, (__int64)v84_.v86,
                                          v84_.v85);
          }
          else {
            v74_.v74 = v84_.v84;
            v74_.v75 = v84_.v85;
            v74_.v76 = v84_.v86;
          }
          if ((v81_.v81 & 1) != 0) {
            fw_text_String_CopyTerminated(&v77_.v77, v81_.v83, v81_.v82);
          }
          else {
            v77_.v77 = v81_.v81;
            v77_.v78 = v81_.v82;
            v77_.v79 = v81_.v83;
          }
          v77_.v80 = v14;
          if ((v71_.v71 & 1) != 0) {
            fw_text_String_CopyTerminated(&v59_.v59, v71_.v73, v71_.v72);
          }
          else {
            v59_.v59 = v71_.v71;
            v59_.v60 = v71_.v72;
            v59_.v61 = v71_.v73;
          }
          if ((v74_.v74 & 1) != 0) {
            fw_text_String_CopyTerminated(&v62_.v62, (__int64)v74_.v76,
                                          v74_.v75);
          }
          else {
            v62_.v62 = v74_.v74;
            v62_.v63 = v74_.v75;
            v62_.v64 = v74_.v76;
          }
          if ((v77_.v77 & 1) != 0) {
            fw_text_String_CopyTerminated(&v65_.v65, v77_.v79, v77_.v78);
          }
          else {
            v65_.v65 = v77_.v77;
            v65_.v66 = v77_.v78;
            v65_.v67 = v77_.v79;
          }
          v34 = v77_.v80;
          v65_.v68 = v77_.v80;
          v35 = fw_memory_g_heap_manager_ptr;
          v36 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0);
          v37 = v59_.v59;
          v38 = v59_.v60;
          v39 = v65_.v67;
          v40 = v36;
          v59_.v59 = 0;
          v59_.v60 = 0;
          *(_QWORD*)v36 = GameData_2013520;
          *(_QWORD*)(v36 + 8) = v37;
          v41 = v59_.v61;
          v59_.v61 = 0;
          *(_QWORD*)(v36 + 16) = v38;
          *(_QWORD*)(v36 + 24) = v41;
          v42 = v62_.v62;
          v43 = v62_.v63;
          v62_.v62 = 0;
          *(_QWORD*)(v36 + 32) = v42;
          *(_QWORD*)(v36 + 40) = v43;
          v44 = (__int64)v62_.v64;
          v45 = v65_.v65;
          v46 = v65_.v66;
          v62_.v63 = 0;
          v62_.v64 = nullptr;
          v65_.v66 = 0;
          v65_.v67 = 0;
          v65_.v65 = 0;
          *(_QWORD*)(v36 + 64) = v46;
          *(_QWORD*)(v36 + 72) = v39;
          *(_QWORD*)(v36 + 48) = v44;
          *(_QWORD*)(v36 + 56) = v45;
          v47 = (_QWORD*)game_script_hub_g_frame_counter_ptr[0];
          *(float*)(v36 + 80) = v34;
          v69_.v70 = v36;
          v48 = (_QWORD*)EveryFrameProc_10aa5e0(*v47 + 144LL, (__int64)v69_.v69,
                                                v20);
          GameHr_10aa000((__int64*)v27, v48);
          (*(void (**)(__int64))(*(_QWORD*)v40 + 40LL))(v40);
          if ((v65_.v65 & 1) != 0 && v65_.v67 != 0) {
            v49 = 128;
            if (*(_QWORD*)(*(_QWORD*)v35 + 200LL) == 0) {
              v49 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v35 + v49, v65_.v67);
          }
          if ((v62_.v62 & 1) != 0 && v62_.v64 != nullptr) {
            v50 = 128;
            if (*(_QWORD*)(*(_QWORD*)v35 + 200LL) == 0) {
              v50 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v35 + v50,
                                          (__int64)v62_.v64);
          }
          if ((v59_.v59 & 1) != 0 && v59_.v61 != 0) {
            v51 = 128;
            if (*(_QWORD*)(*(_QWORD*)v35 + 200LL) == 0) {
              v51 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v35 + v51, v59_.v61);
          }
          if ((v77_.v77 & 1) != 0 && v77_.v79 != 0) {
            v52 = 128;
            if (*(_QWORD*)(*(_QWORD*)v35 + 200LL) == 0) {
              v52 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v35 + v52, v77_.v79);
          }
          if ((v74_.v74 & 1) != 0 && v74_.v76 != nullptr) {
            v53 = 128;
            if (*(_QWORD*)(*(_QWORD*)v35 + 200LL) == 0) {
              v53 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v35 + v53,
                                          (__int64)v74_.v76);
          }
          if ((v71_.v71 & 1) != 0 && v71_.v73 != 0) {
            v54 = 128;
            if (*(_QWORD*)(*(_QWORD*)v35 + 200LL) == 0) {
              v54 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v35 + v54, v71_.v73);
          }
        }
        goto LABEL_117;
      }
      LODWORD(v27) = 3;
    LABEL_118:
      if ((v81_.v81 & 1) != 0 && v81_.v83 != 0) {
        v55 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v55 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v55, v81_.v83);
      }
      if ((v84_.v84 & 1) != 0 && v84_.v86 != nullptr) {
        v56 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v56 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v56, (__int64)v84_.v86);
      }
      if ((v87_.v87 & 1) != 0 && v87_.v89 != 0) {
        v57 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v57 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v57, v87_.v89);
      }
      return (unsigned int)v27;
    }
  }
  v20 = 0x0.0p+0f;
  goto LABEL_36;
}

__int64* game_evt_demo_115b9e0(__int64 a1)
{

#pragma clang fp contract(off)
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  const char* v9;
  const char* v10;
  const char* v11;
  float v12;
  __int64* result;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  struct {
    __int64 v17[2];
    __int64 v18;
  } v17_;
  _BYTE* v19;

  if ((*GameData_212d460[0] == 0 ||
       (*(_BYTE*)(*GameData_212d460[0] + 206) & 1) == 0) &&
      game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      return nullptr;
    }
  }
  v4 = *(_QWORD*)(a1 + 120);
  if ((*(_BYTE*)v4 & 1) != 0) {
    fw_text_String_CopyTerminated(v17_.v17, *(_QWORD*)(v4 + 16),
                                  *(_QWORD*)(v4 + 8));
    v4 = *(_QWORD*)(a1 + 120);
  }
  else {
    v5 = *(_QWORD*)v4;
    v6 = *(_QWORD*)(v4 + 16);
    v17_.v17[1] = *(_QWORD*)(v4 + 8);
    v17_.v18 = v6;
    v17_.v17[0] = v5;
  }
  v7 = *(unsigned __int8*)(v4 + 24);
  v8 = *(_QWORD*)(v4 + 32);
  if ((v7 & 1) == 0) {
    v8 = v7 >> 1;
  }
  if (v8 != 0) {
    v9 = *(const char**)(v4 + 40);
    v10 = (const char*)(v4 + 25);
    v19 = nullptr;
    if ((v7 & 1) != 0) {
      v11 = v9;
    }
    else {
      v11 = v10;
    }
    v12 = strtof(v11, (__int64)&v19);
    if (*v19 == 0) {
      goto LABEL_24;
    }
    if (*v19 == 102) {
      if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v19) != 0) {
        v12 = 0x0.0p+0f;
      }
    LABEL_24:
      result = GameRoutine_1152500((_QWORD*)(*GameData_212fc38[0] + 608),
                                   (unsigned __int8*)v17_.v17);
      if (result != nullptr) {
        v14 = result[5];
        if (v14 == 0) {
          goto LABEL_33;
        }
        if ((*(_BYTE*)(v14 + 88) & 1) != 0) {
          result = (_QWORD*)(((_UNKNOWN*)0x0LL) + 3);
          if ((v17_.v17[0] & 1) == 0) {
            return result;
          }
          goto LABEL_34;
        }
        if (*(_QWORD*)(v14 + 40) == *(_QWORD*)(v14 + 32)) {
        LABEL_33:
          result = nullptr;
          if ((v17_.v17[0] & 1) == 0) {
            return result;
          }
          goto LABEL_34;
        }
        result = nullptr;
        *(float*)(v14 + 80) = v12;
      }
      if ((v17_.v17[0] & 1) == 0) {
        return result;
      }
    LABEL_34:
      if (v17_.v18 != 0) {
        v15 = (unsigned int)result;
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v17_.v18);
        return (__int64*)v15;
      }
      return result;
    }
  }
  v12 = 0x0.0p+0f;
  goto LABEL_24;
}

float game_evt_demo_11c7720(__int64 a1, float32x4_t* a2, float32x4_t* a3,
                            int8x16_t* a4, int8x16_t* a5, const char* a6,
                            _DWORD* a7, _DWORD* a8, float a9, float a10,
                            float a11, float a12)
{
  float32x4_t v12;
  float32x4_t v22;
  float v23;
  float v24;
  float v25;
  float v26;
  int v27;
  float v28;
  float v29;
  int v30;
  float v31;
  __int128 v32;
  __int128 v33;
  __int128 v34;
  double v35;
  double v36;
  double v37;
  float32x4_t v38;
  unsigned int v39;
  float32x4_t v40;
  unsigned __int64 v41;
  unsigned int v42;
  float32x4_t v43;
  int8x16_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  int8x16_t v49;
  int8x16_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  __int128 v58;
  __int128 v59;
  __int128 v60;
  float v61;
  float v62;
  __int128 v63;
  float32x4_t v64;
  __int128 v65;
  __int128 v66;
  __int128 v67;
  double v68;
  double v69;
  float32x4_t v70;
  float32x4_t v71;
  unsigned int v72;
  unsigned __int64 v73;
  unsigned int v74;
  float32x4_t v75;
  int8x16_t v76;
  float32x4_t v77;
  float32x4_t v78;
  float32x4_t v79;
  float32x4_t v80;
  int8x16_t v81;
  int8x16_t v82;
  float32x4_t v83;
  float32x4_t v84;
  float32x4_t v85;
  float32x4_t v86;
  float32x4_t v87;
  float32x4_t v88;
  float32x4_t v89;
  __int128 v90;
  __int128 v91;
  __int128 v92;
  float v93;
  float v94;
  __int128 v95;
  float v96;
  const char* v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  char* v100;
  __int64 v101;
  char* v102;
  unsigned __int64 v103;
  __int64 v104;
  __int128 v105;
  __int128 v106;
  float result;
  struct {
    __int64 v111;
    unsigned __int64 v112;
    char* v113;
  } v111_;

  v12 = *a2;
  v22 = vsubq_f32(*a3, *a2);
  v23 = fabsf(LANES128(v22).n128_f32[0]);
  v24 = fabsf(LANES128(v22).n128_f32[2]);
  if (v23 <= v24) {
    v28 = 0x0.0p+0f;
    if (LANES128(v22).n128_f32[2] == 0x0.0p+0f) {
      goto LABEL_17;
    }
    v29 = (float)(v23 / v24) * 0x1.6800000000000p+5f;
    if ((float)(v29 + v29) < 0x0.0p+0f) {
      v30 = -(int)(float)(0x1.0000000000000p-1f - (float)(v29 + v29));
    }
    else {
      v30 = (int)(float)((float)(v29 + v29) + 0x1.0000000000000p-1f);
    }
    v28 = v29 * game_script_math_kDirCorrections[v30];
    if (LANES128(v22).n128_f32[2] < 0x0.0p+0f) {
      if (LANES128(v22).n128_f32[0] >= 0x0.0p+0f) {
        goto LABEL_17;
      }
      v31 = 0x1.6800000000000p+8f;
      goto LABEL_14;
    }
    v31 = 0x1.6800000000000p+7f;
    if (LANES128(v22).n128_f32[0] >= 0x0.0p+0f) {
    LABEL_14:
      v28 = v31 - v28;
      goto LABEL_17;
    }
  }
  else {
    v25 = (float)(v24 / v23) * 0x1.6800000000000p+5f;
    v26 = v25 + v25;
    if ((float)(v25 + v25) >= 0x0.0p+0f) {
      v27 = (int)(float)(v26 + 0x1.0000000000000p-1f);
    }
    else {
      v27 = -(int)(float)(0x1.0000000000000p-1f - v26);
    }
    v28 = v25 * game_script_math_kDirCorrections[v27];
    if (LANES128(v22).n128_f32[0] >= 0x0.0p+0f) {
      v31 = 0x1.6800000000000p+6f;
      if (LANES128(v22).n128_f32[2] < 0x0.0p+0f) {
        goto LABEL_14;
      }
    }
    else {
      v31 = 0x1.0e00000000000p+8f;
      if (LANES128(v22).n128_f32[2] >= 0x0.0p+0f) {
        goto LABEL_14;
      }
    }
  }
  v28 = v28 + v31;
LABEL_17:
  *(_QWORD*)(a1 + 80) = LANES128(v12).n128_u64[0];
  v32 = *(_OWORD*)(a1 + 80);
  *(_QWORD*)(a1 + 96) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 104) = 5;
  *(_QWORD*)(a1 + 64) = v32;
  *((_QWORD*)&v32 + 1) = LANES128(v12).n128_u32[2];
  *(_OWORD*)(a1 + 80) = v32;
  v33 = *(_OWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 48) = v33;
  *((_QWORD*)&v33 + 1) = LANES128(v12).n128_u32[2];
  v34 = *(_OWORD*)(a1 + 48);
  *((_QWORD*)&v34 + 1) = LANES128(v12).n128_u32[2];
  v35 = (float)(v28 * -0x1.1df46a0000000p-6f) * 0x1.0000000000000p-1;
  *(_OWORD*)(a1 + 48) = v34;
  *(_OWORD*)(a1 + 64) = v33;
  v36 = cos(v35);
  v37 = sin(v35);
  LANES128(v38).n128_u64[0] = LANES128(*(a4)).n128_u64[0];
  *(float*)&v39 = v36 + PSEUDO_UNFUSED(v37 * 0x0.0p+0);
  LANES128(v40).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(*a4, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(float*)&v41 = PSEUDO_UNFUSED(v37 * -0x0.0p+0) + v36 * 0x0.0p+0;
  *(float*)&v42 = v37 + PSEUDO_UNFUSED(v36 * 0x0.0p+0);
  LANES128(v43).n128_u64[0] = __PAIR64__(v42, v41);
  LANES128(v38).n128_u64[1] = LANES128(v40).n128_u64[0];
  LANES128(v43).n128_u64[1] = __PAIR64__(v39, v41);
  v44 = vmulq_f32(v43, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v43).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(*a4, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v45).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v43).n128_u64[1] = LANES128(v43).n128_u64[0];
  *(int8x8_t*)&LANES128(v45).n128_i8[8] =
      vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v46).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v47 = vmlaq_f32(vmulq_f32(v43, v44), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v38, v45));
  LANES128(v45).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(*a4, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v46).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v44).n128_u64[0]), 1);
  LANES128(v40).n128_u64[1] = LANES128(v45).n128_u64[0];
  LANES128(v45).n128_u64[1] = LANES128(*(a4)).n128_u64[0];
  LANES128(v48).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v48).n128_i8[8] =
      vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v49 = vmlsq_f32(vmlaq_f32(v47, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v45, v46)),
                  v48, v40);
  LANES128(v48).n128_u64[0] = __PAIR64__(v42, v41);
  HIDWORD(v41) = v39;
  LANES128(v44).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v49, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v44).n128_i8[8] =
      vqtbl1_s8(v49, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v50).n128_u64[0] = __PAIR64__(v42, v41);
  LANES128(v45).n128_u64[0] = __PAIR64__(v42, v41);
  LANES128(v50).n128_u64[1] = v41;
  LANES128(v51).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v50, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v52).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v50, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v50).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v50, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v51).n128_u64[1] = LANES128(v51).n128_u64[0];
  LANES128(v45).n128_u64[1] = LANES128(v52).n128_u64[0];
  LANES128(v52).n128_u64[1] = LANES128(v50).n128_u64[0];
  LANES128(v50).n128_u64[1] = LANES128(v48).n128_u64[0];
  v53 = vmlaq_f32(vmulq_f32(v51, v49), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v45, v44));
  LANES128(v44).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v49, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v44).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v49).n128_u64[0]), 1);
  v54 = vmlaq_f32(v53, COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v50, v44));
  LANES128(v50).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v49, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v50).n128_i8[8] =
      vqtbl1_s8(v49, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v55 = vmlsq_f32(v54, v50, v52);
  LANES128(*(a4)).n128_u64[0] = LANES128(v55).n128_u64[0];
  v56 = *a4;
  LANES128(v56).n128_u64[1] = LANES128(v55).n128_u32[2];
  *a4 = v56;
  v57 = vaddq_f32(*a2, v56);
  *a2 = v57;
  if (a11 <= 0x0.0p+0f) {
    *(_QWORD*)(a1 + 80) = LANES128(v57).n128_u64[0];
    v60 = *(_OWORD*)(a1 + 80);
    *(_QWORD*)(a1 + 64) = v60;
    *((_QWORD*)&v60 + 1) = LANES128(v57).n128_u32[2];
    v59 = *(_OWORD*)(a1 + 64);
    *(_QWORD*)(a1 + 48) = v59;
    *((_QWORD*)&v59 + 1) = LANES128(v57).n128_u32[2];
    v63 = *(_OWORD*)(a1 + 48);
    *((_QWORD*)&v63 + 1) = LANES128(v57).n128_u32[2];
    v61 = 0x1.0000000000000p+0f;
    *(_OWORD*)(a1 + 48) = v63;
    v62 = 0x1.0000000000000p+0f;
  }
  else {
    v58 = *(_OWORD*)(a1 + 48);
    *(_QWORD*)(a1 + 80) = LANES128(v57).n128_u64[0];
    *(_QWORD*)(a1 + 64) = v58;
    v59 = *(_OWORD*)(a1 + 64);
    v60 = *(_OWORD*)(a1 + 80);
    *((_QWORD*)&v59 + 1) = DWORD2(v58);
    *((_QWORD*)&v60 + 1) = LANES128(v57).n128_u32[2];
    v61 = 0x0.0p+0f;
    v62 = a11;
  }
  *(_OWORD*)(a1 + 64) = v59;
  *(_OWORD*)(a1 + 80) = v60;
  *(float*)(a1 + 96) = v61;
  *(float*)(a1 + 100) = v62;
  *(_DWORD*)(a1 + 104) = 5;
  v64 = *a3;
  *(_QWORD*)(a1 + 160) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 168) = 5;
  *(_QWORD*)(a1 + 144) = LANES128(v64).n128_u64[0];
  v65 = *(_OWORD*)(a1 + 144);
  *(_QWORD*)(a1 + 128) = v65;
  *((_QWORD*)&v65 + 1) = LANES128(v64).n128_u32[2];
  *(_OWORD*)(a1 + 144) = v65;
  v66 = *(_OWORD*)(a1 + 128);
  *(_QWORD*)(a1 + 112) = v66;
  *((_QWORD*)&v66 + 1) = LANES128(v64).n128_u32[2];
  v67 = *(_OWORD*)(a1 + 112);
  *((_QWORD*)&v67 + 1) = LANES128(v64).n128_u32[2];
  *(_OWORD*)(a1 + 112) = v67;
  *(_OWORD*)(a1 + 128) = v66;
  v68 = cos(v35);
  v69 = sin(v35);
  LANES128(v70).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(*a5, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v71).n128_u64[0] = LANES128(*(a5)).n128_u64[0];
  *(float*)&v72 = v68 + PSEUDO_UNFUSED(v69 * 0x0.0p+0);
  LANES128(v71).n128_u64[1] = LANES128(v70).n128_u64[0];
  *(float*)&v73 = PSEUDO_UNFUSED(v69 * -0x0.0p+0) + v68 * 0x0.0p+0;
  *(float*)&v74 = v69 + PSEUDO_UNFUSED(v68 * 0x0.0p+0);
  LANES128(v75).n128_u64[0] = __PAIR64__(v74, v73);
  LANES128(v75).n128_u64[1] = __PAIR64__(v72, v73);
  v76 = vmulq_f32(v75, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v75).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(*a5, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v77).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v75).n128_u64[1] = LANES128(v75).n128_u64[0];
  *(int8x8_t*)&LANES128(v77).n128_i8[8] =
      vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v78).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v79 = vmlaq_f32(vmulq_f32(v75, v76), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v71, v77));
  LANES128(v77).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(*a5, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v78).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v76).n128_u64[0]), 1);
  LANES128(v70).n128_u64[1] = LANES128(v77).n128_u64[0];
  LANES128(v77).n128_u64[1] = LANES128(*(a5)).n128_u64[0];
  LANES128(v80).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v80).n128_i8[8] =
      vqtbl1_s8(v76, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v81 = vmlsq_f32(vmlaq_f32(v79, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v77, v78)),
                  v80, v70);
  LANES128(v80).n128_u64[0] = __PAIR64__(v74, v73);
  HIDWORD(v73) = v72;
  LANES128(v76).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v81, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v76).n128_i8[8] =
      vqtbl1_s8(v81, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v82).n128_u64[0] = __PAIR64__(v74, v73);
  LANES128(v77).n128_u64[0] = __PAIR64__(v74, v73);
  LANES128(v82).n128_u64[1] = v73;
  LANES128(v83).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v82, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v84).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v82, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v82).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v82, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v83).n128_u64[1] = LANES128(v83).n128_u64[0];
  LANES128(v77).n128_u64[1] = LANES128(v84).n128_u64[0];
  LANES128(v84).n128_u64[1] = LANES128(v82).n128_u64[0];
  LANES128(v82).n128_u64[1] = LANES128(v80).n128_u64[0];
  v85 = vmlaq_f32(vmulq_f32(v83, v81), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v77, v76));
  LANES128(v76).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v81, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v76).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v81).n128_u64[0]), 1);
  v86 = vmlaq_f32(v85, COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v82, v76));
  LANES128(v82).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v81, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v82).n128_i8[8] =
      vqtbl1_s8(v81, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v87 = vmlsq_f32(v86, v82, v84);
  LANES128(*(a5)).n128_u64[0] = LANES128(v87).n128_u64[0];
  v88 = *a5;
  LANES128(v88).n128_u64[1] = LANES128(v87).n128_u32[2];
  *a5 = v88;
  v89 = vaddq_f32(*a3, v88);
  *a3 = v89;
  if (a11 <= 0x0.0p+0f) {
    *(_QWORD*)(a1 + 144) = LANES128(v89).n128_u64[0];
    v92 = *(_OWORD*)(a1 + 144);
    *(_QWORD*)(a1 + 128) = v92;
    *((_QWORD*)&v92 + 1) = LANES128(v89).n128_u32[2];
    v91 = *(_OWORD*)(a1 + 128);
    *(_QWORD*)(a1 + 112) = v91;
    *((_QWORD*)&v91 + 1) = LANES128(v89).n128_u32[2];
    v95 = *(_OWORD*)(a1 + 112);
    *((_QWORD*)&v95 + 1) = LANES128(v89).n128_u32[2];
    v93 = 0x1.0000000000000p+0f;
    *(_OWORD*)(a1 + 112) = v95;
    v94 = 0x1.0000000000000p+0f;
  }
  else {
    v90 = *(_OWORD*)(a1 + 112);
    *(_QWORD*)(a1 + 144) = LANES128(v89).n128_u64[0];
    *(_QWORD*)(a1 + 128) = v90;
    v91 = *(_OWORD*)(a1 + 128);
    v92 = *(_OWORD*)(a1 + 144);
    *((_QWORD*)&v91 + 1) = DWORD2(v90);
    *((_QWORD*)&v92 + 1) = LANES128(v89).n128_u32[2];
    v93 = 0x0.0p+0f;
    v94 = a11;
  }
  *(_OWORD*)(a1 + 128) = v91;
  *(_OWORD*)(a1 + 144) = v92;
  v96 = a9;
  *(float*)(a1 + 160) = v93;
  *(float*)(a1 + 164) = v94;
  *(float*)(a1 + 192) = v94;
  *(_DWORD*)(a1 + 168) = 5;
  *(_DWORD*)(a1 + 196) = 5;
  if (a11 <= 0x0.0p+0f) {
    v96 = a9 + a10;
  }
  *(float*)(a1 + 184) = a9 + a10;
  *(float*)(a1 + 188) = v93;
  *(float*)(a1 + 176) = v96;
  *(float*)(a1 + 180) = v96;
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 +
                                             32LL) -
                                  8LL) +
                       40LL) +
            226LL) = 1;
  if (a6 != nullptr) {
    v97 = a6;
  }
  else {
    v97 = &GameData_1a9f09e;
  }
  v98 = strlen(v97);
  if (v98 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v99 = v98;
  if (v98 >= 0x17) {
    if ((v98 | 7) == 0x17) {
      v101 = 26;
    }
    else {
      v101 = (v98 | 7) + 1;
    }
    v100 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v101,
                                                 16, 0);
    v111_.v112 = v99;
    v111_.v113 = v100;
    v111_.v111 = v101 | 1;
    goto LABEL_36;
  }
  LOBYTE(v111_.v111) = 2 * v98;
  v100 = (char*)&v111_.v111 + 1;
  if (v98 != 0) {
  LABEL_36:
    memcpy((__int64)v100, (__int64)v97, v99);
  }
  v100[v99] = 0;
  if ((v111_.v111 & 1) != 0) {
    v102 = v111_.v113;
  }
  else {
    v102 = (char*)&v111_.v111 + 1;
  }
  if ((v111_.v111 & 1) != 0) {
    v103 = v111_.v112;
  }
  else {
    v103 = (unsigned __int64)(unsigned __int8)v111_.v111 >> 1;
  }
  game_11c2f00(a1 + 320, (__int64)v102, v103, a12);
  if ((v111_.v111 & 1) != 0 && v111_.v113 != nullptr) {
    v104 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v104 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v104,
                                  (__int64)v111_.v113);
  }
  *(_DWORD*)(a1 + 368) = *a7;
  *(_DWORD*)(a1 + 372) = a7[1];
  v105 = *(_OWORD*)(a1 + 368);
  *((_QWORD*)&v105 + 1) = (unsigned int)a7[2];
  *(_OWORD*)(a1 + 368) = v105;
  *(_DWORD*)(a1 + 384) = *a8;
  *(_DWORD*)(a1 + 388) = a8[1];
  v106 = *(_OWORD*)(a1 + 384);
  *((_QWORD*)&v106 + 1) = (unsigned int)a8[2];
  *(_OWORD*)(a1 + 384) = v106;
  LODWORD(result) = v106;
  return result;
}

#pragma GCC visibility pop
