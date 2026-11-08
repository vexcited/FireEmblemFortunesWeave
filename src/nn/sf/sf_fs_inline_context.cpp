#include <stdint.h>

namespace nn::os {

struct ThreadType;

}

namespace nn::sf {

// The thread keeps its file system inline context in a reserved byte.
uint8_t SetFsInlineContext(os::ThreadType* thread, uint8_t context) {
  return __atomic_exchange_n(reinterpret_cast<uint8_t*>(thread) + 0x100,
    context, __ATOMIC_SEQ_CST);
}

}

namespace nn::sf::hipc::server {

[[gnu::visibility("hidden")]] extern bool
  g_IsHipcServerSessionManagerHandlerInitialized;

bool IsHipcServerSessionManagerHandlerInitialized() {
  return g_IsHipcServerSessionManagerHandlerInitialized;
}

}
