#pragma once

#include <stdint.h>

namespace nn::ns {

enum RatingOrganization : int32_t {};

struct ApplicationControlProperty {
  uint8_t reserved0[0x3030];
  uint32_t parentalControlFlag;
  uint8_t reserved3034[0xc];
  int8_t ratingAge[32];
  uint8_t reserved3060[0x1b6];
  uint8_t parentalControlOption;
  uint8_t reserved3217[0xde9];
};

static_assert(sizeof(ApplicationControlProperty) == 0x4000);

}
