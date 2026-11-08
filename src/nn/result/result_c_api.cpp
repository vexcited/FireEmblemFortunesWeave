#include <stdint.h>

extern "C" {

struct nnResult {
  uint32_t value;
};

int nnResultGetModule(nnResult result) {
  return result.value & 0x1ff;
}

int nnResultGetDescription(nnResult result) {
  return (result.value >> 9) & 0x1fff;
}

bool nnResultIsSuccess(nnResult result) {
  return result.value == 0;
}

bool nnResultIsFailure(nnResult result) {
  return result.value != 0;
}

nnResult nnResultSuccess() {
  return {0};
}

}
