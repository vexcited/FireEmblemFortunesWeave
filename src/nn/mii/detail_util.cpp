#include "nn/mii/store_data.hpp"

#include "nn/mii/core_data.hpp"

namespace nn::mii::detail {

static uint16_t Crc16(const void* data, int size, uint16_t initial) {
  const auto* bytes = static_cast<const uint8_t*>(data);
  uint16_t value = initial;

  for (int i = 0; i < size; ++i) {
    for (unsigned bit = 0; bit < 8; ++bit) {
      value = (value << 1) ^ ((value & 0x8000) ? 0x1021 : 0);
    }

    value ^= bytes[i];
  }

  return value;
}

uint16_t CalculateCrc16(const void* data, int size, uint16_t initial) {
  return Crc16(data, size, initial);
}

void CalculateAndSetCrc16(void* data, int size, uint16_t initial) {
  auto* bytes = static_cast<uint8_t*>(data);
  bytes[size - 2] = 0;
  bytes[size - 1] = 0;
  const uint16_t crc = Crc16(data, size, initial);
  bytes[size - 2] = crc >> 8;
  bytes[size - 1] = crc;
}

bool IsValidCrc16(const void* data, int size, uint16_t initial) {
  return Crc16(data, size, initial) == 0;
}

void CalculateAndSetCrc16(void* data, int size) {
  auto* bytes = static_cast<uint8_t*>(data);
  bytes[size - 2] = 0;
  bytes[size - 1] = 0;
  const uint16_t crc = Crc16(data, size, 0);
  bytes[size - 2] = crc >> 8;
  bytes[size - 1] = crc;
}

bool IsValidCrc16(const void* data, int size) {
  return Crc16(data, size, 0) == 0;
}

void StoreLittleEndianNickname(uint16_t* output, int count,
                               const Nickname& name) {
  for (int i = 0; i < count; ++i) {
    output[i] = name.text[i];
  }
}

void LoadLittleEndianNickname(Nickname* output, const uint16_t* input,
                              int count) {
  for (int i = 0; i < count; ++i) {
    output->text[i] = input[i];
  }

  output->text[count] = 0;
}

void GetDefaultNickname(Nickname* name) {
  const uint16_t Default[] = {'n', 'o', ' ', 'n', 'a', 'm', 'e', 0};
  name->Set(Default);
}

}
