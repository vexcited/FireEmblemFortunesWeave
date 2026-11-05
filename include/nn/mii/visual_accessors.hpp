#pragma once

#include "nn/mii/core_data.hpp"

namespace nn::mii {

struct CharInfo {
  detail::CharInfoRaw data;
};

struct ParamCharInfoAccessor {
  detail::CharInfoRaw data;

  explicit ParamCharInfoAccessor(const CharInfo& info);
  bool IsValid() const;
  void GetNickname(Nickname* name, int replacement) const;
  CreateId GetCreateId() const;
  bool IsSpecial() const;

#define MII_CHAR_INFO_FIELD(Name, Offset) int Get##Name() const;
#include "nn/mii/char_info_fields.inc"
#undef MII_CHAR_INFO_FIELD
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
