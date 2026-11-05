#include "nn/audio/driver/driver.hpp"

namespace nn::audio::driver::detail {
namespace {

constexpr PhysicalMemoryAttributeSet Attributes(uint32_t value) {
  return {{value}};
}

constexpr PhysicalMemoryGroupDescriptor PhysicalMemoryGroups[] = {
  {
    "Adsp",
    dd::DeviceName(1),
    {
      {"Pool", {0x80000000, 0x27ff7000}, Attributes(9)},
      {"DiagInfo", {0xa7ff7000, 0x2000}, Attributes(5)},
      {"FatalInfo", {0xa7ff9000, 0x1000}, Attributes(5)},
      {"MailboxDescriptor0", {0xa7ffa000, 0x1000}, Attributes(5)},
      {"MailboxDescriptor1", {0xa7ffb000, 0x1000}, Attributes(5)},
      {"MailboxDescriptor2", {0xa7ffc000, 0x1000}, Attributes(5)},
      {"MailboxDescriptor3", {0xa7ffd000, 0x1000}, Attributes(5)},
      {"IpcDescriptor", {0xa7ffe000, 0x1000}, Attributes(5)},
      {"AdspLog0", {0xa80f8000, 0x8000}, Attributes(6)},
      {"AdspOs0", {0xa8100000, 0xa00000}, Attributes(6)},
    },
  },
  {
    "Test",
    dd::DeviceName(0),
    {
      {"Pool", {0x80000000, 0x10000000}, Attributes(9)},
      {"Test", {0x90000000, 0x10000000}, Attributes(5)},
    },
  },
};

}

Span<const PhysicalMemoryGroupDescriptor> GetPhysicalMemoryGroupDescriptor() {
  return {PhysicalMemoryGroups, 2};
}

}
