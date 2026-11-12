#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern char GameData_1a9f09e;
extern __int64 (*GameData_1f52148[])();
extern __int64 (*GameData_1f5ad78[])();
extern __int64 (*GameData_1f5c290[])();
extern __int64 (*GameData_1f5c3e0[])();
extern __int64 (*GameData_1f5c628[])();
extern __int64 (*GameData_1f5c648[])();
extern __int64 (*GameData_1f65498[])();
extern __int64 (*GameData_1f65e80[])();
extern __int64 (*GameData_1f66420[])();
extern __int64 (*GameData_1f66450[])();
extern __int64 (*GameData_1f66480[])();
extern __int64 (*GameData_1f664b0[])();
extern __int64 (*GameData_1f664e0[])();
extern __int64 (*GameData_1f66510[])();
extern __int64 (*GameData_1f66540[])();
extern __int64 (*GameData_1f66570[])();
extern __int64 (*GameData_1f665a0[])();
extern __int64 (*GameData_1f665d0[])();
extern __int64 (*GameData_1f66600[])();
extern __int64 (*GameData_1f66630[])();
extern _UNKNOWN* GameData_212c028;
extern __int64* GameData_212d480[2];
extern __int64 GameData_2134050[22];
extern __int64* GameData_2134248[3];
extern __int16* GameData_21344c0[16];
extern __int64* GameData_2134668[3];
extern __int64* GameData_2134670[2];
extern __int64* GameData_2134678;
extern __int64* GameData_21346c0[3];
extern __int64 GameData_21347d0;
extern __int64* GameData_2134820[3];
extern __int64* GameData_2134828[2];
extern __int64* GameData_2134868[23];
extern __int64* GameData_2134878[21];
extern __int64* GameData_2134888[19];
extern __int64* GameData_2134890[18];
extern _BYTE* GameData_2134920;
extern __int64 GameData_2198f88;
extern __int64 GameData_2198f90;
extern __int64 GameData_2199028;
extern __int64 GameData_2199048;
__int64 GameRoutine_1059c0(__int64, __int64);
__int64 GameRoutine_109540(__int64*, __int64*, __int64*);
__int64 GameRoutine_109690(__int64*, __int64*, __int64*, __int64*);
__int64 GameRoutine_109790(__int64*, __int64*, __int64*, __int64*, __int64*);
__int64 GameRoutine_10d860(_QWORD, _QWORD);
__int64 GameRoutine_112080(_QWORD, long double);
__int64 GameRoutine_1120d0(_QWORD);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_1121e0(_QWORD, _QWORD);
__int64 GameRoutine_112290(_QWORD, float);
__int64 GameRoutine_112320(_QWORD);
__int64 GameRoutine_11ed40(__int64, int*);
__int64 GameRoutine_126150(void);
__int64 GameRoutine_1261b0(__int64, __int64, __int64, __int64, __int64,
                           __int64);
__int64 GameRoutine_126230(_QWORD);
__int64 GameRoutine_126c90(_QWORD);
__int64 GameRoutine_126cb0(_QWORD);
__int64 GameRoutine_126cc0(_QWORD);
__int64 GameRoutine_126f60(__int64, __int64);
__int64 GameRoutine_128050(__int64);
__attribute__((swiftcall)) void GameRoutine_1305a0(PSEUDO_X8, _QWORD);
__int64 GameRoutine_130d20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_130f60(_QWORD, _QWORD);
__int64 GameRoutine_13dd70(__int64 result, __int64);
__int64 GameRoutine_13ee20(_QWORD);
__int64 GameRoutine_1434a0(__int64, __int64, __int64, char, int, __int64);
__int64 GameRoutine_143700(__int64, __int64);
void GameRoutine_143d90(__int64, __int64);
__int64 GameRoutine_1449c0(void);
__int64 GameRoutine_146980(_QWORD);
__int64 GameRoutine_14b260(_QWORD, _QWORD);
__int64 GameRoutine_14b380(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
void* GameRoutine_14e360();
__int64 GameRoutine_159820(_QWORD);
__int64 GameRoutine_15a000(void);
__int64 GameRoutine_164030(_QWORD);
__int64 GameRoutine_164d90(_QWORD, _QWORD);
__int64 GameRoutine_1679b0(_QWORD);
__int64 GameRoutine_167b80(void);
__int64 GameRoutine_167d30(void);
__int64 GameRoutine_167eb0(_QWORD);
__int64 GameRoutine_167f00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_168190(void);
__int64 GameRoutine_168340(void);
__int64 GameRoutine_1684b0(_QWORD);
__int64 GameRoutine_168500(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1687a0(void);
__int64 GameRoutine_168950(void);
__int64 GameRoutine_168ad0(_QWORD, _QWORD);
__int64 GameRoutine_168b30(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_168dd0(void);
__int64 GameRoutine_168f80(void);
__int64 GameRoutine_1690f0(_QWORD, _QWORD);
__int64 GameRoutine_169150(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_179a60(void);
__int64 GameRoutine_179c10(void);
__int64 GameRoutine_17a0d0(_QWORD, _QWORD);
__int64 GameRoutine_17a4f0(_QWORD, _QWORD);
__int64 GameRoutine_17f40(_QWORD);
__int64 GameRoutine_190020(_QWORD, _QWORD);
__int64 GameRoutine_190200(_QWORD, _QWORD);
__int64 GameRoutine_19e10();
long double GameRoutine_19ee0(_QWORD);
__int64 GameRoutine_19fe0(_QWORD, _QWORD);
__int64 GameRoutine_1a09b70(_QWORD);
__int64 GameRoutine_1a09b80(_QWORD);
__int64 GameRoutine_1a09cf0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09d30(_QWORD, _QWORD);
__int64 GameRoutine_1a09f60(_QWORD);
__int64 GameRoutine_1a0a040(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a480(_QWORD);
__int64 GameRoutine_1a0a590(_QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0bce0(void);
__int64 GameRoutine_1a2c0(_QWORD);
__int64 GameRoutine_1a7a0(_QWORD, _QWORD);
__int64 GameRoutine_1c6e0(void);
unsigned __int64 GameRoutine_2640(_QWORD*, __int64, unsigned __int64);
__int64 GameRoutine_27bea0(_QWORD);
__int64 GameRoutine_27cc60(_QWORD);
__int64 GameRoutine_27cce0(_QWORD);
__int64 GameRoutine_27d960(_QWORD, _QWORD);
__int64 GameRoutine_27dd70(_QWORD);
__int64 GameRoutine_28b600(_QWORD, _QWORD, float);
bool GameRoutine_28c0(__int64, unsigned __int64);
__int64 GameRoutine_2a70(__int64);
__int64 GameRoutine_2af6c0(_QWORD, _QWORD);
__int64 GameRoutine_2af740(_QWORD, _QWORD);
__int64 GameRoutine_2af820(_QWORD, _QWORD);
__int64 GameRoutine_2afde0(_QWORD, _QWORD);
__int64 GameRoutine_2b4d60(_QWORD, float);
__int64 GameRoutine_4e800(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_4e8a0(_QWORD);
__int64 GameRoutine_536a0(_QWORD, _QWORD);
__int64 GameRoutine_60abc0(_QWORD, _QWORD);
__int64 GameRoutine_a392e0(_QWORD, const char*, ...);
__int64 GameRoutine_a3a260(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a3a3a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f01b0(_DWORD*, __int64);
__int64 GameRoutine_f0230(__int64, __int64, __int64);
__int64 GameRoutine_f05e0(__int64, unsigned __int8*);
__int64 GameRoutine_f1b80(_QWORD, _QWORD);
__int64 GameRoutine_f2ce0(__int64, __int64, __int64, __int64);
__int64 GameRoutine_f5740(int*, _QWORD*);
__int64 GameRoutine_f6360(int*, _QWORD*);
_QWORD* GameRoutine_130d20_alt1(_QWORD* result, unsigned __int64,
                                char) __asm__("GameRoutine_130d20");
_QWORD* GameRoutine_a3a3a0_alt1(_QWORD*, __int64,
                                unsigned __int64) __asm__("GameRoutine_a3a3a0");
_QWORD* spine_MeshAttachment_setParentMesh(_QWORD* result, __int64);
_QWORD* spine_MeshAttachment_updateRegion(_QWORD* result);
__attribute__((swiftcall)) void
SeqVoice_1305a0(PSEUDO_X8, __int64, int, __int64, __int64, _DWORD*, char);
__int64* GameRoutine_14b380_alt1(__int64**, unsigned __int8*, __int64,
                                 __int64**) __asm__("GameRoutine_14b380");
__int64*
GameRoutine_a3a260_alt1(__int64*, __int64,
                        unsigned __int64) __asm__("GameRoutine_a3a260");
__int64* GameRoutine_f1b80_alt1(__int64* result,
                                __int64*) __asm__("GameRoutine_f1b80");
__int64* snd_130f60(__int64* result, unsigned __int64);
__int64 BaseNx_27cc60(__int64 result);
__int64 BaseNx_28b600(__int64 result, __int64, float);
__int64 Crc32List_11ed40(__int64, int*);
__int64 Crc32List_128050(__int64);
__int64 Crc32List_f01b0(_DWORD*, __int64);
__int64 Crc32List_f05e0(__int64, __int64*);
__int64 GameHr_27cce0(__int64);
__int64 GameHr_27d960(__int64, __int64);
__int64 GameHr_f2ce0(__int64, __int64, __int64, char*);
__int64 GameRoutine_112180_alt1(__int64, __int64) __asm__("GameRoutine_112180");
__int64 GameRoutine_14b260_alt1(__int64,
                                unsigned __int8*) __asm__("GameRoutine_14b260");
__int64 GameRoutine_190200_alt1(__int64, char*) __asm__("GameRoutine_190200");
__int64 GameRoutine_4e800_alt1(__int64, __int64,
                               unsigned int) __asm__("GameRoutine_4e800");
__int64 GameRoutine_a392e0_alt1(__int64, __int64,
                                ...) __asm__("GameRoutine_a392e0");
__int64 Obj_1261b0(__int64);
__int64 SoundVoiceNx_2b4d60(__int64, float);
__int64 Voice_1434a0(__int64, __int64, __int64, char, int, __int64);
__int64 Voice_143700(__int64, __int64);
__int64 Voice_1449c0(_QWORD*, __int64, __int64, __int64, __int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 nn_os_InitializeMutex(__int64, bool, int);
__int64 snd_Fade_CtrlTypeAHDSR_setState(__int64 result, int);
__int64 snd_HandlePtr_registerHandle(__int64);
__int64 snd_Obj_Obj(_QWORD*, __int64, __int64);
__int64 snd_Voice_finish(_BYTE*);
__int64 snd_data_f0230(__int64, __int64, char*);
__int64 snd_fnd_WeakHandle_get(__int64);
__int64 snd_fnd_WeakHandle_reset(__int64);
__int64 snd_fnd_WeakHandle_set(__int64, __int64);
__int64 spine_Attachment_getName(_QWORD);
__int64 spine_Sequence_copy(__int64);
__int64 spine_VertexAttachment_copyTo(__int64 result, _QWORD*);
bool snd_Param_isEnvelopeEnded(__int64);
bool snd_Param_isEnvelopeFading(__int64);
bool snd_Param_isEnvelopeReleased(__int64);
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern __int64* snd_g_memory_ptr[2];
extern __int64 snd_g_proxy;
float spine_MathUtil_clamp(float, float, float);
int strcmp(const char*, const char*);
unsigned __int64
GameRoutine_190020_alt1(__int64*, const char*) __asm__("GameRoutine_190020");
void* SoundVoiceNX_14e360();
void Voice_143d90(__int64, __int64);
void spine_MeshAttachment_MeshAttachment(__int64);
__int64 GameHr_1ad40(__int64 a1);
__int64 GameHr_1279a0(__int64* a1, int a2);
__int64 GameHr_127be0(__int64 result);
__int64 GameHr_128110(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5,
                      __int64 a6, __int64 a7, __int64 a8, __int64 a9);
void GameHr_129b60(__int64 a1);
__int64 GameHr_132040(__int64 a1, __int64 a2, const char* a3, __int64 a4);
__int64 GameHr_144cb0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5,
                      __int64 a6, __int64 a7, __int64 a8, __int64 a9);
__int64 GameHr_14ab40(__int64* a1, const char* a2);
__int64 GameHr_157010(__int64 a1);

__int64 GameHr_b440(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  __int64 v15;
  bool v17;
  __int64 v18;
  _OWORD* v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned int v22;
  __int128* v23;
  __int128 v24;
  __int128 v25;
  __int128 v26;
  __int128 v27;
  __int128 v28;
  __int128 v29;
  __int128 v30;
  __int128 v31;
  __int128 v32;
  __int128 v33;
  __int128 v34;
  bool v35;

  v3 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(a1 + 16);
  v4 = *(_QWORD*)a1;
  if (v2 == v3) {
    goto LABEL_10;
  }
  if ((GameRoutine_2a70(v4) & 1) == 0) {
    return *(unsigned int*)(*(_QWORD*)a1 + 60LL);
  }
  v4 = *(_QWORD*)a1;
  v5 = *(_QWORD*)(a1 + 8) - a1 - 24;
  if (v5 < 0) {
    if (*(_DWORD*)(v4 + 60) == 0) {
      *(_DWORD*)(v4 + 60) = 22;
    }
  LABEL_10:
    v17 = GameRoutine_28c0(v4, 0xE8u);
    v15 = *(_QWORD*)a1;
    if (v17) {
      goto LABEL_11;
    }
    return *(unsigned int*)(v15 + 60);
  }
  v6 = *(_QWORD*)(v4 + 16);
  v8 = *(_QWORD*)(v4 + 24);
  v7 = (_QWORD*)(v4 + 16);
  if (v8 >= v6 + v5) {
    *v7 = v6 + v5;
    v35 = GameRoutine_28c0(v4, 0xE8u);
    v15 = *(_QWORD*)a1;
    if (v35) {
      goto LABEL_11;
    }
    return *(unsigned int*)(v15 + 60);
  }
  v10 = *(_QWORD*)v4;
  v9 = *(_QWORD*)(v4 + 8);
  *v7 = 0;
  *(_QWORD*)(v4 + 24) = 0;
  v11 = v4;
  *(_QWORD*)(v4 + 8) = v9 + v8;
  v12 =
      *(_QWORD*)(v4 + 8) +
      (*(__int64 (**)(__int64, unsigned __int64))(v10 + 32))(v4, v5 - v8 + v6);
  v13 = *(_QWORD*)a1;
  *(_QWORD*)(v11 + 8) = v12;
  v14 = GameRoutine_28c0(v13, 0xE8u);
  v15 = *(_QWORD*)a1;
  if (!v14) {
    return *(unsigned int*)(v15 + 60);
  }
LABEL_11:
  v18 = *(_QWORD*)(v15 + 16);
  v19 = (_OWORD*)(a1 + 24);
  if ((unsigned __int64)(v18 + 232) <= *(_QWORD*)(v15 + 24)) {
    v23 = (__int128*)(*(_QWORD*)(v15 + 40) + v18);
    v24 = *v23;
    v25 = v23[2];
    *(_OWORD*)(a1 + 40) = v23[1];
    *(_OWORD*)(a1 + 56) = v25;
    *v19 = v24;
    v26 = v23[4];
    v27 = v23[5];
    v28 = v23[6];
    *(_OWORD*)(a1 + 72) = v23[3];
    *(_OWORD*)(a1 + 88) = v26;
    *(_OWORD*)(a1 + 104) = v27;
    *(_OWORD*)(a1 + 120) = v28;
    v29 = v23[8];
    v30 = v23[9];
    v31 = v23[10];
    *(_OWORD*)(a1 + 136) = v23[7];
    *(_OWORD*)(a1 + 152) = v29;
    *(_OWORD*)(a1 + 168) = v30;
    *(_OWORD*)(a1 + 184) = v31;
    v32 = v23[11];
    v33 = v23[12];
    v34 = v23[13];
    *(_QWORD*)(a1 + 248) = *((_QWORD*)v23 + 28);
    *(_OWORD*)(a1 + 216) = v33;
    *(_OWORD*)(a1 + 232) = v34;
    *(_OWORD*)(a1 + 200) = v32;
    *(_QWORD*)(v15 + 16) += 232LL;
    v20 = 232;
    goto LABEL_17;
  }
  v20 = GameRoutine_2640((_QWORD*)v15, a1 + 24, 0xE8u);
  if (v20 != 0) {
  LABEL_17:
    *(_QWORD*)(a1 + 8) = v19;
    *(_QWORD*)(a1 + 16) = (char*)v19 + v20;
    return 0;
  }
  v21 = *(_QWORD*)a1;
  *(_QWORD*)(a1 + 8) = v19;
  *(_QWORD*)(a1 + 16) = v19;
  v22 = *(_DWORD*)(v21 + 60);
  if (v22 != 0) {
    return v22;
  }
  else {
    return 61;
  }
}

__int64 GameHr_1ad40(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  int v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int16 v40;
  __int64 v41;
  int v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  int v49;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  float v58;
  __int64 v59;
  __int64 vars0;
  __int64 _18;
  __int64 vars20;
  __int64 _38;
  __int64 vars30;
  __int64 _48;

  if (*(_QWORD*)(a1 + 136) != 0) {
    vars20 = vars0;
    _38 = _18;
    vars30 = _48;
    v52 = GameRoutine_4e800_alt1(
        360, (__int64)"/Program/Externals/Spine/src/spine/MeshAttachment.cpp",
        0xE3u);
    spine_Attachment_getName(a1);
    spine_MeshAttachment_MeshAttachment(v52);
    *(_QWORD*)(v52 + 344) = *(_QWORD*)(a1 + 344);
    if (v52 != a1) {
      v53 = *(_QWORD*)(v52 + 288);
      if (v53 != 0 && (*(_BYTE*)(v52 + 296) & 1) != 0) {
        v54 = GameRoutine_19e10();
        (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v54 +
                                                              40LL))(
            v54, v53, "/Program/Externals/Spine/include\\spine/SpineString.h",
            119);
      }
      if (*(_QWORD*)(a1 + 288) != 0) {
        v55 = *(_QWORD*)(a1 + 280);
        *(_QWORD*)(v52 + 280) = v55;
        v56 = GameRoutine_19e10();
        v57 = (*(__int64 (**)(__int64, __int64, const char*, __int64))(
            *(_QWORD*)v56 + 24LL))(
            v56, v55 + 1,
            "/Program/Externals/Spine/include\\spine/SpineString.h", 126);
        *(_QWORD*)(v52 + 288) = v57;
        memcpy(v57, *(_QWORD*)(a1 + 288), *(_QWORD*)(a1 + 280) + 1LL);
      }
      else {
        *(_QWORD*)(v52 + 280) = 0;
        *(_QWORD*)(v52 + 288) = 0;
      }
    }
    v58 = *(float*)(a1 + 312);
    *(float*)(v52 + 312) = v58;
    *(_DWORD*)(v52 + 316) = *(_DWORD*)(a1 + 316);
    *(_DWORD*)(v52 + 320) = *(_DWORD*)(a1 + 320);
    *(_DWORD*)(v52 + 324) = *(_DWORD*)(a1 + 324);
    *(float*)(v52 + 312) =
        spine_MathUtil_clamp(v58, 0x0.0p+0f, 0x1.0000000000000p+0f);
    *(float*)(v52 + 316) = spine_MathUtil_clamp(*(float*)(v52 + 316), 0x0.0p+0f,
                                                0x1.0000000000000p+0f);
    *(float*)(v52 + 320) = spine_MathUtil_clamp(*(float*)(v52 + 320), 0x0.0p+0f,
                                                0x1.0000000000000p+0f);
    *(float*)(v52 + 324) = spine_MathUtil_clamp(*(float*)(v52 + 324), 0x0.0p+0f,
                                                0x1.0000000000000p+0f);
    *(_QWORD*)(v52 + 120) = *(_QWORD*)(a1 + 120);
    if (*(_QWORD*)(a1 + 136) != 0) {
      v59 = *(_QWORD*)(a1 + 136);
    }
    else {
      v59 = a1;
    }
    spine_MeshAttachment_setParentMesh((_QWORD*)v52, v59);
    if (*(_QWORD*)(v52 + 344) != 0) {
      spine_MeshAttachment_updateRegion((_QWORD*)v52);
    }
    return v52;
  }
  else {
    v2 = GameRoutine_4e800_alt1(
        360, (__int64)"/Program/Externals/Spine/src/spine/MeshAttachment.cpp",
        0xCFu);
    spine_Attachment_getName(a1);
    spine_MeshAttachment_MeshAttachment(v2);
    *(_QWORD*)(v2 + 344) = *(_QWORD*)(a1 + 344);
    v3 = *(_QWORD*)(a1 + 352);
    if (v3 != 0) {
      v3 = spine_Sequence_copy(v3);
    }
    *(_QWORD*)(v2 + 352) = v3;
    if (v2 != a1) {
      v4 = *(_QWORD*)(v2 + 288);
      if (v4 != 0 && (*(_BYTE*)(v2 + 296) & 1) != 0) {
        v5 = GameRoutine_19e10();
        (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v5 +
                                                              40LL))(
            v5, v4, "/Program/Externals/Spine/include\\spine/SpineString.h",
            119);
      }
      if (*(_QWORD*)(a1 + 288) != 0) {
        v6 = *(_QWORD*)(a1 + 280);
        *(_QWORD*)(v2 + 280) = v6;
        v7 = GameRoutine_19e10();
        v8 = (*(__int64 (**)(__int64, __int64, const char*, __int64))(
            *(_QWORD*)v7 + 24LL))(
            v7, v6 + 1, "/Program/Externals/Spine/include\\spine/SpineString.h",
            126);
        *(_QWORD*)(v2 + 288) = v8;
        memcpy(v8, *(_QWORD*)(a1 + 288), *(_QWORD*)(a1 + 280) + 1LL);
      }
      else {
        *(_QWORD*)(v2 + 280) = 0;
        *(_QWORD*)(v2 + 288) = 0;
      }
    }
    v9 = *(float*)(a1 + 312);
    *(float*)(v2 + 312) = v9;
    *(_DWORD*)(v2 + 316) = *(_DWORD*)(a1 + 316);
    *(_DWORD*)(v2 + 320) = *(_DWORD*)(a1 + 320);
    *(_DWORD*)(v2 + 324) = *(_DWORD*)(a1 + 324);
    *(float*)(v2 + 312) =
        spine_MathUtil_clamp(v9, 0x0.0p+0f, 0x1.0000000000000p+0f);
    *(float*)(v2 + 316) = spine_MathUtil_clamp(*(float*)(v2 + 316), 0x0.0p+0f,
                                               0x1.0000000000000p+0f);
    *(float*)(v2 + 320) = spine_MathUtil_clamp(*(float*)(v2 + 320), 0x0.0p+0f,
                                               0x1.0000000000000p+0f);
    *(float*)(v2 + 324) = spine_MathUtil_clamp(*(float*)(v2 + 324), 0x0.0p+0f,
                                               0x1.0000000000000p+0f);
    spine_VertexAttachment_copyTo(a1, (_QWORD*)v2);
    *(_QWORD*)(v2 + 184) = 0;
    v10 = *(_QWORD*)(a1 + 184);
    if (*(_QWORD*)(v2 + 192) < v10) {
      v11 = *(_QWORD*)(v2 + 200);
      *(_QWORD*)(v2 + 192) = v10;
      v12 = GameRoutine_19e10();
      *(_QWORD*)(v2 + 200) =
          (*(__int64 (**)(__int64, __int64, unsigned __int64, const char*,
                          __int64))(*(_QWORD*)v12 + 32LL))(
              v12, v11, 4 * v10,
              "/Program/Externals/Spine/include\\spine/Vector.h", 94);
      v10 = *(_QWORD*)(a1 + 184);
    }
    if (v10 != 0) {
      v13 = 0;
      do {
        while (1) {
          v20 = *(_QWORD*)(a1 + 200);
          v21 = *(_QWORD*)(v2 + 184);
          if (v21 == *(_QWORD*)(v2 + 192)) {
            break;
          }
          v22 = *(_QWORD*)(v2 + 200);
          *(_QWORD*)(v2 + 184) = v21 + 1;
          *(_DWORD*)(v22 + 4 * v21) = *(_DWORD*)(v20 + 4 * v13++);
          if (v13 >= *(_QWORD*)(a1 + 184)) {
            goto LABEL_22;
          }
        }
        v14 = *(_DWORD*)(v20 + 4 * v13);
        v15 = *(_QWORD*)(v2 + 200);
        if ((unsigned int)(int)(float)((float)v21 * 0x1.c000000000000p+0f) <=
            8) {
          v16 = 8;
        }
        else {
          v16 = (int)(float)((float)v21 * 0x1.c000000000000p+0f);
        }
        *(_QWORD*)(v2 + 192) = v16;
        v17 = GameRoutine_19e10();
        v18 = (*(__int64 (**)(__int64, __int64, __int64, const char*, __int64))(
            *(_QWORD*)v17 + 32LL))(
            v17, v15, 4LL * v16,
            "/Program/Externals/Spine/include\\spine/Vector.h", 106);
        v19 = *(_QWORD*)(v2 + 184);
        *(_QWORD*)(v2 + 200) = v18;
        *(_QWORD*)(v2 + 184) = v19 + 1;
        *(_DWORD*)(v18 + 4 * v19) = v14;
        ++v13;
      } while (v13 < *(_QWORD*)(a1 + 184));
    }
  LABEL_22:
    *(_QWORD*)(v2 + 152) = 0;
    v23 = *(_QWORD*)(a1 + 152);
    if (*(_QWORD*)(v2 + 160) < v23) {
      v24 = *(_QWORD*)(v2 + 168);
      *(_QWORD*)(v2 + 160) = v23;
      v25 = GameRoutine_19e10();
      *(_QWORD*)(v2 + 168) =
          (*(__int64 (**)(__int64, __int64, unsigned __int64, const char*,
                          __int64))(*(_QWORD*)v25 + 32LL))(
              v25, v24, 4 * v23,
              "/Program/Externals/Spine/include\\spine/Vector.h", 94);
      v23 = *(_QWORD*)(a1 + 152);
    }
    if (v23 != 0) {
      v26 = 0;
      do {
        while (1) {
          v33 = *(_QWORD*)(a1 + 168);
          v34 = *(_QWORD*)(v2 + 152);
          if (v34 == *(_QWORD*)(v2 + 160)) {
            break;
          }
          v35 = *(_QWORD*)(v2 + 168);
          *(_QWORD*)(v2 + 152) = v34 + 1;
          *(_DWORD*)(v35 + 4 * v34) = *(_DWORD*)(v33 + 4 * v26++);
          if (v26 >= *(_QWORD*)(a1 + 152)) {
            goto LABEL_32;
          }
        }
        v27 = *(_DWORD*)(v33 + 4 * v26);
        v28 = *(_QWORD*)(v2 + 168);
        if ((unsigned int)(int)(float)((float)v34 * 0x1.c000000000000p+0f) <=
            8) {
          v29 = 8;
        }
        else {
          v29 = (int)(float)((float)v34 * 0x1.c000000000000p+0f);
        }
        *(_QWORD*)(v2 + 160) = v29;
        v30 = GameRoutine_19e10();
        v31 = (*(__int64 (**)(__int64, __int64, __int64, const char*, __int64))(
            *(_QWORD*)v30 + 32LL))(
            v30, v28, 4LL * v29,
            "/Program/Externals/Spine/include\\spine/Vector.h", 106);
        v32 = *(_QWORD*)(v2 + 152);
        *(_QWORD*)(v2 + 168) = v31;
        *(_QWORD*)(v2 + 152) = v32 + 1;
        *(_DWORD*)(v31 + 4 * v32) = v27;
        ++v26;
      } while (v26 < *(_QWORD*)(a1 + 152));
    }
  LABEL_32:
    *(_QWORD*)(v2 + 216) = 0;
    v36 = *(_QWORD*)(a1 + 216);
    if (*(_QWORD*)(v2 + 224) < v36) {
      v37 = *(_QWORD*)(v2 + 232);
      *(_QWORD*)(v2 + 224) = v36;
      v38 = GameRoutine_19e10();
      *(_QWORD*)(v2 + 232) =
          (*(__int64 (**)(__int64, __int64, unsigned __int64, const char*,
                          __int64))(*(_QWORD*)v38 + 32LL))(
              v38, v37, 2 * v36,
              "/Program/Externals/Spine/include\\spine/Vector.h", 94);
      v36 = *(_QWORD*)(a1 + 216);
    }
    if (v36 != 0) {
      v39 = 0;
      do {
        while (1) {
          v46 = *(_QWORD*)(a1 + 232);
          v47 = *(_QWORD*)(v2 + 216);
          if (v47 == *(_QWORD*)(v2 + 224)) {
            break;
          }
          v48 = *(_QWORD*)(v2 + 232);
          *(_QWORD*)(v2 + 216) = v47 + 1;
          *(_WORD*)(v48 + 2 * v47) = *(_WORD*)(v46 + 2 * v39++);
          if (v39 >= *(_QWORD*)(a1 + 216)) {
            goto LABEL_42;
          }
        }
        v40 = *(_WORD*)(v46 + 2 * v39);
        v41 = *(_QWORD*)(v2 + 232);
        if ((unsigned int)(int)(float)((float)v47 * 0x1.c000000000000p+0f) <=
            8) {
          v42 = 8;
        }
        else {
          v42 = (int)(float)((float)v47 * 0x1.c000000000000p+0f);
        }
        *(_QWORD*)(v2 + 224) = v42;
        v43 = GameRoutine_19e10();
        v44 = (*(__int64 (**)(__int64, __int64, __int64, const char*, __int64))(
            *(_QWORD*)v43 + 32LL))(
            v43, v41, 2LL * v42,
            "/Program/Externals/Spine/include\\spine/Vector.h", 106);
        v45 = *(_QWORD*)(v2 + 216);
        *(_QWORD*)(v2 + 232) = v44;
        *(_QWORD*)(v2 + 216) = v45 + 1;
        *(_WORD*)(v44 + 2 * v45) = v40;
        ++v39;
      } while (v39 < *(_QWORD*)(a1 + 216));
    }
  LABEL_42:
    v49 = *(_DWORD*)(a1 + 328);
    *(_QWORD*)(v2 + 248) = 0;
    *(_DWORD*)(v2 + 328) = v49;
    *(_DWORD*)(v2 + 332) = *(_DWORD*)(a1 + 332);
    *(_DWORD*)(v2 + 336) = *(_DWORD*)(a1 + 336);
    return v2;
  }
}

__int64 GameHr_3ca20(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;

  v1 = a1[3];
  *a1 = GameData_1f52148;
  a1[1] = 0;
  if (v1 != 0) {
    v2 = a1;
    v3 = GameRoutine_19e10();
    (*(void (**)(__int64, __int64, const char*, __int64))(*(_QWORD*)v3 + 40LL))(
        v3, v1, "/Program/Externals/Spine/include\\spine/Vector.h", 206);
    a1 = v2;
  }
  return GameRoutine_4e8a0(a1);
}

__int64 GameHr_106f20(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  long double v11;
  long double v12;
  long double v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  GameRoutine_1a09b70(GameData_21344c0[0]);
  v3 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(a1 + 16);
  if (v2 != v3) {
    v4 = 0;
    v5 = GameData_212d480[0];
    do {
      v6 = (_QWORD*)(v3 + 32 * v4);
      if (*(_DWORD*)(*v6 + 144LL) == 2) {
        v8 = v6[1];
        v7 = v6[2];
        if (v7 != v8) {
          v9 = 0;
          do {
            v10 = *(_QWORD*)(v8 + 8 * v9);
            if (*(_DWORD*)(v10 + 144) == 3) {
              GameRoutine_1059c0(a1, *(_QWORD*)(v8 + 8 * v9));
              *(_QWORD*)(v10 + 144) = 0;
              *(_BYTE*)(v10 + 264) = 0;
              GameRoutine_190200(v10, &GameData_1a9f09e);
              GameRoutine_190200(v10 + 24, &GameData_1a9f09e);
              GameRoutine_190200(v10 + 48, &GameData_1a9f09e);
              GameRoutine_190200(v10 + 72, &GameData_1a9f09e);
              GameRoutine_112080(v10 + 96, v11);
              GameRoutine_112080(v10 + 112, v12);
              GameRoutine_112080(v10 + 128, v13);
              v14 = *(unsigned __int8*)(v10 + 224);
              *(_QWORD*)(v10 + 144) = 0;
              if (v14 == 1) {
                if (*(_QWORD*)(v10 + 176) != 0) {
                  v15 = *v5;
                  v16 = *(_QWORD*)(v10 + 168);
                  *(_QWORD*)(v10 + 168) = 0;
                  (*(void (**)(__int64, __int64))(*(_QWORD*)v15 + 24LL))(v15,
                                                                         v16);
                  v17 = *v5;
                  v18 = *(_QWORD*)(v10 + 176);
                  *(_QWORD*)(v10 + 176) = 0;
                  (*(void (**)(__int64, __int64))(*(_QWORD*)v17 + 24LL))(v17,
                                                                         v18);
                  *(_QWORD*)(v10 + 184) = 0;
                }
                *(_BYTE*)(v10 + 224) = 0;
              }
              *(_BYTE*)(v10 + 264) = 0;
              *(_QWORD*)(v10 + 248) = 0;
              *(_QWORD*)(v10 + 256) = 0;
              *(_QWORD*)(v10 + 232) = 0;
              *(_QWORD*)(v10 + 240) = 0;
              v8 = v6[1];
              v7 = v6[2];
            }
            ++v9;
          } while (v9 < (v7 - v8) >> 3);
          v3 = *(_QWORD*)(a1 + 8);
          v2 = *(_QWORD*)(a1 + 16);
        }
      }
      ++v4;
    } while (v4 < (v2 - v3) >> 5);
  }
  return GameRoutine_1a09b80(GameData_21344c0[0]);
}

__int64 GameHr_109690(__int64* a1, __int64* a2, __int64* a3, __int64* a4)
{
  __int64 result;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  unsigned int v20;

  result = GameRoutine_109540(a1, a2, a3);
  v9 = *a4;
  v10 = *a3;
  v11 = *(_DWORD*)(*a4 + 8);
  v12 = *(_DWORD*)(*a3 + 8);
  if (v11 == v12) {
    result = GameRoutine_1a09d30(*(_QWORD*)(v9 + 16), *(_QWORD*)(v10 + 16));
    if ((result & 0x80000000) == 0) {
      return result;
    }
  }
  else if (v11 >= v12) {
    return result;
  }
  *a3 = v9;
  *a4 = v10;
  v13 = *a3;
  v14 = *a2;
  v15 = *(_DWORD*)(*a3 + 8);
  v16 = *(_DWORD*)(*a2 + 8);
  if (v15 == v16) {
    result = GameRoutine_1a09d30(*(_QWORD*)(v13 + 16), *(_QWORD*)(v14 + 16));
    if ((result & 0x80000000) == 0) {
      return result;
    }
  }
  else if (v15 >= v16) {
    return result;
  }
  *a2 = v13;
  *a3 = v14;
  v17 = *a2;
  v18 = *a1;
  v19 = *(_DWORD*)(*a2 + 8);
  v20 = *(_DWORD*)(*a1 + 8);
  if (v19 == v20) {
    result = GameRoutine_1a09d30(*(_QWORD*)(v17 + 16), *(_QWORD*)(v18 + 16));
    if ((result & 0x80000000) != 0) {
      goto LABEL_13;
    }
  }
  else if (v19 < v20) {
  LABEL_13:
    *a1 = v17;
    *a2 = v18;
  }
  return result;
}

__int64 GameHr_109790(__int64* a1, __int64* a2, __int64* a3, __int64* a4,
                      __int64* a5)
{
  __int64 result;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  unsigned int v26;

  result = GameRoutine_109690(a1, a2, a3, a4);
  v11 = *a5;
  v12 = *a4;
  v13 = *(_DWORD*)(*a5 + 8);
  v14 = *(_DWORD*)(*a4 + 8);
  if (v13 == v14) {
    result = GameRoutine_1a09d30(*(_QWORD*)(v11 + 16), *(_QWORD*)(v12 + 16));
    if ((result & 0x80000000) == 0) {
      return result;
    }
  }
  else if (v13 >= v14) {
    return result;
  }
  *a4 = v11;
  *a5 = v12;
  v15 = *a4;
  v16 = *a3;
  v17 = *(_DWORD*)(*a4 + 8);
  v18 = *(_DWORD*)(*a3 + 8);
  if (v17 == v18) {
    result = GameRoutine_1a09d30(*(_QWORD*)(v15 + 16), *(_QWORD*)(v16 + 16));
    if ((result & 0x80000000) == 0) {
      return result;
    }
  }
  else if (v17 >= v18) {
    return result;
  }
  *a3 = v15;
  *a4 = v16;
  v19 = *a3;
  v20 = *a2;
  v21 = *(_DWORD*)(*a3 + 8);
  v22 = *(_DWORD*)(*a2 + 8);
  if (v21 == v22) {
    result = GameRoutine_1a09d30(*(_QWORD*)(v19 + 16), *(_QWORD*)(v20 + 16));
    if ((result & 0x80000000) == 0) {
      return result;
    }
  }
  else if (v21 >= v22) {
    return result;
  }
  *a2 = v19;
  *a3 = v20;
  v23 = *a2;
  v24 = *a1;
  v25 = *(_DWORD*)(*a2 + 8);
  v26 = *(_DWORD*)(*a1 + 8);
  if (v25 != v26) {
    if (v25 >= v26) {
      return result;
    }
    goto LABEL_17;
  }
  result = GameRoutine_1a09d30(*(_QWORD*)(v23 + 16), *(_QWORD*)(v24 + 16));
  if ((result & 0x80000000) != 0) {
  LABEL_17:
    *a1 = v23;
    *a2 = v24;
  }
  return result;
}

bool GameHr_109c60(__int64* a1, __int64* a2)
{
  __int64 v4;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  unsigned int v17;
  __int64 v18;
  char* v19;
  unsigned int v20;
  __int64 v21;
  unsigned int v22;

  v4 = a2 - a1;
  if (v4 > 2) {
    switch (v4) {
    case 3LL:
      GameRoutine_109540(a1, a1 + 1, a2 - 1);
      return true;
    case 4LL:
      GameRoutine_109690(a1, a1 + 1, a1 + 2, a2 - 1);
      return true;
    case 5LL:
      GameRoutine_109790(a1, a1 + 1, a1 + 2, a1 + 3, a2 - 1);
      return true;
    default:
      break;
    }
  }
  else {
    if ((unsigned __int64)v4 < 2) {
      return true;
    }
    if (v4 == 2) {
      v6 = *(a2 - 1);
      v7 = *a1;
      v8 = *(_DWORD*)(v6 + 8);
      v9 = *(_DWORD*)(*a1 + 8);
      if (v8 == v9) {
        if ((GameRoutine_1a09d30(*(_QWORD*)(v6 + 16), *(_QWORD*)(v7 + 16)) &
             0x80000000) == 0) {
          return true;
        }
      }
      else if (v8 >= v9) {
        return true;
      }
      *a1 = v6;
      *(a2 - 1) = v7;
      return true;
    }
  }
  v10 = a1 + 2;
  GameRoutine_109540(a1, a1 + 1, a1 + 2);
  v11 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v12 = 0;
  v13 = 0;
  while (1) {
    v14 = *v11;
    v15 = *v10;
    v16 = *(_DWORD*)(*v11 + 8);
    v17 = *(_DWORD*)(v15 + 8);
    if (v16 == v17) {
      if ((GameRoutine_1a09d30(*(_QWORD*)(v14 + 16), *(_QWORD*)(v15 + 16)) &
           0x80000000) != 0) {
        break;
      }
      goto LABEL_27;
    }
    if (v16 < v17) {
      break;
    }
  LABEL_27:
    v10 = v11++;
    v12 += 8;
    if (v11 == a2) {
      return true;
    }
  }
  *v11 = v15;
  v18 = v12;
  while (1) {
    v19 = (char*)a1 + v18;
    v20 = *(_DWORD*)(v14 + 8);
    v21 = *(__int64*)((char*)a1 + v18 + 8);
    v22 = *(_DWORD*)(v21 + 8);
    if (v20 != v22) {
      break;
    }
    if ((GameRoutine_1a09d30(*(_QWORD*)(v14 + 16), *(_QWORD*)(v21 + 16)) &
         0x80000000) == 0) {
      goto LABEL_26;
    }
  LABEL_23:
    v18 -= 8;
    *((_QWORD*)v19 + 2) = v21;
    if (v18 == -16) {
      ++v13;
      *a1 = v14;
      if (v13 != 8) {
        goto LABEL_27;
      }
      return v11 + 1 == a2;
    }
  }
  if (v20 < v22) {
    goto LABEL_23;
  }
LABEL_26:
  ++v13;
  *(__int64*)((char*)a1 + v18 + 16) = v14;
  if (v13 != 8) {
    goto LABEL_27;
  }
  return v11 + 1 == a2;
}

__int64 GameHr_126000(__int64 a1)
{
  *(_QWORD*)a1 = GameData_2134050[0] + 16;
  GameRoutine_190020(a1 + 8, &GameData_1a9f09e);
  return (*(__int64 (**)(__int64, char*))(*(_QWORD*)a1 + 16LL))(
      a1, &GameData_1a9f09e);
}

__int64 GameHr_1261b0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6)
{
  __int64 result;

  *(_QWORD*)a1 = GameData_2134668[0] + 2;
  GameRoutine_1a0ba50(a1 + 8, 0, 5544, a4, a5, a6);
  result = GameRoutine_126230(a1 + 8);
  *(_DWORD*)(a1 + 5444) = 0;
  *(_DWORD*)(a1 + 5320) = 1065353216;
  *(_QWORD*)(a1 + 5324) = 0;
  *(_QWORD*)(a1 + 5332) = 0;
  *(_QWORD*)(a1 + 5340) = 0;
  *(_QWORD*)(a1 + 5348) = 0;
  *(_QWORD*)(a1 + 5356) = 0;
  *(_QWORD*)(a1 + 5364) = 0;
  *(_QWORD*)(a1 + 5372) = 0;
  *(_QWORD*)(a1 + 5380) = 0;
  *(_QWORD*)(a1 + 5388) = 0;
  *(_QWORD*)(a1 + 5396) = 0;
  *(_QWORD*)(a1 + 5404) = 0;
  *(_QWORD*)(a1 + 5412) = 0;
  *(_QWORD*)(a1 + 5420) = 0;
  *(_QWORD*)(a1 + 5428) = 0;
  *(_QWORD*)(a1 + 5436) = 0;
  return result;
}

__int64 GameHr_1279a0(__int64* a1, int a2)
{
  unsigned __int64 v3;
  unsigned __int64 v5;
  bool v6;
  unsigned __int64 v7;
  __int64 result;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;

  v3 = a2;
  v5 = (a1[1] - *a1) >> 4;
  v6 = a2 >= v5;
  v7 = a2 - v5;
  if (v7 != 0 && v6) {
    snd_130f60(a1, v7);
  }
  else if (!v6) {
    a1[1] = *a1 + 16 * v3;
  }
  GameRoutine_130d20_alt1(a1 + 3, v3, 0);
  result = (__int64)GameRoutine_130d20_alt1(a1 + 6, v3, 0);
  if (a2 >= 1) {
    v9 = 0;
    do {
      result = snd_fnd_WeakHandle_reset(*a1 + 16 * v9);
      v10 = v9 >> 3;
      v11 = 1LL << v9++;
      v10 &= 0x1FFFFFFFFFFFFFF8uLL;
      *(_QWORD*)(a1[3] + v10) &= ~v11;
      *(_QWORD*)(a1[6] + v10) &= ~v11;
    } while (v9 != a2);
  }
  return result;
}

__int64 GameHr_127be0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  if ((*(_BYTE*)(result + 5885) & 1) == 0) {
    *(_BYTE*)(result + 5906) = 0;
    *(_WORD*)(result + 5904) = 0;
    v1 = result;
    snd_fnd_WeakHandle_reset(result + 5864);
    snd_fnd_WeakHandle_reset(v1 + 5984);
    snd_Voice_finish((_BYTE*)v1);
    result = snd_Fade_CtrlTypeAHDSR_setState(v1 + 3600, 7);
    *(_DWORD*)(v1 + 5792) = -1;
    switch (*(_DWORD*)(*(_QWORD*)(v1 + 6088) + 8LL)) {
    case 1:
    case 2:
    case 3:
    case 5:
    case 6:
    case 8:
    case 0xB:
    case 0xC:
      result = snd_fnd_WeakHandle_get(*(_QWORD*)(v1 + 6104));
      if (result != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)(result - 5592) + 264LL))(
            result - 5592);
      }
      break;
    case 4:
      if (*(int*)(*(_QWORD*)(v1 + 6096) + 24LL) >= 1) {
        v8 = 0;
        v9 = 0;
        do {
          result = snd_fnd_WeakHandle_get(**(_QWORD**)(v1 + 6104) + v8);
          if (result != 0) {
            result = (*(__int64 (**)(__int64))(*(_QWORD*)(result - 5592) +
                                               264LL))(result - 5592);
          }
          ++v9;
          v8 += 16;
        } while (v9 < *(int*)(*(_QWORD*)(v1 + 6096) + 24LL));
      }
      break;
    case 7:
      if (*(int*)(*(_QWORD*)(v1 + 6096) + 24LL) >= 1) {
        v4 = 0;
        v5 = 0;
        do {
          result = snd_fnd_WeakHandle_get(**(_QWORD**)(v1 + 6104) + v4);
          if (result != 0) {
            result = (*(__int64 (**)(__int64))(*(_QWORD*)(result - 5592) +
                                               264LL))(result - 5592);
          }
          ++v5;
          v4 += 16;
        } while (v5 < *(int*)(*(_QWORD*)(v1 + 6096) + 24LL));
      }
      break;
    case 9:
      if (*(int*)(*(_QWORD*)(v1 + 6096) + 24LL) >= 1) {
        v6 = 0;
        v7 = 0;
        do {
          result = snd_fnd_WeakHandle_get(**(_QWORD**)(v1 + 6104) + v6);
          if (result != 0) {
            result = (*(__int64 (**)(__int64))(*(_QWORD*)(result - 5592) +
                                               264LL))(result - 5592);
          }
          ++v7;
          v6 += 16;
        } while (v7 < *(int*)(*(_QWORD*)(v1 + 6096) + 24LL));
      }
      break;
    case 0xA:
      if (*(int*)(*(_QWORD*)(v1 + 6096) + 24LL) >= 1) {
        v2 = 0;
        v3 = 0;
        do {
          result = snd_fnd_WeakHandle_get(**(_QWORD**)(v1 + 6104) + v2);
          if (result != 0) {
            result = (*(__int64 (**)(__int64))(*(_QWORD*)(result - 5592) +
                                               264LL))(result - 5592);
          }
          ++v3;
          v2 += 16;
        } while (v3 < *(int*)(*(_QWORD*)(v1 + 6096) + 24LL));
      }
      break;
    default:
      return result;
    }
  }
  return result;
}

__int64 GameHr_128110(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5,
                      __int64 a6, __int64 a7, __int64 a8, __int64 a9)
{
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  bool v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  struct {
    __int64 v31;
    int v32;
  } v31_;

  v16 = a1 + 4096;
  Voice_1449c0((_QWORD*)a1, a2, a4, a8, a9);
  v17 = GameData_2134670[0];
  *(_QWORD*)(a1 + 6072) = 0;
  *(_QWORD*)(a1 + 6080) = 0;
  *(_QWORD*)(a1 + 6088) = 0;
  *(_QWORD*)(a1 + 6096) = 0;
  *(_QWORD*)(a1 + 6104) = 0;
  *(_BYTE*)(v16 + 2018) = 0;
  *(_QWORD*)a1 = v17 + 2;
  *(_QWORD*)(a1 + 40) = v17 + 103;
  *(_QWORD*)(a1 + 5592) = v17 + 244;
  *(_WORD*)(a1 + 6112) = 1;
  *(_DWORD*)(a1 + 6116) = 1065353216;
  v18 = GameRoutine_f6360(a5, (_QWORD*)(a1 + 6096));
  v19 = Crc32List_128050(*(_QWORD*)(a1 + 32) + 2920LL);
  *(_QWORD*)(a1 + 6088) = v19;
  GameHr_f2ce0(v19, v18, a6, nullptr);
  Crc32List_f05e0(*(_QWORD*)(a1 + 5648),
                  (__int64*)(*(_QWORD*)(a1 + 6088) + 16LL));
  v31_.v31 = 0;
  v31_.v32 = 0x2000;
  if (a3 != 0) {
    v20 = a3 + 5592;
  }
  else {
    v20 = 0;
  }
  snd_fnd_WeakHandle_set((__int64)&v31_.v31, v20);
  GameRoutine_112180_alt1(a1 + 5800, (__int64)&v31_.v31);
  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 16LL))(a1, a4);
  v21 = *(unsigned __int8*)(v16 + 1584);
  v22 = (__int64*)(v16 + 1640);
  if ((*(_BYTE*)(v16 + 1640) & 1) != 0) {
    v25 = (v21 & 1) == 0;
    v26 = v21 >> 1;
    if (v25) {
      v27 = a1 + 5681;
    }
    else {
      v27 = *(_QWORD*)(a1 + 5696);
    }
    if (v25) {
      v28 = v26;
    }
    else {
      v28 = *(_QWORD*)(a1 + 5688);
    }
    GameRoutine_a3a260_alt1(v22, v27, v28);
  }
  else if ((v21 & 1) != 0) {
    GameRoutine_a3a3a0_alt1(v22, *(_QWORD*)(a1 + 5696), *(_QWORD*)(a1 + 5688));
  }
  else {
    v23 = *(_QWORD*)(v16 + 1592);
    v24 = *(_QWORD*)(v16 + 1600);
    *v22 = *(_QWORD*)(v16 + 1584);
    *(_QWORD*)(v16 + 1648) = v23;
    *(_QWORD*)(v16 + 1656) = v24;
  }
  v31_.v31 = 0;
  v31_.v32 = 0x2000;
  if (a7 != 0) {
    v29 = a7 + 5592;
  }
  else {
    v29 = 0;
  }
  snd_fnd_WeakHandle_set((__int64)&v31_.v31, v29);
  GameRoutine_112180_alt1(a1 + 5848, (__int64)&v31_.v31);
  *(_DWORD*)(a1 + 5920) = *(_DWORD*)(a8 + 208);
  GameRoutine_126f60(a1, a8);
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 784LL))(a1);
}

void GameHr_129b60(__int64 a1)
{

#pragma clang fp contract(off)
  int v1;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  char v19;
  char v20;
  __int64 v21;
  __int64 v22;
  float v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  float v28;
  _BYTE v29[16];
  float v30;

  v1 = *(_DWORD*)(a1 + 5792);
  if (v1 != 8) {
    if (v1 != 6) {
      return;
    }
    if (!snd_Param_isEnvelopeReleased(a1 + 40) &&
        !snd_Param_isEnvelopeFading(a1 + 40) &&
        !snd_Param_isEnvelopeEnded(a1 + 40)) {
      v3 = *(_QWORD*)(a1 + 6096);
      *(_DWORD*)(a1 + 5788) = 0;
      if (*(int*)(v3 + 24) >= 1) {
        v4 = 0;
        v5 = 0;
        do {
          SeqVoice_1305a0((void*)((__int64)v29), a1, v5,
                          *(_QWORD*)(*(_QWORD*)(a1 + 6088) + 680LL) +
                              664LL * *(unsigned __int8*)(*(_QWORD*)v3 + v5),
                          *(_QWORD*)(v3 + 48) +
                              104LL * *(unsigned __int8*)(*(_QWORD*)v3 + v5),
                          &v30, 0);
          GameRoutine_112180_alt1(**(_QWORD**)(a1 + 6104) + v4, (__int64)v29);
          v6 = v5 >> 6;
          v7 = ~(1LL << v5);
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 6104) + 24LL) +
                     8 * (v5 >> 6)) &= v7;
          v8 = snd_fnd_WeakHandle_get(**(_QWORD**)(a1 + 6104) + v4);
          if (v8 != 0) {
            v9 = v8;
            if (((*(__int64 (**)(__int64))(*(_QWORD*)(v8 - 5592) + 376LL))(
                     v8 - 5592) &
                 1) != 0) {
              v10 = *(_QWORD*)(*(_QWORD*)(a1 + 6104) + 24LL);
              v11 = *(_QWORD*)(v10 + 8 * v6);
              v12 = v11 & v7;
              v13 = v11 | (1LL << v5);
              if (*(_DWORD*)(*(_QWORD*)(v9 + 56) + 112LL) != 0) {
                v14 = v13;
              }
              else {
                v14 = v12;
              }
              *(_QWORD*)(v10 + 8 * v6) = v14;
            }
          }
          v15 = v30;
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 6104) + 48LL) + 8 * v6) &= v7;
          if (v15 > *(float*)(a1 + 5788)) {
            *(float*)(a1 + 5788) = v15;
          }
          v3 = *(_QWORD*)(a1 + 6096);
          ++v5;
          v4 += 16;
        } while ((__int64)v5 < *(int*)(v3 + 24));
      }
    }
    *(_DWORD*)(a1 + 5792) = 8;
  }
  v16 = *(_QWORD*)(a1 + 6096);
  *(_DWORD*)(a1 + 5936) = 0;
  if (*(int*)(v16 + 24) < 1) {
  LABEL_40:
    if (*(float*)(*(_QWORD*)(a1 + 5648) + 256LL) < 0x0.0p+0f ||
        snd_Param_isEnvelopeReleased(a1 + 40) ||
        snd_Param_isEnvelopeFading(a1 + 40) ||
        snd_Param_isEnvelopeEnded(a1 + 40)) {
      (*(void (**)(__int64))(*(_QWORD*)a1 + 264LL))(a1);
    }
    else {
      *(_DWORD*)(a1 + 5792) = 10;
    }
    return;
  }
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  do {
    v21 = snd_fnd_WeakHandle_get(**(_QWORD**)(a1 + 6104) + v17);
    if (v21 != 0) {
      v22 = v21;
      if (((*(__int64 (**)(__int64))(*(_QWORD*)(v21 - 5592) + 376LL))(v21 -
                                                                      5592) &
           1) != 0) {
        v19 |= (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 6104) + 48LL) +
                           8 * (v18 >> 6)) &
                (1LL << v18)) == 0;
        v20 |= (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 6104) + 48LL) +
                           8 * (v18 >> 6)) &
                (1LL << v18)) != 0;
        v23 = *(float*)(a1 + 5936);
        if (v23 < (*(float (**)(__int64))(*(_QWORD*)(v22 - 5592) + 520LL))(
                      v22 - 5592)) {
          *(float*)(a1 + 5936) = (*(float (**)(__int64))(
              *(_QWORD*)(v22 - 5592) + 520LL))(v22 - 5592);
        }
      }
    }
    ++v18;
    v17 += 16;
  } while ((__int64)v18 < *(int*)(*(_QWORD*)(a1 + 6096) + 24LL));
  if ((v19 & 1) == 0) {
    if ((v20 & 1) != 0) {
      return;
    }
    goto LABEL_40;
  }
  if (!snd_Param_isEnvelopeReleased(a1 + 40) &&
      !snd_Param_isEnvelopeFading(a1 + 40) &&
      !snd_Param_isEnvelopeEnded(a1 + 40) &&
      *(int*)(*(_QWORD*)(a1 + 6096) + 24LL) >= 1) {
    v24 = 0;
    v25 = 0;
    do {
      v26 = snd_fnd_WeakHandle_get(**(_QWORD**)(a1 + 6104) + v24);
      if (v26 == 0 ||
          (v27 = v26, ((*(__int64 (**)(__int64))(*(_QWORD*)(v26 - 5592) +
                                                 376LL))(v26 - 5592) &
                       1) == 0) ||
          (*(_BYTE*)(v27 + 305) & 1) != 0 ||
          snd_Param_isEnvelopeReleased(v27 - 5552)) {
        if ((*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 6104) + 24LL) +
                        8 * (v25 >> 6)) &
             (1LL << v25)) != 0) {
          SeqVoice_1305a0(
              (void*)((__int64)v29), a1, v25,
              *(_QWORD*)(*(_QWORD*)(a1 + 6088) + 680LL) +
                  664LL * *(unsigned __int8*)(**(_QWORD**)(a1 + 6096) + v25),
              *(_QWORD*)(*(_QWORD*)(a1 + 6096) + 48LL) +
                  104LL * *(unsigned __int8*)(**(_QWORD**)(a1 + 6096) + v25),
              &v30, 0);
          GameRoutine_112180_alt1(**(_QWORD**)(a1 + 6104) + v24, (__int64)v29);
          v28 = v30;
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 6104) + 48LL) +
                     8 * (v25 >> 6)) |= 1LL << v25;
          if (v28 > *(float*)(a1 + 5788)) {
            *(float*)(a1 + 5788) = v28;
          }
        }
      }
      ++v25;
      v24 += 16;
    } while ((__int64)v25 < *(int*)(*(_QWORD*)(a1 + 6096) + 24LL));
  }
}

__int64 GameHr_132040(__int64 a1, __int64 a2, const char* a3, __int64 a4)
{
  __int64* v7;
  __int64* v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  struct {
    __int64 v13;
    int v14;
  } v13_;

  snd_Obj_Obj((_QWORD*)a1, a2, (__int64)a3);
  Obj_1261b0(a1 + 40);
  v7 = GameData_2134248[0];
  *(_DWORD*)(a1 + 5600) = 0x2000;
  *(_QWORD*)(a1 + 5592) = v7 + 2;
  snd_HandlePtr_registerHandle(a1 + 5592);
  v8 = GameData_2134678;
  *(_QWORD*)(a1 + 5608) = 0;
  *(_QWORD*)(a1 + 5616) = 0;
  *(_QWORD*)(a1 + 5624) = 0;
  *(_QWORD*)(a1 + 5632) = 0;
  *(_QWORD*)(a1 + 5640) = 0;
  *(_QWORD*)(a1 + 5648) = 0;
  *(_QWORD*)(a1 + 5656) = 0;
  *(_QWORD*)(a1 + 5664) = 0;
  *(_QWORD*)(a1 + 5672) = 0;
  *(_QWORD*)(a1 + 5680) = 0;
  *(_QWORD*)(a1 + 5688) = 0;
  *(_QWORD*)(a1 + 5696) = 0;
  *(_QWORD*)(a1 + 5704) = 0;
  *(_QWORD*)(a1 + 5712) = 0;
  *(_QWORD*)(a1 + 5720) = 0;
  *(_QWORD*)a1 = v8 + 2;
  *(_QWORD*)(a1 + 40) = v8 + 23;
  *(_QWORD*)(a1 + 5592) = v8 + 164;
  GameRoutine_190020_alt1((__int64*)(a1 + 5624), &GameData_1a9f09e);
  *(_QWORD*)(a1 + 5664) = 0;
  *(_QWORD*)(a1 + 5656) = 0;
  *(_QWORD*)(a1 + 5648) = 0;
  *(_QWORD*)(a1 + 5672) = 1065353216;
  GameRoutine_190020_alt1((__int64*)(a1 + 5680), &GameData_1a9f09e);
  GameRoutine_190020_alt1((__int64*)(a1 + 5704), &GameData_1a9f09e);
  *(_QWORD*)(a1 + 5728) = 0;
  *(_DWORD*)(a1 + 5736) = 0x2000;
  *(_QWORD*)(a1 + 5744) = 0;
  *(_DWORD*)(a1 + 5752) = 0x2000;
  *(_QWORD*)(a1 + 5760) = 0;
  *(_DWORD*)(a1 + 5768) = 0x2000;
  *(_QWORD*)(a1 + 5776) = 0;
  *(_DWORD*)(a1 + 5784) = 0x2000;
  *(_QWORD*)(a1 + 5792) = 0;
  *(_QWORD*)(a1 + 5800) = 0;
  *(_QWORD*)(a1 + 5832) = 0;
  *(_QWORD*)(a1 + 5840) = 0;
  *(_QWORD*)(a1 + 5872) = 0;
  *(_QWORD*)(a1 + 5880) = 0;
  *(_QWORD*)(a1 + 5928) = 0;
  *(_QWORD*)(a1 + 5920) = 0;
  *(_QWORD*)(a1 + 5816) = a1 + 5792;
  *(_QWORD*)(a1 + 5824) = a1 + 5800;
  *(_QWORD*)(a1 + 5808) = 5632;
  *(_QWORD*)(a1 + 5864) = a1 + 5840;
  *(_QWORD*)(a1 + 5856) = a1 + 5832;
  *(_QWORD*)(a1 + 5904) = a1 + 5880;
  *(_QWORD*)(a1 + 5912) = 0;
  *(_WORD*)(a1 + 5944) = 0;
  *(_QWORD*)(a1 + 5960) = 0;
  *(_DWORD*)(a1 + 5968) = 0;
  *(_QWORD*)(a1 + 5848) = 6072;
  *(_QWORD*)(a1 + 5888) = 6072;
  *(_QWORD*)(a1 + 5896) = a1 + 5872;
  *(_QWORD*)(a1 + 5936) = 1;
  *(_QWORD*)(a1 + 5948) = 0;
  result = nn_os_InitializeMutex(a1 + 5944, true, 0);
  if (a4 != 0) {
    Crc32List_f01b0((_DWORD*)(a1 + 5624), a4);
    GameRoutine_a392e0_alt1(a1 + 5624, (__int64)"%s", a3);
    if (*(_DWORD*)(a1 + 5652) != 0) {
      v10 = Crc32List_11ed40(*(_QWORD*)(a1 + 32), (int*)(a1 + 5652));
      v13_.v13 = 0;
      v13_.v14 = 0x2000;
      if (v10 != 0) {
        v11 = v10 + 5592;
      }
      else {
        v11 = 0;
      }
      snd_fnd_WeakHandle_set((__int64)&v13_.v13, v11);
    }
    else {
      v12 = *(_QWORD*)(a1 + 32);
      v13_.v13 = 0;
      v13_.v14 = 0x2000;
      GameRoutine_112180_alt1((__int64)&v13_.v13, v12 + 3112);
    }
    return GameRoutine_112180_alt1(a1 + 5728, (__int64)&v13_.v13);
  }
  return result;
}

__int64 GameHr_13dd70(__int64 result, __int64 a2)
{
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = a2;
  *(_WORD*)(result + 64) = 0;
  *(_QWORD*)result = GameData_1f5ad78;
  *(_QWORD*)(result + 8) = 0;
  return result;
}

__int64 GameHr_13df20(__int64 a1)
{
  __int64 v2;

  v2 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 72, 32);
  GameRoutine_13dd70(v2, a1);
  GameData_2199028 = v2;
  return v2;
}

__int64 GameHr_13df80(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;

  if ((*(_BYTE*)(result + 64) & 1) == 0) {
    v1 = *(_QWORD*)(result + 8);
    v2 = *(_QWORD*)(result + 16);
    v3 = result;
    v4 = v1;
    if (v1 != v2) {
      do {
        v5 = *(_QWORD*)(v2 - 24);
        if (v5 != 0) {
          *(_QWORD*)(v2 - 16) = v5;
          result = (*(__int64 (**)(__int64))(*(_QWORD*)GameData_2198f88 +
                                             24LL))(GameData_2198f88);
        }
        v6 = v2 - 48;
        if ((*(_BYTE*)(v2 - 48) & 1) != 0) {
          result = (*(__int64 (**)(__int64, _QWORD))(
              *(_QWORD*)GameData_2198f88 + 24LL))(GameData_2198f88,
                                                  *(_QWORD*)(v2 - 32));
        }
        v2 -= 48;
      } while (v6 != v1);
      v4 = *(_QWORD*)(v3 + 8);
    }
    v7 = *(_QWORD*)(v3 + 24);
    *(_QWORD*)(v3 + 16) = v1;
    v8 = v1 - v4;
    v9 = v7 - v4;
    if (v7 - v4 <= v8) {
      goto LABEL_18;
    }
    if (0xAAAAAAAAAAAAAAABLL * ((__int64)v8 >> 4) - 0x555555555555556LL >=
        0xFAAAAAAAAAAAAAABLL) {
      result = (*(__int64 (**)(_QWORD, unsigned __int64, __int64))(
          **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], v8,
                                                   32);
      v4 = *(_QWORD*)(v3 + 8);
      v10 = result;
      if (v8 >= *(_QWORD*)(v3 + 24) - v4) {
        goto LABEL_16;
      }
    }
    else {
      v10 = 0;
      if (v8 >= v9) {
      LABEL_16:
        if (v10 != 0) {
          result = (*(__int64 (**)(_QWORD, __int64))(
              **(_QWORD**)GameData_212d480[0] + 24LL))(*GameData_212d480[0],
                                                       v10);
        }
      LABEL_18:
        *(_BYTE*)(v3 + 64) = 1;
        return result;
      }
    }
    v11 = v10 + v8;
    v12 = v10 + v8 + v4 - *(_QWORD*)(v3 + 16);
    result = GameRoutine_13ee20(v3 + 24);
    v10 = *(_QWORD*)(v3 + 8);
    *(_QWORD*)(v3 + 8) = v12;
    *(_QWORD*)(v3 + 16) = v11;
    *(_QWORD*)(v3 + 24) = v11;
    goto LABEL_16;
  }
  return result;
}

unsigned __int64* GameHr_13e2c0(unsigned __int64* result)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64* v4;
  __int64* v5;
  unsigned __int64* v6;
  unsigned __int64 v7;
  char* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;

  v1 = *result;
  v2 = result[2] - *result;
  v3 = result[1] - *result;
  if (v2 > v3) {
    v4 = result;
    v5 = GameData_212d480[0];
    if (0xCCCCCCCCCCCCCCCDLL * ((__int64)v3 >> 3) - 0x666666666666667LL >=
        0xF99999999999999ALL) {
      result = (unsigned __int64*)(*(
          __int64 (**)(_QWORD, unsigned __int64, __int64))(
          **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], v3,
                                                   32);
      v1 = *v4;
      v6 = result;
      if (v3 >= v4[2] - *v4) {
      LABEL_4:
        if (v6 == nullptr) {
          return result;
        }
        return (unsigned __int64*)(*(__int64 (**)(__int64))(*(_QWORD*)*v5 +
                                                            24LL))(*v5);
      }
    }
    else {
      v6 = nullptr;
      if (v3 >= v2) {
        goto LABEL_4;
      }
    }
    v7 = v4[1];
    v8 = (char*)v6 + v3;
    v9 = (unsigned __int64)v6 + v3 + v1 - v7;
    if (v1 != v7) {
      v10 = (unsigned __int64)v6 + v3 + v1 - v7;
      do {
        *(_QWORD*)v10 = 0;
        *(_DWORD*)(v10 + 8) = 0x2000;
        result = (unsigned __int64*)GameRoutine_112180(v10, v1);
        v11 = *(_QWORD*)(v1 + 16);
        *(_DWORD*)(v10 + 24) = *(_DWORD*)(v1 + 24);
        *(_QWORD*)(v10 + 16) = v11;
        *(_DWORD*)(v10 + 28) = *(_DWORD*)(v1 + 28);
        LODWORD(v11) = *(_DWORD*)(v1 + 32);
        v1 += 40LL;
        *(_DWORD*)(v10 + 32) = v11;
        v10 += 40LL;
      } while (v1 != v7);
      v1 = *v4;
    }
    *v4 = v9;
    v4[1] = (unsigned __int64)v8;
    v4[2] = (unsigned __int64)v8;
    if (v1 != 0) {
      return (unsigned __int64*)(*(__int64 (**)(__int64))(*(_QWORD*)*v5 +
                                                          24LL))(*v5);
    }
  }
  return result;
}

__int64 GameHr_13ec80(__int64 a1, _DWORD* a2, _QWORD* a3, _DWORD* a4)
{
  __int64 v4;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;

  *a3 = 0;
  *a4 = 0;
  v4 = *(_QWORD*)(a1 + 32);
  if (*(_QWORD*)(a1 + 40) == v4) {
    return 0;
  }
  v9 = 0;
  v10 = 0;
  while (1) {
    v11 = v4 + v9;
    if ((GameRoutine_1120d0(v4 + v9) & 1) != 0 && *(_DWORD*)(v11 + 28) == *a2 &&
        *(_DWORD*)(v11 + 32) == a2[1]) {
      break;
    }
    v4 = *(_QWORD*)(a1 + 32);
    ++v10;
    v9 += 40;
    if (v10 >= 0xCCCCCCCCCCCCCCCDLL * ((*(_QWORD*)(a1 + 40) - v4) >> 3)) {
      return 0;
    }
  }
  *a3 = *(_QWORD*)(v4 + v9 + 16);
  *a4 = *(_DWORD*)(v4 + v9 + 24);
  return 1;
}

__int64 GameHr_13ed60(__int64 a1, _DWORD* a2)
{
  __int64 v2;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;

  v2 = *(_QWORD*)(a1 + 32);
  if (*(_QWORD*)(a1 + 40) == v2) {
  LABEL_11:
    LODWORD(v6) = -1;
  }
  else {
    v5 = 0;
    v6 = 0;
    while (1) {
      v7 = v2 + v5;
      if ((GameRoutine_1120d0(v2 + v5) & 1) != 0 &&
          *(_DWORD*)(v7 + 28) == *a2 && *(_DWORD*)(v7 + 32) == a2[1]) {
        break;
      }
      v2 = *(_QWORD*)(a1 + 32);
      ++v6;
      v5 += 40;
      if (v6 >= 0xCCCCCCCCCCCCCCCDLL * ((*(_QWORD*)(a1 + 40) - v2) >> 3)) {
        goto LABEL_11;
      }
    }
  }
  return (unsigned int)v6;
}

__int64 GameHr_13fd90(__int64 result, long double a2)
{
  __int64 v2;

  if ((*(_BYTE*)(result + 5885) & 1) == 0) {
    v2 = result;
    GameRoutine_112080(result + 5864, a2);
    GameRoutine_146980(v2);
    GameRoutine_10d860(v2 + 3600, 7);
    result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v2 + 6136) + 104LL))(
        *(_QWORD*)(v2 + 6136));
    if ((result & 1) != 0) {
      return (*(__int64 (**)(_QWORD))(**(_QWORD**)(v2 + 6136) + 152LL))(
          *(_QWORD*)(v2 + 6136));
    }
  }
  return result;
}

__int64 GameHr_144cb0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5,
                      __int64 a6, __int64 a7, __int64 a8, __int64 a9)
{
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  unsigned __int8* v24;
  __int64* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  bool v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  bool v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  struct {
    __int64 v42;
    int v43;
  } v42_;

  Voice_1434a0(a1, a2, a4, *(_BYTE*)(a8 + 220), *(_DWORD*)(a8 + 212), a9);
  v42_.v42 = 0;
  v42_.v43 = 0x2000;
  v15 = GameData_21346c0[0] + 2;
  v16 = GameData_21346c0[0] + 103;
  *(_QWORD*)(a1 + 5592) = GameData_21346c0[0] + 244;
  *(_QWORD*)a1 = v15;
  *(_QWORD*)(a1 + 40) = v16;
  *(_DWORD*)(a1 + 5792) = 1;
  if (a3 != 0) {
    v17 = a3 + 5592;
  }
  else {
    v17 = 0;
  }
  snd_fnd_WeakHandle_set((__int64)&v42_.v42, v17);
  GameRoutine_112180_alt1(a1 + 5800, (__int64)&v42_.v42);
  v42_.v42 = 0;
  v42_.v43 = 0x2000;
  if (a7 != 0) {
    v18 = a7 + 5592;
  }
  else {
    v18 = 0;
  }
  snd_fnd_WeakHandle_set((__int64)&v42_.v42, v18);
  GameRoutine_112180_alt1(a1 + 5848, (__int64)&v42_.v42);
  *(_DWORD*)(a1 + 5920) = *(_DWORD*)(a8 + 208);
  v19 = GameRoutine_f5740(a5, (_QWORD*)(a1 + 5656));
  v20 = *(_QWORD*)(a1 + 5648);
  if (v19 != 0) {
    snd_data_f0230(v20, v19, nullptr);
    v21 = *(char**)(v19 + 24);
    if (v21 != nullptr) {
      GameRoutine_190200_alt1(*(_QWORD*)(a1 + 5648) + 80LL, v21);
    }
    v22 = *(_QWORD*)(a1 + 5648);
    if (a6 != 0) {
      goto LABEL_11;
    }
  LABEL_40:
    *(_DWORD*)(v22 + 24) = *a5;
    *(_DWORD*)(v22 + 28) = a5[1];
    goto LABEL_41;
  }
  *(_DWORD*)(v20 + 56) = *a5;
  *(_DWORD*)(v20 + 60) = a5[1];
  v23 = *(_QWORD*)(a1 + 5648);
  *(_DWORD*)(v23 + 104) = *a5;
  *(_DWORD*)(v23 + 108) = a5[1];
  if (a6 != 0) {
    v24 = (unsigned __int8*)(a6 + 80);
    v25 = (__int64*)(*(_QWORD*)(a1 + 5648) + 32LL);
    if (v25 != (__int64*)(a6 + 80)) {
      v26 = *v24;
      if ((*(_BYTE*)v25 & 1) == 0) {
        if ((v26 & 1) != 0) {
          GameRoutine_a3a3a0_alt1(v25, *(_QWORD*)(a6 + 96),
                                  *(_QWORD*)(a6 + 88));
          v29 = *(__int64**)(a1 + 5648);
          if (v29 == (__int64*)a6) {
            goto LABEL_39;
          }
        }
        else {
          v27 = *(_QWORD*)v24;
          v28 = *(_QWORD*)(a6 + 96);
          *(_QWORD*)(*(_QWORD*)(a1 + 5648) + 40LL) = *(_QWORD*)(a6 + 88);
          v25[2] = v28;
          *v25 = v27;
          v29 = *(__int64**)(a1 + 5648);
          if (v29 == (__int64*)a6) {
            goto LABEL_39;
          }
        }
        goto LABEL_26;
      }
      v30 = (v26 & 1) == 0;
      v31 = v26 >> 1;
      if (v30) {
        v32 = a6 + 81;
      }
      else {
        v32 = *(_QWORD*)(a6 + 96);
      }
      if (v30) {
        v33 = v31;
      }
      else {
        v33 = *(_QWORD*)(a6 + 88);
      }
      GameRoutine_a3a260_alt1(v25, v32, v33);
    }
    v29 = *(__int64**)(a1 + 5648);
    if (v29 == (__int64*)a6) {
      goto LABEL_39;
    }
  LABEL_26:
    v34 = *v24;
    if ((v29[10] & 1) != 0) {
      v37 = (v34 & 1) == 0;
      v38 = v34 >> 1;
      if (v37) {
        v39 = a6 + 81;
      }
      else {
        v39 = *(_QWORD*)(a6 + 96);
      }
      if (v37) {
        v40 = v38;
      }
      else {
        v40 = *(_QWORD*)(a6 + 88);
      }
      GameRoutine_a3a260_alt1(v29 + 10, v39, v40);
    }
    else if ((v34 & 1) != 0) {
      GameRoutine_a3a3a0_alt1(v29 + 10, *(_QWORD*)(a6 + 96),
                              *(_QWORD*)(a6 + 88));
    }
    else {
      v35 = *(_QWORD*)v24;
      v36 = *(_QWORD*)(a6 + 96);
      v29[11] = *(_QWORD*)(a6 + 88);
      v29[12] = v36;
      v29[10] = v35;
    }
  }
LABEL_39:
  *(_BYTE*)(a1 + 5895) = 1;
  v22 = *(_QWORD*)(a1 + 5648);
  if (a6 == 0) {
    goto LABEL_40;
  }
LABEL_11:
  GameRoutine_f1b80_alt1((__int64*)v22, (__int64*)a6);
LABEL_41:
  Voice_143700(a1, a8);
  Voice_143d90(a1, a8);
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 784LL))(a1);
}

__int64 GameHr_14ab40(__int64* a1, const char* a2)
{
  __int64 v4;
  __int64 result;
  int v6;
  int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  char v15;
  struct {
    __int64 v16[2];
    __int64 v17;
  } v16_;
  __int64* v18;

  GameRoutine_190020_alt1(v16_.v16, a2);
  v4 = GameRoutine_14b260_alt1((__int64)(a1 + 12), (unsigned __int8*)v16_.v16);
  if ((v16_.v16[0] & 1) != 0) {
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0], v16_.v17);
  }
  if (a1 + 13 != (__int64*)v4) {
    return *(_QWORD*)(v4 + 56);
  }
  v6 = *((_DWORD*)a1 + 22);
  if (v6 == 0) {
    return 0;
  }
  v7 = *((_DWORD*)a1 + 21);
  if (v6 <= v7) {
  LABEL_15:
    GameRoutine_190020_alt1(v16_.v16, a2);
    v18 = v16_.v16;
    v14 =
        GameRoutine_14b380_alt1((__int64**)a1 + 12, (unsigned __int8*)v16_.v16,
                                (__int64)std___1_piecewise_construct_ptr, &v18);
    v15 = v16_.v16[0];
    v14[7] = 0;
    if ((v15 & 1) != 0) {
      (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
          *snd_g_memory_ptr[0], v16_.v17);
    }
    return 0;
  }
  v8 = *a1;
  v9 = v6 - v7;
  v10 = *(_QWORD*)(a1[7] + 24) + *a1;
  v11 = (_QWORD*)(a1[9] + 24LL * v7 + 8);
  while (1) {
    v12 = *((unsigned int*)v11 - 2);
    if ((_DWORD)v12 != 0 && (*((_BYTE*)v11 - 4) & 0xF0) == 0x10 &&
        v11[1] != 0 && strcmp(a2, (const char*)(v10 + v12)) == 0) {
      break;
    }
    --v9;
    v11 += 3;
    if (v9 == 0) {
      goto LABEL_15;
    }
  }
  v13 = *v11 + v8 +
        *(_QWORD*)(a1[1] +
                   ((unsigned __int64)*((unsigned __int16*)v11 - 1) << 6) + 24);
  GameRoutine_190020_alt1(v16_.v16, a2);
  v18 = v16_.v16;
  GameRoutine_14b380_alt1((__int64**)a1 + 12, (unsigned __int8*)v16_.v16,
                          (__int64)std___1_piecewise_construct_ptr, &v18)[7] =
      v13;
  result = v13;
  if ((v16_.v16[0] & 1) != 0) {
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        (void*)(*(_QWORD**)snd_g_memory_ptr[0]), *snd_g_memory_ptr[0],
        v16_.v17);
    return v13;
  }
  return result;
}

__int64* GameHr_14b380(__int64** a1, unsigned __int8* a2, __int64 a3,
                       __int64** a4)
{
  __int64* v4;
  __int64* v5;
  unsigned __int64 v8;
  bool v9;
  unsigned __int64 v10;
  unsigned __int8* v11;
  unsigned __int64 v12;
  __int64* v13;
  unsigned __int64 v14;
  bool v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  __int64* v22;
  __int64* v23;
  __int64* v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;

  v5 = (__int64*)(a1 + 1);
  v4 = a1[1];
  if (v4 == nullptr) {
    v13 = (__int64*)(a1 + 1);
    goto LABEL_29;
  }
  v8 = *a2;
  v9 = (v8 & 1) == 0;
  v10 = v8 >> 1;
  if (v9) {
    v11 = a2 + 1;
  }
  else {
    v11 = *((unsigned __int8**)a2 + 2);
  }
  if (v9) {
    v12 = v10;
  }
  else {
    v12 = *((_QWORD*)a2 + 1);
  }
  do {
    while (1) {
      v13 = v4;
      v14 = *((unsigned __int8*)v4 + 32);
      v15 = (v14 & 1) == 0;
      v16 = v14 >> 1;
      v17 = v15 ? v16 : v13[5];
      v18 = v15 ? (__int64)v13 + 33 : v13[6];
      v19 = v17 >= v12 ? v12 : v17;
      v20 = GameRoutine_1a09cf0(v11, v18, v19);
      if (v20 != 0) {
        break;
      }
      if (v12 >= v17) {
        goto LABEL_22;
      }
    LABEL_8:
      v4 = (__int64*)*v13;
      v5 = v13;
      if (*v13 == 0) {
        goto LABEL_29;
      }
    }
    if (v20 < 0) {
      goto LABEL_8;
    }
  LABEL_22:
    v21 = GameRoutine_1a09cf0(v18, v11, v19);
    if (v21 != 0) {
      if ((v21 & 0x80000000) == 0) {
        return v13;
      }
    }
    else if (v17 >= v12) {
      return v13;
    }
    v4 = (__int64*)v13[1];
  } while (v4 != nullptr);
  v5 = v13 + 1;
LABEL_29:
  v22 = v13;
  v23 = (__int64*)(*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 64, 32);
  v24 = *a4;
  v13 = v23;
  v25 = v23;
  v26 = **a4;
  v27 = (*a4)[2];
  v23[5] = (*a4)[1];
  v23[6] = v27;
  v23[4] = v26;
  v24[1] = 0;
  v24[2] = 0;
  *v24 = 0;
  v23[7] = 0;
  *v23 = 0;
  v23[1] = 0;
  v23[2] = (__int64)v22;
  *v5 = (__int64)v23;
  v28 = (__int64*)**a1;
  if (v28 != nullptr) {
    *a1 = v28;
    v25 = (_QWORD*)*v5;
  }
  GameRoutine_60abc0(a1[1], v25);
  a1[2] = (__int64*)((char*)a1[2] + 1);
  return v13;
}

__int64 GameHr_14b510(__int64 result)
{
  *(_BYTE*)(result + 8) = 1;
  *(_QWORD*)(result + 12) = 0;
  *(_QWORD*)(result + 20) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)result = GameData_1f5c290;
  *(_QWORD*)(result + 28) = 0xFFFFFFFF00000000LL;
  return result;
}

__int64 GameHr_14b7a0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v2 = GameData_21347d0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_BYTE*)(a1 + 120) = 0;
  *(_DWORD*)(a1 + 8) = 0;
  v3 = a1 + 8;
  *(_QWORD*)a1 = v2 + 16;
  *(_QWORD*)(a1 + 48) = -1;
  *(_QWORD*)(a1 + 56) = -1;
  GameRoutine_164030(a1 + 136);
  *(_BYTE*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_BYTE*)(a1 + 304) = 0;
  *(_BYTE*)(a1 + 316) = 0;
  *(_DWORD*)(a1 + 320) = 0;
  *(_BYTE*)(a1 + 324) = 0;
  *(_BYTE*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 284) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 308) = 0x7F00000000LL;
  *(_BYTE*)(a1 + 368) = 1;
  *(_DWORD*)(a1 + 372) = 1;
  GameRoutine_190020(a1 + 376, &GameData_1a9f09e);
  return GameRoutine_1a0ba50(v3, 0, 368, v4, v5, v6);
}

__int64 GameHr_14bf70(__int64 result)
{
  *(_DWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0xFFFFFFFFLL;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 45) = 0;
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  *(_BYTE*)(result + 72) = 0;
  *(_QWORD*)result = GameData_1f5c3e0;
  return result;
}

__int64 GameHr_14e040(__int64 result, __int64 a2, int a3, int a4)
{
  *(_DWORD*)(result + 16) = a4;
  *(_DWORD*)(result + 20) = a3;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)result = GameData_1f5c628;
  *(_QWORD*)(result + 8) = a2;
  return result;
}

__int64 GameHr_14e0a0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;

  *(_QWORD*)(a1 + 28) = 0;
  *(_QWORD*)(a1 + 36) = 0;
  *(_QWORD*)(a1 + 16) = 0xFFFFFFFF00000001LL;
  *(_QWORD*)(a1 + 41) = 0;
  *(_DWORD*)(a1 + 24) = 2;
  *(_QWORD*)a1 = GameData_1f5c648;
  *(_QWORD*)(a1 + 8) = 0x10000BB80LL;
  GameRoutine_1a0ba50(a1 + 56, 0, 1044, a4, a5, a6);
  GameRoutine_1a0ba50(a1 + 1104, 0, 1036, v7, v8, v9);
  GameRoutine_1a0ba50(a1 + 2144, 0, 1036, v10, v11, v12);
  result = GameRoutine_1a0ba50(a1 + 3184, 0, 1036, v13, v14, v15);
  *(_DWORD*)(a1 + 40) = 0;
  *(_DWORD*)(a1 + 32) = 1065353216;
  return result;
}

__int64 GameHr_14f0a0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5)
{
  __int64* v7;
  __int64* v8;
  _QWORD* v9;
  __int64* v10;
  __int64 v11;
  void (***v12)(_QWORD);
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  GameRoutine_167b80();
  v7 = GameData_2134828[0];
  *(_QWORD*)(a1 + 5680) = 0;
  *(_QWORD*)(a1 + 5688) = 0;
  *(_QWORD*)a1 = v7 + 2;
  *(_QWORD*)(a1 + 40) = v7 + 29;
  *(_QWORD*)(a1 + 5592) = v7 + 170;
  v8 = GameData_212d480[0];
  v9 = (_QWORD*)(*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 24, 32);
  v10 = GameData_2134820[0];
  v9[2] = 0;
  *v9 = v10 + 2;
  v9[1] = 0;
  *(_QWORD*)(a1 + 5624) = v9;
  v11 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v8 + 16LL))(
      *v8, 200, 32);
  GameRoutine_167d30();
  v12 = (void (***)(_QWORD))v9[2];
  v9[2] = v11;
  if (v12 != nullptr) {
    (**v12)(v12);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v8 + 24LL))(*v8, v12);
  }
  GameRoutine_2af740(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL),
                     *(unsigned int*)(a1 + 5648));
  GameRoutine_2af6c0(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL),
                     *(unsigned int*)(a1 + 5644));
  v13 = GameRoutine_27dd70(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL));
  *(_QWORD*)(a1 + 5656) = v13;
  *(_QWORD*)(a1 + 5664) = (*(__int64 (**)(__int64, __int64, _QWORD))(
      *(_QWORD*)GameData_2199048 + 344LL))(GameData_2199048, v13, 0);
  v14 = GameRoutine_1a0bce0();
  if ((v14 & 1) == 0) {
    v16 = GameRoutine_1a0a590(v14);
  LABEL_7:
    GameRoutine_1a0a590(v16);
    __udf(0);
  }
  *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL) + 192LL) =
      *(_DWORD*)(a1 + 5644);
  *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL) + 196LL) = 48000;
  (*(void (**)(__int64, __int64, float))(*(_QWORD*)a1 + 192LL))(a1, a5, 1.0);
  v15 = GameRoutine_167eb0(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL));
  *(_QWORD*)(a1 + 5680) = v15;
  *(_QWORD*)(a1 + 5688) = (*(__int64 (**)(__int64, __int64, _QWORD))(
      *(_QWORD*)GameData_2199048 + 344LL))(GameData_2199048, v15, 0);
  v16 = GameRoutine_1a0bce0();
  if ((v16 & 1) == 0) {
    goto LABEL_7;
  }
  GameRoutine_167f00(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL),
                     *(_QWORD*)(a1 + 5688), *(_QWORD*)(a1 + 5680));
  return GameRoutine_2af820(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL), 1);
}

__int64 GameHr_14fe10(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5)
{
  __int64* v7;
  __int64* v8;
  _QWORD* v9;
  __int64* v10;
  __int64 v11;
  void (***v12)(_QWORD);
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  GameRoutine_168190();
  v7 = GameData_2134868[0];
  *(_QWORD*)(a1 + 5680) = 0;
  *(_QWORD*)(a1 + 5688) = 0;
  *(_QWORD*)a1 = v7 + 2;
  *(_QWORD*)(a1 + 40) = v7 + 29;
  *(_QWORD*)(a1 + 5592) = v7 + 170;
  v8 = GameData_212d480[0];
  v9 = (_QWORD*)(*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 24, 32);
  v10 = GameData_2134820[0];
  v9[2] = 0;
  *v9 = v10 + 2;
  v9[1] = 0;
  *(_QWORD*)(a1 + 5624) = v9;
  v11 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v8 + 16LL))(
      *v8, 200, 32);
  GameRoutine_168340();
  v12 = (void (***)(_QWORD))v9[2];
  v9[2] = v11;
  if (v12 != nullptr) {
    (**v12)(v12);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v8 + 24LL))(*v8, v12);
  }
  GameRoutine_2af740(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL),
                     *(unsigned int*)(a1 + 5648));
  GameRoutine_2af6c0(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL),
                     *(unsigned int*)(a1 + 5644));
  v13 = GameRoutine_27dd70(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL));
  *(_QWORD*)(a1 + 5656) = v13;
  *(_QWORD*)(a1 + 5664) = (*(__int64 (**)(__int64, __int64, _QWORD))(
      *(_QWORD*)GameData_2199048 + 344LL))(GameData_2199048, v13, 0);
  v14 = GameRoutine_1a0bce0();
  if ((v14 & 1) == 0) {
    v16 = GameRoutine_1a0a590(v14);
  LABEL_7:
    GameRoutine_1a0a590(v16);
    __udf(0);
  }
  *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL) + 192LL) =
      *(_DWORD*)(a1 + 5644);
  *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL) + 196LL) = 48000;
  (*(void (**)(__int64, __int64, float))(*(_QWORD*)a1 + 192LL))(a1, a5, 1.0);
  v15 = GameRoutine_1684b0(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL));
  *(_QWORD*)(a1 + 5680) = v15;
  *(_QWORD*)(a1 + 5688) = (*(__int64 (**)(__int64, __int64, _QWORD))(
      *(_QWORD*)GameData_2199048 + 344LL))(GameData_2199048, v15, 0);
  v16 = GameRoutine_1a0bce0();
  if ((v16 & 1) == 0) {
    goto LABEL_7;
  }
  GameRoutine_168500(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL),
                     *(_QWORD*)(a1 + 5688), *(_QWORD*)(a1 + 5680));
  return GameRoutine_2af820(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL), 1);
}

__int64 GameHr_1509b0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      unsigned int* a5)
{
  __int64* v7;
  __int64* v8;
  _QWORD* v9;
  __int64* v10;
  __int64 v11;
  void (***v12)(_QWORD);
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v18;
  _QWORD* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  GameRoutine_1687a0();
  v7 = GameData_2134878[0];
  *(_QWORD*)(a1 + 5680) = 0;
  *(_QWORD*)(a1 + 5688) = 0;
  *(_QWORD*)a1 = v7 + 2;
  *(_QWORD*)(a1 + 40) = v7 + 29;
  *(_QWORD*)(a1 + 5592) = v7 + 170;
  v8 = GameData_212d480[0];
  v9 = (_QWORD*)(*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 24, 32);
  v10 = GameData_2134820[0];
  v9[2] = 0;
  *v9 = v10 + 2;
  v9[1] = 0;
  *(_QWORD*)(a1 + 5624) = v9;
  v11 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v8 + 16LL))(
      *v8, 192, 32);
  GameRoutine_168950();
  v12 = (void (***)(_QWORD))v9[2];
  v9[2] = v11;
  if (v12 != nullptr) {
    (**v12)(v12);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v8 + 24LL))(*v8, v12);
  }
  GameRoutine_2af740(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL),
                     *(unsigned int*)(a1 + 5648));
  GameRoutine_2af6c0(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL),
                     *(unsigned int*)(a1 + 5644));
  v13 = GameRoutine_27dd70(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL));
  *(_QWORD*)(a1 + 5656) = v13;
  *(_QWORD*)(a1 + 5664) = (*(__int64 (**)(__int64, __int64, _QWORD))(
      *(_QWORD*)GameData_2199048 + 344LL))(GameData_2199048, v13, 0);
  v14 = GameRoutine_1a0bce0();
  if ((v14 & 1) != 0) {
    *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL) + 176LL) =
        *(_DWORD*)(a1 + 5644);
    *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL) + 180LL) = 48000;
    (*(void (**)(__int64, unsigned int*, float))(*(_QWORD*)a1 + 192LL))(a1, a5,
                                                                        1.0);
    v15 = GameRoutine_168ad0(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL), *a5);
    *(_QWORD*)(a1 + 5680) = v15;
    *(_QWORD*)(a1 + 5688) = (*(__int64 (**)(__int64, __int64, _QWORD))(
        *(_QWORD*)GameData_2199048 + 344LL))(GameData_2199048, v15, 0);
    v16 = GameRoutine_1a0bce0();
    if ((v16 & 1) != 0) {
      GameRoutine_168b30(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL),
                         *(_QWORD*)(a1 + 5688), *(_QWORD*)(a1 + 5680));
      return GameRoutine_2af820(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL), 1);
    }
  }
  else {
    v16 = GameRoutine_1a0a590(v14);
  }
  v18 = (_QWORD*)GameRoutine_1a0a590(v16);
  v19 = v18;
  v20 = GameData_2134878[0];
  v21 = v18[703];
  *v18 = GameData_2134878[0] + 2;
  v18[5] = v20 + 29;
  v18[699] = v20 + 170;
  if (v21 != 0) {
    v18[703] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v21 + 8LL))(v21);
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)GameData_212d480[0] + 24LL))(
        *GameData_212d480[0], v21);
  }
  if (v19[708] != 0) {
    v22 = GameData_2199048;
    v19[708] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v22 + 360LL))(v22);
  }
  if (v19[711] != 0) {
    v23 = GameData_2199048;
    v19[711] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v23 + 360LL))(v23);
  }
  return GameRoutine_1679b0(v19);
}

__int64 GameHr_1512a0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      signed int* a5)
{
  __int64* v7;
  __int64* v8;
  _QWORD* v9;
  __int64* v10;
  __int64 v11;
  void (***v12)(_QWORD);
  __int64 v13;
  __int64 v14;
  signed int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  GameRoutine_168dd0();
  v7 = GameData_2134888[0];
  *(_QWORD*)(a1 + 5680) = 0;
  *(_QWORD*)(a1 + 5688) = 0;
  *(_QWORD*)a1 = v7 + 2;
  *(_QWORD*)(a1 + 40) = v7 + 29;
  *(_QWORD*)(a1 + 5592) = v7 + 170;
  v8 = GameData_212d480[0];
  v9 = (_QWORD*)(*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 24, 32);
  v10 = GameData_2134820[0];
  v9[2] = 0;
  *v9 = v10 + 2;
  v9[1] = 0;
  *(_QWORD*)(a1 + 5624) = v9;
  v11 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v8 + 16LL))(
      *v8, 200, 32);
  GameRoutine_168f80();
  v12 = (void (***)(_QWORD))v9[2];
  v9[2] = v11;
  if (v12 != nullptr) {
    (**v12)(v12);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v8 + 24LL))(*v8, v12);
  }
  GameRoutine_2af740(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL),
                     *(unsigned int*)(a1 + 5648));
  GameRoutine_2af6c0(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL),
                     *(unsigned int*)(a1 + 5644));
  v13 = GameRoutine_27dd70(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL));
  *(_QWORD*)(a1 + 5656) = v13;
  *(_QWORD*)(a1 + 5664) = (*(__int64 (**)(__int64, __int64, _QWORD))(
      *(_QWORD*)GameData_2199048 + 344LL))(GameData_2199048, v13, 0);
  v14 = GameRoutine_1a0bce0();
  if ((v14 & 1) == 0) {
    v18 = GameRoutine_1a0a590(v14);
    goto LABEL_10;
  }
  *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL) + 184LL) =
      *(_DWORD*)(a1 + 5644);
  *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL) + 188LL) = 48000;
  (*(void (**)(__int64, signed int*, float))(*(_QWORD*)a1 + 192LL))(a1, a5,
                                                                    1.0);
  v15 = a5[1];
  if (*a5 <= v15) {
    v16 = (unsigned int)v15;
  }
  else {
    v16 = (unsigned int)*a5;
  }
  v17 = GameRoutine_1690f0(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL), v16);
  *(_QWORD*)(a1 + 5680) = v17;
  *(_QWORD*)(a1 + 5688) = (*(__int64 (**)(__int64, __int64, _QWORD))(
      *(_QWORD*)GameData_2199048 + 344LL))(GameData_2199048, v17, 0);
  v18 = GameRoutine_1a0bce0();
  if ((v18 & 1) == 0) {
  LABEL_10:
    GameRoutine_1a0a590(v18);
    __udf(0);
  }
  GameRoutine_169150(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL),
                     *(_QWORD*)(a1 + 5688), *(_QWORD*)(a1 + 5680));
  return GameRoutine_2af820(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 16LL), 1);
}

__int64 GameHr_151730(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5)
{
  __int64* v7;
  __int64* v8;
  _QWORD* v9;
  __int64* v10;
  __int64 v11;
  void (***v12)(_QWORD);
  int v13;
  unsigned int v14;
  __int64 v15;
  __int64 result;

  GameRoutine_179a60();
  v7 = GameData_2134890[0];
  *(_QWORD*)a1 = GameData_2134890[0] + 2;
  *(_QWORD*)(a1 + 40) = v7 + 29;
  *(_QWORD*)(a1 + 5592) = v7 + 170;
  v8 = GameData_212d480[0];
  v9 = (_QWORD*)(*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 24, 32);
  v10 = GameData_2134820[0];
  v9[2] = 0;
  *v9 = v10 + 2;
  v9[1] = 0;
  *(_QWORD*)(a1 + 5624) = v9;
  v11 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v8 + 16LL))(
      *v8, 128, 32);
  GameRoutine_179c10();
  v12 = (void (***)(_QWORD))v9[1];
  v9[1] = v11;
  if (v12 != nullptr) {
    (**v12)(v12);
    (*(void (**)(__int64, void (***)(_QWORD)))(*(_QWORD*)*v8 + 24LL))(*v8, v12);
  }
  GameRoutine_17a4f0(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 8LL), 1);
  v13 = *(_DWORD*)(a1 + 5644);
  if (v13 == 4) {
    v14 = 2;
  }
  else {
    v14 = 1;
  }
  if (v13 == 6) {
    v15 = 3;
  }
  else {
    v15 = v14;
  }
  GameRoutine_17a0d0(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 8LL), v15);
  GameRoutine_2afde0(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 8LL), 1);
  (*(void (**)(__int64, __int64, float))(*(_QWORD*)a1 + 192LL))(a1, a5, 1.0);
  result =
      (*(__int64 (**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 5624) + 8LL) +
                               16LL))(*(_QWORD*)(*(_QWORD*)(a1 + 5624) + 8LL));
  *(_QWORD*)(a1 + 5656) = result;
  if (result != 0) {
    result = (*(__int64 (**)(__int64, __int64, _QWORD))(
        *(_QWORD*)GameData_2199048 + 344LL))(GameData_2199048, result, 0);
    *(_QWORD*)(a1 + 5664) = result;
  }
  return result;
}

__int64 GameHr_157010(__int64 a1)
{
  char v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  void* v7;
  void* v8;
  _QWORD v10[6];
  struct {
    _DWORD v11[19];
    char v12;
    char gap125_[2];
    char v13;
    char gap128_[4];
    int v14;
    int v15;
    char gap140_[9];
    char v16;
    char gap150_[26];
    char v17;
    char v18;
    char gap178_[1];
    char v19;
  } v11_;

  BaseNx_27cc60((__int64)v11_.v11);
  v11_.v14 =
      (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 40LL))(snd_g_proxy);
  v11_.v15 =
      (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 48LL))(snd_g_proxy);
  v11_.v11[0] =
      (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 56LL))(snd_g_proxy);
  v11_.v11[7] =
      (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 64LL))(snd_g_proxy);
  v11_.v11[6] =
      (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 72LL))(snd_g_proxy);
  v11_.v11[12] =
      (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 80LL))(snd_g_proxy);
  v11_.v11[13] =
      (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 88LL))(snd_g_proxy);
  v11_.v11[16] = 48000;
  v11_.v11[18] =
      (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 160LL))(snd_g_proxy);
  v11_.v18 = 1;
  v2 = (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 248LL))(snd_g_proxy);
  v11_.v17 = 0;
  v11_.v12 = 0;
  v11_.v13 = 0;
  v11_.v19 = v2 & 1;
  v11_.v16 =
      (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 200LL))(snd_g_proxy) &
      1;
  v3 = GameHr_27cce0((__int64)v11_.v11);
  v4 = snd_g_memory_ptr[0];
  v5 = (*(__int64 (**)(_QWORD, __int64, __int64))(
      **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], v3, 4);
  v6 = *(_QWORD*)(a1 + 4248);
  *(_QWORD*)(a1 + 4248) = v5;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v4 + 24LL))(*v4);
    v5 = *(_QWORD*)(a1 + 4248);
  }
  v10[0] = v5;
  v10[1] = v3;
  if ((GameHr_27d960((__int64)v11_.v11, (__int64)v10) & 1) == 0) {
    *(_BYTE*)(a1 + 17) = 1;
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)snd_g_proxy + 216LL))(snd_g_proxy) &
       1) != 0) {
    *GameData_2134920 = 1;
  }
  v7 = SoundVoiceNX_14e360();
  BaseNx_28b600((__int64)v7, 0, 0x1.0000000000000p+0f);
  v8 = SoundVoiceNX_14e360();
  return SoundVoiceNx_2b4d60((__int64)v8 + 1384, 0x1.0000000000000p+0f);
}

__int64 GameHr_158920(__int64 a1)
{
  _BYTE* v2;
  __int64* v3;
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
  char v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  int v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  int v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  int v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  int v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v102;

  v2 = (_BYTE*)(a1 + 4296);
  *(_QWORD*)a1 = GameData_1f65498;
  GameRoutine_15a000();
  (*(void (**)(__int64))(*(_QWORD*)a1 + 40LL))(a1);
  v3 = GameData_212d480[0];
  if (*(_QWORD*)(a1 + 4528) != 0) {
    v4 = *GameData_212d480[0];
    v5 = *(_QWORD*)(a1 + 4520);
    *(_QWORD*)(a1 + 4520) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v4 + 24LL))(v4, v5);
    v6 = *v3;
    v7 = *(_QWORD*)(a1 + 4528);
    *(_QWORD*)(a1 + 4528) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v6 + 24LL))(v6, v7);
    *(_DWORD*)(a1 + 4536) = 0;
  }
  v8 = *(_QWORD*)(a1 + 4608);
  v2[280] = 0;
  if (v8 != 0) {
    v9 = *v3;
    v10 = *(_QWORD*)(a1 + 4600);
    *(_QWORD*)(a1 + 4600) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v9 + 24LL))(v9, v10);
    v11 = *v3;
    v12 = *(_QWORD*)(a1 + 4608);
    *(_QWORD*)(a1 + 4608) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v11 + 24LL))(v11, v12);
    *(_DWORD*)(a1 + 4616) = 0;
  }
  v13 = *(_QWORD*)(a1 + 4688);
  v2[360] = 0;
  if (v13 != 0) {
    v14 = *v3;
    v15 = *(_QWORD*)(a1 + 4680);
    *(_QWORD*)(a1 + 4680) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v14 + 24LL))(v14, v15);
    v16 = *v3;
    v17 = *(_QWORD*)(a1 + 4688);
    *(_QWORD*)(a1 + 4688) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v16 + 24LL))(v16, v17);
    *(_DWORD*)(a1 + 4696) = 0;
  }
  v18 = *(_QWORD*)(a1 + 4768);
  v2[440] = 0;
  if (v18 != 0) {
    v19 = *v3;
    v20 = *(_QWORD*)(a1 + 4760);
    *(_QWORD*)(a1 + 4760) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v19 + 24LL))(v19, v20);
    v21 = *v3;
    v22 = *(_QWORD*)(a1 + 4768);
    *(_QWORD*)(a1 + 4768) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v21 + 24LL))(v21, v22);
    *(_DWORD*)(a1 + 4776) = 0;
  }
  v2[520] = 0;
  if (*(_QWORD*)(a1 + 4848) != 0) {
    v23 = *v3;
    v24 = *(_QWORD*)(a1 + 4840);
    *(_QWORD*)(a1 + 4840) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v23 + 24LL))(v23, v24);
    v25 = *v3;
    v26 = *(_QWORD*)(a1 + 4848);
    *(_QWORD*)(a1 + 4848) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v25 + 24LL))(v25, v26);
    *(_DWORD*)(a1 + 4856) = 0;
  }
  v27 = *(_QWORD*)(a1 + 4928);
  v2[600] = 0;
  if (v27 != 0) {
    v28 = *v3;
    v29 = *(_QWORD*)(a1 + 4920);
    *(_QWORD*)(a1 + 4920) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v28 + 24LL))(v28, v29);
    v30 = *v3;
    v31 = *(_QWORD*)(a1 + 4928);
    *(_QWORD*)(a1 + 4928) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v30 + 24LL))(v30, v31);
    *(_DWORD*)(a1 + 4936) = 0;
  }
  v32 = *(_BYTE*)(a1 + 261920);
  v2[680] = 0;
  if ((v32 & 1) != 0) {
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v3 + 24LL))(
        *v3, *(_QWORD*)(a1 + 261936));
    if ((*(_BYTE*)(a1 + 261896) & 1) == 0) {
    LABEL_15:
      if ((*(_BYTE*)(a1 + 261872) & 1) == 0) {
        goto LABEL_16;
      }
      goto LABEL_87;
    }
  }
  else if ((*(_BYTE*)(a1 + 261896) & 1) == 0) {
    goto LABEL_15;
  }
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v3 + 24LL))(
      *v3, *(_QWORD*)(a1 + 261912));
  if ((*(_BYTE*)(a1 + 261872) & 1) == 0) {
  LABEL_16:
    if ((*(_BYTE*)(a1 + 261848) & 1) == 0) {
      goto LABEL_17;
    }
    goto LABEL_88;
  }
LABEL_87:
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v3 + 24LL))(
      *v3, *(_QWORD*)(a1 + 261888));
  if ((*(_BYTE*)(a1 + 261848) & 1) == 0) {
  LABEL_17:
    if ((*(_BYTE*)(a1 + 261824) & 1) == 0) {
      goto LABEL_18;
    }
    goto LABEL_89;
  }
LABEL_88:
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v3 + 24LL))(
      *v3, *(_QWORD*)(a1 + 261864));
  if ((*(_BYTE*)(a1 + 261824) & 1) == 0) {
  LABEL_18:
    if ((*(_BYTE*)(a1 + 261800) & 1) == 0) {
      goto LABEL_19;
    }
    goto LABEL_90;
  }
LABEL_89:
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v3 + 24LL))(
      *v3, *(_QWORD*)(a1 + 261840));
  if ((*(_BYTE*)(a1 + 261800) & 1) == 0) {
  LABEL_19:
    if ((*(_BYTE*)(a1 + 261776) & 1) == 0) {
      goto LABEL_20;
    }
    goto LABEL_91;
  }
LABEL_90:
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v3 + 24LL))(
      *v3, *(_QWORD*)(a1 + 261816));
  if ((*(_BYTE*)(a1 + 261776) & 1) == 0) {
  LABEL_20:
    if ((*(_BYTE*)(a1 + 261752) & 1) == 0) {
      goto LABEL_21;
    }
    goto LABEL_92;
  }
LABEL_91:
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v3 + 24LL))(
      *v3, *(_QWORD*)(a1 + 261792));
  if ((*(_BYTE*)(a1 + 261752) & 1) == 0) {
  LABEL_21:
    if ((*(_BYTE*)(a1 + 261728) & 1) == 0) {
      goto LABEL_22;
    }
    goto LABEL_93;
  }
LABEL_92:
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v3 + 24LL))(
      *v3, *(_QWORD*)(a1 + 261768));
  if ((*(_BYTE*)(a1 + 261728) & 1) == 0) {
  LABEL_22:
    if ((*(_BYTE*)(a1 + 261704) & 1) == 0) {
      goto LABEL_23;
    }
    goto LABEL_94;
  }
LABEL_93:
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v3 + 24LL))(
      *v3, *(_QWORD*)(a1 + 261744));
  if ((*(_BYTE*)(a1 + 261704) & 1) == 0) {
  LABEL_23:
    if ((*(_BYTE*)(a1 + 261680) & 1) == 0) {
      goto LABEL_24;
    }
    goto LABEL_95;
  }
LABEL_94:
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v3 + 24LL))(
      *v3, *(_QWORD*)(a1 + 261720));
  if ((*(_BYTE*)(a1 + 261680) & 1) == 0) {
  LABEL_24:
    if ((*(_BYTE*)(a1 + 261656) & 1) == 0) {
      goto LABEL_25;
    }
    goto LABEL_96;
  }
LABEL_95:
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v3 + 24LL))(
      *v3, *(_QWORD*)(a1 + 261696));
  if ((*(_BYTE*)(a1 + 261656) & 1) == 0) {
  LABEL_25:
    if ((*(_BYTE*)(a1 + 261632) & 1) == 0) {
      goto LABEL_26;
    }
    goto LABEL_97;
  }
LABEL_96:
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v3 + 24LL))(
      *v3, *(_QWORD*)(a1 + 261672));
  if ((*(_BYTE*)(a1 + 261632) & 1) == 0) {
  LABEL_26:
    if ((*(_BYTE*)(a1 + 261608) & 1) == 0) {
      goto LABEL_27;
    }
    goto LABEL_98;
  }
LABEL_97:
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v3 + 24LL))(
      *v3, *(_QWORD*)(a1 + 261648));
  if ((*(_BYTE*)(a1 + 261608) & 1) == 0) {
  LABEL_27:
    if ((*(_BYTE*)(a1 + 261584) & 1) == 0) {
      goto LABEL_28;
    }
    goto LABEL_99;
  }
LABEL_98:
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v3 + 24LL))(
      *v3, *(_QWORD*)(a1 + 261624));
  if ((*(_BYTE*)(a1 + 261584) & 1) == 0) {
  LABEL_28:
    if ((*(_BYTE*)(a1 + 261560) & 1) == 0) {
      goto LABEL_30;
    }
    goto LABEL_29;
  }
LABEL_99:
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v3 + 24LL))(
      *v3, *(_QWORD*)(a1 + 261600));
  if ((*(_BYTE*)(a1 + 261560) & 1) != 0) {
  LABEL_29:
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)*v3 + 24LL))(
        *v3, *(_QWORD*)(a1 + 261576));
  }
LABEL_30:
  GameRoutine_164d90(a1 + 261536, *(_QWORD*)(a1 + 261544));
  v33 = (unsigned __int8)v2[680];
  *(_QWORD*)(a1 + 4904) = GameData_1f66600;
  v34 = *(_QWORD*)(a1 + 4928);
  if (v33 == 1) {
    if (v34 != 0) {
      v35 = *v3;
      v36 = *(_QWORD*)(a1 + 4920);
      *(_QWORD*)(a1 + 4920) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v35 + 24LL))(v35, v36);
      v37 = *v3;
      v38 = *(_QWORD*)(a1 + 4928);
      *(_QWORD*)(a1 + 4928) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v37 + 24LL))(v37, v38);
      v34 = *(_QWORD*)(a1 + 4928);
      *(_DWORD*)(a1 + 4936) = 0;
    }
    v2[680] = 0;
  }
  *(_QWORD*)(a1 + 4912) = GameData_1f66630;
  if (v34 != 0) {
    v39 = *v3;
    v40 = *(_QWORD*)(a1 + 4920);
    *(_QWORD*)(a1 + 4920) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v39 + 24LL))(v39, v40);
    v41 = *v3;
    v42 = *(_QWORD*)(a1 + 4928);
    *(_QWORD*)(a1 + 4928) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v41 + 24LL))(v41, v42);
    *(_DWORD*)(a1 + 4936) = 0;
  }
  GameRoutine_1a09f60(a1 + 4944);
  v43 = (unsigned __int8)v2[600];
  *(_QWORD*)(a1 + 4824) = GameData_1f665a0;
  v44 = *(_QWORD*)(a1 + 4848);
  if (v43 == 1) {
    if (v44 != 0) {
      v45 = *v3;
      v46 = *(_QWORD*)(a1 + 4840);
      *(_QWORD*)(a1 + 4840) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v45 + 24LL))(v45, v46);
      v47 = *v3;
      v48 = *(_QWORD*)(a1 + 4848);
      *(_QWORD*)(a1 + 4848) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v47 + 24LL))(v47, v48);
      v44 = *(_QWORD*)(a1 + 4848);
      *(_DWORD*)(a1 + 4856) = 0;
    }
    v2[600] = 0;
  }
  *(_QWORD*)(a1 + 4832) = GameData_1f665d0;
  if (v44 != 0) {
    v49 = *v3;
    v50 = *(_QWORD*)(a1 + 4840);
    *(_QWORD*)(a1 + 4840) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v49 + 24LL))(v49, v50);
    v51 = *v3;
    v52 = *(_QWORD*)(a1 + 4848);
    *(_QWORD*)(a1 + 4848) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v51 + 24LL))(v51, v52);
    *(_DWORD*)(a1 + 4856) = 0;
  }
  GameRoutine_1a09f60(a1 + 4864);
  v53 = (unsigned __int8)v2[520];
  *(_QWORD*)(a1 + 4744) = GameData_1f66540;
  v54 = *(_QWORD*)(a1 + 4768);
  if (v53 == 1) {
    if (v54 != 0) {
      v55 = *v3;
      v56 = *(_QWORD*)(a1 + 4760);
      *(_QWORD*)(a1 + 4760) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v55 + 24LL))(v55, v56);
      v57 = *v3;
      v58 = *(_QWORD*)(a1 + 4768);
      *(_QWORD*)(a1 + 4768) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v57 + 24LL))(v57, v58);
      v54 = *(_QWORD*)(a1 + 4768);
      *(_DWORD*)(a1 + 4776) = 0;
    }
    v2[520] = 0;
  }
  *(_QWORD*)(a1 + 4752) = GameData_1f66570;
  if (v54 != 0) {
    v59 = *v3;
    v60 = *(_QWORD*)(a1 + 4760);
    *(_QWORD*)(a1 + 4760) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v59 + 24LL))(v59, v60);
    v61 = *v3;
    v62 = *(_QWORD*)(a1 + 4768);
    *(_QWORD*)(a1 + 4768) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v61 + 24LL))(v61, v62);
    *(_DWORD*)(a1 + 4776) = 0;
  }
  GameRoutine_1a09f60(a1 + 4784);
  v63 = (unsigned __int8)v2[440];
  *(_QWORD*)(a1 + 4664) = GameData_1f664e0;
  v64 = *(_QWORD*)(a1 + 4688);
  if (v63 == 1) {
    if (v64 != 0) {
      v65 = *v3;
      v66 = *(_QWORD*)(a1 + 4680);
      *(_QWORD*)(a1 + 4680) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v65 + 24LL))(v65, v66);
      v67 = *v3;
      v68 = *(_QWORD*)(a1 + 4688);
      *(_QWORD*)(a1 + 4688) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v67 + 24LL))(v67, v68);
      v64 = *(_QWORD*)(a1 + 4688);
      *(_DWORD*)(a1 + 4696) = 0;
    }
    v2[440] = 0;
  }
  *(_QWORD*)(a1 + 4672) = GameData_1f66510;
  if (v64 != 0) {
    v69 = *v3;
    v70 = *(_QWORD*)(a1 + 4680);
    *(_QWORD*)(a1 + 4680) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v69 + 24LL))(v69, v70);
    v71 = *v3;
    v72 = *(_QWORD*)(a1 + 4688);
    *(_QWORD*)(a1 + 4688) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v71 + 24LL))(v71, v72);
    *(_DWORD*)(a1 + 4696) = 0;
  }
  GameRoutine_1a09f60(a1 + 4704);
  v73 = (unsigned __int8)v2[360];
  *(_QWORD*)(a1 + 4584) = GameData_1f66480;
  v74 = *(_QWORD*)(a1 + 4608);
  if (v73 == 1) {
    if (v74 != 0) {
      v75 = *v3;
      v76 = *(_QWORD*)(a1 + 4600);
      *(_QWORD*)(a1 + 4600) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v75 + 24LL))(v75, v76);
      v77 = *v3;
      v78 = *(_QWORD*)(a1 + 4608);
      *(_QWORD*)(a1 + 4608) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v77 + 24LL))(v77, v78);
      v74 = *(_QWORD*)(a1 + 4608);
      *(_DWORD*)(a1 + 4616) = 0;
    }
    v2[360] = 0;
  }
  *(_QWORD*)(a1 + 4592) = GameData_1f664b0;
  if (v74 != 0) {
    v79 = *v3;
    v80 = *(_QWORD*)(a1 + 4600);
    *(_QWORD*)(a1 + 4600) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v79 + 24LL))(v79, v80);
    v81 = *v3;
    v82 = *(_QWORD*)(a1 + 4608);
    *(_QWORD*)(a1 + 4608) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v81 + 24LL))(v81, v82);
    *(_DWORD*)(a1 + 4616) = 0;
  }
  GameRoutine_1a09f60(a1 + 4624);
  v83 = (unsigned __int8)v2[280];
  *(_QWORD*)(a1 + 4504) = GameData_1f66420;
  v84 = *(_QWORD*)(a1 + 4528);
  if (v83 == 1) {
    if (v84 != 0) {
      v85 = *v3;
      v86 = *(_QWORD*)(a1 + 4520);
      *(_QWORD*)(a1 + 4520) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v85 + 24LL))(v85, v86);
      v87 = *v3;
      v88 = *(_QWORD*)(a1 + 4528);
      *(_QWORD*)(a1 + 4528) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v87 + 24LL))(v87, v88);
      v84 = *(_QWORD*)(a1 + 4528);
      *(_DWORD*)(a1 + 4536) = 0;
    }
    v2[280] = 0;
  }
  *(_QWORD*)(a1 + 4512) = GameData_1f66450;
  if (v84 != 0) {
    v89 = *v3;
    v90 = *(_QWORD*)(a1 + 4520);
    *(_QWORD*)(a1 + 4520) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v89 + 24LL))(v89, v90);
    v91 = *v3;
    v92 = *(_QWORD*)(a1 + 4528);
    *(_QWORD*)(a1 + 4528) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v91 + 24LL))(v91, v92);
    *(_DWORD*)(a1 + 4536) = 0;
  }
  GameRoutine_1a09f60(a1 + 4544);
  v93 = *(_QWORD*)(a1 + 4480);
  *(_QWORD*)(a1 + 4480) = 0;
  if (v93 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
  }
  v94 = *(_QWORD*)(a1 + 4456);
  *(_QWORD*)(a1 + 4456) = 0;
  if (v94 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
  }
  if (v2[72] == 1) {
    GameRoutine_1a0a480(v2 + 72);
    if (*v2 != 1) {
    LABEL_72:
      v95 = *(_QWORD*)(a1 + 4288);
      *(_QWORD*)(a1 + 4288) = 0;
      if (v95 == 0) {
        goto LABEL_74;
      }
      goto LABEL_73;
    }
  }
  else if (*v2 != 1) {
    goto LABEL_72;
  }
  GameRoutine_1a0a480(v2);
  v102 = *(_QWORD*)(a1 + 4288);
  *(_QWORD*)(a1 + 4288) = 0;
  if (v102 != 0) {
  LABEL_73:
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
  }
LABEL_74:
  v96 = *(_QWORD*)(a1 + 4280);
  *(_QWORD*)(a1 + 4280) = 0;
  if (v96 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
  }
  v97 = *(_QWORD*)(a1 + 4272);
  *(_QWORD*)(a1 + 4272) = 0;
  if (v97 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
  }
  v98 = *(_QWORD*)(a1 + 4264);
  *(_QWORD*)(a1 + 4264) = 0;
  if (v98 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
  }
  v99 = *(_QWORD*)(a1 + 4256);
  *(_QWORD*)(a1 + 4256) = 0;
  if (v99 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
  }
  v100 = *(_QWORD*)(a1 + 4248);
  *(_QWORD*)(a1 + 4248) = 0;
  if (v100 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v3 + 24LL))(*v3);
  }
  GameRoutine_27bea0(a1 + 4152);
  GameRoutine_159820(a1 + 56);
  *(_QWORD*)a1 = GameData_1f65e80;
  return GameRoutine_1a09f60(a1 + 24);
}

#pragma GCC visibility pop
