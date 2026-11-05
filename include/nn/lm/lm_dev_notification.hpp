#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/span.hpp"

namespace nn::diag {

struct DevNotificationHeader {
  uint8_t reserved0[36];
  uint16_t textLength;
  uint16_t reserved26;
};

static_assert(sizeof(DevNotificationHeader) == 40);

}

namespace nn::lm {

class DevNotificationListReader {
 public:
  explicit DevNotificationListReader(Span<const uint8_t> list);

  bool HasCurrent() const;
  DevNotificationListReader& Next();
  const diag::DevNotificationHeader* GetCurrentHeader() const;
  Span<const char> GetCurrentText() const;

 private:
  static constexpr size_t MaxTextLength = 256;

  uint32_t m_Offset;
  Span<const uint8_t> m_List;
};

}
