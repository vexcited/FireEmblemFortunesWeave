#pragma once

#include <stdint.h>

namespace nn::account {

struct Uid {
  uint64_t value[2];
};

struct Nickname {
  char name[33];
};

struct NetworkServiceAccountId {
  uint64_t id;
};

}
