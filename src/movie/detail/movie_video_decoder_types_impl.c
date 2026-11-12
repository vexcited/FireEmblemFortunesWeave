#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_codec_FinalizeH264Decoder_plt(void);
__int64 nn_codec_FinalizeVp8Decoder_plt(void);
__int64 nn_codec_GetH264DecoderSubmissionReadyEvent_plt(void);
__int64 nn_codec_GetVp8DecoderSubmissionReadyEvent_plt(void);
__int64 nn_codec_RegisterH264DecoderBuffer_plt(void);
__int64 nn_codec_RegisterVp8DecoderBuffer_plt(void);
__int64 movie_video_decoder_types_fad0();
__int64 movie_video_decoder_types_fad4();
__int64 movie_video_decoder_types_fb20();
__int64 movie_video_decoder_types_fb24();
__int64 movie_video_decoder_types_fd00();
__int64 movie_video_decoder_types_fd04();

__int64 movie_video_decoder_types_fad0()
{
  return nn_codec_FinalizeH264Decoder_plt();
}

__int64 movie_video_decoder_types_fad4()
{
  return nn_codec_FinalizeVp8Decoder_plt();
}

__int64 movie_video_decoder_types_fb20()
{
  return nn_codec_RegisterH264DecoderBuffer_plt();
}

__int64 movie_video_decoder_types_fb24()
{
  return nn_codec_RegisterVp8DecoderBuffer_plt();
}

__int64 movie_video_decoder_types_fd00()
{
  return nn_codec_GetH264DecoderSubmissionReadyEvent_plt();
}

__int64 movie_video_decoder_types_fd04()
{
  return nn_codec_GetVp8DecoderSubmissionReadyEvent_plt();
}

#pragma GCC visibility pop
