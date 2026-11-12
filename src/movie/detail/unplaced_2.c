#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64
    movie_detail_AudioDecoderImpl_CheckInputBufferAvailableEvent_plt(_QWORD);
__int64 movie_detail_AudioDecoderImpl_DeallocateCoreDecoder_plt(_QWORD);
__int64 movie_detail_AudioDecoderImpl_DecodeInputBufferEvent_plt(_QWORD);
__int64 movie_detail_AudioDecoderImpl_DoConfigure_plt(_QWORD);
__int64 movie_detail_AudioDecoderImpl_DoInitialize_plt(_QWORD);
__int64 movie_detail_AudioDecoderImpl_StartAudioDecoderEvent_plt(_QWORD);
__int64 nn_codec_FinalizeH264Decoder_plt(void);
__int64 nn_codec_FinalizeVp8Decoder_plt(void);
__int64 nn_codec_GetH264DecoderOutputBufferProperties_plt(void);
__int64 nn_codec_GetH264DecoderSubmissionReadyEvent_plt(void);
__int64 nn_codec_GetVp8DecoderOutputBufferProperties_plt(void);
__int64 nn_codec_GetVp8DecoderSubmissionReadyEvent_plt(void);
__int64 nn_codec_RegisterH264DecoderBuffer_plt(void);
__int64 nn_codec_RegisterVp8DecoderBuffer_plt(void);
__int64 nn_codec_ReleaseH264DecoderOutputBuffer_plt(void);
__int64 nn_codec_ReleaseVp8DecoderOutputBuffer_plt(void);
__int64 nn_os_ReceiveMessageQueue_plt(_QWORD, _QWORD);
__int64 nn_os_SignalLightEvent_plt(_QWORD);
__int64 nn_os_SignalSystemEvent_plt(_QWORD);
void __attribute__((noreturn)) movie_detail_9f60(const char*);
__int64 movie_detail_8ae0(void* this_);
void __attribute__((noreturn)) movie_detail_9f40();
void __attribute__((noreturn)) movie_detail_f500();
__int64 movie_detail_fad0();
__int64 movie_detail_fad4();
__int64 movie_detail_fb20();
__int64 movie_detail_fb24();
__int64 movie_detail_fd00();
__int64 movie_detail_fd04();
__int64 movie_detail_fef0();
__int64 movie_detail_fef4();
__int64 movie_detail_ff40();
__int64 movie_detail_ff44();

__int64 movie_detail_8ae0(void* this_)
{
  __int64 result;
  __int64 v3;

  v3 = 0;
  while (1) {
    while (1) {
      while (1) {
        result = nn_os_ReceiveMessageQueue_plt(&v3, (char*)this_ + 1896);
        if ((int)v3 > 2) {
          break;
        }
        if ((_DWORD)v3 != 0) {
          if ((_DWORD)v3 == 1) {
            if (*((_QWORD*)this_ + 27) != 0) {
              movie_detail_AudioDecoderImpl_DeallocateCoreDecoder_plt(this_);
            }
          LABEL_17:
            nn_os_SignalLightEvent_plt((char*)this_ + 32);
          }
          else {
            if ((_DWORD)v3 != 2) {
              return result;
            }
            movie_detail_AudioDecoderImpl_DoConfigure_plt(this_);
          }
        }
        else {
          movie_detail_AudioDecoderImpl_DoInitialize_plt(this_);
        }
      }
      if ((int)v3 > 4) {
        break;
      }
      if ((_DWORD)v3 == 3) {
        movie_detail_AudioDecoderImpl_StartAudioDecoderEvent_plt(this_);
      }
      else {
        nn_os_SignalSystemEvent_plt((char*)this_ + 168);
      }
    }
    if ((_DWORD)v3 == 5) {
      *((_DWORD*)this_ + 11) =
          movie_detail_AudioDecoderImpl_DecodeInputBufferEvent_plt(this_);
      goto LABEL_17;
    }
    if ((_DWORD)v3 != 6) {
      return result;
    }
    movie_detail_AudioDecoderImpl_CheckInputBufferAvailableEvent_plt(this_);
  }
}

void __attribute__((noreturn)) movie_detail_9f40()
{
  movie_detail_9f60("vector");
}

void __attribute__((noreturn)) movie_detail_f500()
{
  movie_detail_9f60("basic_string");
}

__int64 movie_detail_fad0() { return nn_codec_FinalizeH264Decoder_plt(); }

__int64 movie_detail_fad4() { return nn_codec_FinalizeVp8Decoder_plt(); }

__int64 movie_detail_fb20() { return nn_codec_RegisterH264DecoderBuffer_plt(); }

__int64 movie_detail_fb24() { return nn_codec_RegisterVp8DecoderBuffer_plt(); }

__int64 movie_detail_fd00()
{
  return nn_codec_GetH264DecoderSubmissionReadyEvent_plt();
}

__int64 movie_detail_fd04()
{
  return nn_codec_GetVp8DecoderSubmissionReadyEvent_plt();
}

__int64 movie_detail_fef0()
{
  return nn_codec_ReleaseH264DecoderOutputBuffer_plt();
}

__int64 movie_detail_fef4()
{
  return nn_codec_ReleaseVp8DecoderOutputBuffer_plt();
}

__int64 movie_detail_ff40()
{
  return nn_codec_GetH264DecoderOutputBufferProperties_plt();
}

__int64 movie_detail_ff44()
{
  return nn_codec_GetVp8DecoderOutputBufferProperties_plt();
}

#pragma GCC visibility pop
