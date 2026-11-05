#include "nn/fs/fs_error_context.hpp"
#include "nn/util/string_util.hpp"

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::fs {

namespace {

inline size_t GetContextValueSize(uint8_t type) {
  switch (static_cast<ContextType>(type)) {
    case ContextType::SaveDataSpaceId:
      return sizeof(SaveDataSpaceId);
    case ContextType::SaveDataReferenceId:
      return sizeof(SaveDataReferenceId);
    case ContextType::SaveDataType:
      return sizeof(SaveDataType);
    case ContextType::SystemSaveDataId:
      return sizeof(uint64_t);
    case ContextType::SaveDataAttribute:
      return sizeof(TruncatedSaveDataAttribute);
    case ContextType::StorageId:
    case ContextType::PatchStorageId:
      return sizeof(ErrorContext::StorageId);
    case ContextType::ContentType:
      return sizeof(fssystem::NcaHeader::ContentType);
    case ContextType::ProgramId:
      return sizeof(uint64_t);
    case ContextType::Aes:
      return sizeof(AesErrorContext);
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

[[gnu::noinline]] void PrintValue(char* buffer, int size,
  const uint8_t* value, size_t valueSize) {
  const bool isNumber = valueSize <= sizeof(uint64_t);
  int length = util::SNPrintf(buffer, size, !isNumber ? "" : "0x");
  if (size - length < 4) {
    return;
  }

  if (isNumber) {
    size_t index = 0;
    do {
      length += util::SNPrintf(buffer + length, size - length, "%02x",
        value[valueSize - 1 - index]);
      ++index;
    } while (index < valueSize && size - length > 3);
  }
  else {
    size_t index = 0;
    do {
      if ((index % 32) == 0) {
        length += util::SNPrintf(buffer + length, size - length, "\n");
      }
      length += util::SNPrintf(buffer + length, size - length, "%02x",
        value[index]);
      ++index;
    } while (index < valueSize && size - length > 3);
  }
}

}

template<ContextType Type, typename T>
uint8_t ErrorContext::GetType(T) {
  return static_cast<uint8_t>(Type);
}

template uint8_t ErrorContext::GetType<ContextType::SaveDataSpaceId,
  SaveDataSpaceId>(SaveDataSpaceId);
template uint8_t ErrorContext::GetType<ContextType::SaveDataReferenceId,
  SaveDataReferenceId>(SaveDataReferenceId);
template uint8_t ErrorContext::GetType<ContextType::SaveDataType,
  SaveDataType>(SaveDataType);
template uint8_t ErrorContext::GetType<ContextType::SystemSaveDataId,
  uint64_t>(uint64_t);
template uint8_t ErrorContext::GetType<ContextType::SaveDataAttribute,
  TruncatedSaveDataAttribute>(TruncatedSaveDataAttribute);
template uint8_t ErrorContext::GetType<ContextType::StorageId,
  ErrorContext::StorageId>(ErrorContext::StorageId);
template uint8_t ErrorContext::GetType<ContextType::PatchStorageId,
  ErrorContext::StorageId>(ErrorContext::StorageId);
template uint8_t ErrorContext::GetType<ContextType::ContentType,
  fssystem::NcaHeader::ContentType>(fssystem::NcaHeader::ContentType);
template uint8_t ErrorContext::GetType<ContextType::ProgramId,
  uint64_t>(uint64_t);
template uint8_t ErrorContext::GetType<ContextType::Aes,
  AesErrorContext>(AesErrorContext);

size_t GetContextSize(uint8_t type) {
  return sizeof(uint8_t) + GetContextValueSize(type);
}

int ErrorContext::ToString(char* buffer, size_t size,
  const ErrorContext& context) {
  const char* header;
  switch (static_cast<ContextType>(context.type)) {
    case ContextType::SaveDataSpaceId:
      header = "FS: ContextType::SaveDataSpaceId: ";
      break;
    case ContextType::SaveDataReferenceId:
      header = "FS: ContextType::SaveDataReferenceId: ";
      break;
    case ContextType::SaveDataType:
      header = "FS: ContextType::SaveDataType: ";
      break;
    case ContextType::SystemSaveDataId:
      header = "FS: ContextType::SystemSaveDataId: ";
      break;
    case ContextType::SaveDataAttribute:
      header = "FS: ContextType::SaveDataAttribute: ";
      break;
    case ContextType::StorageId:
      header = "FS: ContextType::StorageId: ";
      break;
    case ContextType::PatchStorageId:
      header = "FS: ContextType::PatchStorageId: ";
      break;
    case ContextType::ContentType:
      header = "FS: ContextType::ContentType: ";
      break;
    case ContextType::ProgramId:
      header = "FS: ContextType::ProgramId: ";
      break;
    case ContextType::Aes:
      header = "FS: ContextType::Aes: ";
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
  const int length = util::SNPrintf(buffer, size, header);
  PrintValue(buffer + length, static_cast<int>(size) - length, context.data,
    GetContextValueSize(context.type));
  return length;
}

}
