#pragma once

#include <stdint.h>

namespace nn::fs {

struct DirectoryEntry {
  char name[769];
  char reserved1[3];
  int8_t type;
  char reserved2[3];
  int64_t fileSize;
};

}
