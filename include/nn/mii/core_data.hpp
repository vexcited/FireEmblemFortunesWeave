#pragma once

#include "nn/mii/ver3_record.hpp"

namespace nn::mii {

struct CreateId {
  uint8_t data[16];

  bool IsValid() const;
  bool IsNil() const;
  bool operator==(const CreateId &other) const;
  bool operator!=(const CreateId &other) const;
};

namespace detail {

struct CharInfoRaw {
  uint8_t data[88];

  int Verify() const;
  bool operator==(const CharInfoRaw &other) const;
};

struct CoreDataTableElement {
  int32_t offset;
  int32_t shift;
  int32_t bits;
  int32_t minimum;
  int32_t maximum;
  int32_t flag;
};

extern const CoreDataTableElement CoreDataTable[49];

struct CoreDataRaw {
  uint8_t data[48];

  void SetDefault();
  void GetNickname(Nickname *name) const;
  void SetNickname(const Nickname &name);
  void BuildFromCharInfoRaw(const CharInfoRaw &info);
  int Verify() const;
  bool IsValid() const;
  bool IsValidWithoutEmptyNickname() const;
  bool operator==(const CoreDataRaw &other) const;

#define MII_CORE_FIELD(Name, Index, Order, Error)                              \
  int Get##Name() const;                                                       \
  void Set##Name(int value);
#include "nn/mii/core_fields.inc"
#undef MII_CORE_FIELD
};

static_assert(sizeof(CoreDataRaw) == 48);
static_assert(sizeof(CharInfoRaw) == 88);
static_assert(sizeof(CoreDataTableElement) == 24);

void GetDefaultNickname(Nickname *name);
int VerifyCoreData(const CoreDataRaw &data, bool allow_empty_name);

}
}
