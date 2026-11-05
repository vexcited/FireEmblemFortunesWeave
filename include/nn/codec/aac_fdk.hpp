#pragma once

#include <stddef.h>
#include <stdint.h>

enum TRANSPORT_TYPE {
  TT_UNKNOWN = -1,
  TT_MP4_RAW = 0,
  TT_MP4_ADIF = 1,
  TT_MP4_ADTS = 2,
};

namespace nn::codec {

enum AAC_DECODER_ERROR {
  AAC_DEC_OK = 0x0000,
  AAC_DEC_OUT_OF_MEMORY = 0x0002,
  AAC_DEC_UNKNOWN = 0x0005,
  AAC_DEC_TRANSPORT_SYNC_ERROR = 0x1001,
  AAC_DEC_NOT_ENOUGH_BITS = 0x1002,
  AAC_DEC_INVALID_HANDLE = 0x2001,
  AAC_DEC_UNSUPPORTED_AOT = 0x2002,
  AAC_DEC_UNSUPPORTED_FORMAT = 0x2003,
  AAC_DEC_UNSUPPORTED_ER_FORMAT = 0x2004,
  AAC_DEC_UNSUPPORTED_EPCONFIG = 0x2005,
  AAC_DEC_UNSUPPORTED_MULTILAYER = 0x2006,
  AAC_DEC_UNSUPPORTED_CHANNELCONFIG = 0x2007,
  AAC_DEC_UNSUPPORTED_SAMPLINGRATE = 0x2008,
  AAC_DEC_INVALID_SBR_CONFIG = 0x2009,
  AAC_DEC_SET_PARAM_FAIL = 0x200A,
  AAC_DEC_NEED_TO_RESTART = 0x200B,
  AAC_DEC_OUTPUT_BUFFER_TOO_SMALL = 0x200C,
  AAC_DEC_TRANSPORT_ERROR = 0x4001,
  AAC_DEC_PARSE_ERROR = 0x4002,
  AAC_DEC_UNSUPPORTED_EXTENSION_PAYLOAD = 0x4003,
  AAC_DEC_DECODE_FRAME_ERROR = 0x4004,
  AAC_DEC_CRC_ERROR = 0x4005,
  AAC_DEC_INVALID_CODE_BOOK = 0x4006,
  AAC_DEC_UNSUPPORTED_PREDICTION = 0x4007,
  AAC_DEC_UNSUPPORTED_CCE = 0x4008,
  AAC_DEC_UNSUPPORTED_LFE = 0x4009,
  AAC_DEC_UNSUPPORTED_GAIN_CONTROL_DATA = 0x400A,
  AAC_DEC_UNSUPPORTED_SBA = 0x400B,
  AAC_DEC_TNS_READ_ERROR = 0x400C,
  AAC_DEC_RVLC_ERROR = 0x400D,
  AAC_DEC_ANC_DATA_ERROR = 0x8001,
  AAC_DEC_TOO_SMALL_ANC_BUFFER = 0x8002,
  AAC_DEC_TOO_MANY_ANC_ELEMENTS = 0x8003,
};

enum AACDEC_PARAM {
  AAC_TPDEC_CLEAR_BUFFER = 0x0603,
};

enum PCMDMX_PARAM {
  MAX_NUMBER_OF_OUTPUT_CHANNELS = 3,
};

struct CStreamInfo {
  int32_t sampleRate;
  int32_t frameSize;
  int32_t numChannels;
};

struct PCM_DMX_INSTANCE;

// Only the members the SDK wrappers read are spelled out.
struct AAC_DECODER_INSTANCE {
  uint8_t reserved0[640];
  CStreamInfo streamInfo;
  uint8_t reserved1[16088 - 640 - sizeof(CStreamInfo)];
  uint8_t sbrEnabled;
  uint8_t reserved2[16160 - 16088 - 1];
  PCM_DMX_INSTANCE* hPcmUtils;
};

AAC_DECODER_INSTANCE* aacDecoder_Open(TRANSPORT_TYPE transportFormat,
  unsigned int layerCount);
void aacDecoder_Close(AAC_DECODER_INSTANCE* handle);
AAC_DECODER_ERROR aacDecoder_ConfigRaw(AAC_DECODER_INSTANCE* handle,
  uint8_t** configs, const unsigned int* sizes);
AAC_DECODER_ERROR aacDecoder_SetParam(AAC_DECODER_INSTANCE* handle,
  AACDEC_PARAM param, int value);
AAC_DECODER_ERROR aacDecoder_GetFreeBytes(AAC_DECODER_INSTANCE* handle,
  unsigned int* freeBytes);
AAC_DECODER_ERROR aacDecoder_Fill(AAC_DECODER_INSTANCE* handle,
  uint8_t** buffers, const unsigned int* sizes, unsigned int* validBytes);
AAC_DECODER_ERROR aacDecoder_DecodeFrame(AAC_DECODER_INSTANCE* handle,
  int16_t* pcm, int pcmSize, unsigned int flags);
CStreamInfo* aacDecoder_GetStreamInfo(AAC_DECODER_INSTANCE* handle);
int pcmDmx_SetParam(PCM_DMX_INSTANCE* handle, PCMDMX_PARAM param, int value);

}
