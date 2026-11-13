#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 ExternalSoundPlayer_282c70(_QWORD, _QWORD);
__int64 GameRoutine_27c5a0(__int64 result, __int64);
__int64 GameRoutine_27c8a0(_QWORD, _QWORD);
__int64 GameRoutine_283d50(_QWORD);
__int64 GameRoutine_2a0820(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a0e80(_QWORD, _QWORD);
__int64 GameRoutine_2a1860(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_detail_UnexpectedDefaultImpl(_QWORD);
__int64 nn_diag_detail_AbortImpl_1a0a590(_QWORD);
__int64 rcContext_doStartTimer_283ce0(_QWORD);
__int64* GameRoutine_27bd30(__int64* result);
extern __int64 (*nn_atk_detail_BasicSound_vtable[])(void);
__int64 BasicSound_Unknown4(__int64 result);
__int64 BasicSound_2806e0(__int64 a1, int a2);
__int64 BasicSound_2807c0(__int64 a1, char a2);
__int64 BasicSound_280810(__int64 result, char a2, int a3);
__int64 BasicSound_280900(__int64 result, char a2, int a3);
__int64 BasicSound_2809e0(__int64 result, int a2);
float BasicSound_281ac0(__int64 a1);
float BasicSound_281ca0(__int64 a1, __int64 a2, _QWORD* a3, int a4);
void BasicSound_281e90(__int64 a1, __int64 a2);
__int64 BasicSound_282360(__int64 result, float a2);
__int64 BasicSound_282380(__int64 result, int a2, float a3);
__int64 BasicSound_282400(__int64 result, char a2, float a3);
__int64 BasicSound_282410(__int64 result);
__int64 BasicSound_282460(__int64 result, int a2, float a3);
__int64 BasicSound_2826d0(__int64 a1, __int64 a2);
__int64 BasicSound_282750(__int64 a1, __int64 a2);
__int64 BasicSound_2827d0(_QWORD* a1, __int64* a2);
__int64 BasicSound_282840(__int64* a1, unsigned int a2);
__int64 BasicSound_282870(__int64 result, _QWORD* a2);
__int64 BasicSound_DeletingDestructor(__int64 result);
__int64 BasicSound_27c5a0(__int64 result, __int64 a2);
_QWORD* BasicSound_27c8a0(_QWORD* a1, _QWORD* a2);
__int64 BasicSoundPlayer_282aa0(__int64 result, char a2, float a3);
__int64 BasicSound_2804d0(__int64 result, char a2, int a3);
__int64 BaseNx_2837a0(__int64*, __int64, __int64, __int64, __int64, __int64);
__int64 BaseNx_2a0820(__int64, __int64, __int64);
__int64 BaseNx_2a0e80(__int64, _QWORD*);
__int64 GameRoutine_28b4e0(__int64, __int64);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_ClearEvent(_QWORD);
extern int GameData_219d0c8;
void* BaseNx_2a1860();
void* SoundVoiceNX_14e360();
void __attribute__((noreturn)) GameRoutine_1196920();
__int64 BasicSound_Unknown3_alt1(__int64 a1, unsigned __int64 a2, __int64 a3,
                                 __int64 a4, __int64 a5,
                                 __int64 a6) __asm__("BasicSound_Unknown3");
__int64 GameRoutine_281160(__int64);
__int64 GameRoutine_283aa0(void);
__int64 BasicSound_280a00(__int64 a1);
__int64* SoundArchivePlayer_27bd30(__int64* result);
__int64 BaseNx_2837a0_alt1(__int64*) __asm__("BaseNx_2837a0");
__int64
ExternalSoundPlayer_282c70_alt1(__int64,
                                __int64) __asm__("ExternalSoundPlayer_282c70");
__int64 GameRoutine_28b4e0_alt1(__int64, int) __asm__("GameRoutine_28b4e0");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 nn_os_ClearEvent_alt1(__int64) __asm__("nn_os_ClearEvent");
__int64 BasicSound_Unknown3(__int64 a1, unsigned __int64 a2, __int64 a3);
_DWORD* BasicSound_281a40(_DWORD* result);
void nn_detail_UnexpectedDefaultImpl_alt1() __asm__(
    "nn_detail_UnexpectedDefaultImpl");
void nn_diag_detail_AbortImpl_1a0a590_alt1() __asm__(
    "nn_diag_detail_AbortImpl_1a0a590");

__int64 BasicSound_27c5a0(__int64 result, __int64 a2)
{
  _QWORD* v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  _QWORD* v6;
  unsigned int v7;
  int v8;
  __int64 v9;

  v2 = (_QWORD*)(result + 16);
  v3 = (__int64*)(a2 + 512);
  if (a2 + 512 != result + 16) {
    v4 = *(__int64**)(a2 + 520);
    v5 = *v4;
    *(_QWORD*)(*(_QWORD*)(a2 + 512) + 8LL) = v4;
    *v4 = *(_QWORD*)(a2 + 512);
    *(_QWORD*)(v5 + 8) = v3;
    *(_QWORD*)(a2 + 512) = v5;
  }
  v6 = *(_QWORD**)(result + 24);
  if (v6 != v2) {
    v7 = (*(_DWORD*)(a2 + 124) + *(unsigned __int8*)(a2 + 256)) &
         ~((*(_DWORD*)(a2 + 124) + *(unsigned __int8*)(a2 + 256)) >> 31);
    if ((*(_BYTE*)(result + 128) & 1) != 0) {
      if (v7 >= 0x7F) {
        v7 = 127;
      }
      do {
        if (((*((_DWORD*)v6 - 97) + *((unsigned __int8*)v6 - 256)) &
             (unsigned int)~(
                 (*((_DWORD*)v6 - 97) + *((unsigned __int8*)v6 - 256)) >>
                 31)) >= v7) {
          break;
        }
        v6 = (_QWORD*)v6[1];
      } while (v6 != v2);
    }
    else {
      do {
        v8 = (*((_DWORD*)v6 - 97) + *((unsigned __int8*)v6 - 256)) &
             ~((*((_DWORD*)v6 - 97) + *((unsigned __int8*)v6 - 256)) >> 31);
        if (v8 >= 127) {
          v8 = 127;
        }
        if (v7 < v8) {
          break;
        }
        v6 = (_QWORD*)v6[1];
      } while (v6 != v2);
    }
  }
  v9 = *v3;
  *v3 = *v6;
  *(_QWORD*)(v9 + 8) = v6;
  *(_QWORD*)(*v6 + 8LL) = v3;
  *v6 = v9;
  return result;
}

_QWORD* BasicSound_27c8a0(_QWORD* a1, _QWORD* a2)
{
  __int64* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;

  if (a2 + 64 != a1 + 2) {
    v2 = (__int64*)a2[65];
    v3 = *v2;
    *(_QWORD*)(a2[64] + 8LL) = v2;
    *v2 = a2[64];
    *(_QWORD*)(v3 + 8) = a2 + 64;
    a2[64] = v3;
  }
  if (a2 + 62 != a1) {
    v4 = (__int64*)a2[63];
    v5 = *v4;
    *(_QWORD*)(a2[62] + 8LL) = v4;
    *v4 = a2[62];
    *(_QWORD*)(v5 + 8) = a2 + 62;
    a2[62] = v5;
  }
  a2[4] = 0;
  return a2;
}

__int64 BasicSound_Unknown3(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3;
  int v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  void* v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned int v18;
  int v19;
  void* v20;
  __int64 v21;
  int v22;

  *(_WORD*)(a1 + 248) = 0;
  v3 = a1 + 248;
  *(_QWORD*)(a1 + 268) = 0;
  *(_QWORD*)(a1 + 276) = 0xFFFFFFFF00000000LL;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_WORD*)(a1 + 264) = 0;
  *(_BYTE*)(a1 + 266) = 0;
  v7 = GameData_219d0c8;
  *(_DWORD*)(a1 + 252) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_DWORD*)(a1 + 244) = 0;
  *(_QWORD*)(a1 + 196) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 204) = 0;
  *(_QWORD*)(a1 + 212) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 220) = 0;
  *(_QWORD*)(a1 + 228) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 236) = 0;
  *(_QWORD*)(a1 + 296) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 336) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_DWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 380) = 1065353216;
  *(_QWORD*)(a1 + 452) = 0;
  *(_QWORD*)(a1 + 444) = 0;
  *(_QWORD*)(a1 + 436) = 0;
  *(_DWORD*)(a1 + 284) = v7;
  v8 = *(__int64**)(a1 + 464);
  GameData_219d0c8 = v7 + 1;
  *(_BYTE*)(v3 + 9) = -1;
  *(_QWORD*)(v3 + 60) = 0x100000000LL;
  if (v8 != nullptr) {
    BaseNx_2837a0_alt1(v8);
  }
  *(_QWORD*)(a1 + 104) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 112) = 0;
  *(_DWORD*)(a1 + 136) = 1065353216;
  *(_QWORD*)(a1 + 140) = 0;
  *(_QWORD*)(a1 + 148) = 0;
  *(_DWORD*)(a1 + 156) = 0;
  *(_QWORD*)(a1 + 120) = 0xFFFFFFFFLL;
  *(_QWORD*)(a1 + 128) = 0xFFFFFFFFLL;
  v9 = *(_QWORD*)(a1 + 160);
  if (v9 != 0 && *(int*)(v9 + 8) >= 1) {
    v10 = 0;
    v11 = 0;
    do {
      ++v11;
      v12 = *(_QWORD*)v9 + v10;
      v10 += 24;
      *(_DWORD*)v12 = 1065353216;
      *(_QWORD*)(v12 + 4) = 0;
      *(_QWORD*)(v12 + 12) = 0;
      *(_DWORD*)(v12 + 20) = 0;
      v9 = *(_QWORD*)(a1 + 160);
    } while (v11 < *(int*)(v9 + 8));
  }
  v13 = *(_QWORD*)(a1 + 480);
  *(_DWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 168) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 176) = 1065353216;
  *(_QWORD*)(a1 + 184) = 0xFFFFFFFF00000000LL;
  if (v13 != 0) {
    memset_alt1(*(_QWORD*)(a1 + 472), 0, v13);
  }
  v14 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1);
  v15 = BaseNx_2a1860();
  v16 = BaseNx_2a0820((__int64)v15, 56, 8);
  *(_QWORD*)(v16 + 24) = v14;
  *(_QWORD*)(v16 + 32) = a2;
  *(_QWORD*)(v16 + 40) = a3;
  *(_QWORD*)(v16 + 48) = v3;
  *(_DWORD*)(v16 + 8) = 3;
  BaseNx_2a0e80((__int64)v15, (_QWORD*)v16);
  nn_os_ClearEvent_alt1(v14 + 8);
  if ((_DWORD)a3 != 0) {
    if ((_DWORD)a3 != 1) {
      GameRoutine_1196920();
    }
    (*(void (**)(unsigned __int64, __int64))(*(_QWORD*)a2 + 24LL))(a2, 1);
  }
  else {
    v17 = HIDWORD(a2);
    if (SHIDWORD(a2) >= 1) {
      v18 = a2;
      do {
        v19 = __clz(__rbit32(v18));
        if (((v18 >> v19) & 1) != 0) {
          v20 = SoundVoiceNX_14e360();
          v21 = GameRoutine_28b4e0_alt1((__int64)v20, v19);
          (*(void (**)(__int64, __int64))(*(_QWORD*)v21 + 24LL))(v21, 1);
        }
        v22 = v18 & -v18;
        if (v18 == v22) {
          break;
        }
        v18 ^= v22;
        LODWORD(v17) = v17 - 1;
      } while ((_DWORD)v17 != 0);
    }
  }
  *(_QWORD*)(a1 + 320) = a2;
  *(_QWORD*)(a1 + 328) = a3;
  *(_DWORD*)(a1 + 260) = 1;
  return 1;
}

__int64 BasicSound_2804d0(__int64 result, char a2, int a3)
{
  *(_BYTE*)(result + 256) = a2;
  *(_DWORD*)(result + 124) = a3;
  return result;
}

__int64 BasicSound_Unknown4(__int64 result)
{
  _QWORD* v1;
  __int64* v2;
  __int64* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  void* v7;
  __int64 v8;
  __int64 v9;
  void* v10;
  __int64 v11;
  __int64 (*v12)(__int64);

  if (*(_DWORD*)(result + 260) == 1) {
    v1 = (_QWORD*)result;
    *(_DWORD*)(result + 280) = -1;
    v2 = *(__int64**)(result + 16);
    if (v2 != nullptr) {
      SoundArchivePlayer_27bd30(v2);
    }
    v3 = (__int64*)v1[3];
    if (v3 != nullptr) {
      SoundArchivePlayer_27bd30(v3);
    }
    if (((*(__int64 (**)(_QWORD*))(*v1 + 48LL))(v1) & 1) != 0) {
      (*(void (**)(_QWORD*))(*v1 + 56LL))(v1);
    }
    v4 = (_QWORD*)v1[4];
    if (v4 != nullptr) {
      BasicSound_27c8a0(v4, v1);
    }
    v5 = v1[6];
    if (v5 != 0) {
      ExternalSoundPlayer_282c70_alt1(v5, (__int64)v1);
    }
    v6 = v1[10];
    if (v6 != 0) {
      (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v6 + 24LL))(v6, v1[11],
                                                                    v1);
      v1[11] = 0;
    }
    if (*((_BYTE*)v1 + 245) == 1) {
      v7 = BaseNx_2a1860();
      v8 = BaseNx_2a0820((__int64)v7, 40, 8);
      *(_DWORD*)(v8 + 8) = 8;
      v9 = v8;
      *(_QWORD*)(v8 + 24) = (*(__int64 (**)(_QWORD*))(*v1 + 64LL))(v1);
      *(_BYTE*)(v9 + 32) = *((_BYTE*)v1 + 247);
      BaseNx_2a0e80((__int64)v7, (_QWORD*)v9);
      *((_BYTE*)v1 + 245) = 0;
    }
    *((_BYTE*)v1 + 248) = 0;
    *((_BYTE*)v1 + 264) = 2;
    v10 = BaseNx_2a1860();
    v11 = BaseNx_2a0820((__int64)v10, 40, 8);
    *(_DWORD*)(v11 + 8) = 6;
    *(_QWORD*)(v11 + 24) = (*(__int64 (**)(_QWORD*))(*v1 + 64LL))(v1);
    result = BaseNx_2a0e80((__int64)v10, (_QWORD*)v11);
    if (*((_DWORD*)v1 + 82) != 1) {
      *((_DWORD*)v1 + 82) = 1;
    }
    v12 = (__int64 (*)(__int64))v1[61];
    v1[40] = 0;
    if (v12 != nullptr) {
      result = v12(result);
      v1[61] = 0;
    }
    *((_BYTE*)v1 + 247) = 0;
    *((_DWORD*)v1 + 65) = 2;
  }
  return result;
}

__int64 BasicSound_2806e0(__int64 a1, int a2)
{
  __int64 result;
  int v3;
  int v4;
  float v5;
  __int64 v6;
  __int64 v7;

  if (a2 < 1 || *(_BYTE*)(a1 + 265) == 2 ||
      (*(unsigned __int8*)(a1 + 244) | *(unsigned __int8*)(a1 + 245)) == 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1);
  }
  v3 = *(_DWORD*)(a1 + 204);
  v4 = *(_DWORD*)(a1 + 208);
  if (v4 >= v3) {
    v5 = *(float*)(a1 + 200);
  }
  else {
    v5 = *(float*)(a1 + 196) +
         (float)((float)((float)(*(float*)(a1 + 200) - *(float*)(a1 + 196)) *
                         (float)v4) /
                 (float)v3);
  }
  *(float*)(a1 + 196) = v5;
  *(_DWORD*)(a1 + 208) = 0;
  *(_BYTE*)(a1 + 256) = 0;
  *(_DWORD*)(a1 + 200) = 0;
  *(_DWORD*)(a1 + 204) = (int)(float)(v5 * (float)(unsigned int)a2);
  if (*(_QWORD*)(a1 + 32) != 0) {
    v6 = a1;
    GameRoutine_27c5a0(*(_QWORD*)(a1 + 32), a1);
    a1 = v6;
  }
  v7 = a1;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 72LL))(a1);
  *(_BYTE*)(v7 + 249) = 0;
  *(_DWORD*)(v7 + 252) = 0;
  *(_WORD*)(v7 + 246) = 256;
  *(_WORD*)(v7 + 265) = 0;
  return result;
}

__int64 BasicSound_2807c0(__int64 a1, char a2)
{
  __int64 v3;

  *(_BYTE*)(a1 + 256) = a2;
  v3 = *(_QWORD*)(a1 + 32);
  if (v3 != 0) {
    GameRoutine_27c5a0(v3, a1);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 72LL))(a1);
}

__int64 BasicSound_280810(__int64 result, char a2, int a3)
{
  unsigned int v3;
  int v5;
  int v6;
  float v7;
  int v8;
  int v9;
  float v10;
  char v11;
  int v12;
  char v13;
  int v14;

  v3 = *(unsigned __int8*)(result + 265);
  if ((a2 & 1) == 0) {
    if (v3 - 1 > 2) {
      return result;
    }
    v8 = *(_DWORD*)(result + 220);
    v9 = *(_DWORD*)(result + 224);
    if (v9 >= v8) {
      v10 = *(float*)(result + 216);
    }
    else {
      v10 = *(float*)(result + 212) +
            (float)((float)((float)(*(float*)(result + 216) -
                                    *(float*)(result + 212)) *
                            (float)v9) /
                    (float)v8);
    }
    *(float*)(result + 212) = v10;
    *(_DWORD*)(result + 224) = 0;
    v14 = (int)(float)((float)(1.0 - v10) * (float)a3);
    if (v14 <= 1) {
      v14 = 1;
    }
    *(_DWORD*)(result + 216) = 1065353216;
    *(_DWORD*)(result + 220) = v14;
    v11 = 1;
    v13 = 3;
    goto LABEL_19;
  }
  if (v3 <= 3 && v3 != 2) {
    v5 = *(_DWORD*)(result + 220);
    v6 = *(_DWORD*)(result + 224);
    if (v6 >= v5) {
      v7 = *(float*)(result + 216);
    }
    else {
      v7 = *(float*)(result + 212) +
           (float)((float)((float)(*(float*)(result + 216) -
                                   *(float*)(result + 212)) *
                           (float)v6) /
                   (float)v5);
    }
    v11 = 0;
    *(float*)(result + 212) = v7;
    *(_DWORD*)(result + 224) = 0;
    v12 = (int)(float)(v7 * (float)a3);
    if (v12 <= 1) {
      v12 = 1;
    }
    *(_DWORD*)(result + 216) = 0;
    *(_DWORD*)(result + 220) = v12;
    v13 = 1;
  LABEL_19:
    *(_BYTE*)(result + 265) = v13;
    *(_BYTE*)(result + 249) = v11;
    *(_DWORD*)(result + 252) = 0;
  }
  return result;
}

__int64 BasicSound_280900(__int64 result, char a2, int a3)
{
  unsigned int v3;
  int v5;
  int v6;
  float v7;
  int v8;
  int v9;
  float v10;
  int v11;
  char v12;
  int v13;

  v3 = *(unsigned __int8*)(result + 266);
  if ((a2 & 1) == 0) {
    if (v3 - 1 > 2) {
      return result;
    }
    v8 = *(_DWORD*)(result + 236);
    v9 = *(_DWORD*)(result + 240);
    if (v9 >= v8) {
      v10 = *(float*)(result + 232);
    }
    else {
      v10 = *(float*)(result + 228) +
            (float)((float)((float)(*(float*)(result + 232) -
                                    *(float*)(result + 228)) *
                            (float)v9) /
                    (float)v8);
    }
    *(float*)(result + 228) = v10;
    *(_DWORD*)(result + 240) = 0;
    v13 = (int)(float)((float)(1.0 - v10) * (float)a3);
    if (v13 <= 1) {
      v13 = 1;
    }
    *(_DWORD*)(result + 232) = 1065353216;
    *(_DWORD*)(result + 236) = v13;
    v12 = 3;
    goto LABEL_19;
  }
  if (v3 <= 3 && v3 != 2) {
    v5 = *(_DWORD*)(result + 236);
    v6 = *(_DWORD*)(result + 240);
    if (v6 >= v5) {
      v7 = *(float*)(result + 232);
    }
    else {
      v7 = *(float*)(result + 228) +
           (float)((float)((float)(*(float*)(result + 232) -
                                   *(float*)(result + 228)) *
                           (float)v6) /
                   (float)v5);
    }
    *(float*)(result + 228) = v7;
    *(_DWORD*)(result + 240) = 0;
    v11 = (int)(float)(v7 * (float)a3);
    if (v11 <= 1) {
      v11 = 1;
    }
    *(_DWORD*)(result + 232) = 0;
    *(_DWORD*)(result + 236) = v11;
    v12 = 1;
  LABEL_19:
    *(_BYTE*)(result + 266) = v12;
  }
  return result;
}

__int64 BasicSound_2809e0(__int64 result, int a2)
{
  *(_DWORD*)(result + 268) = a2;
  *(_BYTE*)(result + 246) = a2 > 0;
  return result;
}

__int64 BasicSound_280a00(__int64 a1)
{
  __int64 v2;
  void* v3;
  __int64 v4;
  __int64 result;
  int v7;
  char v8;
  int v9;
  char* v10;
  int v11;
  _DWORD* v12;
  _DWORD* v13;
  _BOOL4 v14;
  int v15;
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  int v24;
  __int64 v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  _QWORD* v34;
  int v35;
  int v36;
  __int64 v37;
  int v38;
  int v39;
  __int64 v40;
  unsigned __int64 v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  int v60;
  int v61;
  __int64 v62;
  char v63;
  __int64 v64;
  int v65;
  __int64 v66;
  struct {
    __int128 v67;
    __int64 v68;
    int v69;
    int v70;
  } v67_;
  struct {
    _BYTE v71[24];
    __int64 v72;
  } v71_;

  v2 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1);
  if (*(_BYTE*)(a1 + 248) == 1 &&
      *(_BYTE*)((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1) + 67) ==
          1) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1);
  }
  if (*(_BYTE*)(v2 + 68) == 1) {
    v3 = BaseNx_2a1860();
    v4 = BaseNx_2a0820((__int64)v3, 32, 8);
    *(_DWORD*)(v4 + 8) = 19;
    *(_QWORD*)(v4 + 24) = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1);
    BaseNx_2a0e80((__int64)v3, (_QWORD*)v4);
    return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1);
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 40LL))(a1);
  if ((result & 1) != 0) {
    if (*(_BYTE*)(a1 + 246) == 1) {
      v7 = *(_DWORD*)(a1 + 268);
      if (v7 != 0) {
        *(_DWORD*)(a1 + 268) = v7 - 1;
      }
      else if (*(_BYTE*)(a1 + 265) == 3 || *(_BYTE*)(a1 + 265) == 0) {
        return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1);
      }
    }
    v8 = *(_BYTE*)(a1 + 245);
    if ((v8 & 1) != 0) {
      if (*(_BYTE*)(a1 + 264) != 1) {
        v9 = *(unsigned __int8*)(a1 + 265);
        v10 = (char*)(a1 + 265);
        goto LABEL_25;
      }
    }
    else {
      if (*(_BYTE*)(a1 + 244) != 1) {
        return result;
      }
      result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 40LL))(a1);
      if ((result & 1) == 0) {
        return result;
      }
      *(_BYTE*)(a1 + 264) = 1;
    }
    v11 = *(_DWORD*)(a1 + 272);
    if (v11 != -1) {
      *(_DWORD*)(a1 + 272) = v11 + 1;
    }
    v9 = *(unsigned __int8*)(a1 + 265);
    v10 = (char*)(a1 + 265);
    if (v9 == 2) {
      v12 = (_DWORD*)(a1 + 224);
      v13 = (_DWORD*)(a1 + 220);
      v14 = *(_DWORD*)(a1 + 224) >= *(_DWORD*)(a1 + 220);
      goto LABEL_33;
    }
    v15 = *(_DWORD*)(a1 + 276);
    if (v15 != -1) {
      *(_DWORD*)(a1 + 276) = v15 + 1;
    }
  LABEL_25:
    v12 = (_DWORD*)(a1 + 224);
    v16 = *(_DWORD*)(a1 + 224);
    v13 = (_DWORD*)(a1 + 220);
    v17 = *(_DWORD*)(a1 + 220);
    v14 = v16 >= v17;
    if (v9 != 0) {
      if (v9 != 3) {
        if (v9 == 1 && v16 < v17) {
          *v12 = v16 + 1;
        }
      LABEL_33:
        v18 = *(_QWORD*)(a1 + 72);
        if (v18 != 0) {
          (*(void (**)(__int64, _QWORD, __int64))(*(_QWORD*)v18 + 16LL))(
              v18, *(_QWORD*)(a1 + 88), a1);
        }
        if (*(_QWORD*)(a1 + 64) != 0) {
          v19 = *(_QWORD*)(a1 + 464);
          v71_.v72 = 0;
          __builtin_memset(&v71_.v71[4], 0, 20);
          v67_.v67 = 0x3F8000003F800000uLL;
          v67_.v68 = 0xFFFFFFFFLL;
          v67_.v69 = 0;
          v67_.v70 = -1;
          *(_DWORD*)v71_.v71 = 1065353216;
          if (v19 != 0) {
            v19 = GameRoutine_283aa0();
            v71_.v72 = v19;
            if (v19 != 0 && *(int*)(v19 + 8) >= 1) {
              v20 = 0;
              v21 = 0;
              do {
                ++v21;
                v22 = *(_QWORD*)v19 + v20;
                v20 += 24;
                *(_DWORD*)v22 = 1065353216;
                *(_QWORD*)(v22 + 4) = 0;
                *(_QWORD*)(v22 + 12) = 0;
                *(_DWORD*)(v22 + 20) = 0;
                v19 = v71_.v72;
              } while (v21 < *(int*)(v71_.v72 + 8));
            }
          }
          if (*(_DWORD*)(a1 + 272) != 0) {
            v23 = *(_DWORD*)(a1 + 104);
            v24 = 0;
            *(_QWORD*)((char*)&v67_.v67 + 4) = *(_QWORD*)(a1 + 108);
            v25 = *(_QWORD*)(a1 + 120);
            LODWORD(v67_.v67) = v23;
            v26 = *(_DWORD*)(a1 + 116);
            v67_.v68 = v25;
            v27 = *(_DWORD*)(a1 + 128);
            LODWORD(v25) = *(_DWORD*)(a1 + 132);
            DWORD3(v67_.v67) = v26;
            v67_.v69 = v25;
            v67_.v70 = v27;
            v28 = -24;
            while (1) {
              v32 = *(_QWORD*)(a1 + 160);
              if (v32 != 0) {
                if (v24 >= *(_DWORD*)(v32 + 8) + 1) {
                  goto LABEL_60;
                }
              }
              else if (v24 >= 1) {
                goto LABEL_60;
              }
              if (v24 > 1) {
                if (v24 == 3) {
                  v35 = 2;
                }
                else {
                  if (v24 != 2) {
                    goto LABEL_104;
                  }
                  v35 = 1;
                }
              }
              else {
                v33 = (__int64*)(a1 + 136);
                v34 = v71_.v71;
                if (v24 == 0) {
                  goto LABEL_43;
                }
                if (v24 != 1) {
                  goto LABEL_104;
                }
                v35 = 0;
              }
              if (v35 >= *(_DWORD*)(v32 + 8)) {
                v19 = nn_diag_detail_AbortImpl_1a0a590(v19);
              LABEL_103:
                v19 = nn_diag_detail_AbortImpl_1a0a590(v19);
              LABEL_104:
                v19 = nn_detail_UnexpectedDefaultImpl(v19);
              LABEL_105:
                v19 = nn_diag_detail_AbortImpl_1a0a590(v19);
                goto LABEL_106;
              }
              if (v24 > *(_DWORD*)(v71_.v72 + 8)) {
                goto LABEL_103;
              }
              v33 = (__int64*)(*(_QWORD*)v32 + 24LL * (unsigned int)v35);
              v34 = (_QWORD*)(*(_QWORD*)v71_.v72 + v28);
            LABEL_43:
              v29 = *v33;
              v30 = v33[1];
              v31 = v33[2];
              ++v24;
              v28 += 24;
              v34[1] = v30;
              v34[2] = v31;
              *v34 = v29;
            }
          }
          v67_.v69 = 0;
        LABEL_60:
          v19 = (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int128*))(
              **(_QWORD**)(a1 + 64) + 16LL))(
              *(_QWORD*)(a1 + 64), *(_QWORD*)(a1 + 88),
              *(unsigned int*)(a1 + 280), &v67_.v67);
          v36 = v67_.v67;
          *(_QWORD*)(a1 + 108) = *(_QWORD*)((char*)&v67_.v67 + 4);
          v37 = v67_.v68;
          *(_DWORD*)(a1 + 104) = v36;
          v38 = DWORD3(v67_.v67);
          *(_QWORD*)(a1 + 120) = v37;
          LODWORD(v37) = v67_.v69;
          v39 = v67_.v70;
          *(_DWORD*)(a1 + 116) = v38;
          *(_DWORD*)(a1 + 128) = v39;
          *(_DWORD*)(a1 + 132) = v37;
          v40 = *(_QWORD*)(a1 + 160);
          if (v40 == 0 || (*(_DWORD*)(v40 + 8) & 0x80000000) == 0) {
            v41 = *(_QWORD*)&v71_.v71[8];
            *(_QWORD*)(a1 + 136) = *(_QWORD*)v71_.v71;
            *(_OWORD*)(a1 + 144) =
                __PAIR128__(*(unsigned __int64*)&v71_.v71[16], v41);
            if (v40 != 0 && *(int*)(v40 + 8) > 0) {
              if (*(int*)(v71_.v72 + 8) <= 0) {
                goto LABEL_105;
              }
              if (*(int*)(v40 + 8) <= 0) {
                goto LABEL_106;
              }
              v42 = *(_QWORD**)v40;
              v43 = **(_QWORD**)v71_.v72;
              v44 = *(_QWORD*)(*(_QWORD*)v71_.v72 + 16LL);
              v42[1] = *(_QWORD*)(*(_QWORD*)v71_.v72 + 8LL);
              v42[2] = v44;
              *v42 = v43;
              v45 = *(_QWORD*)(a1 + 160);
              if (v45 != 0 && *(int*)(v45 + 8) >= 2) {
                if (*(int*)(v71_.v72 + 8) < 2) {
                  goto LABEL_105;
                }
                if (*(int*)(v45 + 8) < 2) {
                  goto LABEL_106;
                }
                v46 = *(_QWORD**)v45;
                v47 = *(_QWORD*)(*(_QWORD*)v71_.v72 + 24LL);
                v48 = *(_QWORD*)(*(_QWORD*)v71_.v72 + 40LL);
                v46[4] = *(_QWORD*)(*(_QWORD*)v71_.v72 + 32LL);
                v46[5] = v48;
                v46[3] = v47;
                v49 = *(_QWORD*)(a1 + 160);
                if (v49 != 0 && *(int*)(v49 + 8) >= 3) {
                  if (*(int*)(v71_.v72 + 8) < 3) {
                    goto LABEL_105;
                  }
                  if (*(int*)(v49 + 8) < 3) {
                  LABEL_106:
                    nn_diag_detail_AbortImpl_1a0a590(v19);
                    __udf(0);
                  }
                  v50 = *(_QWORD**)v49;
                  v51 = *(_QWORD*)(*(_QWORD*)v71_.v72 + 48LL);
                  v52 = *(_QWORD*)(*(_QWORD*)v71_.v72 + 64LL);
                  v50[7] = *(_QWORD*)(*(_QWORD*)v71_.v72 + 56LL);
                  v50[8] = v52;
                  v50[6] = v51;
                  v53 = *(_QWORD*)(a1 + 160);
                  if (v53 != 0 && *(int*)(v53 + 8) >= 4) {
                    goto LABEL_104;
                  }
                }
              }
            }
          }
        }
        v54 = *(_QWORD*)(a1 + 40);
        if (v54 != 0) {
          v55 = *(_QWORD*)(v54 + 176);
          v56 = *(_QWORD*)(v54 + 184);
          v57 = *(_QWORD*)(v54 + 192);
          *(_DWORD*)(a1 + 192) = *(_DWORD*)(v54 + 200);
          *(_QWORD*)(a1 + 176) = v56;
          *(_QWORD*)(a1 + 184) = v57;
          *(_QWORD*)(a1 + 168) = v55;
        }
        GameRoutine_281160(a1);
        if (*(_BYTE*)(a1 + 247) == 1 &&
            *(_DWORD*)(a1 + 208) >= *(_DWORD*)(a1 + 204)) {
          v66 = *(_QWORD*)a1;
          *(_BYTE*)(a1 + 247) = 0;
          return (*(__int64 (**)(__int64))(v66 + 32))(a1);
        }
        result = (__int64)BaseNx_2a1860();
        v58 = result;
        if ((v8 & 1) == 0) {
          v59 = BaseNx_2a0820(result, 40, 8);
          *(_DWORD*)(v59 + 8) = 7;
          *(_QWORD*)(v59 + 24) =
              (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1);
          result = BaseNx_2a0e80(v58, (_QWORD*)v59);
          *(_WORD*)(a1 + 244) = 256;
        }
        v60 = (unsigned __int8)*v10;
        if (v60 == 3) {
          if (*v12 < *v13) {
          LABEL_92:
            if (*(_BYTE*)(a1 + 249) == 1) {
              v64 = BaseNx_2a0820(v58, 40, 8);
              *(_DWORD*)(v64 + 8) = 9;
              *(_QWORD*)(v64 + 24) =
                  (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1);
              *(_BYTE*)(v64 + 32) = 0;
              result = BaseNx_2a0e80(v58, (_QWORD*)v64);
              *(_BYTE*)(a1 + 249) = 0;
            }
            v65 = *(unsigned __int8*)(a1 + 266);
            if (v65 == 3) {
              if (*(_DWORD*)(a1 + 240) >= *(_DWORD*)(a1 + 236)) {
                *(_BYTE*)(a1 + 266) = 0;
              }
            }
            else if (v65 == 1 && *(_DWORD*)(a1 + 240) >= *(_DWORD*)(a1 + 236)) {
              *(_BYTE*)(a1 + 266) = 2;
            }
            return result;
          }
          v63 = 0;
        }
        else {
          if (v60 != 1) {
            goto LABEL_92;
          }
          v61 = *(_DWORD*)(a1 + 252) == 1
                    ? *(_DWORD*)(a1 + 224) >= *(_DWORD*)(a1 + 220)
                    : v14;
          if (v61 != 1) {
            goto LABEL_92;
          }
          v62 = BaseNx_2a0820(v58, 40, 8);
          *(_DWORD*)(v62 + 8) = 9;
          *(_QWORD*)(v62 + 24) =
              (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1);
          *(_BYTE*)(v62 + 32) = 1;
          result = BaseNx_2a0e80(v58, (_QWORD*)v62);
          v63 = 2;
        }
        *v10 = v63;
        goto LABEL_92;
      }
      if (v16 < v17) {
        *v12 = v16 + 1;
      }
    }
    (*(void (**)(__int64))(*(_QWORD*)a1 + 80LL))(a1);
    goto LABEL_33;
  }
  return result;
}

_DWORD* BasicSound_281a40(_DWORD* result)
{
  int v1;
  int v2;
  int v3;

  v1 = result[52];
  if (v1 < (signed __int32)result[51]) {
    result[52] = v1 + 1;
    v2 = result[60];
    if (v2 >= (signed __int32)result[59]) {
    LABEL_3:
      v3 = result[87];
      if (v3 >= (signed __int32)result[86]) {
        return result;
      }
    LABEL_7:
      result[87] = v3 + 1;
      return result;
    }
  }
  else {
    v2 = result[60];
    if (v2 >= (signed __int32)result[59]) {
      goto LABEL_3;
    }
  }
  result[60] = v2 + 1;
  v3 = result[87];
  if (v3 < (signed __int32)result[86]) {
    goto LABEL_7;
  }
  return result;
}

float BasicSound_281ac0(__int64 a1)
{
  float result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  float v7;
  int v8;
  int v9;
  float v10;
  float v11;
  int v12;
  int v13;
  float v14;
  int v15;
  int v16;
  float v17;
  int v18;
  int v19;
  float v20;
  float v21;
  float v22;
  float v23;

  result = 0.0;
  if (*(_BYTE*)(a1 + 266) != 2) {
    v3 = *(_QWORD*)(a1 + 464);
    if (v3 != 0 && (GameRoutine_283d50(v3) & 1) != 0 &&
        *(_DWORD*)(a1 + 328) == 1 && (v4 = *(_QWORD*)(a1 + 320)) != 0 &&
        (*(int (**)(_QWORD))(*(_QWORD*)v4 + 16LL))(*(_QWORD*)(a1 + 320)) >= 1) {
      v5 = 0;
      while (1) {
        v6 = rcContext_doStartTimer_283ce0(*(_QWORD*)(a1 + 464));
        if (v5 < *(int*)(v6 + 8) && *(_BYTE*)(*(_QWORD*)v6 + v5) != 0) {
          break;
        }
        if (++v5 >= (*(int (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4)) {
          goto LABEL_12;
        }
      }
      v7 = 1.0;
    }
    else {
    LABEL_12:
      v7 = *(float*)(a1 + 296);
    }
    v8 = *(_DWORD*)(a1 + 348);
    v9 = *(_DWORD*)(a1 + 344);
    v10 = v7 * *(float*)(*(_QWORD*)(a1 + 32) + 76LL);
    if (v8 >= v9) {
      v12 = *(_DWORD*)(a1 + 204);
      v13 = *(_DWORD*)(a1 + 208);
      v14 = v10 * *(float*)(a1 + 340);
      if (v13 >= v12) {
      LABEL_15:
        v15 = *(_DWORD*)(a1 + 220);
        v16 = *(_DWORD*)(a1 + 224);
        v17 = v14 * *(float*)(a1 + 200);
        if (v16 >= v15) {
          goto LABEL_16;
        }
        goto LABEL_20;
      }
    }
    else {
      v11 = *(float*)(a1 + 336) +
            (float)((float)((float)(*(float*)(a1 + 340) - *(float*)(a1 + 336)) *
                            (float)v8) /
                    (float)v9);
      v12 = *(_DWORD*)(a1 + 204);
      v13 = *(_DWORD*)(a1 + 208);
      v14 = v10 * v11;
      if (v13 >= v12) {
        goto LABEL_15;
      }
    }
    v22 = *(float*)(a1 + 196) +
          (float)((float)((float)(*(float*)(a1 + 200) - *(float*)(a1 + 196)) *
                          (float)v13) /
                  (float)v12);
    v15 = *(_DWORD*)(a1 + 220);
    v16 = *(_DWORD*)(a1 + 224);
    v17 = v14 * v22;
    if (v16 >= v15) {
    LABEL_16:
      v18 = *(_DWORD*)(a1 + 236);
      v19 = *(_DWORD*)(a1 + 240);
      v20 = v17 * *(float*)(a1 + 216);
      if (v19 >= v18) {
      LABEL_17:
        v21 = *(float*)(a1 + 232);
        return (float)((float)(v20 * v21) * *(float*)(a1 + 104)) *
               *(float*)(a1 + 168);
      }
    LABEL_21:
      v21 = *(float*)(a1 + 228) +
            (float)((float)((float)(*(float*)(a1 + 232) - *(float*)(a1 + 228)) *
                            (float)v19) /
                    (float)v18);
      return (float)((float)(v20 * v21) * *(float*)(a1 + 104)) *
             *(float*)(a1 + 168);
    }
  LABEL_20:
    v23 = *(float*)(a1 + 212) +
          (float)((float)((float)(*(float*)(a1 + 216) - *(float*)(a1 + 212)) *
                          (float)v16) /
                  (float)v15);
    v18 = *(_DWORD*)(a1 + 236);
    v19 = *(_DWORD*)(a1 + 240);
    v20 = v17 * v23;
    if (v19 >= v18) {
      goto LABEL_17;
    }
    goto LABEL_21;
  }
  return result;
}

float BasicSound_281ca0(__int64 a1, __int64 a2, _QWORD* a3, int a4)
{

#pragma clang fp contract(off)
  int v4;
  float* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float v10;
  float v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float* v28;
  float result;

  if (a4 > 1) {
    if (a4 == 2) {
      v4 = 1;
      goto LABEL_10;
    }
    if (a4 == 3) {
      v4 = 2;
      goto LABEL_10;
    }
  LABEL_14:
    nn_detail_UnexpectedDefaultImpl_alt1();
  }
  if (a4 == 0) {
    v5 = (float*)(a1 + 136);
    goto LABEL_12;
  }
  if (a4 != 1) {
    goto LABEL_14;
  }
  v4 = 0;
LABEL_10:
  v6 = *(_QWORD*)(a1 + 160);
  if (v4 >= (signed __int32)*(_DWORD*)(v6 + 8)) {
    nn_diag_detail_AbortImpl_1a0a590_alt1();
  }
  v5 = (float*)(*(_QWORD*)v6 + 24LL * (unsigned int)v4);
LABEL_12:
  v7 = a3[5];
  v9 = a3[2];
  v8 = a3[3];
  v11 = *(float*)(a1 + 176);
  v10 = *(float*)(a1 + 180);
  *(_QWORD*)(a2 + 32) = a3[4];
  *(_QWORD*)(a2 + 40) = v7;
  *(_QWORD*)(a2 + 16) = v9;
  *(_QWORD*)(a2 + 24) = v8;
  v12 = a3[9];
  v14 = a3[6];
  v13 = a3[7];
  *(_QWORD*)(a2 + 64) = a3[8];
  *(_QWORD*)(a2 + 72) = v12;
  *(_QWORD*)(a2 + 48) = v14;
  *(_QWORD*)(a2 + 56) = v13;
  v15 = a3[1];
  v16 = *(float*)(a2 + 56);
  v17 = *(float*)(a2 + 60);
  v18 = *(float*)(a2 + 64);
  v19 = *(float*)(a2 + 68);
  v20 = *(float*)(a2 + 72);
  v21 = *(float*)(a2 + 76);
  *(_QWORD*)a2 = *a3;
  *(_QWORD*)(a2 + 8) = v15;
  v22 = *(float*)(a1 + 356) + v16;
  *(float*)(a2 + 56) = v22;
  v23 = *(float*)(a1 + 360) + v17;
  *(float*)(a2 + 60) = v23;
  *(_DWORD*)(a2 + 4) = *(_DWORD*)(a1 + 352);
  v24 = *(float*)(a1 + 364) + v18;
  *(float*)(a2 + 64) = v24;
  v25 = *(float*)(a1 + 368) + v19;
  *(float*)(a2 + 68) = v25;
  v26 = *(float*)(a1 + 372) + v20;
  *(float*)(a2 + 72) = v26;
  v27 = *(float*)(a1 + 376) + v21;
  *(float*)(a2 + 76) = v27;
  v28 = *(float**)(a1 + 32);
  *(float*)a2 = *(float*)a2 * (float)(v11 * (float)(v28[24] * *v5));
  *(float*)(a2 + 56) = v22 + (float)(v10 + v5[1]);
  *(float*)(a2 + 60) = v23 + v5[2];
  *(float*)(a2 + 64) = v24 + v28[25];
  *(float*)(a2 + 68) = v25 + (float)(v28[26] + v5[3]);
  *(float*)(a2 + 72) = v26 + (float)(v28[27] + v5[4]);
  result = v27 + (float)(v28[28] + v5[5]);
  *(float*)(a2 + 76) = result;
  return result;
}

void BasicSound_281e90(__int64 a1, __int64 a2)
{
  _DWORD* v4;
  int* v5;
  int v6;
  int v7;
  float v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int* v17;
  __int64 v18;
  bool v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  float v24;
  float v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float* v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  float v49;

  *(_DWORD*)a2 = *(_DWORD*)(a1 + 296);
  v4 = *(_DWORD**)(a1 + 32);
  *(_DWORD*)(a2 + 4) = v4[19];
  *(_DWORD*)(a2 + 8) = v4[20];
  *(_DWORD*)(a2 + 12) = v4[21];
  *(_DWORD*)(a2 + 16) = v4[22];
  *(_DWORD*)(a2 + 20) = v4[24];
  *(_DWORD*)(a2 + 24) = v4[25];
  *(_DWORD*)(a2 + 28) = v4[26];
  *(_DWORD*)(a2 + 32) = v4[27];
  *(_DWORD*)(a2 + 36) = v4[28];
  *(_DWORD*)(a2 + 40) = *(_DWORD*)(a1 + 104);
  *(_DWORD*)(a2 + 44) = *(_DWORD*)(a1 + 108);
  *(_DWORD*)(a2 + 48) = *(_DWORD*)(a1 + 112);
  *(_DWORD*)(a2 + 52) = *(_DWORD*)(a1 + 120);
  v5 = (int*)(a1 + 116);
  *(_DWORD*)(a2 + 56) = *(_DWORD*)(a1 + 116);
  *(_DWORD*)(a2 + 60) = *(_DWORD*)(a1 + 128);
  *(_DWORD*)(a2 + 88) = *(_DWORD*)(a1 + 124);
  *(_DWORD*)(a2 + 64) = *(_DWORD*)(a1 + 136);
  *(_DWORD*)(a2 + 68) = *(_DWORD*)(a1 + 140);
  *(_DWORD*)(a2 + 72) = *(_DWORD*)(a1 + 144);
  *(_DWORD*)(a2 + 76) = *(_DWORD*)(a1 + 148);
  *(_DWORD*)(a2 + 80) = *(_DWORD*)(a1 + 152);
  *(_DWORD*)(a2 + 84) = *(_DWORD*)(a1 + 156);
  *(_DWORD*)(a2 + 92) = *(_DWORD*)(a1 + 168);
  *(_DWORD*)(a2 + 96) = *(_DWORD*)(a1 + 172);
  *(_DWORD*)(a2 + 100) = *(_DWORD*)(a1 + 184);
  *(_DWORD*)(a2 + 104) = *(_DWORD*)(a1 + 176);
  *(_DWORD*)(a2 + 108) = *(_DWORD*)(a1 + 180);
  v6 = *(_DWORD*)(a1 + 344);
  v7 = *(_DWORD*)(a1 + 348);
  if (v7 >= v6) {
    v8 = *(float*)(a1 + 340);
  }
  else {
    v8 = *(float*)(a1 + 336) +
         (float)((float)((float)(*(float*)(a1 + 340) - *(float*)(a1 + 336)) *
                         (float)v7) /
                 (float)v6);
  }
  *(float*)(a2 + 112) = v8;
  *(_DWORD*)(a2 + 116) = *(_DWORD*)(a1 + 300);
  *(_DWORD*)(a2 + 120) = *(_DWORD*)(a1 + 304);
  *(_DWORD*)(a2 + 124) = *(char*)(a1 + 257);
  *(_DWORD*)(a2 + 128) = *(_DWORD*)(a1 + 308);
  *(_DWORD*)(a2 + 132) = *(_DWORD*)(a1 + 312);
  *(_DWORD*)(a2 + 212) = *(_DWORD*)(a1 + 352);
  *(_DWORD*)(a2 + 216) = *(_DWORD*)(a1 + 356);
  *(_DWORD*)(a2 + 220) = *(_DWORD*)(a1 + 360);
  *(_DWORD*)(a2 + 224) = *(_DWORD*)(a1 + 364);
  *(_DWORD*)(a2 + 240) = *(unsigned __int8*)(a1 + 256);
  *(_DWORD*)(a2 + 228) = *(_DWORD*)(a1 + 368);
  *(_DWORD*)(a2 + 232) = *(_DWORD*)(a1 + 372);
  *(_DWORD*)(a2 + 236) = *(_DWORD*)(a1 + 376);
  *(_DWORD*)(a2 + 136) = *(_DWORD*)(a1 + 380);
  *(_DWORD*)(a2 + 140) = *(_DWORD*)(a1 + 436);
  *(_DWORD*)(a2 + 144) = *(_DWORD*)(a1 + 440);
  *(_DWORD*)(a2 + 148) = *(_DWORD*)(a1 + 444);
  *(_DWORD*)(a2 + 152) = *(_DWORD*)(a1 + 448);
  *(_DWORD*)(a2 + 156) = *(_DWORD*)(a1 + 452);
  *(_DWORD*)(a2 + 160) = *(_DWORD*)(a1 + 456);
  v9 = *(_QWORD*)(a1 + 388);
  v10 = *(_QWORD*)(a1 + 396);
  *(_QWORD*)(a2 + 180) = *(_QWORD*)(a1 + 404);
  *(_QWORD*)(a2 + 172) = v10;
  *(_QWORD*)(a2 + 164) = v9;
  v11 = *(_QWORD*)(a1 + 412);
  v12 = *(_QWORD*)(a1 + 420);
  *(_QWORD*)(a2 + 204) = *(_QWORD*)(a1 + 428);
  *(_QWORD*)(a2 + 196) = v12;
  *(_QWORD*)(a2 + 188) = v11;
  *(float*)(a2 + 244) = BasicSound_281ac0(a1);
  *(float*)(a2 + 248) =
      (float)(*(float*)(a1 + 300) * *(float*)(a1 + 108)) * *(float*)(a1 + 172);
  *(float*)(a2 + 252) =
      (float)((float)(*(float*)(a1 + 304) + *(float*)(a1 + 112)) +
              *(float*)(*(_QWORD*)(a1 + 32) + 80LL)) +
      *(float*)(a1 + 184);
  v13 = *(_DWORD*)(a1 + 312);
  if (*(_DWORD*)(a1 + 128) != -1) {
    v13 = *(_DWORD*)(a1 + 128);
  }
  *(_DWORD*)(a2 + 264) = v13;
  v14 = *(_DWORD*)(a1 + 124) + *(unsigned __int8*)(a1 + 256);
  v15 = v14 & ~(v14 >> 31);
  if (v15 >= 127) {
    v15 = 127;
  }
  *(_DWORD*)(a2 + 348) = v15;
  v16 = *(char*)(a1 + 257);
  if (v16 == -1) {
    v18 = *(_QWORD*)(a1 + 32);
    v16 = *(_DWORD*)(v18 + 84);
    if (v16 == -1) {
      v16 = *(_DWORD*)(a1 + 188);
      v17 = (int*)(a1 + 192);
      v19 = v16 == -1;
      if (v16 == -1) {
        v16 = *(_DWORD*)(a1 + 120);
      }
      if (v19) {
        v17 = v5;
      }
    }
    else {
      v17 = (int*)(v18 + 88);
    }
  }
  else {
    v17 = (int*)(a1 + 308);
  }
  v20 = *v17;
  *(_DWORD*)(a2 + 256) = v16;
  *(_DWORD*)(a2 + 260) = v20;
  v21 = *(_QWORD*)(a1 + 420);
  v23 = *(_QWORD*)(a1 + 396);
  v22 = *(_QWORD*)(a1 + 404);
  v24 = *(float*)(a1 + 176);
  v25 = *(float*)(a1 + 180);
  *(_QWORD*)(a2 + 300) = *(_QWORD*)(a1 + 412);
  *(_QWORD*)(a2 + 308) = v21;
  *(_QWORD*)(a2 + 284) = v23;
  *(_QWORD*)(a2 + 292) = v22;
  v26 = *(_QWORD*)(a1 + 452);
  v28 = *(_QWORD*)(a1 + 428);
  v27 = *(_QWORD*)(a1 + 436);
  *(_QWORD*)(a2 + 332) = *(_QWORD*)(a1 + 444);
  *(_QWORD*)(a2 + 340) = v26;
  *(_QWORD*)(a2 + 316) = v28;
  *(_QWORD*)(a2 + 324) = v27;
  v29 = *(_QWORD*)(a1 + 388);
  v30 = *(float*)(a2 + 324);
  v31 = *(float*)(a2 + 328);
  v32 = *(float*)(a2 + 332);
  v33 = *(float*)(a2 + 336);
  v34 = *(float*)(a2 + 340);
  v35 = *(float*)(a2 + 344);
  *(_QWORD*)(a2 + 268) = *(_QWORD*)(a1 + 380);
  *(_QWORD*)(a2 + 276) = v29;
  v36 = *(float*)(a1 + 356) + v30;
  *(float*)(a2 + 324) = v36;
  v37 = *(float*)(a1 + 360) + v31;
  *(float*)(a2 + 328) = v37;
  *(_DWORD*)(a2 + 272) = *(_DWORD*)(a1 + 352);
  v38 = *(float*)(a1 + 364) + v32;
  *(float*)(a2 + 332) = v38;
  v39 = *(float*)(a1 + 368) + v33;
  *(float*)(a2 + 336) = v39;
  v40 = *(float*)(a1 + 372) + v34;
  *(float*)(a2 + 340) = v40;
  v41 = *(float*)(a1 + 376) + v35;
  *(float*)(a2 + 344) = v41;
  v42 = *(float**)(a1 + 32);
  *(float*)(a2 + 268) = *(float*)(a2 + 268) *
                        (float)(v24 * (float)(v42[24] * *(float*)(a1 + 136)));
  *(float*)(a2 + 324) = v36 + (float)(v25 + *(float*)(a1 + 140));
  *(float*)(a2 + 328) = v37 + *(float*)(a1 + 144);
  *(float*)(a2 + 332) = v38 + v42[25];
  *(float*)(a2 + 336) = v39 + (float)(v42[26] + *(float*)(a1 + 148));
  *(float*)(a2 + 340) = v40 + (float)(v42[27] + *(float*)(a1 + 152));
  *(float*)(a2 + 344) = v41 + (float)(v42[28] + *(float*)(a1 + 156));
  v43 = *(_DWORD*)(a1 + 204);
  v44 = *(_DWORD*)(a1 + 208);
  if (v44 < v43) {
    *(float*)(a2 + 352) =
        *(float*)(a1 + 196) +
        (float)((float)((float)(*(float*)(a1 + 200) - *(float*)(a1 + 196)) *
                        (float)v44) /
                (float)v43);
    v45 = *(_DWORD*)(a1 + 220);
    v46 = *(_DWORD*)(a1 + 224);
    if (v46 >= v45) {
      goto LABEL_18;
    }
  LABEL_21:
    *(float*)(a2 + 356) =
        *(float*)(a1 + 212) +
        (float)((float)((float)(*(float*)(a1 + 216) - *(float*)(a1 + 212)) *
                        (float)v46) /
                (float)v45);
    v47 = *(_DWORD*)(a1 + 236);
    v48 = *(_DWORD*)(a1 + 240);
    if (v48 >= v47) {
      goto LABEL_19;
    }
  LABEL_22:
    v49 = *(float*)(a1 + 228) +
          (float)((float)((float)(*(float*)(a1 + 232) - *(float*)(a1 + 228)) *
                          (float)v48) /
                  (float)v47);
    goto LABEL_23;
  }
  *(_DWORD*)(a2 + 352) = *(_DWORD*)(a1 + 200);
  v45 = *(_DWORD*)(a1 + 220);
  v46 = *(_DWORD*)(a1 + 224);
  if (v46 < v45) {
    goto LABEL_21;
  }

LABEL_18:
  *(_DWORD*)(a2 + 356) = *(_DWORD*)(a1 + 216);
  v47 = *(_DWORD*)(a1 + 236);
  v48 = *(_DWORD*)(a1 + 240);
  if (v48 < v47) {
    goto LABEL_22;
  }

LABEL_19:
  v49 = *(float*)(a1 + 232);

LABEL_23:
  *(float*)(a2 + 360) = v49;
  *(_BYTE*)(a2 + 364) = *(_BYTE*)(a1 + 266) == 2;
}

__int64 BasicSound_282360(__int64 result, float a2)
{
  if (a2 < 0.0) {
    a2 = 0.0;
  }
  *(float*)(result + 296) = a2;
  return result;
}

__int64 BasicSound_282380(__int64 result, int a2, float a3)
{
  int v3;
  int v4;
  float v5;

  v3 = *(_DWORD*)(result + 348);
  v4 = *(_DWORD*)(result + 344);
  if (v3 >= v4) {
    v5 = *(float*)(result + 340);
  }
  else {
    v5 = *(float*)(result + 336) +
         (float)((float)((float)(*(float*)(result + 340) -
                                 *(float*)(result + 336)) *
                         (float)v3) /
                 (float)v4);
  }
  *(float*)(result + 336) = v5;
  *(_DWORD*)(result + 344) = a2;
  *(_DWORD*)(result + 348) = 0;
  if (a3 < 0.0) {
    a3 = 0.0;
  }
  *(float*)(result + 340) = a3;
  return result;
}

__int64 BasicSound_282400(__int64 result, char a2, float a3)
{
  *(_BYTE*)(result + 257) = a2;
  *(float*)(result + 308) = a3;
  return result;
}

__int64 BasicSound_282410(__int64 result)
{
  *(_DWORD*)(result + 312) = *(_DWORD*)(*(_QWORD*)(result + 32) + 92LL);
  return result;
}

__int64 BasicSound_282460(__int64 result, int a2, float a3)
{
  *(float*)(result + 4LL * a2 + 368) = a3;
  return result;
}

__int64 BasicSound_2826d0(__int64 a1, __int64 a2)
{
  char v2;
  __int64 v4;
  __int64 v5;

  v2 = a2;
  v4 = GameRoutine_2a1860(a1, a2);
  v5 = GameRoutine_2a0820(v4, 40, 8, 1);
  *(_DWORD*)(v5 + 8) = 4;
  *(_QWORD*)(v5 + 24) = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1);
  *(_BYTE*)(v5 + 32) = v2;
  return GameRoutine_2a0e80(v4, v5);
}

__int64 BasicSound_282750(__int64 a1, __int64 a2)
{
  char v2;
  __int64 v4;
  __int64 v5;

  v2 = a2;
  v4 = GameRoutine_2a1860(a1, a2);
  v5 = GameRoutine_2a0820(v4, 40, 8, 1);
  *(_DWORD*)(v5 + 8) = 5;
  *(_QWORD*)(v5 + 24) = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 64LL))(a1);
  *(_BYTE*)(v5 + 33) = v2;
  return GameRoutine_2a0e80(v4, v5);
}

__int64 BasicSound_2827d0(_QWORD* a1, __int64* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  result =
      (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a2[2] + 16LL))(a2[2], a2[4]);
  if (result != 0) {
    v5 = result;
    result = memcpy(result, a2[3], a2[4]);
    v6 = a2[4];
    v8 = a2[1];
    v7 = a2[2];
    a1[11] = a2[3];
    v9 = *a2;
    a1[11] = v5;
    a1[12] = v6;
    a1[10] = v7;
    a1[8] = v9;
    a1[9] = v8;
  }
  return result;
}

__int64 BasicSound_282840(__int64* a1, unsigned int a2)
{
  __int64 result;

  result = *a1;
  if (result != 0) {
    return (*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)result + 24LL))(
        result, a1[3], a2);
  }
  return result;
}

__int64 BasicSound_282870(__int64 result, _QWORD* a2)
{
  *(_QWORD*)(result + 288) = *a2;
  return result;
}

__int64 BasicSound_DeletingDestructor(__int64 result)
{
  *(_QWORD*)result = nn_atk_detail_BasicSound_vtable;
  *(_DWORD*)(result + 260) = 3;
  return result;
}

void __attribute__((noreturn)) BasicSound_Unknown2() { __udf(0x8002u); }

#pragma GCC visibility pop
