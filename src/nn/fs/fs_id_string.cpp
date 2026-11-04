#include "nn/fs/detail/fs_id_string.hpp"

#include "nn/util/string_util.hpp"

namespace nn::fs::detail {

const char* IdString::ToValueString(int id) {
  util::SNPrintf(m_Buffer, sizeof(m_Buffer), "%d", id);
  return m_Buffer;
}

extern const char* const PriorityNames[] = {
  "Realtime",
  "Normal",
  "Low",
};

extern const char* const PriorityRawNames[] = {
  "Realtime",
  "Normal",
  "Low",
  "Background",
};

template<>
const char* IdString::ToString<Priority>(Priority id) {
  if (static_cast<unsigned int>(id) <= Priority_Low) {
    return PriorityNames[id];
  }
  return ToValueString(id);
}

template<>
const char* IdString::ToString<PriorityRaw>(PriorityRaw id) {
  if (static_cast<unsigned int>(id) <= PriorityRaw_Background) {
    return PriorityRawNames[id];
  }
  return ToValueString(id);
}

template<>
const char* IdString::ToString<ImageDirectoryId>(ImageDirectoryId id) {
  switch (id) {
    case ImageDirectoryId::Nand:
      return "Nand";
    case ImageDirectoryId::SdCard:
      return "SdCard";
    default:
      return ToValueString(static_cast<int>(id));
  }
}

template<>
const char* IdString::ToString<ContentStorageId>(ContentStorageId id) {
  switch (id) {
    case ContentStorageId::System:
      return "System";
    case ContentStorageId::User:
      return "User";
    case ContentStorageId::SdCard:
      return "SdCard";
    case ContentStorageId::System0:
      return "System0";
    case ContentStorageId::System3:
      return "System3";
    default:
      return ToValueString(static_cast<int>(id));
  }
}

template<>
const char* IdString::ToString<GameCardPartition>(GameCardPartition id) {
  switch (id) {
    case GameCardPartition::Update:
      return "Update";
    case GameCardPartition::Normal:
      return "Normal";
    case GameCardPartition::Secure:
      return "Secure";
    case GameCardPartition::Logo:
      return "Logo";
    default:
      return ToValueString(static_cast<int>(id));
  }
}

template<>
const char* IdString::ToString<SaveDataSpaceId>(SaveDataSpaceId id) {
  switch (id) {
    case SaveDataSpaceId::System:
      return "System";
    case SaveDataSpaceId::User:
      return "User";
    case SaveDataSpaceId::SdSystem:
      return "SdSystem";
    case SaveDataSpaceId::Temporary:
      return "Temporary";
    case SaveDataSpaceId::SdUser:
      return "SdUser";
    case SaveDataSpaceId::ProperSystem:
      return "ProperSystem";
    case SaveDataSpaceId::SafeMode:
      return "SafeMode";
    case SaveDataSpaceId::ProperUser:
      return "ProperUser";
    default:
      return ToValueString(static_cast<int>(id));
  }
}

template<>
const char* IdString::ToString<ContentType>(ContentType id) {
  switch (id) {
    case ContentType::Meta:
      return "Meta";
    case ContentType::Control:
      return "Control";
    case ContentType::Manual:
      return "Manual";
    case ContentType::Logo:
      return "Logo";
    case ContentType::Data:
      return "Data";
    default:
      return ToValueString(static_cast<int>(id));
  }
}

template<>
const char* IdString::ToString<BisPartitionId>(BisPartitionId id) {
  switch (id) {
    case BisPartitionId::BootPartition1Root:
      return "BootPartition1Root";
    case BisPartitionId::BootPartition2Root:
      return "BootPartition2Root";
    case BisPartitionId::UserDataRoot:
      return "UserDataRoot";
    case BisPartitionId::BootConfigAndPackage2Part1:
      return "BootConfigAndPackage2Part1";
    case BisPartitionId::BootConfigAndPackage2Part2:
      return "BootConfigAndPackage2Part2";
    case BisPartitionId::BootConfigAndPackage2Part3:
      return "BootConfigAndPackage2Part3";
    case BisPartitionId::BootConfigAndPackage2Part4:
      return "BootConfigAndPackage2Part4";
    case BisPartitionId::BootConfigAndPackage2Part5:
      return "BootConfigAndPackage2Part5";
    case BisPartitionId::BootConfigAndPackage2Part6:
      return "BootConfigAndPackage2Part6";
    case BisPartitionId::CalibrationBinary:
      return "CalibrationBinary";
    case BisPartitionId::CalibrationFile:
      return "CalibrationFile";
    case BisPartitionId::SafeMode:
      return "SafeMode";
    case BisPartitionId::User:
      return "User";
    case BisPartitionId::System:
      return "System";
    case BisPartitionId::SystemProperEncryption:
      return "SystemProperEncryption";
    case BisPartitionId::SystemProperPartition:
      return "SystemProperPartition";
    case BisPartitionId::SignedSystemPartitionOnSafeMode:
      return "SignedSystemPartitionOnSafeMode";
    case BisPartitionId::DeviceTreeBlob:
      return "DeviceTreeBlob";
    case BisPartitionId::System0:
      return "System0";
    case BisPartitionId::System2:
      return "System2";
    case BisPartitionId::System3:
      return "System3";
    case BisPartitionId::UserProperPartition:
      return "UserProperPartition";
    default:
      return ToValueString(static_cast<int>(id));
  }
}

template<>
const char* IdString::ToString<DirectoryEntryType>(DirectoryEntryType id) {
  switch (id) {
    case DirectoryEntryType_Directory:
      return "Directory";
    case DirectoryEntryType_File:
      return "File";
    default:
      return ToValueString(id);
  }
}

template<>
const char* IdString::ToString<MountHostOption>(MountHostOption id) {
  if (id.flags == MountHostOptionFlag_PseudoCaseSensitive) {
    return "MountHostOptionFlag_PseudoCaseSensitive";
  }
  return ToValueString(static_cast<int>(id.flags));
}

template<>
const char* IdString::ToString<SaveDataFormatType>(SaveDataFormatType id) {
  switch (id) {
    case SaveDataFormatType::Normal:
      return "Normal";
    case SaveDataFormatType::NoJournal:
      return "NoJournal";
    default:
      return ToValueString(static_cast<int>(id));
  }
}

}
