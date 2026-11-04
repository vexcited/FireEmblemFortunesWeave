#include "nn/util/binary_format.hpp"

namespace nn::util {

bool BinaryFileHeader::IsValid(int64_t packedSignature, int majorVersion,
  int minorVersion, int microVersion) const {
  return IsAlignmentValid() && IsEndianValid()
    && IsVersionValid(majorVersion, minorVersion, microVersion)
    && IsSignatureValid(packedSignature);
}

bool BinaryFileHeader::IsSignatureValid(int64_t packedSignature) const {
  return signature == static_cast<uint64_t>(packedSignature);
}

bool BinaryFileHeader::IsVersionValid(int majorVersion, int minorVersion,
  int microVersion) const {
  (void)microVersion;
  return version.major == majorVersion && version.minor <= minorVersion;
}

bool BinaryFileHeader::IsEndianValid() const {
  return _byteOrderMark == ByteOrderMark_Normal;
}

bool BinaryFileHeader::IsAlignmentValid() const {
  return (reinterpret_cast<uintptr_t>(this) & (GetAlignment() - 1)) == 0;
}

bool BinaryFileHeader::IsEndianReverse() const {
  return _byteOrderMark == ByteOrderMark_Reverse;
}

size_t BinaryFileHeader::GetAlignment() const {
  return static_cast<size_t>(1) << _alignmentShift;
}

bool BinaryFileHeader::IsRelocated() const {
  return (_flag & 1) != 0;
}

void BinaryFileHeader::SetRelocated(bool value) {
  _flag = (_flag & ~1) | (value ? 1 : 0);
}

void BinaryFileHeader::SetByteOrderMark(ByteOrderMark byteOrderMark) {
  _byteOrderMark = byteOrderMark;
}

void BinaryFileHeader::SetAddressSize() {
  _targetAddressSize = sizeof(void*) * 8;
}

size_t BinaryFileHeader::GetFileSize() const {
  return _fileSize;
}

void BinaryFileHeader::SetFileSize(size_t size) {
  _fileSize = static_cast<uint32_t>(size);
}

void BinaryFileHeader::SetAlignment(size_t alignment) {
  _alignmentShift = static_cast<uint8_t>(__builtin_ctzll(alignment));
}

string_view BinaryFileHeader::GetFileName() const {
  if (_offsetToFileName == 0) {
    return string_view();
  }
  return string_view(reinterpret_cast<const char*>(this) + _offsetToFileName);
}

void BinaryFileHeader::SetFileName(const string_view& name) {
  _offsetToFileName = name.empty() ? 0 : static_cast<uint32_t>(
    reinterpret_cast<uintptr_t>(name.data())
    - reinterpret_cast<uintptr_t>(this));
}

RelocationTable* BinaryFileHeader::GetRelocationTable() {
  if (_offsetToRelTable == 0) {
    return nullptr;
  }
  return reinterpret_cast<RelocationTable*>(
    reinterpret_cast<uintptr_t>(this) + _offsetToRelTable);
}

void BinaryFileHeader::SetRelocationTable(RelocationTable* table) {
  _offsetToRelTable = table == nullptr ? 0 : static_cast<uint32_t>(
    reinterpret_cast<uintptr_t>(table) - reinterpret_cast<uintptr_t>(this));
}

BinaryBlockHeader* BinaryFileHeader::GetFirstBlock() {
  if (_offsetToFirstBlock == 0) {
    return nullptr;
  }
  return reinterpret_cast<BinaryBlockHeader*>(
    reinterpret_cast<uintptr_t>(this) + _offsetToFirstBlock);
}

const BinaryBlockHeader* BinaryFileHeader::GetFirstBlock() const {
  if (_offsetToFirstBlock == 0) {
    return nullptr;
  }
  return reinterpret_cast<const BinaryBlockHeader*>(
    reinterpret_cast<uintptr_t>(this) + _offsetToFirstBlock);
}

BinaryBlockHeader* BinaryFileHeader::FindFirstBlock(int signature) {
  BinaryBlockHeader* block = GetFirstBlock();
  if (block == nullptr
    || block->signature == static_cast<uint32_t>(signature)) {
    return block;
  }
  return block->FindNextBlock(signature);
}

const BinaryBlockHeader* BinaryFileHeader::FindFirstBlock(
  int signature) const {
  const BinaryBlockHeader* block = GetFirstBlock();
  if (block == nullptr
    || block->signature == static_cast<uint32_t>(signature)) {
    return block;
  }
  return block->FindNextBlock(signature);
}

void BinaryFileHeader::SetFirstBlock(BinaryBlockHeader* block) {
  _offsetToFirstBlock = block == nullptr ? 0 : static_cast<uint16_t>(
    reinterpret_cast<uintptr_t>(block) - reinterpret_cast<uintptr_t>(this));
}

BinaryBlockHeader* BinaryBlockHeader::GetNextBlock() {
  if (_offsetToNextBlock == 0) {
    return nullptr;
  }
  return reinterpret_cast<BinaryBlockHeader*>(
    reinterpret_cast<uintptr_t>(this) + _offsetToNextBlock);
}

const BinaryBlockHeader* BinaryBlockHeader::GetNextBlock() const {
  if (_offsetToNextBlock == 0) {
    return nullptr;
  }
  return reinterpret_cast<const BinaryBlockHeader*>(
    reinterpret_cast<uintptr_t>(this) + _offsetToNextBlock);
}

BinaryBlockHeader* BinaryBlockHeader::FindNextBlock(int signature) {
  BinaryBlockHeader* block = GetNextBlock();
  while (block != nullptr
    && block->signature != static_cast<uint32_t>(signature)) {
    block = block->GetNextBlock();
  }
  return block;
}

const BinaryBlockHeader* BinaryBlockHeader::FindNextBlock(
  int signature) const {
  const BinaryBlockHeader* block = GetNextBlock();
  while (block != nullptr
    && block->signature != static_cast<uint32_t>(signature)) {
    block = block->GetNextBlock();
  }
  return block;
}

size_t BinaryBlockHeader::GetBlockSize() const {
  return _blockSize;
}

void BinaryBlockHeader::SetNextBlock(BinaryBlockHeader* block) {
  _offsetToNextBlock = block == nullptr ? 0 : static_cast<uint32_t>(
    reinterpret_cast<uintptr_t>(block) - reinterpret_cast<uintptr_t>(this));
}

void BinaryBlockHeader::SetBlockSize(size_t size) {
  _blockSize = static_cast<uint32_t>(size);
}

void RelocationTable::Section::SetPtr(void* ptr) {
  _ptr = ptr;
}

void* RelocationTable::Section::GetPtr() const {
  return _ptr;
}

void* RelocationTable::Section::GetPtrInFile(void* fileBase) const {
  return static_cast<char*>(fileBase) + _position;
}

void* RelocationTable::Section::GetBasePtr(void* fileBase) const {
  return _ptr != nullptr ? static_cast<char*>(_ptr) - _position : fileBase;
}

size_t RelocationTable::Section::GetSize() const {
  return _size;
}

void RelocationTable::Relocate() {
  char* fileBase = reinterpret_cast<char*>(this) - _position;
  const Entry* entries =
    reinterpret_cast<const Entry*>(&_sections[_sectionCount]);

  for (int i = 0; i < _sectionCount; ++i) {
    const Section& section = _sections[i];
    char* sectionBase = static_cast<char*>(section.GetBasePtr(fileBase));
    for (int j = section._entryIndex;
      j < section._entryIndex + section._entryCount; ++j) {
      const Entry& entry = entries[j];
      uint64_t* pointer =
        reinterpret_cast<uint64_t*>(fileBase + entry._position);
      for (int k = 0; k < entry._structCount; ++k) {
        for (int l = 0; l < entry._offsetCount; ++l) {
          *pointer = *pointer != 0
            ? reinterpret_cast<uint64_t>(sectionBase + *pointer) : 0;
          ++pointer;
        }
        pointer += entry._paddingCount;
      }
    }
  }

  reinterpret_cast<BinaryFileHeader*>(fileBase)->SetRelocated(true);
}

void RelocationTable::Unrelocate() {
  char* fileBase = reinterpret_cast<char*>(this) - _position;
  const Entry* entries =
    reinterpret_cast<const Entry*>(&_sections[_sectionCount]);

  for (int i = 0; i < _sectionCount; ++i) {
    Section& section = _sections[i];
    uint64_t sectionBase =
      reinterpret_cast<uint64_t>(section.GetBasePtr(fileBase));
    section.SetPtr(nullptr);
    for (int j = section._entryIndex;
      j < section._entryIndex + section._entryCount; ++j) {
      const Entry& entry = entries[j];
      uint64_t* pointer =
        reinterpret_cast<uint64_t*>(fileBase + entry._position);
      for (int k = 0; k < entry._structCount; ++k) {
        for (int l = 0; l < entry._offsetCount; ++l) {
          *pointer = *pointer != 0 ? *pointer - sectionBase : 0;
          ++pointer;
        }
        pointer += entry._paddingCount;
      }
    }
  }

  reinterpret_cast<BinaryFileHeader*>(fileBase)->SetRelocated(false);
}

RelocationTable::Section* RelocationTable::GetSection(int index) {
  return &_sections[index];
}

const RelocationTable::Section* RelocationTable::GetSection(
  int index) const {
  return &_sections[index];
}

void RelocationTable::SetSignature() {
  _signature = PackedSignature;
}

size_t RelocationTable::CalculateSize(int sectionCount, int entryCount) {
  return sizeof(RelocationTable) + sizeof(Section) * (sectionCount - 1)
    + sizeof(Entry) * entryCount;
}

int StringPool::GetStringCount() const {
  return _stringCount;
}

void StringPool::SetStringCount(int count) {
  _stringCount = count;
}

void StringPool::SetSignature() {
  signature = PackedSignature;
}

}
