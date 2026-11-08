#include <stdint.h>

#include "memory/heap_manager.hpp"

using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::visibility("hidden")]] extern const U64 GameSlot_212f3c0;
[[gnu::visibility("hidden")]] extern const U64 GameSlot_2130190;
[[gnu::visibility("hidden")]] extern const U64 GameSlot_2131310;
[[gnu::visibility("hidden")]] extern const U64 GameSlot_2131b48;

[[gnu::visibility("hidden")]] void GameStub_e37060(U64 object) {
  At<U64>(object, 0) = GameSlot_212f3c0 + 0x10;
  if ((At<U8>(object, 0x10) & 1) != 0) {
    const U64 data = At<U64>(object, 0x20);
    if (data != 0) {
      fw::memory::g_heap_manager->GetAllocator(0).Free(
        reinterpret_cast<void*>(data));
    }
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_e374b0(U64 object) {
  At<U64>(object, 0) = GameSlot_212f3c0 + 0x10;
  if ((At<U8>(object, 0x10) & 1) != 0) {
    const U64 data = At<U64>(object, 0x20);
    if (data != 0) {
      fw::memory::g_heap_manager->GetAllocator(0).Free(
        reinterpret_cast<void*>(data));
    }
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_e37540(U64 object) {
  At<U64>(object, 0) = GameSlot_212f3c0 + 0x10;
  if ((At<U8>(object, 0x10) & 1) != 0) {
    const U64 data = At<U64>(object, 0x20);
    if (data != 0) {
      fw::memory::g_heap_manager->GetAllocator(0).Free(
        reinterpret_cast<void*>(data));
    }
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_e375d0(U64 object) {
  At<U64>(object, 0) = GameSlot_212f3c0 + 0x10;
  if ((At<U8>(object, 0x10) & 1) != 0) {
    const U64 data = At<U64>(object, 0x20);
    if (data != 0) {
      fw::memory::g_heap_manager->GetAllocator(0).Free(
        reinterpret_cast<void*>(data));
    }
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_e37660(U64 object) {
  At<U64>(object, 0) = GameSlot_212f3c0 + 0x10;
  if ((At<U8>(object, 0x10) & 1) != 0) {
    const U64 data = At<U64>(object, 0x20);
    if (data != 0) {
      fw::memory::g_heap_manager->GetAllocator(0).Free(
        reinterpret_cast<void*>(data));
    }
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_e376f0(U64 object) {
  At<U64>(object, 0) = GameSlot_212f3c0 + 0x10;
  if ((At<U8>(object, 0x10) & 1) != 0) {
    const U64 data = At<U64>(object, 0x20);
    if (data != 0) {
      fw::memory::g_heap_manager->GetAllocator(0).Free(
        reinterpret_cast<void*>(data));
    }
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_e37780(U64 object) {
  At<U64>(object, 0) = GameSlot_212f3c0 + 0x10;
  if ((At<U8>(object, 0x10) & 1) != 0) {
    const U64 data = At<U64>(object, 0x20);
    if (data != 0) {
      fw::memory::g_heap_manager->GetAllocator(0).Free(
        reinterpret_cast<void*>(data));
    }
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_e37810(U64 object) {
  At<U64>(object, 0) = GameSlot_212f3c0 + 0x10;
  if ((At<U8>(object, 0x10) & 1) != 0) {
    const U64 data = At<U64>(object, 0x20);
    if (data != 0) {
      fw::memory::g_heap_manager->GetAllocator(0).Free(
        reinterpret_cast<void*>(data));
    }
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_e378a0(U64 object) {
  At<U64>(object, 0) = GameSlot_212f3c0 + 0x10;
  if ((At<U8>(object, 0x10) & 1) != 0) {
    const U64 data = At<U64>(object, 0x20);
    if (data != 0) {
      fw::memory::g_heap_manager->GetAllocator(0).Free(
        reinterpret_cast<void*>(data));
    }
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_e37930(U64 object) {
  At<U64>(object, 0) = GameSlot_212f3c0 + 0x10;
  if ((At<U8>(object, 0x10) & 1) != 0) {
    const U64 data = At<U64>(object, 0x20);
    if (data != 0) {
      fw::memory::g_heap_manager->GetAllocator(0).Free(
        reinterpret_cast<void*>(data));
    }
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_1127440(U64 object) {
  At<U64>(object, 0) = GameSlot_2130190 + 0x10;
  if ((At<U8>(object, 0x8) & 1) != 0) {
    const U64 data = At<U64>(object, 0x18);
    if (data != 0) {
      fw::memory::g_heap_manager->GetAllocator(0).Free(
        reinterpret_cast<void*>(data));
    }
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_143ad10(U64 object) {
  At<U64>(object, 0) = GameSlot_2131310 + 0x10;
  if ((At<U8>(object, 0x20) & 1) != 0) {
    const U64 data = At<U64>(object, 0x30);
    if (data != 0) {
      fw::memory::g_heap_manager->GetAllocator(0).Free(
        reinterpret_cast<void*>(data));
    }
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_188a5b0(U64 object) {
  At<U64>(object, 0) = GameSlot_2131b48 + 0x10;
  if ((At<U8>(object, 0x30) & 1) != 0) {
    const U64 data = At<U64>(object, 0x40);
    if (data != 0) {
      fw::memory::g_heap_manager->GetAllocator(0).Free(
        reinterpret_cast<void*>(data));
    }
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}
