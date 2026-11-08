#include <errno.h>
#include <stdint.h>

#include "nn/result.hpp"

namespace nn {

namespace detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace fs {

enum DirectoryEntryType : int32_t {
  DirectoryEntryType_Directory,
  DirectoryEntryType_File,
};

Result GetEntryType(DirectoryEntryType* outType, const char* path);

}

}

extern "C" {

[[gnu::visibility("hidden")]] int __nnmusl_check_device_path(const char* path);
[[gnu::visibility("hidden")]] uint32_t __nnmusl_resolve_path(int* outLength,
  char* buffer, int bufferSize, const char* path, int directory);
[[gnu::visibility("hidden")]] int __nnmusl_result_to_errno(uint32_t result);

// The entry type doubles as the result, a missing path reports 2.
[[gnu::visibility("hidden")]] int __nnmusl_path_kind(const char* path) {
  nn::fs::DirectoryEntryType type{};

  if (path[0] == '/') {
    if (__nnmusl_check_device_path(path) != -1) {
      return 1;
    }
  }
  else if (path[0] == '\0') {
    errno = ENOENT;
    return -1;
  }

  int length;
  char buffer[785];
  uint32_t error = __nnmusl_resolve_path(&length, buffer, sizeof(buffer),
    path, -100);
  if (error != 0) {
    errno = __nnmusl_result_to_errno(error);
    return -1;
  }

  nn::Result result = nn::fs::GetEntryType(&type, buffer);
  if (result.IsFailure()) {
    if (result.GetInnerValueForDebug() == 0x202) {
      return 2;
    }

    errno = __nnmusl_result_to_errno(result.value);
    return -1;
  }

  switch (type) {
    case nn::fs::DirectoryEntryType_Directory:
    case nn::fs::DirectoryEntryType_File:
      return type;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

}
