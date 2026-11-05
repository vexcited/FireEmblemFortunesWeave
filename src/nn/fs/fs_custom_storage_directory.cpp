#include "nn/fs/fs_content_storage.hpp"

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::fs {

const char* GetCustomStorageDirectoryName(CustomStorageId id) {
  switch (id) {
    case CustomStorageId::System:
    case CustomStorageId::SdCard:
      return "CustomStorage0";
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

}
