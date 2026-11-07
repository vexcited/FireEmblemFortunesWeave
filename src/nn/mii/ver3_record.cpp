#include "nn/mii/ver3_record.hpp"
#include "nn/mii/mii_utility.hpp"
#include "nn/mii/ver3_field_access.hpp"

#include <stddef.h>
#include <string.h>

namespace nn::os {
void GenerateRandomBytes(void*, size_t);
}

namespace nn::mii {

namespace detail {

static void Copy(void* destination, const void* source, int size) {
  memcpy(destination, source, size);
}

void ModifyVer3StoreDataNicknameInvalid(Nickname* name) {
  if (name->IsValid() || name->IsEmpty()) {
    return;
  }

  for (unsigned i = 0; i < 10; ++i) {
    if (name->text[i] == 0) {
      for (; i <= 10; ++i) {
        name->text[i] = 0;
      }

      return;
    }
  }
}

void GetVer3StoreDataDefaultName(Nickname* name) {
  static constexpr uint16_t Default[] = {'n', 'o', ' ', 'n', 'a', 'm', 'e', 0};
  name->Set(Default);
}

void GetVer3StoreDataDefaultCreatorName(Nickname* name) {
  static constexpr uint16_t Empty[] = {0};
  name->Set(Empty);
}

bool Ver3CreateId::IsValid() const {
  if (data[0] & 0x20) {
    return false;
  }

  uint8_t combined = 0;

  for (auto value : data) {
    combined |= value;
  }

  return combined != 0;
}

bool Ver3AuthorId::IsValid() const {
  return true;
}

void ModifyVer3CreateIdWiiUAndNormal(Ver3CreateId* id) {
  id->data[0] = (id->data[0] & 15) | 0xD0;
}

void UtilityImpl::MakeVer3CreateId(Ver3CreateId* id) {
  nn::os::GenerateRandomBytes(id, 10);
  ModifyVer3CreateIdWiiUAndNormal(id);
}

void UtilityImpl::MakeVer3AuthorId(Ver3AuthorId* id) {
  nn::os::GenerateRandomBytes(id, 8);
}

void Ver3StoreDataRaw::UpdateCrc() {
  CalculateAndSetCrc16(this, 96);
}

void Ver3StoreDataRaw::GetCreateId(Ver3CreateId* id) const {
  const auto* field =
    GetVer3StoreDataTableElement(Ver3StoreDataMember::CreateId);
  Copy(id, data + field->offset, field->size);
}

void Ver3StoreDataRaw::GetAuthorId(Ver3AuthorId* id) const {
  const auto* field =
    GetVer3StoreDataTableElement(Ver3StoreDataMember::AuthorId);
  Copy(id, data + field->offset, field->size);
}

void Ver3StoreDataRaw::SetCreateId(const Ver3CreateId& id) {
  const auto* field =
    GetVer3StoreDataTableElement(Ver3StoreDataMember::CreateId);
  Copy(data + field->offset, &id, field->size);
}

void Ver3StoreDataRaw::SetAuthorId(const Ver3AuthorId& id) {
  const auto* field =
    GetVer3StoreDataTableElement(Ver3StoreDataMember::AuthorId);
  Copy(data + field->offset, &id, field->size);
}

void Ver3StoreDataRaw::GetName(Nickname* name) const {
  const auto* field = GetVer3StoreDataTableElement(Ver3StoreDataMember::Name);
  LoadLittleEndianNickname(
    name, reinterpret_cast<const uint16_t*>(data + field->offset),
    field->size / 2);
  ModifyVer3StoreDataNicknameInvalid(name);
}

void Ver3StoreDataRaw::GetCreatorName(Nickname* name) const {
  const auto* field =
    GetVer3StoreDataTableElement(Ver3StoreDataMember::CreatorName);
  LoadLittleEndianNickname(
    name, reinterpret_cast<const uint16_t*>(data + field->offset),
    field->size / 2);
  ModifyVer3StoreDataNicknameInvalid(name);
}

void Ver3StoreDataRaw::SetName(const Nickname& name) {
  const auto* field = GetVer3StoreDataTableElement(Ver3StoreDataMember::Name);
  StoreLittleEndianNickname(reinterpret_cast<uint16_t*>(data + field->offset),
                            field->size / 2, name);
}

void Ver3StoreDataRaw::SetCreatorName(const Nickname& name) {
  const auto* field =
    GetVer3StoreDataTableElement(Ver3StoreDataMember::CreatorName);
  StoreLittleEndianNickname(reinterpret_cast<uint16_t*>(data + field->offset),
                            field->size / 2, name);
}

void Ver3StoreDataRaw::SetDefault(UtilityImpl* utility) {
  SetMiiVersion(3);
  Set(this, Ver3StoreDataMember::Copyable, 0);
  Set(this, Ver3StoreDataMember::NgWord, 0);
  Set(this, Ver3StoreDataMember::RegionMove, 0);
  Set(this, Ver3StoreDataMember::FontRegion, 0);
  Set(this, Ver3StoreDataMember::RoomIndex, 0);
  Set(this, Ver3StoreDataMember::PositionInRoom, 0);
  Set(this, Ver3StoreDataMember::AuthorType, 0);
  Set(this, Ver3StoreDataMember::Gender, 0);
  Set(this, Ver3StoreDataMember::BirthMonth, 0);
  Set(this, Ver3StoreDataMember::BirthDay, 0);
  Set(this, Ver3StoreDataMember::FavoriteColor, 0);
  Set(this, Ver3StoreDataMember::Favorite, 0);
  Set(this, Ver3StoreDataMember::Height, 0);
  Set(this, Ver3StoreDataMember::Build, 0);
  Set(this, Ver3StoreDataMember::Localonly, 0);
  Set(this, Ver3StoreDataMember::FaceType, 0);
  Set(this, Ver3StoreDataMember::FaceColor, 0);
  Set(this, Ver3StoreDataMember::FaceTex, 0);
  Set(this, Ver3StoreDataMember::FaceMake, 0);
  Set(this, Ver3StoreDataMember::HairType, 0);
  Set(this, Ver3StoreDataMember::HairColor, 0);
  Set(this, Ver3StoreDataMember::HairFlip, 0);
  Set(this, Ver3StoreDataMember::EyeType, 0);
  Set(this, Ver3StoreDataMember::EyeColor, 0);
  Set(this, Ver3StoreDataMember::EyeScale, 0);
  Set(this, Ver3StoreDataMember::EyeAspect, 0);
  Set(this, Ver3StoreDataMember::EyeRotate, 0);
  Set(this, Ver3StoreDataMember::EyeX, 0);
  Set(this, Ver3StoreDataMember::EyeY, 0);
  Set(this, Ver3StoreDataMember::EyebrowType, 0);
  Set(this, Ver3StoreDataMember::EyebrowColor, 0);
  Set(this, Ver3StoreDataMember::EyebrowScale, 0);
  Set(this, Ver3StoreDataMember::EyebrowAspect, 0);
  Set(this, Ver3StoreDataMember::EyebrowRotate, 0);
  Set(this, Ver3StoreDataMember::EyebrowX, 0);
  SetEyebrowY(3);
  Set(this, Ver3StoreDataMember::NoseType, 0);
  Set(this, Ver3StoreDataMember::NoseScale, 0);
  Set(this, Ver3StoreDataMember::NoseY, 0);
  Set(this, Ver3StoreDataMember::MouthType, 0);
  Set(this, Ver3StoreDataMember::MouthColor, 0);
  Set(this, Ver3StoreDataMember::MouthScale, 0);
  Set(this, Ver3StoreDataMember::MouthAspect, 0);
  Set(this, Ver3StoreDataMember::MouthY, 0);
  Set(this, Ver3StoreDataMember::MustacheType, 0);
  Set(this, Ver3StoreDataMember::BeardType, 0);
  Set(this, Ver3StoreDataMember::BeardColor, 0);
  Set(this, Ver3StoreDataMember::BeardScale, 0);
  Set(this, Ver3StoreDataMember::BeardY, 0);
  Set(this, Ver3StoreDataMember::GlassType, 0);
  Set(this, Ver3StoreDataMember::GlassColor, 0);
  Set(this, Ver3StoreDataMember::GlassScale, 0);
  Set(this, Ver3StoreDataMember::GlassY, 0);
  Set(this, Ver3StoreDataMember::MoleType, 0);
  Set(this, Ver3StoreDataMember::MoleScale, 0);
  Set(this, Ver3StoreDataMember::MoleX, 0);
  Set(this, Ver3StoreDataMember::MoleY, 0);
  Set(this, Ver3StoreDataMember::Reserved0, 0);
  Set(this, Ver3StoreDataMember::Reserved1, 0);
  Set(this, Ver3StoreDataMember::Reserved2, 0);
  Set(this, Ver3StoreDataMember::Padding0, 0);
  Set(this, Ver3StoreDataMember::Padding1, 0);
  Set(this, Ver3StoreDataMember::Padding2, 0);
  Set(this, Ver3StoreDataMember::Padding3, 0);
  Set(this, Ver3StoreDataMember::Padding4, 0);
  Set(this, Ver3StoreDataMember::Padding5, 0);
  Set(this, Ver3StoreDataMember::Padding6, 0);
  Set(this, Ver3StoreDataMember::Padding7, 0);
  Set(this, Ver3StoreDataMember::Padding8, 0);
  Set(this, Ver3StoreDataMember::Padding9, 0);

  Nickname name{};
  GetVer3StoreDataDefaultName(&name);
  const auto* name_field =
    GetVer3StoreDataTableElement(Ver3StoreDataMember::Name);
  StoreLittleEndianNickname(
    reinterpret_cast<uint16_t*>(data + name_field->offset),
    name_field->size / 2, name);
  name = {};
  GetVer3StoreDataDefaultCreatorName(&name);
  const auto* creator_field =
    GetVer3StoreDataTableElement(Ver3StoreDataMember::CreatorName);
  StoreLittleEndianNickname(
    reinterpret_cast<uint16_t*>(data + creator_field->offset),
    creator_field->size / 2, name);
  SetBirthPlatform(4);

  Ver3CreateId create_id{};
  utility->MakeVer3CreateId(&create_id);
  const auto* create_field =
    GetVer3StoreDataTableElement(Ver3StoreDataMember::CreateId);
  Copy(data + create_field->offset, &create_id, create_field->size);

  Ver3AuthorId author_id{};
  utility->MakeVer3AuthorId(&author_id);
  const auto* author_field =
    GetVer3StoreDataTableElement(Ver3StoreDataMember::AuthorId);
  Copy(data + author_field->offset, &author_id, author_field->size);
  CalculateAndSetCrc16(this, 96);
}

int Ver3StoreDataRaw::Verify() const {
#define CHECK_RAW(Field, Minimum, Maximum, Error)                              \
  if (uint32_t(Get(this, Ver3StoreDataMember::Field)) - Minimum >              \
    Maximum - Minimum) {                                                       \
    return Error;                                                              \
  }
#define CHECK(Field, Minimum, Maximum, Error)                                  \
  if (uint32_t(Get##Field()) - Minimum > Maximum - Minimum) {                  \
    return Error;                                                              \
  }
  CHECK_RAW(MiiVersion, 0, 3, 1)
  CHECK_RAW(Copyable, 0, 1, 2)
  CHECK_RAW(NgWord, 0, 1, 3)
  CHECK_RAW(RegionMove, 0, 3, 4)
  CHECK_RAW(FontRegion, 0, 3, 5)
  CHECK_RAW(RoomIndex, 0, 9, 6)
  CHECK(PositionInRoom, 0, 9, 7)
  CHECK(AuthorType, 0, 0, 8)
  CHECK(BirthPlatform, 1, 7, 9)
  CHECK(Gender, 0, 1, 12)

  const unsigned month = GetBirthMonth();
  const unsigned day = GetBirthDay();
  static constexpr unsigned Days[] = {31, 29, 31, 30, 31, 30,
                                      31, 31, 30, 31, 30, 31};

  if ((month | day) != 0 &&
      (month - 1 >= 12 || day == 0 || day > Days[month - 1])) {
    return 13;
  }

  CHECK(FavoriteColor, 0, 11, 14)
  CHECK(Favorite, 0, 1, 15)
  CHECK(Height, 0, 128, 17)
  CHECK(Build, 0, 128, 18)
  CHECK(Localonly, 0, 1, 19)
  CHECK(FaceType, 0, 11, 20)
  CHECK(FaceColor, 0, 5, 21)
  CHECK(FaceTex, 0, 11, 22)
  CHECK(FaceMake, 0, 11, 23)
  CHECK(HairType, 0, 131, 24)
  CHECK(HairColor, 0, 7, 25)
  CHECK(HairFlip, 0, 1, 26)
  CHECK(EyeType, 0, 59, 27)
  CHECK(EyeColor, 0, 5, 28)
  CHECK(EyeScale, 0, 7, 29)
  CHECK(EyeAspect, 0, 6, 30)
  CHECK(EyeRotate, 0, 7, 31)
  CHECK(EyeX, 0, 12, 32)
  CHECK(EyeY, 0, 18, 33)
  CHECK(EyebrowType, 0, 23, 34)
  CHECK(EyebrowColor, 0, 7, 35)
  CHECK(EyebrowScale, 0, 8, 36)
  CHECK(EyebrowAspect, 0, 6, 37)
  CHECK(EyebrowRotate, 0, 11, 38)
  CHECK(EyebrowX, 0, 12, 39)
  CHECK(EyebrowY, 3, 18, 40)
  CHECK(NoseType, 0, 17, 41)
  CHECK(NoseScale, 0, 8, 42)
  CHECK(NoseY, 0, 18, 43)
  CHECK(MouthType, 0, 35, 44)
  CHECK(MouthColor, 0, 4, 45)
  CHECK(MouthScale, 0, 8, 46)
  CHECK(MouthAspect, 0, 6, 47)
  CHECK(MouthY, 0, 18, 48)
  CHECK(MustacheType, 0, 5, 49)
  CHECK(BeardType, 0, 5, 50)
  CHECK(BeardColor, 0, 7, 51)
  CHECK(BeardScale, 0, 8, 52)
  CHECK(BeardY, 0, 16, 53)
  CHECK(GlassType, 0, 8, 54)
  CHECK(GlassColor, 0, 5, 55)
  CHECK(GlassScale, 0, 7, 56)
  CHECK(GlassY, 0, 20, 57)
  CHECK(MoleType, 0, 1, 58)
  CHECK(MoleScale, 0, 8, 59)
  CHECK(MoleX, 0, 16, 60)
  CHECK(MoleY, 0, 30, 61)
#undef CHECK
#undef CHECK_RAW

  Ver3AuthorId author{};
  const auto* author_field =
    GetVer3StoreDataTableElement(Ver3StoreDataMember::AuthorId);
  Copy(&author, data + author_field->offset, author_field->size);

  if (!author.IsValid()) {
    return 10;
  }

  Ver3CreateId create{};
  const auto* create_field =
    GetVer3StoreDataTableElement(Ver3StoreDataMember::CreateId);
  Copy(&create, data + create_field->offset, create_field->size);

  if (!create.IsValid()) {
    return 11;
  }

  Nickname name{};
  GetName(&name);

  if (!name.IsValid()) {
    return 16;
  }

  name = {};
  GetCreatorName(&name);

  if (!name.IsValid() && !name.IsEmpty()) {
    return 62;
  }

  return IsValidCrc16(this, 96) ? 0 : 63;
}

bool Ver3StoreDataRaw::IsValid() const {
  return Verify() == 0;
}

}
}
