#pragma once

#include <stdint.h>

#include "nn/fs/fs_file_system_proxy_types.hpp"

namespace nn::fs {

struct FileTimeStampRaw {
  int64_t create;
  int64_t modify;
  int64_t access;
  bool isLocalTime;
  uint8_t reserved[7];
};

struct FileTimeStamp {
  time::PosixTime create;
  time::PosixTime modify;
  time::PosixTime access;
  bool isLocalTime;
};

}
