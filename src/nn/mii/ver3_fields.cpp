#include "nn/mii/ver3_fields.hpp"

namespace nn::detail {
[[noreturn]] void UnexpectedDefaultImpl();
}

namespace nn::mii::detail {

const Ver3StoreDataTableElement Ver3StoreDataTable[77] = {
#include "ver3_table.inc"
};

const Ver3StoreDataTableElement* GetVer3StoreDataTableElement(
  Ver3StoreDataMember member) {
  return Ver3StoreDataTable + static_cast<unsigned>(member);
}

static uint32_t Load(const uint8_t* bytes, int size) {
  switch (size) {
    case 1:
      return bytes[0];
    case 2:
      return bytes[0] | uint32_t(bytes[1]) << 8;
    case 4:
      return bytes[0] | uint32_t(bytes[1]) << 8 |
        uint32_t(bytes[2]) << 16 | uint32_t(bytes[3]) << 24;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

static int Get(const Ver3StoreDataRaw* record, Ver3StoreDataMember member) {
  const auto* field = GetVer3StoreDataTableElement(member);
  const uint32_t value = Load(record->data + field->offset, field->size);
  const uint32_t mask = ~(UINT32_MAX << (field->bits & 31));
  return (value >> (field->shift & 31)) & mask;
}

static void Set(Ver3StoreDataRaw* record, Ver3StoreDataMember member,
  int value) {
  const auto* field = GetVer3StoreDataTableElement(member);
  auto* bytes = record->data + field->offset;
  const uint32_t old = Load(bytes, field->size);
  const uint32_t mask = ~(UINT32_MAX << (field->bits & 31));
  const unsigned shift = field->shift & 31;
  const uint32_t result = (old & ~(mask << shift)) |
    ((uint32_t(value) & mask) << shift);

  for (int i = 0; i < field->size; ++i) {
    bytes[i] = result >> (i * 8);
  }
}

#define MII_FIELD(Name, Id) \
  int Ver3StoreDataRaw::Get##Name() const { \
    return Get(this, Ver3StoreDataMember::Name); \
  } \
  void Ver3StoreDataRaw::Set##Name(int value) { \
    Set(this, Ver3StoreDataMember::Name, value); \
  }
#include "nn/mii/ver3_fields.inc"
#undef MII_FIELD

}
