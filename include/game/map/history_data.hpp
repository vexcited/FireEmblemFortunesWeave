#pragma once

#include <stddef.h>
#include <stdint.h>

#include <functional>

#include "game/map/stream.hpp"
#include "nn/mem/standard_allocator.hpp"

namespace game::map::history {

#pragma GCC visibility push(hidden)

// The record buffers come from two memory regions with an allocator each,
// a failed allocation calls the handler and retries.
struct RecordRegion {
  uintptr_t begin;
  uintptr_t end;
};

extern RecordRegion g_record_region;
extern nn::mem::StandardAllocator* g_record_allocators[2];

// Other units reach the record heap through the global offset table.
[[gnu::visibility("default")]] extern RecordRegion g_shared_record_region;
[[gnu::visibility("default")]] extern nn::mem::StandardAllocator*
  g_shared_record_allocators[2];
[[gnu::visibility("default")]] extern std::function<void(size_t)>
  g_record_alloc_failed;
[[gnu::visibility("default")]] extern uint32_t g_record_alloc_retries;

// Buffers of at most a page come from the second allocator.
inline void* AllocateRecord(size_t size) {
  nn::mem::StandardAllocator* allocator =
    g_shared_record_allocators[size <= 0x1000];
  for (uint32_t i = 0; i < g_record_alloc_retries; i++) {
    void* buffer = allocator->Allocate(size);
    if (buffer != nullptr) {
      return buffer;
    }
    g_record_alloc_failed(size);
  }
  return nullptr;
}

// Buffers above the end of the region belong to the second allocator, those
// below its start to none.
inline void FreeRecord(
  void* buffer, const RecordRegion& region,
  nn::mem::StandardAllocator* const* allocators
) {
  if (buffer == nullptr) {
    return;
  }

  const uintptr_t address = reinterpret_cast<uintptr_t>(buffer);
  int index;
  if (address >= region.end) {
    index = 1;
  }
  else if (address >= region.begin) {
    index = 0;
  }
  else {
    return;
  }

  nn::mem::StandardAllocator* allocator = allocators[index];
  if (allocator != nullptr) {
    allocator->Free(buffer);
  }
}

// The serialized state of the map, read and written by out of line code.
struct MapRecord {
  void Serialize(Stream& stream) const;
  void Deserialize(Stream& stream);

  uint8_t unknown00_[0x18];
};

// One rewind record. The slots without a known caller keep their index as
// name.
class Data {
public:
  virtual ~Data() = default;

  virtual const void* Unknown02() const = 0;
  virtual int Unknown03() const = 0;
  virtual uint16_t Unknown04() const = 0;
  virtual const void* Unknown05() const = 0;
  virtual bool Unknown06() const = 0;
  virtual const void* Unknown07() const = 0;
  virtual void Serialize(Stream& stream) const = 0;
  virtual void Deserialize(Stream& stream) = 0;

protected:
  // The header starts with a version byte and a padding byte.
  void SerializeHeader(Stream& stream, uint8_t version) const {
    stream.WriteU8(version);
    stream.WriteU8(0);
    stream.WriteU16(unknown10_);
    stream.WriteU8(unknown12_);
    stream.WriteU16(unknown14_);
  }

  uint8_t DeserializeHeader(Stream& stream) {
    const uint8_t version = stream.ReadU8();
    stream.Skip(1);
    unknown10_ = stream.ReadU16();
    unknown12_ = stream.ReadU8();
    unknown14_ = stream.ReadU16();
    return version;
  }

  uint8_t unknown08_[0x8];
  uint16_t unknown10_;
  uint8_t unknown12_;
  uint16_t unknown14_;
};

// The key of a unit record and the size of its buffer. Version 0 stores the
// numbers in 16 bits.
struct UnitRecordKey {
  void Serialize(Stream& stream) const {
    stream.WriteU8(1);
    stream.WriteU32(unknown00);
    stream.WriteU32(unknown04);
    stream.WriteU8(unknown08);
    stream.WriteU8(unknown09);
  }

  void Deserialize(Stream& stream);

  int unknown00;
  uint32_t unknown04;
  uint8_t unknown08;
  uint8_t unknown09;
};

class DataAll final : public Data {
public:
  ~DataAll() override;

  const void* Unknown02() const override;
  int Unknown03() const override;
  uint16_t Unknown04() const override;
  const void* Unknown05() const override;
  bool Unknown06() const override;
  const void* Unknown07() const override;
  void Serialize(Stream& stream) const override;
  void Deserialize(Stream& stream) override;

private:
  uint16_t unknown16_;
  uint32_t unknown18_;
  UnitRecordKey* unknown20_;
  void* unknown28_;
  MapRecord unknown30_;
};

// A changed field of a unit, version 1 stores its size in 16 bits.
struct DiffField {
  uint8_t kind;
  int unknown04;
  int unknown08;
  uint32_t size;
  void* data;
};

struct DiffEntry {
  UnitRecordKey key;
  uint16_t count;
  DiffField* fields;
};

class DataDiff final : public Data {
public:
  ~DataDiff() override;

  const void* Unknown02() const override;
  int Unknown03() const override;
  uint16_t Unknown04() const override;
  const void* Unknown05() const override;
  bool Unknown06() const override;
  const void* Unknown07() const override;
  void Serialize(Stream& stream) const override;
  void Deserialize(Stream& stream) override;

private:
  uint16_t count_;
  DiffEntry* entries_;
  MapRecord unknown20_;
};

class DataAdditionalUnit final : public Data {
public:
  ~DataAdditionalUnit() override;

  const void* Unknown02() const override;
  int Unknown03() const override;
  uint16_t Unknown04() const override;
  const void* Unknown05() const override;
  bool Unknown06() const override;
  const void* Unknown07() const override;
  void Serialize(Stream& stream) const override;
  void Deserialize(Stream& stream) override;

private:
  uint8_t unknown16_[0x2];
  UnitRecordKey key_;
  void* unknown28_;
};

class DataAdditionalNewType final : public Data {
public:
  ~DataAdditionalNewType() override;

  const void* Unknown02() const override;
  int Unknown03() const override;
  uint16_t Unknown04() const override;
  const void* Unknown05() const override;
  bool Unknown06() const override;
  const void* Unknown07() const override;
  void Serialize(Stream& stream) const override;
  void Deserialize(Stream& stream) override;

private:
  uint8_t unknown16_[0x2];
  UnitRecordKey key_;
  void* unknown28_;
};

class DataDeletedUnit : public Data {
public:
  void Serialize(Stream& stream) const override;
  void Deserialize(Stream& stream) override;

private:
  uint8_t unknown16_;
  uint8_t unknown17_;
};

// Records of units added or deleted during the current step.
class TempData {
public:
  virtual ~TempData() = default;

  virtual void Serialize(Stream& stream) const = 0;
  virtual void Deserialize(Stream& stream) = 0;

protected:
  uint8_t unknown08_;
  uint8_t unknown09_;
};

class TempDataAdditionalUnit : public TempData {
public:
  void Serialize(Stream& stream) const override;
  void Deserialize(Stream& stream) override;

private:
  bool unknown0a_;
};

class TempDataDeletedUnit : public TempData {
public:
  void Serialize(Stream& stream) const override;
  void Deserialize(Stream& stream) override;

private:
  uint8_t unknown0a_;
};

#pragma GCC visibility pop

}
