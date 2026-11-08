#include "nn/capsrv/capsrv_application_api.hpp"

#include <string.h>

namespace nn::capsrv::detail {

static_assert(sizeof(ScreenShotAttributeEx0Base) == 0x40);
static_assert(sizeof(ScreenShotAttributeForApplicationBase) == 0x40);

void ScreenShotAttributeEx0Base::SetDefault() {
  memset(this, 0, sizeof(*this));
  frameCount = 1;
  isUnknown30 = 1;
  isUnknown31 = 1;
}

void ScreenShotAttributeForApplicationBase::SetDefault() {
  memset(this, 0, sizeof(*this));
  frameCount = 1;
  isUnknown28 = 1;
  isUnknown29 = 1;
}

void ScreenShotAttributeForApplicationBase::CopyFromScreenShotAttribute(
  const ScreenShotAttributeEx0Base& source) {
  dynamicRange = source.dynamicRange;
  size = static_cast<uint8_t>(source.size);
  unknown5 = static_cast<uint8_t>(source.unknown2c);
  orientation = static_cast<uint8_t>(source.orientation);
  reserved7 = 0;
  unknown8 = source.unknown28;
  frameCount = source.frameCount;
  for (int i = 0; i < 4; i++) {
    unknown10[i] = source.unknown10[i];
  }
  for (int i = 0; i < 4; i++) {
    unknown20[i] = source.unknown20[i];
  }
  isUnknown28 = source.isUnknown30;
  isUnknown29 = source.isUnknown31;
  memset(reserved2a, 0, sizeof(reserved2a));
}

}
