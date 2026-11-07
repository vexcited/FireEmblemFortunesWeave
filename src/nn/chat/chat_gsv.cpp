#include "nn/chat/chat_gsv.hpp"
#include "nn/diag/unexpected_default.hpp"

namespace nn::chat::gsv {

ImagePreference MakeImagePreference(uint16_t width, uint16_t height,
  ImageEncoding encoding) {
  switch (encoding) {
    case ImageEncoding_Raw: {
      ImagePreference preference = {};
      preference.encoding = encoding;
      preference.planeCount = 1;
      preference.widthMinusOne = width - 1;
      preference.heightMinusOne = height - 1;
      return preference;
    }
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

void GetMetadataFaceDetectionFlag(bool* pOutValue,
  const MetadataType* pMetadata) {
  *pOutValue = (pMetadata->flags & 1) != 0;
}

void GetMetadataPhotographedContentsFlag(bool* pOutValue,
  const MetadataType* pMetadata) {
  *pOutValue = (pMetadata->flags >> 1 & 1) != 0;
}

void GetMetadataSmallVideoOnlyFlag(bool* pOutValue,
  const MetadataType* pMetadata) {
  *pOutValue = (pMetadata->flags >> 2 & 1) != 0;
}

void GetMetadataStreamGeneration(uint8_t* pOutValue,
  const MetadataType* pMetadata) {
  *pOutValue = pMetadata->streamGeneration;
}

}
