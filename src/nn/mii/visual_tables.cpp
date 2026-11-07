#include "nn/mii/visual_accessors.hpp"

namespace nn::mii::detail {

#include "visual_tables.inc"

const DefaultMii* GetDefaultMii(int index) {
  static constexpr unsigned Order[] = {2, 3, 4, 5, 6, 7};
  return DefaultMiiTable + Order[index];
}

#define COLOR_CONVERSION(Name)                                                 \
  int Get##Name##ColorFromVer3(Ver3##Name##Color value) {                      \
    return Ver3##Name##ColorTable[unsigned(value)];                            \
  }
COLOR_CONVERSION(Faceline)
COLOR_CONVERSION(Hair)
COLOR_CONVERSION(Eye)
COLOR_CONVERSION(Mouth)
COLOR_CONVERSION(Glass)
#undef COLOR_CONVERSION

bool CharInfoRaw::IsValid() const {
  return Verify() == 0;
}

}
