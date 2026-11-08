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

[[gnu::visibility("hidden")]] extern U8 GameData_1f93a10[];
[[gnu::visibility("hidden")]] extern U8 GameData_1f9a440[];
[[gnu::visibility("hidden")]] extern U64 GameData_21ca2e8;
[[gnu::visibility("hidden")]] extern U32 GameData_21d9258;
[[gnu::visibility("hidden")]] extern U8 GameData_1f9d2b0[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fa1068[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fa10e8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fa9000[];
[[gnu::visibility("hidden")]] extern U8 GameData_1faf2d8[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fdcc98[];
[[gnu::visibility("hidden")]] extern U64 GameData_220f818;
[[gnu::visibility("hidden")]] extern U32 GameData_220fd00;
[[gnu::visibility("hidden")]] extern U8 GameData_1fdf380[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fdf4d0[];
[[gnu::visibility("hidden")]] extern U64 GameData_220f8a0;
[[gnu::visibility("hidden")]] extern U32 GameData_2213838;
[[gnu::visibility("hidden")]] extern U8 GameData_1fe3568[];
[[gnu::visibility("hidden")]] extern U8 GameData_1feeee0[];
[[gnu::visibility("hidden")]] extern U64 GameData_22190b0;
[[gnu::visibility("hidden")]] extern U32 GameData_221f308;
[[gnu::visibility("hidden")]] extern U8 GameData_1ff6278[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ff8790[];
[[gnu::visibility("hidden")]] extern U64 GameData_21ec7a8;
[[gnu::visibility("hidden")]] extern U32 GameData_2228070;
[[gnu::visibility("hidden")]] extern U8 GameData_1ffc858[];
[[gnu::visibility("hidden")]] extern U8 GameData_1ffd300[];
[[gnu::visibility("hidden")]] extern U8 GameData_1fffb58[];
[[gnu::visibility("hidden")]] extern U64 GameData_2219088;
[[gnu::visibility("hidden")]] extern U32 GameData_2232010;
[[gnu::visibility("hidden")]] extern U8 GameData_20019f8[];
[[gnu::visibility("hidden")]] extern U64 GameData_22190a0;
[[gnu::visibility("hidden")]] extern U32 GameData_2233738;
[[gnu::visibility("hidden")]] extern U8 GameData_2003488[];
[[gnu::visibility("hidden")]] extern U64 GameData_220f8b8;
[[gnu::visibility("hidden")]] extern U32 GameData_22345f0;
[[gnu::visibility("hidden")]] extern U8 GameData_2003680[];
[[gnu::visibility("hidden")]] extern U8 GameData_2005ce0[];
[[gnu::visibility("hidden")]] extern U64 GameData_2240160;
[[gnu::visibility("hidden")]] extern U64 GameData_2240178;
[[gnu::visibility("hidden")]] extern U64 GameData_22407a8;
[[gnu::visibility("hidden")]] extern U8 GameData_2020fc8[];
[[gnu::visibility("hidden")]] extern U64 GameData_22400e0;
[[gnu::visibility("hidden")]] extern U32 GameData_22407b4;
[[gnu::visibility("hidden")]] extern U8 GameData_2021ab8[];
[[gnu::visibility("hidden")]] extern U64 GameData_22400c8;
[[gnu::visibility("hidden")]] extern U32 GameData_22407b8;
[[gnu::visibility("hidden")]] extern U64 GameData_22407c0;
[[gnu::visibility("hidden")]] extern U64 GameData_22408e8;
[[gnu::visibility("hidden")]] extern U64 GameData_2240f00;
[[gnu::visibility("hidden")]] extern U64 GameData_224b470;
[[gnu::visibility("hidden")]] extern U64 GameData_224b478;
[[gnu::visibility("hidden")]] extern U8 GameData_20c2320[];
[[gnu::visibility("hidden")]] extern U8 GameData_20c2420[];
[[gnu::visibility("hidden")]] extern U8 GameData_20f37c8[];
[[gnu::visibility("hidden")]] extern U8 GameData_20f38c8[];
[[gnu::visibility("hidden")]] extern U8 GameData_20fd598[];
[[gnu::visibility("hidden")]] extern U64 GameData_226d110;

[[gnu::visibility("hidden")]] void GameStub_72b3c0(U64 object) {
  const U64 begin = At<U64>(object, 0x408);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f93a10);
  if (begin != 0) {
    At<U64>(object, 0x410) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_74d560(U64 object) {
  const U64 begin = At<U64>(object, 0x8);
  if (begin != 0) {
    At<U64>(object, 0x10) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_7c4150(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f9a440);
  if (GameData_21ca2e8 == object) {
    GameData_21ca2e8 = 0;
    GameData_21d9258 = 0;
  }
}

[[gnu::visibility("hidden")]] void GameStub_7d61c0(U64 object) {
  const U64 begin = At<U64>(object, 0x8);
  if (begin != 0) {
    At<U64>(object, 0x10) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_7fe8d0(U64 object) {
  const U64 begin = At<U64>(object, 0x30);
  if (begin != 0) {
    At<U64>(object, 0x38) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_803db0(U64 object) {
  const U64 begin = At<U64>(object, 0x8);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1f9d2b0);
  if (begin != 0) {
    At<U64>(object, 0x10) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_857af0(U64 object) {
  const U64 begin = At<U64>(object, 0x8);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fa1068);
  if (begin != 0) {
    At<U64>(object, 0x10) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_857cd0(U64 object) {
  const U64 begin = At<U64>(object, 0x8);
  if (begin != 0) {
    At<U64>(object, 0x10) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_857dd0(U64 object) {
  const U64 begin = At<U64>(object, 0x8);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fa10e8);
  if (begin != 0) {
    At<U64>(object, 0x10) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_857fb0(U64 object) {
  const U64 begin = At<U64>(object, 0x8);
  if (begin != 0) {
    At<U64>(object, 0x10) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_8b2ee0(U64 object) {
  const U64 begin = At<U64>(object, 0x8);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fa9000);
  if (begin != 0) {
    At<U64>(object, 0x10) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_8b30f0(U64 object) {
  const U64 begin = At<U64>(object, 0x8);
  if (begin != 0) {
    At<U64>(object, 0x10) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_943dc0(U64 object) {
  const U64 begin = At<U64>(object, 0x10);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1faf2d8);
  if (begin != 0) {
    At<U64>(object, 0x18) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_944000(U64 object) {
  const U64 begin = At<U64>(object, 0x10);
  if (begin != 0) {
    At<U64>(object, 0x18) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_a79200(U64 object) {
  const U64 begin = At<U64>(object, 0x28);
  if (begin != 0) {
    At<U64>(object, 0x30) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_d582a0(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fdcc98);
  if (GameData_220f818 == object) {
    GameData_220f818 = 0;
    GameData_220fd00 = 0;
  }
}

[[gnu::visibility("hidden")]] void GameStub_da7960(U64 object) {
  const U64 begin = At<U64>(object, 0x8);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fdf380);
  if (begin != 0) {
    At<U64>(object, 0x10) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_dad350(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fdf4d0);
  if (GameData_220f8a0 == object) {
    GameData_220f8a0 = 0;
    GameData_2213838 = 0;
  }
}

[[gnu::visibility("hidden")]] void GameStub_e202a0(U64 object) {
  const U64 begin = At<U64>(object, 0x8);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fe3568);
  if (begin != 0) {
    At<U64>(object, 0x10) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_e204b0(U64 object) {
  const U64 begin = At<U64>(object, 0x8);
  if (begin != 0) {
    At<U64>(object, 0x10) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_ed5fa0(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1feeee0);
  if (GameData_22190b0 == object) {
    GameData_22190b0 = 0;
    GameData_221f308 = 0;
  }
}

[[gnu::visibility("hidden")]] void GameStub_f5d790(U64 object) {
  const U64 begin = At<U64>(object, 0x8);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1ff6278);
  if (begin != 0) {
    At<U64>(object, 0x10) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_f90430(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1ff8790);
  if (GameData_21ec7a8 == object) {
    GameData_21ec7a8 = 0;
    GameData_2228070 = 0;
  }
}

[[gnu::visibility("hidden")]] void GameStub_fb8150(U64 object) {
  const U64 begin = At<U64>(object, 0x38);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1ffc858);
  if (begin != 0) {
    At<U64>(object, 0x40) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_fc6d10(U64 object) {
  const U64 begin = At<U64>(object, 0x30);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1ffd300);
  if (begin != 0) {
    At<U64>(object, 0x38) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_ff78e0(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_1fffb58);
  if (GameData_2219088 == object) {
    GameData_2219088 = 0;
    GameData_2232010 = 0;
  }
}

[[gnu::visibility("hidden")]] void GameStub_10114b0(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_20019f8);
  if (GameData_22190a0 == object) {
    GameData_22190a0 = 0;
    GameData_2233738 = 0;
  }
}

[[gnu::visibility("hidden")]] void GameStub_103bc20(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_2003488);
  if (GameData_220f8b8 == object) {
    GameData_220f8b8 = 0;
    GameData_22345f0 = 0;
  }
}

[[gnu::visibility("hidden")]] void GameStub_103da90(U64 object) {
  const U64 begin = At<U64>(object, 0x28);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_2003680);
  if (begin != 0) {
    At<U64>(object, 0x30) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_1063f80(U64 object) {
  const U64 begin = At<U64>(object, 0x58);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_2005ce0);
  if (begin != 0) {
    At<U64>(object, 0x60) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_1064360(U64 object) {
  const U64 begin = At<U64>(object, 0x58);
  if (begin != 0) {
    At<U64>(object, 0x60) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_10d78f0(U64 object) {
  const U64 begin = At<U64>(object, 0x48);
  if (begin != 0) {
    At<U64>(object, 0x50) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_10e7f30(U64 object) {
  const U64 begin = At<U64>(object, 0x28);
  if (begin != 0) {
    At<U64>(object, 0x30) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_12354b0(U64 object) {
  if (GameData_2240160 == object) {
    GameData_2240160 = 0;
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_1235500(U64 object) {
  if (GameData_2240160 == object) {
    GameData_2240160 = 0;
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_12443d0(U64 object) {
  if (GameData_2240178 == object) {
    GameData_2240178 = 0;
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_1286f10(U64 object) {
  if (GameData_22407a8 == object) {
    GameData_22407a8 = 0;
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_12a1c80(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_2020fc8);
  if (GameData_22400e0 == object) {
    GameData_22400e0 = 0;
    GameData_22407b4 = 0;
  }
}

[[gnu::visibility("hidden")]] void GameStub_12a4c90(U64 object) {
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_2021ab8);
  if (GameData_22400c8 == object) {
    GameData_22400c8 = 0;
    GameData_22407b8 = 0;
  }
}

[[gnu::visibility("hidden")]] void GameStub_12a7510(U64 object) {
  if (GameData_22407c0 == object) {
    GameData_22407c0 = 0;
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_12ae2b0(U64 object) {
  if (GameData_22408e8 == object) {
    GameData_22408e8 = 0;
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_130a040(U64 object) {
  if (GameData_2240f00 == object) {
    GameData_2240f00 = 0;
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_1499ef0(U64 object) {
  if (GameData_224b470 == object) {
    GameData_224b470 = 0;
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_149a300(U64 object) {
  if (GameData_224b478 == object) {
    GameData_224b478 = 0;
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_177f9e0(U64 object) {
  const U64 begin = At<U64>(object, 0x10);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_20c2320);
  if (begin != 0) {
    At<U64>(object, 0x18) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_177fc20(U64 object) {
  const U64 begin = At<U64>(object, 0x10);
  if (begin != 0) {
    At<U64>(object, 0x18) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_17803d0(U64 object) {
  const U64 begin = At<U64>(object, 0x10);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_20c2420);
  if (begin != 0) {
    At<U64>(object, 0x18) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_1780610(U64 object) {
  const U64 begin = At<U64>(object, 0x10);
  if (begin != 0) {
    At<U64>(object, 0x18) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_186f4e0(U64 object) {
  const U64 begin = At<U64>(object, 0x18);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_20f37c8);
  if (begin != 0) {
    At<U64>(object, 0x20) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_186f710(U64 object) {
  const U64 begin = At<U64>(object, 0x18);
  if (begin != 0) {
    At<U64>(object, 0x20) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_186fa10(U64 object) {
  const U64 begin = At<U64>(object, 0x18);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_20f38c8);
  if (begin != 0) {
    At<U64>(object, 0x20) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_186fc40(U64 object) {
  const U64 begin = At<U64>(object, 0x18);
  if (begin != 0) {
    At<U64>(object, 0x20) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_1881b50(U64 object) {
  const U64 begin = At<U64>(object, 0x8);
  At<U64>(object, 0) = reinterpret_cast<U64>(GameData_20fd598);
  if (begin != 0) {
    At<U64>(object, 0x10) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_1881d60(U64 object) {
  const U64 begin = At<U64>(object, 0x8);
  if (begin != 0) {
    At<U64>(object, 0x10) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_19384a0(U64 object) {
  const U64 begin = At<U64>(object, 0x18);
  if (begin != 0) {
    At<U64>(object, 0x20) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_19434f0(U64 object) {
  const U64 begin = At<U64>(object, 0x8);
  if (begin != 0) {
    At<U64>(object, 0x10) = begin;
    fw::memory::g_heap_manager->GetAllocator(0).Free(
      reinterpret_cast<void*>(begin));
  }
}

[[gnu::visibility("hidden")]] void GameStub_195a760(U64 object) {
  if (GameData_226d110 == object) {
    GameData_226d110 = 0;
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}

[[gnu::visibility("hidden")]] void GameStub_195ab00(U64 object) {
  if (GameData_226d110 == object) {
    GameData_226d110 = 0;
  }

  fw::memory::g_heap_manager->GetAllocator(0).Free(
    reinterpret_cast<void*>(object));
}
