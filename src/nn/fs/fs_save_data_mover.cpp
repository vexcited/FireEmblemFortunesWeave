#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fs_save_data_transfer.hpp"
#include "nn/fssrv/sf/fssrv_sf_isave_data_transfer_manager.hpp"

namespace nn::fs {

namespace {

const int64_t MoverBlockSize = 0x80000;
const int64_t MoverWorkingSize = 0x100000;

}

namespace detail {

class [[gnu::visibility("hidden")]] SaveDataMover : public ISaveDataMover {
public:
  explicit SaveDataMover(
    nn::sf::SharedPointer<fssrv::sf::ISaveDataMover>&& mover) {
    m_Interface.Swap(mover);
  }

  Result Register(uint64_t saveDataId) override {
    NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_Interface->Register(saveDataId));
    return ResultSuccess();
  }

  Result Process(int64_t* outRemainingSize, int64_t size) override {
    NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_Interface->Process(
      nn::sf::Out<int64_t>(outRemainingSize), size));
    return ResultSuccess();
  }

  Result Cancel() override {
    NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_Interface->Cancel());
    return ResultSuccess();
  }

  static void* operator new(size_t size) noexcept {
    return detail::Allocate(size);
  }

  static void operator delete(void* pointer, size_t size) noexcept {
    detail::Deallocate(pointer, size);
  }

private:
  nn::sf::SharedPointer<fssrv::sf::ISaveDataMover> m_Interface;
};

}

Result OpenSaveDataMover(std::unique_ptr<ISaveDataMover>* outValue,
  SaveDataSpaceId sourceSpaceId, SaveDataSpaceId destinationSpaceId,
  nn::sf::NativeHandle&& transferMemoryHandle, size_t transferMemorySize) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  nn::sf::SharedPointer<fssrv::sf::ISaveDataMover> mover;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy->OpenSaveDataMover(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::ISaveDataMover>>(&mover),
    sourceSpaceId, destinationSpaceId, std::move(transferMemoryHandle),
    transferMemorySize));
  outValue->reset(new detail::SaveDataMover(std::move(mover)));
  return ResultSuccess();
}

void SizeCalculatorForSaveDataMover::Add(const SaveDataInfo& info) {
  m_TotalSize += (info.size + MoverBlockSize - 1) & ~(MoverBlockSize - 1);
}

int64_t SizeCalculatorForSaveDataMover::GetTotalSize() {
  return m_TotalSize + MoverWorkingSize;
}

}
