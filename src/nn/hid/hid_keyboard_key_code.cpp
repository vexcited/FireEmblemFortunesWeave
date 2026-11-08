#include <stdint.h>

#include "nn/diag/unexpected_default.hpp"
#include "nn/util/bit_flag_set.hpp"

namespace nn::hid {

struct KeyboardModifier;
struct KeyboardLayout;

using KeyboardModifierSet = util::BitFlagSet<32, KeyboardModifier>;

}

namespace nn::kpr {

struct KeyCode {
  uint32_t reserved0;
  uint16_t code;
  uint16_t reserved6;
};

namespace detail {

struct KeyCodeMapStorage;

enum KeyCodeMapMode : int32_t {
  KeyCodeMapMode_Default = 0,
  KeyCodeMapMode_Hiragana = 1,
  KeyCodeMapMode_Katakana = 2,
  KeyCodeMapMode_Cyrillic = 3,
  KeyCodeMapMode_Hangul = 4,
  KeyCodeMapMode_ZhuyinTraditional = 5,
  KeyCodeMapMode_CangjieTraditional = 6,
  KeyCodeMapMode_Thai = 8,
};

void GetKeyCode(KeyCode* pOutKeyCode, int usageId,
  hid::KeyboardModifierSet modifiers, const KeyCodeMapStorage& map,
  KeyCodeMapMode mode);

}

}

namespace nn::hid::detail {

// The vendor maps of each keyboard layout.
[[gnu::visibility("hidden")]] extern const kpr::detail::KeyCodeMapStorage
  KeyCodeMapEnglishUk;
[[gnu::visibility("hidden")]] extern const kpr::detail::KeyCodeMapStorage
  KeyCodeMapEnglishUs;
[[gnu::visibility("hidden")]] extern const kpr::detail::KeyCodeMapStorage
  KeyCodeMapEnglishUsInternational;
[[gnu::visibility("hidden")]] extern const kpr::detail::KeyCodeMapStorage
  KeyCodeMapFrench;
[[gnu::visibility("hidden")]] extern const kpr::detail::KeyCodeMapStorage
  KeyCodeMapFrenchCanada;
[[gnu::visibility("hidden")]] extern const kpr::detail::KeyCodeMapStorage
  KeyCodeMapGerman;
[[gnu::visibility("hidden")]] extern const kpr::detail::KeyCodeMapStorage
  KeyCodeMapItalian;
[[gnu::visibility("hidden")]] extern const kpr::detail::KeyCodeMapStorage
  KeyCodeMapJapanese;
[[gnu::visibility("hidden")]] extern const kpr::detail::KeyCodeMapStorage
  KeyCodeMapPortuguese;
[[gnu::visibility("hidden")]] extern const kpr::detail::KeyCodeMapStorage
  KeyCodeMapRussian;
[[gnu::visibility("hidden")]] extern const kpr::detail::KeyCodeMapStorage
  KeyCodeMapSpanish;
[[gnu::visibility("hidden")]] extern const kpr::detail::KeyCodeMapStorage
  KeyCodeMapSpanishLatinAmerica;
[[gnu::visibility("hidden")]] extern const kpr::detail::KeyCodeMapStorage
  KeyCodeMapKorean;
[[gnu::visibility("hidden")]] extern const kpr::detail::KeyCodeMapStorage
  KeyCodeMapChineseTraditional;
[[gnu::visibility("hidden")]] extern const kpr::detail::KeyCodeMapStorage
  KeyCodeMapThai;
[[gnu::visibility("hidden")]] extern const kpr::detail::KeyCodeMapStorage
  KeyCodeMapPolish;

}

namespace nn::hid {

namespace {

using kpr::detail::KeyCodeMapMode;
using kpr::detail::KeyCodeMapStorage;

// Shortcuts held with these modifiers ignore the input mode.
constexpr uint32_t ShortcutModifierMask = 0x1d;
constexpr uint32_t KatakanaModifier = 0x800;
constexpr uint32_t HiraganaModifier = 0x1000;

const KeyCodeMapStorage& GetKeyCodeMap(uint32_t layout) {
  switch (layout) {
    case 0x4040404:
    case 0x4040409:
    case 0x4040c04:
      return detail::KeyCodeMapChineseTraditional;
    case 0x4070407:
      return detail::KeyCodeMapGerman;
    case 0x4090409:
    case 0x8040804:
      return detail::KeyCodeMapEnglishUs;
    case 0x40a0c0a:
      return detail::KeyCodeMapSpanish;
    case 0x40c040c:
      return detail::KeyCodeMapFrench;
    case 0x4100410:
      return detail::KeyCodeMapItalian;
    case 0x4110411:
      return detail::KeyCodeMapJapanese;
    case 0x4120409:
    case 0x4120412:
      return detail::KeyCodeMapKorean;
    case 0x4150415:
      return detail::KeyCodeMapPolish;
    case 0x4190409:
    case 0x4190419:
      return detail::KeyCodeMapRussian;
    case 0x41e0409:
    case 0x41e041e:
      return detail::KeyCodeMapThai;
    case 0x8090809:
      return detail::KeyCodeMapEnglishUk;
    case 0x80a580a:
      return detail::KeyCodeMapSpanishLatinAmerica;
    case 0x8160816:
      return detail::KeyCodeMapPortuguese;
    case 0xf0010409:
      return detail::KeyCodeMapEnglishUsInternational;
    case 0xf0200c0c:
      return detail::KeyCodeMapFrenchCanada;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

KeyCodeMapMode GetKeyCodeMapMode(uint32_t layout, uint32_t modifiers) {
  switch (layout) {
    case 0x4040404:
      return kpr::detail::KeyCodeMapMode_ZhuyinTraditional;
    case 0x4040c04:
      return kpr::detail::KeyCodeMapMode_CangjieTraditional;
    case 0x4110411:
      if ((modifiers & HiraganaModifier) != 0) {
        return kpr::detail::KeyCodeMapMode_Hiragana;
      }
      return static_cast<KeyCodeMapMode>((modifiers & KatakanaModifier) >> 10);
    case 0x4120412:
      return kpr::detail::KeyCodeMapMode_Hangul;
    case 0x4190419:
      return kpr::detail::KeyCodeMapMode_Cyrillic;
    case 0x41e041e:
      return kpr::detail::KeyCodeMapMode_Thai;
    case 0x4040409:
    case 0x4070407:
    case 0x4090409:
    case 0x8040804:
    case 0x40a0c0a:
    case 0x40c040c:
    case 0x4100410:
    case 0x4120409:
    case 0x4150415:
    case 0x4190409:
    case 0x41e0409:
    case 0x8090809:
    case 0x80a580a:
    case 0x8160816:
    case 0xf0010409:
    case 0xf0200c0c:
      return kpr::detail::KeyCodeMapMode_Default;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

}

void GetKeyCode(uint16_t* pOutKeyCode, int usageId,
  util::BitFlagSet<32, KeyboardModifier> modifiers,
  util::BitPack<uint32_t, KeyboardLayout> layout) {
  kpr::KeyCode keyCode = {};
  const KeyCodeMapStorage& map = GetKeyCodeMap(layout._storage);
  if ((modifiers._storage[0] & ShortcutModifierMask) != 0) {
    kpr::detail::GetKeyCode(&keyCode, usageId, modifiers, map,
      kpr::detail::KeyCodeMapMode_Default);
    const uint16_t code = keyCode.code;
    *pOutKeyCode = code >= 'A' && code <= 'Z' ? code + ('a' - 'A') : code;
    return;
  }
  kpr::detail::GetKeyCode(&keyCode, usageId, modifiers, map,
    GetKeyCodeMapMode(layout._storage, modifiers._storage[0]));
  *pOutKeyCode = keyCode.code;
}

}
