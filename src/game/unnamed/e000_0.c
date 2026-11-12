#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
extern __int128 GameData_1a82930;
extern __int128 GameData_1a837d0;
extern char GameData_1a9f09e;
extern float GameData_1b0fb00[5];
extern float GameData_1b0fb14[5];
extern unsigned int GameData_1b37d88[29];
extern __int64 (*GameData_1f86a70[])();
extern __int64 GameData_212c060;
extern __int64* GameData_212d480[2];
extern __int64* GameData_212e250;
extern __int64 GameData_212e288;
extern __int64 GameData_212e2d0[2];
extern __int16* GameData_21344c0[16];
extern __int64* GameData_21344c8[5];
extern __int64* GameData_21344d0[4];
extern __int64* GameData_21344d8[3];
extern __int64* GameData_21344e0[2];
extern __int64* GameData_2134670[2];
extern _UNKNOWN* GameData_2135448;
extern __int64 (*GameData_2135f58[2])();
extern __int64 (*GameData_2135f60)();
extern __int16 GameData_2178e40;
extern __int64 GameData_2198f88;
__int64 GameRoutine_104660(_QWORD);
__int64 GameRoutine_106cc0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_106f20(_QWORD);
__int64 GameRoutine_107dc0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_109080(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_10c480(_QWORD, _QWORD, _QWORD, _QWORD, float);
__n128 GameRoutine_10c830(_QWORD, double);
__n128 GameRoutine_10cff0(_QWORD);
__int64 GameRoutine_10e200(_QWORD, _QWORD);
__int64 GameRoutine_110280(__int64 result);
__int64 GameRoutine_112080(_QWORD, long double);
__int64 GameRoutine_1120d0(_QWORD);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_1121e0(_QWORD, _QWORD);
__int64 GameRoutine_112290(_QWORD, float);
__int64 GameRoutine_116630(_QWORD);
__int64 GameRoutine_117bb0(_QWORD);
__int64 GameRoutine_118d00(_QWORD, _QWORD);
__int64 GameRoutine_118df0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_118fd0(_QWORD);
__int64 GameRoutine_118ff0(_QWORD);
__int64 GameRoutine_119020(_QWORD);
__int64 GameRoutine_119030(_QWORD);
struct PseudoSret GameRoutine_11f360(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                     _QWORD);
struct PseudoSret GameRoutine_11f980(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                     _QWORD, _QWORD, _QWORD);
struct PseudoSret GameRoutine_11fa50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                     _QWORD);
struct PseudoSret GameRoutine_11fb10(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                     _QWORD, _QWORD, _QWORD);
struct PseudoSret GameRoutine_11fbe0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                     _QWORD);
struct PseudoSret GameRoutine_11fca0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                     _QWORD, _QWORD, _QWORD);
struct PseudoSret GameRoutine_11fd70(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                     _QWORD);
struct PseudoSret GameRoutine_11fe30(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                     _QWORD, _QWORD, _QWORD);
struct PseudoSret GameRoutine_11ff00(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                     _QWORD);
struct PseudoSret GameRoutine_11ffc0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                     _QWORD, _QWORD);
__int64 GameRoutine_120360(_QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_126f60(__int64, __int64);
__int64 GameRoutine_128050(_QWORD);
__n128 GameRoutine_13e440(__int64);
__int64 GameRoutine_1449c0(void);
__int64 GameRoutine_17be60(_QWORD, _QWORD);
__int64 GameRoutine_1901f0(_QWORD);
__int64 GameRoutine_190200(_QWORD, _QWORD);
__int64 GameRoutine_190240(_QWORD);
__int64 GameRoutine_1a09b70(_QWORD);
__int64 GameRoutine_1a09b80(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
float GameRoutine_1a0a010(void);
__int64 GameRoutine_1a0a590(_QWORD);
float GameRoutine_1a0a980(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          float);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b960(_QWORD, _QWORD);
__int64 GameRoutine_1a0b970(void);
__int64 GameRoutine_1a0b980(_QWORD);
__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0cd90(_QWORD);
__int64 GameRoutine_1a0cda0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0cdb0(_QWORD);
__int64 GameRoutine_1a0cdc0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0cdd0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0cde0(_QWORD, _QWORD);
__int64 GameRoutine_1a0cdf0(_QWORD, _QWORD);
__int64 GameRoutine_1a0ce00(_QWORD);
__int64 GameRoutine_1a0ce10(_QWORD);
__int64 GameRoutine_1a0ce20(_QWORD, _QWORD);
__int64 GameRoutine_1a0ce30(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0ce40(_QWORD, _QWORD);
__int64 GameRoutine_2870(_QWORD);
__int64 GameRoutine_28c0(_QWORD, _QWORD);
__int64 GameRoutine_2a70(_QWORD);
__int64 GameRoutine_2ad0(_QWORD);
__int64 GameRoutine_2e9910(_QWORD, _QWORD, _QWORD);
float GameRoutine_331080(__int64, char, char, char, long double, long double,
                         float, float);
__int64 GameRoutine_331740(void);
__n128 GameRoutine_332280(_QWORD, _QWORD);
__int64 GameRoutine_3370(_QWORD);
__int64 GameRoutine_33e0(_QWORD, _QWORD);
__n128 GameRoutine_376280(_QWORD, _QWORD, _QWORD, float, float, float);
__int64 GameRoutine_3aeb00(_QWORD, _QWORD);
__int64 GameRoutine_41e0(__int64, __int64, unsigned __int64);
__int64 GameRoutine_46a0(_QWORD);
__int64 GameRoutine_4720(__int64, __int64, unsigned __int64);
__int64 GameRoutine_55b740(_QWORD);
__n128 GameRoutine_55b750(_QWORD);
__int64 GameRoutine_55d690(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 GameRoutine_565760(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fc190(_QWORD);
__int64 GameRoutine_5fc420(_QWORD);
__int64 GameRoutine_5fc450(_QWORD);
__int64 GameRoutine_5fe2d0(_QWORD, _QWORD);
__int64 GameRoutine_5fe2e0(_QWORD, _QWORD);
__int64 GameRoutine_5fe310(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fe3f0(void);
__int64 GameRoutine_5fe410(_QWORD);
__int64 GameRoutine_6061a0(_QWORD, _QWORD);
__int64 GameRoutine_6063a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_606510(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6511d0(unsigned __int64);
void GameRoutine_651250(void*, unsigned __int64);
void GameRoutine_651310(void*);
__int64 GameRoutine_6a0(unsigned __int64*, __int64, unsigned __int64);
__int64 GameRoutine_6b7180(_QWORD);
__int64 GameRoutine_7910(__int64, int8x16_t*);
__int64 GameRoutine_7f00(_QWORD);
__int64 GameRoutine_a1efd0(__int64);
__int64 GameRoutine_a392e0(_QWORD, const char*, ...);
__int64 GameRoutine_a3a260(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a3a3a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_cf00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f05e0(_QWORD, _QWORD);
__int64 GameRoutine_f2ce0(void);
__int64 GameRoutine_f6360(_QWORD, _QWORD, long double);
__int64 GameRoutine_fdf60(_QWORD, _QWORD);
__n128 GameRoutine_fdfe0(_QWORD, _QWORD);
_QWORD* ConstructString_1901f0(_QWORD* result);
_QWORD* GameRoutine_a3a3a0_alt1(_QWORD*, __int64,
                                unsigned __int64) __asm__("GameRoutine_a3a3a0");
__attribute__((swiftcall)) void Manager_11f360(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void Manager_11f980(PSEUDO_X8, __int64, __int64,
                                               __int64, __int64, unsigned int,
                                               unsigned int, unsigned int,
                                               char);
__attribute__((swiftcall)) void Manager_11fa50(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void Manager_11fb10(PSEUDO_X8, __int64, __int64,
                                               __int64, __int64, unsigned int,
                                               unsigned int, unsigned int,
                                               char);
__attribute__((swiftcall)) void Manager_11fbe0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void Manager_11fca0(PSEUDO_X8, __int64, __int64,
                                               __int64, __int64, unsigned int,
                                               unsigned int, unsigned int,
                                               char);
__attribute__((swiftcall)) void Manager_11fd70(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void Manager_11fe30(PSEUDO_X8, __int64, __int64,
                                               __int64, __int64, unsigned int,
                                               unsigned int, unsigned int,
                                               char);
__attribute__((swiftcall)) void Manager_11ff00(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void Manager_11ffc0(PSEUDO_X8, __int64, __int64,
                                               __int64, unsigned int,
                                               unsigned int, unsigned int,
                                               char);
__int64*
GameRoutine_a3a260_alt1(__int64*, __int64,
                        unsigned __int64) __asm__("GameRoutine_a3a260");
__int64 Crc32List_10c480(__int64, unsigned int, __int64, unsigned int, float);
__int64 Crc32List_120360();
__int64 Crc32List_128050(__int64);
__int64 Crc32List_f05e0(__int64, __int64*);
__int64 GameHr_f2ce0(__int64, __int64, __int64, char*);
__int64 GameRoutine_112180_alt1(__int64, __int64) __asm__("GameRoutine_112180");
__int64 GameRoutine_190200_alt1(__int64, char*) __asm__("GameRoutine_190200");
__int64 GameRoutine_1a09d20_alt1(unsigned __int64,
                                 __int64) __asm__("GameRoutine_1a09d20");
__int64 GameRoutine_55d690_alt1(__int64 result, __int64, __int16, __int16,
                                __int16, __int16,
                                char) __asm__("GameRoutine_55d690");
__int64 GameRoutine_565760_alt1(__int64,
                                __int64 (*)(__int64, __int64, __int64, __int64),
                                __int64, __int64) __asm__("GameRoutine_565760");
__int64 GameRoutine_5fc190_alt1(__int64 result) __asm__("GameRoutine_5fc190");
__int64 GameRoutine_5fc420_alt1(__int64 result) __asm__("GameRoutine_5fc420");
__int64 GameRoutine_5fc450_alt1(__int64 result) __asm__("GameRoutine_5fc450");
__int64 GameRoutine_5fe310_alt1(__int64, _QWORD*,
                                __int64) __asm__("GameRoutine_5fe310");
__int64 GameRoutine_5fe3f0_alt1(_QWORD*) __asm__("GameRoutine_5fe3f0");
__int64 GameRoutine_6063a0_alt1(__int64, __int64*, __int64, _QWORD*, __int64,
                                __int64) __asm__("GameRoutine_6063a0");
__int64 GameRoutine_606510_alt1(__int64, __int64,
                                unsigned __int8*) __asm__("GameRoutine_606510");
__int64 GameRoutine_a392e0_alt1(__int64, __int64,
                                ...) __asm__("GameRoutine_a392e0");
__int64 GameRoutine_f6360_alt1(int*, _QWORD*) __asm__("GameRoutine_f6360");
__int64 Manager_116630();
__int64 Manager_118d00(__int64, unsigned int, int);
__int64 Registration_6061a0(__int64*, __int64);
__int64 Value_2870(__int64 result);
__int64 Value_2a70(__int64);
__int64 Voice_1449c0(_QWORD*, __int64, __int64, __int64, __int64);
__int64 __cxa_begin_catch(void);
__int64 memset(__int64, int, unsigned __int64);
__int64 nn_fontll_ScalableFontEngineHelper_Decode(_QWORD, _QWORD, _QWORD,
                                                  _QWORD);
__int64 nn_fontll_ScalableFontEngine_GetError(_QWORD);
__int64 nn_fontll_ScalableFontEngine_GetFontMetrics(_QWORD, _QWORD);
__int64 nn_fontll_ScalableFontEngine_Initialize(_QWORD, _QWORD, _QWORD);
__int64 nn_fontll_ScalableFontEngine_InitializeOtfKerningTable(_QWORD, _QWORD,
                                                               _QWORD, _QWORD);
__int64 nn_fontll_ScalableFontEngine_LoadFont(_QWORD, _QWORD, _QWORD, _QWORD,
                                              _QWORD);
__int64 nn_fontll_ScalableFontEngine_ScalableFontEngine(_QWORD);
__int64 nn_fontll_ScalableFontEngine_SetAutoHint(_QWORD, _QWORD);
__int64 nn_fontll_ScalableFontEngine_SetBoldWeight(_QWORD, _QWORD);
__int64 nn_fontll_ScalableFontEngine_SetFlags(_QWORD);
__int64 nn_fontll_ScalableFontEngine_SetFont(_QWORD, _QWORD);
__int64 nn_fontll_ScalableFontEngine_SetOutlineWidth(_QWORD);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_fnd_WeakHandle_get(__int64);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
__int64 snd_fnd_WeakHandle_reset(__int64);
__int64 snd_fnd_WeakHandle_set(__int64, __int64);
__int64 timeline_7910(__int64, int8x16_t*);
__int64 timeline_InputStream_Get(_QWORD*);
bool Value_28c0(__int64, unsigned __int64);
const char* snd_fnd_calcCrc32Reverse(const char* result, int);
extern __int64 (*Registration_5656b0_ptr[2])();
extern __int64* snd_g_memory_ptr[2];
extern __int64* snd_s_target_ptr;
extern __int64 snd_g_memory;
unsigned __int8* snd_fnd_calcCrc32(unsigned __int8* result, int);
void GameRoutine_651250_alt1(__int64) __asm__("GameRoutine_651250");
void __attribute__((noreturn)) std_terminate(_QWORD);
void snd_Fade_Fade_10c830(__int64, float);
void __attribute__((noreturn)) GameHr_4c20();
__int64 GameHr_7aa0(int** a1, _QWORD* a2);
__int64 GameHr_10b0e0(__int64 result);
__int64 GameHr_127e30(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      unsigned __int8* a5, __int64 a6, __int64 a7, __int64 a8);
__int64 GameHr_561e20(__int64 result, __int64* a2, __int64 a3, _QWORD* a4,
                      __int64 a5, __int64 a6);
__int64 GameHr_55b6e0(atomic_uint* a1, signed int a2);

bool GameHr_3510(__int64 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  int* v3;
  int v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;
  int v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  int v18;
  int v19;
  __int64 v20;
  char v21;
  _BYTE* v22;
  _BYTE* v23;
  __int64 v24;
  __int64 v25;
  char v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  char v30;
  __int64 v31;

  v1 = *(unsigned int*)(a1 + 16);
  v2 = *(unsigned int*)(a1 + 20) - 1LL;
  if (v2 < v1) {
    v3 = (int*)(*(_QWORD*)(a1 + 24) + 8 * v2);
    v4 = *v3;
    if (*v3 > 3) {
      goto LABEL_3;
    }
  LABEL_12:
    if (v4 == 2) {
      v14 = *(_DWORD*)(a1 + 4);
      if ((v14 & 4) != 0) {
        v23 = *(_BYTE**)(a1 + 80);
        if ((unsigned __int64)(v23 + 1) > a1 + 152) {
          v24 = *(_QWORD*)(a1 + 8);
          v25 = a1;
          *(_QWORD*)(a1 + 80) = a1 + 88;
          v26 = GameRoutine_46a0(v24);
          a1 = v25;
          if ((v26 & 1) == 0) {
            goto LABEL_27;
          }
          v23 = *(_BYTE**)(v25 + 80);
        }
        *v23 = 10;
        v27 = *(unsigned int*)(a1 + 20);
        ++*(_QWORD*)(a1 + 80);
        if ((GameRoutine_33e0(a1, v27) & 1) == 0) {
          return false;
        }
      }
      else if ((v14 & 2) != 0) {
        v15 = v3[1];
        if (v15 == 0) {
        LABEL_41:
          if (*(_DWORD*)a1 == 0) {
            *(_DWORD*)a1 = 3;
          }
          goto LABEL_30;
        }
        v3[1] = v15 - 1;
      }
      v16 = 6;
    }
    else {
      if (v4 != 0) {
      LABEL_39:
        if (*(_DWORD*)a1 == 0) {
          if (v4 == 1) {
            v19 = 11;
          }
          else {
            v19 = 1;
          }
          goto LABEL_29;
        }
        return false;
      }
      if ((*(_BYTE*)(a1 + 4) & 0x10) != 0) {
        if (*(_DWORD*)a1 == 0) {
          *(_DWORD*)a1 = 10;
        }
        return false;
      }
      v16 = 1;
    }
  LABEL_22:
    *v3 = v16;
    return true;
  }
  v12 = v2 - v1;
  v13 = __clz(v12 + 16);
  v3 = (int*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * (27 - v13) + 8) +
              8LL * (v12 - GameData_1b37d88[28 - v13]));
  v4 = *v3;
  if (*v3 <= 3) {
    goto LABEL_12;
  }
LABEL_3:
  if (v4 == 4) {
    v16 = 7;
    goto LABEL_22;
  }
  if (v4 != 6) {
    goto LABEL_39;
  }
  if ((*(_BYTE*)(a1 + 4) & 2) != 0) {
    v18 = v3[1];
    if (v18 != 0) {
      v3[1] = v18 - 1;
      return true;
    }
    goto LABEL_41;
  }
  v5 = *(_QWORD*)(a1 + 80);
  v6 = a1 + 152;
  if (v5 + 1 > (unsigned __int64)(a1 + 152)) {
    v7 = *(_QWORD*)(a1 + 8);
    v8 = v5 - (a1 + 88);
    *(_QWORD*)(a1 + 80) = a1 + 88;
    if (v8 < 0) {
      if (*(_DWORD*)(v7 + 40) == 0) {
        *(_DWORD*)(v7 + 40) = 22;
      }
      goto LABEL_27;
    }
    v9 = *(_QWORD*)(v7 + 16);
    v10 = a1;
    if ((unsigned __int64)(v9 + v8) <= *(_QWORD*)(v7 + 32)) {
      GameRoutine_1a0b950(*(_QWORD*)(v7 + 24) + v9, a1 + 88, v8);
      a1 = v10;
      *(_QWORD*)(v7 + 16) += v8;
    }
    else {
      v11 = GameRoutine_2ad0(v7);
      a1 = v10;
      if ((v11 & 1) == 0) {
        goto LABEL_27;
      }
    }
  }
  **(_BYTE**)(a1 + 80) = 44;
  v20 = *(_QWORD*)(a1 + 80);
  v21 = *(_BYTE*)(a1 + 4);
  v22 = (_BYTE*)(v20 + 1);
  *(_QWORD*)(a1 + 80) = v20 + 1;
  if ((v21 & 4) == 0) {
    return true;
  }
  if (v20 + 2 > v6) {
    v28 = *(_QWORD*)(a1 + 8);
    v29 = a1;
    *(_QWORD*)(a1 + 80) = a1 + 88;
    v30 = GameRoutine_46a0(v28);
    a1 = v29;
    if ((v30 & 1) == 0) {
    LABEL_27:
      if (*(_DWORD*)a1 != 0) {
      LABEL_30:
        *v3 = 5;
        return false;
      }
      v19 = 8;
    LABEL_29:
      *(_DWORD*)a1 = v19;
      goto LABEL_30;
    }
    v22 = *(_BYTE**)(v29 + 80);
  }
  *v22 = 10;
  v31 = *(unsigned int*)(a1 + 20);
  ++*(_QWORD*)(a1 + 80);
  return (GameRoutine_33e0(a1, v31) & 1) != 0;
}

__int64 GameHr_41e0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v4;
  void* v5;
  _BYTE* v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _BYTE* v12;
  unsigned int v13;
  _BYTE* v14;
  int v15;
  unsigned int v16;
  char v17;
  char v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  _DWORD* v31;
  int v32;
  __int64 v33;
  __int64 v35;
  unsigned __int64 v36;
  _BYTE* v37;
  _DWORD* v38;
  _DWORD* v39;
  _BYTE v40[3076];
  unsigned __int64 v41;

  if (a3 >= 0x200) {
    v35 = a2;
    v36 = a3;
    v37 = (_BYTE*)GameRoutine_1a0b960(6 * a3 + 3, GameData_212c060);
    if (v37 == nullptr) {
      if (*(_DWORD*)a1 == 0) {
        *(_DWORD*)a1 = 9;
      }
      v38 = (_DWORD*)GameRoutine_3370(a1 + 16);
      v27 = 0;
      *v38 = 5;
      return v27;
    }
    v4 = *(_DWORD*)(a1 + 4);
    v6 = v37;
    v5 = v37;
    a3 = v36;
    a2 = v35;
    *v37 = 34;
  }
  else {
    v4 = *(_DWORD*)(a1 + 4);
    v5 = nullptr;
    v40[0] = 34;
    if (a3 == 0) {
      v6 = v40;
      v19 = 2;
      v40[1] = 34;
    LABEL_46:
      v24 = *(_QWORD*)(a1 + 80);
      if (v24 + v19 > a1 + 152) {
        v21 = *(_QWORD*)(a1 + 8);
        v25 = v24 - (a1 + 88);
        *(_QWORD*)(a1 + 80) = a1 + 88;
        if (v25 < 0) {
          goto LABEL_57;
        }
        v26 = *(_QWORD*)(v21 + 16);
        if ((unsigned __int64)(v26 + v25) <= *(_QWORD*)(v21 + 32)) {
          GameRoutine_1a0b950(*(_QWORD*)(v21 + 24) + v26, a1 + 88, v25);
          *(_QWORD*)(v21 + 16) += v25;
        }
        else if ((GameRoutine_2ad0(v21) & 1) == 0) {
          goto LABEL_59;
        }
      }
      GameRoutine_1a0b950(*(_QWORD*)(a1 + 80), v6, v19);
      *(_QWORD*)(a1 + 80) += v19;
      v27 = 1;
      goto LABEL_65;
    }
    v6 = v40;
  }
  v7 = 0;
  v8 = 0;
  v9 = 1;
LABEL_5:
  v10 = v8;
  v11 = v9;
  do {
    v13 = *(unsigned __int8*)(a2 + v10);
    if (v13 > 0xC) {
      if (*(unsigned __int8*)(a2 + v10) <= 0x2Eu) {
        if (v13 == 13) {
          *(_WORD*)&v6[v11] = 29276;
          v11 += 2;
          goto LABEL_9;
        }
        if (v13 == 34) {
          goto LABEL_8;
        }
      }
      else if (v13 == 92 || v13 == 47) {
      LABEL_8:
        v12 = &v6[v11];
        v11 += 2;
        *v12 = 92;
        v12[1] = v13;
        goto LABEL_9;
      }
    }
    else if (*(unsigned __int8*)(a2 + v10) > 9u) {
      if (v13 == 10) {
        *(_WORD*)&v6[v11] = 28252;
        v11 += 2;
        goto LABEL_9;
      }
      if (v13 == 12) {
        *(_WORD*)&v6[v11] = 26204;
        v11 += 2;
        goto LABEL_9;
      }
    }
    else {
      if (v13 == 8) {
        *(_WORD*)&v6[v11] = 25180;
        v11 += 2;
        goto LABEL_9;
      }
      if (v13 == 9) {
        *(_WORD*)&v6[v11] = 29788;
        v11 += 2;
        goto LABEL_9;
      }
    }
    if ((char)v13 <= 31) {
      if ((v4 & 8) == 0 && (char)v13 < 0) {
        v9 = v11 + 1;
        v6[v11] = v13;
        v8 = v10 + 1;
        v7 = 1;
        if (a3 - 1 != v10) {
          goto LABEL_5;
        }
        v19 = v11 + 2;
        v6[v9] = 34;
        goto LABEL_37;
      }
      v14 = &v6[v11];
      v11 += 6;
      *(_DWORD*)v14 = 808482140;
      v15 = (v13 >> 4) + 55;
      if (v13 < 0xA0) {
        LOBYTE(v15) = (v13 >> 4) | 0x30;
      }
      v14[4] = v15;
      v16 = v13 & 0xF;
      v17 = v13 & 0xF | 0x30;
      v18 = (v13 & 0xF) + 55;
      if (v16 < 0xA) {
        v18 = v17;
      }
      v14[5] = v18;
    }
    else {
      v6[v11++] = v13;
    }
  LABEL_9:
    ++v10;
  } while (a3 != v10);
  v19 = v11 + 1;
  v6[v11] = 34;
  if ((v7 & 1) != 0) {
  LABEL_37:
    v6[v19] = 0;
    if ((unsigned int)GameRoutine_6a0(&v41, (__int64)v6, v19) != 0 ||
        v41 != v19) {
      if (*(_DWORD*)a1 == 0) {
        *(_DWORD*)a1 = 7;
      }
      v39 = (_DWORD*)GameRoutine_3370(a1 + 16);
      v27 = 1;
      *v39 = 5;
      goto LABEL_65;
    }
  }
  if (v19 <= 0x1F) {
    goto LABEL_46;
  }
  v20 = *(_QWORD*)(a1 + 80);
  v21 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a1 + 80) = a1 + 88;
  v22 = v20 - (a1 + 88);
  if (v22 < 0) {
  LABEL_57:
    if (*(_DWORD*)(v21 + 40) == 0) {
      *(_DWORD*)(v21 + 40) = 22;
    }
  LABEL_59:
    v29 = *(unsigned int*)(a1 + 16);
    v30 = *(unsigned int*)(a1 + 20) - 1LL;
    if (v30 >= v29) {
      v32 = v30 - v29;
      v33 = __clz(v32 + 16);
      v31 = (_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * (27 - v33) + 8) +
                      8LL * (v32 - GameData_1b37d88[28 - v33]));
      if (*(_DWORD*)a1 == 0) {
      LABEL_63:
        *(_DWORD*)a1 = 8;
      }
    }
    else {
      v31 = (_DWORD*)(*(_QWORD*)(a1 + 24) + 8 * v30);
      if (*(_DWORD*)a1 == 0) {
        goto LABEL_63;
      }
    }
    v27 = 0;
    *v31 = 5;
    goto LABEL_65;
  }
  v23 = *(_QWORD*)(v21 + 16);
  if ((unsigned __int64)(v23 + v22) <= *(_QWORD*)(v21 + 32)) {
    GameRoutine_1a0b950(*(_QWORD*)(v21 + 24) + v23, a1 + 88, v22);
    *(_QWORD*)(v21 + 16) += v22;
    v21 = *(_QWORD*)(a1 + 8);
    if ((v19 & 0x8000000000000000LL) != 0) {
      goto LABEL_57;
    }
  }
  else {
    if ((GameRoutine_2ad0(v21) & 1) == 0) {
      goto LABEL_59;
    }
    v21 = *(_QWORD*)(a1 + 8);
    if ((v19 & 0x8000000000000000LL) != 0) {
      goto LABEL_57;
    }
  }
  v28 = *(_QWORD*)(v21 + 16);
  if (v28 + v19 <= *(_QWORD*)(v21 + 32)) {
    GameRoutine_1a0b950(*(_QWORD*)(v21 + 24) + v28, v6, v19);
    v27 = 1;
    *(_QWORD*)(v21 + 16) += v19;
  }
  else {
    if ((GameRoutine_2ad0(v21) & 1) == 0) {
      goto LABEL_59;
    }
    v27 = 1;
  }
LABEL_65:
  if (v5 != nullptr) {
    GameRoutine_651310(v5);
  }
  return v27;
}

void __attribute__((noreturn)) GameHr_4c20()
{
  __int64 v0;

  v0 = __cxa_begin_catch();
  std_terminate(v0);
}

__int64 GameHr_7aa0(int** a1, _QWORD* a2)
{
  int* v2;
  _QWORD* v5;
  __int64 result;
  int v7;
  int* v8;
  int v9;
  _OWORD* v10;
  __int64 v11;
  _OWORD* v12;
  __int64 v13;
  unsigned int* v14;
  int v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64* v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  unsigned __int64 v26;
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
  struct {
    int8x16_t v37[2];
    __int64 v38;
    __int64 v39;
    __int64 v40;
  } v37_;

  v2 = *a1;
  if (*a1 != nullptr) {
    v5 = *((_QWORD**)v2 + 1);
    if ((*(_BYTE*)v2 & 1) == 0) {
    LABEL_3:
      if (v5 != nullptr && *v5 != 0) {
        return 114;
      }
      goto LABEL_10;
    }
  }
  else {
    v37_.v38 = 0;
    v37_.v39 = 0;
    v37_.v40 = 0;
    v37_.v37[0] = COERCE_AS(int8x16_t, GameData_1a82930);
    v37_.v37[1] = COERCE_AS(int8x16_t, GameData_1a837d0);
    result = timeline_7910((__int64)a1, v37_.v37);
    if ((_DWORD)result != 0) {
      return result;
    }
    v2 = *a1;
    v5 = *((_QWORD**)*a1 + 1);
    if ((*(_BYTE*)*a1 & 1) == 0) {
      goto LABEL_3;
    }
  }
  if (v5 != nullptr) {
    return 114;
  }
LABEL_10:
  v7 = v2[16];
  if (v7 != 1) {
    if (v7 != 2) {
      v13 = a2[2];
      if (v13 != a2[3] || (Value_2870((__int64)a2), (v13 = a2[2]) != a2[3])) {
        switch (*(_BYTE*)(a2[5] + v13)) {
        case 9:
        case 0xA:
        case 0xD:
        case 0x20:
        case 0x22:
        case 0x2D:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x5B:
        case 0x66:
        case 0x6E:
        case 0x74:
        case 0x7B:
          goto LABEL_22;
        case 0xB:
        case 0xC:
        case 0xE:
        case 0xF:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1A:
        case 0x1B:
        case 0x1C:
        case 0x1D:
        case 0x1E:
        case 0x1F:
        case 0x21:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2A:
        case 0x2B:
        case 0x2C:
        case 0x2E:
        case 0x3A:
        case 0x3B:
        case 0x3C:
        case 0x3D:
        case 0x3E:
        case 0x3F:
        case 0x40:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4A:
        case 0x4B:
        case 0x4C:
        case 0x4D:
        case 0x4E:
        case 0x4F:
        case 0x50:
        case 0x51:
        case 0x52:
        case 0x53:
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5A:
        case 0x5C:
        case 0x5D:
        case 0x5E:
        case 0x5F:
        case 0x60:
        case 0x61:
        case 0x62:
        case 0x63:
        case 0x64:
        case 0x65:
        case 0x67:
        case 0x68:
        case 0x69:
        case 0x6A:
        case 0x6B:
        case 0x6C:
        case 0x6D:
        case 0x6F:
        case 0x70:
        case 0x71:
        case 0x72:
        case 0x73:
        case 0x75:
        case 0x76:
        case 0x77:
        case 0x78:
        case 0x79:
        case 0x7A:
          break;
        case 0x2F:
          if (((*a1)[19] & 2) != 0) {
            goto LABEL_22;
          }
          break;
        default:
          if (*(unsigned __int8*)(a2[5] + v13) != 239) {
            break;
          }
          Value_28c0((__int64)a2, 3u);
          timeline_InputStream_Get(a2);
          if ((unsigned int)timeline_InputStream_Get(a2) == 187 &&
              (unsigned int)timeline_InputStream_Get(a2) == 191) {
            Value_2a70((__int64)a2);
            goto LABEL_22;
          }
          Value_2a70((__int64)a2);
          break;
        }
      }
    }
    v8 = *a1;
    v9 = **a1;
    if ((v9 & 1) != 0 && *((_QWORD*)v8 + 1) != 0) {
      goto LABEL_19;
    }
    v10 = (_OWORD*)GameRoutine_1a09d20_alt1(0x100u, GameData_212c060);
    if (v10 != nullptr) {
      *v10 = (__typeof__(*v10)){0};
      v10[1] = (__typeof__(v10[1])){0};
      v10[2] = (__typeof__(v10[2])){0};
      v10[3] = (__typeof__(v10[3])){0};
      v10[4] = (__typeof__(v10[4])){0};
      v10[5] = (__typeof__(v10[5])){0};
      v10[6] = (__typeof__(v10[6])){0};
      v10[7] = (__typeof__(v10[7])){0};
      v10[8] = (__typeof__(v10[8])){0};
      v10[9] = (__typeof__(v10[9])){0};
      v10[10] = (__typeof__(v10[10])){0};
      v10[11] = (__typeof__(v10[11])){0};
      v10[12] = (__typeof__(v10[12])){0};
      v10[13] = (__typeof__(v10[13])){0};
      v10[14] = (__typeof__(v10[14])){0};
      v10[15] = (__typeof__(v10[15])){0};
      if ((v9 & 1) == 0) {
        v11 = *((_QWORD*)v8 + 1);
        if (v11 != 0) {
          v12 = v10;
          GameRoutine_651250_alt1(v11);
          v10 = v12;
          v8 = *a1;
        }
      }
      *((_QWORD*)v8 + 1) = v10;
      v8 = *a1;
      v9 = **a1;
    LABEL_19:
      *v8 = v9 | 1;
      **((_QWORD**)*a1 + 1) = a2;
      return 0;
    }
    return 12;
  }
LABEL_22:
  v14 = (unsigned int*)*a1;
  v15 = **a1;
  if ((v15 & 1) != 0) {
    v17 = (_QWORD*)GameRoutine_1a09d20_alt1(8u, GameData_212c060);
    if (v17 != nullptr) {
      *v17 = 0;
      v18 = *((__int64**)v14 + 1);
      if (v18 != nullptr) {
        v19 = v17;
        if (*v18 != 0) {
          v20 = v18[1];
          if (v20 != v18[2] && (Value_2a70(*v18) & 1) != 0) {
            v21 = v20 - (_QWORD)v18;
            v22 = *v18;
            v23 = v21 - 24;
            if (v23 < 0) {
              if (*(_DWORD*)(v22 + 60) == 0) {
                *(_DWORD*)(v22 + 60) = 22;
              }
            }
            else {
              v24 = *(_QWORD*)(v22 + 16);
              v26 = *(_QWORD*)(v22 + 24);
              v25 = (_QWORD*)(v22 + 16);
              if (v26 >= v24 + v23) {
                *v25 = v24 + v23;
              }
              else {
                v28 = *(_QWORD*)v22;
                v27 = *(_QWORD*)(v22 + 8);
                *v25 = 0;
                *(_QWORD*)(v22 + 24) = 0;
                *(_QWORD*)(v22 + 8) = v27 + v26;
                *(_QWORD*)(v22 + 8) +=
                    (*(__int64 (**)(__int64, unsigned __int64))(v28 + 32))(
                        v22, v23 - v26 + v24);
              }
            }
          }
        }
        GameRoutine_651250_alt1((__int64)v18);
        v14 = (unsigned int*)*a1;
        v17 = v19;
      }
      goto LABEL_46;
    }
    return 12;
  }
  v16 = *((_QWORD**)v14 + 1);
  if (v16 == nullptr) {
    v17 = (_QWORD*)GameRoutine_1a09d20_alt1(8u, GameData_212c060);
    if (v17 == nullptr) {
      return 12;
    }
    *v17 = 0;
  LABEL_46:
    *((_QWORD*)v14 + 1) = v17;
    v14 = (unsigned int*)*a1;
    v15 = **a1;
    v16 = *((_QWORD**)*a1 + 1);
  }
  *v16 = a2;
  *v14 = v15 & 0xFFFFFFFE;
  Value_28c0((__int64)a2, 3u);
  v30 = a2[2];
  v29 = a2[3];
  if (v30 == v29) {
    Value_2870((__int64)a2);
    v30 = a2[2];
    v29 = a2[3];
    if (v30 == v29) {
      goto LABEL_53;
    }
  }
  v31 = a2[5];
  v32 = v30 + 1;
  a2[2] = v30 + 1;
  if (*(unsigned __int8*)(v31 + v30) != 239) {
    goto LABEL_53;
  }
  if (v32 == v29) {
    Value_2870((__int64)a2);
    v34 = a2[2];
    v29 = a2[3];
    if (v34 == v29) {
      goto LABEL_53;
    }
    v31 = a2[5];
    v33 = v34 + 1;
    a2[2] = v34 + 1;
    if (*(unsigned __int8*)(v31 + v34) != 187) {
      goto LABEL_53;
    }
  }
  else {
    v33 = v30 + 2;
    a2[2] = v32 + 1;
    if (*(unsigned __int8*)(v31 + v32) != 187) {
      goto LABEL_53;
    }
  }
  if (v33 == v29) {
    Value_2870((__int64)a2);
    v35 = a2[2];
    if (v35 != a2[3]) {
      v36 = a2[5];
      a2[2] = v35 + 1;
      if (*(unsigned __int8*)(v36 + v35) == 191) {
        return 0;
      }
    }
    goto LABEL_53;
  }
  a2[2] = v33 + 1;
  if (*(unsigned __int8*)(v31 + v33) != 191) {
  LABEL_53:
    Value_2a70((__int64)a2);
  }
  return 0;
}

_QWORD* GameHr_bf10(unsigned int* a1, __int64* a2)
{
  unsigned __int64 v2;
  unsigned __int64* v3;
  unsigned __int64 v6;
  unsigned __int64 v7;
  bool v8;
  int v9;
  _QWORD* result;
  char v11;
  __int64 v12;
  __int64 v13;

  v2 = a1[1];
  v3 = *((unsigned __int64**)a1 + 2);
  if (v3 != nullptr) {
    v6 = *v3;
    if (v6 != 0) {
      v7 = GameData_1b37d88[v6 + 1] + (unsigned __int64)*a1;
      LODWORD(v6) = *a1;
      if (v7 > v2) {
        goto LABEL_4;
      }
    LABEL_7:
      v11 = GameRoutine_cf00(a1, 0, a1);
      result = nullptr;
      if ((v11 & 1) == 0) {
        return result;
      }
      LODWORD(v2) = a1[1];
      v9 = v2 - *a1;
      if ((unsigned int)v2 < *a1) {
        goto LABEL_5;
      }
    LABEL_9:
      v12 = __clz(v9 + 16);
      result = (_QWORD*)(*(_QWORD*)(*((_QWORD*)a1 + 2) + 8 * (27 - v12) + 8) +
                         8LL * (v9 - GameData_1b37d88[28 - v12]));
      goto LABEL_10;
    }
  }
  v6 = *a1;
  if (v6 <= v2) {
    goto LABEL_7;
  }
LABEL_4:
  v8 = (unsigned int)v2 >= (unsigned int)v6;
  v9 = v2 - v6;
  if (v8) {
    goto LABEL_9;
  }
LABEL_5:
  result = (_QWORD*)(*((_QWORD*)a1 + 1) + 8LL * (unsigned int)v2);
LABEL_10:
  v13 = *a2;
  a1[1] = v2 + 1;
  *result = v13;
  return result;
}

__int64 GameHr_d240(__int64 a1, unsigned int* a2, unsigned __int64 a3,
                    unsigned int* a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 result;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned int* v25;
  unsigned __int64 v26;
  _QWORD v27[2];

  v25 = a2;
  v26 = a3;
  v7 = *a2;
  if (a3 >= v7) {
    v12 = __clz(a3 - v7 + 16);
    v8 = 28 - v12;
    v9 = *(_QWORD*)(*((_QWORD*)a2 + 2) + 8 * (27 - v12) + 8) +
         32LL * ((_DWORD)a3 - (_DWORD)v7 - GameData_1b37d88[28 - v12]);
    v10 = a5 - 1;
    v11 = v9;
    if (a3 == a5) {
      goto LABEL_13;
    }
  }
  else {
    v8 = 0;
    v9 = *((_QWORD*)a2 + 1) + 32 * a3;
    v10 = a5 - 1;
    v11 = v9;
    if (a3 == a5) {
      goto LABEL_13;
    }
  }
  v13 = *a4;
  if (v10 >= v13) {
    v16 = __clz(v10 - v13 + 16);
    v14 = *(_QWORD*)(*((_QWORD*)a4 + 2) + 8 * (27 - v16) + 8) +
          32LL * ((_DWORD)v10 - (_DWORD)v13 - GameData_1b37d88[28 - v16]);
    if (v8 != 28 - v16) {
      goto LABEL_7;
    }
  LABEL_10:
    v11 = v14 + 32;
    goto LABEL_13;
  }
  v14 = *((_QWORD*)a4 + 1) + 32 * v10;
  if (v8 == 0) {
    goto LABEL_10;
  }
LABEL_7:
  if (v8 != 0) {
    v7 = 8LL << v8;
    v15 = *(_QWORD*)(*((_QWORD*)a2 + 2) + 8 * v8);
  }
  else {
    v15 = *((_QWORD*)a2 + 1);
  }
  v11 = v15 + 32 * v7;
  while (1) {
  LABEL_13:
    if (v9 != v11) {
      goto LABEL_14;
    }
    v27[0] = a4;
    v27[1] = v10;
    result = GameRoutine_6b7180(v27);
    v19 = *v25;
    v20 = 28LL - __clz(v26 - v19 + 16);
    v21 = v26 >= v19 ? v20 : 0LL;
    if (v21 == result) {
      return result;
    }
    v22 = result;
    v23 = v18;
    v26 = GameData_1b37d88[v21 + 1] + v19;
    result = GameRoutine_6b7180(&v25);
    v9 = v24;
    if (result == v22) {
      v11 = v23 + 32;
      if (v23 + 32 == v24) {
        return result;
      }
    }
    else if (result != 0) {
      v11 = *(_QWORD*)(*((_QWORD*)v25 + 2) + 8 * (result - 1) + 8) +
            32 * (16LL << ((unsigned __int8)result - 1));
      if (v11 == v24) {
        return result;
      }
    }
    else {
      v11 = *((_QWORD*)v25 + 1) + 32LL * *v25;
      if (v11 == v24) {
        return result;
      }
    }
  LABEL_14:
    if (v9 != v11) {
      GameRoutine_1a0ba50(v9, 0, ((v11 - v9 - 32) & 0xFFFFFFFFFFFFFFE0LL) + 32,
                          a4, a5, a6);
      v9 += ((v11 - v9 - 32) & 0xFFFFFFFFFFFFFFE0LL) + 32;
    }
  }
}

__int64 GameHr_1046e0(__int64 a1, _QWORD* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char v7;
  __int64 v8;
  _QWORD* v9;
  __int64* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  float v22;
  __int64 v23;
  float v24;
  __int64 v25;
  float v26;
  __int64 v27;
  float v28;
  __int64 v29;
  float v30;
  __int64 v31;
  float v32;
  __int64 v33;
  float v34;
  __int64 v35;
  float v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  float v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  float v52;
  __int64 v53;
  long double v54;
  float v55;
  __int64 v56;
  float v57;
  __int64 v58;
  unsigned __int8* v59;
  __int64 v60;
  char v61;
  __int64 v62;
  __int64* v63;
  unsigned __int8* v64;
  int v65;
  unsigned __int8* v66;
  int v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64* v71;
  __int64 v72;
  int v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  float v77;
  _QWORD* v78;
  __int64** v79;
  __int64* v80;
  unsigned __int64 v81;
  __int64** v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  _BYTE* v89;
  _BYTE* v90;
  __int64 v91;
  __int64 v92;
  _BYTE* v93;
  _BYTE* v94;
  _BYTE* v95;
  _BYTE* v96;
  unsigned int v97;
  unsigned int v98;
  __int64 v99;
  __int64 v100;
  unsigned int v101;
  __int64 v102;
  char v103;
  unsigned __int8* v104;
  int v105;
  char v106;
  unsigned __int8* v107;
  int v108;
  __int64 v109;
  __int64 v110;
  unsigned __int64 v111;
  float v112;
  __int64 v113;
  float v114;
  __int64 v115;
  __int64 v116;
  float v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  const char* v121;
  float v122;
  __int64 v123;
  char v124;
  float v125;
  __int64 v126;
  __int64 v127;
  int v128;
  float v129;
  __int64 v130;
  _DWORD* v131;
  unsigned __int64 v132;
  unsigned __int64 v133;
  __int64 v134;
  __int64 v135;
  float v136;
  __int64* v137;
  _QWORD* v138;
  __int64 v139;
  __int64** v140;
  __int64 v141;
  __int64* v142;
  __int64* v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  int* v149;
  int v150;
  int v151;
  _DWORD* v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  unsigned __int64 v157;
  __int64 v159;
  __int64 v160;
  __int64* v161;
  int v162;
  char v163;
  char v164;

  GameRoutine_1a09b70(GameData_21344c0[0]);
  v4 = *(_QWORD*)(a1 + 8);
  v5 = *(_QWORD*)(a1 + 16) - v4;
  if (v5 != 0) {
    v6 = v5 >> 5;
    v7 = 1;
    v8 = 0;
    while (1) {
      v9 = (_QWORD*)(v4 + 32 * v8);
      if (*(_DWORD*)(*v9 + 144LL) == 1) {
        break;
      }
      v11 = v9 + 1;
      v10 = (__int64*)v9[1];
      v12 = v11[1] - (_QWORD)v10;
      if (v12 != 0) {
        v13 = v12 >> 3;
        while (1) {
          v14 = *v10++;
          if (*(_DWORD*)(v14 + 144) == 1) {
            break;
          }
          if (--v13 == 0) {
            goto LABEL_4;
          }
        }
        v7 = 0;
      }
    LABEL_4:
      if (++v8 == v6) {
        goto LABEL_12;
      }
    }
    *(_BYTE*)(a1 + 41) = 0;
    v15 = *a2;
    v16 = *(_DWORD*)(*a2 + 144LL);
    if (v16 == 1) {
    LABEL_91:
      if ((GameRoutine_1120d0(v15 + 128) & 1) == 0 ||
          (v123 = GameRoutine_112290(*a2 + 128LL, v122),
           ((*(__int64 (**)(__int64))(*(_QWORD*)v123 + 56LL))(v123) & 1) !=
               0)) {
        v124 = GameRoutine_1120d0(*a2 + 128LL);
        v126 = *a2;
        if ((v124 & 1) != 0) {
          v127 = GameRoutine_112290(v126 + 128, v125);
          v128 = (*(__int64 (**)(__int64))(*(_QWORD*)v127 + 80LL))(v127);
          v126 = *a2;
          if (v128 != 0) {
            v130 = GameRoutine_112290(v126 + 128, v129);
            v131 = (_DWORD*)((*(__int64 (**)(__int64))(*(_QWORD*)v130 + 72LL))(
                                 v130) +
                             4);
            v132 = 8;
            v133 = 0;
            v134 = 0;
            while (*(v131 - 1) != 0 || *v131 != 0) {
              v132 += 40LL;
              --v134;
              v133 += 8LL;
              v131 += 3;
            }
            v135 = (*(__int64 (**)(_QWORD, __int64, __int64))(
                **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0],
                                                         32, 32);
            v137 = GameData_21344d8[0];
            *(_QWORD*)(v135 + 16) = 0;
            *(_QWORD*)v135 = v137 + 2;
            *(_QWORD*)(v135 + 8) = 0;
            *(_DWORD*)(v135 + 24) = -(int)v134;
            if ((_DWORD)v134 != 0) {
              v138 = (_QWORD*)GameRoutine_6511d0(v132);
              *v138 = -v134;
              v139 =
                  ((v132 - 48) * (unsigned __int128)0xCCCCCCCCCCCCCCCDLL) >> 64;
              v140 = (__int64**)(v138 + 1);
              if ((~((unsigned int)v139 >> 5) & 7LL) != 0) {
                v141 = ((unsigned __int8)((unsigned int)v139 >> 5) + 1) & 7;
                v142 = GameData_21344e0[0] + 2;
                v140 = (__int64**)(v138 + 1);
                do {
                  *v140 = v142;
                  v140 += 5;
                  --v141;
                } while (v141 != 0);
              }
              if (v132 - 48 >= 0x118) {
                v143 = GameData_21344e0[0] + 2;
                do {
                  *v140 = v143;
                  v140[5] = v143;
                  v140[10] = v143;
                  v140[15] = v143;
                  v140[20] = v143;
                  v140[25] = v143;
                  v140[30] = v143;
                  v140[35] = v143;
                  v140 += 40;
                } while (&v138[v132 / 8] != v140);
              }
              *(_QWORD*)(v135 + 8) = v138 + 1;
              v144 = GameRoutine_6511d0(v133);
              v145 = 0;
              v146 = 0;
              *(_QWORD*)(v135 + 16) = v144;
              do {
                v147 = *(_QWORD*)(v135 + 8) + v145;
                v145 += 40;
                *(_DWORD*)(v147 + 8) = 0;
                *(_QWORD*)(v147 + 16) = 0;
                *(_QWORD*)(v147 + 24) = 0;
                *(_QWORD*)(v147 + 32) = 0;
                *(_QWORD*)(*(_QWORD*)(v135 + 16) + 8 * v146++) = 0;
              } while (v146 < *(int*)(v135 + 24));
            }
            *(_DWORD*)(v135 + 28) = 0;
            *(_QWORD*)(*a2 + 240LL) = v135;
            v148 = GameRoutine_112290(*a2 + 128LL, v136);
            v149 =
                (int*)(*(__int64 (**)(__int64))(*(_QWORD*)v148 + 72LL))(v148);
            v150 = *v149;
            v151 = v149[1];
            if (*(_QWORD*)v149 != 0) {
              v152 = v149 + 2;
              do {
                v153 = *(_QWORD*)(*a2 + 240LL);
                v154 = *(_QWORD*)(v153 + 8) + 40LL * *(int*)(v153 + 28);
                *(_DWORD*)(v154 + 8) = v150;
                *(_DWORD*)(v154 + 12) = v151;
                *(_QWORD*)(v154 + 16) = v152;
                *(_QWORD*)(v154 + 24) = 0;
                *(_QWORD*)(v154 + 32) = 0;
                *(_QWORD*)(*(_QWORD*)(v153 + 16) + 8LL * *(int*)(v153 + 28)) =
                    *(_QWORD*)(v153 + 8) + 40LL * *(int*)(v153 + 28);
                ++*(_DWORD*)(v153 + 28);
                v150 = v152[1];
                v151 = v152[2];
                v152 += 3;
              } while ((v150 | v151) != 0);
            }
            v126 = *a2;
            v155 = *(_QWORD*)(*a2 + 240LL);
            v156 = *(_QWORD*)(v155 + 16);
            if (v156 != 0) {
              v157 = *(unsigned int*)(v155 + 28);
              if ((_DWORD)v157 != 0) {
                GameRoutine_107dc0(v156, v156 + 8 * v157, &v163,
                                   (2 * __clz(v157)) ^ 0x7E, 1);
                v126 = *a2;
              }
            }
          }
        }
        *(_DWORD*)(v126 + 144) = 2;
      }
      return GameRoutine_1a09b80(GameData_21344c0[0]);
    }
  }
  else {
    v7 = 1;
  LABEL_12:
    *(_BYTE*)(a1 + 41) = v7 & 1;
    v15 = *a2;
    v16 = *(_DWORD*)(*a2 + 144LL);
    if (v16 == 1) {
      goto LABEL_91;
    }
  }
  if (v16 == 2) {
    v17 = a2[1];
    if (a2[2] != v17) {
      v18 = 0;
      v19 = GameData_212e250;
      v161 = GameData_21344c8[0] + 2;
      v160 = a1;
      v20 = GameData_21344d0[0] + 2;
      do {
        v21 = *(_QWORD*)(v17 + 8 * v18);
        if (*(_DWORD*)(v21 + 144) == 1) {
          if ((GameRoutine_1120d0(v21 + 96) & 1) == 0 ||
              (v23 = GameRoutine_112290(v21 + 96, v22),
               ((*(__int64 (**)(__int64))(*(_QWORD*)v23 + 64LL))(v23) & 1) !=
                   0) ||
              (v25 = GameRoutine_112290(v21 + 96, v24),
               ((*(__int64 (**)(__int64))(*(_QWORD*)v25 + 56LL))(v25) & 1) !=
                   0)) {
            if ((GameRoutine_1120d0(v21 + 112) & 1) == 0 ||
                (v27 = GameRoutine_112290(v21 + 112, v26),
                 ((*(__int64 (**)(__int64))(*(_QWORD*)v27 + 64LL))(v27) & 1) !=
                     0) ||
                (v29 = GameRoutine_112290(v21 + 112, v28),
                 ((*(__int64 (**)(__int64))(*(_QWORD*)v29 + 56LL))(v29) & 1) !=
                     0)) {
              if ((GameRoutine_1120d0(v21 + 128) & 1) == 0 ||
                  (v31 = GameRoutine_112290(v21 + 128, v30),
                   ((*(__int64 (**)(__int64))(*(_QWORD*)v31 + 64LL))(v31) &
                    1) != 0) ||
                  (v33 = GameRoutine_112290(v21 + 128, v32),
                   ((*(__int64 (**)(__int64))(*(_QWORD*)v33 + 56LL))(v33) &
                    1) != 0)) {
                if ((GameRoutine_1120d0(v21 + 96) & 1) != 0) {
                  v35 = GameRoutine_112290(v21 + 96, v34);
                  if ((*(unsigned int (**)(__int64))(*(_QWORD*)v35 + 80LL))(
                          v35) != 0) {
                    v37 = GameRoutine_112290(v21 + 96, v36);
                    v38 = (*(unsigned int (**)(__int64))(*(_QWORD*)v37 + 80LL))(
                        v37);
                    v39 = *v19;
                    *(_QWORD*)(v21 + 256) = v38;
                    v40 =
                        (*(__int64 (**)(__int64))(*(_QWORD*)v39 + 376LL))(v39);
                    *(_QWORD*)(v21 + 248) = v40;
                    if (v40 != 0 ||
                        (GameRoutine_106f20(a1),
                         v40 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(
                             *(_QWORD*)*v19 + 376LL))(*v19,
                                                      *(_QWORD*)(v21 + 256), 0),
                         *(_QWORD*)(v21 + 248) = v40, v40 != 0)) {
                      v42 = v40;
                      v43 = GameRoutine_112290(v21 + 96, v41);
                      v44 =
                          (*(__int64 (**)(__int64))(*(_QWORD*)v43 + 72LL))(v43);
                      GameRoutine_1a0b950(v42, v44, *(_QWORD*)(v21 + 256));
                      v45 = *(_QWORD*)(a1 + 32);
                      v46 = GameRoutine_190240(*a2);
                      v47 = *(_QWORD*)(v21 + 248);
                      v48 = *(_QWORD*)(v21 + 256);
                      v49 = v46;
                      v50 = GameRoutine_190240(v21);
                      GameRoutine_118df0(v45, v49, v47, v48, v50);
                      *(_BYTE*)(v21 + 264) = 1;
                      v51 = GameRoutine_118ff0(*(_QWORD*)(a1 + 32));
                      v53 = GameRoutine_112290(v21 + 96, v52);
                      GameRoutine_10e200(v51, v53);
                      v19 = GameData_212e250;
                    }
                    else {
                      v120 = *(_QWORD*)GameData_212e2d0[0];
                      v121 = (const char*)GameRoutine_190240(v21 + 24);
                      (*(void (**)(__int64, const char*, ...))(*(_QWORD*)v120 +
                                                               392LL))(
                          v120,
                          "#SoundLibrary error : Can't loading "
                          "AdditionalSoundArchive [%s]\n",
                          v121);
                    }
                    GameRoutine_112080(v21 + 96, v54);
                  }
                }
                if ((GameRoutine_1120d0(v21 + 112) & 1) != 0) {
                  v56 = GameRoutine_112290(v21 + 112, v55);
                  if ((*(unsigned int (**)(__int64))(*(_QWORD*)v56 + 80LL))(
                          v56) != 0) {
                    v58 = GameRoutine_112290(v21 + 112, v57);
                    v59 = (unsigned __int8*)(*(__int64 (**)(__int64))(
                        *(_QWORD*)v58 + 72LL))(v58);
                    v60 = -40;
                    v61 = 0;
                    v62 = 0;
                    v162 = *v59;
                    v63 = GameData_212d480[0];
                    while (1) {
                      v64 = v59 + 2;
                      do {
                        v65 = *++v59;
                        v66 = v64++;
                      } while (v65 != 0);
                      if (v59[1] == 0 && v59[2] == 0 && v59[3] == 0) {
                        break;
                      }
                      do {
                        v67 = *v66++;
                      } while (v67 != 0);
                      if (*v66 == 0 && v66[1] == 0 && v66[2] == 0) {
                        break;
                      }
                      ++v62;
                      v59 = v66 + 1;
                      ++v61;
                      v60 += 40;
                    }
                    if (*(_QWORD*)(v21 + 176) != 0) {
                      v68 = *GameData_212d480[0];
                      v69 = *(_QWORD*)(v21 + 168);
                      *(_QWORD*)(v21 + 168) = 0;
                      (*(void (**)(__int64, __int64))(*(_QWORD*)v68 + 24LL))(
                          v68, v69);
                      v70 = *(_QWORD*)(v21 + 176);
                      *(_QWORD*)(v21 + 176) = 0;
                      (*(void (**)(_QWORD, __int64))(
                          **(_QWORD**)GameData_212d480[0] + 24LL))(
                          *GameData_212d480[0], v70);
                      v63 = GameData_212d480[0];
                      *(_QWORD*)(v21 + 184) = 0;
                    }
                    v71 = v63;
                    *(_QWORD*)(v21 + 168) = (*(__int64 (**)(
                        __int64, __int64, __int64))(*(_QWORD*)*v63 + 16LL))(
                        *v63, 24LL * (unsigned int)v62, 32);
                    *(_QWORD*)(v21 + 176) = (*(__int64 (**)(
                        __int64, __int64, __int64))(*(_QWORD*)*v71 + 16LL))(
                        *v71, 4LL * (unsigned int)v62, 32);
                    *(_DWORD*)(v21 + 184) = 0;
                    *(_DWORD*)(v21 + 188) = v62;
                    if ((_DWORD)v62 != 0) {
                      if ((unsigned int)v62 >= 8) {
                        v72 = 0;
                        do {
                          *(_DWORD*)(*(_QWORD*)(v21 + 176) + 4 * v72) = v72;
                          *(_DWORD*)(*(_QWORD*)(v21 + 176) + 4 * v72 + 4) =
                              v72 + 1;
                          *(_DWORD*)(*(_QWORD*)(v21 + 176) + 4 * v72 + 8) =
                              v72 + 2;
                          *(_DWORD*)(*(_QWORD*)(v21 + 176) + 4 * v72 + 12) =
                              v72 + 3;
                          *(_DWORD*)(*(_QWORD*)(v21 + 176) + 4 * v72 + 16) =
                              v72 + 4;
                          *(_DWORD*)(*(_QWORD*)(v21 + 176) + 4 * v72 + 20) =
                              v72 + 5;
                          *(_DWORD*)(*(_QWORD*)(v21 + 176) + 4 * v72 + 24) =
                              v72 + 6;
                          v73 = v72 + 7;
                          v74 = *(_QWORD*)(v21 + 176) + 4 * v72;
                          v72 += 8;
                          *(_DWORD*)(v74 + 28) = v73;
                        } while (v72 != (v62 & 0x7FFFFFF8));
                      }
                      else {
                        v72 = 0;
                      }
                      if ((v62 & 7) != 0) {
                        v75 = v61 & 7;
                        do {
                          --v75;
                          *(_DWORD*)(*(_QWORD*)(v21 + 176) + 4 * v72) = v72;
                          ++v72;
                        } while (v75 != 0);
                      }
                    }
                    *(_BYTE*)(v21 + 224) = 1;
                    v76 = (*(__int64 (**)(_QWORD, __int64, __int64))(
                        **(_QWORD**)GameData_212d480[0] + 16LL))(
                        *GameData_212d480[0], 32, 32);
                    *(_QWORD*)(v76 + 16) = 0;
                    *(_DWORD*)(v76 + 24) = v62;
                    *(_QWORD*)v76 = v161;
                    *(_QWORD*)(v76 + 8) = 0;
                    if ((_DWORD)v62 != 0) {
                      v78 = (_QWORD*)GameRoutine_6511d0(
                          40LL * (unsigned int)v62 + 8);
                      *v78 = (unsigned int)v62;
                      v79 = (__int64**)(v78 + 1);
                      v80 = GameData_21344d0[0];
                      v81 = 40 * v62 - 40;
                      v82 = v79;
                      if ((~((unsigned int)((v81 *
                                             (unsigned __int128)0xCCCCCCCCCCCCCCCDLL) >>
                                            64) >>
                             5) &
                           7LL) != 0) {
                        v83 =
                            ((unsigned __int8)((unsigned int)(((unsigned __int64)
                                                                   v60 *
                                                               (unsigned __int128)0xCCCCCCCCCCCCCCCDLL) >>
                                                              64) >>
                                               5) +
                             1) &
                            7;
                        v82 = v79;
                        do {
                          --v83;
                          *v82 = v80 + 2;
                          v82 += 5;
                        } while (v83 != 0);
                      }
                      if (v81 >= 0x118) {
                        do {
                          *v82 = v20;
                          v82[5] = v20;
                          v82[10] = v20;
                          v82[15] = v20;
                          v82[20] = v20;
                          v82[25] = v20;
                          v82[30] = v20;
                          v82[35] = v20;
                          v82 += 40;
                        } while (v82 != &v79[5 * (unsigned int)v62]);
                      }
                      *(_QWORD*)(v76 + 8) = v79;
                      v84 = GameRoutine_6511d0(8LL * (unsigned int)v62);
                      v85 = 0;
                      v86 = 0;
                      *(_QWORD*)(v76 + 16) = v84;
                      do {
                        v87 = *(_QWORD*)(v76 + 8) + v85;
                        v85 += 40;
                        *(_DWORD*)(v87 + 8) = 0;
                        *(_QWORD*)(v87 + 16) = 0;
                        *(_QWORD*)(v87 + 24) = 0;
                        *(_QWORD*)(v87 + 32) = 0;
                        *(_QWORD*)(*(_QWORD*)(v76 + 16) + 8 * v86++) = 0;
                      } while (v86 < *(int*)(v76 + 24));
                    }
                    *(_DWORD*)(v76 + 28) = 0;
                    *(_QWORD*)(v21 + 232) = v76;
                    v88 = GameRoutine_112290(v21 + 112, v77);
                    v89 = (_BYTE*)((*(__int64 (**)(__int64))(*(_QWORD*)v88 +
                                                             72LL))(v88) +
                                   1);
                  LABEL_67:
                    v93 = nullptr;
                    v94 = v89;
                    while (1) {
                      v95 = v93;
                      v96 = &v94[GameRoutine_1a09c70(v94)];
                      v94 = v96 + 1;
                      if (v96[1] == 0 && v96[2] == 0 && v96[3] == 0) {
                        break;
                      }
                      v93 = v96 + 1;
                      if (v95 != nullptr) {
                        GameRoutine_1a09b70(v21 + 192);
                        GameRoutine_1a09b70(v21 + 192);
                        v97 = *(_DWORD*)(v21 + 184);
                        v98 = *(_DWORD*)(v21 + 188);
                        GameRoutine_1a09b80(v21 + 192);
                        if (v97 >= v98) {
                          v159 = GameRoutine_a1efd0(v21 + 192);
                          GameRoutine_1a0a590(v159);
                          __udf(0);
                        }
                        v99 = *(unsigned int*)(v21 + 184);
                        v100 = *(_QWORD*)(v21 + 176);
                        v101 = *(_DWORD*)(v100 + 4 * v99);
                        *(_DWORD*)(v21 + 184) = v99 + 1;
                        *(_DWORD*)(v100 + 4 * v99) = -1;
                        v102 = *(_QWORD*)(v21 + 168) + 24LL * v101;
                        GameRoutine_1a09b80(v21 + 192);
                        *(_QWORD*)(v102 + 8) = v95;
                        *(_QWORD*)(v102 + 16) = 0;
                        *(_QWORD*)v102 = v89;
                        if (v162 != 0) {
                          v103 = *v89;
                          if (*v89 != 0) {
                            v104 = v89 + 1;
                            do {
                              *(v104 - 1) = ~v103;
                              v105 = *v104++;
                              v103 = v105;
                            } while (v105 != 0);
                            v95 = *(_BYTE**)(v102 + 8);
                          }
                          v106 = *v95;
                          if (*v95 != 0) {
                            v107 = v95 + 1;
                            do {
                              *(v107 - 1) = ~v106;
                              v108 = *v107++;
                              v106 = v108;
                            } while (v108 != 0);
                          }
                        }
                        v90 = v96 + 3;
                        *(_DWORD*)(v102 + 16) = (unsigned __int8)v96[1];
                        *(_BYTE*)(v102 + 20) = v96[2] != 0;
                        v91 = *(_QWORD*)(v21 + 232);
                        v92 = *(_QWORD*)(v91 + 8) + 40LL * *(int*)(v91 + 28);
                        *(_QWORD*)(v92 + 16) = v89;
                        *(_DWORD*)(v92 + 8) = GameRoutine_fdf60(v89, 0);
                        *(_QWORD*)(v92 + 24) = v102;
                        *(_QWORD*)(v92 + 32) = 0;
                        v89 = v90;
                        *(_QWORD*)(*(_QWORD*)(v91 + 16) +
                                   8LL * *(int*)(v91 + 28)) =
                            *(_QWORD*)(v91 + 8) + 40LL * *(int*)(v91 + 28);
                        ++*(_DWORD*)(v91 + 28);
                        goto LABEL_67;
                      }
                    }
                    v109 = *(_QWORD*)(v21 + 232);
                    a1 = v160;
                    v110 = *(_QWORD*)(v109 + 16);
                    v19 = GameData_212e250;
                    if (v110 != 0) {
                      v111 = *(unsigned int*)(v109 + 28);
                      if ((_DWORD)v111 != 0) {
                        GameRoutine_109080(v110, v110 + 8 * v111, &v164,
                                           (2 * __clz(v111)) ^ 0x7E, 1);
                      }
                    }
                  }
                }
                if ((GameRoutine_1120d0(v21 + 128) & 1) != 0) {
                  v113 = GameRoutine_112290(v21 + 128, v112);
                  if ((*(unsigned int (**)(__int64))(*(_QWORD*)v113 + 80LL))(
                          v113) != 0) {
                    v115 = GameRoutine_112290(v21 + 128, v114);
                    v116 =
                        (*(__int64 (**)(__int64))(*(_QWORD*)v115 + 72LL))(v115);
                    v118 = GameRoutine_112290(v21 + 128, v117);
                    v119 =
                        (*(__int64 (**)(__int64))(*(_QWORD*)v118 + 80LL))(v118);
                    *(_QWORD*)(v21 + 240) =
                        GameRoutine_106cc0(v119, v116, (unsigned int)v119);
                  }
                }
                *(_DWORD*)(v21 + 144) = 2;
              }
            }
          }
        }
        v17 = a2[1];
        ++v18;
      } while (v18 < (a2[2] - v17) >> 3);
    }
  }
  return GameRoutine_1a09b80(GameData_21344c0[0]);
}

__int64 GameHr_10b0e0(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  float v3;
  float v4;
  signed int v5;
  int v6;
  int* v7;
  unsigned int v8;
  float v9;
  float v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _BYTE* v18;
  __int64 i;
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
  _BYTE* v33;
  __int64 v34;
  float v35;
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
  int v50;
  __int64* v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  char* v55;
  unsigned __int64 v56;
  _DWORD* v57;
  unsigned int v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned int* v62;
  unsigned int v63;
  __int64 v64;
  __int64 v65;
  _BYTE* v66;
  __int64 v67;
  float v68;
  _QWORD v69[20];
  _QWORD v70[2];
  struct {
    __int64 v71;
    unsigned __int64 v72;
    char* v73;
    __int64 v74;
    __int64 v75;
    __int64 v76;
    char gap232_[8];
    __int64 vars0;
    __int64 vars8;
    __int64 vars10;
    __int64 vars18;
  } v71_;

  if (*(_QWORD*)(result + 1592) == 0) {
    return result;
  }
  v1 = result;
  nn_os_LockMutex((__int64)&GameData_2178e40);
  v2 = *(_QWORD*)(v1 + 1584);
  v3 = *(float*)(v2 + 32);
  v4 = *(float*)(v2 + 36);
  v6 = *(_DWORD*)(v2 + 16);
  v5 = *(_DWORD*)(v2 + 20);
  v7 = *(int**)(v2 + 24);
  v8 = *(_DWORD*)(v2 + 40);
  if (v6 != 3) {
    v14 = *(_QWORD**)(v2 + 8);
    *(_QWORD*)(*(_QWORD*)v2 + 8LL) = v14;
    *v14 = *(_QWORD*)v2;
    --*(_QWORD*)(v1 + 1592);
    (*(void (**)(__int64))(*(_QWORD*)snd_g_memory + 24LL))(snd_g_memory);
    result = nn_os_UnlockMutex((__int64)&GameData_2178e40);
    if (v6 == 2) {
      snd_Fade_Fade_10c830((__int64)v69, v4);
      Crc32List_10c480(v1, v5, (__int64)v69, v8, v3);
      return snd_Fade_Destroy_Fade(v69);
    }
    if (v6 != 1) {
      if (v6 != 0) {
        return result;
      }
      v71_.vars10 = v71_.vars0;
      v71_.vars18 = v71_.vars8;
      v15 = v1 + 360LL * v5;
      v17 = *(_QWORD*)(v15 + 16);
      v16 = v15 + 16;
      *(_QWORD*)v16 = 0;
      *(_QWORD*)(v16 + 32) = v17;
      GameRoutine_190200_alt1(v16 + 8, &GameData_1a9f09e);
      v18 = (_BYTE*)(v1 + 1538);
      for (i = 0; i != 4; ++i) {
        v20 = *(unsigned int*)(v16 + 356);
        if (i == v20) {
          if (*(v18 - 10) == 1 && *(_BYTE*)(v16 + 344) == 1) {
            Manager_118d00(*(_QWORD*)(v1 + 8), 0, v20);
            *(_BYTE*)(v16 + 344) = 0;
          }
          if (*(v18 - 9) == 1 && *(_BYTE*)(v16 + 345) == 1) {
            Manager_118d00(*(_QWORD*)(v1 + 8), 1u, *(_DWORD*)(v16 + 356));
            *(_BYTE*)(v16 + 345) = 0;
          }
          if (*(v18 - 8) == 1 && *(_BYTE*)(v16 + 346) == 1) {
            Manager_118d00(*(_QWORD*)(v1 + 8), 2u, *(_DWORD*)(v16 + 356));
            *(_BYTE*)(v16 + 346) = 0;
          }
          if (*(v18 - 7) == 1 && *(_BYTE*)(v16 + 347) == 1) {
            Manager_118d00(*(_QWORD*)(v1 + 8), 3u, *(_DWORD*)(v16 + 356));
            *(_BYTE*)(v16 + 347) = 0;
          }
          if (*(v18 - 6) == 1 && *(_BYTE*)(v16 + 348) == 1) {
            Manager_118d00(*(_QWORD*)(v1 + 8), 4u, *(_DWORD*)(v16 + 356));
            *(_BYTE*)(v16 + 348) = 0;
          }
          if (*(v18 - 5) == 1 && *(_BYTE*)(v16 + 349) == 1) {
            Manager_118d00(*(_QWORD*)(v1 + 8), 5u, *(_DWORD*)(v16 + 356));
            *(_BYTE*)(v16 + 349) = 0;
          }
          if (*(v18 - 4) == 1 && *(_BYTE*)(v16 + 350) == 1) {
            Manager_118d00(*(_QWORD*)(v1 + 8), 6u, *(_DWORD*)(v16 + 356));
            *(_BYTE*)(v16 + 350) = 0;
          }
          if (*(v18 - 3) == 1 && *(_BYTE*)(v16 + 351) == 1) {
            Manager_118d00(*(_QWORD*)(v1 + 8), 7u, *(_DWORD*)(v16 + 356));
            *(_BYTE*)(v16 + 351) = 0;
          }
          if (*(v18 - 2) == 1 && *(_BYTE*)(v16 + 352) == 1) {
            Manager_118d00(*(_QWORD*)(v1 + 8), 8u, *(_DWORD*)(v16 + 356));
            *(_BYTE*)(v16 + 352) = 0;
          }
          if (*(v18 - 1) == 1 && *(_BYTE*)(v16 + 353) == 1) {
            Manager_118d00(*(_QWORD*)(v1 + 8), 9u, *(_DWORD*)(v16 + 356));
            *(_BYTE*)(v16 + 353) = 0;
          }
          if (*v18 == 1 && *(_BYTE*)(v16 + 354) == 1) {
            Manager_118d00(*(_QWORD*)(v1 + 8), 0xAu, *(_DWORD*)(v16 + 356));
            *(_BYTE*)(v16 + 354) = 0;
          }
        }
        v18 += 11;
      }
      if ((*(_BYTE*)(v1 + 1528) & 1) != 0) {
        v22 = GameRoutine_119030(*(_QWORD*)(v1 + 8));
        GameRoutine_17be60(v22, 0);
        if (*(_BYTE*)(v1 + 1529) != 1) {
        LABEL_50:
          if (*(_BYTE*)(v1 + 1530) != 1) {
            goto LABEL_51;
          }
          goto LABEL_63;
        }
      }
      else if (*(_BYTE*)(v1 + 1529) != 1) {
        goto LABEL_50;
      }
      v23 = GameRoutine_119030(*(_QWORD*)(v1 + 8));
      GameRoutine_17be60(v23, 1);
      if (*(_BYTE*)(v1 + 1530) != 1) {
      LABEL_51:
        if (*(_BYTE*)(v1 + 1531) != 1) {
          goto LABEL_52;
        }
        goto LABEL_64;
      }
    LABEL_63:
      v24 = GameRoutine_119030(*(_QWORD*)(v1 + 8));
      GameRoutine_17be60(v24, 2);
      if (*(_BYTE*)(v1 + 1531) != 1) {
      LABEL_52:
        if (*(_BYTE*)(v1 + 1532) != 1) {
          goto LABEL_53;
        }
        goto LABEL_65;
      }
    LABEL_64:
      v25 = GameRoutine_119030(*(_QWORD*)(v1 + 8));
      GameRoutine_17be60(v25, 3);
      if (*(_BYTE*)(v1 + 1532) != 1) {
      LABEL_53:
        if (*(_BYTE*)(v1 + 1533) != 1) {
          goto LABEL_54;
        }
        goto LABEL_66;
      }
    LABEL_65:
      v26 = GameRoutine_119030(*(_QWORD*)(v1 + 8));
      GameRoutine_17be60(v26, 4);
      if (*(_BYTE*)(v1 + 1533) != 1) {
      LABEL_54:
        if (*(_BYTE*)(v1 + 1534) != 1) {
          goto LABEL_55;
        }
        goto LABEL_67;
      }
    LABEL_66:
      v27 = GameRoutine_119030(*(_QWORD*)(v1 + 8));
      GameRoutine_17be60(v27, 5);
      if (*(_BYTE*)(v1 + 1534) != 1) {
      LABEL_55:
        if (*(_BYTE*)(v1 + 1535) != 1) {
          goto LABEL_56;
        }
        goto LABEL_68;
      }
    LABEL_67:
      v28 = GameRoutine_119030(*(_QWORD*)(v1 + 8));
      GameRoutine_17be60(v28, 6);
      if (*(_BYTE*)(v1 + 1535) != 1) {
      LABEL_56:
        if (*(_BYTE*)(v1 + 1536) != 1) {
          goto LABEL_57;
        }
        goto LABEL_69;
      }
    LABEL_68:
      v29 = GameRoutine_119030(*(_QWORD*)(v1 + 8));
      GameRoutine_17be60(v29, 7);
      if (*(_BYTE*)(v1 + 1536) != 1) {
      LABEL_57:
        if (*(_BYTE*)(v1 + 1537) != 1) {
          goto LABEL_58;
        }
        goto LABEL_70;
      }
    LABEL_69:
      v30 = GameRoutine_119030(*(_QWORD*)(v1 + 8));
      GameRoutine_17be60(v30, 8);
      if (*(_BYTE*)(v1 + 1537) != 1) {
      LABEL_58:
        if (*(_BYTE*)(v1 + 1538) != 1) {
          goto LABEL_59;
        }
        goto LABEL_71;
      }
    LABEL_70:
      v31 = GameRoutine_119030(*(_QWORD*)(v1 + 8));
      GameRoutine_17be60(v31, 9);
      if (*(_BYTE*)(v1 + 1538) != 1) {
      LABEL_59:
        v21 = *(unsigned int*)(v16 + 356);
        if ((*(_BYTE*)(v1 + 1572) & 1) == 0) {
          goto LABEL_130;
        }
      LABEL_72:
        v33 = (_BYTE*)(v1 + 1538);
        v34 = 4;
        while (1) {
          if (v21 + v34 != 4) {
            goto LABEL_74;
          }
          if (*(v33 - 10) == 1) {
            if (*(_BYTE*)(v16 + 344) != 0) {
              v35 = 0x1.0000000000000p+0f;
            }
            else {
              v35 = 0x0.0p+0f;
            }
            *(float*)(v16 + 172) = v35;
            if (*(v33 - 9) != 1) {
            LABEL_78:
              if (*(v33 - 8) != 1) {
                goto LABEL_79;
              }
              goto LABEL_97;
            }
          }
          else if (*(v33 - 9) != 1) {
            goto LABEL_78;
          }
          if ((*(_BYTE*)(v16 + 345) & 1) != 0) {
            *(_DWORD*)(v16 + 176) = 1065353216;
            if (*(v33 - 8) != 1) {
              goto LABEL_79;
            }
          }
          else {
            *(_DWORD*)(v16 + 176) = 0;
            if (*(v33 - 8) != 1) {
            LABEL_79:
              if (*(v33 - 7) != 1) {
                goto LABEL_80;
              }
              goto LABEL_101;
            }
          }
        LABEL_97:
          if ((*(_BYTE*)(v16 + 346) & 1) != 0) {
            *(_DWORD*)(v16 + 180) = 1065353216;
            if (*(v33 - 7) != 1) {
              goto LABEL_80;
            }
          }
          else {
            *(_DWORD*)(v16 + 180) = 0;
            if (*(v33 - 7) != 1) {
            LABEL_80:
              if (*(v33 - 6) != 1) {
                goto LABEL_81;
              }
              goto LABEL_105;
            }
          }
        LABEL_101:
          if ((*(_BYTE*)(v16 + 347) & 1) != 0) {
            *(_DWORD*)(v16 + 184) = 1065353216;
            if (*(v33 - 6) != 1) {
              goto LABEL_81;
            }
          }
          else {
            *(_DWORD*)(v16 + 184) = 0;
            if (*(v33 - 6) != 1) {
            LABEL_81:
              if (*(v33 - 5) != 1) {
                goto LABEL_82;
              }
              goto LABEL_109;
            }
          }
        LABEL_105:
          if ((*(_BYTE*)(v16 + 348) & 1) != 0) {
            *(_DWORD*)(v16 + 188) = 1065353216;
            if (*(v33 - 5) != 1) {
              goto LABEL_82;
            }
          }
          else {
            *(_DWORD*)(v16 + 188) = 0;
            if (*(v33 - 5) != 1) {
            LABEL_82:
              if (*(v33 - 4) != 1) {
                goto LABEL_83;
              }
              goto LABEL_113;
            }
          }
        LABEL_109:
          if ((*(_BYTE*)(v16 + 349) & 1) != 0) {
            *(_DWORD*)(v16 + 192) = 1065353216;
            if (*(v33 - 4) != 1) {
              goto LABEL_83;
            }
          }
          else {
            *(_DWORD*)(v16 + 192) = 0;
            if (*(v33 - 4) != 1) {
            LABEL_83:
              if (*(v33 - 3) != 1) {
                goto LABEL_84;
              }
              goto LABEL_117;
            }
          }
        LABEL_113:
          if ((*(_BYTE*)(v16 + 350) & 1) != 0) {
            *(_DWORD*)(v16 + 196) = 1065353216;
            if (*(v33 - 3) != 1) {
              goto LABEL_84;
            }
          }
          else {
            *(_DWORD*)(v16 + 196) = 0;
            if (*(v33 - 3) != 1) {
            LABEL_84:
              if (*(v33 - 2) != 1) {
                goto LABEL_85;
              }
              goto LABEL_121;
            }
          }
        LABEL_117:
          if ((*(_BYTE*)(v16 + 351) & 1) != 0) {
            *(_DWORD*)(v16 + 200) = 1065353216;
            if (*(v33 - 2) != 1) {
              goto LABEL_85;
            }
          }
          else {
            *(_DWORD*)(v16 + 200) = 0;
            if (*(v33 - 2) != 1) {
            LABEL_85:
              if (*(v33 - 1) != 1) {
                goto LABEL_86;
              }
              goto LABEL_125;
            }
          }
        LABEL_121:
          if ((*(_BYTE*)(v16 + 352) & 1) != 0) {
            *(_DWORD*)(v16 + 204) = 1065353216;
            if (*(v33 - 1) != 1) {
              goto LABEL_86;
            }
          }
          else {
            *(_DWORD*)(v16 + 204) = 0;
            if (*(v33 - 1) != 1) {
            LABEL_86:
              if (*v33 == 1) {
                goto LABEL_87;
              }
              goto LABEL_74;
            }
          }
        LABEL_125:
          if ((*(_BYTE*)(v16 + 353) & 1) != 0) {
            *(_DWORD*)(v16 + 208) = 1065353216;
            if (*v33 == 1) {
              goto LABEL_87;
            }
          }
          else {
            *(_DWORD*)(v16 + 208) = 0;
            if (*v33 == 1) {
            LABEL_87:
              if ((*(_BYTE*)(v16 + 354) & 1) != 0) {
                *(_DWORD*)(v16 + 212) = 1065353216;
              }
              else {
                *(_DWORD*)(v16 + 212) = 0;
              }
            }
          }
        LABEL_74:
          --v34;
          v33 += 11;
          if (v34 == 0) {
            goto LABEL_130;
          }
        }
      }
    LABEL_71:
      v32 = GameRoutine_119030(*(_QWORD*)(v1 + 8));
      GameRoutine_17be60(v32, 10);
      v21 = *(unsigned int*)(v16 + 356);
      if ((*(_BYTE*)(v1 + 1572) & 1) == 0) {
      LABEL_130:
        Crc32List_120360();
        Crc32List_120360();
        return Crc32List_120360();
      }
      goto LABEL_72;
    }
    v71_.v74 = v71_.vars0;
    v71_.v75 = v71_.vars8;
    v71_.v76 = v71_.vars10;
    result = Manager_116630();
    if ((result & 1) != 0) {
      return result;
    }
    v36 = v1 + 360LL * v5;
    v38 = *(_QWORD*)(v36 + 16);
    v37 = v36 + 16;
    *(_QWORD*)(v37 + 32) = v38;
    if (*(_BYTE*)(v1 + 1528) == 1) {
      v39 = GameRoutine_119030(*(_QWORD*)(v1 + 8));
      GameRoutine_17be60(v39, 0);
      if (*(_BYTE*)(v1 + 1529) != 1) {
      LABEL_134:
        if (*(_BYTE*)(v1 + 1530) != 1) {
          goto LABEL_135;
        }
        goto LABEL_147;
      }
    }
    else if (*(_BYTE*)(v1 + 1529) != 1) {
      goto LABEL_134;
    }
    v40 = GameRoutine_119030(*(_QWORD*)(v1 + 8));
    GameRoutine_17be60(v40, 1);
    if (*(_BYTE*)(v1 + 1530) != 1) {
    LABEL_135:
      if (*(_BYTE*)(v1 + 1531) != 1) {
        goto LABEL_136;
      }
      goto LABEL_148;
    }
  LABEL_147:
    v41 = GameRoutine_119030(*(_QWORD*)(v1 + 8));
    GameRoutine_17be60(v41, 2);
    if (*(_BYTE*)(v1 + 1531) != 1) {
    LABEL_136:
      if (*(_BYTE*)(v1 + 1532) != 1) {
        goto LABEL_137;
      }
      goto LABEL_149;
    }
  LABEL_148:
    v42 = GameRoutine_119030(*(_QWORD*)(v1 + 8));
    GameRoutine_17be60(v42, 3);
    if (*(_BYTE*)(v1 + 1532) != 1) {
    LABEL_137:
      if (*(_BYTE*)(v1 + 1533) != 1) {
        goto LABEL_138;
      }
      goto LABEL_150;
    }
  LABEL_149:
    v43 = GameRoutine_119030(*(_QWORD*)(v1 + 8));
    GameRoutine_17be60(v43, 4);
    if (*(_BYTE*)(v1 + 1533) != 1) {
    LABEL_138:
      if (*(_BYTE*)(v1 + 1534) != 1) {
        goto LABEL_139;
      }
      goto LABEL_151;
    }
  LABEL_150:
    v44 = GameRoutine_119030(*(_QWORD*)(v1 + 8));
    GameRoutine_17be60(v44, 5);
    if (*(_BYTE*)(v1 + 1534) != 1) {
    LABEL_139:
      if (*(_BYTE*)(v1 + 1535) != 1) {
        goto LABEL_140;
      }
      goto LABEL_152;
    }
  LABEL_151:
    v45 = GameRoutine_119030(*(_QWORD*)(v1 + 8));
    GameRoutine_17be60(v45, 6);
    if (*(_BYTE*)(v1 + 1535) != 1) {
    LABEL_140:
      if (*(_BYTE*)(v1 + 1536) != 1) {
        goto LABEL_141;
      }
      goto LABEL_153;
    }
  LABEL_152:
    v46 = GameRoutine_119030(*(_QWORD*)(v1 + 8));
    GameRoutine_17be60(v46, 7);
    if (*(_BYTE*)(v1 + 1536) != 1) {
    LABEL_141:
      if (*(_BYTE*)(v1 + 1537) != 1) {
        goto LABEL_142;
      }
      goto LABEL_154;
    }
  LABEL_153:
    v47 = GameRoutine_119030(*(_QWORD*)(v1 + 8));
    GameRoutine_17be60(v47, 8);
    if (*(_BYTE*)(v1 + 1537) != 1) {
    LABEL_142:
      if (*(_BYTE*)(v1 + 1538) != 1) {
        goto LABEL_143;
      }
      goto LABEL_155;
    }
  LABEL_154:
    v48 = GameRoutine_119030(*(_QWORD*)(v1 + 8));
    GameRoutine_17be60(v48, 9);
    if (*(_BYTE*)(v1 + 1538) != 1) {
    LABEL_143:
      if (*(int**)v37 == v7) {
        goto LABEL_192;
      }
      goto LABEL_156;
    }
  LABEL_155:
    v49 = GameRoutine_119030(*(_QWORD*)(v1 + 8));
    GameRoutine_17be60(v49, 10);
    if (*(int**)v37 == v7) {
    LABEL_192:
      if ((*(_BYTE*)(v1 + 1572) & 1) == 0) {
      LABEL_251:
        Crc32List_120360();
        Crc32List_120360();
        return Crc32List_120360();
      }
      v65 = *(unsigned int*)(v37 + 356);
      v66 = (_BYTE*)(v1 + 1538);
      v67 = 4;
      while (1) {
        if (v65 + v67 != 4) {
          goto LABEL_195;
        }
        if (*(v66 - 10) == 1) {
          if (*(_BYTE*)(v37 + 344) != 0) {
            v68 = 0x1.0000000000000p+0f;
          }
          else {
            v68 = 0x0.0p+0f;
          }
          *(float*)(v37 + 172) = v68;
          if (*(v66 - 9) != 1) {
          LABEL_199:
            if (*(v66 - 8) != 1) {
              goto LABEL_200;
            }
            goto LABEL_218;
          }
        }
        else if (*(v66 - 9) != 1) {
          goto LABEL_199;
        }
        if ((*(_BYTE*)(v37 + 345) & 1) != 0) {
          *(_DWORD*)(v37 + 176) = 1065353216;
          if (*(v66 - 8) != 1) {
            goto LABEL_200;
          }
        }
        else {
          *(_DWORD*)(v37 + 176) = 0;
          if (*(v66 - 8) != 1) {
          LABEL_200:
            if (*(v66 - 7) != 1) {
              goto LABEL_201;
            }
            goto LABEL_222;
          }
        }
      LABEL_218:
        if ((*(_BYTE*)(v37 + 346) & 1) != 0) {
          *(_DWORD*)(v37 + 180) = 1065353216;
          if (*(v66 - 7) != 1) {
            goto LABEL_201;
          }
        }
        else {
          *(_DWORD*)(v37 + 180) = 0;
          if (*(v66 - 7) != 1) {
          LABEL_201:
            if (*(v66 - 6) != 1) {
              goto LABEL_202;
            }
            goto LABEL_226;
          }
        }
      LABEL_222:
        if ((*(_BYTE*)(v37 + 347) & 1) != 0) {
          *(_DWORD*)(v37 + 184) = 1065353216;
          if (*(v66 - 6) != 1) {
            goto LABEL_202;
          }
        }
        else {
          *(_DWORD*)(v37 + 184) = 0;
          if (*(v66 - 6) != 1) {
          LABEL_202:
            if (*(v66 - 5) != 1) {
              goto LABEL_203;
            }
            goto LABEL_230;
          }
        }
      LABEL_226:
        if ((*(_BYTE*)(v37 + 348) & 1) != 0) {
          *(_DWORD*)(v37 + 188) = 1065353216;
          if (*(v66 - 5) != 1) {
            goto LABEL_203;
          }
        }
        else {
          *(_DWORD*)(v37 + 188) = 0;
          if (*(v66 - 5) != 1) {
          LABEL_203:
            if (*(v66 - 4) != 1) {
              goto LABEL_204;
            }
            goto LABEL_234;
          }
        }
      LABEL_230:
        if ((*(_BYTE*)(v37 + 349) & 1) != 0) {
          *(_DWORD*)(v37 + 192) = 1065353216;
          if (*(v66 - 4) != 1) {
            goto LABEL_204;
          }
        }
        else {
          *(_DWORD*)(v37 + 192) = 0;
          if (*(v66 - 4) != 1) {
          LABEL_204:
            if (*(v66 - 3) != 1) {
              goto LABEL_205;
            }
            goto LABEL_238;
          }
        }
      LABEL_234:
        if ((*(_BYTE*)(v37 + 350) & 1) != 0) {
          *(_DWORD*)(v37 + 196) = 1065353216;
          if (*(v66 - 3) != 1) {
            goto LABEL_205;
          }
        }
        else {
          *(_DWORD*)(v37 + 196) = 0;
          if (*(v66 - 3) != 1) {
          LABEL_205:
            if (*(v66 - 2) != 1) {
              goto LABEL_206;
            }
            goto LABEL_242;
          }
        }
      LABEL_238:
        if ((*(_BYTE*)(v37 + 351) & 1) != 0) {
          *(_DWORD*)(v37 + 200) = 1065353216;
          if (*(v66 - 2) != 1) {
            goto LABEL_206;
          }
        }
        else {
          *(_DWORD*)(v37 + 200) = 0;
          if (*(v66 - 2) != 1) {
          LABEL_206:
            if (*(v66 - 1) != 1) {
              goto LABEL_207;
            }
            goto LABEL_246;
          }
        }
      LABEL_242:
        if ((*(_BYTE*)(v37 + 352) & 1) != 0) {
          *(_DWORD*)(v37 + 204) = 1065353216;
          if (*(v66 - 1) != 1) {
            goto LABEL_207;
          }
        }
        else {
          *(_DWORD*)(v37 + 204) = 0;
          if (*(v66 - 1) != 1) {
          LABEL_207:
            if (*v66 == 1) {
              goto LABEL_208;
            }
            goto LABEL_195;
          }
        }
      LABEL_246:
        if ((*(_BYTE*)(v37 + 353) & 1) != 0) {
          *(_DWORD*)(v37 + 208) = 1065353216;
          if (*v66 == 1) {
            goto LABEL_208;
          }
        }
        else {
          *(_DWORD*)(v37 + 208) = 0;
          if (*v66 == 1) {
          LABEL_208:
            if ((*(_BYTE*)(v37 + 354) & 1) != 0) {
              *(_DWORD*)(v37 + 212) = 1065353216;
            }
            else {
              *(_DWORD*)(v37 + 212) = 0;
            }
          }
        }
      LABEL_195:
        --v67;
        v66 += 11;
        if (v67 == 0) {
          goto LABEL_251;
        }
      }
    }
  LABEL_156:
    *(_QWORD*)v37 = v7;
    v50 = *v7;
    ConstructString_1901f0(&v71_.v71);
    GameRoutine_a392e0_alt1((__int64)&v71_.v71, (__int64)"[ %08x ]", v50);
    v51 = (__int64*)(v37 + 8);
    if ((__int64*)(v37 + 8) == &v71_.v71) {
      if ((*(_BYTE*)(v37 + 8) & 1) != 0) {
        (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
            *snd_g_memory_ptr[0], *(_QWORD*)(v37 + 24));
      }
      v53 = v71_.v71;
      v54 = v71_.v72;
      LOWORD(v71_.v71) = 0;
      *v51 = v53;
      *(_QWORD*)(v37 + 16) = v54;
      *(_QWORD*)(v37 + 24) = v71_.v73;
      goto LABEL_172;
    }
    if ((*(_BYTE*)(v37 + 8) & 1) != 0) {
      if ((v71_.v71 & 1) != 0) {
        v55 = v71_.v73;
      }
      else {
        v55 = (char*)&v71_.v71 + 1;
      }
      if ((v71_.v71 & 1) != 0) {
        v56 = v71_.v72;
      }
      else {
        v56 = (unsigned __int64)(unsigned __int8)v71_.v71 >> 1;
      }
      GameRoutine_a3a260_alt1((__int64*)(v37 + 8), (__int64)v55, v56);
      if ((v71_.v71 & 1) != 0) {
        goto LABEL_171;
      }
    }
    else {
      if ((v71_.v71 & 1) == 0) {
        v52 = v71_.v72;
        *v51 = v71_.v71;
        *(_QWORD*)(v37 + 16) = v52;
        *(_QWORD*)(v37 + 24) = v71_.v73;
        if ((v71_.v71 & 1) == 0) {
          goto LABEL_172;
        }
      LABEL_171:
        (*(void (**)(_QWORD, char*))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
            *snd_g_memory_ptr[0], v71_.v73);
        goto LABEL_172;
      }
      GameRoutine_a3a3a0_alt1((_QWORD*)(v37 + 8), (__int64)v71_.v73, v71_.v72);
      if ((v71_.v71 & 1) != 0) {
        goto LABEL_171;
      }
    }
  LABEL_172:
    *(_DWORD*)(v37 + 144) = 0;
    *(_QWORD*)(v37 + 40) = 0x3F8000003F800000LL;
    *(_QWORD*)(v37 + 48) = 0x3F80000000000000LL;
    *(_QWORD*)(v37 + 128) = 1065353216;
    *(_QWORD*)(v37 + 136) = 0x3F8000003F800000LL;
    v57 = *(_DWORD**)v37;
    *(_DWORD*)(v37 + 56) = 1065353216;
    *(_QWORD*)(v37 + 60) = 0x3F80000000000000LL;
    *(_DWORD*)(v37 + 68) = 1065353216;
    *(_QWORD*)(v37 + 72) = 0x3F80000000000000LL;
    *(_DWORD*)(v37 + 80) = 1065353216;
    *(_QWORD*)(v37 + 84) = 0x3F80000000000000LL;
    *(_DWORD*)(v37 + 92) = 1065353216;
    *(_QWORD*)(v37 + 96) = 0x3F80000000000000LL;
    *(_QWORD*)(v37 + 104) = 1065353216;
    *(_QWORD*)(v37 + 116) = 1065353216;
    *(_DWORD*)(v37 + 112) = 1065353216;
    *(_DWORD*)(v37 + 124) = 1065353216;
    *(_DWORD*)(v37 + 148) = 1065353216;
    *(_DWORD*)(v37 + 152) = 1065353216;
    *(_QWORD*)(v37 + 156) = 0x3F80000000000000LL;
    *(_QWORD*)(v37 + 164) = 1065353216;
    v58 = v57[1];
    *(_DWORD*)(v37 + 356) = v58;
    if ((int)v57[4] >= 1) {
      v59 = *((_QWORD*)v57 + 1);
      v60 = v37 + 216;
      v61 = 0;
      v62 = (unsigned int*)(v59 + 16);
      do {
        v71_.v71 = 0;
        LODWORD(v71_.v72) = 0x2000;
        snd_fnd_WeakHandle_reset((__int64)&v71_.v71);
        v63 = *(v62 - 4);
        if (v63 - 1 >= 0xA) {
          v64 = 0;
        }
        else {
          v64 = v63;
        }
        switch (v62[2]) {
        case 0u:
          Manager_11ffc0((void*)((__int64)v70), *(_QWORD*)(v1 + 8),
                         (__int64)"None", *v62, v64, v58, 5u, 0);
          goto LABEL_189;
        case 1u:
          Manager_11f360((void*)(v70), *(_QWORD*)(v1 + 8), "Reverb", *v62,
                         *((_QWORD*)v62 + 2), v64, v58);
          goto LABEL_189;
        case 2u:
          Manager_11fa50((void*)(v70), *(_QWORD*)(v1 + 8), "I3dl2Reverb", *v62,
                         *((_QWORD*)v62 + 2), v64, v58);
          goto LABEL_189;
        case 3u:
          Manager_11fbe0((void*)(v70), *(_QWORD*)(v1 + 8), "Delay", *v62,
                         *((_QWORD*)v62 + 2), v64, v58);
          goto LABEL_189;
        case 4u:
          Manager_11fd70((void*)(v70), *(_QWORD*)(v1 + 8), "LightLimiter", *v62,
                         *((_QWORD*)v62 + 2), v64, v58);
          goto LABEL_189;
        case 5u:
          Manager_11ff00((void*)(v70), *(_QWORD*)(v1 + 8), "Compressor", *v62,
                         *((_QWORD*)v62 + 2), v64, v58);
          goto LABEL_189;
        case 6u:
          Manager_11fb10((void*)((__int64)v70), *(_QWORD*)(v1 + 8),
                         (__int64)"CpuI3dl2Reverb", *v62, *((_QWORD*)v62 + 2),
                         v64, v58, v62[1], 0);
          goto LABEL_189;
        case 7u:
          Manager_11f980((void*)((__int64)v70), *(_QWORD*)(v1 + 8),
                         (__int64)"CpuReverb", *v62, *((_QWORD*)v62 + 2), v64,
                         v58, v62[1], 0);
          goto LABEL_189;
        case 8u:
          Manager_11fca0((void*)((__int64)v70), *(_QWORD*)(v1 + 8),
                         (__int64)"CpuDelay", *v62, *((_QWORD*)v62 + 2), v64,
                         v58, v62[1], 0);
          goto LABEL_189;
        case 9u:
          Manager_11fe30((void*)((__int64)v70), *(_QWORD*)(v1 + 8),
                         (__int64)"CpuLightLimiter", *v62, *((_QWORD*)v62 + 2),
                         v64, v58, v62[1], 0);
        LABEL_189:
          GameRoutine_112180_alt1((__int64)&v71_.v71, (__int64)v70);
          break;
        default:
          break;
        }
        if ((snd_fnd_WeakHandle_isValid(&v71_.v71) & 1) != 0) {
          *(_QWORD*)(snd_fnd_WeakHandle_get((__int64)&v71_.v71) + 80) = v59;
          *(_BYTE*)(v37 + 344 + *(v62 - 4)) = 1;
          GameRoutine_112180_alt1(v60, (__int64)&v71_.v71);
        }
        ++v61;
        v60 += 16;
        v62 += 10;
        v59 += 40;
      } while (v61 < *(int*)(*(_QWORD*)v37 + 16LL));
    }
    goto LABEL_192;
  }
  v9 = *(float*)(v2 + 44);
  v10 = v9 - (*(float (**)(_QWORD))(*(_QWORD*)*snd_s_target_ptr + 80LL))(
                 *snd_s_target_ptr);
  v11 = *(_QWORD*)(v1 + 1584);
  *(_DWORD*)(v11 + 16) = 3;
  *(_DWORD*)(v11 + 20) = v5;
  *(_QWORD*)(v11 + 24) = v7;
  *(float*)(v11 + 32) = v3;
  *(float*)(v11 + 36) = v4;
  *(_DWORD*)(v11 + 40) = v8;
  *(float*)(v11 + 44) = v10;
  if (v10 <= 0x0.0p+0f) {
    v12 = *(_QWORD**)(v1 + 1584);
    v13 = (_QWORD*)v12[1];
    *(_QWORD*)(*v12 + 8LL) = v13;
    *v13 = *v12;
    --*(_QWORD*)(v1 + 1592);
    (*(void (**)(__int64))(*(_QWORD*)snd_g_memory + 24LL))(snd_g_memory);
  }
  return nn_os_UnlockMutex((__int64)&GameData_2178e40);
}

__int64 GameHr_127e30(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      unsigned __int8* a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64* v20;
  __int64 v21;
  bool v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  struct {
    __int64 v28;
    int v29;
  } v28_;
  int v30[2];

  v14 = a1 + 4096;
  Voice_1449c0((_QWORD*)a1, a2, a4, a7, a8);
  v15 = GameData_2134670[0];
  *(_QWORD*)(a1 + 6072) = 0;
  *(_QWORD*)(a1 + 6080) = 0;
  *(_QWORD*)(a1 + 6088) = 0;
  *(_QWORD*)(a1 + 6096) = 0;
  *(_QWORD*)(a1 + 6104) = 0;
  *(_BYTE*)(v14 + 2018) = 0;
  *(_QWORD*)a1 = v15 + 2;
  *(_QWORD*)(a1 + 5592) = v15 + 244;
  *(_QWORD*)(a1 + 40) = v15 + 103;
  *(_WORD*)(a1 + 6112) = 1;
  *(_DWORD*)(a1 + 6116) = 1065353216;
  v30[0] = (unsigned int)snd_fnd_calcCrc32(a5, 0);
  v30[1] = (unsigned int)snd_fnd_calcCrc32Reverse((const char*)a5, 0);
  v16 = GameRoutine_f6360_alt1(v30, (_QWORD*)(a1 + 6096));
  v17 = Crc32List_128050(*(_QWORD*)(a1 + 32) + 2920LL);
  *(_QWORD*)(a1 + 6088) = v17;
  GameHr_f2ce0(v17, v16, 0, (char*)a5);
  Crc32List_f05e0(*(_QWORD*)(a1 + 5648),
                  (__int64*)(*(_QWORD*)(a1 + 6088) + 16LL));
  v28_.v28 = 0;
  v28_.v29 = 0x2000;
  if (a3 != 0) {
    v18 = a3 + 5592;
  }
  else {
    v18 = 0;
  }
  snd_fnd_WeakHandle_set((__int64)&v28_.v28, v18);
  GameRoutine_112180_alt1(a1 + 5800, (__int64)&v28_.v28);
  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 16LL))(a1, a4);
  GameRoutine_190200_alt1(v14 + 1584, (char*)a5);
  v19 = *(unsigned __int8*)(v14 + 1584);
  v20 = (__int64*)(v14 + 1640);
  if ((*(_BYTE*)(v14 + 1640) & 1) != 0) {
    v22 = (v19 & 1) == 0;
    v23 = v19 >> 1;
    if (v22) {
      v24 = a1 + 5681;
    }
    else {
      v24 = *(_QWORD*)(a1 + 5696);
    }
    if (v22) {
      v25 = v23;
    }
    else {
      v25 = *(_QWORD*)(a1 + 5688);
    }
    GameRoutine_a3a260_alt1(v20, v24, v25);
  }
  else if ((v19 & 1) != 0) {
    GameRoutine_a3a3a0_alt1(v20, *(_QWORD*)(a1 + 5696), *(_QWORD*)(a1 + 5688));
  }
  else {
    v21 = *(_QWORD*)(v14 + 1592);
    *v20 = *(_QWORD*)(v14 + 1584);
    *(_QWORD*)(v14 + 1648) = v21;
    *(_QWORD*)(v14 + 1656) = *(_QWORD*)(v14 + 1600);
  }
  v28_.v28 = 0;
  v28_.v29 = 0x2000;
  if (a6 != 0) {
    v26 = a6 + 5592;
  }
  else {
    v26 = 0;
  }
  snd_fnd_WeakHandle_set((__int64)&v28_.v28, v26);
  GameRoutine_112180_alt1(a1 + 5848, (__int64)&v28_.v28);
  *(_DWORD*)(a1 + 5920) = *(_DWORD*)(a7 + 208);
  GameRoutine_126f60(a1, a7);
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 784LL))(a1);
}

__int64 GameHr_157200(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  long double v6;

  v2 = GameRoutine_117bb0(*(_QWORD*)(a1 + 8));
  v3 = GameRoutine_118fd0(*(_QWORD*)(a1 + 8));
  result = GameRoutine_119020(*(_QWORD*)(a1 + 8));
  if ((*(_BYTE*)(a1 + 4440) & 1) == 0) {
    v5 = result;
    do {
      GameRoutine_110280(v2);
      GameRoutine_104660(v3);
      *(__n128*)&v6 = GameRoutine_13e440(v5);
      result = (*(__int64 (**)(__int64, __int64, long double))(
          *(_QWORD*)a1 + 56LL))(a1, 16, v6);
    } while (*(_BYTE*)(a1 + 4440) != 1);
  }
  return result;
}

void GameHr_1768c0(__int64 a1, __int64 a2, int* a3, __int64 a4, __int64 a5,
                   __int64 a6)
{
  __int64 v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  __int64 v14;
  float* v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float* v21;
  int v22;
  int v23;
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
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  __int64 v40;
  int* v41;
  int* v42;
  __int64 v43;
  float v44;
  __int64 v45;
  int* v46;
  __int64 v47;
  float v48;
  char v49;
  float v50;
  int v51;
  int v52;
  bool v53;
  int v54;
  int v55;
  int v56;
  int v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  int v76;
  int v77;
  unsigned int v78;
  int v79;
  int v80;
  float* v81;
  __int64 v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  int v89;
  __int64 v90;

  v8 = *a3;
  v9 = a3[3];
  v10 = a3[4];
  v11 = v9 * *a3;
  v12 = v10 / v11;
  if (v10 % v11 != 0) {
    a1 = GameRoutine_1a0a590(a1);
  }
  else if (v12 <= a3[2]) {
    if (v9 != 6) {
      return;
    }
    v7 = *(_DWORD*)(a1 + 4204);
    if (v12 >= 1 && v8 >= 1) {
      v22 = 0;
      v23 = *(_DWORD*)(a1 + 4204);
      do {
        if (v8 >= 1) {
          v24 = v8;
          v25 = 0;
          v26 = 2 * v8;
          v27 = 3 * v8;
          v28 = 4LL * v8 * a3[3] * v22;
          v29 = v28 + 16LL * v8;
          v30 = a2 + v28 + 20LL * v8;
          v31 = a2 + v29;
          v32 = a2 + v28 + 4 * v27;
          v33 = a2 + v28 + 4 * v26;
          v34 = a2 + v28 + 4 * v24;
          do {
            v35 = *(_DWORD*)(v34 + 4 * v25) + *(_DWORD*)(a2 + v28 + 4 * v25);
            v36 = *(_DWORD*)(v32 + 4 * v25) + *(_DWORD*)(v33 + 4 * v25);
            v37 = *(_DWORD*)(v31 + 4 * v25);
            v38 = *(_DWORD*)(v30 + 4 * v25++);
            a5 = (unsigned int)(v38 / 2);
            a4 = (unsigned int)(a5 + v37 / 2);
            *(float*)(a1 + 108 + 4LL * v23) =
              vcvts_n_f32_s32(a4 + (v36 / 2 + v35 / 2) / 2, 0xFu);
            v39 = *(_DWORD*)(a1 + 4204);
            if (v39 <= 1022) {
              v23 = v39 + 1;
            }
            else {
              v23 = 0;
            }
            *(_DWORD*)(a1 + 4204) = v23;
          } while (v25 < *a3);
          v8 = *a3;
        }
        ++v22;
      } while (v22 != v12);
    }
    v6 = a1 + 108;
    v14 = 1023;
    v15 = (float*)(a1 + 152);
    v16 = *(float*)(a1 + 108) * *(float*)(a1 + 108);
    do {
      v14 -= 11;
      v17 = *(v15 - 1);
      v18 =
        (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(v16 +
                                                                                                                                  (float)(*(v15 -
                                                                                                                                            10) *
                                                                                                                                    *(v15 -
                                                                                                                                      10))) *
                                                                                                                          0.5f) +
                                                                                                                  (float)(*(v15 -
                                                                                                                            9) *
                                                                                                                    *(v15 -
                                                                                                                      9))) *
                                                                                                          0.5f) +
                                                                                                  (float)(*(v15 -
                                                                                                            8) *
                                                                                                    *(v15 -
                                                                                                      8))) *
                                                                                          0.5f) +
                                                                                  (float)(*(v15 -
                                                                                            7) *
                                                                                    *(v15 -
                                                                                      7))) *
                                                                          0.5f) +
                                                                  (float)(*(v15 -
                                                                            6) *
                                                                    *(v15 -
                                                                      6))) *
                                                          0.5f) +
                                                  (float)(*(v15 - 5) *
                                                    *(v15 - 5))) *
                                          0.5f) +
                                  (float)(*(v15 - 4) * *(v15 - 4))) *
                          0.5f) +
                  (float)(*(v15 - 3) * *(v15 - 3))) *
          0.5f) +
        (float)(*(v15 - 2) * *(v15 - 2));
      v19 = *v15;
      v15 += 11;
      v16 = (float)((float)((float)((float)(v18 * 0.5f) + (float)(v17 * v17)) *
                      0.5f) +
              (float)(v19 * v19)) *
        0.5f;
    } while (v14 != 0);
    v20 = sqrtf(v16);
    if (v20 == 0.0f) {
      goto LABEL_12;
    }
    goto LABEL_24;
  }
  v40 = GameRoutine_1a0a590(a1);
  v42 = v41;
  v90 = v43;
  v44 = GameRoutine_1a0a010();
  a2 = v90;
  v20 = v44;
  a3 = v42;
  a1 = v40;
  if (v44 == 0.0f) {
  LABEL_12:
    *(_DWORD*)(a1 + 4208) = -1027080192;
    if ((*(_BYTE*)(a1 + 104) & 1) == 0) {
      return;
    }
    v21 = (float*)(a1 + 4208);
  LABEL_36:
    v51 = *(_DWORD*)(a1 + 4212);
    if (v51 < 1) {
      goto LABEL_42;
    }
    v53 = (unsigned int)v51 >= 0x1E;
    v54 = v51 - 30;
    goto LABEL_38;
  }
LABEL_24:
  v45 = a1;
  v46 = a3;
  v47 = a2;
  v48 = GameRoutine_1a0a980(a1, a2, a3, a4, a5, a6, v20);
  v49 = *(_BYTE*)(v45 + 104);
  v50 = v48 * 20.0f;
  *(float*)(v45 + 4208) = v50;
  if ((v49 & 1) == 0) {
    return;
  }
  a1 = v45;
  a2 = v47;
  a3 = v46;
  v21 = (float*)(v45 + 4208);
  if (v50 <= -80.0f) {
    goto LABEL_36;
  }
  if (v50 <= -60.0f) {
    v51 = *(_DWORD*)(a1 + 4212);
    if (v51 < 1) {
      goto LABEL_42;
    }
    v53 = (unsigned int)v51 >= 0x14;
    v54 = v51 - 20;
    goto LABEL_38;
  }
  if (v50 <= -40.0f) {
    v51 = *(_DWORD*)(a1 + 4212);
    if (v51 < 1) {
      goto LABEL_42;
    }
    v53 = (unsigned int)v51 >= 0xA;
    v54 = v51 - 10;
    goto LABEL_38;
  }
  if (v50 <= -30.0f) {
    v51 = *(_DWORD*)(a1 + 4212);
    if (v51 < 1) {
      goto LABEL_42;
    }
    v53 = (unsigned int)v51 >= 5;
    v54 = v51 - 5;
  LABEL_38:
    if (v53) {
      v51 = v54;
    }
    else {
      v51 = 0;
    }
  LABEL_41:
    *(_DWORD*)(a1 + 4212) = v51;
    goto LABEL_42;
  }
  if (v50 <= -22.0f) {
    v51 = *(_DWORD*)(a1 + 4212);
    if (v51 >= 1) {
      *(_DWORD*)(a1 + 4212) = --v51;
    }
  LABEL_42:
    if (v51 == 0) {
      return;
    }
    goto LABEL_43;
  }
  v51 = *(_DWORD*)(a1 + 4212);
  if (v50 >= -10.0f) {
    if (v51 <= 999) {
      if (v51 >= 980) {
        v89 = 980;
      }
      else {
        v89 = *(_DWORD*)(a1 + 4212);
      }
      v51 = v89 + 20;
      goto LABEL_41;
    }
  }
  else if (v51 <= 999) {
    if (v51 >= 990) {
      v52 = 990;
    }
    else {
      v52 = *(_DWORD*)(a1 + 4212);
    }
    v51 = v52 + 10;
    goto LABEL_41;
  }
LABEL_43:
  *(_DWORD*)(a1 + 4204) = v7;
  if (v12 >= 1) {
    v55 = *a3;
    if (*a3 >= 1) {
      v56 = 0;
      v57 = 1000 - v51;
      do {
        if (v55 >= 1) {
          v58 = v55;
          v59 = 0;
          v60 = 2 * v55;
          v61 = 3 * v55;
          v62 = 4LL * v55 * a3[3] * v56;
          v63 = v62 + 16LL * v55;
          v64 = a2 + v62;
          v65 = a2 + v62 + 20LL * v55;
          v66 = a2 + v63;
          v67 = a2 + v62 + 4 * v61;
          v68 = a2 + v62 + 4 * v60;
          v69 = a2 + v62 + 4 * v58;
          do {
            v70 = (274877907LL * *(_DWORD*)(v64 + 4 * v59) * v57) >> 38;
            *(_DWORD*)(v64 + 4 * v59) = v70 + ((unsigned int)v70 >> 31);
            v71 = (274877907LL * *(_DWORD*)(v69 + 4 * v59) * v57) >> 38;
            *(_DWORD*)(v69 + 4 * v59) = v71 + ((unsigned int)v71 >> 31);
            v72 = (274877907LL * *(_DWORD*)(v68 + 4 * v59) * v57) >> 38;
            *(_DWORD*)(v68 + 4 * v59) = v72 + ((unsigned int)v72 >> 31);
            v73 = (274877907LL * *(_DWORD*)(v67 + 4 * v59) * v57) >> 38;
            *(_DWORD*)(v67 + 4 * v59) = v73 + ((unsigned int)v73 >> 31);
            v74 = (274877907LL * *(_DWORD*)(v66 + 4 * v59) * v57) >> 38;
            *(_DWORD*)(v66 + 4 * v59) = v74 + ((unsigned int)v74 >> 31);
            v75 = 274877907LL * *(_DWORD*)(v65 + 4 * v59) * v57;
            *(_DWORD*)(v65 + 4 * v59) =
              (v75 >> 38) + ((unsigned int)(v75 >> 38) >> 31);
            a6 = *(unsigned int*)(v67 + 4 * v59);
            v76 = *(_DWORD*)(v69 + 4 * v59) + *(_DWORD*)(v64 + 4 * v59);
            v77 = a6 + *(_DWORD*)(v68 + 4 * v59);
            v78 = *(_DWORD*)(v66 + 4 * v59++);
            a4 = v77 / 2 + v76 / 2 + ((unsigned int)(v77 / 2 + v76 / 2) >> 31);
            a5 = v78 + (v78 >> 31);
            *(float*)(v6 + 4LL * *(int*)(a1 + 4204)) =
              vcvts_n_f32_s32((v75 >> 39) + ((unsigned int)(v75 >> 39) >> 31) +
                  ((int)a5 >> 1) + (v77 / 2 + v76 / 2) / 2,
                0xFu);
            v79 = *(_DWORD*)(a1 + 4204);
            if (v79 <= 1022) {
              v80 = v79 + 1;
            }
            else {
              v80 = 0;
            }
            *(_DWORD*)(a1 + 4204) = v80;
          } while (v59 < *a3);
          v55 = *a3;
        }
        ++v56;
      } while (v56 != v12);
    }
  }
  v81 = (float*)(a1 + 152);
  v82 = 1023;
  v83 = *(float*)(a1 + 108) * *(float*)(a1 + 108);
  do {
    v82 -= 11;
    v84 = *(v81 - 1);
    v85 =
      (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(v83 +
                                                                                                                                (float)(*(v81 -
                                                                                                                                          10) *
                                                                                                                                  *(v81 -
                                                                                                                                    10))) *
                                                                                                                        0.5f) +
                                                                                                                (float)(*(v81 -
                                                                                                                          9) *
                                                                                                                  *(v81 -
                                                                                                                    9))) *
                                                                                                        0.5f) +
                                                                                                (float)(*(v81 -
                                                                                                          8) *
                                                                                                  *(v81 -
                                                                                                    8))) *
                                                                                        0.5f) +
                                                                                (float)(*(v81 -
                                                                                          7) *
                                                                                  *(v81 -
                                                                                    7))) *
                                                                        0.5f) +
                                                                (float)(*(v81 -
                                                                          6) *
                                                                  *(v81 - 6))) *
                                                        0.5f) +
                                                (float)(*(v81 - 5) *
                                                  *(v81 - 5))) *
                                        0.5f) +
                                (float)(*(v81 - 4) * *(v81 - 4))) *
                        0.5f) +
                (float)(*(v81 - 3) * *(v81 - 3))) *
        0.5f) +
      (float)(*(v81 - 2) * *(v81 - 2));
    v86 = *v81;
    v81 += 11;
    v83 = (float)((float)((float)((float)(v85 * 0.5f) + (float)(v84 * v84)) *
                    0.5f) +
            (float)(v86 * v86)) *
      0.5f;
  } while (v82 != 0);
  v87 = sqrtf(v83);
  if (v87 == 0.0f) {
    v88 = -100.0f;
  }
  else {
    v88 = GameRoutine_1a0a980(a1, a2, a3, a4, a5, a6, v87) * 20.0f;
  }
  *v21 = v88;
}

__int64 GameHr_188d70(__int64 a1, __int64 a2, int a3, float a4)
{
  int v5;
  int v7;
  __int64 v8;
  float v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  float v14;
  __int64 v15;
  float v16;
  __int64 v17;

  v5 = a3;
  v7 = *(_DWORD*)(a1 + 76) + a3;
  v8 = GameRoutine_112290(*(_QWORD*)(a1 + 48) + 24LL, a4);
  if (v8 != 0) {
    LODWORD(v8) = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 80LL))(v8);
  }
  if (v7 >= (int)v8) {
    v10 = GameRoutine_112290(*(_QWORD*)(a1 + 48) + 24LL, v9);
    if (v10 != 0) {
      LODWORD(v10) = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 80LL))(v10);
    }
    v5 = v10 - *(_DWORD*)(a1 + 76);
  }
  v11 = GameRoutine_112290(*(_QWORD*)(a1 + 48) + 24LL, v9);
  if (v11 != 0) {
    v11 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 72LL))(v11);
  }
  GameRoutine_1a0b950(a2, v11 + *(int*)(a1 + 76), v5);
  v12 = (*(_DWORD*)(a1 + 76) + v5) & ~((*(_DWORD*)(a1 + 76) + v5) >> 31);
  v13 = *(_QWORD*)(a1 + 48);
  *(_DWORD*)(a1 + 76) = v12;
  v15 = GameRoutine_112290(v13 + 24, v14);
  if (v15 != 0) {
    LODWORD(v15) = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 80LL))(v15);
  }
  if (v12 > (int)v15) {
    v17 = GameRoutine_112290(*(_QWORD*)(a1 + 48) + 24LL, v16);
    if (v17 != 0) {
      LODWORD(v17) = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 80LL))(v17);
    }
    *(_DWORD*)(a1 + 76) = v17;
  }
  return 1;
}

__int64 GameHr_198580(__int64 result)
{
  unsigned int v1;
  __int64 v2;
  int v3;
  signed int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  signed int v9;
  __int64 v10;
  __int64 v11;
  signed int v12;
  _BYTE v13[16];

  v1 = *(_DWORD*)(*(_QWORD*)(result + 24) + 4LL);
  if (v1 >= 2) {
    v2 = result;
    if (v1 >> 1 == 1) {
      v3 = 0;
    }
    else {
      v4 = v1 - 1;
      v3 = 0;
      do {
        v5 = *(int*)(v2 + 32);
        v6 = *(_QWORD*)(v2 + 24) + 8LL;
        GameRoutine_1a0b950(v13, v6 + (int)v5 * v3, v5);
        GameRoutine_1a0b950(v6 + (int)v5 * v3, v6 + (int)v5 * v4, v5);
        GameRoutine_1a0b950(*(_QWORD*)(v2 + 24) +
                                *(int*)(v2 + 32) * (__int64)v4 + 8,
                            v13, *(int*)(v2 + 32));
        v7 = *(int*)(v2 + 32);
        v8 = *(_QWORD*)(v2 + 24) + 8LL;
        GameRoutine_1a0b950(v13, v8 + (int)v7 + (int)v7 * v3, v7);
        v9 = v1 + (v3 ^ 0xFFFFFFFE);
        GameRoutine_1a0b950(v8 + (int)v7 + (int)v7 * v3, v8 + (int)v7 * v9, v7);
        result = GameRoutine_1a0b950(*(_QWORD*)(v2 + 24) +
                                         *(int*)(v2 + 32) * (__int64)v9 + 8,
                                     v13, *(int*)(v2 + 32));
        v3 += 2;
        v4 -= 2;
      } while (((v1 >> 1) & 0x7FFFFFFE) != v3);
    }
    if ((v1 & 2) != 0) {
      v10 = *(int*)(v2 + 32);
      v11 = *(_QWORD*)(v2 + 24) + 8LL;
      GameRoutine_1a0b950(v13, v11 + (int)v10 * v3, v10);
      v12 = v1 + ~v3;
      GameRoutine_1a0b950(v11 + (int)v10 * v3, v11 + (int)v10 * v12, v10);
      return GameRoutine_1a0b950(*(_QWORD*)(v2 + 24) +
                                     *(int*)(v2 + 32) * (__int64)v12 + 8,
                                 v13, *(int*)(v2 + 32));
    }
  }
  return result;
}

__int64 GameHr_26bae0(__int64 a1, float* a2, float* a3, __int64 a4, _DWORD* a5,
                      int a6)
{
  float v6;
  float v7;
  float v8;
  signed int v9;
  signed int v10;
  float v11;
  float v12;
  signed int v13;
  signed int v14;
  int v16;
  bool v17;
  signed int v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  __int64 v23;
  char v25;
  __int64 v26;
  int v27;
  float v28;
  __int64 v29;
  float v30;
  float v31;
  char v32;
  __int64 v33;
  int* v34;
  int v35;
  float v36;
  __int64 v37;
  float v38;
  float v39;
  char v40;
  float v41;
  float v42;
  char v43;
  float v44;
  __int64 v45;
  float v46;
  float v47;
  float v48;
  int v49;
  float v50;
  float v51;
  char v52;
  char v53;
  float v54;
  float v55;
  char v56;
  _BYTE v57[4];
  int v58;

  v7 = *(float*)(a1 + 48);
  v6 = *(float*)(a1 + 52);
  v8 = v6 * (float)*(int*)(a1 + 64);
  v9 = vcvtms_s32_f32((float)(a2[2] - v7) / v8);
  v10 = vcvtms_s32_f32((float)(a3[2] - v7) / v8);
  if (v9 > v10 || (v11 = *(float*)(a1 + 40), v12 = v6 * (float)*(int*)(a1 + 60),
                   v13 = vcvtms_s32_f32((float)(*a2 - v11) / v12),
                   v14 = vcvtms_s32_f32((float)(*a3 - v11) / v12), v13 > v14)) {
    *a5 = 0;
    return 0x40000000;
  }
  v16 = 0;
  while (2) {
    v18 = v13;
    do {
      v19 = *(_QWORD*)(*(_QWORD*)(a1 + 8) +
                       8LL * (*(_DWORD*)(a1 + 4) &
                              (-669632447 * v9 - 1918454973 * v18)));
      if (v19 == 0) {
        goto LABEL_7;
      }
      v20 = *(_QWORD*)(a1 + 24);
      v21 = *(_DWORD*)(a1 + 36);
      v22 = 0;
      do {
        v23 = *(_QWORD*)(v19 + 8);
        if (v23 != 0 && *(_DWORD*)(v23 + 8) == v18 &&
            *(_DWORD*)(v23 + 12) == v9 && v22 <= 31) {
          *(_DWORD*)&v57[4 * v22++] =
              (*(_DWORD*)v19 << v21) |
              (-1227133513 * ((unsigned __int64)(v19 - v20) >> 3));
        }
        v19 = *(_QWORD*)(v19 + 48);
      } while (v19 != 0);
      if (v22 < 1) {
        goto LABEL_7;
      }
      v25 = v22;
      if (v22 != 1) {
        v33 = v22 & 0x7FFFFFFE;
        v26 = 0;
        v34 = &v58;
        while (1) {
          v35 = *(v34 - 1);
          v36 = *(float*)(a1 + 52);
          v37 = *(_QWORD*)(*(_QWORD*)(a1 + 24) +
                           56LL * (v35 &
                                   (unsigned int)~(-1 << *(_DWORD*)(a1 + 36))) +
                           8);
          v38 = *(float*)(v37 + 20);
          v39 =
              v38 +
              (float)((float)((unsigned int)*(unsigned __int8*)(v37 + 51) + 1) *
                      v36);
          if (*a2 <= v39 &&
              (LOBYTE(v39) = *(_BYTE*)(v37 + 50),
               *a3 >= (float)(v38 + (float)((float)LODWORD(v39) * v36)))) {
            v40 = 1;
            if (a2[1] <= *(float*)(v37 + 36)) {
            LABEL_34:
              if (a3[1] >= *(float*)(v37 + 24)) {
                goto LABEL_36;
              }
            }
          }
          else {
            v40 = 0;
            if (a2[1] <= *(float*)(v37 + 36)) {
              goto LABEL_34;
            }
          }
          v40 = 0;
        LABEL_36:
          v41 = *(float*)(v37 + 28);
          v42 =
              v41 +
              (float)((float)((unsigned int)*(unsigned __int8*)(v37 + 53) + 1) *
                      v36);
          if (a2[2] <= v42) {
            LOBYTE(v42) = *(_BYTE*)(v37 + 52);
            v43 = v40 ^ 1;
            v42 = (float)LODWORD(v42);
            if (a3[2] < (float)(v41 + (float)(v42 * v36))) {
              v43 = 1;
            }
            if ((v43 & 1) == 0 && v16 < a6) {
              *(_DWORD*)(a4 + 4LL * v16++) = v35;
            }
          }
          v44 = *(float*)(a1 + 52);
          v45 = *(_QWORD*)(*(_QWORD*)(a1 + 24) +
                           56LL * (*v34 &
                                   (unsigned int)~(-1 << *(_DWORD*)(a1 + 36))) +
                           8);
          v47 = *(float*)(v45 + 20);
          v46 = *(float*)(v45 + 24);
          v48 = *(float*)(v45 + 28);
          LOBYTE(v42) = *(_BYTE*)(v45 + 52);
          v49 = *(unsigned __int8*)(v45 + 53);
          v50 =
              v47 +
              (float)((float)((unsigned int)*(unsigned __int8*)(v45 + 51) + 1) *
                      v44);
          v51 = *(float*)(v45 + 36);
          if (*a2 <= v50 &&
              (LOBYTE(v50) = *(_BYTE*)(v45 + 50),
               *a3 >= (float)(v47 + (float)((float)LODWORD(v50) * v44)))) {
            v52 = 1;
            if (a2[1] > v51) {
              goto LABEL_48;
            }
          }
          else {
            v52 = 0;
            if (a2[1] > v51) {
              goto LABEL_48;
            }
          }
          if (a3[1] < v46) {
          LABEL_48:
            v52 = 0;
          }
          if (a2[2] <=
              (float)(v48 + (float)((float)(unsigned int)(v49 + 1) * v44))) {
            v53 = v52 ^ 1;
            if (a3[2] < (float)(v48 + (float)((float)LODWORD(v42) * v44))) {
              v53 = 1;
            }
            if ((v53 & 1) == 0 && v16 < a6) {
              *(_DWORD*)(a4 + 4LL * v16++) = *v34;
            }
          }
          v26 += 2;
          v34 += 2;
          if (v33 == v26) {
            goto LABEL_22;
          }
        }
      }
      v26 = 0;
    LABEL_22:
      if ((v25 & 1) != 0) {
        v27 = *(_DWORD*)&v57[4 * v26];
        v28 = *(float*)(a1 + 52);
        v29 = *(
            _QWORD*)(*(_QWORD*)(a1 + 24) +
                     56LL * (v27 & (unsigned int)~(-1 << *(_DWORD*)(a1 + 36))) +
                     8);
        v30 = *(float*)(v29 + 20);
        v31 = v30 +
              (float)((float)((unsigned int)*(unsigned __int8*)(v29 + 51) + 1) *
                      v28);
        if (*a2 <= v31 &&
            (LOBYTE(v31) = *(_BYTE*)(v29 + 50),
             *a3 >= (float)(v30 + (float)((float)LODWORD(v31) * v28)))) {
          v32 = 1;
          if (a2[1] > *(float*)(v29 + 36)) {
            goto LABEL_57;
          }
        }
        else {
          v32 = 0;
          if (a2[1] > *(float*)(v29 + 36)) {
          LABEL_57:
            v32 = 0;
            goto LABEL_58;
          }
        }
        if (a3[1] < *(float*)(v29 + 24)) {
          goto LABEL_57;
        }
      LABEL_58:
        v54 = *(float*)(v29 + 28);
        v55 = v54 +
              (float)((float)((unsigned int)*(unsigned __int8*)(v29 + 53) + 1) *
                      v28);
        if (a2[2] <= v55) {
          LOBYTE(v55) = *(_BYTE*)(v29 + 52);
          v56 = v32 ^ 1;
          if (a3[2] < (float)(v54 + (float)((float)LODWORD(v55) * v28))) {
            v56 = 1;
          }
          if ((v56 & 1) == 0 && v16 < a6) {
            *(_DWORD*)(a4 + 4LL * v16++) = v27;
          }
        }
      }
    LABEL_7:
      v17 = v18++ == v14;
    } while (!v17);
    v17 = v9++ == v10;
    if (!v17) {
      continue;
    }
    break;
  }
  *a5 = v16;
  return 0x40000000;
}

float GameHr_2a3490(__int64 a1, int a2)
{
  float result;

  if (a2 == 127) {
    *(_DWORD*)(a1 + 8) = 1199570688;
    return 65535.0f;
  }
  else if (a2 == 126) {
    *(float*)(a1 + 8) = 24.0f;
    return 24.0f;
  }
  else {
    if (a2 > 49) {
      result = (float)(60.0f / (float)(126 - a2)) / 5.0f;
    }
    else {
      result = vcvts_n_f32_s32((2 * a2) | 1, 7u) / 5.0f;
    }
    *(float*)(a1 + 8) = result;
  }
  return result;
}

float GameHr_2a3520(__int64 a1, int a2)
{
  float result;

  if (a2 == 127) {
    *(_DWORD*)(a1 + 12) = 1199570688;
    return 65535.0f;
  }
  else if (a2 == 126) {
    *(float*)(a1 + 12) = 24.0f;
    return 24.0f;
  }
  else {
    if (a2 > 49) {
      result = (float)(60.0f / (float)(126 - a2)) / 5.0f;
    }
    else {
      result = vcvts_n_f32_s32((2 * a2) | 1, 7u) / 5.0f;
    }
    *(float*)(a1 + 12) = result;
  }
  return result;
}

float GameHr_2a3750(float a1)
{
  unsigned int v1;

  v1 = vcvts_n_u32_f32(a1, 0x20u);
  return *((float*)GameData_2135448 + 4 * HIBYTE(v1) + 1) +
         (float)(*((float*)GameData_2135448 + 4 * HIBYTE(v1) + 3) *
                 vcvts_n_f32_u32(v1 & 0xFFFFFF, 0x18u));
}

float GameHr_2a3780(float a1)
{
  unsigned int v1;

  v1 = vcvts_n_u32_f32(a1, 2u);
  return GameData_1b0fb14[v1] + (float)(GameData_1b0fb00[v1] * a1);
}

float GameHr_3328d0(__int64 a1, unsigned int a2, unsigned int a3, char a4,
                    float a5, float a6, float a7, float a8)
{
  __int64 v8;
  __int64 v15;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  long double v22;
  long double v23;

  v8 = 1296;
  if ((a2 & 1) != 0) {
    v8 = 1272;
    v15 = 1276;
  }
  else {
    v15 = 1300;
  }
  *(_DWORD*)(a1 + v8) = 0;
  v18 = 1280;
  *(_DWORD*)(a1 + v15) = 0;
  if ((a2 & 1) == 0) {
    v18 = 1304;
  }
  *(_DWORD*)(a1 + v18) = 0;
  if ((a2 & 1) != 0) {
    v19 = 1284;
  }
  else {
    v19 = 1308;
  }
  *(_DWORD*)(a1 + v19) = 0;
  v20 = 1288;
  if ((a2 & 1) == 0) {
    v20 = 1312;
  }
  *(_DWORD*)(a1 + v20) = 0;
  v21 = 1316;
  if ((a2 & 1) != 0) {
    v21 = 1292;
  }
  *(_DWORD*)(a1 + v21) = 0;
  GameRoutine_331740();
  GameRoutine_332280(a1, 0);
  *(__n128*)&v22 = GameRoutine_376280(a1, a2, a3, a5, a6, a8);
  *(float*)&v22 = a5;
  *(float*)&v23 = a6;
  return GameRoutine_331080(a1, a2, a3, a4, v22, v23, a7, a8);
}

void GameHr_3abec0(__int64 a1, __int64 a2, _QWORD* a3, float a4)
{
  __int64 v4;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  unsigned int i;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 (**v24)();
  __int64 v25;
  __int64 (***v26)();
  __int64 v27;
  __int64 v28;
  __int64 (***v29)();

  v4 = *(_QWORD*)(a1 + 336);
  v7 = a1 + 32;
  v8 = a1 + 360;
  v9 = *(_QWORD*)(a1 + 8);
  v10 = *(_QWORD**)(v9 + 800);
  v11 = v9;
  v28 = v4;
  v12 = a3;
  v13 = a2;
  v15 = v8;
  v16 = v7;
  GameRoutine_55b740(*v10);
  v17 = *(_DWORD*)(v16 + 32);
  if (v17 != 0) {
    for (i = 0; i < v17; i += v23) {
      while (1) {
        v19 = GameRoutine_2e9910(v10, 1632, 16);
        v20 = *(_QWORD*)(v16 + 24);
        *(_QWORD*)(v19 + 16) = 0;
        v21 = *(_QWORD*)(v16 + 40);
        v22 = *(_QWORD*)(v11 + 2408);
        *(_DWORD*)(v19 + 32) = 0;
        *(float*)(v19 + 84) = a4;
        *(_DWORD*)(v19 + 88) = 0;
        *(_QWORD*)(v19 + 40) = v20 + 8LL * i;
        *(_QWORD*)(v19 + 48) = v13 + 48LL * i;
        *(_QWORD*)(v19 + 56) = v21 + 16LL * i;
        *(_QWORD*)(v19 + 64) = v11;
        v23 = v17 - i >= 0x80 ? 128 : v17 - i;
        *(_DWORD*)(v19 + 80) = v23;
        *(_QWORD*)(v19 + 72) = v28;
        v29 = (__int64 (***)())v19;
        v24 = GameData_1f86a70;
        *(_QWORD*)v19 = GameData_1f86a70;
        *(_QWORD*)(v19 + 8) = v22;
        *(_DWORD*)(v19 + 32) = 1;
        *(_QWORD*)(v19 + 24) = v12;
        if (v12 != nullptr) {
          v25 = v19;
          (*(void (**)(_QWORD*))(*v12 + 32LL))(v12);
          v26 = v29;
          *(_QWORD*)(v25 + 16) = v12[2];
          v24 = *v26;
        }
        v24[5]();
        v27 = *(unsigned int*)(v15 + 8);
        if ((*(_DWORD*)(v15 + 12) & 0x7FFFFFFFu) <= (unsigned int)v27) {
          break;
        }
        *(_QWORD*)(*(_QWORD*)v15 + 8 * v27) = v29;
        *(_DWORD*)(v15 + 8) = v27 + 1;
        i += v23;
        if (i >= v17) {
          goto LABEL_11;
        }
      }
      GameRoutine_3aeb00(v15, &v29);
    }
  }
LABEL_11:
  GameRoutine_55b750(*v10);
}

__int64 GameHr_55b6e0(atomic_uint* a1, signed int a2)
{
  unsigned int v2;
  unsigned int v3;
  unsigned int v4;

  do {
    v2 = *(_DWORD*)a1;
    if ((signed __int32)*(_DWORD*)a1 <= a2) {
      v4 = a2;
    }
    else {
      v4 = *(_DWORD*)a1;
    }
    v3 = *(_DWORD*)a1;
    atomic_compare_exchange_strong(a1, &v3, v4);
  } while (v3 != v2);
  return *(unsigned int*)a1;
}

__int64 GameHr_561e20(__int64 result, __int64* a2, __int64 a3, _QWORD* a4,
                      __int64 a5, __int64 a6)
{

#pragma clang fp contract(off)
  __int64 v6;
  __int64 v7;
  unsigned int* v9;
  int v10;
  _BYTE* v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  int v16;
  _DWORD* v17;
  unsigned __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  int v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 i;
  _BYTE* v28;
  char v29;
  __int64 v30;
  __int64 (*v31)();
  __int64 (*v32)();
  __int64 v33;
  int v34;
  __int64 v35;
  __int64 v36;
  int v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v49;
  __int64 (*v50)(__int64, __int64, _QWORD);
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v68;
  unsigned int v69;
  __int16 v70;
  __int16 v71;
  unsigned int v72;
  unsigned int v73;
  unsigned int v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  unsigned int v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  int v83;
  int v84;
  float v85;
  int v86;
  __int64 v87;
  __int64 v88;
  _BYTE* v89;
  __int64 v90;
  __int64 v91;
  char* v92;
  __int64 v93;
  char v94;
  unsigned __int64 v95;
  __int64 v96;
  __int64 v97;
  unsigned __int64 v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  unsigned __int64 v105;
  __int64 v106;
  int v107;
  int v108;
  unsigned __int64 v109;
  int v110;
  int v111;
  __int64 v112;
  __int64 v113;
  _QWORD* v114;
  __int64 v115;
  unsigned __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  unsigned __int64 v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  _QWORD v218[8];
  struct {
    char gap848_[8];
    _QWORD v219[3];
    __int128 v220;
    __int64 v221;
    __int64 v222;
    __int64 v223;
    char gap920_[2288];
    __int16 v224;
  } v219_;
  _QWORD v225[7];

  if ((*(_DWORD*)a3 & (*(_DWORD*)a3 - 1)) != 0) {
    return result;
  }
  v225[5] = v6;
  v225[6] = v7;
  if (*(_QWORD*)(a3 + 8) == 0) {
    return result;
  }
  v9 = (unsigned int*)(a3 + 92696);
  v10 = *(_DWORD*)(a3 + 92696);
  if ((unsigned int)(v10 - 33) < 0xFFFFFFE0) {
    return result;
  }
  v11 = (_BYTE*)(result + 4096);
  v12 = result;
  v13 = 0;
  v14 = *(unsigned int*)(a3 + 92696);
  v15 = 92700;
  do {
    v16 = *(_DWORD*)(a3 + v15);
    if ((unsigned int)(v16 - 17) < 0xFFFFFFF0) {
      v13 = 0;
      goto LABEL_22;
    }
    v13 += v16;
    --v14;
    v15 += 4;
  } while (v14 != 0);
  v17 = (_DWORD*)(a3 + 92712);
  v18 = 0;
  v19 = 0;
  v20 = result + 6568;
  v21 = result + 6336;
  v22 = (_QWORD*)(result + 6336);
  do {
    while (v18 >= *v9) {
      *(_BYTE*)(v21 + v18 - 56) = 0;
      *(v22 - 3) = 0;
      v24 = v18 + 1;
      if (v18 + 1 < *v9) {
        goto LABEL_15;
      }
    LABEL_11:
      *(_BYTE*)(v21 + v18 - 55) = 0;
      *(v22 - 2) = 0;
      v25 = v24 + 1;
      if (v25 >= *v9) {
        goto LABEL_12;
      }
    LABEL_16:
      *(_BYTE*)(v21 + v18 - 54) = *(v17 - 1);
      *(v22 - 1) = v20 + (unsigned __int8)v19;
      v19 += *((unsigned __int8*)v17 - 4);
      v26 = v25 + 1;
      if (v26 >= *v9) {
        goto LABEL_17;
      }
    LABEL_8:
      *(_BYTE*)(v21 + v18 - 53) = *v17;
      *v22 = v20 + (unsigned __int8)v19;
      v22 += 4;
      v23 = *(unsigned __int8*)v17;
      v17 += 4;
      v19 += v23;
      v18 = v26 + 1;
      if (v26 == 31) {
        goto LABEL_18;
      }
    }
    *(_BYTE*)(v21 + v18 - 56) = *(v17 - 3);
    *(v22 - 3) = v20 + (unsigned __int8)v19;
    v19 += *((unsigned __int8*)v17 - 12);
    v24 = v18 + 1;
    if (v18 + 1 >= *v9) {
      goto LABEL_11;
    }
  LABEL_15:
    *(_BYTE*)(v21 + v18 - 55) = *(v17 - 2);
    *(v22 - 2) = v20 + (unsigned __int8)v19;
    v19 += *((unsigned __int8*)v17 - 8);
    v25 = v24 + 1;
    if (v25 < *v9) {
      goto LABEL_16;
    }
  LABEL_12:
    *(_BYTE*)(v21 + v18 - 54) = 0;
    *(v22 - 1) = 0;
    v26 = v25 + 1;
    if (v26 < *v9) {
      goto LABEL_8;
    }
  LABEL_17:
    *(_BYTE*)(v21 + v18 - 53) = 0;
    *v22 = 0;
    v22 += 4;
    v17 += 4;
    v18 = v26 + 1;
  } while (v26 != 31);
LABEL_18:
  for (i = 0; i != 512; i += 16) {
    v28 = (_BYTE*)(result + 6575 + i);
    *(v28 - 6) = i + 1;
    *(v28 - 7) = i;
    *(v28 - 5) = i + 2;
    *(v28 - 4) = i + 3;
    *(v28 - 3) = i + 4;
    *(v28 - 2) = i + 5;
    *(v28 - 1) = i + 6;
    *v28 = i + 7;
    v28[1] = i + 8;
    v28[2] = i + 9;
    v28[3] = i + 10;
    v28[4] = i + 11;
    v28[5] = i + 12;
    v28[6] = i + 13;
    v29 = i + 14;
    v28[7] = v29;
    v28[8] = v29 + 1;
  }
  v10 = *v9;
LABEL_22:
  *(_DWORD*)(result + 6276) = v10;
  *(_BYTE*)(result + 7121) = *(_BYTE*)(a3 + 94904);
  *(_DWORD*)(result + 7124) = *(_DWORD*)(a3 + 94908);
  v30 = *(_QWORD*)(a3 + 94912);
  if (v30 == 0) {
    v30 = GameData_212e288;
  }
  *(_QWORD*)(result + 7128) = v30;
  v31 = *(__int64 (**)(void))(a3 + 94920);
  if (v31 == nullptr) {
    v31 = Registration_5656b0_ptr[0];
  }
  *(_QWORD*)(result + 7136) = v31;
  v32 = *(__int64 (**)(void))(a3 + 94928);
  if (v32 == nullptr) {
    v32 = GameData_2135f60;
  }
  *(_QWORD*)(result + 7144) = v32;
  *(_QWORD*)(result + 24) = (*(__int64 (**)(_QWORD, __int64, _QWORD))(a3 + 8))(
      50 * v13, 4, *(_QWORD*)(a3 + 16));
  v33 = v13;
  *(_QWORD*)(v12 + 7152) = (*(__int64 (**)(__int64, __int64, _QWORD))(a3 + 8))(
      28LL * v13, 4, *(_QWORD*)(a3 + 16));
  *(_QWORD*)(v12 + 7160) = (*(__int64 (**)(__int64, __int64, _QWORD))(a3 + 8))(
      4LL * v13, 4, *(_QWORD*)(a3 + 16));
  *(_QWORD*)(v12 + 7168) = (*(__int64 (**)(_QWORD, __int64, _QWORD))(a3 + 8))(
      v13, 4, *(_QWORD*)(a3 + 16));
  *(_QWORD*)(v12 + 7176) = (*(__int64 (**)(_QWORD, __int64, _QWORD))(a3 + 8))(
      v13, 4, *(_QWORD*)(a3 + 16));
  *(_QWORD*)(v12 + 7184) = (*(__int64 (**)(__int64, __int64, _QWORD))(a3 + 8))(
      2LL * v13, 4, *(_QWORD*)(a3 + 16));
  *(_QWORD*)(v12 + 7192) = (*(__int64 (**)(_QWORD, __int64, _QWORD))(a3 + 8))(
      v13, 4, *(_QWORD*)(a3 + 16));
  *(_QWORD*)(v12 + 7200) = (*(__int64 (**)(_QWORD, __int64, _QWORD))(a3 + 8))(
      v13, 4, *(_QWORD*)(a3 + 16));
  *(_QWORD*)(v12 + 7208) = (*(__int64 (**)(__int64, __int64, _QWORD))(a3 + 8))(
      2LL * v13, 4, *(_QWORD*)(a3 + 16));
  *(_QWORD*)(v12 + 7216) = (*(__int64 (**)(__int64, __int64, _QWORD))(a3 + 8))(
      4LL * v13, 4, *(_QWORD*)(a3 + 16));
  *(_QWORD*)(v12 + 7224) = (*(__int64 (**)(__int64, __int64, _QWORD))(a3 + 8))(
      (__int64)v13 << 6, 4, *(_QWORD*)(a3 + 16));
  *(_QWORD*)(v12 + 7232) = (*(__int64 (**)(__int64, __int64, _QWORD))(a3 + 8))(
      (__int64)v13 << 6, 4, *(_QWORD*)(a3 + 16));
  *(_QWORD*)(v12 + 7240) = (*(__int64 (**)(__int64, __int64, _QWORD))(a3 + 8))(
      8LL * v13, 4, *(_QWORD*)(a3 + 16));
  v163 = a3 + 92696;
  *(_DWORD*)(v12 + 40) = *(_DWORD*)a3;
  v34 = *(_DWORD*)(a3 + 4);
  *(_DWORD*)(v12 + 6272) = 0;
  *(_DWORD*)(v12 + 7116) = 0;
  v11[3024] = 0;
  *(_DWORD*)(v12 + 44) = v34;
  *(_DWORD*)(v12 + 7080) = -1;
  *(_QWORD*)(v12 + 7100) = -1;
  *(_QWORD*)(v12 + 7108) = -1;
  *(_QWORD*)(v12 + 7084) = -1;
  *(_QWORD*)(v12 + 7092) = -1;
  v11[3152] = *(_BYTE*)(a3 + 94937);
  *(_QWORD*)(v12 + 8) = (*(__int64 (**)(__int64, __int64, _QWORD))(a3 + 8))(
      184, 4, *(_QWORD*)(a3 + 16));
  ((void (*)(void))nn_fontll_ScalableFontEngine_ScalableFontEngine)();
  if (v11[3025] != 0) {
    v35 = 184LL * *(unsigned int*)(v12 + 7124);
  }
  else {
    v35 = 184;
  }
  v36 = (*(__int64 (**)(__int64, __int64, _QWORD))(a3 + 8))(
      v35, 4, *(_QWORD*)(a3 + 16));
  v37 = (unsigned __int8)v11[3025];
  *(_QWORD*)(v12 + 16) = v36;
  if (v37 != 1 || *(_DWORD*)(v12 + 7124) != 0) {
    v38 = 1;
    v39 = 0;
    do {
      nn_fontll_ScalableFontEngine_ScalableFontEngine(*(_QWORD*)(v12 + 16) +
                                                      v39);
      v39 += 184;
    } while (v11[3025] == 1 && v38++ < *(unsigned int*)(v12 + 7124));
  }
  v41 = *(_QWORD*)(v12 + 8);
  v42 = (*(__int64 (**)(_QWORD, __int64, _QWORD))(a3 + 8))(
      *(_QWORD*)(a3 + 92832), 4, *(_QWORD*)(a3 + 16));
  nn_fontll_ScalableFontEngine_Initialize(v41, v42,
                                          *(unsigned int*)(a3 + 92832));
  nn_fontll_ScalableFontEngine_GetError(*(_QWORD*)(v12 + 8));
  if (v11[3025] != 1 || *(_DWORD*)(v12 + 7124) != 0) {
    v44 = 1;
    v45 = 0;
    do {
      v49 = *(_QWORD*)(v12 + 16);
      v50 = *(__int64 (**)(__int64, __int64, _QWORD))(a3 + 8);
      v51 = *(_QWORD*)(a3 + 92840);
      if (*(_BYTE*)(a3 + 92848) == 1) {
        v52 = v50(v51, 4, *(_QWORD*)(a3 + 16));
        v47 = *(unsigned int*)(a3 + 92840);
        v46 = v52;
      }
      else {
        v46 = v50(v51 * v33, 4, *(_QWORD*)(a3 + 16));
        v47 = (unsigned int)(v33 * *(_DWORD*)(a3 + 92840));
      }
      nn_fontll_ScalableFontEngine_Initialize(v49 + v45, v46, v47);
      nn_fontll_ScalableFontEngine_GetError(*(_QWORD*)(v12 + 16) + v45);
      v45 += 184;
    } while (v11[3025] == 1 && v44++ < *(unsigned int*)(v12 + 7124));
  }
  v53 = *(unsigned int*)(v12 + 6276);
  v164 = a3;
  if ((_DWORD)v53 != 0) {
    v54 = 0;
    LODWORD(v55) = 0;
    v215 = v12 + 6280;
    v162 = a3 + 14872;
    v161 = a3 + 4120;
    v176 = a3 + 8216;
    v160 = a3 + 10264;
    v159 = a3 + 17432;
    v175 = a3 + 17944;
    v158 = a3 + 18968;
    v157 = a3 + 19480;
    v174 = a3 + 19992;
    v173 = a3 + 25112;
    v172 = a3 + 27160;
    v171 = a3 + 59928;
    v156 = a3 + 23064;
    v155 = a3 + 24088;
    v169 = a3 + 10776;
    v170 = a3 + 92856;
    v168 = a3 + 12824;
    v167 = a3 + 21016;
    v154 = a3 + 16920;
    v153 = a3 + 27164;
    v152 = a3 + 59932;
    v151 = a3 + 27168;
    v150 = a3 + 59936;
    v149 = a3 + 27172;
    v148 = a3 + 59940;
    v147 = a3 + 27176;
    v146 = a3 + 59944;
    v145 = a3 + 27180;
    v144 = a3 + 59948;
    v143 = a3 + 27184;
    v142 = a3 + 59952;
    v141 = a3 + 27188;
    v140 = a3 + 59956;
    v139 = a3 + 27192;
    v138 = a3 + 59960;
    v137 = a3 + 27196;
    v136 = a3 + 59964;
    v135 = a3 + 27200;
    v134 = a3 + 59968;
    v133 = a3 + 27204;
    v132 = a3 + 59972;
    v131 = a3 + 27208;
    v130 = a3 + 59976;
    v129 = a3 + 27212;
    v128 = a3 + 59980;
    v127 = a3 + 27216;
    v126 = a3 + 59984;
    v125 = a3 + 27220;
    v124 = a3 + 59988;
    v123 = a3 + 24;
    do {
      if (*(_BYTE*)(v215 + v54) != 0) {
        v55 = (int)v55;
        v56 = 0;
        v214 = v54;
        v213 = v54 << 10;
        v212 = v153 + (v54 << 10);
        v211 = v152 + (v54 << 10);
        v210 = v151 + (v54 << 10);
        v209 = v150 + (v54 << 10);
        v208 = v149 + (v54 << 10);
        v207 = v148 + (v54 << 10);
        v206 = v147 + (v54 << 10);
        v205 = v146 + (v54 << 10);
        v204 = v145 + (v54 << 10);
        v203 = v144 + (v54 << 10);
        v202 = v143 + (v54 << 10);
        v201 = v142 + (v54 << 10);
        v200 = v141 + (v54 << 10);
        v199 = v140 + (v54 << 10);
        v198 = v139 + (v54 << 10);
        v197 = v138 + (v54 << 10);
        v196 = v137 + (v54 << 10);
        v195 = v136 + (v54 << 10);
        v194 = v135 + (v54 << 10);
        v193 = v134 + (v54 << 10);
        v192 = v133 + (v54 << 10);
        v191 = v132 + (v54 << 10);
        v190 = v131 + (v54 << 10);
        v189 = v130 + (v54 << 10);
        v188 = v129 + (v54 << 10);
        v187 = v128 + (v54 << 10);
        v186 = v127 + (v54 << 10);
        v185 = v126 + (v54 << 10);
        v184 = v125 + (v54 << 10);
        v183 = v124 + (v54 << 10);
        v57 = v162 + (v54 << 6);
        v182 = v57;
        v180 = v160 + 16 * v54;
        v181 = v123 + (v54 << 7);
        v217 = v159 + 16 * v54;
        v216 = v158 + 16 * v54;
        v178 = v156 + 32 * v54;
        v179 = v157 + 16 * v54;
        v177 = v155 + 32 * v54;
        v165 = v154 + 16 * v54;
        v166 = v161 + (v54 << 7);
        do {
          v59 = *(_QWORD*)(v181 + 8 * v56);
          if ((*(_DWORD*)(v57 + 4 * v56) & 0xFFFFFFFE) == 2) {
            v59 = nn_fontll_ScalableFontEngineHelper_Decode(
                *(_QWORD*)(v181 + 8 * v56), *(_QWORD*)(v166 + 8 * v56), 0, 0);
          }
          v60 = v54 << 6;
          v61 = 2 * v55;
          *(_DWORD*)(*(_QWORD*)(v12 + 7160) + 4 * v55) =
              vcvts_n_s32_f32(*(float*)(v176 + (v54 << 6) + 4 * v56), 0x10u);
          *(_BYTE*)(*(_QWORD*)(v12 + 7168) + v55) = *(_BYTE*)(v180 + v56);
          *(_BYTE*)(*(_QWORD*)(v12 + 7176) + v55) = *(_BYTE*)(v217 + v56);
          *(_WORD*)(*(_QWORD*)(v12 + 7184) + v61) =
              *(_WORD*)(v175 + 32 * v54 + 2 * v56);
          *(_BYTE*)(*(_QWORD*)(v12 + 7192) + v55) = *(_BYTE*)(v216 + v56);
          *(_BYTE*)(*(_QWORD*)(v12 + 7200) + v55) = *(_BYTE*)(v179 + v56);
          *(_WORD*)(*(_QWORD*)(v12 + 7208) + v61) =
              *(_WORD*)(v174 + 32 * v54 + 2 * v56);
          *(_DWORD*)(*(_QWORD*)(v12 + 7216) + 4 * v55) =
              *(_DWORD*)(v173 + (v54 << 6) + 4 * v56);
          v62 = v55 << 6;
          *(_DWORD*)(*(_QWORD*)(v12 + 7224) + v62) =
              *(_DWORD*)(v172 + v213 + (v56 << 6));
          *(_DWORD*)(*(_QWORD*)(v12 + 7232) + v62) =
              *(_DWORD*)(v171 + v213 + (v56 << 6));
          *(_DWORD*)(*(_QWORD*)(v12 + 7224) + (v55 << 6) + 4) =
              *(_DWORD*)(v212 + (v56 << 6));
          *(_DWORD*)(*(_QWORD*)(v12 + 7232) + (v55 << 6) + 4) =
              *(_DWORD*)(v211 + (v56 << 6));
          *(_DWORD*)(*(_QWORD*)(v12 + 7224) + (v55 << 6) + 8) =
              *(_DWORD*)(v210 + (v56 << 6));
          *(_DWORD*)(*(_QWORD*)(v12 + 7232) + (v55 << 6) + 8) =
              *(_DWORD*)(v209 + (v56 << 6));
          *(_DWORD*)(*(_QWORD*)(v12 + 7224) + (v55 << 6) + 12) =
              *(_DWORD*)(v208 + (v56 << 6));
          *(_DWORD*)(*(_QWORD*)(v12 + 7232) + (v55 << 6) + 12) =
              *(_DWORD*)(v207 + (v56 << 6));
          *(_DWORD*)(*(_QWORD*)(v12 + 7224) + (v55 << 6) + 16) =
              *(_DWORD*)(v206 + (v56 << 6));
          *(_DWORD*)(*(_QWORD*)(v12 + 7232) + (v55 << 6) + 16) =
              *(_DWORD*)(v205 + (v56 << 6));
          *(_DWORD*)(*(_QWORD*)(v12 + 7224) + (v55 << 6) + 20) =
              *(_DWORD*)(v204 + (v56 << 6));
          *(_DWORD*)(*(_QWORD*)(v12 + 7232) + (v55 << 6) + 20) =
              *(_DWORD*)(v203 + (v56 << 6));
          *(_DWORD*)(*(_QWORD*)(v12 + 7224) + (v55 << 6) + 24) =
              *(_DWORD*)(v202 + (v56 << 6));
          *(_DWORD*)(*(_QWORD*)(v12 + 7232) + (v55 << 6) + 24) =
              *(_DWORD*)(v201 + (v56 << 6));
          *(_DWORD*)(*(_QWORD*)(v12 + 7224) + (v55 << 6) + 28) =
              *(_DWORD*)(v200 + (v56 << 6));
          *(_DWORD*)(*(_QWORD*)(v12 + 7232) + (v55 << 6) + 28) =
              *(_DWORD*)(v199 + (v56 << 6));
          *(_DWORD*)(*(_QWORD*)(v12 + 7224) + (v55 << 6) + 32) =
              *(_DWORD*)(v198 + (v56 << 6));
          *(_DWORD*)(*(_QWORD*)(v12 + 7232) + (v55 << 6) + 32) =
              *(_DWORD*)(v197 + (v56 << 6));
          *(_DWORD*)(*(_QWORD*)(v12 + 7224) + (v55 << 6) + 36) =
              *(_DWORD*)(v196 + (v56 << 6));
          *(_DWORD*)(*(_QWORD*)(v12 + 7232) + (v55 << 6) + 36) =
              *(_DWORD*)(v195 + (v56 << 6));
          *(_DWORD*)(*(_QWORD*)(v12 + 7224) + (v55 << 6) + 40) =
              *(_DWORD*)(v194 + (v56 << 6));
          *(_DWORD*)(*(_QWORD*)(v12 + 7232) + (v55 << 6) + 40) =
              *(_DWORD*)(v193 + (v56 << 6));
          *(_DWORD*)(*(_QWORD*)(v12 + 7224) + (v55 << 6) + 44) =
              *(_DWORD*)(v192 + (v56 << 6));
          *(_DWORD*)(*(_QWORD*)(v12 + 7232) + (v55 << 6) + 44) =
              *(_DWORD*)(v191 + (v56 << 6));
          *(_DWORD*)(*(_QWORD*)(v12 + 7224) + (v55 << 6) + 48) =
              *(_DWORD*)(v190 + (v56 << 6));
          *(_DWORD*)(*(_QWORD*)(v12 + 7232) + (v55 << 6) + 48) =
              *(_DWORD*)(v189 + (v56 << 6));
          *(_DWORD*)(*(_QWORD*)(v12 + 7224) + (v55 << 6) + 52) =
              *(_DWORD*)(v188 + (v56 << 6));
          *(_DWORD*)(*(_QWORD*)(v12 + 7232) + (v55 << 6) + 52) =
              *(_DWORD*)(v187 + (v56 << 6));
          *(_DWORD*)(*(_QWORD*)(v12 + 7224) + (v55 << 6) + 56) =
              *(_DWORD*)(v186 + (v56 << 6));
          *(_DWORD*)(*(_QWORD*)(v12 + 7232) + (v55 << 6) + 56) =
              *(_DWORD*)(v185 + (v56 << 6));
          *(_DWORD*)(*(_QWORD*)(v12 + 7224) + (v55 << 6) + 60) =
              *(_DWORD*)(v184 + (v56 << 6));
          *(_DWORD*)(*(_QWORD*)(v12 + 7232) + (v55 << 6) + 60) =
              *(_DWORD*)(v183 + (v56 << 6));
          v63 = (unsigned int)(50 * v55);
          v64 = v170 + (v54 << 6);
          nn_fontll_ScalableFontEngine_LoadFont(
              *(_QWORD*)(v12 + 8), *(_QWORD*)(v12 + 24) + v63, v59,
              *(unsigned int*)(v64 + 4 * v56), 50);
          nn_fontll_ScalableFontEngine_GetError(*(_QWORD*)(v12 + 8));
          if (v11[3025] != 1 || *(_DWORD*)(v12 + 7124) != 0) {
            v65 = 1;
            v66 = 0;
            do {
              nn_fontll_ScalableFontEngine_LoadFont(
                  *(_QWORD*)(v12 + 16) + v66, *(_QWORD*)(v12 + 24) + v63, v59,
                  *(unsigned int*)(v64 + 4 * v56), 50);
              nn_fontll_ScalableFontEngine_GetError(*(_QWORD*)(v12 + 16) + v66);
              v66 += 184;
            } while (v11[3025] == 1 && v65++ < *(unsigned int*)(v12 + 7124));
          }
          if (*(_DWORD*)(v12 + 7080) != (_DWORD)v55) {
            nn_fontll_ScalableFontEngine_SetFont(*(_QWORD*)(v12 + 8),
                                                 *(_QWORD*)(v12 + 24) + v63);
            nn_fontll_ScalableFontEngine_GetError(*(_QWORD*)(v12 + 8));
            nn_fontll_ScalableFontEngine_SetBoldWeight(
                *(_QWORD*)(v12 + 8), *(unsigned int*)(*(_QWORD*)(v12 + 7160) +
                                                      4LL * (unsigned int)v55));
            nn_fontll_ScalableFontEngine_GetError(*(_QWORD*)(v12 + 8));
            v68 = *(_QWORD*)(v12 + 8);
            if (*(_BYTE*)(*(_QWORD*)(v12 + 7168) + (unsigned int)v55) != 0) {
              nn_fontll_ScalableFontEngine_SetOutlineWidth(v68);
              v68 = *(_QWORD*)(v12 + 8);
            }
            nn_fontll_ScalableFontEngine_SetFlags(v68);
            nn_fontll_ScalableFontEngine_GetError(*(_QWORD*)(v12 + 8));
            *(_DWORD*)(v12 + 7080) = v55;
          }
          memset((__int64)v219_.v219, 0, 0x93Cu);
          nn_fontll_ScalableFontEngine_GetFontMetrics(*(_QWORD*)(v12 + 8),
                                                      v219_.v219);
          nn_fontll_ScalableFontEngine_GetError(*(_QWORD*)(v12 + 8));
          v54 = v214;
          v70 = *(_WORD*)(v178 + 2 * v56);
          if (v70 != 0) {
            WORD3(v219_.v220) = *(_WORD*)(v178 + 2 * v56);
            WORD2(v219_.v219[0]) = v70;
          }
          v71 = *(_WORD*)(v177 + 2 * v56);
          if (v71 != 0) {
            HIWORD(v219_.v219[0]) = *(_WORD*)(v177 + 2 * v56);
            WORD1(v219_.v220) = -v71;
          }
          LOWORD(v69) = v219_.v224;
          *(float*)&v72 = (float)v69;
          *(float*)(*(_QWORD*)(v12 + 7152) + 28 * v55 + 8) =
              (float)SWORD3(v219_.v220) / *(float*)&v72;
          LOWORD(v72) = v219_.v224;
          *(float*)&v73 = (float)v72;
          *(float*)(*(_QWORD*)(v12 + 7152) + 28 * v55 + 12) =
              (float)(SWORD3(v219_.v220) - SWORD1(v219_.v220)) / *(float*)&v73;
          LOWORD(v73) = v219_.v224;
          *(float*)&v74 = (float)v73;
          *(float*)(*(_QWORD*)(v12 + 7152) + 28 * v55) =
              (float)SWORD2(v219_.v219[0]) / *(float*)&v74;
          LOWORD(v74) = v219_.v224;
          *(float*)(*(_QWORD*)(v12 + 7152) + 28 * v55 + 4) =
              (float)(SHIWORD(v219_.v219[0]) + SWORD2(v219_.v219[0])) /
              (float)v74;
          *(_DWORD*)(*(_QWORD*)(v12 + 7152) + 28 * v55 + 16) =
              *(_DWORD*)(v169 + v60 + 4 * v56);
          *(_DWORD*)(*(_QWORD*)(v12 + 7152) + 28 * v55 + 20) =
              *(_DWORD*)(v168 + v60 + 4 * v56);
          v75 = v167 + v60;
          v57 = v182;
          *(_DWORD*)(*(_QWORD*)(v12 + 7152) + 28 * v55 + 24) =
              *(_DWORD*)(v75 + 4 * v56);
          if ((*(_DWORD*)(v182 + 4 * v56) | 2) != 3 ||
              (*(_BYTE*)(v217 + v56) & 1) != 0 ||
              (*(_BYTE*)(v216 + v56) & 1) != 0) {
            v58 = 0;
          }
          else {
            v58 = nn_fontll_ScalableFontEngine_InitializeOtfKerningTable(
                *(_QWORD*)(v12 + 8), *(_QWORD*)(v164 + 8),
                *(_QWORD*)(v164 + 16), *(unsigned __int8*)(v165 + v56));
          }
          ++v56;
          *(_QWORD*)(*(_QWORD*)(v12 + 7240) + 8 * v55++) = v58;
        } while (v56 < *(unsigned __int8*)(v215 + v214));
        v53 = *(unsigned int*)(v12 + 6276);
      }
      ++v54;
    } while (v54 < v53);
    if (v53 != 0) {
      v76 = 0;
      v77 = 0;
      v78 = v12 + 6280;
      while (1) {
        while (1) {
          v79 = *(unsigned __int8*)(v78 + v76);
          if (*(_BYTE*)(v78 + v76) != 0) {
            break;
          }
          if (++v76 >= v53) {
            goto LABEL_123;
          }
        }
        v80 = *(_QWORD*)(v12 + 7200);
        v81 = *(_QWORD*)(v12 + 7152);
        if (v79 >= 8) {
          break;
        }
        v82 = 0;
        v83 = 0;
        v84 = 0;
        v85 = 0x0.0p+0f;
        v86 = 0;
        v87 = v79 & 7;
        if (v87 != 0) {
          goto LABEL_115;
        }
      LABEL_120:
        v95 = 0;
        v96 = 28 * v77;
        do {
          ++v95;
          *(_DWORD*)(*(_QWORD*)(v12 + 7152) + v96 + 8) = v86;
          *(float*)(*(_QWORD*)(v12 + 7152) + v96 + 12) = v85;
          *(_DWORD*)(*(_QWORD*)(v12 + 7152) + v96) = v84;
          v97 = *(_QWORD*)(v12 + 7152) + v96;
          v96 += 28;
          *(_DWORD*)(v97 + 4) = v83;
          v98 = *(unsigned __int8*)(v78 + v76);
        } while (v95 < v98);
        v53 = *(unsigned int*)(v12 + 6276);
        v77 += v98;
        if (++v76 >= v53) {
          goto LABEL_123;
        }
      }
      v83 = 0;
      v84 = 0;
      v85 = 0x0.0p+0f;
      v88 = 0;
      v86 = 0;
      v89 = (_BYTE*)(v80 + v77 + 3);
      v90 = v81 + 28 * v77 + 112;
      do {
        if ((*(v89 - 3) & 1) == 0 && v85 < *(float*)(v90 - 100)) {
          v83 = *(_DWORD*)(v90 - 108);
          v86 = *(_DWORD*)(v90 - 104);
          v84 = *(_DWORD*)(v90 - 112);
          v85 = *(float*)(v90 - 100);
        }
        if ((*(v89 - 2) & 1) == 0 && v85 < *(float*)(v90 - 72)) {
          v83 = *(_DWORD*)(v90 - 80);
          v86 = *(_DWORD*)(v90 - 76);
          v84 = *(_DWORD*)(v90 - 84);
          v85 = *(float*)(v90 - 72);
        }
        if ((*(v89 - 1) & 1) == 0 && v85 < *(float*)(v90 - 44)) {
          v83 = *(_DWORD*)(v90 - 52);
          v86 = *(_DWORD*)(v90 - 48);
          v84 = *(_DWORD*)(v90 - 56);
          v85 = *(float*)(v90 - 44);
        }
        if ((*v89 & 1) == 0 && v85 < *(float*)(v90 - 16)) {
          v83 = *(_DWORD*)(v90 - 24);
          v86 = *(_DWORD*)(v90 - 20);
          v84 = *(_DWORD*)(v90 - 28);
          v85 = *(float*)(v90 - 16);
        }
        if ((v89[1] & 1) == 0 && v85 < *(float*)(v90 + 12)) {
          v83 = *(_DWORD*)(v90 + 4);
          v86 = *(_DWORD*)(v90 + 8);
          v84 = *(_DWORD*)v90;
          v85 = *(float*)(v90 + 12);
        }
        if ((v89[2] & 1) == 0 && v85 < *(float*)(v90 + 40)) {
          v83 = *(_DWORD*)(v90 + 32);
          v86 = *(_DWORD*)(v90 + 36);
          v84 = *(_DWORD*)(v90 + 28);
          v85 = *(float*)(v90 + 40);
        }
        if ((v89[3] & 1) == 0 && v85 < *(float*)(v90 + 68)) {
          v83 = *(_DWORD*)(v90 + 60);
          v86 = *(_DWORD*)(v90 + 64);
          v84 = *(_DWORD*)(v90 + 56);
          v85 = *(float*)(v90 + 68);
        }
        if ((v89[4] & 1) == 0 && v85 < *(float*)(v90 + 96)) {
          v83 = *(_DWORD*)(v90 + 88);
          v86 = *(_DWORD*)(v90 + 92);
          v84 = *(_DWORD*)(v90 + 84);
          v85 = *(float*)(v90 + 96);
        }
        v88 -= 8;
        v89 += 8;
        v90 += 224;
      } while (-(__int64)((unsigned __int8)v79 & 0xF8) != v88);
      v82 = -v88;
      v87 = v79 & 7;
      if (v87 == 0) {
        goto LABEL_120;
      }
    LABEL_115:
      v91 = v82 + v77;
      v92 = (char*)(v80 + v91);
      v93 = v81 + 28 * v91 + 8;
      do {
        v94 = *v92++;
        if ((v94 & 1) == 0 && v85 < *(float*)(v93 + 4)) {
          v83 = *(_DWORD*)(v93 - 4);
          v86 = *(_DWORD*)v93;
          v84 = *(_DWORD*)(v93 - 8);
          v85 = *(float*)(v93 + 4);
        }
        --v87;
        v93 += 28;
      } while (v87 != 0);
      goto LABEL_120;
    }
  }
LABEL_123:
  v99 = *(_DWORD*)(v12 + 40);
  v100 = *(_DWORD*)(v12 + 44);
  GameRoutine_55d690_alt1(v12 + 7848, *(_QWORD*)(v12 + 32), 8, v99, v100, 1, 1);
  v101 = *(_DWORD*)(v12 + 40);
  v102 = *(_DWORD*)(v12 + 44);
  __builtin_memset(v218, 0, sizeof(v218));
  GameRoutine_5fc420_alt1((__int64)v218);
  v103 = *(_DWORD*)(v12 + 40);
  v104 = *(_DWORD*)(v12 + 44);
  HIDWORD(v218[2]) = v101;
  LODWORD(v218[3]) = v102;
  *(_QWORD*)((char*)&v218[3] + 4) = 0x100000001LL;
  BYTE1(v218[0]) = 2;
  WORD1(v218[0]) = 1;
  HIWORD(v218[0]) = 1;
  v219_.v223 = 0;
  v219_.v222 = 0;
  v219_.v221 = 0;
  v219_.v220 = (__typeof__(v219_.v220)){0};
  __builtin_memset(v219_.v219, 0, sizeof(v219_.v219));
  *(_QWORD*)((char*)&v218[1] + 4) = 0x2000000201LL;
  GameRoutine_5fc420_alt1((__int64)v219_.v219);
  HIDWORD(v219_.v219[2]) = v103;
  LODWORD(v219_.v220) = v104;
  BYTE1(v219_.v219[0]) = 2;
  WORD1(v219_.v219[0]) = 1;
  HIWORD(v219_.v219[0]) = 1;
  __builtin_memset(v225, 0, 32);
  *(_QWORD*)((char*)&v219_.v220 + 4) = 0x100000001LL;
  *(_QWORD*)((char*)&v219_.v219[1] + 4) = 0x2000000201LL;
  GameRoutine_5fc190_alt1((__int64)v225);
  LODWORD(v225[0]) = 34;
  v105 = Registration_6061a0(a2, (__int64)v219_.v219);
  v106 = GameRoutine_5fe2d0(a2, v225);
  v107 = *(_DWORD*)(v12 + 40);
  v108 = *(_DWORD*)(v12 + 44);
  v109 = v106;
  *(_QWORD*)&v219_.v220 = 0;
  __builtin_memset(v219_.v219, 0, sizeof(v219_.v219));
  GameRoutine_5fc190_alt1((__int64)v219_.v219);
  LODWORD(v219_.v219[0]) = 34;
  v110 = GameRoutine_5fe2e0(a2, v219_.v219);
  v111 = (v110 + v108 * v107 - 1) & -v110;
  if (a4 != nullptr) {
    v112 = a5;
    v113 = GameRoutine_5fe3f0_alt1(a4) + a5;
    *(_QWORD*)(v12 + 32) = v113;
    memset(v113, 0, v111);
    GameRoutine_5fe410(a4);
    v114 = a4;
    GameRoutine_6063a0_alt1(v12 + 7256, a2, (__int64)v218, a4, a5, a6);
    v115 = v164;
  }
  else {
    if (v105 <= v109) {
      v116 = v109;
    }
    else {
      v116 = v105;
    }
    v115 = v164;
    v117 = (*(__int64 (**)(_QWORD, unsigned __int64, _QWORD))(v164 + 8))(
        v111, v116, *(_QWORD*)(v164 + 16));
    *(_QWORD*)(v12 + 32) = v117;
    memset(v117, 0, v111);
    *(_QWORD*)&v219_.v220 = 0;
    __builtin_memset(v219_.v219, 0, sizeof(v219_.v219));
    GameRoutine_5fc190_alt1((__int64)v219_.v219);
    v118 = *(_QWORD*)(v12 + 32);
    LODWORD(v219_.v219[0]) = 34;
    v219_.v219[1] = v118;
    HIDWORD(v219_.v219[0]) = v111;
    v219_.v219[2] = v111;
    GameRoutine_5fe310_alt1(v12 + 7544, a2, (__int64)v219_.v219);
    v114 = (_QWORD*)(v12 + 7544);
    GameRoutine_6063a0_alt1(v12 + 7256, a2, (__int64)v218,
                            (_QWORD*)(v12 + 7544), 0,
                            (unsigned int)(v100 * v99));
    v112 = 0;
  }
  *(_QWORD*)(v12 + 7832) = v114;
  *(_QWORD*)(v12 + 7840) = v112;
  v219_.v223 = 0;
  v219_.v222 = 0;
  v219_.v221 = 0;
  v219_.v220 = (__typeof__(v219_.v220)){0};
  __builtin_memset(v219_.v219, 0, sizeof(v219_.v219));
  GameRoutine_5fc450_alt1((__int64)v219_.v219);
  *(_QWORD*)((char*)v219_.v219 + 4) = 0x201010100000201LL;
  LOBYTE(v219_.v219[0]) = 1;
  v219_.v222 = v12 + 7256;
  GameRoutine_606510_alt1(v12 + 7472, (__int64)a2,
                          (unsigned __int8*)v219_.v219);
  result = GameRoutine_565760_alt1(
      v12 + 48, *(__int64 (**)(__int64, __int64, __int64, __int64))(v115 + 8),
      *(_QWORD*)(v115 + 16), *(unsigned int*)(v163 + 156));
  if (*(_BYTE*)(v163 + 2240) == 1) {
    return nn_fontll_ScalableFontEngine_SetAutoHint(*(_QWORD*)(v12 + 8), 1);
  }
  return result;
}

#pragma GCC visibility pop
