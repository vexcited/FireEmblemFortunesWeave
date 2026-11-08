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

[[gnu::visibility("hidden")]] extern const U64 GameSlot_212d630;
[[gnu::visibility("hidden")]] U64 GameRoutine_1a09c50(U64);

[[gnu::visibility("hidden")]] void GameStub_873eb0(U64 object) {
  At<U64>(object, 0) = GameSlot_212d630 + 0x10;
  const U64 owned = At<U64>(object, 0x38);
  if (owned != 0) {
    GameRoutine_1a09c50(owned);
  }

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

[[gnu::visibility("hidden")]] void GameStub_9c2bf0(U64 object) {
  At<U64>(object, 0) = GameSlot_212d630 + 0x10;
  const U64 owned = At<U64>(object, 0x38);
  if (owned != 0) {
    GameRoutine_1a09c50(owned);
  }

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

[[gnu::visibility("hidden")]] void GameStub_9c2d10(U64 object) {
  At<U64>(object, 0) = GameSlot_212d630 + 0x10;
  const U64 owned = At<U64>(object, 0x38);
  if (owned != 0) {
    GameRoutine_1a09c50(owned);
  }

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

[[gnu::visibility("hidden")]] void GameStub_13210b0(U64 object) {
  At<U64>(object, 0) = GameSlot_212d630 + 0x10;
  const U64 owned = At<U64>(object, 0x38);
  if (owned != 0) {
    GameRoutine_1a09c50(owned);
  }

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

[[gnu::visibility("hidden")]] void GameStub_1436040(U64 object) {
  At<U64>(object, 0) = GameSlot_212d630 + 0x10;
  const U64 owned = At<U64>(object, 0x38);
  if (owned != 0) {
    GameRoutine_1a09c50(owned);
  }

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

[[gnu::visibility("hidden")]] void GameStub_14362f0(U64 object) {
  At<U64>(object, 0) = GameSlot_212d630 + 0x10;
  const U64 owned = At<U64>(object, 0x38);
  if (owned != 0) {
    GameRoutine_1a09c50(owned);
  }

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

[[gnu::visibility("hidden")]] void GameStub_15b7f60(U64 object) {
  At<U64>(object, 0) = GameSlot_212d630 + 0x10;
  const U64 owned = At<U64>(object, 0x38);
  if (owned != 0) {
    GameRoutine_1a09c50(owned);
  }

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

[[gnu::visibility("hidden")]] void GameStub_15c1dc0(U64 object) {
  At<U64>(object, 0) = GameSlot_212d630 + 0x10;
  const U64 owned = At<U64>(object, 0x38);
  if (owned != 0) {
    GameRoutine_1a09c50(owned);
  }

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

[[gnu::visibility("hidden")]] void GameStub_15e6720(U64 object) {
  At<U64>(object, 0) = GameSlot_212d630 + 0x10;
  const U64 owned = At<U64>(object, 0x38);
  if (owned != 0) {
    GameRoutine_1a09c50(owned);
  }

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

[[gnu::visibility("hidden")]] void GameStub_15eb070(U64 object) {
  At<U64>(object, 0) = GameSlot_212d630 + 0x10;
  const U64 owned = At<U64>(object, 0x38);
  if (owned != 0) {
    GameRoutine_1a09c50(owned);
  }

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

[[gnu::visibility("hidden")]] void GameStub_15f63c0(U64 object) {
  At<U64>(object, 0) = GameSlot_212d630 + 0x10;
  const U64 owned = At<U64>(object, 0x38);
  if (owned != 0) {
    GameRoutine_1a09c50(owned);
  }

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

[[gnu::visibility("hidden")]] void GameStub_1647110(U64 object) {
  At<U64>(object, 0) = GameSlot_212d630 + 0x10;
  const U64 owned = At<U64>(object, 0x38);
  if (owned != 0) {
    GameRoutine_1a09c50(owned);
  }

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

[[gnu::visibility("hidden")]] void GameStub_16d9820(U64 object) {
  At<U64>(object, 0) = GameSlot_212d630 + 0x10;
  const U64 owned = At<U64>(object, 0x38);
  if (owned != 0) {
    GameRoutine_1a09c50(owned);
  }

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

[[gnu::visibility("hidden")]] void GameStub_16db2d0(U64 object) {
  At<U64>(object, 0) = GameSlot_212d630 + 0x10;
  const U64 owned = At<U64>(object, 0x38);
  if (owned != 0) {
    GameRoutine_1a09c50(owned);
  }

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

[[gnu::visibility("hidden")]] void GameStub_17053c0(U64 object) {
  At<U64>(object, 0) = GameSlot_212d630 + 0x10;
  const U64 owned = At<U64>(object, 0x38);
  if (owned != 0) {
    GameRoutine_1a09c50(owned);
  }

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

[[gnu::visibility("hidden")]] void GameStub_1707c70(U64 object) {
  At<U64>(object, 0) = GameSlot_212d630 + 0x10;
  const U64 owned = At<U64>(object, 0x38);
  if (owned != 0) {
    GameRoutine_1a09c50(owned);
  }

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

[[gnu::visibility("hidden")]] void GameStub_1707d80(U64 object) {
  At<U64>(object, 0) = GameSlot_212d630 + 0x10;
  const U64 owned = At<U64>(object, 0x38);
  if (owned != 0) {
    GameRoutine_1a09c50(owned);
  }

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

[[gnu::visibility("hidden")]] void GameStub_1709530(U64 object) {
  At<U64>(object, 0) = GameSlot_212d630 + 0x10;
  const U64 owned = At<U64>(object, 0x38);
  if (owned != 0) {
    GameRoutine_1a09c50(owned);
  }

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

[[gnu::visibility("hidden")]] void GameStub_170b7c0(U64 object) {
  At<U64>(object, 0) = GameSlot_212d630 + 0x10;
  const U64 owned = At<U64>(object, 0x38);
  if (owned != 0) {
    GameRoutine_1a09c50(owned);
  }

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

[[gnu::visibility("hidden")]] void GameStub_1710720(U64 object) {
  At<U64>(object, 0) = GameSlot_212d630 + 0x10;
  const U64 owned = At<U64>(object, 0x38);
  if (owned != 0) {
    GameRoutine_1a09c50(owned);
  }

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

[[gnu::visibility("hidden")]] void GameStub_17316f0(U64 object) {
  At<U64>(object, 0) = GameSlot_212d630 + 0x10;
  const U64 owned = At<U64>(object, 0x38);
  if (owned != 0) {
    GameRoutine_1a09c50(owned);
  }

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

[[gnu::visibility("hidden")]] void GameStub_17b00e0(U64 object) {
  At<U64>(object, 0) = GameSlot_212d630 + 0x10;
  const U64 owned = At<U64>(object, 0x38);
  if (owned != 0) {
    GameRoutine_1a09c50(owned);
  }

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

[[gnu::visibility("hidden")]] void GameStub_17b0320(U64 object) {
  At<U64>(object, 0) = GameSlot_212d630 + 0x10;
  const U64 owned = At<U64>(object, 0x38);
  if (owned != 0) {
    GameRoutine_1a09c50(owned);
  }

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

[[gnu::visibility("hidden")]] void GameStub_18506e0(U64 object) {
  At<U64>(object, 0) = GameSlot_212d630 + 0x10;
  const U64 owned = At<U64>(object, 0x38);
  if (owned != 0) {
    GameRoutine_1a09c50(owned);
  }

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

[[gnu::visibility("hidden")]] void GameStub_1863620(U64 object) {
  At<U64>(object, 0) = GameSlot_212d630 + 0x10;
  const U64 owned = At<U64>(object, 0x38);
  if (owned != 0) {
    GameRoutine_1a09c50(owned);
  }

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

[[gnu::visibility("hidden")]] void GameStub_1863ee0(U64 object) {
  At<U64>(object, 0) = GameSlot_212d630 + 0x10;
  const U64 owned = At<U64>(object, 0x38);
  if (owned != 0) {
    GameRoutine_1a09c50(owned);
  }

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

[[gnu::visibility("hidden")]] void GameStub_186b840(U64 object) {
  At<U64>(object, 0) = GameSlot_212d630 + 0x10;
  const U64 owned = At<U64>(object, 0x38);
  if (owned != 0) {
    GameRoutine_1a09c50(owned);
  }

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

[[gnu::visibility("hidden")]] void GameStub_1872820(U64 object) {
  At<U64>(object, 0) = GameSlot_212d630 + 0x10;
  const U64 owned = At<U64>(object, 0x38);
  if (owned != 0) {
    GameRoutine_1a09c50(owned);
  }

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

[[gnu::visibility("hidden")]] void GameStub_18830f0(U64 object) {
  At<U64>(object, 0) = GameSlot_212d630 + 0x10;
  const U64 owned = At<U64>(object, 0x38);
  if (owned != 0) {
    GameRoutine_1a09c50(owned);
  }

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

[[gnu::visibility("hidden")]] void GameStub_19260e0(U64 object) {
  At<U64>(object, 0) = GameSlot_212d630 + 0x10;
  const U64 owned = At<U64>(object, 0x38);
  if (owned != 0) {
    GameRoutine_1a09c50(owned);
  }

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

[[gnu::visibility("hidden")]] void GameStub_192e5e0(U64 object) {
  At<U64>(object, 0) = GameSlot_212d630 + 0x10;
  const U64 owned = At<U64>(object, 0x38);
  if (owned != 0) {
    GameRoutine_1a09c50(owned);
  }

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

[[gnu::visibility("hidden")]] void GameStub_199bb90(U64 object) {
  At<U64>(object, 0) = GameSlot_212d630 + 0x10;
  const U64 owned = At<U64>(object, 0x38);
  if (owned != 0) {
    GameRoutine_1a09c50(owned);
  }

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
