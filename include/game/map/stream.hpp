#pragma once

#include <stdint.h>
#include <string.h>

#include <string>

namespace game {

#pragma GCC visibility push(hidden)

class IStream {
public:
  virtual bool Unknown00(int* value) = 0;
  virtual void Unknown01(int value) = 0;
  virtual bool Unknown02(int* value) = 0;
  virtual void Unknown03(int value) = 0;
};

struct Data;

class Stream : public IStream {
public:
  void WriteData(const Data* data);

  void WriteU8(uint8_t value) {
    buffer_[position_++] = value;
  }

  void WriteU16(uint16_t value) {
    WriteU8(value);
    WriteU8(value >> 8);
  }

  void WriteU32(uint32_t value) {
    WriteU8(value);
    WriteU8(value >> 8);
    WriteU8(value >> 16);
    WriteU8(value >> 24);
  }

  void WriteString(const std::string& value) {
    const int length = value.size();
    if (length == 0) {
      WriteU16(0);
      return;
    }

    WriteU16(length + 1);
    Write(value.c_str(), length + 1);
  }

  void Write(const void* data, int size) {
    if (size > 0) {
      memmove(buffer_ + position_, data, size);
      position_ += size;
    }
  }

  uint8_t ReadU8() {
    return buffer_[position_++];
  }

  uint16_t ReadU16() {
    const uint16_t low = ReadU8();
    return low | ReadU8() << 8;
  }

  uint32_t ReadU32() {
    const uint32_t low = ReadU16();
    const uint32_t middle = ReadU8();
    return low | middle << 16 | static_cast<uint32_t>(ReadU8()) << 24;
  }

  uint64_t ReadU64() {
    const uint64_t low = ReadU32();
    return low | static_cast<uint64_t>(ReadU32()) << 32;
  }

  // Rows are stored as their key hash or as its low 32 bits.
  template<typename T>
  const T* ReadData();

  template<typename T>
  const T* ReadShortData();

  void ReadString(std::string& value) {
    const uint16_t length = ReadU16();
    if (length == 0) {
      value.clear();
      return;
    }

    const char* text = reinterpret_cast<const char*>(buffer_ + position_);
    position_ += length;
    value = text;
  }

  void SkipString() {
    const uint16_t length = ReadU16();
    if (length != 0) {
      position_ += length;
    }
  }

  void Skip(int size) {
    position_ += size;
  }

private:
  uint8_t* buffer_;
  int unknown_10_;
  int position_;
};

#pragma GCC visibility pop

}
