#pragma once

#include "nn/mii/ver3_fields.hpp"

namespace nn::mii {

struct Nickname {
  uint16_t text[11];

  void Set(const uint16_t* source);
  void ReplaceQuestionMark();
  bool IsValid() const;
  bool IsEmpty() const;
  bool operator==(const Nickname& other) const;
};

static_assert(sizeof(Nickname) == 22);

namespace detail {

struct Ver3CreateId {
  uint8_t data[10];
  bool IsValid() const;
};

struct Ver3AuthorId {
  uint8_t data[8];
  bool IsValid() const;
};

void GetVer3StoreDataDefaultName(Nickname* name);
void GetVer3StoreDataDefaultCreatorName(Nickname* name);
void ModifyVer3CreateIdWiiUAndNormal(Ver3CreateId* id);
void ModifyVer3StoreDataNicknameInvalid(Nickname* name);
void StoreLittleEndianNickname(uint16_t* output, int count,
                               const Nickname& name);
void LoadLittleEndianNickname(Nickname* output, const uint16_t* input,
                              int count);
void CalculateAndSetCrc16(void* data, int size);
bool IsValidCrc16(const void* data, int size);

}
}
