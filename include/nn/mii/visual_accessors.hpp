#pragma once

#include "nn/mii/core_data.hpp"

namespace nn::mii {

struct CharInfo {
  detail::CharInfoRaw data;
};

struct ParamCharInfoAccessor {
  detail::CharInfoRaw data;
  bool IsValid() const;
};

struct CharInfoVisualParamAccessor {
  CharInfo* info;

  explicit CharInfoVisualParamAccessor(CharInfo* value);
  static bool IsEditableMii(const CharInfo& value);
  bool IsValid() const;
  bool IsHairFlip() const;
  bool HasMole() const;
  void SetHairFlip(bool value);
  void SetMoleExistence(bool value);

#define MII_VISUAL_FIELD(Name, Offset, Default, Transform)                     \
  int Get##Name() const;                                                       \
  void Set##Name(int value);
#include "nn/mii/visual_fields.inc"
#undef MII_VISUAL_FIELD
};

namespace detail {

enum Ver3FacelineColor : int;
enum Ver3HairColor : int;
enum Ver3EyeColor : int;
enum Ver3MouthColor : int;
enum Ver3GlassColor : int;

struct DefaultMii {
  uint32_t words[54];
};

extern const DefaultMii DefaultMiiTable[8];
extern const uint8_t Ver3FacelineColorTable[6];
extern const uint8_t Ver3HairColorTable[8];
extern const uint8_t Ver3EyeColorTable[6];
extern const uint8_t Ver3MouthColorTable[5];
extern const uint8_t Ver3GlassColorTable[6];

const DefaultMii* GetDefaultMii(int index);
int GetFacelineColorFromVer3(Ver3FacelineColor value);
int GetHairColorFromVer3(Ver3HairColor value);
int GetEyeColorFromVer3(Ver3EyeColor value);
int GetMouthColorFromVer3(Ver3MouthColor value);
int GetGlassColorFromVer3(Ver3GlassColor value);

static_assert(sizeof(DefaultMii) == 216);

}
}
