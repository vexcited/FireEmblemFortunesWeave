#include "nn/util/uuid.hpp"

#include <stddef.h>

#include "nn/diag/diag_abort.hpp"

namespace nn::os {

void GenerateRandomBytes(void* buffer, size_t size);

}

namespace nn::util {

namespace {

// The source bytes hold the RFC 4122 fields in little endian order, the
// UUID stores them big endian with the version and variant bits set.
Uuid MakeUuid(const uint8_t* bytes, uint8_t version) {
  Uuid uuid;
  uuid.data[0] = bytes[3];
  uuid.data[1] = bytes[2];
  uuid.data[2] = bytes[1];
  uuid.data[3] = bytes[0];
  uuid.data[4] = bytes[5];
  uuid.data[5] = bytes[4];
  uuid.data[6] = static_cast<uint8_t>((bytes[7] & 0x0f) | (version << 4));
  uuid.data[7] = bytes[6];
  uuid.data[8] = static_cast<uint8_t>((bytes[8] & 0x3f) | 0x80);
  uuid.data[9] = bytes[9];
  for (int i = 0; i < 6; ++i) {
    uuid.data[10 + i] = bytes[15 - i];
  }
  return uuid;
}

}

void GetTemporaryPath(char* /* buffer */, int /* size */) {
  NN_ABORT_UNLESS(false);
}

Uuid GenerateUuidVersion5(const void* hash) {
  return MakeUuid(static_cast<const uint8_t*>(hash), 5);
}

Uuid GenerateUuid() {
  uint8_t bytes[16] = {};
  os::GenerateRandomBytes(bytes, sizeof(bytes));
  return MakeUuid(bytes, 4);
}

}
