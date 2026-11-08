#include <stdint.h>

namespace nn::dd {

// The kernel takes this pseudo handle as the current process.
uint32_t GetCurrentProcessHandle() {
  return 0xffff8001;
}

}
