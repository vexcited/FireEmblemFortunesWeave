#include <string.h>

#include "nn/crypto/is_same_bytes.hpp"
#include "nn/crypto/sha256_generator.hpp"
#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_file_system_service_object_adapter.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fs_save_data.hpp"

namespace nn::fs {

namespace {

struct ThumbnailFileHeader {
  bool hasHeaderHash;
  bool hasImageHash;
  char reserved[30];
  char headerHash[32];
  char imageHash[32];
};

const int64_t ThumbnailFileHeaderSize = sizeof(ThumbnailFileHeader);

Result OpenSaveDataThumbnailFileImpl(std::unique_ptr<fsa::IFile>* outFile,
  SaveDataType type, uint64_t applicationId, UserId userId) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  SaveDataAttribute attribute = {};
  NN_FS_RESULT_DO(SaveDataAttribute::Make(&attribute,
    SaveDataReferenceId{applicationId}, type, userId, 0));
  nn::sf::SharedPointer<fssrv::sf::IFile> file;
  NN_FS_RESULT_DO(fileSystemProxy->OpenSaveDataMetaFile(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IFile>>(&file),
    SaveDataSpaceId::User, attribute, SaveDataMetaType::Thumbnail));
  std::unique_ptr<detail::FileServiceObjectAdapter> adapter(
    new detail::FileServiceObjectAdapter(std::move(file)));
  NN_FS_RESULT_THROW_UNLESS(adapter != nullptr,
    ResultAllocationMemoryFailedInSaveDataManagementB());
  *outFile = std::move(adapter);
  return ResultSuccess();
}

Result ReadAndCheckHash(void* buffer, fsa::IFile* file, const void* hash,
  int64_t offset, size_t size) {
  if (size == 0) {
    return ResultSuccess();
  }
  size_t readSize = 0;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(file->Read(&readSize,
    ThumbnailFileHeaderSize + offset, buffer, size, ReadOption{0}));
  char actualHash[32] = {};
  crypto::GenerateSha256Hash(actualHash, sizeof(actualHash), buffer, size);
  if (!crypto::IsSameBytes(actualHash, hash, sizeof(actualHash))) {
    memset(buffer, 0, size);
    return ResultThumbnailHashVerificationFailed();
  }
  return ResultSuccess();
}

inline Result ReadThumbnailFileHeader(ThumbnailFileHeader* outHeader,
  fsa::IFile* file) {
  size_t readSize = 0;
  return file->Read(&readSize, 0, outHeader, sizeof(*outHeader),
    ReadOption{0});
}

inline Result CorruptSaveDataThumbnailFile(uint64_t applicationId,
  UserId userId) {
  std::unique_ptr<fsa::IFile> file;
  NN_FS_RESULT_DO(OpenSaveDataThumbnailFileImpl(&file, SaveDataType::Account,
    applicationId, userId));
  const char corruptedHash[32] = {1};
  return file->Write(32, corruptedHash, sizeof(corruptedHash),
    WriteOption{1});
}

}

namespace detail {

// Exported functions are never inlined into their callers in the SDK.
[[gnu::noinline]] Result ReadSaveDataThumbnailFile(uint64_t applicationId,
  UserId userId, void* headerBuffer, size_t headerBufferSize,
  void* imageBuffer, size_t imageBufferSize) {
  if (headerBufferSize == 0 && imageBufferSize == 0) {
    return ResultSuccess();
  }
  std::unique_ptr<fsa::IFile> file;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(OpenSaveDataThumbnailFileImpl(&file,
    SaveDataType::Account, applicationId, userId));
  ThumbnailFileHeader header = {};
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(ReadThumbnailFileHeader(&header,
    file.get()));
  if (header.hasHeaderHash) {
    const Result result = ReadAndCheckHash(headerBuffer, file.get(),
      header.headerHash, 0, headerBufferSize);
    if (IsFailure(result)) {
      if (IsResultIncluded(result, ResultThumbnailHashVerificationFailed())) {
        memset(imageBuffer, 0, imageBufferSize);
      }
      return result;
    }
  }
  else {
    memset(headerBuffer, 0, headerBufferSize);
  }
  if (header.hasImageHash) {
    return ReadAndCheckHash(imageBuffer, file.get(), header.imageHash,
      headerBufferSize, imageBufferSize);
  }
  memset(imageBuffer, 0, imageBufferSize);
  return ResultSuccess();
}

[[gnu::noinline]] Result ReadSaveDataThumbnailFileHeader(
  uint64_t applicationId, UserId userId, void* headerBuffer,
  size_t headerBufferSize) {
  if (headerBufferSize == 0) {
    return ResultSuccess();
  }
  std::unique_ptr<fsa::IFile> file;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(OpenSaveDataThumbnailFileImpl(&file,
    SaveDataType::Account, applicationId, userId));
  ThumbnailFileHeader header = {};
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(ReadThumbnailFileHeader(&header,
    file.get()));
  if (header.hasHeaderHash) {
    return ReadAndCheckHash(headerBuffer, file.get(), header.headerHash, 0,
      headerBufferSize);
  }
  memset(headerBuffer, 0, headerBufferSize);
  return ResultSuccess();
}

[[gnu::noinline]] Result WriteSaveDataThumbnailFile(uint64_t applicationId,
  UserId userId, const void* headerBuffer, size_t headerBufferSize,
  const void* imageBuffer, size_t imageBufferSize) {
  if (headerBufferSize == 0 && imageBufferSize == 0) {
    return ResultSuccess();
  }
  std::unique_ptr<fsa::IFile> file;
  NN_FS_RESULT_DO(OpenSaveDataThumbnailFileImpl(&file, SaveDataType::Account,
    applicationId, userId));
  ThumbnailFileHeader header = {};
  if (headerBufferSize != 0) {
    NN_FS_RESULT_THROW_UNLESS(headerBuffer != nullptr,
      ResultNullptrArgument());
    crypto::GenerateSha256Hash(header.headerHash, sizeof(header.headerHash),
      headerBuffer, headerBufferSize);
    NN_FS_RESULT_DO(file->Write(ThumbnailFileHeaderSize, headerBuffer,
      headerBufferSize, WriteOption{0}));
  }
  header.hasHeaderHash = true;
  if (imageBufferSize != 0) {
    NN_FS_RESULT_THROW_UNLESS(imageBuffer != nullptr,
      ResultNullptrArgument());
    crypto::GenerateSha256Hash(header.imageHash, sizeof(header.imageHash),
      imageBuffer, imageBufferSize);
    NN_FS_RESULT_DO(file->Write(ThumbnailFileHeaderSize + headerBufferSize,
      imageBuffer, imageBufferSize, WriteOption{0}));
  }
  header.hasImageHash = true;
  return file->Write(0, &header, sizeof(header), WriteOption{1});
}

[[gnu::noinline]] Result WriteSaveDataThumbnailFileHeader(
  uint64_t applicationId, UserId userId, const void* headerBuffer,
  size_t headerBufferSize) {
  if (headerBufferSize == 0) {
    return ResultSuccess();
  }
  std::unique_ptr<fsa::IFile> file;
  NN_FS_RESULT_DO(OpenSaveDataThumbnailFileImpl(&file, SaveDataType::Account,
    applicationId, userId));
  ThumbnailFileHeader header = {};
  NN_FS_RESULT_DO(ReadThumbnailFileHeader(&header, file.get()));
  NN_FS_RESULT_THROW_UNLESS(headerBuffer != nullptr, ResultNullptrArgument());
  crypto::GenerateSha256Hash(header.headerHash, sizeof(header.headerHash),
    headerBuffer, headerBufferSize);
  NN_FS_RESULT_DO(file->Write(ThumbnailFileHeaderSize, headerBuffer,
    headerBufferSize, WriteOption{0}));
  header.hasHeaderHash = true;
  return file->Write(0, &header, sizeof(header), WriteOption{1});
}

[[gnu::noinline]] Result CorruptSaveDataThumbnailFileForDebug(
  uint64_t applicationId, UserId userId) {
  return CorruptSaveDataThumbnailFile(applicationId, userId);
}

}

Result ReadSaveDataThumbnailFile(uint64_t applicationId, UserId userId,
  void* headerBuffer, size_t headerBufferSize, void* imageBuffer,
  size_t imageBufferSize) {
  return detail::ReadSaveDataThumbnailFile(applicationId, userId,
    headerBuffer, headerBufferSize, imageBuffer, imageBufferSize);
}

Result ReadSaveDataThumbnailFileHeader(uint64_t applicationId, UserId userId,
  void* headerBuffer, size_t headerBufferSize) {
  return detail::ReadSaveDataThumbnailFileHeader(applicationId, userId,
    headerBuffer, headerBufferSize);
}

Result OpenSaveDataThumbnailFile(std::unique_ptr<fsa::IFile>* outFile,
  uint64_t applicationId, UserId userId) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(OpenSaveDataThumbnailFileImpl(outFile,
    SaveDataType::Account, applicationId, userId));
  return ResultSuccess();
}

Result OpenSaveDataThumbnailFile(std::unique_ptr<fsa::IFile>* outFile,
  SaveDataType type, uint64_t applicationId, UserId userId) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(OpenSaveDataThumbnailFileImpl(outFile,
    type, applicationId, userId));
  return ResultSuccess();
}

Result WriteSaveDataThumbnailFile(uint64_t applicationId, UserId userId,
  const void* headerBuffer, size_t headerBufferSize, const void* imageBuffer,
  size_t imageBufferSize) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(detail::WriteSaveDataThumbnailFile(
    applicationId, userId, headerBuffer, headerBufferSize, imageBuffer,
    imageBufferSize));
  return ResultSuccess();
}

Result WriteSaveDataThumbnailFileHeader(uint64_t applicationId, UserId userId,
  const void* headerBuffer, size_t headerBufferSize) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(detail::WriteSaveDataThumbnailFileHeader(
    applicationId, userId, headerBuffer, headerBufferSize));
  return ResultSuccess();
}

Result CorruptSaveDataThumbnailFileForDebug(uint64_t applicationId,
  UserId userId) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(CorruptSaveDataThumbnailFile(
    applicationId, userId));
  return ResultSuccess();
}

}
