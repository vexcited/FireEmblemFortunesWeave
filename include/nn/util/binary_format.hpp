#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/util/string_view.hpp"

namespace nn::util {

enum ByteOrderMark : uint16_t {
  ByteOrderMark_Normal = 0xfeff,
  ByteOrderMark_Reverse = 0xfffe,
};

struct BinaryBlockHeader;
class RelocationTable;

struct BinVersion {
  uint8_t micro;
  uint8_t minor;
  uint16_t major;
};

struct BinaryFileHeader {
  uint64_t signature;
  BinVersion version;
  uint16_t _byteOrderMark;
  uint8_t _alignmentShift;
  uint8_t _targetAddressSize;
  uint32_t _offsetToFileName;
  uint16_t _flag;
  uint16_t _offsetToFirstBlock;
  uint32_t _offsetToRelTable;
  uint32_t _fileSize;

  bool IsValid(int64_t packedSignature, int majorVersion, int minorVersion,
    int microVersion) const;
  bool IsSignatureValid(int64_t packedSignature) const;
  bool IsVersionValid(int majorVersion, int minorVersion,
    int microVersion) const;
  bool IsEndianValid() const;
  bool IsAlignmentValid() const;
  bool IsEndianReverse() const;
  size_t GetAlignment() const;
  bool IsRelocated() const;
  void SetRelocated(bool value);
  void SetByteOrderMark(ByteOrderMark byteOrderMark);
  void SetAddressSize();
  size_t GetFileSize() const;
  void SetFileSize(size_t size);
  void SetAlignment(size_t alignment);
  string_view GetFileName() const;
  void SetFileName(const string_view& name);
  RelocationTable* GetRelocationTable();
  void SetRelocationTable(RelocationTable* table);
  BinaryBlockHeader* GetFirstBlock();
  const BinaryBlockHeader* GetFirstBlock() const;
  BinaryBlockHeader* FindFirstBlock(int signature);
  const BinaryBlockHeader* FindFirstBlock(int signature) const;
  void SetFirstBlock(BinaryBlockHeader* block);
};

struct BinaryBlockHeader {
  uint32_t signature;
  uint32_t _offsetToNextBlock;
  uint32_t _blockSize;
  uint32_t _reserved;

  BinaryBlockHeader* GetNextBlock();
  const BinaryBlockHeader* GetNextBlock() const;
  BinaryBlockHeader* FindNextBlock(int signature);
  const BinaryBlockHeader* FindNextBlock(int signature) const;
  size_t GetBlockSize() const;
  void SetNextBlock(BinaryBlockHeader* block);
  void SetBlockSize(size_t size);
};

class RelocationTable {
public:
  static constexpr uint32_t PackedSignature = 0x544c525f;

  struct Section {
    void* _ptr;
    uint32_t _position;
    uint32_t _size;
    int32_t _entryIndex;
    int32_t _entryCount;

    void SetPtr(void* ptr);
    void* GetPtr() const;
    void* GetPtrInFile(void* fileBase) const;
    void* GetBasePtr(void* fileBase) const;
    size_t GetSize() const;
  };

  struct Entry {
    uint32_t _position;
    uint16_t _structCount;
    uint8_t _offsetCount;
    uint8_t _paddingCount;
  };

  void Relocate();
  void Unrelocate();
  Section* GetSection(int index);
  const Section* GetSection(int index) const;
  void SetSignature();
  static size_t CalculateSize(int sectionCount, int entryCount);

  uint32_t _signature;
  uint32_t _position;
  int32_t _sectionCount;
  uint32_t _reserved;
  Section _sections[1];
};

struct StringPool : BinaryBlockHeader {
  static constexpr uint32_t PackedSignature = 0x5254535f;

  int GetStringCount() const;
  void SetStringCount(int count);
  void SetSignature();

  int32_t _stringCount;
};

}
