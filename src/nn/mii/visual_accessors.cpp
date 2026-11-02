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

namespace nn::mii {
namespace {

static int Raw(uint32_t value) {
  return value;
}

#define COLOR_CONVERSION(Name)                                                 \
  static int Name(uint32_t value) {                                            \
    return detail::Get##Name##ColorFromVer3(detail::Ver3##Name##Color(value)); \
  }
COLOR_CONVERSION(Faceline)
COLOR_CONVERSION(Hair)
COLOR_CONVERSION(Eye)
COLOR_CONVERSION(Mouth)
COLOR_CONVERSION(Glass)
#undef COLOR_CONVERSION

}

bool ParamCharInfoAccessor::IsValid() const {
  return data.IsValid();
}

CharInfoVisualParamAccessor::CharInfoVisualParamAccessor(CharInfo* value)
    : info(value) {
}

bool CharInfoVisualParamAccessor::IsEditableMii(const CharInfo& value) {
  const bool valid = value.data.IsValid();
  return valid & (value.data.data[43] != 1);
}

bool CharInfoVisualParamAccessor::IsValid() const {
  return info->data.IsValid();
}

#define MII_VISUAL_FIELD(Name, Offset, Default, Transform)                     \
  int CharInfoVisualParamAccessor::Get##Name() const {                         \
    if (IsEditableMii(*info)) {                                                \
      return info->data.data[Offset];                                          \
    }                                                                          \
    return Transform(detail::GetDefaultMii(0)->words[Default]);                \
  }                                                                            \
  void CharInfoVisualParamAccessor::Set##Name(int value) {                     \
    if (IsEditableMii(*info)) {                                                \
      info->data.data[Offset] = uint8_t(value);                                \
    }                                                                          \
  }
#include "nn/mii/visual_fields.inc"
#undef MII_VISUAL_FIELD

bool CharInfoVisualParamAccessor::IsHairFlip() const {
  return IsEditableMii(*info) ? info->data.data[51] == 1
                              : detail::GetDefaultMii(0)->words[6] == 1;
}

bool CharInfoVisualParamAccessor::HasMole() const {
  return IsEditableMii(*info) ? info->data.data[83] == 1
                              : detail::GetDefaultMii(0)->words[38] == 1;
}

void CharInfoVisualParamAccessor::SetHairFlip(bool value) {
  if (IsEditableMii(*info)) {
    info->data.data[51] = value;
  }
}

void CharInfoVisualParamAccessor::SetMoleExistence(bool value) {
  if (IsEditableMii(*info)) {
    info->data.data[83] = value;
  }
}

}
