#pragma once

#include <stdint.h>

namespace nn::chat::gsv {

enum ImageEncoding : int32_t {
  ImageEncoding_Raw = 0,
};

// Sizes are kept minus one.
struct ImagePreference {
  ImageEncoding encoding;
  uint32_t planeCount;
  uint16_t widthMinusOne;
  uint16_t heightMinusOne;
  uint8_t reserved[0x34];
};

struct MetadataType {
  uint8_t flags;
  uint8_t streamGeneration;
  uint8_t reserved[6];
};

ImagePreference MakeImagePreference(uint16_t width, uint16_t height,
  ImageEncoding encoding);
void GetMetadataFaceDetectionFlag(bool* pOutValue,
  const MetadataType* pMetadata);
void GetMetadataPhotographedContentsFlag(bool* pOutValue,
  const MetadataType* pMetadata);
void GetMetadataSmallVideoOnlyFlag(bool* pOutValue,
  const MetadataType* pMetadata);
void GetMetadataStreamGeneration(uint8_t* pOutValue,
  const MetadataType* pMetadata);

}
