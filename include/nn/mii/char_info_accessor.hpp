#pragma once

#include "nn/mii/visual_accessors.hpp"

namespace nn::mii {

bool IsSpecialMii(const CharInfo& info);
int GetExpressionCount(int expressionFlags);

struct CharInfoAccessor {
  detail::CharInfoRaw data;

  explicit CharInfoAccessor(const CharInfo& info);
  bool IsValid() const;
  void GetNickname(Nickname* name, int replacement) const;
  int GetFontRegion() const;
  int GetFavoriteColor() const;
  int GetHeight() const;
  int GetBuild() const;
  bool IsHairFlip() const;
  int GetHairType() const;
  int GetFacelineType() const;
  int GetSkinColor() const;
};

struct GenderCharInfoAccessor {
  detail::CharInfoRaw data;

  explicit GenderCharInfoAccessor(const CharInfo& info);
  bool IsValid() const;
  void GetNickname(Nickname* name, int replacement) const;
  int GetFontRegion() const;
  int GetFavoriteColor() const;
  int GetGender() const;
  int GetHeight() const;
  int GetBuild() const;
  bool IsHairFlip() const;
  int GetHairType() const;
  int GetFacelineType() const;
  int GetSkinColor() const;
};

namespace detail {

struct StoreDataRaw;

void ReplaceCharInfoIfNecessary(CharInfoRaw* info);

struct NfpStoreDataExtentionRaw {
  uint8_t facelineColor;
  uint8_t hairColor;
  uint8_t eyeColor;
  uint8_t eyebrowColor;
  uint8_t mouthColor;
  uint8_t beardColor;
  uint8_t glassColor;
  uint8_t glassType;

  int GetFacelineColor() const;
  int GetHairColor() const;
  int GetEyeColor() const;
  int GetEyebrowColor() const;
  int GetMouthColor() const;
  int GetBeardColor() const;
  int GetGlassColor() const;
  int GetGlassType() const;
  bool IsValid() const;
  void SetDefault();
  void SetFromStoreData(const StoreDataRaw& store);
  void ToStoreData(StoreDataRaw* store) const;
  void SetFacelineColor(int value);
  void SetHairColor(int value);
  void SetEyeColor(int value);
  void SetEyebrowColor(int value);
  void SetMouthColor(int value);
  void SetBeardColor(int value);
  void SetGlassColor(int value);
  void SetGlassType(int value);
};

static_assert(sizeof(NfpStoreDataExtentionRaw) == 8);

struct NicknameLe {
  uint16_t text[11];

  bool IsValid() const;
  bool IsEmpty() const;
  void SetByLittleEndian(uint16_t* source);
  static void Convert(Nickname* output, const NicknameLe& input);
  static void Convert(NicknameLe* output, const Nickname& input);
};

static_assert(sizeof(NicknameLe) == 22);

}
}
