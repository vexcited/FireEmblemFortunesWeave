#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SdkRoutine_2388c0(__int64, __int64, __int64, __int64, __int64);
__int64 SdkRoutine_238a00(__int64, __int64, __int64, __int64, __int64);
__int64 nn_audio_server_AudioRenderSystem_SetUpDspRenderingTimeBudgetInfo_plt(
    _QWORD, _QWORD, _QWORD);
__int64 nn_audio_server_AudioRenderSystem_SetUpRenderResourceSet_plt(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_audio_server_BehaviorInfo_BehaviorInfo_plt(_QWORD);
__int64 nn_audio_server_BehaviorInfo_SetUserLibRevision_plt(_QWORD, _QWORD);
__int64 nn_audio_server_EffectContext_GetCount_plt(_QWORD);
__int64 nn_audio_server_EffectContext_GetInfo_plt(_QWORD);
__int64 nn_audio_server_MemoryPoolInfo_IsMapped_plt(_QWORD);
__int64 nn_audio_server_MixContext_GetCount_plt(_QWORD);
__int64 nn_audio_server_MixContext_GetInfo_plt(_QWORD, _QWORD);
__int64 nn_audio_server_SinkContext_GetCount_plt(_QWORD);
__int64 nn_audio_server_SinkContext_GetInfo_plt(_QWORD, _QWORD);
__int64 nn_audio_server_SinkInfoBase_IsUsed_plt(void);
__int64 nn_audio_server_VoiceContext_GetCount_plt(_QWORD);
__int64 nn_audio_server_VoiceContext_GetInfo_plt(_QWORD, _QWORD);
__int64 nn_audio_server_AudioRenderSystem_InitializeImpl(__int64 a1,
                                                         __int64* a2, int a3,
                                                         __int64 a4, __int64 a5,
                                                         __int64* a6, int a7);
__int64 nn_audio_server_AudioRenderSystem_DumpRenderResourceSet(void* this_);

__int64 nn_audio_server_AudioRenderSystem_InitializeImpl(__int64 a1,
                                                         __int64* a2, int a3,
                                                         __int64 a4, __int64 a5,
                                                         __int64* a6, int a7)
{
  char v7;
  __int64 v12;
  unsigned int v13;
  int v14;
  __int64 v15;
  int v16;
  char v17;
  int v18;
  char v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 result;
  int v29;
  char v30;

  *(_DWORD*)(a1 + 672) = a7;
  *(_QWORD*)(a1 + 1520) = 0;
  v7 = *(_BYTE*)(a1 + 936);
  *(_WORD*)(a1 + 1512) = 0;
  *(_BYTE*)(a1 + 1514) = 0;
  *(_BYTE*)(a1 + 912) = 1;
  v12 = *a6;
  v13 = *((_DWORD*)a2 + 12);
  *(_DWORD*)(a1 + 920) = a3;
  *(_BYTE*)(a1 + 924) = 1;
  if ((v7 & 1) == 0) {
    *(_BYTE*)(a1 + 936) = 1;
  }
  v14 = *(unsigned __int8*)(a1 + 1136);
  *(_QWORD*)(a1 + 928) = v12;
  if (v14 == 1) {
    *(_BYTE*)(a1 + 1136) = 0;
  }
  v15 = a1 + 944;
  nn_audio_server_BehaviorInfo_BehaviorInfo_plt(a1 + 944);
  *(_BYTE*)(a1 + 1136) = 1;
  nn_audio_server_BehaviorInfo_SetUserLibRevision_plt(a1 + 944, v13);
  v16 = *((_DWORD*)a2 + 4);
  v17 = *((_BYTE*)a2 + 32);
  v18 = *((_DWORD*)a2 + 6) + 4 * v16;
  v19 = *((_BYTE*)a2 + 35);
  *(_DWORD*)(a1 + 24) = v16;
  if (v19 != 0) {
    v17 = 0;
  }
  *(_DWORD*)(a1 + 28) = *((_DWORD*)a2 + 3);
  *(_DWORD*)(a1 + 32) = *((_DWORD*)a2 + 5);
  *(_DWORD*)(a1 + 36) = *((_DWORD*)a2 + 6);
  *(_DWORD*)(a1 + 40) = *((_DWORD*)a2 + 7);
  *(_DWORD*)(a1 + 44) = *((_DWORD*)a2 + 9);
  v20 = *((_DWORD*)a2 + 10);
  *(_BYTE*)(a1 + 52) = v17;
  *(_DWORD*)(a1 + 48) = v20;
  *(_DWORD*)(a1 + 56) = *((_DWORD*)a2 + 2);
  *(_DWORD*)(a1 + 60) = *((_DWORD*)a2 + 1);
  *(_DWORD*)(a1 + 64) = *(_DWORD*)a2;
  *(_DWORD*)(a1 + 72) = *((char*)a2 + 35);
  v21 = *((char*)a2 + 34);
  *(_DWORD*)(a1 + 68) = v18;
  *(_QWORD*)(a1 + 132) = 0x3F80000000000064LL;
  *(_DWORD*)(a1 + 76) = v21;
  v22 = *a2;
  v23 = a2[2];
  *(_QWORD*)(a1 + 88) = a2[1];
  *(_QWORD*)(a1 + 96) = v23;
  *(_QWORD*)(a1 + 80) = v22;
  v24 = a2[3];
  v25 = a2[4];
  v26 = a2[5];
  v27 = *((_DWORD*)a2 + 12);
  *(_QWORD*)(a1 + 144) = v15;
  *(_DWORD*)(a1 + 128) = v27;
  *(_QWORD*)(a1 + 112) = v25;
  *(_QWORD*)(a1 + 120) = v26;
  *(_QWORD*)(a1 + 104) = v24;
  nn_audio_server_AudioRenderSystem_SetUpDspRenderingTimeBudgetInfo_plt(
      a1, a1 + 24, a1 + 920);
  result = nn_audio_server_AudioRenderSystem_SetUpRenderResourceSet_plt(
      a1, a1 + 24, *(unsigned int*)(a1 + 920), a4, a5);
  if ((_DWORD)result == 0) {
    v29 = *(unsigned __int8*)(a1 + 114);
    v30 = *(_BYTE*)(a1 + 112);
    *(_QWORD*)(a1 + 1496) = a1 + 360;
    *(_BYTE*)(a1 + 1480) = v30;
    *(_BYTE*)(a1 + 1481) = v29 == 0;
    *(_DWORD*)(a1 + 1484) = *(_DWORD*)(a1 + 1176);
    if ((v30 & 1) == 0 || v29 != 0) {
      *(_QWORD*)(a1 + 1488) = 0;
    }
    *(_QWORD*)(a1 + 1504) = a1 + 1512;
  }
  return result;
}

__int64 nn_audio_server_AudioRenderSystem_DumpRenderResourceSet(void* this_)
{
  unsigned int v2;
  __int64 v3;
  unsigned int v4;
  _BYTE* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  void (*v11)(__int64, _QWORD*, __int64);
  int v12;
  __int64 v13;
  __int64 v14;
  void (*v15)(__int64, _QWORD*, __int64);
  int v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  struct {
    _QWORD v21[2];
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
    __int64 v33;
    __int64 v34;
    __int64 v35;
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
    __int64 v50;
    __int64 v51;
  } v21_;

  if ((int)nn_audio_server_VoiceContext_GetCount_plt((char*)this_ + 360) >= 1) {
    v2 = 0;
    do {
      v3 = nn_audio_server_VoiceContext_GetInfo_plt((char*)this_ + 360, v2);
      if ((*(_WORD*)(v3 + 36) & 1) != 0) {
        SdkRoutine_2388c0(v2, v3, (__int64)this_ + 360, (__int64)this_ + 640,
                          (__int64)this_ + 448);
      }
      ++v2;
    } while ((int)v2 < (int)nn_audio_server_VoiceContext_GetCount_plt(
                           (char*)this_ + 360));
  }
  if ((int)nn_audio_server_MixContext_GetCount_plt((char*)this_ + 448) >= 1) {
    v4 = 0;
    do {
      v5 = (_BYTE*)nn_audio_server_MixContext_GetInfo_plt((char*)this_ + 448,
                                                          v4);
      if (*v5 == 1) {
        SdkRoutine_238a00(v4, (__int64)v5, (__int64)this_ + 576,
                          (__int64)this_ + 640, (__int64)this_ + 448);
      }
      ++v4;
    } while ((int)v4 <
             (int)nn_audio_server_MixContext_GetCount_plt((char*)this_ + 448));
  }
  if ((int)nn_audio_server_EffectContext_GetCount_plt((char*)this_ + 576) >=
      1) {
    v6 = 0;
    do {
      v7 = nn_audio_server_EffectContext_GetInfo_plt((char*)this_ + 576);
      if (*(_BYTE*)(v7 + 44) == 1) {
        v8 = v7;
        if ((**(unsigned __int8 (***)(__int64))v7)(v7) != 3 &&
            (**(unsigned __int8 (***)(__int64))v8)(v8) != 4 &&
            (**(unsigned __int8 (***)(__int64))v8)(v8) != 5 &&
            (**(unsigned __int8 (***)(__int64))v8)(v8) != 2) {
          (**(void (***)(__int64))v8)(v8);
        }
        (**(void (***)(__int64))v8)(v8);
        v9 = -1;
        do {
          ++v9;
        } while (v9 < (*(int (**)(__int64))(*(_QWORD*)v8 + 24LL))(v8));
        v10 = *(_QWORD*)v8;
        v21_.v50 = 0;
        v21_.v51 = 0;
        v21_.v48 = 0;
        v21_.v49 = 0;
        v21_.v46 = 0;
        v21_.v47 = 0;
        v21_.v44 = 0;
        v21_.v45 = 0;
        v21_.v42 = 0;
        v21_.v43 = 0;
        v21_.v40 = 0;
        v21_.v41 = 0;
        v21_.v38 = 0;
        v21_.v39 = 0;
        v21_.v36 = 0;
        v21_.v37 = 0;
        v21_.v34 = 0;
        v21_.v35 = 0;
        v21_.v32 = 0;
        v21_.v33 = 0;
        v21_.v30 = 0;
        v21_.v31 = 0;
        v21_.v28 = 0;
        v21_.v29 = 0;
        v21_.v26 = 0;
        v21_.v27 = 0;
        v21_.v24 = 0;
        v21_.v25 = 0;
        v21_.v22 = 0;
        v21_.v23 = 0;
        v11 = *(void (**)(__int64, _QWORD*, __int64))(v10 + 16);
        v21_.v21[0] = 0;
        v21_.v21[1] = 0;
        v11(v8, v21_.v21, 256);
      }
      ++v6;
    } while (v6 < (int)nn_audio_server_EffectContext_GetCount_plt((char*)this_ +
                                                                  576));
  }
  if ((int)nn_audio_server_SinkContext_GetCount_plt((char*)this_ + 624) >= 1) {
    v12 = 0;
    do {
      v13 = nn_audio_server_SinkContext_GetInfo_plt((char*)this_ + 624,
                                                    (unsigned int)v12);
      if ((nn_audio_server_SinkInfoBase_IsUsed_plt() & 1) != 0) {
        v14 = *(_QWORD*)v13;
        v21_.v34 = 0;
        v21_.v35 = 0;
        v21_.v32 = 0;
        v21_.v33 = 0;
        v21_.v30 = 0;
        v21_.v31 = 0;
        v21_.v28 = 0;
        v21_.v29 = 0;
        v21_.v26 = 0;
        v21_.v27 = 0;
        v21_.v24 = 0;
        v21_.v25 = 0;
        v15 = *(void (**)(__int64, _QWORD*, __int64))(v14 + 40);
        v21_.v22 = 0;
        v21_.v23 = 0;
        v21_.v21[0] = 0;
        v21_.v21[1] = 0;
        v15(v13, v21_.v21, 128);
        v16 = -1;
        do {
          ++v16;
        } while (v16 < (*(int (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13));
      }
      ++v12;
    } while (v12 <
             (int)nn_audio_server_SinkContext_GetCount_plt((char*)this_ + 624));
  }
  if (*((_QWORD*)this_ + 34) != 0) {
    v17 = 0;
    v18 = 0;
    do {
      v19 = *((_QWORD*)this_ + 33);
      if ((nn_audio_server_MemoryPoolInfo_IsMapped_plt(v19 + v17) & 1) != 0) {
        nn_audio_server_MemoryPoolInfo_IsMapped_plt(v19 + v17);
      }
      ++v18;
      v17 += 48;
    } while (v18 < *((_QWORD*)this_ + 34));
  }
  return nn_audio_server_MemoryPoolInfo_IsMapped_plt((char*)this_ + 288);
}

#pragma GCC visibility pop
