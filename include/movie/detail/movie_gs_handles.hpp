#pragma once

#include <stdint.h>

// The movie library copies sync handles as 16 bytes, while
// nn/gs/gs_native_window.hpp declares 32, so movie sources use these
// declarations and never include that header.
namespace nn::gs {

#ifndef NN_GS_NATIVE_IMAGE_HANDLE_DEFINED
#define NN_GS_NATIVE_IMAGE_HANDLE_DEFINED

struct NativeImageHandle {
  uint32_t value;
};

#endif

struct NativeSyncHandle {
  uint64_t value[2];
};

}
