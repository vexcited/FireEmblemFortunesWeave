#include <cstring>
#include <new>

#include "movie/detail/movie_audio_decoders.hpp"
#include "movie/detail/movie_tremor.hpp"
#include "movie/detail/movie_utils.hpp"
#include "nn/movie/detail/movie_heap_memory_manager.hpp"
#include "nn/movie/detail/movie_std_lib_allocator.hpp"
#include "nn/movie/movie_media_property.hpp"

namespace movie::detail {

using nn::movie::MediaProperty;
using nn::movie::detail::AllocatorInfo;
using nn::movie::detail::FreeMemory;
using nn::movie::detail::HeapMemoryManager;

namespace {

constexpr MovieResult ResultInvalidConfiguration =
  static_cast<MovieResult>(46);
constexpr MovieResult ResultNotConfigured = static_cast<MovieResult>(50);
constexpr MovieResult ResultDecoderError = static_cast<MovieResult>(118);
constexpr MovieResult ResultBadHeader = static_cast<MovieResult>(119);
constexpr MovieResult ResultUnsupportedVersion = static_cast<MovieResult>(120);
constexpr MovieResult ResultBadPacket = static_cast<MovieResult>(121);

constexpr int OV_EFAULT = -129;
constexpr int OV_ENOTVORBIS = -132;
constexpr int OV_EBADHEADER = -133;
constexpr int OV_EVERSION = -134;
constexpr int OV_ENOTAUDIO = -135;
constexpr int OV_EBADPACKET = -136;

constexpr int HeaderType_Identification = 1;
constexpr int HeaderType_Setup = 5;
constexpr int HeaderSize = 7;
constexpr int SamplesPerBufferMax = 1024;
constexpr size_t InputSizeMin = 0x2000;

inline AllocatorInfo* GetCurrentAllocatorInfo(AllocatorInfo* allocatorInfo) {
  if (allocatorInfo != nullptr) {
    return allocatorInfo;
  }

  return reinterpret_cast<AllocatorInfo*>(
    HeapMemoryManager::GetInstance().GetCurrentHeap());
}

template <typename T>
T* Make(AllocatorInfo* allocatorInfo) {
  allocatorInfo = GetCurrentAllocatorInfo(allocatorInfo);
  if (allocatorInfo == nullptr) {
    return nullptr;
  }

  void* storage = nn::movie::detail::AllocateMemory(sizeof(T), allocatorInfo);
  if (storage == nullptr) {
    return nullptr;
  }

  return new (storage) T();
}

template <typename T>
void Delete(T* object, AllocatorInfo* allocatorInfo) {
  allocatorInfo = GetCurrentAllocatorInfo(allocatorInfo);
  if (allocatorInfo != nullptr) {
    object->~T();
    FreeMemory(object, allocatorInfo);
  }
}

MovieResult ConvertVorbisErrorToMovieResult(int error) {
  switch (error) {
    case 0:
      return MovieResult_Success;
    case OV_EBADPACKET:
    case OV_ENOTAUDIO:
      return ResultBadPacket;
    case OV_EVERSION:
      return ResultUnsupportedVersion;
    case OV_EBADHEADER:
    case OV_ENOTVORBIS:
      return ResultBadHeader;
    case OV_EFAULT:
      return ResultDecoderError;
    default:
      return MovieResult_Unknown;
  }
}

inline bool IsVorbisHeader(const char* data, int size, int type) {
  return size >= 8 && data[0] == type &&
    std::memcmp(data + 1, "vorbis", 6) == 0;
}

// Follows makeBitReader of the stagefright Vorbis decoder.
inline void MakeBitReader(const void* data, size_t size, ogg_buffer* buffer,
  ogg_reference* reference, oggpack_buffer* bits) {
  buffer->data = static_cast<unsigned char*>(const_cast<void*>(data));
  buffer->size = size;
  buffer->refcount = 1;
  buffer->ptr.owner = nullptr;
  reference->buffer = buffer;
  reference->begin = 0;
  reference->length = size;
  reference->next = nullptr;
  oggpack_readinit(bits, reference);
}

}

VorbisAudioDecoder::VorbisAudioDecoder()
  : m_pState(nullptr), m_pInfo(nullptr), m_IsInfoHeaderParsed(false),
    m_IsSetupHeaderParsed(false), m_MaxInputSize(0), m_InputBufferSize(0),
    m_OutputBufferSize(0),
    m_OutputFormat(static_cast<AudioDecoderOutputFormat>(2)),
    m_pAllocatorInfo(nullptr) {
}

VorbisAudioDecoder::~VorbisAudioDecoder() {
  Finalize();
}

MovieResult VorbisAudioDecoder::Initialize(AllocatorInfo* allocatorInfo,
  AudioDecoderOutputFormat outputFormat) {
  m_pAllocatorInfo = allocatorInfo;
  if (m_pInfo == nullptr) {
    m_pInfo = Make<vorbis_info>(m_pAllocatorInfo);
    if (m_pInfo == nullptr) {
      return MovieResult_OutOfMemory;
    }

    vorbis_info_init(m_pInfo);
  }

  if (m_pState == nullptr) {
    m_pState = Make<vorbis_dsp_state>(m_pAllocatorInfo);
    if (m_pState == nullptr) {
      return MovieResult_OutOfMemory;
    }

    vorbis_dsp_clear(m_pState);
  }

  m_IsInfoHeaderParsed = false;
  m_IsSetupHeaderParsed = false;
  m_OutputFormat = outputFormat;
  return MovieResult_Success;
}

void VorbisAudioDecoder::Finalize() {
  if (m_pState != nullptr) {
    vorbis_dsp_clear(m_pState);
    if (m_pState != nullptr) {
      Delete(m_pState, m_pAllocatorInfo);
    }

    m_pState = nullptr;
  }

  if (m_pInfo != nullptr) {
    vorbis_info_clear(m_pInfo);
    if (m_pInfo != nullptr) {
      Delete(m_pInfo, m_pAllocatorInfo);
    }

    m_pInfo = nullptr;
  }
}

MovieResult VorbisAudioDecoder::Configure(const MediaProperty* property,
  const char* configuration, size_t size) {
  if (size == 0) {
    return MovieResult_InvalidArgument;
  }

  if (m_pInfo == nullptr) {
    return MovieResult_NotInitialized;
  }

  // Both headers are packed in the configuration, csd-0 and csd-1 give their
  // sizes.
  int32_t infoSize = 0;
  if (!property->GetInt32(&infoSize, "csd-0")) {
    return ResultInvalidConfiguration;
  }

  int32_t setupSize = 0;
  if (!property->GetInt32(&setupSize, "csd-1")) {
    return ResultInvalidConfiguration;
  }

  if (size < static_cast<size_t>(static_cast<int64_t>(infoSize) + setupSize)) {
    return ResultInvalidConfiguration;
  }

  m_IsInfoHeaderParsed = false;
  m_IsSetupHeaderParsed = false;
  ogg_buffer buffer = {};
  ogg_reference reference;
  oggpack_buffer bits = {};
  if (!IsVorbisHeader(configuration, infoSize, HeaderType_Identification)) {
    return ResultBadHeader;
  }

  MakeBitReader(configuration + HeaderSize, infoSize - HeaderSize, &buffer,
    &reference, &bits);
  vorbis_info_clear(m_pInfo);
  vorbis_info_init(m_pInfo);
  if (_vorbis_unpack_info(m_pInfo, &bits) != 0) {
    return ConvertVorbisErrorToMovieResult(_vorbis_unpack_info(m_pInfo, &bits));
  }

  m_IsInfoHeaderParsed = true;
  const char* setup = configuration + infoSize;
  if (!IsVorbisHeader(setup, setupSize, HeaderType_Setup)) {
    return ResultBadHeader;
  }

  MakeBitReader(setup + HeaderSize, setupSize - HeaderSize, &buffer,
    &reference, &bits);
  if (_vorbis_unpack_books(m_pInfo, &bits) != 0) {
    return ConvertVorbisErrorToMovieResult(
      _vorbis_unpack_books(m_pInfo, &bits));
  }

  if (vorbis_dsp_init(m_pState, m_pInfo) != 0) {
    return ConvertVorbisErrorToMovieResult(vorbis_dsp_init(m_pState, m_pInfo));
  }

  m_IsSetupHeaderParsed = true;
  int sampleByteSize = GetAudioSampleByteSize(m_OutputFormat);
  size_t maxInputSize = 0;
  if (!property->GetSize(&maxInputSize, "max-input-size") ||
    maxInputSize < InputSizeMin) {
    maxInputSize = InputSizeMin;
  }

  m_MaxInputSize = maxInputSize;
  m_InputBufferSize = static_cast<size_t>(sampleByteSize) * InputSizeMin;
  m_OutputBufferSize = static_cast<size_t>(m_pInfo->channels) *
    sampleByteSize * SamplesPerBufferMax;
  return MovieResult_Success;
}

MovieResult VorbisAudioDecoder::GetAudioFrameRequirements(MediaProperty* pOut) {
  if (m_pInfo == nullptr) {
    return MovieResult_NotInitialized;
  }

  if (!m_IsInfoHeaderParsed || !m_IsSetupHeaderParsed) {
    return ResultNotConfigured;
  }

  pOut->SetInt32("channel-count", m_pInfo->channels);
  pOut->SetInt32("sample-rate", m_pInfo->rate);
  pOut->SetSize("input-buf-size", m_InputBufferSize);
  pOut->SetSize("max-input-size", m_MaxInputSize);
  pOut->SetSize("output-buf-size", m_OutputBufferSize);
  return MovieResult_Success;
}

MovieResult VorbisAudioDecoder::Decode(size_t* pOutConsumedSize,
  size_t* pOutSampleCount, int16_t* outputBuffer, size_t outputSize,
  const void* inputBuffer, size_t inputSize) {
  if (m_pInfo == nullptr) {
    return MovieResult_NotInitialized;
  }

  if (!m_IsInfoHeaderParsed || !m_IsSetupHeaderParsed) {
    return ResultNotConfigured;
  }

  ogg_buffer buffer = {};
  buffer.data = static_cast<unsigned char*>(const_cast<void*>(inputBuffer));
  buffer.size = inputSize;
  buffer.refcount = 1;
  buffer.ptr.owner = nullptr;
  ogg_reference reference = {};
  reference.buffer = &buffer;
  reference.begin = 0;
  reference.length = inputSize;
  reference.next = nullptr;
  ogg_packet packet = {};
  packet.packet = &reference;
  packet.bytes = inputSize;
  if (vorbis_dsp_synthesis(m_pState, &packet, 1) != 0) {
    return ConvertVorbisErrorToMovieResult(
      vorbis_dsp_synthesis(m_pState, &packet, 1));
  }

  int sampleCount = vorbis_dsp_pcmout(m_pState, outputBuffer,
    SamplesPerBufferMax);
  *pOutSampleCount = sampleCount < 0 ? 0 : sampleCount;
  return MovieResult_Success;
}

MovieResult VorbisAudioDecoder::GetAudioFrameProperties(MediaProperty* pOut) {
  if (m_pInfo == nullptr) {
    return MovieResult_NotInitialized;
  }

  if (!m_IsInfoHeaderParsed || !m_IsSetupHeaderParsed) {
    return ResultNotConfigured;
  }

  pOut->Clear();
  pOut->SetString("mime", "audio/vorbis", 12);
  pOut->SetInt32("channel-count", m_pInfo->channels);
  pOut->SetInt32("sample-rate", m_pInfo->rate);
  pOut->SetInt32("bitrate", m_pInfo->bitrate_nominal);
  return MovieResult_Success;
}

MovieResult VorbisAudioDecoder::Flush() {
  if (m_pState == nullptr) {
    return MovieResult_Success;
  }

  return ConvertVorbisErrorToMovieResult(vorbis_dsp_restart(m_pState));
}

}
