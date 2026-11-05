#include "nn/fs/fs_program.hpp"

namespace nn::fs::detail {

void InitializeFileSystemLibrary() {
  static bool s_IsInitialized = [] {
    InitializeFileSystemCreatorInterfaces();
    return true;
  }();
  static_cast<void>(s_IsInitialized);
}

}
