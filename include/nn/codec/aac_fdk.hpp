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

enum AACENC_ERROR {
  AACENC_OK = 0x0000,
  AACENC_INVALID_HANDLE = 0x0020,
  AACENC_MEMORY_ERROR = 0x0021,
  AACENC_UNSUPPORTED_PARAMETER = 0x0022,
  AACENC_INVALID_CONFIG = 0x0023,
  AACENC_INIT_ERROR = 0x0040,
  AACENC_INIT_AAC_ERROR = 0x0041,
  AACENC_INIT_SBR_ERROR = 0x0042,
  AACENC_INIT_TP_ERROR = 0x0043,
  AACENC_INIT_META_ERROR = 0x0044,
  AACENC_ENCODE_ERROR = 0x0060,
  AACENC_ENCODE_EOF = 0x0080,
};

enum AACENC_BufferIdentifier {
  IN_AUDIO_DATA = 0,
  OUT_BITSTREAM_DATA = 3,
};

enum AACENC_PARAM {
  AACENC_AOT = 0x0100,
  AACENC_BITRATE = 0x0101,
  AACENC_BITRATEMODE = 0x0102,
  AACENC_SAMPLERATE = 0x0103,
  AACENC_CHANNELMODE = 0x0106,
  AACENC_CHANNELORDER = 0x0107,
  AACENC_TRANSMUX = 0x0300,
  AACENC_CONTROL_STATE = 0xff00,
};

enum CHANNEL_MODE {
  MODE_INVALID = -1,
  MODE_1 = 1,
  MODE_2 = 2,
  MODE_1_2 = 3,
  MODE_1_2_1 = 4,
  MODE_1_2_2 = 5,
  MODE_1_2_2_1 = 6,
  MODE_1_2_2_2_1 = 7,
};

enum AACENC_CTRLFLAGS {
  AACENC_INIT_ALL = 0xffff,
};

struct AACENCODER;

struct AACENC_BufDesc {
  int numBufs;
  void** bufs;
  int* bufferIdentifiers;
  int* bufSizes;
  int* bufElSizes;
};

struct AACENC_InArgs {
  int numInSamples;
  int numAncBytes;
};

struct AACENC_OutArgs {
  int numOutBytes;
  int numInSamples;
  int numAncBytes;
};

struct AACENC_InfoStruct {
  unsigned int maxOutBufBytes;
  unsigned int maxAncBytes;
  unsigned int inBufFillLevel;
  unsigned int inputChannels;
  unsigned int frameLength;
  unsigned int encoderDelay;
  uint8_t confBuf[64];
  unsigned int confSize;
};

AACENC_ERROR aacEncOpen(AACENCODER** handle, unsigned int encModules,
  unsigned int maxChannels);
AACENC_ERROR aacEncInfo(AACENCODER* handle, AACENC_InfoStruct* info);

AACENC_ERROR aacEncClose(AACENCODER** handle);
AACENC_ERROR aacEncEncode(AACENCODER* handle, const AACENC_BufDesc* inBuffer,
  const AACENC_BufDesc* outBuffer, const AACENC_InArgs* inArgs,
  AACENC_OutArgs* outArgs);
AACENC_ERROR aacEncoder_SetParam(AACENCODER* handle, AACENC_PARAM param,
  unsigned int value);
unsigned int aacEncoder_GetParam(AACENCODER* handle, AACENC_PARAM param);

}
