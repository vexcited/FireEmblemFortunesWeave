#include "nn/mii/core_data.hpp"

namespace nn::mii {

bool Nickname::operator==(const Nickname &other) const
{
  for (unsigned i = 0; i < 11; ++i) {
    if (text[i] != other.text[i]) {
      return false;
    }
  }

  return true;
}

bool CreateId::IsNil() const
{
  uint8_t combined = 0;

  for (auto value : data) {
    combined |= value;
  }

  return combined == 0;
}

bool CreateId::IsValid() const
{
  return !IsNil() && data[8] >= 0x80 && data[8] < 0xC0;
}

bool CreateId::operator==(const CreateId &other) const
{
  if (!IsValid()) {
    return false;
  }

  for (unsigned i = 0; i < 16; ++i) {
    if (data[i] != other.data[i]) {
      return false;
    }
  }

  return true;
}

bool CreateId::operator!=(const CreateId &other) const
{
  return !(*this == other);
}

namespace detail {

const CoreDataTableElement CoreDataTable[49] = {
#include "core_table.inc"
};

static uint32_t ReadField(const CoreDataRaw &data, unsigned index)
{
  const auto &field = CoreDataTable[index];
  const uint32_t mask = ~(UINT32_MAX << (field.bits & 31));
  return ((data.data[field.offset] >> (field.shift & 31)) & mask) +
         uint32_t(field.minimum);
}

static void WriteField(CoreDataRaw *data, unsigned index, uint32_t value)
{
  const auto &field = CoreDataTable[index];
  const uint32_t mask = ~(UINT32_MAX << (field.bits & 31));
  const unsigned shift = field.shift & 31;
  auto &byte = data->data[field.offset];
  byte = (byte & ~(mask << shift)) |
         (((value - uint32_t(field.minimum)) & mask) << shift);
}

#define MII_CORE_FIELD(Name, Index, Order, Error)                              \
  int CoreDataRaw::Get##Name() const                                           \
  {                                                                            \
    return ReadField(*this, Index);                                            \
  }                                                                            \
  void CoreDataRaw::Set##Name(int value)                                       \
  {                                                                            \
    WriteField(this, Index, uint32_t(value));                                  \
  }
#include "nn/mii/core_fields.inc"
#undef MII_CORE_FIELD

void GetDefaultNickname(Nickname *name)
{
  static constexpr uint16_t Default[] = {'n', 'o', ' ', 'n', 'a', 'm', 'e', 0};
  name->Set(Default);
}

void CoreDataRaw::GetNickname(Nickname *name) const
{
  LoadLittleEndianNickname(name, reinterpret_cast<const uint16_t *>(data + 28),
                           10);
}

void CoreDataRaw::SetNickname(const Nickname &name)
{
  StoreLittleEndianNickname(reinterpret_cast<uint16_t *>(data + 28), 10, name);
}

void CoreDataRaw::SetDefault()
{
  for (auto &value : data) {
    value = 0;
  }

  Nickname name{};
  GetDefaultNickname(&name);
  SetNickname(name);
}

void CoreDataRaw::BuildFromCharInfoRaw(const CharInfoRaw &info)
{
  SetDefault();
  StoreLittleEndianNickname(
    reinterpret_cast<uint16_t *>(data + 28), 10,
    *reinterpret_cast<const Nickname *>(info.data + 16));

#define MII_CORE_FIELD(Name, Index, Order, Error)                              \
  Set##Name(info.data[38 + Order]);
#include "nn/mii/core_fields.inc"
#undef MII_CORE_FIELD
}

int VerifyCoreData(const CoreDataRaw &data, bool allow_empty_name)
{
  Nickname name{};
  data.GetNickname(&name);

  if (!name.IsValid() && (!allow_empty_name || !name.IsEmpty())) {
    return 51;
  }

#define MII_CORE_FIELD(Name, Index, Order, Error)                              \
  if (uint32_t(data.Get##Name()) - CoreDataTable[Index].minimum >              \
      uint32_t(CoreDataTable[Index].maximum - CoreDataTable[Index].minimum)) { \
    return Error;                                                              \
  }
#include "nn/mii/core_fields.inc"
#undef MII_CORE_FIELD

  return 0;
}

int CoreDataRaw::Verify() const
{
  return VerifyCoreData(*this, false);
}

bool CoreDataRaw::IsValid() const
{
  return Verify() == 0;
}

bool CoreDataRaw::IsValidWithoutEmptyNickname() const
{
  // The original accepts an empty name through this entry.
  return VerifyCoreData(*this, true) == 0;
}

bool CoreDataRaw::operator==(const CoreDataRaw &other) const
{
  if (other.Verify() != 0) {
    return false;
  }

#define MII_CORE_FIELD(Name, Index, Order, Error)                              \
  if (Get##Name() != other.Get##Name()) {                                      \
    return false;                                                              \
  }
#include "nn/mii/core_fields.inc"
#undef MII_CORE_FIELD

  Nickname left{};
  Nickname right{};
  GetNickname(&left);
  other.GetNickname(&right);
  return left == right;
}

int CharInfoRaw::Verify() const
{
  if (!reinterpret_cast<const CreateId *>(data)->IsValid()) {
    return 50;
  }

  if (!reinterpret_cast<const Nickname *>(data + 16)->IsValid()) {
    return 51;
  }

#define MII_CORE_FIELD(Name, Index, Order, Error)                              \
  if (uint32_t(data[38 + Order]) - CoreDataTable[Index].minimum >              \
      uint32_t(CoreDataTable[Index].maximum - CoreDataTable[Index].minimum)) { \
    return Error;                                                              \
  }
#include "nn/mii/core_fields.inc"
#undef MII_CORE_FIELD

  return 0;
}

bool CharInfoRaw::operator==(const CharInfoRaw &other) const
{
  if (other.Verify() != 0 ||
      *reinterpret_cast<const CreateId *>(data) !=
        *reinterpret_cast<const CreateId *>(other.data) ||
      !(*reinterpret_cast<const Nickname *>(data + 16) ==
        *reinterpret_cast<const Nickname *>(other.data + 16))) {
    return false;
  }

  for (unsigned i = 38; i <= 86; ++i) {
    if (data[i] != other.data[i]) {
      return false;
    }
  }

  return true;
}

}
}
