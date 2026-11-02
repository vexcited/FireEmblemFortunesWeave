#include "graphics/color_space.hpp"

namespace {

constexpr const char* spaces[] = {
  "NonColor",
  "LegacyRGBA",
  "SensorRGB_Linear",
  "sRGB",
  "RGB709",
  "RGB709_Linear",
  "scRGB_Linear",
  "scRGB_Nonlinear",
  "Display_P3_Linear",
  "Display_P3_Nonlinear",
  "RGB2020",
  "RGB2020_Linear",
  "RGB2020_PQ",
  "ColorIndex",
  "YCbCr601",
  "YCbCr601_RR",
  "YCbCr601_ER",
  "YCbCr709",
  "YCbCr709_ER",
  "YCbCr2020",
  "YCbCr2020_PQ",
  "YCbCr2020_PQ_ER",
  "BayerRGGB",
  "BayerBGGR",
  "BayerGRBG",
  "BayerGBRG",
  "BayerCCCC",
  "BayerCRBC",
  "BayerCBRC",
  "BayerRCCB",
  "BayerBCCR",
  "BayerRCCC",
  "BayerCCCR",
  "BayerCRCC",
  "BayerCCRC",
  "BayerBGGI_RGGI",
  "BayerGBIG_GRIG",
  "BayerGIBG_GIRG",
  "BayerIGGB_IGGR",
  "BayerRGGI_BGGI",
  "BayerGRIG_GBIG",
  "BayerGIRG_GIBG",
  "BayerIGGR_IGGB",
  "XYZ",
  "DispPacking",
};

}

const char* NvColorSpaceToString(uint32_t space) {
  return space >= 1 && space <= 45 ? spaces[space - 1] : "unknown";
}

uint32_t NvColorSpaceFromString(const char* name) {
  if (name == nullptr) {
    return 0;
  }

  for (uint32_t index = 0; index < 45; ++index) {
    const char* left = spaces[index];
    const char* right = name;

    while (*left != 0 && *left == *right) {
      ++left;
      ++right;
    }

    if (*left == *right) {
      return index + 1;
    }
  }

  return 0;
}
