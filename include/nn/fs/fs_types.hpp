#pragma once

#include <stdint.h>

namespace nn::fs {

enum Priority {
  Priority_Realtime,
  Priority_Normal,
  Priority_Low,
};

enum PriorityRaw {
  PriorityRaw_Realtime,
  PriorityRaw_Normal,
  PriorityRaw_Low,
  PriorityRaw_Background,
};

enum class ImageDirectoryId {
  Nand,
  SdCard,
};

enum class ContentStorageId {
  System,
  User,
  SdCard,
  System0,
  System3,
};

enum class GameCardPartition {
  Update,
  Normal,
  Secure,
  Logo,
};

enum class SaveDataSpaceId : uint8_t {
  System = 0,
  User = 1,
  SdSystem = 2,
  Temporary = 3,
  SdUser = 4,
  ProperSystem = 100,
  SafeMode = 101,
  ProperUser = 102,
};

enum class ContentType {
  Meta,
  Control,
  Manual,
  Logo,
  Data,
};

enum class BisPartitionId {
  BootPartition1Root = 0,
  BootPartition2Root = 10,
  UserDataRoot = 20,
  BootConfigAndPackage2Part1 = 21,
  BootConfigAndPackage2Part2 = 22,
  BootConfigAndPackage2Part3 = 23,
  BootConfigAndPackage2Part4 = 24,
  BootConfigAndPackage2Part5 = 25,
  BootConfigAndPackage2Part6 = 26,
  CalibrationBinary = 27,
  CalibrationFile = 28,
  SafeMode = 29,
  User = 30,
  System = 31,
  SystemProperEncryption = 32,
  SystemProperPartition = 33,
  SignedSystemPartitionOnSafeMode = 34,
  DeviceTreeBlob = 35,
  System0 = 36,
  System2 = 37,
  System3 = 38,
  UserProperPartition = 39,
};

enum DirectoryEntryType {
  DirectoryEntryType_Directory,
  DirectoryEntryType_File,
};

enum MountHostOptionFlag {
  MountHostOptionFlag_None = 0,
  MountHostOptionFlag_PseudoCaseSensitive = 1,
};

struct MountHostOption {
  uint32_t flags;
};

enum OpenMode {
  OpenMode_Read = 1 << 0,
  OpenMode_Write = 1 << 1,
  OpenMode_AllowAppend = 1 << 2,
};

enum OpenDirectoryMode {
  OpenDirectoryMode_Directory = 1 << 0,
  OpenDirectoryMode_File = 1 << 1,
  OpenDirectoryMode_All = OpenDirectoryMode_Directory | OpenDirectoryMode_File,
};

enum class SaveDataFormatType : uint8_t {
  Normal,
  NoJournal,
};

}
