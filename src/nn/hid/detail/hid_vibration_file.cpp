#include <math.h>
#include <stddef.h>
#include <stdint.h>

#include "nn/hid/hid_vibration_node.hpp"

namespace nn::hid::detail {

struct VibrationFileParserContextImpl {
  const uint8_t* pData;
  int32_t reserved;
  int32_t sampleLength;
};

namespace {

constexpr Result ResultVibrationFileTooSmall = {0x11aca};
constexpr Result ResultVibrationFileInvalidFormat = {0x11cca};
constexpr Result ResultVibrationFileInvalidSamplingRate = {0x11eca};
constexpr Result ResultVibrationFileDataTooLarge = {0x120ca};
constexpr Result ResultVibrationFileInvalidLoop = {0x122ca};

constexpr uint16_t VibrationFileFormatId = 3;
constexpr uint16_t VibrationFileSamplingRate = 200;

constexpr uint32_t MetaDataSizeMin = 4;
constexpr uint32_t MetaDataSizeWithLoop = 12;
constexpr uint32_t MetaDataSizeWithLoopInterval = 16;

constexpr float AmplitudeScale = 255.0f;
constexpr float FrequencyBase = 10.0f;
constexpr float FrequencyStepsPerOctave = 32.0f;

constexpr float FrequencyFractionTable[32] = {
  1.0f, 1.021897f, 1.044274f, 1.06714f, 1.090508f, 1.114387f, 1.138789f,
  1.163725f, 1.189207f, 1.215247f, 1.241858f, 1.269051f, 1.29684f, 1.325237f,
  1.354256f, 1.38391f, 1.414214f, 1.445181f, 1.476826f, 1.509164f, 1.542211f,
  1.575981f, 1.61049f, 1.645755f, 1.681793f, 1.718619f, 1.756252f,
  1.794709f, 1.834008f, 1.874168f, 1.915207f, 1.957144f,
};

struct VibrationFileHeader {
  uint32_t metaDataSize;
  uint16_t formatId;
  uint16_t samplingRate;
  uint32_t loopStartPosition;
  uint32_t loopEndPosition;
  uint8_t loopInterval[4];
};

float DecodeFrequency(uint8_t value) {
  return FrequencyFractionTable[value & 0x1f] *
    static_cast<float>(10u << (value >> 5));
}

uint8_t EncodeAmplitude(float amplitude) {
  return static_cast<int>(fminf(fmaxf(roundf(amplitude * AmplitudeScale),
    0.0f), AmplitudeScale));
}

uint8_t EncodeFrequency(float frequency) {
  return static_cast<int>(fminf(fmaxf(roundf(
    log2f(frequency / FrequencyBase) * FrequencyStepsPerOctave), 0.0f),
    AmplitudeScale));
}

}

Result ParseVibrationFile(VibrationFileInfo* pOutInfo,
  VibrationFileParserContextImpl* pOutContext, const void* address,
  size_t size) {
  const uint8_t* pFile = static_cast<const uint8_t*>(address);
  const VibrationFileHeader* pHeader =
    static_cast<const VibrationFileHeader*>(address);
  const uint32_t metaDataSize = pHeader->metaDataSize;
  pOutInfo->metaDataSize = metaDataSize;
  pOutInfo->formatId = pHeader->formatId;
  pOutInfo->samplingRate = pHeader->samplingRate;
  if (metaDataSize < MetaDataSizeMin) {
    return ResultVibrationFileTooSmall;
  }
  if (pOutInfo->formatId != VibrationFileFormatId) {
    return ResultVibrationFileInvalidFormat;
  }
  if (pOutInfo->samplingRate != VibrationFileSamplingRate) {
    return ResultVibrationFileInvalidSamplingRate;
  }
  if (metaDataSize >= MetaDataSizeWithLoop) {
    pOutInfo->loopInterval = 0;
    pOutInfo->isLoop = 1;
    pOutInfo->loopStartPosition = pHeader->loopStartPosition;
    pOutInfo->loopEndPosition = pHeader->loopEndPosition;
    if (static_cast<uint32_t>(pOutInfo->loopStartPosition) >
      static_cast<uint32_t>(pOutInfo->loopEndPosition)) {
      return ResultVibrationFileInvalidLoop;
    }
    if (metaDataSize >= MetaDataSizeWithLoopInterval) {
      pOutInfo->loopInterval = pHeader->loopInterval[0] |
        pHeader->loopInterval[1] << 8 | pHeader->loopInterval[2] << 16 |
        pHeader->loopInterval[3] << 24;
      if (pOutInfo->loopInterval < 0) {
        return ResultVibrationFileInvalidLoop;
      }
    }
  }
  else {
    pOutInfo->isLoop = 0;
  }
  const int dataOffset = metaDataSize + 8;
  if (dataOffset > static_cast<int>(size)) {
    return ResultVibrationFileTooSmall;
  }
  const uint32_t dataSize =
    *reinterpret_cast<const uint32_t*>(pFile + static_cast<int>(
      metaDataSize + 4));
  pOutInfo->dataSize = dataSize;
  pOutInfo->sampleLength = dataSize / 4;
  if (metaDataSize >= MetaDataSizeWithLoop) {
    if (static_cast<uint32_t>(pOutInfo->loopEndPosition) >
      static_cast<uint32_t>(pOutInfo->sampleLength)) {
      return ResultVibrationFileInvalidLoop;
    }
  }
  else {
    pOutInfo->loopStartPosition = 0;
    pOutInfo->loopEndPosition = pOutInfo->sampleLength;
    pOutInfo->loopInterval = 0;
  }
  pOutContext->pData = pFile + dataOffset;
  pOutContext->sampleLength = pOutInfo->sampleLength;
  if (pOutInfo->dataSize + dataOffset > static_cast<int>(size)) {
    return ResultVibrationFileDataTooLarge;
  }
  return Result{};
}

Result RetrieveVibrationValue(VibrationValue* pOutValue, int position,
  VibrationFileParserContextImpl* pContext) {
  const uint8_t* pSample = pContext->pData + position * 4;
  pOutValue->amplitudeLow = pSample[0] / AmplitudeScale;
  pOutValue->frequencyLow = DecodeFrequency(pSample[1]);
  pOutValue->amplitudeHigh = pSample[2] / AmplitudeScale;
  pOutValue->frequencyHigh = DecodeFrequency(pSample[3]);
  return Result{};
}

uint32_t CalculateVibrationFileSize(const VibrationValueArrayInfo& info) {
  uint32_t metaDataSize = MetaDataSizeMin;
  if (info.isLoop) {
    metaDataSize = info.loopInterval != 0 ? MetaDataSizeWithLoopInterval :
      MetaDataSizeWithLoop;
  }
  return metaDataSize + 8 + info.count * 4;
}

Result GenerateVibrationFile(size_t* pOutSize, uint8_t* pBuffer,
  size_t bufferSize, const VibrationValueArrayInfo& info,
  const VibrationValue* pValues) {
  static_cast<void>(bufferSize);
  const uint32_t fileSize = CalculateVibrationFileSize(info);
  *pOutSize = 0;
  uint32_t* pWords = reinterpret_cast<uint32_t*>(pBuffer);
  int index;
  if (info.isLoop) {
    pWords[0] = info.loopInterval != 0 ? MetaDataSizeWithLoopInterval :
      MetaDataSizeWithLoop;
    pWords[1] = VibrationFileFormatId | VibrationFileSamplingRate << 16;
    pWords[2] = info.loopStartPosition;
    pWords[3] = info.loopEndPosition;
    index = 4;
    if (info.loopInterval != 0) {
      pWords[4] = info.loopInterval;
      index = 5;
    }
  }
  else {
    pWords[0] = MetaDataSizeMin;
    pWords[1] = VibrationFileFormatId | VibrationFileSamplingRate << 16;
    index = 2;
  }
  pWords[index] = info.count * 4;
  uint8_t* pSamples = reinterpret_cast<uint8_t*>(&pWords[index + 1]);
  for (int i = 0; i < info.count; ++i) {
    pSamples[i * 4] = EncodeAmplitude(pValues[i].amplitudeLow);
    pSamples[i * 4 + 1] = EncodeFrequency(pValues[i].frequencyLow);
    pSamples[i * 4 + 2] = EncodeAmplitude(pValues[i].amplitudeHigh);
    pSamples[i * 4 + 3] = EncodeFrequency(pValues[i].frequencyHigh);
  }
  *pOutSize = fileSize;
  return Result{};
}

}
