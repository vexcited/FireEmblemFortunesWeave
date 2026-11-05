#pragma once

#include <stdint.h>

#include "nn/ncm/ncm_ids.hpp"

namespace nn::capsrv {

struct AlbumFileDateTime {
  uint16_t year;
  uint8_t month;
  uint8_t day;
  uint8_t hour;
  uint8_t minute;
  uint8_t second;
  uint8_t id;
};

struct AlbumFileId {
  ncm::ApplicationId applicationId;
  AlbumFileDateTime time;
  uint8_t storage;
  uint8_t contents;
  uint8_t field19;
  uint8_t reserved[5];
};

struct AlbumEntry {
  int64_t size;
  AlbumFileId fileId;
};

struct ApplicationAlbumEntry {
  int64_t size;
  uint64_t hash;
  AlbumFileDateTime time;
  uint8_t storage;
  uint8_t contents;
  uint8_t reserved[6];
};

}
