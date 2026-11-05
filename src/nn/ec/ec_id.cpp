#include "nn/ec/ec_shop_api.hpp"

#include <stdlib.h>

namespace nn::ec {

namespace {

uint64_t StringToId(const char* string) {
  char* end = nullptr;
  uint64_t value = strtoull(string, &end, 10);
  if (end == nullptr || end == string || *end != '\0') {
    return 0;
  }
  return value;
}

}

NsUid StringToNsUid(const char* string) {
  return {StringToId(string)};
}

CouponId StringToCouponId(const char* string) {
  return {StringToId(string)};
}

}
