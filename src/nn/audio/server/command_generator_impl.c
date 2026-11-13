#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64
    command_generator_242e60_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                  _QWORD) __asm__("command_generator_242e60");
__int64 nn_audio_server_AddressInfo_Destroy_AddressInfo_plt(_QWORD);
__int64 nn_audio_server_AddressInfo_GetCpuAddr_plt(_QWORD);
__int64 nn_audio_server_AddressInfo_GetReference_plt(_QWORD, _QWORD);
__int64 nn_audio_server_AddressInfo_GetSize_plt(_QWORD);
__int64
    nn_audio_server_BehaviorInfo_IsVolumeMixParameterPrecisionQ23Supported_plt(
        _QWORD);
__int64 nn_audio_server_BehaviorInfo_UseBiquadFilterFloatProcessing_plt(_QWORD);
__int64
    nn_audio_server_BehaviorInfo_UseMultiTapBiquadFilterProcessing_plt(_QWORD);
__int64
nn_audio_server_CommandGenerator_GenerateBiquadFilterCommandForVoice_plt(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, float);
__int64 nn_audio_server_CommandGenerator_GenerateDataSourceCommand_plt(
    _QWORD, _QWORD, _QWORD, _QWORD, float);
__int64 nn_audio_server_CommandGenerator_GenerateVoiceMixCommand_plt(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, float);
__int64
    nn_audio_server_CommandGenerator_GenerateVoiceMixCommandsWithSplitter_plt(
        _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_audio_server_ISplitterDestinationData_GetMixId_plt(_QWORD);
__int64 nn_audio_server_ISplitterDestinationData_GetMixVolumePrev_plt(_QWORD);
__int64
    nn_audio_server_ISplitterDestinationData_GetMixVolume_plt_863280(_QWORD);
__int64 nn_audio_server_ISplitterDestinationData_IsConfigured_plt(void);
__int64
    nn_audio_server_ISplitterDestinationData_MarkAsNeedToUpdateInternalState_plt(
        _QWORD);
__int64 nn_audio_server_MemoryPoolInfo_Translate_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_audio_server_MixContext_GetCount_plt(_QWORD);
__int64 nn_audio_server_MixContext_GetInfo_plt(_QWORD, _QWORD);
__int64 nn_audio_server_SplitterContext_GetDestinationData_plt(_QWORD);
__int64 nn_audio_server_VoiceContext_GetChannelResource_plt(_QWORD, _QWORD);
__int64 nn_audio_server_VoiceContext_GetDspSharedState_plt(_QWORD, _QWORD);
__int64 nn_detail_UnexpectedDefaultImpl_plt_857150(_QWORD);
float nn_audio_server__23cec0(__int64, __int64, float result);
float command_generator_23c0e0(__int64 a1, int a2, __int64* a3, __int64* a4,
                               int* a5, __int16* a6, char* a7);
float command_generator_23c2b0(__int64 a1, int a2, __int64 a3, __int64* a4,
                               int* a5, __int16* a6, char* a7);
float nn_audio_server_CommandGenerator_GenerateBiquadFilterCommandForVoice(
    __int64 a1, __int64 a2, __int64 a3, __int16 a4, char a5, int a6);
__int64 nn_audio_server_CommandGenerator_GenerateVoiceCommand(__int64 a1,
                                                              __int64 a2);
__int64 command_generator_242a60(__int64 a1, __int64 a2);
__int64 command_generator_242c00(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                                 __int16 a5, int a6);
__int64 command_generator_242e60(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                                 __int16 a5, __int16 a6);

float command_generator_23c0e0(__int64 a1, int a2, __int64* a3, __int64* a4,
                               int* a5, __int16* a6, char* a7)
{
  __int64 v8;
  __int64 v9;
  __int16 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v14;
  __int64 v15;
  float v16;
  float result;

  v8 = *(_QWORD*)(a1 + 24) + *(_QWORD*)(a1 + 8);
  *(_WORD*)(v8 + 2) = 96;
  *(_DWORD*)(v8 + 8) = a2;
  *(_BYTE*)(v8 + 1) = 14;
  *(_BYTE*)v8 |= 1u;
  v9 = *(_QWORD*)(a1 + 40);
  ++*(_DWORD*)(a1 + 32);
  *(_QWORD*)(a1 + 24) += 96LL;
  v10 = *a6;
  v11 = *a3;
  v12 = *a4;
  v13 = *a5;
  v14 = *a7;
  *(_WORD*)(v8 + 24) = *a6;
  *(_WORD*)(v8 + 26) = v10 + 1;
  *(_WORD*)(v8 + 28) = v10 + 2;
  *(_WORD*)(v8 + 30) = v10 + 3;
  *(_WORD*)(v8 + 32) = v10 + 4;
  *(_WORD*)(v8 + 34) = v10 + 5;
  *(_WORD*)(v8 + 36) = v10 + 6;
  *(_WORD*)(v8 + 38) = v10 + 7;
  *(_WORD*)(v8 + 40) = v10 + 8;
  *(_WORD*)(v8 + 42) = v10 + 9;
  *(_WORD*)(v8 + 44) = v10 + 10;
  *(_WORD*)(v8 + 46) = v10 + 11;
  *(_WORD*)(v8 + 48) = v10 + 12;
  *(_WORD*)(v8 + 50) = v10 + 13;
  *(_WORD*)(v8 + 52) = v10 + 14;
  *(_WORD*)(v8 + 54) = v10 + 15;
  *(_WORD*)(v8 + 56) = v10 + 16;
  *(_BYTE*)v8 = *(_BYTE*)v8 & 0xFE | v14;
  *(_WORD*)(v8 + 60) = v10 + 18;
  *(_WORD*)(v8 + 58) = v10 + 17;
  *(_WORD*)(v8 + 62) = v10 + 19;
  *(_WORD*)(v8 + 64) = v10 + 20;
  *(_WORD*)(v8 + 66) = v10 + 21;
  *(_WORD*)(v8 + 68) = v10 + 22;
  *(_WORD*)(v8 + 70) = v10 + 23;
  *(_QWORD*)(v8 + 72) =
      nn_audio_server_MemoryPoolInfo_Translate_plt(v9, v11, 96);
  *(_DWORD*)(v8 + 80) = v13;
  *(_QWORD*)(v8 + 88) =
      nn_audio_server_MemoryPoolInfo_Translate_plt(v9, v12, 4 * v13);
  v15 = *(_QWORD*)(a1 + 48);
  if (v15 != 0) {
    v16 = (float)(*(unsigned int (**)(__int64, __int64))(*(_QWORD*)v15 +
                                                         104LL))(v15, v8);
  }
  else {
    v16 = 0.0;
  }
  result = v16 * *(float*)(a1 + 64);
  *(_DWORD*)(v8 + 4) = (unsigned int)result;
  *(_DWORD*)(a1 + 36) += (unsigned int)result;
  return result;
}

float command_generator_23c2b0(__int64 a1, int a2, __int64 a3, __int64* a4,
                               int* a5, __int16* a6, char* a7)
{
  __int64 v8;
  __int64 v9;
  __int16 v10;
  __int64 v11;
  __int64 v12;
  char v13;
  __int64 v14;
  float v15;
  float result;

  v8 = *(_QWORD*)(a1 + 24) + *(_QWORD*)(a1 + 8);
  *(_WORD*)(v8 + 2) = 96;
  *(_DWORD*)(v8 + 8) = a2;
  *(_BYTE*)(v8 + 1) = 14;
  *(_BYTE*)v8 |= 1u;
  v9 = *(_QWORD*)(a1 + 40);
  ++*(_DWORD*)(a1 + 32);
  *(_QWORD*)(a1 + 24) += 96LL;
  v10 = *a6;
  v11 = *a4;
  v12 = *a5;
  v13 = *a7;
  *(_WORD*)(v8 + 24) = *a6;
  *(_WORD*)(v8 + 26) = v10 + 1;
  *(_WORD*)(v8 + 28) = v10 + 2;
  *(_WORD*)(v8 + 30) = v10 + 3;
  *(_WORD*)(v8 + 32) = v10 + 4;
  *(_WORD*)(v8 + 34) = v10 + 5;
  *(_WORD*)(v8 + 36) = v10 + 6;
  *(_WORD*)(v8 + 38) = v10 + 7;
  *(_WORD*)(v8 + 40) = v10 + 8;
  *(_WORD*)(v8 + 42) = v10 + 9;
  *(_WORD*)(v8 + 44) = v10 + 10;
  *(_WORD*)(v8 + 46) = v10 + 11;
  *(_WORD*)(v8 + 48) = v10 + 12;
  *(_WORD*)(v8 + 50) = v10 + 13;
  *(_WORD*)(v8 + 52) = v10 + 14;
  *(_BYTE*)v8 = *(_BYTE*)v8 & 0xFE | v13;
  *(_WORD*)(v8 + 60) = v10 + 18;
  *(_WORD*)(v8 + 54) = v10 + 15;
  *(_WORD*)(v8 + 62) = v10 + 19;
  *(_WORD*)(v8 + 56) = v10 + 16;
  *(_WORD*)(v8 + 64) = v10 + 20;
  *(_WORD*)(v8 + 58) = v10 + 17;
  *(_WORD*)(v8 + 66) = v10 + 21;
  *(_WORD*)(v8 + 68) = v10 + 22;
  *(_WORD*)(v8 + 70) = v10 + 23;
  *(_QWORD*)(v8 + 72) =
      nn_audio_server_MemoryPoolInfo_Translate_plt(v9, a3, 96);
  *(_DWORD*)(v8 + 80) = v12;
  *(_QWORD*)(v8 + 88) =
      nn_audio_server_MemoryPoolInfo_Translate_plt(v9, v11, 4 * v12);
  v14 = *(_QWORD*)(a1 + 48);
  if (v14 != 0) {
    v15 = (float)(*(unsigned int (**)(__int64, __int64))(*(_QWORD*)v14 +
                                                         104LL))(v14, v8);
  }
  else {
    v15 = 0.0;
  }
  result = v15 * *(float*)(a1 + 64);
  *(_DWORD*)(v8 + 4) = (unsigned int)result;
  *(_DWORD*)(a1 + 36) += (unsigned int)result;
  return result;
}

float nn_audio_server_CommandGenerator_GenerateBiquadFilterCommandForVoice(
    __int64 a1, __int64 a2, __int64 a3, __int16 a4, char a5, int a6)
{

#pragma clang fp contract(off)
  int v12;
  int v13;
  int v14;
  float result;
  bool v16;
  int v17;
  __int64 v18;
  char v19;
  __int64 v20;
  __int64 v21;
  __int16 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int v26;
  __int64 v27;
  unsigned int (*v28)(__int64, __int64);
  __int16 v29;
  __int64 v30;
  char v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned int (*v37)(__int64, __int64);
  char v38;
  char v39;
  __int64 v40;
  __int16 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  bool v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  float v49;
  char v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  bool v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  float v59;
  __int64 v60;
  __int64 v61;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  if (*(_BYTE*)(a2 + 72) == 1) {
    v12 = *(unsigned __int8*)(a2 + 96);
  }
  else {
    v12 = 0;
  }
  v13 = nn_audio_server_BehaviorInfo_UseMultiTapBiquadFilterProcessing_plt(
      *(_QWORD*)(*(_QWORD*)(a1 + 24) + 16LL)),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  v14 = nn_audio_server_BehaviorInfo_UseBiquadFilterFloatProcessing_plt(
            *(_QWORD*)(*(_QWORD*)(a1 + 24) + 16LL)) &
        1,
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  if ((*(_WORD*)(a2 + 36) & 0x400) == 0) {
    goto LABEL_29;
  }
  if (*(_BYTE*)(a2 + 68) != 1) {
  LABEL_23:
    if (*(_BYTE*)(a2 + 69) == 1) {
      result = *(float*)(a2 + 140);
      if (result == *(float*)(a2 + 100)) {
        result = *(float*)(a2 + 144);
        if (result == *(float*)(a2 + 104)) {
          result = *(float*)(a2 + 148);
          if (result == *(float*)(a2 + 108)) {
            result = *(float*)(a2 + 152);
            if (result == *(float*)(a2 + 112)) {
              result = *(float*)(a2 + 156);
              v17 = 0;
              v16 = result != *(float*)(a2 + 116);
              goto LABEL_30;
            }
          }
        }
      }
    LABEL_35:
      v29 = a4 + a5;
      if ((*(_BYTE*)(a2 + 72) & 1) == 0) {
        goto LABEL_52;
      }
      if ((*(_WORD*)(a2 + 36) & 0x400) == 0 || (*(_BYTE*)(a2 + 68) & 1) == 0 ||
          *(float*)(a2 + 120) == *(float*)(a2 + 76) &&
              *(float*)(a2 + 124) == *(float*)(a2 + 80) &&
              *(float*)(a2 + 128) == *(float*)(a2 + 84) &&
              *(float*)(a2 + 132) == *(float*)(a2 + 88) &&
              *(float*)(a2 + 136) == *(float*)(a2 + 92)) {
        v30 = *(_QWORD*)(a1 + 8);
        v45 = (*(_BYTE*)(a2 + 68) & 1) == 0;
        v32 = *(_QWORD*)(v30 + 24) + *(_QWORD*)(v30 + 8);
        *(_WORD*)(v32 + 2) = 72;
        *(_DWORD*)(v32 + 8) = a6;
        *(_BYTE*)(v32 + 1) = 10;
        *(_BYTE*)v32 |= 1u;
        v46 = *(_QWORD*)(v30 + 40);
        ++*(_DWORD*)(v30 + 32);
        *(_QWORD*)(v30 + 24) += 72LL;
        *(_WORD*)(v32 + 24) = v29;
        *(_WORD*)(v32 + 26) = v29;
        v47 = *(_QWORD*)(a2 + 76);
        *(_DWORD*)(v32 + 36) = *(_DWORD*)(a2 + 84);
        *(_QWORD*)(v32 + 28) = v47;
        *(_QWORD*)(v32 + 40) = *(_QWORD*)(a2 + 88);
        *(_QWORD*)(v32 + 56) =
            nn_audio_server_MemoryPoolInfo_Translate_plt(v46, a3 + 80, 32),
                         result = COERCE_AS(__typeof__(result),
                                            PSEUDO_REGISTER(float, "s0", "=w"));
        *(_BYTE*)(v32 + 64) = v45;
        *(_BYTE*)(v32 + 65) = v14;
        v48 = *(_QWORD*)(v30 + 48);
        if (v48 != 0) {
          v61 = v48;
          v37 = *(unsigned int (**)(__int64, __int64))(
              *(_QWORD*)v48 + 272LL),
          result =
              COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
          goto LABEL_49;
        }
      }
      else {
        v30 = *(_QWORD*)(a1 + 8);
        v31 = *(_BYTE*)(a2 + 70);
        v32 = *(_QWORD*)(v30 + 24) + *(_QWORD*)(v30 + 8);
        *(_WORD*)(v32 + 2) = 88;
        *(_DWORD*)(v32 + 8) = a6;
        *(_BYTE*)(v32 + 1) = 39;
        *(_BYTE*)v32 |= 1u;
        v33 = *(_QWORD*)(v30 + 40);
        ++*(_DWORD*)(v30 + 32);
        *(_QWORD*)(v30 + 24) += 88LL;
        *(_WORD*)(v32 + 24) = v29;
        *(_WORD*)(v32 + 26) = v29;
        *(_BYTE*)(v32 + 28) = v31;
        v34 = *(_QWORD*)(a2 + 120);
        *(_DWORD*)(v32 + 44) = *(_DWORD*)(a2 + 128);
        *(_QWORD*)(v32 + 36) = v34;
        *(_QWORD*)(v32 + 48) = *(_QWORD*)(a2 + 132);
        v35 = *(_QWORD*)(a2 + 76);
        *(_DWORD*)(v32 + 64) = *(_DWORD*)(a2 + 84);
        *(_QWORD*)(v32 + 56) = v35;
        *(_QWORD*)(v32 + 68) = *(_QWORD*)(a2 + 88);
        *(_QWORD*)(v32 + 80) =
            nn_audio_server_MemoryPoolInfo_Translate_plt(v33, a3 + 80, 32),
                         result = COERCE_AS(__typeof__(result),
                                            PSEUDO_REGISTER(float, "s0", "=w"));
        v36 = *(_QWORD*)(v30 + 48);
        if (v36 != 0) {
          v61 = v36;
          v37 = *(unsigned int (**)(__int64, __int64))(
              *(_QWORD*)v36 + 312LL),
          result =
              COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
        LABEL_49:
          v49 = (float)v37(v61, v32),
          result =
              COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
        LABEL_51:
          result = v49 * *(float*)(v30 + 64);
          *(_DWORD*)(v32 + 4) = (unsigned int)result;
          *(_DWORD*)(v30 + 36) += (unsigned int)result;
        LABEL_52:
          if (*(_BYTE*)(a2 + 96) != 1) {
            return result;
          }
          if ((*(_WORD*)(a2 + 36) & 0x400) == 0 ||
              (*(_BYTE*)(a2 + 69) & 1) == 0 ||
              *(float*)(a2 + 140) == *(float*)(a2 + 100) &&
                  *(float*)(a2 + 144) == *(float*)(a2 + 104) &&
                  *(float*)(a2 + 148) == *(float*)(a2 + 108) &&
                  *(float*)(a2 + 152) == *(float*)(a2 + 112) &&
                  *(float*)(a2 + 156) == *(float*)(a2 + 116)) {
            v18 = *(_QWORD*)(a1 + 8);
            v55 = (*(_BYTE*)(a2 + 69) & 1) == 0;
            v20 = *(_QWORD*)(v18 + 24) + *(_QWORD*)(v18 + 8);
            *(_WORD*)(v20 + 2) = 72;
            *(_DWORD*)(v20 + 8) = a6;
            *(_BYTE*)(v20 + 1) = 10;
            *(_BYTE*)v20 |= 1u;
            v56 = *(_QWORD*)(v18 + 40);
            ++*(_DWORD*)(v18 + 32);
            *(_QWORD*)(v18 + 24) += 72LL;
            *(_WORD*)(v20 + 24) = v29;
            *(_WORD*)(v20 + 26) = v29;
            v57 = *(_QWORD*)(a2 + 100);
            *(_DWORD*)(v20 + 36) = *(_DWORD*)(a2 + 108);
            *(_QWORD*)(v20 + 28) = v57;
            *(_QWORD*)(v20 + 40) = *(_QWORD*)(a2 + 112);
            *(_QWORD*)(v20 + 56) =
                nn_audio_server_MemoryPoolInfo_Translate_plt(v56, a3 + 112, 32),
                             result =
                                 COERCE_AS(__typeof__(result),
                                           PSEUDO_REGISTER(float, "s0", "=w"));
            *(_BYTE*)(v20 + 64) = v55;
            *(_BYTE*)(v20 + 65) = v14;
            v58 = *(_QWORD*)(v18 + 48);
            if (v58 != 0) {
              v60 = v58;
              v28 = *(unsigned int (**)(__int64, __int64))(
                  *(_QWORD*)v58 + 272LL),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
              goto LABEL_64;
            }
          }
          else {
            v18 = *(_QWORD*)(a1 + 8);
            v50 = *(_BYTE*)(a2 + 70);
            v20 = *(_QWORD*)(v18 + 24) + *(_QWORD*)(v18 + 8);
            *(_WORD*)(v20 + 2) = 88;
            *(_DWORD*)(v20 + 8) = a6;
            *(_BYTE*)(v20 + 1) = 39;
            *(_BYTE*)v20 |= 1u;
            v51 = *(_QWORD*)(v18 + 40);
            ++*(_DWORD*)(v18 + 32);
            *(_QWORD*)(v18 + 24) += 88LL;
            *(_WORD*)(v20 + 24) = v29;
            *(_WORD*)(v20 + 26) = v29;
            *(_BYTE*)(v20 + 28) = v50;
            v52 = *(_QWORD*)(a2 + 140);
            *(_DWORD*)(v20 + 44) = *(_DWORD*)(a2 + 148);
            *(_QWORD*)(v20 + 36) = v52;
            *(_QWORD*)(v20 + 48) = *(_QWORD*)(a2 + 152);
            v53 = *(_QWORD*)(a2 + 100);
            *(_DWORD*)(v20 + 64) = *(_DWORD*)(a2 + 108);
            *(_QWORD*)(v20 + 56) = v53;
            *(_QWORD*)(v20 + 68) = *(_QWORD*)(a2 + 112);
            *(_QWORD*)(v20 + 80) =
                nn_audio_server_MemoryPoolInfo_Translate_plt(v51, a3 + 112, 32),
                             result =
                                 COERCE_AS(__typeof__(result),
                                           PSEUDO_REGISTER(float, "s0", "=w"));
            v54 = *(_QWORD*)(v18 + 48);
            if (v54 != 0) {
              v60 = v54;
              v28 = *(unsigned int (**)(__int64, __int64))(
                  *(_QWORD*)v54 + 312LL),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
              goto LABEL_64;
            }
          }
          goto LABEL_65;
        }
      }
      v49 = 0x0.0p+0f;
      goto LABEL_51;
    }
  LABEL_29:
    v17 = 0;
    v16 = false;
    goto LABEL_30;
  }
  if (*(float*)(a2 + 120) == *(float*)(a2 + 76) &&
          *(float*)(a2 + 124) == *(float*)(a2 + 80) &&
          *(float*)(a2 + 128) == *(float*)(a2 + 84) &&
          *(float*)(a2 + 132) == *(float*)(a2 + 88) &&
          *(float*)(a2 + 136) == *(float*)(a2 + 92) ||
      *(_BYTE*)(a2 + 69) != 1 ||
      (result = *(float*)(a2 + 140)) == *(float*)(a2 + 100) &&
          (result = *(float*)(a2 + 144)) == *(float*)(a2 + 104) &&
          (result = *(float*)(a2 + 148)) == *(float*)(a2 + 108) &&
          (result = *(float*)(a2 + 152)) == *(float*)(a2 + 112) &&
          (result = *(float*)(a2 + 156)) == *(float*)(a2 + 116)) {
    result = *(float*)(a2 + 120);
    if (result != *(float*)(a2 + 76)) {
      goto LABEL_35;
    }
    result = *(float*)(a2 + 124);
    if (result != *(float*)(a2 + 80)) {
      goto LABEL_35;
    }
    result = *(float*)(a2 + 128);
    if (result != *(float*)(a2 + 84)) {
      goto LABEL_35;
    }
    result = *(float*)(a2 + 132);
    if (result != *(float*)(a2 + 88)) {
      goto LABEL_35;
    }
    result = *(float*)(a2 + 136);
    if (result != *(float*)(a2 + 92)) {
      goto LABEL_35;
    }
    goto LABEL_23;
  }
  v16 = false;
  v17 = 1;
LABEL_30:
  if (v16 || (v13 & v14 & v12) == 0) {
    goto LABEL_35;
  }
  if (v17 == 0) {
    v18 = *(_QWORD*)(a1 + 8);
    v38 = *(_BYTE*)(a2 + 69) ^ 1;
    v39 = *(_BYTE*)(a2 + 68) ^ 1;
    v20 = *(_QWORD*)(v18 + 24) + *(_QWORD*)(v18 + 8);
    *(_WORD*)(v20 + 2) = 104;
    *(_DWORD*)(v20 + 8) = a6;
    *(_BYTE*)(v20 + 1) = 30;
    *(_BYTE*)v20 |= 1u;
    v40 = *(_QWORD*)(v18 + 40);
    ++*(_DWORD*)(v18 + 32);
    *(_QWORD*)(v18 + 24) += 104LL;
    v41 = a4 + a5;
    *(_WORD*)(v20 + 24) = v41;
    *(_WORD*)(v20 + 26) = v41;
    *(_BYTE*)(v20 + 98) = 2;
    v42 = *(_QWORD*)(a2 + 76);
    *(_DWORD*)(v20 + 40) = *(_DWORD*)(a2 + 84);
    *(_QWORD*)(v20 + 32) = v42;
    *(_QWORD*)(v20 + 56) = *(_QWORD*)(a2 + 88);
    *(_QWORD*)(v20 + 80) =
        nn_audio_server_MemoryPoolInfo_Translate_plt(v40, a3 + 80, 32),
                     result = COERCE_AS(__typeof__(result),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
    *(_BYTE*)(v20 + 96) = v39;
    v43 = *(_DWORD*)(a2 + 108);
    *(_QWORD*)(v20 + 44) = *(_QWORD*)(a2 + 100);
    *(_DWORD*)(v20 + 52) = v43;
    *(_QWORD*)(v20 + 64) = *(_QWORD*)(a2 + 112);
    *(_QWORD*)(v20 + 88) =
        nn_audio_server_MemoryPoolInfo_Translate_plt(v40, a3 + 112, 32),
                     result = COERCE_AS(__typeof__(result),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
    *(_BYTE*)(v20 + 97) = v38;
    v44 = *(_QWORD*)(v18 + 48);
    if (v44 != 0) {
      v60 = v44;
      v28 = *(unsigned int (**)(__int64, __int64))(
          *(_QWORD*)v44 + 280LL),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
      goto LABEL_64;
    }
  LABEL_65:
    v59 = 0x0.0p+0f;
    goto LABEL_66;
  }
  v18 = *(_QWORD*)(a1 + 8);
  v19 = *(_BYTE*)(a2 + 70);
  v20 = *(_QWORD*)(v18 + 24) + *(_QWORD*)(v18 + 8);
  *(_WORD*)(v20 + 2) = 144;
  *(_DWORD*)(v20 + 8) = a6;
  *(_BYTE*)(v20 + 1) = 40;
  *(_BYTE*)v20 |= 1u;
  v21 = *(_QWORD*)(v18 + 40);
  ++*(_DWORD*)(v18 + 32);
  *(_QWORD*)(v18 + 24) += 144LL;
  v22 = a4 + a5;
  *(_WORD*)(v20 + 24) = v22;
  *(_WORD*)(v20 + 26) = v22;
  *(_BYTE*)(v20 + 136) = 2;
  v23 = *(_QWORD*)(a2 + 120);
  *(_DWORD*)(v20 + 44) = *(_DWORD*)(a2 + 128);
  *(_QWORD*)(v20 + 36) = v23;
  *(_QWORD*)(v20 + 60) = *(_QWORD*)(a2 + 132);
  v24 = *(_QWORD*)(a2 + 76);
  *(_DWORD*)(v20 + 84) = *(_DWORD*)(a2 + 84);
  *(_QWORD*)(v20 + 76) = v24;
  *(_QWORD*)(v20 + 100) = *(_QWORD*)(a2 + 88);
  *(_QWORD*)(v20 + 120) =
      nn_audio_server_MemoryPoolInfo_Translate_plt(v21, a3 + 80, 32),
                   result = COERCE_AS(__typeof__(result),
                                      PSEUDO_REGISTER(float, "s0", "=w"));
  v25 = *(_DWORD*)(a2 + 148);
  *(_QWORD*)(v20 + 48) = *(_QWORD*)(a2 + 140);
  *(_DWORD*)(v20 + 56) = v25;
  *(_QWORD*)(v20 + 68) = *(_QWORD*)(a2 + 152);
  v26 = *(_DWORD*)(a2 + 108);
  *(_QWORD*)(v20 + 88) = *(_QWORD*)(a2 + 100);
  *(_DWORD*)(v20 + 96) = v26;
  *(_QWORD*)(v20 + 108) = *(_QWORD*)(a2 + 112);
  *(_QWORD*)(v20 + 128) =
      nn_audio_server_MemoryPoolInfo_Translate_plt(v21, a3 + 112, 32),
                   result = COERCE_AS(__typeof__(result),
                                      PSEUDO_REGISTER(float, "s0", "=w"));
  *(_BYTE*)(v20 + 28) = v19;
  v27 = *(_QWORD*)(v18 + 48);
  if (v27 == 0) {
    goto LABEL_65;
  }
  v60 = v27;
  v28 = *(unsigned int (**)(__int64, __int64))(
      *(_QWORD*)v27 + 320LL),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
LABEL_64:
  v59 = (float)v28(v60, v20),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
LABEL_66:
  result = v59 * *(float*)(v18 + 64);
  *(_DWORD*)(v20 + 4) = (unsigned int)result;
  *(_DWORD*)(v18 + 36) += (unsigned int)result;
  return result;
}

__int64 nn_audio_server_CommandGenerator_GenerateVoiceCommand(__int64 a1,
                                                              __int64 a2)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  char v9;
  float v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  float v14;
  int v15;
  _QWORD* v16;
  int v17;
  int v18;
  float v19;
  float v20;
  int v21;
  __int64 v22;
  __int64 v23;
  int v24;
  float v25;
  float v26;
  float v27;
  int v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  float v33;
  float v34;
  float v35;
  __int64 v36;
  __int64 v37;
  __int16 v38;
  int v39;
  __int64 v40;
  float v41;
  float v42;
  int v43;
  __int64 v44;
  __int64 v45;
  int v46;
  __int64 v47;
  float v48;
  float v49;
  __int64 v50;
  __int64 v51;
  __int16 v52;
  __int64 v53;
  __int64 v54;
  float v55;
  float v56;
  int v57;
  __int64 v58;
  int v59;
  __int64 v60;
  unsigned int v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  float v68;
  __int64 v69;
  float v70;
  float v71;
  int v72;
  __int64 v73;
  __int64 v74;
  int v75;
  float v76;
  float v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  int v84;
  __int64 v85;
  char v86;
  struct {
    _QWORD v87[2];
    unsigned int v88;
  } v87_;
  struct {
    _BYTE v89[8];
    __int64 v90;
    __int64 v91;
    int v92;
    int v93;
    int v94;
    char gap84_[4];
    int v95;
    char v96;
    char gap93_[11];
    __int64 v97;
  } v89_;

  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
  v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(float, "s0", "=w")),
  v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
  result =
      nn_audio_server_BehaviorInfo_IsVolumeMixParameterPrecisionQ23Supported_plt(
          *(_QWORD*)(*(_QWORD*)(a1 + 24) + 16LL)),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
  v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
  v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(float, "s0", "=w")),
  v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
  v5 = (unsigned int)*(char*)(a2 + 4);
  if ((int)v5 >= 1) {
    v6 = *(_DWORD*)(a2 + 12);
    v7 = a2 + 544;
    v8 = 0;
    v85 = (unsigned int)*(char*)(a2 + 4);
    if ((result & 1) != 0) {
      v9 = 23;
    }
    else {
      v9 = 15;
    }
    v86 = v9;
    v10 = (float)(unsigned int)(1 << v9);
    do {
      v11 = *(_DWORD*)(v7 + 4 * v8);
      v12 = nn_audio_server_VoiceContext_GetDspSharedState_plt(
          *(_QWORD*)(a1 + 32), v11),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
      v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(float, "s0", "=w")),
      v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
      v13 = nn_audio_server_VoiceContext_GetChannelResource_plt(
          *(_QWORD*)(a1 + 32), v11),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
      v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(float, "s0", "=w")),
      v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
      v15 = *(unsigned __int8*)(a2 + 38);
      v16 = (_QWORD*)v13;
      v87_.v87[0] = a1;
      v87_.v88 = v6;
      if (v15 == 5) {
        v17 = 10;
      }
      else {
        v17 = 2;
      }
      if (v15 == 2) {
        v18 = 1;
      }
      else {
        v18 = v17;
      }
      LODWORD(v87_.v87[1]) = 1;
      HIDWORD(v87_.v87[1]) = v18;
      v19 = nn_audio_server__23cec0((__int64)v89_.v89, (__int64)v87_.v87, v14),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
      v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(float, "s0", "=w")),
      v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
      result = nn_audio_server_CommandGenerator_GenerateDataSourceCommand_plt(
          v89_.v90, a2, v12, (unsigned int)v8, v19),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
      v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
      v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(float, "s0", "=w")),
      v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v89_.v96 == 1) {
        v21 = v89_.v95;
        v22 = *(_QWORD*)(v89_.v90 + 8);
        v23 = *(_QWORD*)(v22 + 24) + *(_QWORD*)(v22 + 8);
        *(_WORD*)(v23 + 2) = 40;
        *(_DWORD*)(v23 + 8) = v21;
        *(_BYTE*)(v23 + 1) = 24;
        *(_BYTE*)v23 |= 1u;
        ++*(_DWORD*)(v22 + 32);
        *(_QWORD*)(v22 + 24) += 40LL;
        *(_QWORD*)(v23 + 16) = v89_.v91;
        v24 = v89_.v93;
        *(_DWORD*)(v23 + 28) = v89_.v92;
        *(_DWORD*)(v23 + 32) = v24;
        *(_DWORD*)(v23 + 36) = v89_.v94;
        *(_DWORD*)(v23 + 24) = 2;
        result = *(_QWORD*)(v22 + 48);
        if (result != 0) {
          result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result +
                                                      184LL))(result, v23),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
          v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(float, "s0", "=w")),
          v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
          v25 = (float)(unsigned int)result;
        }
        else {
          v25 = 0x0.0p+0f;
        }
        v20 = v25 * *(float*)(v22 + 64);
        *(_DWORD*)(v23 + 4) = (unsigned int)v20;
        *(_DWORD*)(v22 + 36) += (unsigned int)v20;
      }
      if ((*(_WORD*)(a2 + 36) & 4) != 0) {
        *(_DWORD*)(a2 + 52) = 0;
      }
      else if (*(_DWORD*)(a2 + 64) != -1 || *(_DWORD*)(a2 + 16) != 0x7FFFFFFF) {
        v87_.v88 = v6;
        v87_.v87[0] = a1;
        v87_.v87[1] = 0x400000001LL;
        v26 =
            nn_audio_server__23cec0((__int64)v89_.v89, (__int64)v87_.v87, v20),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
        v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
        v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(float, "s0", "=w")),
        v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
        nn_audio_server_CommandGenerator_GenerateBiquadFilterCommandForVoice_plt(
            v89_.v90, a2, v12, *(unsigned int*)(*(_QWORD*)(a1 + 24) + 8LL),
            (unsigned int)v8, v6, v26),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(float, "s0", "=w")),
            v70 =
                COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
        if (v89_.v96 == 1) {
          v28 = v89_.v95;
          v29 = *(_QWORD*)(v89_.v90 + 8);
          v30 = *(_QWORD*)(v29 + 24) + *(_QWORD*)(v29 + 8);
          *(_WORD*)(v30 + 2) = 40;
          *(_DWORD*)(v30 + 8) = v28;
          *(_BYTE*)(v30 + 1) = 24;
          *(_BYTE*)v30 |= 1u;
          ++*(_DWORD*)(v29 + 32);
          *(_QWORD*)(v29 + 24) += 40LL;
          *(_QWORD*)(v30 + 16) = v89_.v91;
          v31 = v89_.v93;
          *(_DWORD*)(v30 + 28) = v89_.v92;
          *(_DWORD*)(v30 + 32) = v31;
          *(_DWORD*)(v30 + 36) = v89_.v94;
          *(_DWORD*)(v30 + 24) = 2;
          v32 = *(_QWORD*)(v29 + 48);
          if (v32 != 0) {
            v33 = (float)(*(unsigned int (**)(__int64, __int64))(
                *(_QWORD*)v32 + 184LL))(v32, v30),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(float, "s0", "=w")),
            v70 =
                COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
          }
          else {
            v33 = 0x0.0p+0f;
          }
          v27 = v33 * *(float*)(v29 + 64);
          *(_DWORD*)(v30 + 4) = (unsigned int)v27;
          *(_DWORD*)(v29 + 36) += (unsigned int)v27;
        }
        v87_.v88 = v6;
        v87_.v87[0] = a1;
        v87_.v87[1] = 0x300000001LL;
        nn_audio_server__23cec0((__int64)v89_.v89, (__int64)v87_.v87, v27),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(float, "s0", "=w")),
            v70 =
                COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
        v35 = *(float*)(a2 + 48);
        v34 = *(float*)(a2 + 52);
        v36 = *(_QWORD*)(v89_.v90 + 8);
        v37 = *(_QWORD*)(v36 + 24) + *(_QWORD*)(v36 + 8);
        v38 = *(_DWORD*)(*(_QWORD*)(a1 + 24) + 8LL) + v8;
        *(_WORD*)(v37 + 2) = 32;
        *(_DWORD*)(v37 + 8) = v6;
        *(_BYTE*)(v37 + 1) = 8;
        *(_BYTE*)v37 |= 1u;
        ++*(_DWORD*)(v36 + 32);
        *(_QWORD*)(v36 + 24) += 32LL;
        *(_WORD*)(v37 + 20) = v38;
        *(_WORD*)(v37 + 22) = v38;
        v39 = (int)(float)(v35 * v10);
        if (v34 == v35) {
          v39 = (int)(float)(v34 * v10);
        }
        *(_DWORD*)(v37 + 24) = (int)(float)(v34 * v10);
        *(_DWORD*)(v37 + 28) = v39;
        *(_BYTE*)(v37 + 19) = v86;
        v40 = *(_QWORD*)(v36 + 48);
        if (v40 != 0) {
          v41 = (float)(*(unsigned int (**)(__int64, __int64))(*(_QWORD*)v40 +
                                                               64LL))(v40, v37),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
          v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(float, "s0", "=w")),
          v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
        }
        else {
          v41 = 0x0.0p+0f;
        }
        v42 = v41 * *(float*)(v36 + 64);
        *(_DWORD*)(v37 + 4) = (unsigned int)v42;
        *(_DWORD*)(v36 + 36) += (unsigned int)v42;
        if (v89_.v96 == 1) {
          v43 = v89_.v95;
          v44 = *(_QWORD*)(v89_.v90 + 8);
          v45 = *(_QWORD*)(v44 + 24) + *(_QWORD*)(v44 + 8);
          *(_WORD*)(v45 + 2) = 40;
          *(_DWORD*)(v45 + 8) = v43;
          *(_BYTE*)(v45 + 1) = 24;
          *(_BYTE*)v45 |= 1u;
          ++*(_DWORD*)(v44 + 32);
          *(_QWORD*)(v44 + 24) += 40LL;
          *(_QWORD*)(v45 + 16) = v89_.v91;
          v46 = v89_.v93;
          *(_DWORD*)(v45 + 28) = v89_.v92;
          *(_DWORD*)(v45 + 32) = v46;
          *(_DWORD*)(v45 + 36) = v89_.v94;
          *(_DWORD*)(v45 + 24) = 2;
          v47 = *(_QWORD*)(v44 + 48);
          if (v47 != 0) {
            v48 = (float)(*(unsigned int (**)(__int64, __int64))(
                *(_QWORD*)v47 + 184LL))(v47, v45),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(float, "s0", "=w")),
            v70 =
                COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
          }
          else {
            v48 = 0x0.0p+0f;
          }
          v49 = v48 * *(float*)(v44 + 64);
          *(_DWORD*)(v45 + 4) = (unsigned int)v49;
          *(_DWORD*)(v44 + 36) += (unsigned int)v49;
        }
        *(_DWORD*)(a2 + 52) = *(_DWORD*)(a2 + 48);
        v50 = *(_QWORD*)(a1 + 24);
        if (**(_BYTE**)(v50 + 48) == 1) {
          v51 = *(_QWORD*)(a1 + 8);
          v52 = *(_DWORD*)(v50 + 8) + v8;
          v53 = *(_QWORD*)(v51 + 24) + *(_QWORD*)(v51 + 8);
          *(_WORD*)(v53 + 2) = 32;
          *(_DWORD*)(v53 + 8) = v6;
          *(_BYTE*)(v53 + 1) = 38;
          *(_BYTE*)v53 |= 1u;
          ++*(_DWORD*)(v51 + 32);
          *(_QWORD*)(v51 + 24) += 32LL;
          *(_WORD*)(v53 + 16) = v52;
          *(_WORD*)(v53 + 18) = 1;
          *(_DWORD*)(v53 + 20) = 0x7FFF;
          v54 = *(_QWORD*)(v51 + 48);
          if (v54 != 0) {
            v55 = (float)(*(unsigned int (**)(__int64, __int64))(
                *(_QWORD*)v54 + 304LL))(v54, v53),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(float, "s0", "=w")),
            v70 =
                COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
          }
          else {
            v55 = 0x0.0p+0f;
          }
          v56 = v55 * *(float*)(v51 + 64);
          *(_DWORD*)(v53 + 4) = (unsigned int)v56;
          *(_DWORD*)(v51 + 36) += (unsigned int)v56;
        }
        if (*(_DWORD*)(a2 + 64) == -1) {
          v69 = nn_audio_server_MixContext_GetInfo_plt(
              *(_QWORD*)(a1 + 40), *(unsigned int*)(a2 + 16)),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
          v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(float, "s0", "=w")),
          v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
          v87_.v88 = v6;
          v87_.v87[0] = a1;
          v87_.v87[1] = 0x500000001LL;
          v71 = nn_audio_server__23cec0((__int64)v89_.v89, (__int64)v87_.v87,
                                        v70),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
          v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(float, "s0", "=w")),
          v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
          result = nn_audio_server_CommandGenerator_GenerateVoiceMixCommand_plt(
              v89_.v90, v16, v16 + 12, v12 + 144, *(unsigned int*)(v69 + 2364),
              *(unsigned int*)(v69 + 20),
              (unsigned int)(*(_DWORD*)(*(_QWORD*)(a1 + 24) + 8LL) + v8), v6,
              v71),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
          v27 = COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
          v68 = COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(float, "s0", "=w")),
          v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
          if (v89_.v96 == 1) {
            v72 = v89_.v95;
            v73 = *(_QWORD*)(v89_.v90 + 8);
            v74 = *(_QWORD*)(v73 + 24) + *(_QWORD*)(v73 + 8);
            *(_WORD*)(v74 + 2) = 40;
            *(_DWORD*)(v74 + 8) = v72;
            *(_BYTE*)(v74 + 1) = 24;
            *(_BYTE*)v74 |= 1u;
            ++*(_DWORD*)(v73 + 32);
            *(_QWORD*)(v73 + 24) += 40LL;
            *(_QWORD*)(v74 + 16) = v89_.v91;
            v75 = v89_.v93;
            *(_DWORD*)(v74 + 28) = v89_.v92;
            *(_DWORD*)(v74 + 32) = v75;
            *(_DWORD*)(v74 + 36) = v89_.v94;
            *(_DWORD*)(v74 + 24) = 2;
            result = *(_QWORD*)(v73 + 48);
            if (result != 0) {
              result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result +
                                                          184LL))(result, v74),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v70 = COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(float, "s0", "=w"));
              v76 = (float)(unsigned int)result;
            }
            else {
              v76 = 0x0.0p+0f;
            }
            v77 = v76 * *(float*)(v73 + 64);
            *(_DWORD*)(v74 + 4) = (unsigned int)v77;
            *(_DWORD*)(v73 + 36) += (unsigned int)v77;
          }
          v78 = v16[9];
          v16[20] = v16[8];
          v16[21] = v78;
          v79 = v16[11];
          v16[22] = v16[10];
          v16[23] = v79;
          v80 = v16[5];
          v16[16] = v16[4];
          v16[17] = v80;
          v81 = v16[7];
          v16[18] = v16[6];
          v16[19] = v81;
          v82 = v16[1];
          v16[12] = *v16;
          v16[13] = v82;
          v83 = v16[3];
          v16[14] = v16[2];
          v16[15] = v83;
        }
        else {
          v57 = v8;
          v89_.v97 = v12 + 144;
          do {
            result = nn_audio_server_SplitterContext_GetDestinationData_plt(
                *(_QWORD*)(a1 + 64)),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(float, "s0", "=w")),
            v70 =
                COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
            if (result == 0) {
              break;
            }
            v58 = result;
            result =
                nn_audio_server_ISplitterDestinationData_IsConfigured_plt(),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w")),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w")),
            v27 =
                COERCE_AS(__typeof__(v27), PSEUDO_REGISTER(float, "s0", "=w")),
            v68 =
                COERCE_AS(__typeof__(v68), PSEUDO_REGISTER(float, "s0", "=w")),
            v70 =
                COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
            if ((result & 1) != 0) {
              v59 = nn_audio_server_ISplitterDestinationData_GetMixId_plt(v58),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v70 = COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(float, "s0", "=w"));
              result =
                  nn_audio_server_MixContext_GetCount_plt(*(_QWORD*)(a1 + 40)),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v27 = COERCE_AS(__typeof__(v27),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v68 = COERCE_AS(__typeof__(v68),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v70 = COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(float, "s0", "=w"));
              if (v59 < (int)result) {
                result =
                    nn_audio_server_ISplitterDestinationData_GetMixId_plt(v58),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v20 = COERCE_AS(__typeof__(v20),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v27 = COERCE_AS(__typeof__(v27),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v68 = COERCE_AS(__typeof__(v68),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v70 = COERCE_AS(__typeof__(v70),
                                PSEUDO_REGISTER(float, "s0", "=w"));
                if ((_DWORD)result != -1) {
                  v60 = *(_QWORD*)(a1 + 40);
                  v61 = nn_audio_server_ISplitterDestinationData_GetMixId_plt(
                      v58),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v20 = COERCE_AS(__typeof__(v20),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v27 = COERCE_AS(__typeof__(v27),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v68 = COERCE_AS(__typeof__(v68),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v70 = COERCE_AS(__typeof__(v70),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
                  v62 = nn_audio_server_MixContext_GetInfo_plt(v60, v61),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v20 = COERCE_AS(__typeof__(v20),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v27 = COERCE_AS(__typeof__(v27),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v68 = COERCE_AS(__typeof__(v68),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v70 = COERCE_AS(__typeof__(v70),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
                  if (((*(__int64 (**)(__int64))(*(_QWORD*)v58 + 8LL))(v58) &
                       1) != 0) {
                    nn_audio_server_CommandGenerator_GenerateVoiceMixCommandsWithSplitter_plt(
                        a1, v58, *(unsigned int*)(v62 + 2364),
                        *(unsigned int*)(v62 + 20),
                        (unsigned int)(*(_DWORD*)(*(_QWORD*)(a1 + 24) + 8LL) +
                                       v8),
                        v6),
                        v14 = COERCE_AS(__typeof__(v14),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v20 = COERCE_AS(__typeof__(v20),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v27 = COERCE_AS(__typeof__(v27),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v68 = COERCE_AS(__typeof__(v68),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v70 = COERCE_AS(__typeof__(v70),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
                  }
                  else {
                    v63 = v7;
                    v64 = (*(__int64 (**)(__int64))(*(_QWORD*)v58 + 32LL))(v58),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v20 = COERCE_AS(__typeof__(v20),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v27 = COERCE_AS(__typeof__(v27),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v68 = COERCE_AS(__typeof__(v68),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v70 = COERCE_AS(__typeof__(v70),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                    v65 = v89_.v97;
                    if (v64 != 0) {
                      v65 =
                          (*(__int64 (**)(__int64))(*(_QWORD*)v58 + 32LL))(v58),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v20 = COERCE_AS(__typeof__(v20),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v27 = COERCE_AS(__typeof__(v27),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v68 = COERCE_AS(__typeof__(v68),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v70 = COERCE_AS(__typeof__(v70),
                                      PSEUDO_REGISTER(float, "s0", "=w"));
                    }
                    v66 =
                        nn_audio_server_ISplitterDestinationData_GetMixVolume_plt_863280(
                            v58),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v20 = COERCE_AS(__typeof__(v20),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v27 = COERCE_AS(__typeof__(v27),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v68 = COERCE_AS(__typeof__(v68),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v70 = COERCE_AS(__typeof__(v70),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                    v67 =
                        nn_audio_server_ISplitterDestinationData_GetMixVolumePrev_plt(
                            v58),
                    v14 = COERCE_AS(__typeof__(v14),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v20 = COERCE_AS(__typeof__(v20),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v27 = COERCE_AS(__typeof__(v27),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v68 = COERCE_AS(__typeof__(v68),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v70 = COERCE_AS(__typeof__(v70),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                    nn_audio_server_CommandGenerator_GenerateVoiceMixCommand_plt(
                        a1, v66, v67, v65, *(unsigned int*)(v62 + 2364),
                        *(unsigned int*)(v62 + 20),
                        (unsigned int)(*(_DWORD*)(*(_QWORD*)(a1 + 24) + 8LL) +
                                       v8),
                        v6, v68),
                        v14 = COERCE_AS(__typeof__(v14),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v20 = COERCE_AS(__typeof__(v20),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v27 = COERCE_AS(__typeof__(v27),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v68 = COERCE_AS(__typeof__(v68),
                                        PSEUDO_REGISTER(float, "s0", "=w")),
                        v70 = COERCE_AS(__typeof__(v70),
                                        PSEUDO_REGISTER(float, "s0", "=w"));
                    v7 = v63;
                    v5 = v85;
                  }
                  nn_audio_server_ISplitterDestinationData_MarkAsNeedToUpdateInternalState_plt(
                      v58),
                      v14 = COERCE_AS(__typeof__(v14),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v20 = COERCE_AS(__typeof__(v20),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v27 = COERCE_AS(__typeof__(v27),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v68 = COERCE_AS(__typeof__(v68),
                                      PSEUDO_REGISTER(float, "s0", "=w")),
                      v70 = COERCE_AS(__typeof__(v70),
                                      PSEUDO_REGISTER(float, "s0", "=w"));
                  result =
                      (*(__int64 (**)(__int64))(*(_QWORD*)v58 + 48LL))(v58),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v20 = COERCE_AS(__typeof__(v20),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v27 = COERCE_AS(__typeof__(v27),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v68 = COERCE_AS(__typeof__(v68),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v70 = COERCE_AS(__typeof__(v70),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
                }
              }
            }
            v57 += v5;
          } while (*(_DWORD*)(a2 + 64) != -1);
        }
        *(_BYTE*)(a2 + 68) = *(_BYTE*)(a2 + 72);
        *(_BYTE*)(a2 + 69) = *(_BYTE*)(a2 + 96);
      }
      ++v8;
    } while (v8 != v5);
  }
  v84 = *(_DWORD*)(a1 + 80) + v5;
  ++*(_DWORD*)(a1 + 76);
  *(_DWORD*)(a1 + 80) = v84;
  if (*(_DWORD*)(a2 + 28) == 0) {
    ++*(_DWORD*)(a1 + 104);
  }
  return result;
}

__int64 command_generator_242a60(__int64 a1, __int64 a2)
{
  __int64 result;

  *(_QWORD*)a2 = nn_audio_server_AddressInfo_GetReference_plt(a1, 1);
  *(_DWORD*)(a2 + 16) = nn_audio_server_AddressInfo_GetSize_plt(a1);
  *(_DWORD*)(a2 + 24) = *(_DWORD*)(a1 + 64);
  *(_DWORD*)(a2 + 28) = *(_DWORD*)(a1 + 68);
  *(_DWORD*)(a2 + 32) = *(_DWORD*)(a1 + 76);
  *(_DWORD*)(a2 + 36) = *(_DWORD*)(a1 + 80);
  *(_BYTE*)(a2 + 44) = *(_BYTE*)(a1 + 72);
  *(_DWORD*)(a2 + 40) = *(_DWORD*)(a1 + 84);
  *(_BYTE*)(a2 + 45) = *(_BYTE*)(a1 + 73);
  result = nn_audio_server_AddressInfo_GetCpuAddr_plt(a1 + 32);
  if (result != 0) {
    *(_QWORD*)(a2 + 8) =
        nn_audio_server_AddressInfo_GetReference_plt(a1 + 32, 1);
    result = nn_audio_server_AddressInfo_GetSize_plt(a1 + 32);
    *(_DWORD*)(a2 + 20) = result;
  }
  else {
    *(_QWORD*)(a2 + 8) = 0;
    *(_DWORD*)(a2 + 20) = 0;
  }
  return result;
}

__int64 command_generator_242c00(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                                 __int16 a5, int a6)
{
  int v6;
  unsigned int v7;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD v25[4];

  v6 = *(char*)(a3 + 4);
  *(_DWORD*)(a1 + 36) = a6;
  *(_DWORD*)(a1 + 40) = v6;
  *(_WORD*)(a1 + 24) = a6 + a5;
  *(_DWORD*)(a1 + 28) = *(_DWORD*)a3;
  v7 = *(unsigned __int8*)(a3 + 5);
  if (v7 >= 3) {
    v19 = nn_detail_UnexpectedDefaultImpl_plt_857150(a1);
    return command_generator_242e60_alt1(v19, v20, v21, v22, v23, v24);
  }
  else {
    *(_BYTE*)(a1 + 16) = v7;
    *(_DWORD*)(a1 + 32) = vcvts_n_s32_f32(*(float*)(a3 + 44), 0xFu);
    *(_QWORD*)(a1 + 48) =
        nn_audio_server_AddressInfo_GetReference_plt(a3 + 192, 1);
    *(_DWORD*)(a1 + 56) = nn_audio_server_AddressInfo_GetSize_plt(a3 + 192);
    *(_DWORD*)(a1 + 60) = *(_DWORD*)(a3 + 256);
    *(_DWORD*)(a1 + 64) = *(_DWORD*)(a3 + 260);
    *(_BYTE*)(a1 + 68) = *(_BYTE*)(a3 + 264);
    *(_BYTE*)(a1 + 69) = *(_BYTE*)(a3 + 265);
    v12 = nn_audio_server_AddressInfo_GetCpuAddr_plt(a3 + 224);
    if (v12 != 0) {
      *(_QWORD*)(a1 + 72) =
          nn_audio_server_AddressInfo_GetReference_plt(a3 + 224, 1);
      LODWORD(v12) = nn_audio_server_AddressInfo_GetSize_plt(a3 + 224);
    }
    else {
      *(_QWORD*)(a1 + 72) = 0;
    }
    *(_DWORD*)(a1 + 80) = v12;
    *(_QWORD*)(a1 + 88) =
        nn_audio_server_AddressInfo_GetReference_plt(a3 + 280, 1);
    *(_DWORD*)(a1 + 96) = nn_audio_server_AddressInfo_GetSize_plt(a3 + 280);
    *(_DWORD*)(a1 + 100) = *(_DWORD*)(a3 + 344);
    *(_DWORD*)(a1 + 104) = *(_DWORD*)(a3 + 348);
    *(_BYTE*)(a1 + 108) = *(_BYTE*)(a3 + 352);
    *(_BYTE*)(a1 + 109) = *(_BYTE*)(a3 + 353);
    v13 = nn_audio_server_AddressInfo_GetCpuAddr_plt(a3 + 312);
    if (v13 != 0) {
      *(_QWORD*)(a1 + 112) =
          nn_audio_server_AddressInfo_GetReference_plt(a3 + 312, 1);
      LODWORD(v13) = nn_audio_server_AddressInfo_GetSize_plt(a3 + 312);
    }
    else {
      *(_QWORD*)(a1 + 112) = 0;
    }
    *(_DWORD*)(a1 + 120) = v13;
    *(_QWORD*)(a1 + 128) =
        nn_audio_server_AddressInfo_GetReference_plt(a3 + 368, 1);
    *(_DWORD*)(a1 + 136) = nn_audio_server_AddressInfo_GetSize_plt(a3 + 368);
    *(_DWORD*)(a1 + 140) = *(_DWORD*)(a3 + 432);
    *(_DWORD*)(a1 + 144) = *(_DWORD*)(a3 + 436);
    *(_BYTE*)(a1 + 148) = *(_BYTE*)(a3 + 440);
    *(_BYTE*)(a1 + 149) = *(_BYTE*)(a3 + 441);
    v14 = nn_audio_server_AddressInfo_GetCpuAddr_plt(a3 + 400);
    if (v14 != 0) {
      *(_QWORD*)(a1 + 152) =
          nn_audio_server_AddressInfo_GetReference_plt(a3 + 400, 1);
      LODWORD(v14) = nn_audio_server_AddressInfo_GetSize_plt(a3 + 400);
    }
    else {
      *(_QWORD*)(a1 + 152) = 0;
    }
    *(_DWORD*)(a1 + 160) = v14;
    *(_QWORD*)(a1 + 168) =
        nn_audio_server_AddressInfo_GetReference_plt(a3 + 456, 1);
    *(_DWORD*)(a1 + 176) = nn_audio_server_AddressInfo_GetSize_plt(a3 + 456);
    *(_DWORD*)(a1 + 180) = *(_DWORD*)(a3 + 520);
    *(_DWORD*)(a1 + 184) = *(_DWORD*)(a3 + 524);
    *(_BYTE*)(a1 + 188) = *(_BYTE*)(a3 + 528);
    *(_BYTE*)(a1 + 189) = *(_BYTE*)(a3 + 529);
    v15 = nn_audio_server_AddressInfo_GetCpuAddr_plt(a3 + 488);
    if (v15 != 0) {
      *(_QWORD*)(a1 + 192) =
          nn_audio_server_AddressInfo_GetReference_plt(a3 + 488, 1);
      LODWORD(v15) = nn_audio_server_AddressInfo_GetSize_plt(a3 + 488);
    }
    else {
      *(_QWORD*)(a1 + 192) = 0;
    }
    *(_DWORD*)(a1 + 200) = v15;
    *(_QWORD*)(a1 + 208) =
        nn_audio_server_MemoryPoolInfo_Translate_plt(a2, a4, 256);
    v16 = *(_QWORD*)(a3 + 168);
    v25[0] = *(_QWORD*)(a3 + 160);
    v25[1] = v16;
    v17 = *(_QWORD*)(a3 + 184);
    v25[2] = *(_QWORD*)(a3 + 176);
    v25[3] = v17;
    nn_audio_server_AddressInfo_Destroy_AddressInfo_plt(v25);
    *(_WORD*)(a1 + 26) = *(_BYTE*)(a3 + 37) & 3;
    return a1;
  }
}

__int64 command_generator_242e60(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                                 __int16 a5, __int16 a6)
{
  unsigned int v6;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD v18[4];

  *(_WORD*)(a1 + 24) = a6 + a5;
  *(_DWORD*)(a1 + 28) = *(_DWORD*)a3;
  v6 = *(unsigned __int8*)(a3 + 5);
  if (v6 >= 3) {
    nn_detail_UnexpectedDefaultImpl_plt_857150(a1);
    __udf(0);
  }
  *(_BYTE*)(a1 + 16) = v6;
  *(_DWORD*)(a1 + 32) = vcvts_n_s32_f32(*(float*)(a3 + 44), 0xFu);
  *(_QWORD*)(a1 + 40) =
      nn_audio_server_AddressInfo_GetReference_plt(a3 + 192, 1);
  *(_DWORD*)(a1 + 48) = nn_audio_server_AddressInfo_GetSize_plt(a3 + 192);
  *(_DWORD*)(a1 + 52) = *(_DWORD*)(a3 + 256);
  *(_DWORD*)(a1 + 56) = *(_DWORD*)(a3 + 260);
  *(_BYTE*)(a1 + 60) = *(_BYTE*)(a3 + 264);
  *(_BYTE*)(a1 + 61) = *(_BYTE*)(a3 + 265);
  v11 = nn_audio_server_AddressInfo_GetCpuAddr_plt(a3 + 224);
  if (v11 != 0) {
    *(_QWORD*)(a1 + 64) =
        nn_audio_server_AddressInfo_GetReference_plt(a3 + 224, 1);
    LODWORD(v11) = nn_audio_server_AddressInfo_GetSize_plt(a3 + 224);
  }
  else {
    *(_QWORD*)(a1 + 64) = 0;
  }
  *(_DWORD*)(a1 + 72) = v11;
  *(_QWORD*)(a1 + 80) =
      nn_audio_server_AddressInfo_GetReference_plt(a3 + 280, 1);
  *(_DWORD*)(a1 + 88) = nn_audio_server_AddressInfo_GetSize_plt(a3 + 280);
  *(_DWORD*)(a1 + 92) = *(_DWORD*)(a3 + 344);
  *(_DWORD*)(a1 + 96) = *(_DWORD*)(a3 + 348);
  *(_BYTE*)(a1 + 100) = *(_BYTE*)(a3 + 352);
  *(_BYTE*)(a1 + 101) = *(_BYTE*)(a3 + 353);
  v12 = nn_audio_server_AddressInfo_GetCpuAddr_plt(a3 + 312);
  if (v12 != 0) {
    *(_QWORD*)(a1 + 104) =
        nn_audio_server_AddressInfo_GetReference_plt(a3 + 312, 1);
    LODWORD(v12) = nn_audio_server_AddressInfo_GetSize_plt(a3 + 312);
  }
  else {
    *(_QWORD*)(a1 + 104) = 0;
  }
  *(_DWORD*)(a1 + 112) = v12;
  *(_QWORD*)(a1 + 120) =
      nn_audio_server_AddressInfo_GetReference_plt(a3 + 368, 1);
  *(_DWORD*)(a1 + 128) = nn_audio_server_AddressInfo_GetSize_plt(a3 + 368);
  *(_DWORD*)(a1 + 132) = *(_DWORD*)(a3 + 432);
  *(_DWORD*)(a1 + 136) = *(_DWORD*)(a3 + 436);
  *(_BYTE*)(a1 + 140) = *(_BYTE*)(a3 + 440);
  *(_BYTE*)(a1 + 141) = *(_BYTE*)(a3 + 441);
  v13 = nn_audio_server_AddressInfo_GetCpuAddr_plt(a3 + 400);
  if (v13 != 0) {
    *(_QWORD*)(a1 + 144) =
        nn_audio_server_AddressInfo_GetReference_plt(a3 + 400, 1);
    LODWORD(v13) = nn_audio_server_AddressInfo_GetSize_plt(a3 + 400);
  }
  else {
    *(_QWORD*)(a1 + 144) = 0;
  }
  *(_DWORD*)(a1 + 152) = v13;
  *(_QWORD*)(a1 + 160) =
      nn_audio_server_AddressInfo_GetReference_plt(a3 + 456, 1);
  *(_DWORD*)(a1 + 168) = nn_audio_server_AddressInfo_GetSize_plt(a3 + 456);
  *(_DWORD*)(a1 + 172) = *(_DWORD*)(a3 + 520);
  *(_DWORD*)(a1 + 176) = *(_DWORD*)(a3 + 524);
  *(_BYTE*)(a1 + 180) = *(_BYTE*)(a3 + 528);
  *(_BYTE*)(a1 + 181) = *(_BYTE*)(a3 + 529);
  v14 = nn_audio_server_AddressInfo_GetCpuAddr_plt(a3 + 488);
  if (v14 != 0) {
    *(_QWORD*)(a1 + 184) =
        nn_audio_server_AddressInfo_GetReference_plt(a3 + 488, 1);
    LODWORD(v14) = nn_audio_server_AddressInfo_GetSize_plt(a3 + 488);
  }
  else {
    *(_QWORD*)(a1 + 184) = 0;
  }
  *(_DWORD*)(a1 + 192) = v14;
  *(_QWORD*)(a1 + 200) =
      nn_audio_server_MemoryPoolInfo_Translate_plt(a2, a4, 256);
  v15 = *(_QWORD*)(a3 + 168);
  v18[0] = *(_QWORD*)(a3 + 160);
  v18[1] = v15;
  v16 = *(_QWORD*)(a3 + 184);
  v18[2] = *(_QWORD*)(a3 + 176);
  v18[3] = v16;
  *(_QWORD*)(a1 + 208) = nn_audio_server_AddressInfo_GetReference_plt(v18, 1);
  nn_audio_server_AddressInfo_Destroy_AddressInfo_plt(v18);
  *(_WORD*)(a1 + 26) = *(_BYTE*)(a3 + 37) & 3;
  return a1;
}

#pragma GCC visibility pop
