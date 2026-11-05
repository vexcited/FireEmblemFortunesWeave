#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_id_string.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fs_save_data_iterator.hpp"

namespace nn::fs {

namespace {

inline Result ReadSaveDataInfo(
  fssrv::sf::ISaveDataInfoReader* reader, int64_t* outCount,
  SaveDataInfo* outInfos, int64_t count) {
  NN_FS_RESULT_THROW_UNLESS(outCount != nullptr && outInfos != nullptr,
    ResultNullptrArgument());
  NN_FS_RESULT_THROW_UNLESS(count >= 0, ResultInvalidArgument());
  return reader->Read(nn::sf::Out<int64_t>(outCount),
    nn::sf::OutBuffer(outInfos, sizeof(SaveDataInfo) * count));
}

template<typename Open>
inline Result OpenSaveDataIteratorImpl(
  std::unique_ptr<SaveDataIterator>* outIterator, Open open) {
  NN_FS_RESULT_THROW_UNLESS(outIterator != nullptr, ResultNullptrArgument());
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  nn::sf::SharedPointer<fssrv::sf::ISaveDataInfoReader> reader;
  NN_FS_RESULT_DO(open(fileSystemProxy,
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::ISaveDataInfoReader>>(
      &reader)));
  std::unique_ptr<SaveDataIterator> iterator(
    new SaveDataIterator(std::move(reader)));
  NN_FS_RESULT_THROW_UNLESS(iterator != nullptr,
    ResultAllocationMemoryFailedInSaveDataManagementA());
  *outIterator = std::move(iterator);
  return ResultSuccess();
}

}

// Exported functions are never inlined into their callers in the SDK.
[[gnu::noinline]] SaveDataIterator::SaveDataIterator(
  nn::sf::SharedPointer<fssrv::sf::ISaveDataInfoReader>&& reader)
  : m_Reader(reader) {}

Result SaveDataIterator::ReadSaveDataInfoImpl(int64_t* outCount,
  SaveDataInfo* outInfos, int64_t count) {
  return fs::ReadSaveDataInfo(m_Reader.operator->(), outCount, outInfos,
    count);
}

Result SaveDataIterator::ReadSaveDataInfo(int64_t* outCount,
  SaveDataInfo* outInfos, int64_t count) {
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result,
    fs::ReadSaveDataInfo(m_Reader.operator->(), outCount, outInfos, count),
    ", size: %ld", count);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

namespace detail {

Result OpenSaveDataIterator(std::unique_ptr<SaveDataIterator>* outIterator,
  SaveDataSpaceId spaceId) {
  return OpenSaveDataIteratorImpl(outIterator,
    [=](const nn::sf::SharedPointer<fssrv::sf::IFileSystemProxy>& proxy,
      const nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::ISaveDataInfoReader>>&
        outReader) -> Result {
      return proxy->OpenSaveDataInfoReaderBySaveDataSpaceId(outReader,
        spaceId);
    });
}

Result OpenSaveDataIterator(std::unique_ptr<SaveDataIterator>* outIterator,
  SaveDataSpaceId spaceId, const SaveDataFilter& filter) {
  return OpenSaveDataIteratorImpl(outIterator,
    [&](const nn::sf::SharedPointer<fssrv::sf::IFileSystemProxy>& proxy,
      const nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::ISaveDataInfoReader>>&
        outReader) -> Result {
      return proxy->OpenSaveDataInfoReaderWithFilter(outReader, spaceId,
        filter);
    });
}

Result ReadSaveDataIteratorSaveDataInfo(int64_t* outCount,
  SaveDataInfo* outInfos, SaveDataIterator* iterator, int64_t count) {
  return fs::ReadSaveDataInfo(iterator->m_Reader.operator->(), outCount,
    outInfos, count);
}

}

Result OpenSaveDataIterator(std::unique_ptr<SaveDataIterator>* outIterator,
  SaveDataSpaceId spaceId) {
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result,
    detail::OpenSaveDataIterator(outIterator, spaceId),
    ", savedataspaceid: %s", detail::IdString().ToString(spaceId));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

Result OpenSaveDataIterator(std::unique_ptr<SaveDataIterator>* outIterator,
  SaveDataSpaceId spaceId, const SaveDataFilter& filter) {
  Result result;
  NN_FS_ACCESS_LOG_SYSTEM(result,
    detail::OpenSaveDataIterator(outIterator, spaceId, filter),
    ", savedataspaceid: %s", detail::IdString().ToString(spaceId));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  return ResultSuccess();
}

}
