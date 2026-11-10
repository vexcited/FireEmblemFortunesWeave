#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_edec80(_QWORD* result, _QWORD*);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__n128 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_21a6120;
extern __int64* game_map_MapRandom_instance__ptr[3];
_QWORD* GambitCameraShakeVec_Dispatch(__int64 a1);
__attribute__((swiftcall)) void GambitCameraShakeVec_Unknown3(PSEUDO_X8 x8_);

_QWORD* GambitCameraShakeVec_Dispatch(__int64 a1)
{
  float v1;
  __int64* v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  unsigned int v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  __int64 v23;
  float v24;
  float v25;
  float v26;
  unsigned int v27;
  unsigned int v28;
  __int128 v29;
  int v31;
  __int64 v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  unsigned int v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  struct {
    __int64 v46;
    char gap72_[8];
    __int128 v47;
  } v46_;

  v1 = *(float*)(a1 + 56);
  nn_os_LockMutex(&game_g_random_mutex);
  v3 = game_map_MapRandom_instance__ptr[0];
  v4 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((_UNKNOWN**)0x8LL));
  v5 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
  v6 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
       (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
  *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
      *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
  *((_DWORD*)v3 + 1) = v4;
  v7 = (v6 >> 8) ^ (v5 >> 19) ^ v6 ^ v5;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3) = v5;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3 + 4) = v7;
  nn_os_UnlockMutex(&game_g_random_mutex);
  v8 = vcvts_n_f32_u32((unsigned __int16)v7, 0x10u);
  v9 =
      (float)((float)(PSEUDO_UNFUSED(v8 * 0x1.921fb60000000p+1f)) +
              (float)(PSEUDO_UNFUSED(v8 * 0x1.921fb60000000p+1f))) +
      (float)(roundf(
                  (float)((float)(PSEUDO_UNFUSED(v8 * 0x1.921fb60000000p+1f)) +
                          (float)(PSEUDO_UNFUSED(v8 * 0x1.921fb60000000p+1f))) *
                  0x1.45f3060000000p-3f) *
              -0x1.921fb60000000p+2f);
  if (v9 > 0x1.921fb60000000p+0f) {
    v10 = 0x1.921fb60000000p+1f;
  LABEL_5:
    v9 = v10 - v9;
    v11 = -0x1.0000000000000p+0f;
    goto LABEL_6;
  }
  v11 = 0x1.0000000000000p+0f;
  if (v9 < -0x1.921fb60000000p+0f) {
    v10 = -0x1.921fb60000000p+1f;
    goto LABEL_5;
  }
LABEL_6:
  v12 = *(float*)GameData_212c190;
  v13 = *((float*)GameData_212c190 + 1);
  v14 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
  v15 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
  v16 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
  v17 = *(_DWORD*)(a1 + 60);
  v19 = *(float*)GameData_212c188;
  v18 = *((float*)GameData_212c188 + 1);
  v21 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
  v20 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  v22 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
  v23 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 48) + 96LL) + 40LL);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v35 = v14;
    v36 = v9;
    v33 = v11;
    v34 = v12;
    v38 = v17;
    v39 = v13;
    v40 = v19;
    v41 = v15;
    v37 = v16;
    v42 = v18;
    v43 = v21;
    v44 = v20;
    v45 = v22;
    v31 = __cxa_guard_acquire(&GameData_21a6130);
    v20 = v44;
    v22 = v45;
    v18 = v42;
    v21 = v43;
    v19 = v40;
    v15 = v41;
    v16 = v37;
    v17 = v38;
    v12 = v34;
    v14 = v35;
    v13 = v39;
    v11 = v33;
    v9 = v36;
    if (v31 != 0) {
      v32 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v32;
      __cxa_guard_release(&GameData_21a6130);
      v20 = v44;
      v22 = v45;
      v18 = v42;
      v21 = v43;
      v19 = v40;
      v15 = v41;
      v16 = v37;
      v17 = v38;
      v12 = v34;
      v14 = v35;
      v13 = v39;
      v11 = v33;
      v9 = v36;
    }
  }
  v46_.v46 = 0x3DA3D70A3DA3D70ALL;
  v24 =
      (float)((float)-(
                  float)(v22 -
                         (float)((float)(v20 +
                                         (float)((float)-(
                                                     float)(v21 -
                                                            (float)((float)(v18 -
                                                                            (float)(v19 *
                                                                                    (float)(v9 *
                                                                                            v9))) *
                                                                    (float)(v9 *
                                                                            v9))) *
                                                 (float)(v9 * v9))) *
                                 (float)(v9 * v9))) *
              (float)(v9 * v9)) +
      0x1.0000000000000p+0f;
  v25 =
      v9 *
      (float)((float)((float)-(
                          float)(v16 -
                                 (float)((float)(v15 +
                                                 (float)((float)-(
                                                             float)(v14 -
                                                                    (float)((float)(v13 -
                                                                                    (float)(v12 *
                                                                                            (float)(v9 *
                                                                                                    v9))) *
                                                                            (float)(v9 *
                                                                                    v9))) *
                                                         (float)(v9 * v9))) *
                                         (float)(v9 * v9))) *
                      (float)(v9 * v9)) +
              0x1.0000000000000p+0f);
  v26 = v11 * v24;
  *(float*)&v27 = (float)(PSEUDO_UNFUSED(v25 * 0x0.0p+0f)) + (float)(v1 * v26);
  *(float*)&v28 = (float)(PSEUDO_UNFUSED(v26 * 0x0.0p+0f)) - (float)(v1 * v25);
  *(_QWORD*)&v29 = __PAIR64__(v17, v27);
  *((_QWORD*)&v29 + 1) = v28;
  v46_.v47 = v29;
  return GameRoutine_edec80((_QWORD*)(v23 + 8), &v46_.v46);
}

__attribute__((swiftcall)) void GambitCameraShakeVec_Unknown3(PSEUDO_X8 x8_)
{
  _BYTE* a1 = (_BYTE*)PSEUDO_X8_VALUE(x8_);
  *a1 = 28;
  strcpy(a1 + 1, "CameraShakeVec");
}

#pragma GCC visibility pop
