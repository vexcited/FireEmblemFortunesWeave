#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_734b40(_QWORD, _QWORD);
__int64 GameRoutine_7bfc60(_QWORD, _QWORD);
__int64 GameRoutine_fe96c0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 GameRoutine_734a80(_QWORD, _QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, float);
bool GameRoutine_731b80(_QWORD*, __int64, double, double, double, long double,
                        long double, long double, long double, long double);
extern __int64 GameData_21cd0f0;
extern __int64 GameData_21cd140;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212cfc0[10];
struct PseudoSret snd_play_ff2d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 double, float);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void Cursor_730b20(__int64 a1, int a2, int a3);
void Cursor_730cb0(__int64 a1, char* a2);
void Cursor_730e40(__int64 a1, __int64 a2);
float* Cursor_731180(float* result);
void Cursor_7317c0(__int64 a1);
bool Cursor_7339d0(__int64 a1, double a2, double a3, double a4, long double a5,
                   long double a6, long double a7, long double a8,
                   long double a9);

void Cursor_730b20(__int64 a1, int a2, int a3)
{
  __int64 v3;
  __int128 v4;
  float v5;
  float v6;
  __int128 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  char v13;
  __int64 v14;
  __int64 v15;
  __int128 v16;
  __int128 v17;
  _QWORD v18[2];

  v3 = *(_QWORD*)(a1 + 48);
  DWORD1(v4) = 0;
  HIDWORD(v4) = 0;
  *(float*)&v4 = (float)((float)((float)(a2 + 256) * 5.0f) + 2.5f) + -1280.0f;
  v5 = (float)(*(float*)&v4 + 1280.0f) * 0.2f;
  v6 = (float)((float)((float)((float)((float)(a3 + 256) * 5.0f) + 2.5f) +
                       -1280.0f) +
               1280.0f) *
       0.2f;
  *((float*)&v4 + 2) =
      (float)((float)((float)(a3 + 256) * 5.0f) + 2.5f) + -1280.0f;
  *(_DWORD*)(v3 + 8) = (int)v5 - 256;
  *(_DWORD*)(v3 + 12) = (int)v6 - 256;
  v17 = v4;
  GameRoutine_734a80(v3 + 16, &v17);
  DWORD1(v7) = 0;
  HIDWORD(v7) = 0;
  *(float*)&v7 = (float)((float)((float)(int)v5 * 5.0f) + 2.5f) + -1280.0f;
  *((float*)&v7 + 2) =
      (float)((float)((float)(int)v6 * 5.0f) + 2.5f) + -1280.0f;
  v16 = v7;
  GameRoutine_734a80(v3 + 80, &v16);
  *(_DWORD*)(v3 + 172) = 0;
  *(_QWORD*)(v3 + 176) = 0;
  v8 = GameData_21cd0f0;
  if (GameData_21cd0f0 != 0) {
    v9 = *(_QWORD*)(*GameData_212cfc0[0] + 48);
    v10 = *(_DWORD*)(v9 + 8);
    v11 = *(_DWORD*)(v9 + 12);
    *(_BYTE*)(GameData_21cd0f0 + 81) = 1;
    if (v10 == *(_DWORD*)(v8 + 148) && v11 == *(_DWORD*)(v8 + 152)) {
      v13 = 0;
    }
    else {
      *(_DWORD*)(v8 + 148) = v10;
      *(_DWORD*)(v8 + 152) = v11;
      v13 = 1;
    }
    *(_BYTE*)(v8 + 80) = v13;
    GameRoutine_fe96c0(v8);
    if (GameData_21cd140 != 0) {
      v14 = *(_QWORD*)(v8 + 24);
      v15 = *(_QWORD*)(GameData_21cd140 + 432);
      v18[0] = *(_QWORD*)(v8 + 16);
      v18[1] = v14;
      GameRoutine_7bfc60(v15, v18);
    }
  }
}

void Cursor_730cb0(__int64 a1, char* a2)
{
  int v2;
  __int64 v3;
  __int128 v4;
  float v5;
  float v6;
  __int128 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  char v13;
  __int64 v14;
  __int64 v15;
  __int128 v16;
  __int128 v17;
  _QWORD v18[2];

  v2 = a2[1];
  v3 = *(_QWORD*)(a1 + 48);
  DWORD1(v4) = 0;
  HIDWORD(v4) = 0;
  *(float*)&v4 =
      (float)((float)((float)(unsigned int)(*a2 + 256) * 5.0f) + 2.5f) +
      -1280.0f;
  v5 = (float)(*(float*)&v4 + 1280.0f) * 0.2f;
  v6 = (float)((float)((float)((float)((float)(unsigned int)(v2 + 256) * 5.0f) +
                               2.5f) +
                       -1280.0f) +
               1280.0f) *
       0.2f;
  *((float*)&v4 + 2) =
      (float)((float)((float)(unsigned int)(v2 + 256) * 5.0f) + 2.5f) +
      -1280.0f;
  *(_DWORD*)(v3 + 8) = (int)v5 - 256;
  *(_DWORD*)(v3 + 12) = (int)v6 - 256;
  v17 = v4;
  GameRoutine_734a80(v3 + 16, &v17);
  DWORD1(v7) = 0;
  HIDWORD(v7) = 0;
  *(float*)&v7 = (float)((float)((float)(int)v5 * 5.0f) + 2.5f) + -1280.0f;
  *((float*)&v7 + 2) =
      (float)((float)((float)(int)v6 * 5.0f) + 2.5f) + -1280.0f;
  v16 = v7;
  GameRoutine_734a80(v3 + 80, &v16);
  *(_DWORD*)(v3 + 172) = 0;
  *(_QWORD*)(v3 + 176) = 0;
  v8 = GameData_21cd0f0;
  if (GameData_21cd0f0 != 0) {
    v9 = *(_QWORD*)(*GameData_212cfc0[0] + 48);
    v10 = *(_DWORD*)(v9 + 8);
    v11 = *(_DWORD*)(v9 + 12);
    *(_BYTE*)(GameData_21cd0f0 + 81) = 1;
    if (v10 == *(_DWORD*)(v8 + 148) && v11 == *(_DWORD*)(v8 + 152)) {
      v13 = 0;
    }
    else {
      *(_DWORD*)(v8 + 148) = v10;
      *(_DWORD*)(v8 + 152) = v11;
      v13 = 1;
    }
    *(_BYTE*)(v8 + 80) = v13;
    GameRoutine_fe96c0(v8);
    if (GameData_21cd140 != 0) {
      v14 = *(_QWORD*)(v8 + 24);
      v15 = *(_QWORD*)(GameData_21cd140 + 432);
      v18[0] = *(_QWORD*)(v8 + 16);
      v18[1] = v14;
      GameRoutine_7bfc60(v15, v18);
    }
  }
}

void Cursor_730e40(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int128 v12;
  float v13;
  float v14;
  __int128 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  int v19;
  char v21;
  __int64 v22;
  __int64 v23;
  __int128 v24;
  __int128 v25;
  _QWORD v26[9];

  if (a2 != 0) {
    v9 = *(_QWORD*)(a2 + 440);
    if (v9 != 0 && *(unsigned __int8*)(v9 + 16) <= 3u) {
      v26[2] = v8;
      v26[3] = v7;
      v26[4] = v6;
      v26[5] = v5;
      v26[6] = v4;
      v26[7] = v2;
      v26[8] = v3;
      v10 = *(char*)(a2 + 585);
      DWORD1(v12) = 0;
      HIDWORD(v12) = 0;
      *(float*)&v12 =
          (float)((float)((float)(unsigned int)(*(char*)(a2 + 584) + 256) *
                          5.0f) +
                  2.5f) +
          -1280.0f;
      v13 = (float)(*(float*)&v12 + 1280.0f) * 0.2f;
      v14 = (float)((float)((float)((float)((float)(unsigned int)(v10 + 256) *
                                            5.0f) +
                                    2.5f) +
                            -1280.0f) +
                    1280.0f) *
            0.2f;
      *((float*)&v12 + 2) =
          (float)((float)((float)(unsigned int)(v10 + 256) * 5.0f) + 2.5f) +
          -1280.0f;
      v25 = v12;
      *(_DWORD*)(a1 + 8) = (int)v13 - 256;
      *(_DWORD*)(a1 + 12) = (int)v14 - 256;
      GameRoutine_734a80(a1 + 16, &v25);
      DWORD1(v15) = 0;
      HIDWORD(v15) = 0;
      *(float*)&v15 =
          (float)((float)((float)(int)v13 * 5.0f) + 2.5f) + -1280.0f;
      *((float*)&v15 + 2) =
          (float)((float)((float)(int)v14 * 5.0f) + 2.5f) + -1280.0f;
      v24 = v15;
      GameRoutine_734a80(a1 + 80, &v24);
      *(_DWORD*)(a1 + 172) = 0;
      *(_QWORD*)(a1 + 176) = 0;
      v16 = GameData_21cd0f0;
      if (GameData_21cd0f0 != 0) {
        v17 = *(_QWORD*)(*GameData_212cfc0[0] + 48);
        v18 = *(_DWORD*)(v17 + 8);
        v19 = *(_DWORD*)(v17 + 12);
        *(_BYTE*)(GameData_21cd0f0 + 81) = 1;
        if (v18 == *(_DWORD*)(v16 + 148) && v19 == *(_DWORD*)(v16 + 152)) {
          v21 = 0;
        }
        else {
          *(_DWORD*)(v16 + 148) = v18;
          *(_DWORD*)(v16 + 152) = v19;
          v21 = 1;
        }
        *(_BYTE*)(v16 + 80) = v21;
        GameRoutine_fe96c0(v16);
        if (GameData_21cd140 != 0) {
          v22 = *(_QWORD*)(v16 + 24);
          v23 = *(_QWORD*)(GameData_21cd140 + 432);
          v26[0] = *(_QWORD*)(v16 + 16);
          v26[1] = v22;
          GameRoutine_7bfc60(v23, v26);
        }
      }
    }
  }
}

float* Cursor_731180(float* result)
{
  __int64 v1;
  float* v2;
  __int64 v3;
  float v4;
  __int64 v5;
  char* v6;
  char* v7;
  unsigned __int64 v8;
  int v9;
  char v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  char* v16;
  char* v17;
  _QWORD* v18;
  float* v19;
  char* v20;
  char* v21;
  char* v22;
  signed __int64 v23;
  __int64 v24;
  char* v25;
  unsigned __int64 v26;
  _QWORD* v27;
  __int64 v28;
  float** v29;
  char* v30;
  __int64* v31;
  char* v32;
  char* v33;
  unsigned __int64 v34;
  float* v35;
  __int64 v36;
  char* v37;
  float** v38;
  __int64 v39;
  __int64 v40;
  char* v41;
  __int64 v42;
  signed __int64 v43;
  bool v44;
  signed __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  signed __int64 v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  char* v54;
  __int64 v55;
  unsigned __int64 v56;
  signed __int64 v57;
  char* v58;
  float* v59;
  __int64 v60;
  __int64 v61;
  __int128 v62;
  __int128 v63;
  __int128 v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  signed __int64 v70;
  unsigned __int64 v71;
  _QWORD* v72;
  __int64* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int128 v79;
  __int128 v80;
  __int128 v81;
  __int128 v82;
  int v83;

  if (*((_QWORD*)result + 29) <= 7u) {
    v1 = *((_QWORD*)result + 1);
    v2 = result;
    if (result[23] == result[22]) {
      result = (float*)(*(_QWORD * (**)(__int128* __return_ptr, _QWORD*))(
          *((_QWORD*)result + 10) + 16LL))(&v82, (_QWORD*)result + 10);
    }
    else {
      v3 = *((_QWORD*)result + 17);
      *(_QWORD*)&v82 = *((_QWORD*)result + 16);
      *((_QWORD*)&v82 + 1) = v3;
    }
    v81 = v82;
    v4 = v2[7];
    if (v4 == v2[6]) {
      result = (float*)(*(_QWORD * (**)(__int128* __return_ptr, float*, float))(
          *((_QWORD*)v2 + 2) + 16LL))(&v82, v2 + 4, v4);
    }
    else {
      v5 = *((_QWORD*)v2 + 9);
      *(_QWORD*)&v82 = *((_QWORD*)v2 + 8);
      *((_QWORD*)&v82 + 1) = v5;
    }
    v6 = *((char**)v2 + 25);
    v7 = *((char**)v2 + 26);
    v8 = v7 - v6;
    v9 = *((_DWORD*)v2 + 42);
    v10 = *((_BYTE*)v2 + 240);
    v11 = (v7 - v6) >> 3;
    v79 = *((_OWORD*)v2 + 9);
    v80 = v82;
    if (v7 == v6) {
      v12 = 0;
    }
    else {
      v12 = 17 * (v11 + ((v7 - v6) >> 2)) - 1;
    }
    v13 = *((_QWORD*)v2 + 28);
    v14 = *((_QWORD*)v2 + 29) + v13;
    if (v12 != v14) {
      goto LABEL_74;
    }
    if (v13 >= 0x33) {
      *((_QWORD*)v2 + 28) = v13 - 51;
      v15 = *(_QWORD*)v6;
      *((_QWORD*)v2 + 25) = v6 + 8;
      *(_QWORD*)&v82 = v15;
    LABEL_14:
      result = (float*)GameRoutine_734b40(v2 + 48, &v82);
    LABEL_73:
      v6 = *((char**)v2 + 25);
      v14 = *((_QWORD*)v2 + 29) + *((_QWORD*)v2 + 28);
    LABEL_74:
      v63 = v80;
      v62 = v81;
      v64 = v79;
      HIDWORD(v62) = 0;
      HIDWORD(v63) = 0;
      HIDWORD(v64) = 0;
      v65 = *(_QWORD*)&v6[8 * (v14 / 0x33)] + 80 * (v14 % 0x33);
      *(_QWORD*)v65 = v1;
      *(_OWORD*)(v65 + 16) = v63;
      *(_OWORD*)(v65 + 32) = v62;
      *(_OWORD*)(v65 + 48) = v64;
      *(_DWORD*)(v65 + 64) = v9;
      *(_BYTE*)(v65 + 68) = v10;
      ++*((_QWORD*)v2 + 29);
      return result;
    }
    v16 = *((char**)v2 + 27);
    v17 = *((char**)v2 + 24);
    if (v8 >= v16 - v17) {
      v83 = *((unsigned __int8*)v2 + 240);
      v78 = v1;
      if (v16 == v17) {
        v26 = 1;
      }
      else {
        v26 = (v16 - v17) >> 2;
      }
      if (v26 >> 61 == 0) {
        v27 = (_QWORD*)fw_memory_g_heap_manager_ptr;
        v28 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v26, 16, 0);
        v29 = (float**)(v28 + v8);
        v30 = (char*)(v28 + 8 * v26);
        result = (float*)fw_memory_HeapManager_Allocate(*v27, 4080, 16, 0);
        if (v8 == 8 * v26) {
          if (v7 == v6) {
            v35 = result;
            v31 = (__int64*)fw_memory_g_heap_manager_ptr;
            v29 = (float**)fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
            v30 = (char*)(v29 + 1);
            v36 = 128;
            if (*(_QWORD*)(*v31 + 200) == 0) {
              v36 = 56;
            }
            nn_mem_StandardAllocator_Free(*v31 + v36, v28);
            result = v35;
            v6 = *((char**)v2 + 25);
            v7 = *((char**)v2 + 26);
            v28 = (__int64)v29;
          }
          else {
            v31 = (__int64*)fw_memory_g_heap_manager_ptr;
            v29 -= (v11 + 1 + ((unsigned __int64)(v11 + 1) >> 63)) >> 1;
          }
        }
        else {
          v31 = &fw_memory_g_heap_manager;
        }
        v10 = v83;
        *v29 = result;
        v37 = (char*)(v29 + 1);
        if (v7 != v6) {
          while (1) {
            if (v29 == (float**)v28) {
              if (v37 >= v30) {
                if (v30 == (char*)v29) {
                  v46 = 1;
                }
                else {
                  v46 = (v30 - (char*)v29) >> 2;
                }
                if (v46 >> 61 != 0) {
                  goto LABEL_88;
                }
                v47 = fw_memory_HeapManager_Allocate(*v31, 8 * v46, 16, 0);
                v48 = v47;
                v41 = (char*)(v47 + ((2 * v46 + 6) & 0xFFFFFFFFFFFFFFF8LL));
                v49 = v37 - (char*)v29;
                v44 = v37 == (char*)v29;
                v37 = v41;
                if (!v44) {
                  v37 = &v41[v49];
                  v50 = (_QWORD*)(v47 + ((2 * v46 + 6) & 0xFFFFFFFFFFFFFFF8LL));
                  do {
                    v51 = (__int64)*v29++;
                    v49 -= 8LL;
                    *v50++ = v51;
                  } while (v49 != 0);
                }
                v30 = (char*)(v47 + 8 * v46);
                v52 = 128;
                if (*(_QWORD*)(*v31 + 200) == 0) {
                  v52 = 56;
                }
                result = (float*)nn_mem_StandardAllocator_Free(*v31 + v52, v28);
                v28 = v48;
              }
              else {
                v43 = v37 - (char*)v29;
                v45 = v37 - (char*)v29;
                v44 = v37 == (char*)v29;
                v37 +=
                    8 * ((((v30 - v37) >> 3) + 1 +
                          ((unsigned __int64)(((v30 - v37) >> 3) + 1) >> 63)) >>
                         1);
                v41 = &v37[-v43];
                if (!v44) {
                  result = (float*)memmove(&v37[-v43], v29, v45);
                }
              }
            }
            else {
              v41 = (char*)v29;
            }
            v42 = *((_QWORD*)v7 - 1);
            v7 -= 8;
            *((_QWORD*)v41 - 1) = v42;
            v38 = (float**)(v41 - 8);
            v29 = v38;
            if (v7 == *((char**)v2 + 25)) {
              goto LABEL_37;
            }
          }
        }
        v38 = v29;
      LABEL_37:
        v39 = *((_QWORD*)v2 + 24);
        *((_QWORD*)v2 + 26) = v37;
        *((_QWORD*)v2 + 27) = v30;
        v1 = v78;
        *((_QWORD*)v2 + 24) = v28;
        *((_QWORD*)v2 + 25) = v38;
        if (v39 != 0) {
          v40 = 128;
          if (*(_QWORD*)(*v31 + 200) == 0) {
            v40 = 56;
          }
          result = (float*)nn_mem_StandardAllocator_Free(*v31 + v40, v39);
        }
        goto LABEL_73;
      }
    }
    else {
      v18 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      result = (float*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4080, 16, 0);
      v19 = result;
      if (v16 == v7) {
        v33 = *((char**)v2 + 24);
        v32 = *((char**)v2 + 25);
        if (v32 == v33) {
          v54 = *((char**)v2 + 26);
          v53 = *((_QWORD*)v2 + 27);
          if ((unsigned __int64)v54 >= v53) {
            v66 = v53 - (_QWORD)v32;
            v44 = v66 == 0;
            v67 = v66 >> 2;
            if (v44) {
              v68 = 1;
            }
            else {
              v68 = v67;
            }
            if (v68 >> 61 != 0) {
              goto LABEL_88;
            }
            v69 = fw_memory_HeapManager_Allocate(*v18, 8 * v68, 16, 0);
            v70 = v54 - v32;
            v34 = v69 + ((2 * v68 + 6) & 0xFFFFFFFFFFFFFFF8LL);
            v71 = v34;
            if (v54 != v32) {
              v71 = v34 + v70;
              v72 = (_QWORD*)(v69 + ((2 * v68 + 6) & 0xFFFFFFFFFFFFFFF8LL));
              v73 = (__int64*)v32;
              do {
                v74 = *v73++;
                v70 -= 8LL;
                *v72++ = v74;
              } while (v70 != 0);
            }
            *((_QWORD*)v2 + 24) = v69;
            *((_QWORD*)v2 + 25) = v34;
            *((_QWORD*)v2 + 26) = v71;
            *((_QWORD*)v2 + 27) = v69 + 8 * v68;
            if (v32 != nullptr) {
              v75 = 128;
              if (*(_QWORD*)(*v18 + 200LL) == 0) {
                v75 = 56;
              }
              nn_mem_StandardAllocator_Free(*v18 + v75, v33);
              v34 = *((_QWORD*)v2 + 25);
            }
          }
          else {
            v55 = (((__int64)(v53 - (_QWORD)v54) >> 3) + 1) / 2;
            v34 = (unsigned __int64)&v32[8 * v55];
            if (v54 != v32) {
              memmove(&v32[8 * v55], *((_QWORD*)v2 + 25), v54 - v32);
              v54 = *((char**)v2 + 26);
            }
            *((_QWORD*)v2 + 25) = v34;
            *((_QWORD*)v2 + 26) = &v54[8 * v55];
          }
        }
        else {
          v34 = *((_QWORD*)v2 + 25);
        }
        *(_QWORD*)(v34 - 8) = v19;
        v76 = *((_QWORD*)v2 + 25);
        *((_QWORD*)v2 + 25) = v76 - 8;
        v77 = *(_QWORD*)(v76 - 8);
        *((_QWORD*)v2 + 25) = v76;
        *(_QWORD*)&v82 = v77;
        goto LABEL_14;
      }
      v20 = *((char**)v2 + 26);
      if (v20 != *((char**)v2 + 27)) {
      LABEL_72:
        *(_QWORD*)v20 = v19;
        *((_QWORD*)v2 + 26) += 8LL;
        goto LABEL_73;
      }
      v22 = *((char**)v2 + 24);
      v21 = *((char**)v2 + 25);
      if (v21 > v22) {
        v23 = v20 - v21;
        v24 = ((v21 - v22) >> 3) + 1;
        v25 = &v21[-8 * (v24 / 2)];
        if (v23 != 0) {
          result =
              (float*)memmove(&v21[-8 * (v24 / 2)], *((_QWORD*)v2 + 25), v23);
          v21 = *((char**)v2 + 25);
        }
        v20 = &v25[v23];
        *((_QWORD*)v2 + 25) = &v21[8 * (v24 / -2)];
        *((_QWORD*)v2 + 26) = v20;
        goto LABEL_72;
      }
      if (v20 == v22) {
        v56 = 1;
      }
      else {
        v56 = (v20 - v22) >> 2;
      }
      if (v56 >> 61 == 0) {
        result = (float*)fw_memory_HeapManager_Allocate(*v18, 8 * v56, 16, 0);
        v57 = v20 - v21;
        v44 = v20 == v21;
        v58 = (char*)&result[2 * (v56 >> 2)];
        v20 = v58;
        if (!v44) {
          v20 = &v58[v57];
          v59 = &result[2 * (v56 >> 2)];
          do {
            v60 = *(_QWORD*)v21;
            v21 += 8;
            v57 -= 8LL;
            *(_QWORD*)v59 = v60;
            v59 += 2;
          } while (v57 != 0);
        }
        *((_QWORD*)v2 + 24) = result;
        *((_QWORD*)v2 + 25) = v58;
        *((_QWORD*)v2 + 26) = v20;
        *((_QWORD*)v2 + 27) = &result[2 * v56];
        if (v22 != nullptr) {
          v61 = 128;
          if (*(_QWORD*)(*v18 + 200LL) == 0) {
            v61 = 56;
          }
          result = (float*)nn_mem_StandardAllocator_Free(*v18 + v61, v22);
          v20 = *((char**)v2 + 26);
        }
        goto LABEL_72;
      }
    }
  LABEL_88:
    GameRoutine_60a210(result);
  }
  return result;
}

void Cursor_7317c0(__int64 a1)
{
  __int64 v1;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int128 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  bool v11;
  char v12;
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
  _QWORD v23[2];
  _QWORD v24[2];
  _QWORD v25[2];

  v1 = *(_QWORD*)(a1 + 232);
  if (v1 != 0) {
    v3 = *(_QWORD*)(*(_QWORD*)(a1 + 200) +
                    8 * ((v1 + *(_QWORD*)(a1 + 224) - 1) / 0x33uLL)) +
         80 * ((v1 + *(_QWORD*)(a1 + 224) - 1) % 0x33uLL);
    *(_DWORD*)(a1 + 8) = *(_DWORD*)v3;
    *(_DWORD*)(a1 + 12) = *(_DWORD*)(v3 + 4);
    v4 = *(_QWORD*)(v3 + 40);
    v24[0] = *(_QWORD*)(v3 + 32);
    v24[1] = v4;
    GameRoutine_734a80(a1 + 80, v24);
    v5 = *(_QWORD*)(v3 + 24);
    v23[0] = *(_QWORD*)(v3 + 16);
    v23[1] = v5;
    GameRoutine_734a80(a1 + 16, v23);
    *(_DWORD*)(a1 + 144) = *(_DWORD*)(v3 + 48);
    *(_DWORD*)(a1 + 148) = *(_DWORD*)(v3 + 52);
    v6 = *(_OWORD*)(a1 + 144);
    *((_QWORD*)&v6 + 1) = *(unsigned int*)(v3 + 56);
    *(_OWORD*)(a1 + 144) = v6;
    *(_DWORD*)(a1 + 168) = *(_DWORD*)(v3 + 64);
    *(_BYTE*)(a1 + 240) = *(_BYTE*)(v3 + 68);
    v7 = GameData_21cd0f0;
    if (GameData_21cd0f0 != 0) {
      v8 = *(_QWORD*)(*GameData_212cfc0[0] + 48);
      v9 = *(_DWORD*)(v8 + 8);
      v10 = *(_DWORD*)(v8 + 12);
      *(_BYTE*)(GameData_21cd0f0 + 81) = 1;
      v11 = v9 == *(_DWORD*)(v7 + 148) && v10 == *(_DWORD*)(v7 + 152);
      if (v11) {
        v12 = 0;
      }
      else {
        *(_DWORD*)(v7 + 148) = v9;
        *(_DWORD*)(v7 + 152) = v10;
        v12 = 1;
      }
      *(_BYTE*)(v7 + 80) = v12;
      GameRoutine_fe96c0(v7);
      if (GameData_21cd140 != 0) {
        v13 = *(_QWORD*)(v7 + 24);
        v14 = *(_QWORD*)(GameData_21cd140 + 432);
        v25[0] = *(_QWORD*)(v7 + 16);
        v25[1] = v13;
        GameRoutine_7bfc60(v14, v25);
      }
    }
    v16 = *(_QWORD*)(a1 + 200);
    v15 = *(_QWORD*)(a1 + 208);
    v11 = v15 == v16;
    v17 = ((v15 - v16) >> 2) + ((v15 - v16) >> 3);
    v19 = *(_QWORD*)(a1 + 224);
    v18 = *(_QWORD*)(a1 + 232);
    v20 = 17 * v17 - 1;
    if (v11) {
      v20 = 0;
    }
    *(_QWORD*)(a1 + 232) = v18 - 1;
    if ((unsigned __int64)(v20 - (v18 + v19) + 1) >= 0x66) {
      v21 = *(_QWORD*)(v15 - 8);
      if (v21 != 0) {
        v22 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v22 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v21);
        v15 = *(_QWORD*)(a1 + 208);
      }
      *(_QWORD*)(a1 + 208) = v15 - 8;
    }
  }
}

bool Cursor_7339d0(__int64 a1, double a2, double a3, double a4, long double a5,
                   long double a6, long double a7, long double a8,
                   long double a9)
{
  bool v9;
  __int64 v11;
  _BYTE v12[200];

  v9 = GameRoutine_731b80(*(_QWORD**)(a1 + 48), 0, a2, a3, a4, a5, a6, a7, a8,
                          a9);
  if (v9) {
    snd_Fade_Fade_10c830(v12, 0.0);
    *(struct PseudoSret*)(&v11) = snd_play_ff2d0(
        "SE_SYS_Cursor_M", "SE_SYS_Cursor_M", v12, 0, 65537, 0, 0.0, 1.0);
    snd_Fade_Destroy_Fade(v12);
  }
  return v9;
}

#pragma GCC visibility pop
