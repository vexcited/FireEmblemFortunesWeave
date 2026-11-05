#pragma once

#include <stdint.h>

#include <string>

#include "wld/crc32.hpp"

namespace timeline {

class KeyReader;
class KeyWriter;

class IKey {
public:
  virtual ~IKey() = default;

  virtual void Dispatch() = 0;
  virtual std::string GetName() const = 0;
  virtual uint32_t GetTypeHash() const = 0;
  virtual void Serialize(KeyReader* reader, KeyWriter* writer) = 0;

protected:
  float frame_;
};

}

// Declares the destructor, serializer, name and type hash slots of a key
// class.
#define TIMELINE_KEY_NAME(Name) \
  static constexpr char kName[] = #Name; \
  ~Name() override; \
  void Serialize(timeline::KeyReader* reader, \
    timeline::KeyWriter* writer) override; \
  std::string GetName() const override; \
  uint32_t GetTypeHash() const override;

#define TIMELINE_KEY_NAME_DEFINE(Name) \
  Name::~Name() = default; \
  \
  std::string Name::GetName() const { \
    return kName; \
  } \
  \
  uint32_t Name::GetTypeHash() const { \
    return wld::Crc32(0, kName, sizeof(kName) - 1); \
  }
