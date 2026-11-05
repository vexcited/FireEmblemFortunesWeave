#pragma once

#include <stdint.h>

#include <memory>

#include "nn/fs/detail/fs_memory.hpp"
#include "nn/fs/fs_save_data_types.hpp"
#include "nn/fssrv/sf/fssrv_sf_ifile_system_proxy.hpp"

namespace nn::fs {

class SaveDataIterator;

namespace detail {

Result ReadSaveDataIteratorSaveDataInfo(int64_t* outCount,
  SaveDataInfo* outInfos, SaveDataIterator* iterator, int64_t count);

}

class SaveDataIterator {
  friend Result detail::ReadSaveDataIteratorSaveDataInfo(int64_t* outCount,
    SaveDataInfo* outInfos, SaveDataIterator* iterator, int64_t count);

public:
  explicit SaveDataIterator(
    nn::sf::SharedPointer<fssrv::sf::ISaveDataInfoReader>&& reader);

  Result ReadSaveDataInfo(int64_t* outCount, SaveDataInfo* outInfos,
    int64_t count);

  static void* operator new(size_t size) noexcept {
    return detail::Allocate(size);
  }

  static void operator delete(void* pointer, size_t size) noexcept {
    detail::Deallocate(pointer, size);
  }

private:
  Result ReadSaveDataInfoImpl(int64_t* outCount, SaveDataInfo* outInfos,
    int64_t count);

  nn::sf::SharedPointer<fssrv::sf::ISaveDataInfoReader> m_Reader;
};

Result OpenSaveDataIterator(std::unique_ptr<SaveDataIterator>* outIterator,
  SaveDataSpaceId spaceId);
Result OpenSaveDataIterator(std::unique_ptr<SaveDataIterator>* outIterator,
  SaveDataSpaceId spaceId, const SaveDataFilter& filter);

namespace detail {

Result OpenSaveDataIterator(std::unique_ptr<SaveDataIterator>* outIterator,
  SaveDataSpaceId spaceId);
Result OpenSaveDataIterator(std::unique_ptr<SaveDataIterator>* outIterator,
  SaveDataSpaceId spaceId, const SaveDataFilter& filter);

}

}
