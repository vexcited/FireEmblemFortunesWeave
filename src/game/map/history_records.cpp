#include "game/map/history_data.hpp"

namespace game::map::history {

#pragma GCC visibility push(hidden)

void UnitRecordKey::Deserialize(Stream& stream) {
  if (stream.ReadU8() != 0) {
    unknown00 = stream.ReadU32();
    unknown04 = stream.ReadU32();
  }
  else {
    unknown00 = stream.ReadU16();
    unknown04 = stream.ReadU16();
  }
  unknown08 = stream.ReadU8();
  unknown09 = stream.ReadU8();
}

DataAll::~DataAll() {
  FreeRecord(unknown20_, g_shared_record_region, g_record_allocators);
  FreeRecord(unknown28_, g_shared_record_region, g_record_allocators);
}

void DataAll::Serialize(Stream& stream) const {
  SerializeHeader(stream, 1);
  stream.WriteU16(unknown16_);
  stream.WriteU32(unknown18_);
  for (size_t i = 0; i < unknown16_; i++) {
    unknown20_[i].Serialize(stream);
  }
  stream.Write(unknown28_, unknown18_);
  unknown30_.Serialize(stream);
}

// Version 0 stores the buffer size in 16 bits.
void DataAll::Deserialize(Stream& stream) {
  const uint8_t version = DeserializeHeader(stream);
  unknown16_ = stream.ReadU16();
  unknown18_ = version != 0 ? stream.ReadU32() : stream.ReadU16();

  if (unknown16_ == 0) {
    unknown20_ = nullptr;
  }
  else {
    unknown20_ = static_cast<UnitRecordKey*>(
      AllocateRecord(unknown16_ * sizeof(UnitRecordKey))
    );
    for (size_t i = 0; i < unknown16_; i++) {
      unknown20_[i].Deserialize(stream);
    }
  }

  if (unknown18_ == 0) {
    unknown28_ = nullptr;
  }
  else {
    unknown28_ = AllocateRecord(unknown18_);
    stream.Read(unknown28_, unknown18_);
  }

  unknown30_.Deserialize(stream);
}

DataDiff::~DataDiff() {
  if (entries_ == nullptr) {
    return;
  }

  for (size_t i = 0; i < count_; i++) {
    DiffEntry& entry = entries_[i];
    if (entry.fields == nullptr) {
      continue;
    }

    for (size_t j = 0; j < entry.count; j++) {
      DiffField& field = entry.fields[j];
      if (field.data != nullptr) {
        FreeRecord(
          field.data, g_shared_record_region, g_shared_record_allocators
        );
        field.data = nullptr;
      }
    }

    FreeRecord(
      entry.fields, g_shared_record_region, g_shared_record_allocators
    );
    entry.fields = nullptr;
  }

  FreeRecord(entries_, g_shared_record_region, g_shared_record_allocators);
}

void DataDiff::Serialize(Stream& stream) const {
  SerializeHeader(stream, 0);
  stream.WriteU16(count_);
  for (size_t i = 0; i < count_; i++) {
    const DiffEntry& entry = entries_[i];
    stream.WriteU8(0);
    entry.key.Serialize(stream);
    stream.WriteU16(entry.count);
    for (size_t j = 0; j < entry.count; j++) {
      const DiffField& field = entry.fields[j];
      stream.WriteU8(2);
      stream.WriteU8(field.kind);
      stream.WriteU32(field.unknown04);
      stream.WriteU32(field.unknown08);
      stream.WriteU32(field.size);
      stream.Write(field.data, field.size);
    }
  }
  unknown20_.Serialize(stream);
}

void DataDiff::Deserialize(Stream& stream) {
  DeserializeHeader(stream);
  count_ = stream.ReadU16();
  if (count_ == 0) {
    entries_ = nullptr;
  }
  else {
    entries_ = static_cast<DiffEntry*>(
      AllocateRecord(count_ * sizeof(DiffEntry))
    );
    for (size_t i = 0; i < count_; i++) {
      DiffEntry& entry = entries_[i];
      stream.Skip(1);
      entry.key.Deserialize(stream);
      entry.count = stream.ReadU16();
      if (entry.count == 0) {
        entry.fields = nullptr;
        continue;
      }

      entry.fields = static_cast<DiffField*>(
        AllocateRecord(entry.count * sizeof(DiffField))
      );
      for (size_t j = 0; j < entry.count; j++) {
        DiffField& field = entry.fields[j];
        const uint8_t version = stream.ReadU8();
        field.kind = stream.ReadU8();
        if (version != 0) {
          field.unknown04 = stream.ReadU32();
          field.unknown08 = stream.ReadU32();
          field.size = version == 1 ? stream.ReadU16() : stream.ReadU32();
        }
        else {
          field.unknown04 = stream.ReadU16();
          field.unknown08 = stream.ReadU16();
          field.size = stream.ReadU16();
        }

        if (field.size == 0) {
          field.data = nullptr;
        }
        else {
          field.data = AllocateRecord(field.size);
          stream.Read(field.data, field.size);
        }
      }
    }
  }

  unknown20_.Deserialize(stream);
}

DataAdditionalUnit::~DataAdditionalUnit() {
  FreeRecord(unknown28_, g_record_region, g_record_allocators);
}

void DataAdditionalUnit::Serialize(Stream& stream) const {
  SerializeHeader(stream, 0);
  key_.Serialize(stream);
  stream.Write(unknown28_, key_.unknown04);
}

void DataAdditionalUnit::Deserialize(Stream& stream) {
  DeserializeHeader(stream);
  key_.Deserialize(stream);
  if (key_.unknown04 != 0) {
    unknown28_ = AllocateRecord(key_.unknown04);
    stream.Read(unknown28_, key_.unknown04);
  }
}

DataAdditionalNewType::~DataAdditionalNewType() {
  FreeRecord(unknown28_, g_record_region, g_record_allocators);
}

void DataAdditionalNewType::Serialize(Stream& stream) const {
  SerializeHeader(stream, 0);
  key_.Serialize(stream);
  stream.Write(unknown28_, key_.unknown04);
}

void DataAdditionalNewType::Deserialize(Stream& stream) {
  DeserializeHeader(stream);
  key_.Deserialize(stream);
  if (key_.unknown04 != 0) {
    unknown28_ = AllocateRecord(key_.unknown04);
    stream.Read(unknown28_, key_.unknown04);
  }
}

void DataDeletedUnit::Serialize(Stream& stream) const {
  SerializeHeader(stream, 0);
  stream.WriteU8(unknown16_);
  stream.WriteU8(unknown17_);
}

void DataDeletedUnit::Deserialize(Stream& stream) {
  DeserializeHeader(stream);
  unknown16_ = stream.ReadU8();
  unknown17_ = stream.ReadU8();
}

void TempDataAdditionalUnit::Serialize(Stream& stream) const {
  stream.WriteU8(0);
  stream.WriteU8(0);
  stream.WriteU8(unknown09_);
  stream.WriteU8(unknown0a_);
}

void TempDataAdditionalUnit::Deserialize(Stream& stream) {
  stream.Skip(2);
  unknown09_ = stream.ReadU8();
  unknown0a_ = stream.ReadU8() != 0;
}

void TempDataDeletedUnit::Serialize(Stream& stream) const {
  stream.WriteU8(0);
  stream.WriteU8(0);
  stream.WriteU8(unknown09_);
  stream.WriteU8(unknown0a_);
}

void TempDataDeletedUnit::Deserialize(Stream& stream) {
  stream.Skip(2);
  unknown09_ = stream.ReadU8();
  unknown0a_ = stream.ReadU8();
}

#pragma GCC visibility pop

}
