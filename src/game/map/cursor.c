#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

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
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
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
__int64 GameRoutine_734a80_alt1(__int64,
                                __int64*) __asm__("GameRoutine_734a80");
float Cursor_7340d0(_DWORD* a1, _DWORD* a2, _DWORD* a3);
float Cursor_734120(int a1, int a2, float a3, float a4, float a5, float a6);
__int64 game_map_Cursor_Impl_Tick_closure_Invoke(__int64 a1, int* a2, int* a3,
                                                 unsigned __int8* a4);
__int64 Camera_7bfc60(_QWORD, _QWORD);
__int64 Camera_7bfc60_alt1(__int64, __int128*) __asm__("Camera_7bfc60");
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_map_fe96c0(_QWORD);
__n128 Cursor_734a80_alt1(_QWORD, _QWORD) __asm__("Cursor_734a80");
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_1acec0c;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64 game_GameModeData_instance_;
extern __int64 game_g_game_setting_ptr;
void game_map_fe96c0_alt1(__int64) __asm__("game_map_fe96c0");
void Cursor_730ff0(__int64 a1, float* a2);
__attribute__((swiftcall)) void Cursor_7319a0(PSEUDO_X8 x8_, __int64 a1);
__int64 Cursor_Unknown9(__int64 a1, __int64 a2);
__int64 Cursor_733fd0(__int64 a1, float32x4_t* a2, float32x4_t* a3);
__attribute__((swiftcall)) void Cursor_734010(PSEUDO_X8 x8_, __int64 a1);
__int64 Cursor_734a80(__int64 a1, __int64* a2);
__attribute__((swiftcall)) void Camera_7c10e0(PSEUDO_X8, __int64, int8x16_t*);
__attribute__((swiftcall)) void Camera_7c13a0(PSEUDO_X8, __int64, int8x16_t*);
__int64* Vector_650640();
__int64* game_8224a0(unsigned __int8);
__int64* game_UnitPool_Get(_BYTE*);
__int64 GameRoutine_747df0(__int64, int, int, unsigned __int8);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__attribute__((swiftcall)) void
snd_play_ff2d0_alt1(PSEUDO_X8, __int64, __int64, __int64, unsigned int,
                    unsigned int, int, float, float) __asm__("snd_play_ff2d0");
extern _UNKNOWN GameData_21a60e8;
extern __int64 (*GameData_1f94610[])();
extern __int64* GameData_212ce88[4];
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfc8[9];
extern __int64* GameData_212cfd0[8];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 GameData_212d038[2];
extern __int64 GameData_21a60e0;
extern __int64 GameData_21eea38;
extern __int64 GameData_2258178;
float GameHr_1552870();
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __attribute__((noreturn)) GameRoutine_60a310();
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
bool game_map_Cursor_Impl_Tick(unsigned __int64 a1, __int64 a2, double a3,
                               double a4, double a5, long double a6,
                               long double a7, long double a8, long double a9,
                               long double a10);

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
  DWORD3(v4) = 0;
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
  DWORD3(v7) = 0;
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
  DWORD3(v4) = 0;
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
  DWORD3(v7) = 0;
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
  __int128 v26;

  if (a2 != 0) {
    v9 = *(_QWORD*)(a2 + 440);
    if (v9 != 0 && *(unsigned __int8*)(v9 + 16) <= 3u) {
      v10 = *(char*)(a2 + 585);
      DWORD1(v12) = 0;
      DWORD3(v12) = 0;
      *(float*)&v12 =
          (float)((float)((float)(unsigned int)(*(char*)(a2 + 584) + 256) *
                          0x1.4000000000000p+2f) +
                  0x1.4000000000000p+1f) +
          -0x1.4000000000000p+10f;
      v13 = (float)(*(float*)&v12 + 0x1.4000000000000p+10f) *
            0x1.99999a0000000p-3f;
      v14 = (float)((float)((float)((float)((float)(unsigned int)(v10 + 256) *
                                            0x1.4000000000000p+2f) +
                                    0x1.4000000000000p+1f) +
                            -0x1.4000000000000p+10f) +
                    0x1.4000000000000p+10f) *
            0x1.99999a0000000p-3f;
      *((float*)&v12 + 2) = (float)((float)((float)(unsigned int)(v10 + 256) *
                                            0x1.4000000000000p+2f) +
                                    0x1.4000000000000p+1f) +
                            -0x1.4000000000000p+10f;
      v25 = v12;
      *(_DWORD*)(a1 + 8) = (int)v13 - 256;
      *(_DWORD*)(a1 + 12) = (int)v14 - 256;
      Cursor_734a80(a1 + 16, (__int64*)&v25);
      DWORD1(v15) = 0;
      DWORD3(v15) = 0;
      *(float*)&v15 = (float)((float)((float)(int)v13 * 0x1.4000000000000p+2f) +
                              0x1.4000000000000p+1f) +
                      -0x1.4000000000000p+10f;
      *((float*)&v15 + 2) =
          (float)((float)((float)(int)v14 * 0x1.4000000000000p+2f) +
                  0x1.4000000000000p+1f) +
          -0x1.4000000000000p+10f;
      v24 = v15;
      Cursor_734a80(a1 + 80, (__int64*)&v24);
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
        game_map_fe96c0_alt1(v16);
        if (GameData_21cd140 != 0) {
          v22 = *(_QWORD*)(v16 + 24);
          v23 = *(_QWORD*)(GameData_21cd140 + 432);
          *(_QWORD*)&v26 = *(_QWORD*)(v16 + 16);
          *((_QWORD*)&v26 + 1) = v22;
          Camera_7bfc60_alt1(v23, &v26);
        }
      }
    }
  }
}

void Cursor_730ff0(__int64 a1, float* a2)
{
  __int64 v2;
  __int64 v4;
  __int128 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  char v11;
  __int64 v12;
  __int64 v13;
  __int128 v14;
  _QWORD v15[2];
  _QWORD v16[2];

  v2 = *(_QWORD*)(a1 + 48);
  *(_DWORD*)(v2 + 8) = (int)(float)((float)(*a2 + 0x1.4000000000000p+10f) *
                                    0x1.99999a0000000p-3f) -
                       256;
  *(_DWORD*)(v2 + 12) = (int)(float)((float)(a2[2] + 0x1.4000000000000p+10f) *
                                     0x1.99999a0000000p-3f) -
                        256;
  v4 = *((_QWORD*)a2 + 1);
  v15[0] = *(_QWORD*)a2;
  v15[1] = v4;
  Cursor_734a80_alt1(v2 + 16, v15);
  v5 = *(_OWORD*)a2;
  *(float*)&v5 =
      (float)((float)((float)(int)(float)((float)(COERCE_FLOAT(*(_OWORD*)a2) +
                                                  0x1.4000000000000p+10f) *
                                          0x1.99999a0000000p-3f) *
                      5.0f) +
              2.5f) +
      -0x1.4000000000000p+10f;
  *((_QWORD*)&v5 + 1) = COERCE_UNSIGNED_INT(
      (float)((float)((float)(int)(float)((float)(COERCE_FLOAT(
                                                      *((_QWORD*)a2 + 1)) +
                                                  0x1.4000000000000p+10f) *
                                          0x1.99999a0000000p-3f) *
                      5.0f) +
              2.5f) +
      -0x1.4000000000000p+10f);
  v14 = v5;
  Cursor_734a80_alt1(v2 + 80, &v14);
  *(_DWORD*)(v2 + 172) = 0;
  *(_QWORD*)(v2 + 176) = 0;
  v6 = GameData_21cd0f0;
  if (GameData_21cd0f0 != 0) {
    v7 = *(_QWORD*)(*GameData_212cfc0[0] + 48);
    v8 = *(_DWORD*)(v7 + 8);
    v9 = *(_DWORD*)(v7 + 12);
    *(_BYTE*)(GameData_21cd0f0 + 81) = 1;
    if (v8 == *(_DWORD*)(v6 + 148) && v9 == *(_DWORD*)(v6 + 152)) {
      v11 = 0;
    }
    else {
      *(_DWORD*)(v6 + 148) = v8;
      *(_DWORD*)(v6 + 152) = v9;
      v11 = 1;
    }
    *(_BYTE*)(v6 + 80) = v11;
    game_map_fe96c0(v6);
    if (GameData_21cd140 != 0) {
      v12 = *(_QWORD*)(v6 + 24);
      v13 = *(_QWORD*)(GameData_21cd140 + 432);
      v16[0] = *(_QWORD*)(v6 + 16);
      v16[1] = v12;
      Camera_7bfc60(v13, v16);
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
      result = (float*)X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
                       *((_QWORD*)result + 10) + 16LL))((void*)&v82,
                                                        (_QWORD*)result + 10));
    }
    else {
      v3 = *((_QWORD*)result + 17);
      *(_QWORD*)&v82 = *((_QWORD*)result + 16);
      *((_QWORD*)&v82 + 1) = v3;
    }
    v81 = v82;
    v4 = v2[7];
    if (v4 == v2[6]) {
      result = (float*)X8CALL_X0(
          _QWORD*,
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, float*, float))(
              *((_QWORD*)v2 + 2) + 16LL))((void*)&v82, v2 + 4, v4));
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
      DWORD3(v62) = 0;
      DWORD3(v63) = 0;
      DWORD3(v64) = 0;
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

__attribute__((swiftcall)) void Cursor_7319a0(PSEUDO_X8 x8_, __int64 a1)
{

#pragma clang fp contract(off)
  float32x4_t* a2 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  float32x4_t* v2;
  _BYTE* v4;
  __int64 v5;
  int8x16_t v6;
  int32x4_t v7;
  float32x4_t v8;
  int v9;
  int8x16_t v10;
  int8x16_t v11;
  float32x4_t result;
  __int64 v13;
  unsigned __int64 v14[2];

  v2 = *(float32x4_t**)(a1 + 48);
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, float32x4_t*))(
      LANES128(v2[1]).n128_u64[0] + 16))((void*)(a2), v2 + 1);
  v4 = *(_BYTE**)game_g_game_setting_ptr;
  if ((*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) != 1 ||
       (v4[804] & 1) == 0 &&
           (v4[940] != 1 || (v4[805] & 1) == 0 || (v4[806] & 1) == 0)) &&
          (v4[903] != 1 ||
           (v4[900] & 1) == 0 &&
               (v4[940] != 1 || (v4[901] & 1) == 0 || v4[902] != 1)) ||
      (v14[1] = (unsigned __int64)&GameData_1acec0c,
       v14[0] = game_HashString((__int64)&GameData_1acec0c),
       game_GameModeData_instance_ == 0) ||
      (v5 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48), v14)) == 0 ||
      *(_DWORD*)(v5 + 32) == 0) {
    v8 = v2[9];
    v6 = vmulq_f32(v8, v8);
    v7 = vextq_s8(v6, v6, 8u);
    LANES128(v6).n128_u64[0] =
        LANES64_OF(vadd_f32(COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0])))
            .n64_u64[0];
    LANES128(v6).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0])))
            .n64_u64[0];
    if (LANES128(v6).n128_f32[0] > 0x0.0p+0f) {
      LANES128(*(a2)).n128_u64[0] = LANES128(v8).n128_u64[0];
      v6 = *a2;
      LANES128(v6).n128_u64[1] = LANES128(v8).n128_u32[2];
      *a2 = v6;
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v13 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v13;
    __cxa_guard_release(&GameData_21a6130);
  }
  LANES128(v6).n128_u32[0] = 1;
  v9 = LANES128(v2[11]).n128_i32[3];
  PSEUDO_LOW_LANE128(v7, n128_u32, LANES128(v2[11]).n128_u32[2]);
  v10 = COERCE_AS(int8x16_t, GameData_21a6120);
  LANES128(v10).n128_f32[0] =
      (float)(LANES128(v7).n128_u32[0] - 1) * 0x1.4000000000000p+1f;
  v11 = vbslq_s8(
      vdupq_lane_s32(
          COERCE_AS(int32x2_t, LANES128_OF(vcgtq_s32(v7, v6)).n128_u64[0]), 0),
      v10, COERCE_AS(int8x16_t, GameData_21a6120));
  if (v9 >= 2) {
    LANES128(v11).n128_f32[2] =
        (float)(unsigned int)(v9 - 1) * 0x1.4000000000000p+1f;
    LANES128(v11).n128_u32[3] = 0;
  }
  result = vaddq_f32(v11, *a2);
  *a2 = result;
  {
    result;
    return;
  }
}

bool game_map_Cursor_Impl_Tick(unsigned __int64 a1, __int64 a2, double a3,
                               double a4, double a5, long double a6,
                               long double a7, long double a8, long double a9,
                               long double a10)
{
  _QWORD handle[2];
  int v10;
  int v11;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64* v17;
  __int64* v18;
  __int128 v19;
  float v20;
  float v21;
  float v22;
  float v23;
  int v24;
  int v25;
  int v26;
  bool v27;
  int v28;
  float v29;
  float v30;
  float v31;
  __int64* v32;
  float v33;
  __int64 v34;
  float v35;
  int8x16_t v36;
  float v37;
  float v38;
  __int64* v39;
  float v40;
  __int64 v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  __int64* v47;
  float v48;
  __int64 v49;
  int8x16_t v50;
  float v51;
  float v52;
  float v53;
  __int64* v54;
  float v55;
  __int64 v56;
  float32x4_t v57;
  int8x16_t v58;
  float v59;
  float v60;
  _BYTE* v61;
  __int64 v62;
  float v63;
  float v64;
  __int64 v65;
  __int64 v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  __int64 v75;
  float v76;
  float v77;
  float v78;
  __int64* v79;
  float v80;
  float v81;
  __int64 v82;
  float v83;
  __int64 v84;
  float v85;
  __int64* v86;
  __int64 v87;
  float v88;
  int8x16_t v89;
  int8x16_t v90;
  float v91;
  unsigned __int64 v92;
  unsigned __int64 v93;
  float32x4_t v94;
  unsigned __int8* v95;
  int v96;
  int v97;
  int v98;
  unsigned int v99;
  int v100;
  int v101;
  float v102;
  float v103;
  float v104;
  unsigned __int64 v105;
  float32x4_t v106;
  int8x16_t v107;
  float32x4_t v108;
  int8x16_t v109;
  __int64 v110;
  __int128 v111;
  unsigned __int64 v112;
  long double v113;
  long double v114;
  long double v115;
  float v116;
  unsigned __int64 v117;
  unsigned __int64 v118;
  int v119;
  __int64* v120;
  __int64 v121;
  __int64 v122;
  unsigned int v123;
  unsigned int v124;
  unsigned int v125;
  unsigned int v126;
  int v127;
  int v128;
  __int64 v129;
  __int64 v130;
  char* v131;
  char* i;
  int v133;
  int v134;
  unsigned __int64 v135;
  unsigned __int64 v136;
  float32x4_t v137;
  unsigned __int8* v138;
  int v139;
  int v140;
  int v141;
  unsigned int v142;
  int v143;
  int v144;
  float v145;
  float v146;
  float v147;
  unsigned __int64 v148;
  float32x4_t v149;
  int8x16_t v150;
  float32x4_t v151;
  int8x16_t v152;
  __int64 v153;
  __int128 v154;
  int v155;
  int v156;
  int v157;
  float32x4_t* v158;
  bool v159;
  int v160;
  __int64* v161;
  int v162;
  int v163;
  char v164;
  int v165;
  unsigned __int32 v166;
  int v167;
  int v168;
  int v169;
  char v170;
  int v171;
  __int64 v172;
  int v173;
  int v174;
  float v175;
  float v176;
  int v177;
  int v178;
  float v179;
  float v180;
  unsigned int v181;
  unsigned int v182;
  unsigned int v183;
  unsigned int v184;
  __int64 v186;
  float v187;
  float v188;
  unsigned __int64 v189;
  unsigned __int64 v190;
  unsigned __int64 v191;
  int v192;
  int8x16_t v193;
  __int64 v194;
  char v195;
  _BYTE* v196;
  int8x16_t v197;
  unsigned __int64 v198;
  int v199;
  __int64 v200;
  float v201;
  int v202;
  const char* v203;
  float v204;
  float v205;
  __int64* v206;
  float v207;
  __int64 v208;
  float v209;
  _BYTE* v210;
  __int64 v211;
  int v212;
  int v213;
  int v214;
  char v215;
  unsigned __int32 v218;
  unsigned __int8 v219;
  float v220;
  float v221;
  unsigned __int32 v222;
  unsigned int v223;
  unsigned __int32 v224;
  __int64 v225;
  int v226;
  float v227;
  float v228;
  float32x2_t v229;
  float v230;
  float v231;
  float v232;
  float v233;
  __int64 v234;
  int v235;
  float v236;
  float v237;
  float32x2_t v238;
  float v239;
  float v240;
  float v241;
  float v242;
  __int64 v243;
  int v244;
  float v245;
  float32x2_t v246;
  float v247;
  float v248;
  float v249;
  float v250;
  float v251;
  float32x4_t* v252;
  unsigned int v253;
  unsigned int v254;
  unsigned int v255;
  unsigned int v257;
  int v258;
  unsigned __int8 v259;
  float v260;
  __int64 v261;
  __int64 v262;
  int v263;
  float v264;
  float v265;
  float v266;
  float v267;
  int v268;
  unsigned int v269;
  unsigned __int8 v270;
  long double v271;
  int v272;
  long double v273;
  int8x16_t v274;
  unsigned __int64 v275;
  unsigned __int32 v276;
  float v277;
  struct {
    float32x4_t v279;
    __int64 v280;
    char gap104_[8];
    float32x4_t* v281;
  } v279_;
  float32x4_t v282;
  char v283[4];
  float32x4_t v284;
  float32x4_t v285;
  struct {
    int8x16_t v286;
    __int64 v287;
    __int64 v288;
    __int64 v289;
    __int64 v290;
    __int64 v291;
    __int64 v292;
    __int64 v293;
    __int64 v294;
    __int64 v295;
    __int64 v296;
    __int64 v297;
    __int64 v298;
    __int64 v299;
    __int64 v300;
  } v286_;

  v10 = *(_DWORD*)(a1 + 8);
  v11 = *(_DWORD*)(a1 + 12);
  if (*(float*)(a1 + 28) == *(float*)(a1 + 24)) {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, unsigned __int64))(
        *(_QWORD*)(a1 + 16) + 16LL))((void*)(&v282), a1 + 16);
  }
  else {
    v13 = *(_QWORD*)(a1 + 72);
    LANES128(v282).n128_u64[0] = *(_QWORD*)(a1 + 64);
    LANES128(v282).n128_u64[1] = v13;
  }
  v14 = game_g_game_setting_ptr;
  v15 = *(_QWORD*)game_g_game_setting_ptr;
  v16 = *(_DWORD*)(*(_QWORD*)game_g_game_setting_ptr + 944LL);
  v17 = game_g_frame_clock_ptr[0];
  v18 = (__int64*)GameData_212d038[0];
  if ((v16 & 0x78000) != 0 &&
      (*(_BYTE*)(v15 + 807) != 1 ||
       (*(_BYTE*)(v15 + 804) & 1) == 0 &&
           (*(_BYTE*)(v15 + 940) != 1 || (*(_BYTE*)(v15 + 805) & 1) == 0 ||
            (*(_BYTE*)(v15 + 806) & 1) == 0)) &&
      (*(_BYTE*)(v15 + 903) != 1 ||
       (*(_BYTE*)(v15 + 900) & 1) == 0 &&
           (*(_BYTE*)(v15 + 940) != 1 || (*(_BYTE*)(v15 + 901) & 1) == 0 ||
            (*(_BYTE*)(v15 + 902) & 1) == 0))) {
    v24 = *(_DWORD*)(a1 + 172);
    v25 = *(_DWORD*)(v15 + 952);
    if (v24 >= 7) {
      v24 = 7;
    }
    v26 = v24 + 1;
    *(_DWORD*)(a1 + 172) = v26;
    if ((v16 & 8) == 0) {
      v27 = (v25 & 0x78000) != 0 || v26 == 8;
      if (!v27) {
        goto LABEL_227;
      }
    }
    v28 = *(_DWORD*)(v15 + 952);
    v286_.v286 = (__typeof__(v286_.v286)){0};
    if ((v28 & 0x20000) != 0) {
      v29 = 0x1.4000000000000p+2f;
    }
    else {
      v29 = 0x0.0p+0f;
      if ((*(_BYTE*)(v15 + 946) & 2) != 0) {
        v30 = 0x1.e000000000000p+5f / (float)*(int*)(*v17 + 476);
        if (v30 <= 0x0.0p+0f) {
          v31 = 0x1.4000000000000p+2f;
        }
        else {
          v31 = v30 * 0x1.4000000000000p+2f;
        }
        v32 = game_8224a0(3u);
        v33 = 0x0.0p+0f;
        if (game_GameModeData_instance_ != 0) {
          v34 = game_GameVariableTable_Find(
              *(_QWORD**)(game_GameModeData_instance_ + 48),
              (unsigned __int64*)v32);
          if (v34 != 0) {
            v33 = (float)*(int*)(v34 + 32);
          }
        }
        v15 = *(_QWORD*)v14;
        v29 = (float)(v31 / v33) + (float)(v31 / v33);
        v28 = *(_DWORD*)(*(_QWORD*)v14 + 952LL);
        if ((*(_BYTE*)(*(_QWORD*)v14 + 944LL) & 8) == 0) {
          v29 = v31 / v33;
        }
      }
    }
    v35 = 0x0.0p+0f;
    LANES128(v286_.v286).n128_f32[0] = 0x0.0p+0f - v29;
    v36 = v286_.v286;
    if ((v28 & 0x40000) != 0) {
      v35 = 0x1.4000000000000p+2f;
    }
    else if ((*(_BYTE*)(v15 + 946) & 4) != 0) {
      v274 = v286_.v286;
      v37 = 0x1.e000000000000p+5f / (float)*(int*)(*v17 + 476);
      if (v37 <= 0x0.0p+0f) {
        v38 = 0x1.4000000000000p+2f;
      }
      else {
        v38 = v37 * 0x1.4000000000000p+2f;
      }
      v39 = game_8224a0(3u);
      v40 = 0x0.0p+0f;
      if (game_GameModeData_instance_ != 0) {
        v41 = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)v39);
        if (v41 != 0) {
          v40 = (float)*(int*)(v41 + 32);
        }
      }
      v35 = v38 / v40;
      v15 = *(_QWORD*)v14;
      v28 = *(_DWORD*)(*(_QWORD*)v14 + 952LL);
      if ((*(_BYTE*)(*(_QWORD*)v14 + 944LL) & 8) != 0) {
        v35 = v35 + v35;
      }
      v36 = v274;
    }
    v42 = LANES128(v36).n128_f32[2];
    LANES128(v286_.v286).n128_f32[0] = LANES128(v36).n128_f32[0] + v35;
    v43 = 0x1.4000000000000p+2f;
    if ((v28 & 0x8000) != 0) {
      v44 = 0x1.4000000000000p+2f;
    }
    else {
      v44 = 0x0.0p+0f;
      if ((*(_BYTE*)(v15 + 945) & 0x80) != 0) {
        v45 = 0x1.e000000000000p+5f / (float)*(int*)(*v17 + 476);
        if (v45 <= 0x0.0p+0f) {
          v46 = 0x1.4000000000000p+2f;
        }
        else {
          v46 = v45 * 0x1.4000000000000p+2f;
        }
        v47 = game_8224a0(3u);
        v48 = 0x0.0p+0f;
        if (game_GameModeData_instance_ != 0) {
          v49 = game_GameVariableTable_Find(
              *(_QWORD**)(game_GameModeData_instance_ + 48),
              (unsigned __int64*)v47);
          if (v49 != 0) {
            v48 = (float)*(int*)(v49 + 32);
          }
        }
        v44 = v46 / v48;
        v15 = *(_QWORD*)v14;
        v28 = *(_DWORD*)(*(_QWORD*)v14 + 952LL);
        if ((*(_BYTE*)(*(_QWORD*)v14 + 944LL) & 8) != 0) {
          v44 = v44 + v44;
        }
      }
    }
    LANES128(v50).n128_u64[0] = LANES128(v286_.v286).n128_u64[0];
    v51 = v42 - v44;
    if ((v28 & 0x10000) == 0) {
      v43 = 0x0.0p+0f;
      if ((*(_BYTE*)(v15 + 946) & 1) != 0) {
        v275 = LANES128(v286_.v286).n128_u64[0];
        v52 = 0x1.e000000000000p+5f / (float)*(int*)(*v17 + 476);
        if (v52 <= 0x0.0p+0f) {
          v53 = 0x1.4000000000000p+2f;
        }
        else {
          v53 = v52 * 0x1.4000000000000p+2f;
        }
        v54 = game_8224a0(3u);
        v55 = 0x0.0p+0f;
        if (game_GameModeData_instance_ != 0) {
          v56 = game_GameVariableTable_Find(
              *(_QWORD**)(game_GameModeData_instance_ + 48),
              (unsigned __int64*)v54);
          if (v56 != 0) {
            v55 = (float)*(int*)(v56 + 32);
          }
        }
        if ((*(_BYTE*)(*(_QWORD*)v14 + 944LL) & 8) != 0) {
          v43 = (float)(v53 / v55) + (float)(v53 / v55);
        }
        else {
          v43 = v53 / v55;
        }
        LANES128(v50).n128_u64[0] = v275;
      }
    }
    LANES128(v50).n128_f32[2] = v51 + v43;
    LANES128(v50).n128_u32[3] = 0;
    v286_.v286 = v50;
    Camera_7c13a0((void*)(&v279_.v279), *GameData_212cfc8[0], &v286_.v286);
    LANES128(v57).n128_u64[0] = LANES128(v279_.v279).n128_u64[0];
    LANES128(v57).n128_u64[1] = LANES128(v279_.v279).n128_u32[2];
    v58 = vmulq_f32(v57, v57);
    v286_.v286 = v57;
    LANES128(v58).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v58, v58, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0])))
            .n64_f32[0] <= 0x0.0p+0f) {
      goto LABEL_227;
    }
    if (*(float*)(a1 + 28) == *(float*)(a1 + 24)) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, unsigned __int64))(
          *(_QWORD*)(a1 + 16) + 16LL))((void*)(&v279_.v279), a1 + 16);
      if (*(float*)(a1 + 28) == *(float*)(a1 + 24)) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, unsigned __int64))(
            *(_QWORD*)(a1 + 16) + 16LL))((void*)(&v284), a1 + 16);
      LABEL_265:
        v137 = vaddq_f32(v284, v286_.v286);
        v138 = (unsigned __int8*)*GameData_212ce98[0];
        if (*GameData_212ce98[0] != 0) {
          v139 = *(_DWORD*)(a1 + 184);
          v140 = *(_DWORD*)(a1 + 188);
          v141 = v138[30];
          v142 = v138[28] | 0x100;
          v143 = v138[29];
          v144 = v138[31];
          if (v139 <= 1) {
            v139 = 1;
          }
          if (v140 <= 1) {
            v140 = 1;
          }
          v145 = (float)((float)((float)v142 * 0x1.4000000000000p+2f) +
                         0x1.4000000000000p+1f) +
                 -0x1.4000000000000p+10f;
          v146 = (float)((float)((float)(v141 - v139 + 257) *
                                 0x1.4000000000000p+2f) +
                         0x1.4000000000000p+1f) +
                 -0x1.4000000000000p+10f;
          v147 = (float)((float)((float)(v144 - v140 + 257) *
                                 0x1.4000000000000p+2f) +
                         0x1.4000000000000p+1f) +
                 -0x1.4000000000000p+10f;
          if (v146 >= LANES128(v137).n128_f32[0]) {
            v146 = LANES128(v137).n128_f32[0];
          }
          if (LANES128(v137).n128_f32[0] >= v145) {
            v145 = v146;
          }
          LANES128(v137).n128_f32[0] = v145;
          if (v147 >= LANES128(v137).n128_f32[2]) {
            v147 = LANES128(v137).n128_f32[2];
          }
          if (LANES128(v137).n128_f32[2] <
              (float)((float)((float)((float)(v143 | 0x100u) *
                                      0x1.4000000000000p+2f) +
                              0x1.4000000000000p+1f) +
                      -0x1.4000000000000p+10f)) {
            v147 = (float)((float)((float)(v143 | 0x100u) *
                                   0x1.4000000000000p+2f) +
                           0x1.4000000000000p+1f) +
                   -0x1.4000000000000p+10f;
          }
          LANES128(v137).n128_u64[1] = LODWORD(v147);
        }
        v285 = v137;
        Cursor_734a80(a1 + 16, (__int64*)&v285);
        if (*(float*)(a1 + 28) == *(float*)(a1 + 24)) {
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, unsigned __int64))(
              *(_QWORD*)(a1 + 16) + 16LL))((void*)(&v284), a1 + 16);
        }
        else {
          v148 = *(_QWORD*)(a1 + 72);
          LANES128(v284).n128_u64[0] = *(_QWORD*)(a1 + 64);
          LANES128(v284).n128_u64[1] = v148;
        }
        v149 = v286_.v286;
        v150 = vmulq_f32(v149, v149);
        LANES128(v150).n128_u64[0] =
            LANES64_OF(
                vadd_f32(COERCE_AS(
                             float32x2_t,
                             LANES128_OF(vextq_s8(v150, v150, 8u)).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v150).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v150).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v150).n128_u64[0])))
                .n64_f32[0] > 0x0.0p+0f) {
          v151 = vsubq_f32(v279_.v279, v284);
          v152 = vmulq_f32(v151, v151);
          LANES128(v152).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v152, v152, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v152).n128_u64[0])))
                  .n64_u64[0];
          if (LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v152).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v152).n128_u64[0])))
                  .n64_f32[0] <= 0x0.0p+0f) {
            v153 = *v18;
            *(_QWORD*)(v153 + 128) = LANES128(v286_.v286).n128_u64[0];
            v154 = *(_OWORD*)(v153 + 128);
            *((_QWORD*)&v154 + 1) = LANES128(v149).n128_u32[2];
            *(_OWORD*)(v153 + 128) = v154;
          }
        }
        goto LABEL_227;
      }
    }
    else {
      v135 = *(_QWORD*)(a1 + 72);
      LANES128(v279_.v279).n128_u64[0] = *(_QWORD*)(a1 + 64);
      LANES128(v279_.v279).n128_u64[1] = v135;
    }
    v136 = *(_QWORD*)(a1 + 72);
    LANES128(v284).n128_u64[0] = *(_QWORD*)(a1 + 64);
    LANES128(v284).n128_u64[1] = v136;
    goto LABEL_265;
  }
  *(_DWORD*)(a1 + 172) = 0;
  v19 = *(_OWORD*)(v15 + 960);
  if (*(_BYTE*)(v15 + 807) == 1) {
    if ((*(_BYTE*)(v15 + 804) & 1) != 0) {
      goto LABEL_14;
    }
    if (*(_BYTE*)(v15 + 940) == 1 && (*(_BYTE*)(v15 + 805) & 1) != 0 &&
        (*(_BYTE*)(v15 + 806) & 1) != 0) {
    LABEL_22:
      if (*(_BYTE*)(v15 + 940) != 1 || *(_BYTE*)(v15 + 805) != 1 ||
          (*(_BYTE*)(v15 + 806) & 1) == 0) {
        goto LABEL_74;
      }
    LABEL_14:
      if ((*(_BYTE*)(v15 + 760) & 1) != 0) {
      LABEL_15:
        if (*(_BYTE*)(*GameData_212cfd0[0] + 8) == 0 ||
            game_UnitPool_Get((_BYTE*)(*GameData_212cfd0[0] + 8)) == nullptr) {
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                    memory_order_acquire) &
               1) == 0 &&
              __cxa_guard_acquire_alt1((__int64)&GameData_21a60e8) != 0) {
            GameData_21a60e0 = 0;
            __cxa_guard_release_alt1((__int64)&GameData_21a60e8);
          }
          v20 = 0x0.0p+0f;
          v21 = 0x0.0p+0f;
        LABEL_50:
          *(_QWORD*)(a1 + 160) = GameData_21a60e0;
          goto LABEL_183;
        }
      }
    LABEL_128:
      if (GameData_2258178 != 0) {
        v59 = *(float*)(GameData_2258178 + 200);
      }
      else {
        v59 = 0x0.0p+0f;
      }
      v60 = v59 * GameHr_1552870();
      if (GameData_2258178 == 0) {
        v63 = 0x0.0p+0f;
        v64 = v60 * 0x0.0p+0f;
        goto LABEL_153;
      }
      v61 = *(_BYTE**)v14;
      if (*(_BYTE*)(*(_QWORD*)v14 + 807LL) == 1 &&
          ((v61[804] & 1) != 0 ||
           v61[940] == 1 && v61[805] == 1 && (v61[806] & 1) != 0)) {
        v62 = 520;
      }
      else {
        LODWORD(v65) = 0;
        if (v61[903] != 1 ||
            (v61[900] & 1) == 0 &&
                (v61[940] != 1 || v61[901] != 1 || v61[902] != 1)) {
          goto LABEL_143;
        }
        v62 = 528;
      }
      v65 = *(_QWORD*)(GameData_2258178 + v62);
    LABEL_143:
      v64 = v60 * *(float*)&v65;
      if (*(_BYTE*)(*(_QWORD*)v14 + 807LL) != 0 &&
          ((v61[804] & 1) != 0 ||
           v61[940] == 1 && v61[805] == 1 && (v61[806] & 1) != 0)) {
        v66 = 524;
      }
      else {
        v63 = 0x0.0p+0f;
        if (v61[903] != 1 ||
            (v61[900] & 1) == 0 &&
                (v61[940] != 1 || v61[901] != 1 || v61[902] != 1)) {
          goto LABEL_153;
        }
        v66 = 532;
      }
      v63 = *(float*)(GameData_2258178 + v66);
    LABEL_153:
      v67 = -(float)(v63 * v60);
      if (v64 <= 0x0.0p+0f) {
        v21 = 0x0.0p+0f;
        if (v64 < 0x0.0p+0f) {
          DWORD1(a6) = 0;
          if ((float)((float)(v64 + 0x1.99999a0000000p-3f) +
                      COERCE_FLOAT(*(_QWORD*)(a1 + 160))) <= 0x0.0p+0f) {
            v21 = (float)(v64 + 0x1.99999a0000000p-3f) +
                  COERCE_FLOAT(*(_QWORD*)(a1 + 160));
          }
          else {
            v21 = 0x0.0p+0f;
          }
        }
      }
      else {
        DWORD1(a6) = 0;
        if ((float)((float)(v64 + -0x1.99999a0000000p-3f) +
                    COERCE_FLOAT(*(_QWORD*)(a1 + 160))) >= 0x0.0p+0f) {
          v21 = (float)(v64 + -0x1.99999a0000000p-3f) +
                COERCE_FLOAT(*(_QWORD*)(a1 + 160));
        }
        else {
          v21 = 0x0.0p+0f;
        }
      }
      if (v67 <= 0x0.0p+0f) {
        v20 = 0x0.0p+0f;
        if (v67 < 0x0.0p+0f) {
          DWORD1(a6) = 0;
          if ((float)((float)(v67 + 0x1.99999a0000000p-3f) +
                      *(float*)(a1 + 164)) <= 0x0.0p+0f) {
            v20 = (float)(v67 + 0x1.99999a0000000p-3f) + *(float*)(a1 + 164);
          }
          else {
            v20 = 0x0.0p+0f;
          }
        }
      }
      else {
        DWORD1(a6) = 0;
        if ((float)((float)(v67 + -0x1.99999a0000000p-3f) +
                    *(float*)(a1 + 164)) >= 0x0.0p+0f) {
          v20 = (float)(v67 + -0x1.99999a0000000p-3f) + *(float*)(a1 + 164);
        }
        else {
          v20 = 0x0.0p+0f;
        }
      }
      LODWORD(a8) = -1102263091;
      v68 = v64 + COERCE_FLOAT(*(_QWORD*)(a1 + 160));
      if (v68 <= 0x1.99999a0000000p-3f) {
        *(float*)&a7 = v68;
      }
      else {
        *(float*)&a7 = 0x1.99999a0000000p-3f;
      }
      v69 = v67 + COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 160)));
      if (v68 >= -0x1.99999a0000000p-3f) {
        v70 = *(float*)&a7;
      }
      else {
        v70 = -0x1.99999a0000000p-3f;
      }
      if (v69 <= 0x1.99999a0000000p-3f) {
        v71 = v69;
      }
      else {
        v71 = 0x1.99999a0000000p-3f;
      }
      if (v69 >= -0x1.99999a0000000p-3f) {
        v72 = v71;
      }
      else {
        v72 = -0x1.99999a0000000p-3f;
      }
      *(float*)(a1 + 160) = v70;
      *(float*)(a1 + 164) = v72;
      v73 = (float)(PSEUDO_UNFUSED(v20 * v20)) + (float)(v21 * v21);
      if (v73 > 0x1.0000000000000p+1f) {
        v74 = 0x1.0000000000000p+1f - (float)(0x1.0000000000000p+1f / v73);
        v21 = v21 * v74;
        v20 = v20 * v74;
      }
    LABEL_183:
      if (v21 != 0x0.0p+0f || v20 != 0x0.0p+0f) {
        v75 = *v17;
        v76 = 0x1.4000000000000p+2f;
        v286_.v286 = (__typeof__(v286_.v286)){0};
        v77 = 0x1.e000000000000p+5f / (float)*(int*)(v75 + 476);
        if (v77 <= 0x0.0p+0f) {
          v78 = 0x1.4000000000000p+2f;
        }
        else {
          v78 = v77 * 0x1.4000000000000p+2f;
        }
        v79 = game_8224a0(3u);
        v80 = 0x0.0p+0f;
        v81 = 0x0.0p+0f;
        if (game_GameModeData_instance_ != 0) {
          v82 = game_GameVariableTable_Find(
              *(_QWORD**)(game_GameModeData_instance_ + 48),
              (unsigned __int64*)v79);
          v81 = 0x0.0p+0f;
          if (v82 != 0) {
            v81 = (float)*(int*)(v82 + 32);
          }
        }
        v83 = v78 / v81;
        v84 = *v17;
        if ((*(_DWORD*)(*(_QWORD*)v14 + 944LL) & 8) != 0) {
          v83 = v83 + v83;
        }
        LANES128(v286_.v286).n128_f32[0] = v21 * v83;
        v85 = 0x1.e000000000000p+5f / (float)*(int*)(v84 + 476);
        if (v85 > 0x0.0p+0f) {
          v76 = v85 * 0x1.4000000000000p+2f;
        }
        v86 = game_8224a0(3u);
        if (game_GameModeData_instance_ != 0) {
          v87 = game_GameVariableTable_Find(
              *(_QWORD**)(game_GameModeData_instance_ + 48),
              (unsigned __int64*)v86);
          if (v87 != 0) {
            v80 = (float)*(int*)(v87 + 32);
          }
        }
        v88 = v76 / v80;
        if ((*(_DWORD*)(*(_QWORD*)v14 + 944LL) & 8) != 0) {
          v88 = v88 + v88;
        }
        LANES128(v89).n128_u64[0] = LANES128(v286_.v286).n128_u64[0];
        LANES128(v89).n128_u64[1] = COERCE_UNSIGNED_INT(v88 * (float)-v20);
        v286_.v286 = v89;
        Camera_7c10e0((void*)(&v279_.v279), *GameData_212cfc8[0], &v286_.v286);
        LANES128(v90).n128_u64[0] = LANES128(v279_.v279).n128_u64[0];
        LANES128(v90).n128_u64[1] = LANES128(v279_.v279).n128_u32[2];
        v286_.v286 = v90;
        v91 = *(float*)(a1 + 28);
        if (v91 == *(float*)(a1 + 24)) {
          (*(__attribute__((swiftcall)) void (**)(
              PSEUDO_X8, unsigned __int64, float))(*(_QWORD*)(a1 + 16) + 16LL))(
              (void*)(&v279_.v279), a1 + 16, v91);
          if (*(float*)(a1 + 28) == *(float*)(a1 + 24)) {
            (*(__attribute__((swiftcall)) void (**)(
                PSEUDO_X8, unsigned __int64))(*(_QWORD*)(a1 + 16) + 16LL))(
                (void*)(&v284), a1 + 16);
          LABEL_206:
            v94 = vaddq_f32(v284, v286_.v286);
            v95 = (unsigned __int8*)*GameData_212ce98[0];
            if (*GameData_212ce98[0] != 0) {
              v96 = *(_DWORD*)(a1 + 184);
              v97 = *(_DWORD*)(a1 + 188);
              v98 = v95[30];
              v99 = v95[28] | 0x100;
              v100 = v95[29];
              v101 = v95[31];
              if (v96 <= 1) {
                v96 = 1;
              }
              if (v97 <= 1) {
                v97 = 1;
              }
              v102 = (float)((float)((float)v99 * 0x1.4000000000000p+2f) +
                             0x1.4000000000000p+1f) +
                     -0x1.4000000000000p+10f;
              v103 = (float)((float)((float)(v98 - v96 + 257) *
                                     0x1.4000000000000p+2f) +
                             0x1.4000000000000p+1f) +
                     -0x1.4000000000000p+10f;
              v104 = (float)((float)((float)(v101 - v97 + 257) *
                                     0x1.4000000000000p+2f) +
                             0x1.4000000000000p+1f) +
                     -0x1.4000000000000p+10f;
              if (v103 >= LANES128(v94).n128_f32[0]) {
                v103 = LANES128(v94).n128_f32[0];
              }
              if (LANES128(v94).n128_f32[0] >= v102) {
                v102 = v103;
              }
              LANES128(v94).n128_f32[0] = v102;
              if (v104 >= LANES128(v94).n128_f32[2]) {
                v104 = LANES128(v94).n128_f32[2];
              }
              if (LANES128(v94).n128_f32[2] <
                  (float)((float)((float)((float)(v100 | 0x100u) *
                                          0x1.4000000000000p+2f) +
                                  0x1.4000000000000p+1f) +
                          -0x1.4000000000000p+10f)) {
                v104 = (float)((float)((float)(v100 | 0x100u) *
                                       0x1.4000000000000p+2f) +
                               0x1.4000000000000p+1f) +
                       -0x1.4000000000000p+10f;
              }
              LANES128(v94).n128_u64[1] = LODWORD(v104);
            }
            v285 = v94;
            Cursor_734a80(a1 + 16, (__int64*)&v285);
            if (*(float*)(a1 + 28) == *(float*)(a1 + 24)) {
              (*(__attribute__((swiftcall)) void (**)(
                  PSEUDO_X8, unsigned __int64))(*(_QWORD*)(a1 + 16) + 16LL))(
                  (void*)(&v284), a1 + 16);
            }
            else {
              v105 = *(_QWORD*)(a1 + 72);
              LANES128(v284).n128_u64[0] = *(_QWORD*)(a1 + 64);
              LANES128(v284).n128_u64[1] = v105;
            }
            v106 = v286_.v286;
            v107 = vmulq_f32(v106, v106);
            LANES128(v107).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v107, v107, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v107).n128_u64[0])))
                    .n64_u64[0];
            if (LANES64_OF(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v107).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v107).n128_u64[0])))
                    .n64_f32[0] > 0x0.0p+0f) {
              v108 = vsubq_f32(v279_.v279, v284);
              v109 = vmulq_f32(v108, v108);
              LANES128(v109).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(float32x2_t,
                                    LANES128_OF(vextq_s8(v109, v109, 8u))
                                        .n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v109).n128_u64[0])))
                      .n64_u64[0];
              if (LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v109).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v109).n128_u64[0])))
                      .n64_f32[0] <= 0x0.0p+0f) {
                v110 = *v18;
                *(_QWORD*)(v110 + 128) = LANES128(v286_.v286).n128_u64[0];
                v111 = *(_OWORD*)(v110 + 128);
                *((_QWORD*)&v111 + 1) = LANES128(v106).n128_u32[2];
                *(_OWORD*)(v110 + 128) = v111;
              }
            }
            *(float*)(a1 + 176) = v21;
            *(float*)(a1 + 180) = v20;
            goto LABEL_227;
          }
        }
        else {
          v92 = *(_QWORD*)(a1 + 72);
          LANES128(v279_.v279).n128_u64[0] = *(_QWORD*)(a1 + 64);
          LANES128(v279_.v279).n128_u64[1] = v92;
        }
        v93 = *(_QWORD*)(a1 + 72);
        LANES128(v284).n128_u64[0] = *(_QWORD*)(a1 + 64);
        LANES128(v284).n128_u64[1] = v93;
        goto LABEL_206;
      }
      *(_QWORD*)(a1 + 176) = 0;
    LABEL_227:
      if (*(float*)(a1 + 28) == *(float*)(a1 + 24)) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, unsigned __int64))(
            *(_QWORD*)(a1 + 16) + 16LL))((void*)(&v286_.v286), a1 + 16);
      }
      else {
        v112 = *(_QWORD*)(a1 + 72);
        LANES128(v286_.v286).n128_u64[0] = *(_QWORD*)(a1 + 64);
        LANES128(v286_.v286).n128_u64[1] = v112;
      }
      v113 = *(long double*)&v286_.v286;
      v114 = *(long double*)&v282;
      v115 = COERCE_LONG_DOUBLE(vsubq_f32(v286_.v286, v282));
      v116 = *((float*)&v115 + 2);
      if (*(float*)&v115 == 0x0.0p+0f && *((float*)&v115 + 2) == 0x0.0p+0f) {
        goto LABEL_337;
      }
      LODWORD(v114) = *(_DWORD*)(a1 + 24);
      LODWORD(v113) = *(_DWORD*)(a1 + 28);
      v276 = LODWORD(v115);
      if (*(float*)&v113 == *(float*)&v114) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, unsigned __int64))(
            *(_QWORD*)(a1 + 16) + 16LL))((void*)(&v286_.v286), a1 + 16);
        LODWORD(v114) = *(_DWORD*)(a1 + 24);
        LODWORD(v113) = *(_DWORD*)(a1 + 28);
      }
      else {
        v117 = *(_QWORD*)(a1 + 72);
        LANES128(v286_.v286).n128_u64[0] = *(_QWORD*)(a1 + 64);
        LANES128(v286_.v286).n128_u64[1] = v117;
      }
      LODWORD(a6) = 1045220557;
      *(_DWORD*)(a1 + 8) =
          (int)(float)(PSEUDO_UNFUSED((float)(LANES128(v286_.v286).n128_f32[0] +
                                              0x1.4000000000000p+10f) *
                                      0x1.99999a0000000p-3f)) -
          256;
      if (*(float*)&v113 == *(float*)&v114) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, unsigned __int64))(
            *(_QWORD*)(a1 + 16) + 16LL))((void*)(&v286_.v286), a1 + 16);
      }
      else {
        v118 = *(_QWORD*)(a1 + 72);
        LANES128(v286_.v286).n128_u64[0] = *(_QWORD*)(a1 + 64);
        LANES128(v286_.v286).n128_u64[1] = v118;
      }
      v119 =
          (int)(float)(PSEUDO_UNFUSED((float)(LANES128(v286_.v286).n128_f32[2] +
                                              0x1.4000000000000p+10f) *
                                      0x1.99999a0000000p-3f)) -
          256;
      *(_DWORD*)(a1 + 12) = v119;
      if (a2 == 0 || *(int*)(a2 + 592) < 2) {
        goto LABEL_322;
      }
      v286_.v299 = 0;
      v286_.v300 = 0;
      v286_.v297 = 0;
      v286_.v298 = 0;
      v286_.v295 = 0;
      v286_.v296 = 0;
      v286_.v293 = 0;
      v286_.v294 = 0;
      v286_.v291 = 0;
      v286_.v292 = 0;
      v286_.v289 = 0;
      v286_.v290 = 0;
      v286_.v287 = 0;
      v286_.v288 = 0;
      v120 = GameData_212ce88[0];
      v121 = *GameData_212ce88[0];
      v286_.v286 = (__typeof__(v286_.v286)){0};
      if (v121 != 0) {
        v122 = *GameData_212ce98[0];
        v123 = *(unsigned __int8*)(*GameData_212ce98[0] + 29);
        v124 = *(unsigned __int8*)(*GameData_212ce98[0] + 31);
        if (v123 <= v124) {
          v125 = *(unsigned __int8*)(v122 + 28);
          v126 = *(unsigned __int8*)(v122 + 30);
          if (v125 <= v126) {
            v272 = v10;
            do {
              v127 = 32 * v123;
              v128 = v125;
              do {
                v129 = *(_QWORD*)(v121 + 8);
                LODWORD(v130) = v128 + v127;
                if ((unsigned int)(v128 + v127) >= 0x400) {
                  v130 = 0;
                }
                else {
                  v130 = (unsigned int)v130;
                }
                if (*(unsigned __int8*)(v129 + v130 + 64) != 255 &&
                    (unsigned int)GameRoutine_747df0(
                        v129, v128, v123, *(_BYTE*)(v129 + 5)) != 255) {
                  v131 = *(char**)(a2 + 600);
                  for (i = *(char**)(a2 + 608); v131 != i;
                       LANES128(v286_.v286)
                           .n128_u32[(int)(v128 + v133 + 32 * (v123 + v134)) >>
                                     5] |= 1 << (v128 + v133)) {
                    v133 = *v131;
                    v134 = v131[1];
                    v131 += 4;
                  }
                }
                v27 = v128++ == v126;
              } while (!v27);
              v27 = v123++ == v124;
            } while (!v27);
            v119 = *(_DWORD*)(a1 + 12);
            v10 = v272;
            v18 = (__int64*)GameData_212d038[0];
            v120 = GameData_212ce88[0];
          }
        }
      }
      v155 = *(_DWORD*)(a1 + 184);
      v156 = *(_DWORD*)(a1 + 188);
      v157 = *(_DWORD*)(a1 + 8);
      v158 = &v279_.v279;
      LANES128(v279_.v279).n128_u64[0] = (unsigned __int64)GameData_1f94610;
      LANES128(v279_.v279).n128_u64[1] = a1;
      v279_.v281 = &v279_.v279;
      v159 = v155 < 1 || v156 < 1;
      v279_.v280 = a2;
      if (v159) {
        goto LABEL_320;
      }
      v160 = v10 + 32 * v11;
      v161 = v120;
      v162 = 0;
    LABEL_291:
      v163 = v155;
      v164 = v10;
      v165 = v160;
      while (1) {
        v166 = (1 << v164) & LANES128(v286_.v286).n128_u32[v165 >> 5];
        if (v166 == 0) {
          break;
        }
        ++v165;
        ++v164;
        if (--v163 == 0) {
          ++v162;
          v160 += 32;
          if (v162 != v156) {
            goto LABEL_291;
          }
          break;
        }
      }
      v167 = v157 + 32 * v119;
      v168 = 0;
    LABEL_296:
      v169 = v155;
      v170 = v157;
      v171 = v167;
      while (((LANES128(v286_.v286).n128_u32[v171 >> 5] >> v170) & 1) != 0) {
        ++v171;
        ++v170;
        if (--v169 == 0) {
          ++v168;
          v167 += 32;
          if (v168 == v156) {
            if (v166 == 0) {
              v172 = *v161;
              if (*v161 != 0) {
                v173 = v157 - v10;
                v174 = v119 - v11;
                if (((v173 * v173) | (v174 * v174)) != 0) {
                  *(float*)&v115 = (float)v173;
                  v175 = (float)v174;
                  if ((v173 | v174) != 0) {
                    v176 = sqrtf((float)(PSEUDO_UNFUSED(v175 * v175)) +
                                 (float)(*(float*)&v115 * *(float*)&v115));
                    *(float*)&v115 = *(float*)&v115 / v176;
                    v175 = v175 / v176;
                  }
                  *((float*)&v115 + 1) = v175;
                }
                else {
                  *(_QWORD*)&v115 = *Vector_650640();
                }
                v253 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
                v254 = *(unsigned __int8*)(*GameData_212ce98[0] + 29);
                v255 = *(unsigned __int8*)(*GameData_212ce98[0] + 30);
                if (v254 <= *(unsigned __int8*)(*GameData_212ce98[0] + 31) &&
                    v253 <= v255) {
                  v268 = *(unsigned __int8*)(*GameData_212ce98[0] + 31);
                  v257 = v255 + 1;
                  v258 = 32 * v254;
                  v271 = v115;
                  v270 = 0;
                  v259 = 0;
                  v260 = 0x1.0000000000000p+12f;
                  v269 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
                  LODWORD(v114) = -996147200;
                  do {
                    *(float*)&v113 = (float)((float)((float)(v254 + 256) *
                                                     0x1.4000000000000p+2f) +
                                             0x1.4000000000000p+1f) +
                                     -0x1.4000000000000p+10f;
                    v273 = v113;
                    do {
                      v261 = *(_QWORD*)(v172 + 8);
                      LODWORD(v262) = v258 + v253;
                      if (v258 + v253 >= 0x400) {
                        v262 = 0;
                      }
                      else {
                        v262 = (unsigned int)v262;
                      }
                      if (*(unsigned __int8*)(v261 + v262 + 64) != 255 &&
                          (unsigned int)GameRoutine_747df0(
                              v261, v253, v254, *(_BYTE*)(v261 + 5)) != 255) {
                        v263 = *(_DWORD*)(a2 + 592);
                        v264 = (float)((float)((float)(v253 + 256) *
                                               0x1.4000000000000p+2f) +
                                       0x1.4000000000000p+1f) +
                               -0x1.4000000000000p+10f;
                        if (v263 < 2) {
                          v114 = v273;
                        }
                        else {
                          v265 = (float)((float)(unsigned int)(v263 - 1) *
                                         0x1.4000000000000p+1f) +
                                 -0x1.4000000000000p-1f;
                          v115 = v273;
                          v264 = v264 + v265;
                          *(float*)&v114 = *(float*)&v273 + v265;
                        }
                        DWORD1(v113) = LODWORD(v114);
                        LODWORD(a6) =
                            COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
                        *(float*)&v114 =
                            v264 -
                            (float)((float)((float)((float)(v10 + 256) *
                                                    0x1.4000000000000p+2f) +
                                            0x1.4000000000000p+1f) +
                                    -0x1.4000000000000p+10f);
                        v266 = *((float*)&v113 + 1) -
                               (float)((float)((float)((float)(v11 + 256) *
                                                       0x1.4000000000000p+2f) +
                                               0x1.4000000000000p+1f) +
                                       -0x1.4000000000000p+10f);
                        *(float*)&v113 =
                            (float)(PSEUDO_UNFUSED(v266 * v266)) +
                            (float)(*(float*)&v114 * *(float*)&v114);
                        if (*(float*)&v113 <= 0x0.0p+0f) {
                          goto LABEL_482;
                        }
                        if (*(float*)&v114 != 0x0.0p+0f || v266 != 0x0.0p+0f) {
                          v267 = sqrtf(*(float*)&v113);
                          *(float*)&v114 = *(float*)&v114 / v267;
                          v266 = v266 / v267;
                        }
                        *((float*)&v114 + 1) = v266;
                        a6 = v271;
                        DWORD1(v115) =
                            LANES64_OF(vmul_f32(*(float32x2_t*)&v271,
                                                *(float32x2_t*)&v114))
                                .n64_u32[1];
                        LODWORD(v115) = DWORD1(v115);
                        *(float*)&a6 = *((float*)&v115 + 1) +
                                       (float)(*(float*)&v271 * *(float*)&v114);
                        if (*(float*)&a6 > 0x0.0p+0f) {
                        LABEL_482:
                          *(float*)&v114 = 0x1.0000000000000p+0f - *(float*)&a6;
                          LODWORD(v115) = 1132462080;
                          *(float*)&v113 =
                              (float)(0x1.0000000000000p+0f - *(float*)&a6) +
                              (float)(sqrtf(*(float*)&v113) *
                                      0x1.0000000000000p+8f);
                          if (*(float*)&v113 < v260) {
                            v260 = *(float*)&v113;
                            v270 = v254;
                            v259 = v253;
                          }
                        }
                      }
                      ++v253;
                    } while (v257 != v253);
                    v253 = v269;
                    v258 += 32;
                    v27 = v254++ == v268;
                  } while (!v27);
                  if ((char)v259 >= 1 && (char)v270 >= 1) {
                    LANES128(v285).n128_u32[0] = v259;
                    LANES128(v284).n128_u32[0] = v270;
                    v283[0] = 1;
                    v252 = v279_.v281;
                    if (v279_.v281 == nullptr) {
                      goto LABEL_487;
                    }
                  LABEL_459:
                    (*(void (**)(float32x4_t*, float32x4_t*, float32x4_t*,
                                 char*, long double, long double, long double,
                                 long double, long double, long double,
                                 long double, long double))(
                        LANES128(*(v252)).n128_u64[0] + 48))(
                        v252, &v285, &v284, v283, v113, v114, v115, a6, a7, a8,
                        a9, a10);
                  }
                }
              }
            }
            goto LABEL_317;
          }
          goto LABEL_296;
        }
      }
      if (v166 == 0) {
        goto LABEL_317;
      }
      v177 = v157 - v10;
      v178 = v119 - v11;
      if (((v177 * v177) | (v178 * v178)) != 0) {
        *(float*)&v113 = (float)v177;
        v179 = (float)v178;
        if ((v177 | v178) != 0) {
          v180 = sqrtf((float)(PSEUDO_UNFUSED(v179 * v179)) +
                       (float)(*(float*)&v113 * *(float*)&v113));
          *(float*)&v113 = *(float*)&v113 / v180;
          v179 = v179 / v180;
        }
        *((float*)&v113 + 1) = v179;
      }
      else {
        *(_QWORD*)&v113 = *Vector_650640();
      }
      v181 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
      v182 = *(unsigned __int8*)(*GameData_212ce98[0] + 29);
      v183 = *(unsigned __int8*)(*GameData_212ce98[0] + 30);
      v184 = *(unsigned __int8*)(*GameData_212ce98[0] + 31);
      if (v182 > v184 || v181 > v183) {
        goto LABEL_317;
      }
      LODWORD(v114) = COERCE_UNSIGNED_INT((float)(0x1.4000000000000p+1f));
      LODWORD(v115) = COERCE_UNSIGNED_INT((float)(0x1.4000000000000p+2f));
      v218 = 0;
      v219 = 0;
      LODWORD(a9) = -996147200;
      v220 = 0x1.0000000000000p+12f;
      *(float*)&a6 =
          (float)((float)((float)(v157 + 256) * 0x1.4000000000000p+2f) +
                  0x1.4000000000000p+1f) +
          -0x1.4000000000000p+10f;
      *(float*)&a10 =
          (float)((float)((float)(v181 | 0x100) * 0x1.4000000000000p+2f) +
                  0x1.4000000000000p+1f) +
          -0x1.4000000000000p+10f;
      *(float*)&a7 =
          (float)((float)((float)(v119 + 256) * 0x1.4000000000000p+2f) +
                  0x1.4000000000000p+1f) +
          -0x1.4000000000000p+10f;
      a8 = a6;
      *((float*)&a8 + 1) = *(float*)&a7;
      do {
        v221 = (float)((float)((float)(v182 + 256) * 0x1.4000000000000p+2f) +
                       0x1.4000000000000p+1f) +
               -0x1.4000000000000p+10f;
        if ((((_BYTE)v183 + (_BYTE)v181) & 1) != 0) {
          v222 = 0;
          v223 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
        }
        else {
          if (((1 << v181) & LANES128(v286_.v286)
                                 .n128_u32[((v181 >> 5) + v182) & 0x7FFFFFF]) !=
              0) {
            goto LABEL_421;
          }
          v243 = *(_QWORD*)&a8;
          v244 = *(_DWORD*)(a2 + 592);
          if (v244 >= 2) {
            v245 = (float)((float)(unsigned int)(v244 - 1) *
                           0x1.4000000000000p+1f) +
                   -0x1.4000000000000p-1f;
            *(float*)&v243 = *(float*)&a6 + v245;
            *((float*)&v243 + 1) = *(float*)&a7 + v245;
          }
          LANES64(v246).n64_f32[0] = *(float*)&a10 - *(float*)&v243;
          v247 = 0x1.0000000000000p+0f;
          v248 = v221 - *((float*)&v243 + 1);
          v249 = (float)(PSEUDO_UNFUSED(v248 * v248)) +
                 (float)(LANES64(v246).n64_f32[0] * LANES64(v246).n64_f32[0]);
          if (v249 > 0x0.0p+0f) {
            if (LANES64(v246).n64_f32[0] != 0x0.0p+0f || v248 != 0x0.0p+0f) {
              v250 = sqrtf(v249);
              LANES64(v246).n64_f32[0] = LANES64(v246).n64_f32[0] / v250;
              v248 = v248 / v250;
            }
            LANES64(v246).n64_f32[1] = v248;
            v247 = LANES64_OF(vmul_f32(*(float32x2_t*)&v113, v246)).n64_f32[1] +
                   (float)(*(float*)&v113 * LANES64(v246).n64_f32[0]);
            if (v247 <= 0x0.0p+0f) {
            LABEL_421:
              v222 = v218;
            LABEL_422:
              v223 = v181 + 1;
              goto LABEL_424;
            }
          }
          v222 = v218;
          v223 = v181 + 1;
          v251 = (float)(0x1.0000000000000p+0f - v247) +
                 (float)(sqrtf(v249) * 0x1.0000000000000p+8f);
          if (v251 < v220) {
            v220 = v251;
            v222 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
            v219 = v182;
            v218 = v222;
            goto LABEL_422;
          }
        }
      LABEL_424:
        v224 = v218;
        v218 = v222;
        if (v183 != v181) {
          do {
            if (((LANES128(v286_.v286)
                      .n128_u32[(v182 + (v223 >> 5)) & 0x7FFFFFF] >>
                  v223) &
                 1) == 0) {
              v234 = *(_QWORD*)&a8;
              v235 = *(_DWORD*)(a2 + 592);
              if (v235 >= 2) {
                v236 = (float)((float)(unsigned int)(v235 - 1) *
                               0x1.4000000000000p+1f) +
                       -0x1.4000000000000p-1f;
                *(float*)&v234 = *(float*)&a6 + v236;
                *((float*)&v234 + 1) = *(float*)&a7 + v236;
              }
              v237 = 0x1.0000000000000p+0f;
              LANES64(v238).n64_f32[0] =
                  (float)((float)((float)((float)(v223 + 256) *
                                          0x1.4000000000000p+2f) +
                                  0x1.4000000000000p+1f) +
                          -0x1.4000000000000p+10f) -
                  *(float*)&v234;
              v239 = v221 - *((float*)&v234 + 1);
              v240 =
                  (float)(PSEUDO_UNFUSED(v239 * v239)) +
                  (float)(LANES64(v238).n64_f32[0] * LANES64(v238).n64_f32[0]);
              if (v240 <= 0x0.0p+0f) {
                goto LABEL_445;
              }
              if (LANES64(v238).n64_f32[0] != 0x0.0p+0f || v239 != 0x0.0p+0f) {
                v241 = sqrtf(v240);
                LANES64(v238).n64_f32[0] = LANES64(v238).n64_f32[0] / v241;
                v239 = v239 / v241;
              }
              LANES64(v238).n64_f32[1] = v239;
              v237 =
                  LANES64_OF(vmul_f32(*(float32x2_t*)&v113, v238)).n64_f32[1] +
                  (float)(*(float*)&v113 * LANES64(v238).n64_f32[0]);
              if (v237 > 0x0.0p+0f) {
              LABEL_445:
                v242 = (float)(0x1.0000000000000p+0f - v237) +
                       (float)(sqrtf(v240) * 0x1.0000000000000p+8f);
                if (v242 < v220) {
                  v220 = v242;
                  v224 = (unsigned __int8)v223;
                  v219 = v182;
                }
              }
            }
            if (((LANES128(v286_.v286)
                      .n128_u32[(v182 + ((v223 + 1) >> 5)) & 0x7FFFFFF] >>
                  (v223 + 1)) &
                 1) == 0) {
              v225 = *(_QWORD*)&a8;
              v226 = *(_DWORD*)(a2 + 592);
              if (v226 >= 2) {
                v227 = (float)((float)(unsigned int)(v226 - 1) *
                               0x1.4000000000000p+1f) +
                       -0x1.4000000000000p-1f;
                *(float*)&v225 = *(float*)&a6 + v227;
                *((float*)&v225 + 1) = *(float*)&a7 + v227;
              }
              v228 = 0x1.0000000000000p+0f;
              LANES64(v229).n64_f32[0] =
                  (float)((float)((float)((float)(v223 + 257) *
                                          0x1.4000000000000p+2f) +
                                  0x1.4000000000000p+1f) +
                          -0x1.4000000000000p+10f) -
                  *(float*)&v225;
              v230 = v221 - *((float*)&v225 + 1);
              v231 =
                  (float)(PSEUDO_UNFUSED(v230 * v230)) +
                  (float)(LANES64(v229).n64_f32[0] * LANES64(v229).n64_f32[0]);
              if (v231 <= 0x0.0p+0f) {
                goto LABEL_436;
              }
              if (LANES64(v229).n64_f32[0] != 0x0.0p+0f || v230 != 0x0.0p+0f) {
                v232 = sqrtf(v231);
                LANES64(v229).n64_f32[0] = LANES64(v229).n64_f32[0] / v232;
                v230 = v230 / v232;
              }
              LANES64(v229).n64_f32[1] = v230;
              v228 =
                  LANES64_OF(vmul_f32(*(float32x2_t*)&v113, v229)).n64_f32[1] +
                  (float)(*(float*)&v113 * LANES64(v229).n64_f32[0]);
              if (v228 > 0x0.0p+0f) {
              LABEL_436:
                v233 = (float)(0x1.0000000000000p+0f - v228) +
                       (float)(sqrtf(v231) * 0x1.0000000000000p+8f);
                if (v233 < v220) {
                  v220 = v233;
                  v224 = (unsigned __int8)(v223 + 1);
                  v219 = v182;
                }
              }
            }
            v223 += 2;
            v218 = v224;
          } while (v183 + 1 != v223);
        }
        v27 = v182++ == v184;
      } while (!v27);
      if ((char)v218 >= 1 && (char)v219 >= 1) {
        LANES128(v285).n128_u32[0] = v218;
        v283[0] = 0;
        LANES128(v284).n128_u32[0] = v219;
        v252 = v279_.v281;
        if (v279_.v281 != nullptr) {
          goto LABEL_459;
        }
      LABEL_487:
        GameRoutine_60a310();
      }
    LABEL_317:
      v158 = v279_.v281;
      if (v279_.v281 != &v279_.v279) {
        v14 = game_g_game_setting_ptr;
        v17 = game_g_frame_clock_ptr[0];
        if (v279_.v281 != nullptr) {
          v186 = 40;
          goto LABEL_321;
        }
        goto LABEL_322;
      }
    LABEL_320:
      v186 = 32;
      v14 = game_g_game_setting_ptr;
      v17 = game_g_frame_clock_ptr[0];
    LABEL_321:
      (*(void (**)(void*))(LANES128(*(v158)).n128_u64[0] + v186))((void*)v158);
    LABEL_322:
      v188 = *(float*)(a1 + 24);
      v187 = *(float*)(a1 + 28);
      if (v187 == v188) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, unsigned __int64))(
            *(_QWORD*)(a1 + 16) + 16LL))((void*)(&v286_.v286), a1 + 16);
        v188 = *(float*)(a1 + 24);
        v187 = *(float*)(a1 + 28);
      }
      else {
        v189 = *(_QWORD*)(a1 + 72);
        LANES128(v286_.v286).n128_u64[0] = *(_QWORD*)(a1 + 64);
        LANES128(v286_.v286).n128_u64[1] = v189;
      }
      *(_DWORD*)(a1 + 8) =
          (int)(float)(PSEUDO_UNFUSED((float)(LANES128(v286_.v286).n128_f32[0] +
                                              0x1.4000000000000p+10f) *
                                      0x1.99999a0000000p-3f)) -
          256;
      if (v187 == v188) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, unsigned __int64))(
            *(_QWORD*)(a1 + 16) + 16LL))((void*)(&v286_.v286), a1 + 16);
        v188 = *(float*)(a1 + 24);
        v187 = *(float*)(a1 + 28);
      }
      else {
        v190 = *(_QWORD*)(a1 + 72);
        LANES128(v286_.v286).n128_u64[0] = *(_QWORD*)(a1 + 64);
        LANES128(v286_.v286).n128_u64[1] = v190;
      }
      *(_DWORD*)(a1 + 12) =
          (int)(float)(PSEUDO_UNFUSED((float)(LANES128(v286_.v286).n128_f32[2] +
                                              0x1.4000000000000p+10f) *
                                      0x1.99999a0000000p-3f)) -
          256;
      if (v187 == v188) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, unsigned __int64))(
            *(_QWORD*)(a1 + 16) + 16LL))((void*)(&v284), a1 + 16);
      }
      else {
        v191 = *(_QWORD*)(a1 + 72);
        LANES128(v284).n128_u64[0] = *(_QWORD*)(a1 + 64);
        LANES128(v284).n128_u64[1] = v191;
      }
      LANES128(v193).n128_u32[1] = LANES128(v284).n128_u32[1];
      v192 = *(unsigned __int8*)(a1 + 104);
      LANES128(v193).n128_f32[0] =
          (float)((float)((float)(int)(float)((float)(LANES128(v284)
                                                          .n128_f32[0] +
                                                      0x1.4000000000000p+10f) *
                                              0x1.99999a0000000p-3f) *
                          0x1.4000000000000p+2f) +
                  0x1.4000000000000p+1f) +
          -0x1.4000000000000p+10f;
      LANES128(v193).n128_u64[1] = COERCE_UNSIGNED_INT(
          (float)((float)((float)(int)(float)((float)(LANES128(v284)
                                                          .n128_f32[2] +
                                                      0x1.4000000000000p+10f) *
                                              0x1.99999a0000000p-3f) *
                          0x1.4000000000000p+2f) +
                  0x1.4000000000000p+1f) +
          -0x1.4000000000000p+10f);
      v285 = v193;
      if (v192 == 1) {
        v194 = *(_QWORD*)(a1 + 80);
        v286_.v286 = v193;
        v279_.v279 = v193;
        (*(void (**)(unsigned __int64, int8x16_t*, float32x4_t*))(v194 + 24))(
            a1 + 80, &v286_.v286, &v279_.v279);
        *(_DWORD*)(a1 + 88) = 0;
        goto LABEL_336;
      }
      if (*(float*)(a1 + 88) > 0x1.0000000000000p-3f ||
          (v195 = (*(
               __int64 (**)(unsigned __int64, float32x4_t*, unsigned __int64))(
               *(_QWORD*)(a1 + 80) + 8LL))(a1 + 80, &v285, a1 + 128),
           LODWORD(v115) = v276, (v195 & 1) != 0)) {
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, unsigned __int64))(
            *(_QWORD*)(a1 + 80) + 16LL))((void*)(&v286_.v286), a1 + 80);
        v279_.v279 = v285;
        (*(void (**)(unsigned __int64, int8x16_t*, float32x4_t*))(
            *(_QWORD*)(a1 + 80) + 24LL))(a1 + 80, &v286_.v286, &v279_.v279);
        *(_DWORD*)(a1 + 88) = 1040187392;
      LABEL_336:
        LODWORD(v115) = v276;
        *(_DWORD*)(a1 + 92) = 0;
        *(_WORD*)(a1 + 104) = 256;
      }
    LABEL_337:
      v196 = *(_BYTE**)v14;
      if ((*(float*)&v115 == 0x0.0p+0f || v116 == 0x0.0p+0f) &&
          (v196[807] != 1 ||
           (v196[804] & 1) == 0 && (v196[940] != 1 || (v196[805] & 1) == 0 ||
                                    (v196[806] & 1) == 0)) &&
          (v196[903] != 1 ||
           (v196[900] & 1) == 0 && (v196[940] != 1 || (v196[901] & 1) == 0 ||
                                    (v196[902] & 1) == 0))) {
        if (*(float*)(a1 + 28) == *(float*)(a1 + 24)) {
          v277 = *(float*)&v115;
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, unsigned __int64))(
              *(_QWORD*)(a1 + 16) + 16LL))((void*)(&v284), a1 + 16);
          if (v277 == 0x0.0p+0f) {
            goto LABEL_351;
          }
        }
        else {
          v198 = *(_QWORD*)(a1 + 72);
          LANES128(v284).n128_u64[0] = *(_QWORD*)(a1 + 64);
          LANES128(v284).n128_u64[1] = v198;
          if (*(float*)&v115 == 0x0.0p+0f) {
          LABEL_351:
            LANES128(v284).n128_f32[0] =
                (float)((float)((float)(int)(float)((float)(LANES128(v284)
                                                                .n128_f32[0] +
                                                            0x1.4000000000000p+10f) *
                                                    0x1.99999a0000000p-3f) *
                                0x1.4000000000000p+2f) +
                        0x1.4000000000000p+1f) +
                -0x1.4000000000000p+10f;
          }
        }
        if (v116 == 0x0.0p+0f) {
          LANES128(v197).n128_u64[0] = LANES128(v284).n128_u64[0];
          LANES128(v197).n128_f32[2] =
              (float)((float)((float)(int)(float)((float)(LANES128(v284)
                                                              .n128_f32[2] +
                                                          0x1.4000000000000p+10f) *
                                                  0x1.99999a0000000p-3f) *
                              0x1.4000000000000p+2f) +
                      0x1.4000000000000p+1f) +
              -0x1.4000000000000p+10f;
          LANES128(v197).n128_u32[3] = 0;
          v284 = v197;
        }
        else {
          v197 = v284;
        }
        v199 = *(unsigned __int8*)(a1 + 40);
        v285 = v197;
        if (v199 == 1) {
          v200 = *(_QWORD*)(a1 + 16);
          v286_.v286 = v197;
          v279_.v279 = v197;
          (*(void (**)(unsigned __int64, int8x16_t*, float32x4_t*))(v200 + 24))(
              a1 + 16, &v286_.v286, &v279_.v279);
          v201 = 0x0.0p+0f;
          goto LABEL_362;
        }
        v201 = 0x1.0000000000000p-2f;
        if (*(float*)(a1 + 24) > 0x1.0000000000000p-2f ||
            ((*(__int64 (**)(unsigned __int64, float32x4_t*, unsigned __int64))(
                 *(_QWORD*)(a1 + 16) + 8LL))(a1 + 16, &v285, a1 + 64) &
             1) != 0) {
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, unsigned __int64))(
              *(_QWORD*)(a1 + 16) + 16LL))((void*)(&v286_.v286), a1 + 16);
          v279_.v279 = v285;
          (*(void (**)(unsigned __int64, int8x16_t*, float32x4_t*))(
              *(_QWORD*)(a1 + 16) + 24LL))(a1 + 16, &v286_.v286, &v279_.v279);
        LABEL_362:
          *(float*)(a1 + 24) = v201;
          *(_DWORD*)(a1 + 28) = 0;
          *(_WORD*)(a1 + 40) = 256;
        }
        v196 = *(_BYTE**)v14;
      }
      if ((v196[953] & 4) != 0) {
        if (GameData_2258178 != 0) {
          if (v196[807] == 1 &&
              ((v196[804] & 1) != 0 ||
               v196[940] == 1 && v196[805] == 1 && (v196[806] & 1) != 0)) {
            if ((*(_BYTE*)(GameData_2258178 + 448) & 1) != 0) {
              goto LABEL_376;
            }
          }
          else if (v196[903] == 1 &&
                   ((v196[900] & 1) != 0 ||
                    v196[940] == 1 && v196[901] == 1 && v196[902] == 1) &&
                   (*(_BYTE*)(GameData_2258178 + 508) & 1) != 0) {
          LABEL_376:
            if ((a2 | GameData_21eea38) != 0) {
              goto LABEL_386;
            }
          }
        }
        if (*(_BYTE*)(*GameData_212ce88[0] + 12888) == 1) {
          v202 = *(_DWORD*)(*GameData_212ce90[0] + 20);
          *(_DWORD*)(*GameData_212ce90[0] + 20) = v202 ^ 0x100;
          if ((v202 & 0x100) != 0) {
            snd_Fade_Fade_10c830_alt1((__int64)&v286_.v286, 0x0.0p+0f);
            v203 = "SE_SYS_DangerZone_Off";
          }
          else {
            snd_Fade_Fade_10c830_alt1((__int64)&v286_.v286, 0x0.0p+0f);
            v203 = "SE_SYS_DangerZone_On";
          }
          snd_play_ff2d0_alt1((void*)(handle), (__int64)v203, (__int64)v203,
                              (__int64)&v286_.v286, 0, 0x10001u, 0, 0x0.0p+0f,
                              0x1.0000000000000p+0f);
          snd_Fade_Destroy_Fade_alt1(&v286_.v286);
        }
      }
    LABEL_386:
      v204 = 0x1.e000000000000p+5f / (float)*(int*)(*v17 + 476);
      if (v204 <= 0x0.0p+0f) {
        v205 = 0x1.4000000000000p+2f;
      }
      else {
        v205 = v204 * 0x1.4000000000000p+2f;
      }
      v206 = game_8224a0(3u);
      v207 = 0x0.0p+0f;
      if (game_GameModeData_instance_ != 0) {
        v208 = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)v206);
        if (v208 != 0) {
          v207 = (float)*(int*)(v208 + 32);
        }
      }
      v209 = v205 / v207;
      v210 = *(_BYTE**)v14;
      if ((*(_BYTE*)(*(_QWORD*)v14 + 944LL) & 8) != 0) {
        v209 = v209 + v209;
      }
      if ((*(_BYTE*)(*(_QWORD*)v14 + 807LL) == 1 &&
               ((v210[804] & 1) != 0 || v210[940] == 1 &&
                                            (v210[805] & 1) != 0 &&
                                            (v210[806] & 1) != 0) ||
           v210[903] == 1 &&
               ((v210[900] & 1) != 0 ||
                v210[940] == 1 && (v210[901] & 1) != 0 && v210[902] == 1)) &&
          GameData_2258178 != 0 && *(_BYTE*)(GameData_2258178 + 596) != 1) {
        v209 = v209 * 0x1.0000000000000p+2f;
      }
      v211 = *v18;
      v212 = *(_DWORD*)(a1 + 8);
      v213 = *(_DWORD*)(a1 + 12);
      *(_BYTE*)(v211 + 81) = 1;
      v214 = *(_DWORD*)(v211 + 148);
      *(float*)(v211 + 144) = v209;
      if (v212 == v214 && v213 == *(_DWORD*)(v211 + 152)) {
        v215 = 0;
      }
      else {
        *(_DWORD*)(v211 + 148) = v212;
        *(_DWORD*)(v211 + 152) = v213;
        v215 = 1;
      }
      *(_BYTE*)(v211 + 80) = v215;
      return *(_DWORD*)(a1 + 8) != v10 || *(_DWORD*)(a1 + 12) != v11;
    }
  }
  if (*(_BYTE*)(v15 + 903) != 1 ||
      (*(_BYTE*)(v15 + 900) & 1) == 0 &&
          (*(_BYTE*)(v15 + 940) != 1 || (*(_BYTE*)(v15 + 901) & 1) == 0 ||
           *(_BYTE*)(v15 + 902) != 1)) {
    if (*((float*)&v19 + 1) <= 0x1.0000000000000p-2f) {
      v20 = 0x0.0p+0f;
      if (*((float*)&v19 + 1) >= -0x1.0000000000000p-2f) {
        goto LABEL_44;
      }
      v22 = 0x1.0000000000000p-2f;
    }
    else {
      v22 = -0x1.0000000000000p-2f;
    }
    v20 = (float)(*((float*)&v19 + 1) + v22) * 0x1.5555560000000p+0f;
  LABEL_44:
    if (*(float*)&v19 <= 0x1.0000000000000p-2f) {
      v21 = 0x0.0p+0f;
      if (*(float*)&v19 >= -0x1.0000000000000p-2f) {
      LABEL_49:
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire_alt1((__int64)&GameData_21a60e8) != 0) {
          GameData_21a60e0 = 0;
          __cxa_guard_release_alt1((__int64)&GameData_21a60e8);
        }
        goto LABEL_50;
      }
      v23 = 0x1.0000000000000p-2f;
    }
    else {
      v23 = -0x1.0000000000000p-2f;
    }
    v21 = (float)(*(float*)&v19 + v23) * 0x1.5555560000000p+0f;
    goto LABEL_49;
  }
  if (*(_BYTE*)(v15 + 807) != 0) {
    if ((*(_BYTE*)(v15 + 804) & 1) != 0) {
      goto LABEL_14;
    }
    if (*(_BYTE*)(v15 + 940) == 1 && (*(_BYTE*)(v15 + 805) & 1) != 0 &&
        (*(_BYTE*)(v15 + 806) & 1) != 0) {
      goto LABEL_22;
    }
    if (*(_BYTE*)(v15 + 903) != 1) {
      goto LABEL_128;
    }
    if ((*(_BYTE*)(v15 + 900) & 1) != 0) {
    LABEL_123:
      if ((*(_BYTE*)(v15 + 804) & 1) != 0) {
        goto LABEL_14;
      }
      goto LABEL_22;
    }
  }
  else if ((*(_BYTE*)(v15 + 900) & 1) != 0) {
    goto LABEL_74;
  }
  if (*(_BYTE*)(v15 + 940) != 1 || (*(_BYTE*)(v15 + 901) & 1) == 0 ||
      *(_BYTE*)(v15 + 902) != 1) {
    goto LABEL_128;
  }
  if (*(_BYTE*)(v15 + 807) != 0) {
    goto LABEL_123;
  }
LABEL_74:
  if (*(_BYTE*)(v15 + 903) != 1 ||
      (*(_BYTE*)(v15 + 900) & 1) == 0 &&
          (*(_BYTE*)(v15 + 940) != 1 || *(_BYTE*)(v15 + 901) != 1 ||
           *(_BYTE*)(v15 + 902) != 1) ||
      (*(_BYTE*)(v15 + 856) & 1) == 0) {
    goto LABEL_128;
  }
  goto LABEL_15;
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
    snd_play_ff2d0((void*)(&v11), "SE_SYS_Cursor_M", "SE_SYS_Cursor_M", v12, 0,
                   65537, 0, 0.0, 1.0);
    snd_Fade_Destroy_Fade(v12);
  }
  return v9;
}

__int64 Cursor_Unknown9(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int128 v5;
  int v6;
  __int64 v7;
  float v8;
  float v9;
  __int128 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  char v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int128 v21;
  __int64 result;
  __int128 v23;
  __int128 v24;
  __int128 v25;
  __int128 v26;

  v2 = *(int*)(a2 + 20);
  v3 = *(_QWORD*)(a2 + 8);
  DWORD1(v5) = 0;
  DWORD3(v5) = 0;
  *(_DWORD*)(a2 + 20) = v2 + 1;
  v6 = *(unsigned __int8*)(v3 + v2);
  *(_DWORD*)(a2 + 20) = v2 + 2;
  v7 = *(_QWORD*)(a1 + 48);
  *(float*)&v5 = (float)((float)((float)(v6 | 0x100u) * 0x1.4000000000000p+2f) +
                         0x1.4000000000000p+1f) +
                 -0x1.4000000000000p+10f;
  v8 = (float)(*(float*)&v5 + 0x1.4000000000000p+10f) * 0x1.99999a0000000p-3f;
  v9 =
      (float)((float)((float)((float)((float)(*(unsigned __int8*)(v3 + v2 + 1) |
                                              0x100u) *
                                      0x1.4000000000000p+2f) +
                              0x1.4000000000000p+1f) +
                      -0x1.4000000000000p+10f) +
              0x1.4000000000000p+10f) *
      0x1.99999a0000000p-3f;
  *((float*)&v5 + 2) =
      (float)((float)((float)(*(unsigned __int8*)(v3 + v2 + 1) | 0x100u) *
                      0x1.4000000000000p+2f) +
              0x1.4000000000000p+1f) +
      -0x1.4000000000000p+10f;
  *(_DWORD*)(v7 + 8) = (int)v8 - 256;
  *(_DWORD*)(v7 + 12) = (int)v9 - 256;
  v25 = v5;
  Cursor_734a80(v7 + 16, (__int64*)&v25);
  DWORD1(v10) = 0;
  DWORD3(v10) = 0;
  *(float*)&v10 = (float)((float)((float)(int)v8 * 0x1.4000000000000p+2f) +
                          0x1.4000000000000p+1f) +
                  -0x1.4000000000000p+10f;
  *((float*)&v10 + 2) =
      (float)((float)((float)(int)v9 * 0x1.4000000000000p+2f) +
              0x1.4000000000000p+1f) +
      -0x1.4000000000000p+10f;
  v24 = v10;
  Cursor_734a80(v7 + 80, (__int64*)&v24);
  *(_DWORD*)(v7 + 172) = 0;
  *(_QWORD*)(v7 + 176) = 0;
  v11 = GameData_21cd0f0;
  if (GameData_21cd0f0 != 0) {
    v12 = *(_QWORD*)(*GameData_212cfc0[0] + 48);
    v13 = *(_DWORD*)(v12 + 8);
    v14 = *(_DWORD*)(v12 + 12);
    *(_BYTE*)(GameData_21cd0f0 + 81) = 1;
    if (v13 == *(_DWORD*)(v11 + 148) && v14 == *(_DWORD*)(v11 + 152)) {
      v16 = 0;
    }
    else {
      *(_DWORD*)(v11 + 148) = v13;
      *(_DWORD*)(v11 + 152) = v14;
      v16 = 1;
    }
    *(_BYTE*)(v11 + 80) = v16;
    game_map_fe96c0_alt1(v11);
    if (GameData_21cd140 != 0) {
      v17 = *(_QWORD*)(v11 + 24);
      v18 = *(_QWORD*)(GameData_21cd140 + 432);
      *(_QWORD*)&v26 = *(_QWORD*)(v11 + 16);
      *((_QWORD*)&v26 + 1) = v17;
      Camera_7bfc60_alt1(v18, &v26);
    }
  }
  v19 = *(_QWORD*)(a1 + 48);
  if (*(float*)(v19 + 28) == *(float*)(v19 + 24)) {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
        *(_QWORD*)(v19 + 16) + 16LL))((void*)(&v26), v19 + 16);
  }
  else {
    v20 = *(_QWORD*)(v19 + 72);
    *(_QWORD*)&v26 = *(_QWORD*)(v19 + 64);
    *((_QWORD*)&v26 + 1) = v20;
  }
  DWORD1(v21) = DWORD1(v26);
  *(float*)&v21 =
      (float)((float)((float)(int)(float)((float)(*(float*)&v26 +
                                                  0x1.4000000000000p+10f) *
                                          0x1.99999a0000000p-3f) *
                      0x1.4000000000000p+2f) +
              0x1.4000000000000p+1f) +
      -0x1.4000000000000p+10f;
  *((_QWORD*)&v21 + 1) = COERCE_UNSIGNED_INT(
      (float)((float)((float)(int)(float)((float)(*((float*)&v26 + 2) +
                                                  0x1.4000000000000p+10f) *
                                          0x1.99999a0000000p-3f) *
                      0x1.4000000000000p+2f) +
              0x1.4000000000000p+1f) +
      -0x1.4000000000000p+10f);
  v23 = v21;
  v26 = v21;
  Cursor_734a80(v19 + 16, (__int64*)&v26);
  v25 = v23;
  result = Cursor_734a80(v19 + 80, (__int64*)&v25);
  *(_DWORD*)(v19 + 172) = 0;
  *(_QWORD*)(v19 + 176) = 0;
  return result;
}

__int64 Cursor_733fd0(__int64 a1, float32x4_t* a2, float32x4_t* a3)
{

#pragma clang fp contract(off)
  unsigned __int8 v3;
  int16x4_t v4;

  v3 = 1;
  LANES64(v4).n64_u64[0] =
      LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(*a2, *a3)))).n64_u64[0];
  if ((LANES64(v4).n64_u8[0] & 1) == 0 && (LANES64(v4).n64_u8[2] & 1) == 0) {
    v3 = LANES64(v4).n64_u8[4];
  }
  return v3 & 1;
}

__attribute__((swiftcall)) void Cursor_734010(PSEUDO_X8 x8_, __int64 a1)
{

#pragma clang fp contract(off)
  _OWORD* a2 = (_OWORD*)PSEUDO_X8_VALUE(x8_);
  float v2;
  float v3;
  __int128 v4;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  __int128 v12;
  float result;
  float v14;
  unsigned int v15;

  v3 = *(float*)(a1 + 8);
  v2 = *(float*)(a1 + 12);
  v4 = *(_OWORD*)(a1 + 48);
  if (v2 >= v3) {
    LODWORD(v8) = HIDWORD(*(_QWORD*)(a1 + 48));
  }
  else {
    v7 = Cursor_734120(*(_DWORD*)(a1 + 16), *(_DWORD*)(a1 + 20),
                       *(float*)(a1 + 32), *(float*)&v4, v2, v3);
    v8 = *(float*)(a1 + 52);
    v3 = *(float*)(a1 + 8);
    v2 = *(float*)(a1 + 12);
    *(float*)&v4 = v7;
  }
  v15 = v4;
  if (v2 < v3) {
    v9 = Cursor_734120(*(_DWORD*)(a1 + 16), *(_DWORD*)(a1 + 20),
                       *(float*)(a1 + 36), v8, v2, v3);
    v3 = *(float*)(a1 + 8);
    v2 = *(float*)(a1 + 12);
    v8 = v9;
  }
  v10 = *(float*)(a1 + 56);
  if (v2 < v3) {
    v14 = v8;
    v11 = Cursor_734120(*(_DWORD*)(a1 + 16), *(_DWORD*)(a1 + 20),
                        *(float*)(a1 + 40), v10, v2, v3);
    v8 = v14;
    v10 = v11;
  }
  *(_QWORD*)&v12 = __PAIR64__(LODWORD(v8), v15);
  *((_QWORD*)&v12 + 1) = LODWORD(v10);
  *a2 = v12;
  LODWORD(result) = v12;
  {
    result;
    return;
  }
}

float Cursor_7340d0(_DWORD* a1, _DWORD* a2, _DWORD* a3)
{
  __int128 v3;
  __int128 v4;
  float result;

  a1[8] = *a2;
  a1[9] = a2[1];
  v3 = *((_OWORD*)a1 + 2);
  *((_QWORD*)&v3 + 1) = (unsigned int)a2[2];
  *((_OWORD*)a1 + 2) = v3;
  a1[12] = *a3;
  a1[13] = a3[1];
  v4 = *((_OWORD*)a1 + 3);
  *((_QWORD*)&v4 + 1) = (unsigned int)a3[2];
  *((_OWORD*)a1 + 3) = v4;
  LODWORD(result) = v4;
  return result;
}

float Cursor_734120(int a1, int a2, float a3, float a4, float a5, float a6)
{
  float result;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  int v12;
  unsigned int v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  int v21;
  unsigned int v22;
  float v23;
  float v24;
  float v25;
  float v26;
  int v27;
  unsigned int v28;
  float v29;
  float v30;
  float v31;
  int v32;
  unsigned int v33;
  float v34;
  int v35;
  unsigned int v36;
  float v37;
  float v38;
  float v39;
  int v40;
  unsigned int v41;
  float v42;
  float v43;
  int v44;
  unsigned int v45;
  float v46;
  float v47;
  float v48;
  int v49;
  unsigned int v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  int v56;
  unsigned int v57;
  float v58;
  float v59;
  float v60;
  int v61;
  unsigned int v62;

  switch (a1) {
  case 1:
    if (a2 < 2) {
      v34 = a5;
      v15 = a6;
    }
    else {
      v15 = a6;
      v34 = a5;
      v35 = (a2 - 1) & 7;
      if ((unsigned int)(a2 - 2) >= 7) {
        v15 = a6;
        v34 = a5;
        v36 = (a2 - 1) & 0xFFFFFFF8;
        do {
          v36 -= 8;
          v34 =
              a5 *
              (float)(a5 *
                      (float)(a5 *
                              (float)(a5 *
                                      (float)(a5 *
                                              (float)(a5 *
                                                      (float)(a5 *
                                                              (float)(a5 *
                                                                      v34)))))));
          v15 =
              a6 *
              (float)(a6 *
                      (float)(a6 *
                              (float)(a6 *
                                      (float)(a6 *
                                              (float)(a6 *
                                                      (float)(a6 *
                                                              (float)(a6 *
                                                                      v15)))))));
        } while (v36 != 0);
      }
      for (; v35 != 0; --v35) {
        v34 = a5 * v34;
        v15 = a6 * v15;
      }
    }
    v17 = (float)(a4 - a3) * v34;
    goto LABEL_84;
  case 2:
    v18 = a6 - a5;
    if (a2 < 2) {
      v20 = v18;
      v19 = a6;
    }
    else {
      v19 = a6;
      v20 = v18;
      v21 = (a2 - 1) & 7;
      if ((unsigned int)(a2 - 2) >= 7) {
        v19 = a6;
        v20 = v18;
        v22 = (a2 - 1) & 0xFFFFFFF8;
        do {
          v22 -= 8;
          v20 =
              v18 *
              (float)(v18 *
                      (float)(v18 *
                              (float)(v18 *
                                      (float)(v18 *
                                              (float)(v18 *
                                                      (float)(v18 *
                                                              (float)(v18 *
                                                                      v20)))))));
          v19 =
              a6 *
              (float)(a6 *
                      (float)(a6 *
                              (float)(a6 *
                                      (float)(a6 *
                                              (float)(a6 *
                                                      (float)(a6 *
                                                              (float)(a6 *
                                                                      v19)))))));
        } while (v22 != 0);
      }
      for (; v21 != 0; --v21) {
        v20 = v18 * v20;
        v19 = a6 * v19;
      }
    }
    return a4 - (float)((float)((float)(a4 - a3) * v20) / v19);
  case 3:
    v23 = a6 * 0.5;
    v24 = a3 + (float)((float)(a4 - a3) * 0.5);
    if (a5 >= v23) {
      v58 = v23 - (float)(a5 - v23);
      if (a2 < 2) {
        v60 = v23 - (float)(a5 - v23);
        v59 = v23;
      }
      else {
        v59 = v23;
        v60 = v58;
        v61 = (a2 - 1) & 7;
        if ((unsigned int)(a2 - 2) >= 7) {
          v59 = v23;
          v60 = v58;
          v62 = (a2 - 1) & 0xFFFFFFF8;
          do {
            v62 -= 8;
            v60 =
                v58 *
                (float)(v58 *
                        (float)(v58 *
                                (float)(v58 *
                                        (float)(v58 *
                                                (float)(v58 *
                                                        (float)(v58 *
                                                                (float)(v58 *
                                                                        v60)))))));
            v59 =
                v23 *
                (float)(v23 *
                        (float)(v23 *
                                (float)(v23 *
                                        (float)(v23 *
                                                (float)(v23 *
                                                        (float)(v23 *
                                                                (float)(v23 *
                                                                        v59)))))));
          } while (v62 != 0);
        }
        for (; v61 != 0; --v61) {
          v60 = v58 * v60;
          v59 = v23 * v59;
        }
      }
      return a4 - (float)((float)((float)(a4 - v24) * v60) / v59);
    }
    else {
      if (a2 < 2) {
        v26 = a5;
        v25 = v23;
      }
      else {
        v25 = v23;
        v26 = a5;
        v27 = (a2 - 1) & 7;
        if ((unsigned int)(a2 - 2) >= 7) {
          v25 = v23;
          v26 = a5;
          v28 = (a2 - 1) & 0xFFFFFFF8;
          do {
            v28 -= 8;
            v26 =
                a5 *
                (float)(a5 *
                        (float)(a5 *
                                (float)(a5 *
                                        (float)(a5 *
                                                (float)(a5 *
                                                        (float)(a5 *
                                                                (float)(a5 *
                                                                        v26)))))));
            v25 =
                v23 *
                (float)(v23 *
                        (float)(v23 *
                                (float)(v23 *
                                        (float)(v23 *
                                                (float)(v23 *
                                                        (float)(v23 *
                                                                (float)(v23 *
                                                                        v25)))))));
          } while (v28 != 0);
        }
        for (; v27 != 0; --v27) {
          v26 = a5 * v26;
          v25 = v23 * v25;
        }
      }
      return a3 + (float)((float)((float)(v24 - a3) * v26) / v25);
    }
  case 4:
    v7 = a6 * 0.5;
    v8 = a3 + (float)((float)(a4 - a3) * 0.5);
    if (a5 >= v7) {
      v53 = a5 - v7;
      if (a2 < 2) {
        v55 = a5 - v7;
        v54 = v7;
      }
      else {
        v54 = v7;
        v55 = v53;
        v56 = (a2 - 1) & 7;
        if ((unsigned int)(a2 - 2) >= 7) {
          v54 = v7;
          v55 = v53;
          v57 = (a2 - 1) & 0xFFFFFFF8;
          do {
            v57 -= 8;
            v55 =
                v53 *
                (float)(v53 *
                        (float)(v53 *
                                (float)(v53 *
                                        (float)(v53 *
                                                (float)(v53 *
                                                        (float)(v53 *
                                                                (float)(v53 *
                                                                        v55)))))));
            v54 =
                v7 *
                (float)(v7 *
                        (float)(v7 *
                                (float)(v7 *
                                        (float)(v7 *
                                                (float)(v7 *
                                                        (float)(v7 *
                                                                (float)(v7 *
                                                                        v54)))))));
          } while (v57 != 0);
        }
        for (; v56 != 0; --v56) {
          v55 = v53 * v55;
          v54 = v7 * v54;
        }
      }
      return v8 + (float)((float)((float)(a4 - v8) * v55) / v54);
    }
    else {
      v9 = v7 - a5;
      if (a2 < 2) {
        v11 = v7 - a5;
        v10 = v7;
      }
      else {
        v10 = v7;
        v11 = v9;
        v12 = (a2 - 1) & 7;
        if ((unsigned int)(a2 - 2) >= 7) {
          v10 = v7;
          v11 = v9;
          v13 = (a2 - 1) & 0xFFFFFFF8;
          do {
            v13 -= 8;
            v11 =
                v9 *
                (float)(v9 *
                        (float)(v9 *
                                (float)(v9 *
                                        (float)(v9 *
                                                (float)(v9 *
                                                        (float)(v9 *
                                                                (float)(v9 *
                                                                        v11)))))));
            v10 =
                v7 *
                (float)(v7 *
                        (float)(v7 *
                                (float)(v7 *
                                        (float)(v7 *
                                                (float)(v7 *
                                                        (float)(v7 *
                                                                (float)(v7 *
                                                                        v10)))))));
          } while (v13 != 0);
        }
        for (; v12 != 0; --v12) {
          v11 = v9 * v11;
          v10 = v7 * v10;
        }
      }
      return v8 - (float)((float)((float)(v8 - a3) * v11) / v10);
    }
  case 5:
    v37 = a6 - a5;
    if (a2 < 2) {
      v39 = a6 - a5;
      v38 = a6;
    }
    else {
      v38 = a6;
      v39 = a6 - a5;
      v40 = (a2 - 1) & 7;
      if ((unsigned int)(a2 - 2) >= 7) {
        v38 = a6;
        v39 = a6 - a5;
        v41 = (a2 - 1) & 0xFFFFFFF8;
        do {
          v41 -= 8;
          v39 =
              v37 *
              (float)(v37 *
                      (float)(v37 *
                              (float)(v37 *
                                      (float)(v37 *
                                              (float)(v37 *
                                                      (float)(v37 *
                                                              (float)(v37 *
                                                                      v39)))))));
          v38 =
              a6 *
              (float)(a6 *
                      (float)(a6 *
                              (float)(a6 *
                                      (float)(a6 *
                                              (float)(a6 *
                                                      (float)(a6 *
                                                              (float)(a6 *
                                                                      v38)))))));
        } while (v41 != 0);
      }
      for (; v40 != 0; --v40) {
        v39 = v37 * v39;
        v38 = a6 * v38;
      }
    }
    v51 = (float)(a5 / a6) + 0.0;
    v52 = 1.0 - (float)(v39 / v38);
    goto LABEL_87;
  case 6:
    v42 = a5;
    v43 = a6;
    if (a2 >= 2) {
      v43 = a6;
      v42 = a5;
      v44 = (a2 - 1) & 7;
      if ((unsigned int)(a2 - 2) >= 7) {
        v43 = a6;
        v42 = a5;
        v45 = (a2 - 1) & 0xFFFFFFF8;
        do {
          v45 -= 8;
          v42 =
              a5 *
              (float)(a5 *
                      (float)(a5 *
                              (float)(a5 *
                                      (float)(a5 *
                                              (float)(a5 *
                                                      (float)(a5 *
                                                              (float)(a5 *
                                                                      v42)))))));
          v43 =
              a6 *
              (float)(a6 *
                      (float)(a6 *
                              (float)(a6 *
                                      (float)(a6 *
                                              (float)(a6 *
                                                      (float)(a6 *
                                                              (float)(a6 *
                                                                      v43)))))));
        } while (v45 != 0);
      }
      for (; v44 != 0; --v44) {
        v42 = a5 * v42;
        v43 = a6 * v43;
      }
    }
    v46 = (float)((float)(a5 / a6) + 0.0) +
          (float)((float)(a5 * (float)((float)((float)(v42 / v43) + 0.0) -
                                       (float)((float)(a5 / a6) + 0.0))) /
                  a6);
    goto LABEL_88;
  case 7:
    v29 = a6 - a5;
    if (a2 < 2) {
      v31 = a6 - a5;
      v30 = a6;
    }
    else {
      v30 = a6;
      v31 = a6 - a5;
      v32 = (a2 - 1) & 7;
      if ((unsigned int)(a2 - 2) >= 7) {
        v30 = a6;
        v31 = a6 - a5;
        v33 = (a2 - 1) & 0xFFFFFFF8;
        do {
          v33 -= 8;
          v31 =
              v29 *
              (float)(v29 *
                      (float)(v29 *
                              (float)(v29 *
                                      (float)(v29 *
                                              (float)(v29 *
                                                      (float)(v29 *
                                                              (float)(v29 *
                                                                      v31)))))));
          v30 =
              a6 *
              (float)(a6 *
                      (float)(a6 *
                              (float)(a6 *
                                      (float)(a6 *
                                              (float)(a6 *
                                                      (float)(a6 *
                                                              (float)(a6 *
                                                                      v30)))))));
        } while (v33 != 0);
      }
      for (; v32 != 0; --v32) {
        v31 = v29 * v31;
        v30 = a6 * v30;
      }
    }
    v51 = 1.0 - (float)(v31 / v30);
    v52 = (float)(a5 / a6) + 0.0;
    goto LABEL_87;
  case 8:
    v47 = a5;
    v48 = a6;
    if (a2 >= 2) {
      v48 = a6;
      v47 = a5;
      v49 = (a2 - 1) & 7;
      if ((unsigned int)(a2 - 2) >= 7) {
        v48 = a6;
        v47 = a5;
        v50 = (a2 - 1) & 0xFFFFFFF8;
        do {
          v50 -= 8;
          v47 =
              a5 *
              (float)(a5 *
                      (float)(a5 *
                              (float)(a5 *
                                      (float)(a5 *
                                              (float)(a5 *
                                                      (float)(a5 *
                                                              (float)(a5 *
                                                                      v47)))))));
          v48 =
              a6 *
              (float)(a6 *
                      (float)(a6 *
                              (float)(a6 *
                                      (float)(a6 *
                                              (float)(a6 *
                                                      (float)(a6 *
                                                              (float)(a6 *
                                                                      v48)))))));
        } while (v50 != 0);
      }
      for (; v49 != 0; --v49) {
        v47 = a5 * v47;
        v48 = a6 * v48;
      }
    }
    v51 = (float)(v47 / v48) + 0.0;
    v52 = (float)(a5 / a6) + 0.0;
  LABEL_87:
    v46 = v51 + (float)((float)(a5 * (float)(v52 - v51)) / a6);
  LABEL_88:
    result = a3 + (float)((float)(a4 - a3) * v46);
    break;
  case 9:
    v14 = a4 - a3;
    v15 = a6 * 0.5;
    v16 = a6 - a5;
    if (a5 > v15) {
      a5 = v16;
    }
    v17 = v14 * a5;
  LABEL_84:
    result = a3 + (float)(v17 / v15);
    break;
  default:
    result = a3 + (float)((float)((float)(a4 - a3) * a5) / a6);
    break;
  }
  return result;
}

__int64 Cursor_734a80(__int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 result;
  struct {
    __int64 v7;
    __int64 v8;
  } v7_;
  _QWORD v9[2];
  _QWORD v10[2];

  v2 = a2[1];
  v7_.v7 = *a2;
  v7_.v8 = v2;
  if (*(_BYTE*)(a1 + 24) == 1) {
    v4 = *a2;
    v5 = a2[1];
    v10[0] = *a2;
    v10[1] = v5;
  }
  else {
    if (*(float*)(a1 + 8) <= 0x0.0p+0f &&
        ((*(__int64 (**)(__int64, __int64*, __int64))(*(_QWORD*)a1 + 8LL))(
             a1, &v7_.v7, a1 + 48) &
         1) == 0) {
      return 0;
    }
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
        *(_QWORD*)a1 + 16LL))((void*)(v10), a1);
    v4 = v7_.v7;
    v5 = v7_.v8;
  }
  v9[0] = v4;
  v9[1] = v5;
  (*(void (**)(__int64, _QWORD*, _QWORD*))(*(_QWORD*)a1 + 24LL))(a1, v10, v9);
  result = 1;
  *(_QWORD*)(a1 + 8) = 0;
  *(_WORD*)(a1 + 24) = 256;
  return result;
}

__int64 game_map_Cursor_Impl_Tick_closure_Invoke(__int64 a1, int* a2, int* a3,
                                                 unsigned __int8* a4)
{
  __int64 v4;
  int v5;
  int v6;
  int v8;
  __int64 v9;
  __int128 v10;
  __int64 result;
  __int64 v12;
  int v13;
  __int128 v14;
  __int128 v15;

  v4 = *(_QWORD*)(a1 + 8);
  v5 = *a2;
  v6 = *a3;
  v8 = *a4;
  if (*(float*)(v4 + 28) == *(float*)(v4 + 24)) {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
        *(_QWORD*)(v4 + 16) + 16LL))((void*)&v15, v4 + 16);
  }
  else {
    v9 = *(_QWORD*)(v4 + 72);
    *(_QWORD*)&v15 = *(_QWORD*)(v4 + 64);
    *((_QWORD*)&v15 + 1) = v9;
  }
  *(float*)&v15 = (float)((float)((float)(v5 + 256) * 5.0) + 2.5) + -1280.0;
  *(_QWORD*)&v10 = v15;
  *((float*)&v10 + 2) =
      (float)((float)((float)(v6 + 256) * 5.0) + 2.5) + -1280.0;
  DWORD3(v10) = 0;
  v15 = v10;
  v14 = v10;
  result = GameRoutine_734a80_alt1(v4 + 16, (__int64*)&v14);
  if (v8 != 0 && (v12 = *(_QWORD*)(a1 + 16)) != 0) {
    v13 = *(_DWORD*)(v12 + 592);
  }
  else {
    v13 = 1;
  }
  *(_DWORD*)(v4 + 184) = v13;
  *(_DWORD*)(v4 + 188) = v13;
  return result;
}

#pragma GCC visibility pop
