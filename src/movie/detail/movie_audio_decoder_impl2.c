#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64
    movie_detail_AudioDecoderImpl_CheckInputBufferAvailableEvent_plt(_QWORD);
__int64 movie_detail_AudioDecoderImpl_DeallocateCoreDecoder_plt(_QWORD);
__int64 movie_detail_AudioDecoderImpl_DecodeInputBufferEvent_plt(_QWORD);
__int64 movie_detail_AudioDecoderImpl_DoConfigure_plt(_QWORD);
__int64 movie_detail_AudioDecoderImpl_DoInitialize_plt(_QWORD);
__int64 movie_detail_AudioDecoderImpl_StartAudioDecoderEvent_plt(_QWORD);
__int64 nn_movie_detail_FreeMemory(__int64 result, _QWORD*);
__int64 nn_os_ReceiveMessageQueue_plt(_QWORD, _QWORD);
__int64 nn_os_SignalLightEvent_plt(_QWORD);
__int64 nn_os_SignalSystemEvent_plt(_QWORD);
__int64
movie_detail_AudioDecoderImpl_ExecuteAudioDecoderThreadBody(void* this_);
__int64 movie_detail_AudioDecoderImpl_DeallocateWorkerBuffer(__int64 result);

__int64 movie_detail_AudioDecoderImpl_ExecuteAudioDecoderThreadBody(void* this_)
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

__int64 movie_detail_AudioDecoderImpl_DeallocateWorkerBuffer(__int64 result)
{
  __int64 v1;

  if (*(_QWORD*)(result + 1968) != 0) {
    v1 = result;
    result = nn_movie_detail_FreeMemory(*(_QWORD*)(result + 1968),
                                        *(_QWORD**)(result + 9712));
    *(_QWORD*)(v1 + 1968) = 0;
  }
  return result;
}

#pragma GCC visibility pop
