#include <memory>

#include "nn/fs/fs_memory_stressor.hpp"
#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/detail/fs_newable.hpp"

namespace nn::fs {

namespace {

struct MemoryStressorObject : public detail::Newable {
  nn::sf::SharedPointer<fssrv::sf::IMemoryStressor> stressor;
};

}

Result OpenMemoryStressor(MemoryStressorHandle* outHandle) {
  std::unique_ptr<MemoryStressorObject> object(new MemoryStressorObject());
  NN_FS_RESULT_THROW_UNLESS_WITH_ABORT_CHECK(object != nullptr,
    ResultAllocationMemoryFailedNew());
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy->OpenMemoryStressor(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IMemoryStressor>>(
      &object->stressor)));
  outHandle->handle = object.release();
  return ResultSuccess();
}

void CloseMemoryStressor(MemoryStressorHandle handle) {
  delete static_cast<MemoryStressorObject*>(handle.handle);
}

Result SetPooledBufferFreeSize(MemoryStressorHandle handle, size_t size) {
  auto object = static_cast<MemoryStressorObject*>(handle.handle);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(
    object->stressor->SetPooledBufferFreeSize(size));
  return ResultSuccess();
}

}
