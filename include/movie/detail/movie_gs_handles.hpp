#pragma once

#include <stdint.h>

// The movie library copies sync handles as 16 bytes, while
// nn/gs/gs_native_window.hpp declares 32, so movie sources use these
// declarations and never include that header.
namespace nn::gs {

struct NativeImageHandle {
  uint32_t value;
};

struct NativeSyncHandle {
  uint64_t value[2];
};

}
