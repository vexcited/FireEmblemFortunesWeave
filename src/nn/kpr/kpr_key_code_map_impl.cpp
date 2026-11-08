#include <stdint.h>

#include "nn/diag/unexpected_default.hpp"
#include "nn/hid/hid_device_states.hpp"

namespace nn::kpr {

enum KeyCodeMapMode : int {};

struct KeyCode {
  uint32_t attributes;
  uint16_t code;
  uint16_t reserved;
};

namespace detail {

// Each usage has an entry of 16 bit words: the flags first, then pairs of
// unshifted and shifted codes per mode.
struct KeyCodeMapStorage {
  uint32_t supportedModes;
  int32_t entryStride;
  int32_t entryCount;
  int32_t extraOffset;
  uint8_t reserved[0x30];
  uint16_t entries[1];
};

namespace {

const int KeyCodeMapModeCount = 9;

// The first usage of a key, the ones before are error codes.
constexpr int UsageIdBase = 4;

constexpr uint32_t ModifierControl = 0x1;
constexpr uint32_t ModifierShift = 0x2;
constexpr uint32_t ModifierLeftAlt = 0x4;
constexpr uint32_t ModifierRightAlt = 0x8;
constexpr uint32_t ModifierCapsLock = 0x100;
constexpr uint32_t ModifierNumLock = 0x400;

// Keys of the first kind follow the caps lock, the second the num lock.
constexpr int LockKindCapsLock = 1;
constexpr int LockKindNumLock = 2;

constexpr uint32_t MapHasAltGr = 0x1000000;
constexpr uint32_t MapHasShiftedAltGr = 0x2000000;

constexpr uint32_t AttributeNotCombining = 1;
constexpr uint32_t AttributePrintable = 2;

uint16_t SelectCode(uint16_t unshifted, uint16_t shifted, int lockKind,
  uint32_t modifiers) {
  const bool isShift = (modifiers & ModifierShift) != 0;
  const uint16_t base = isShift ? shifted : unshifted;
  if (lockKind == LockKindNumLock) {
    return (modifiers & ModifierNumLock) != 0 ?
      (isShift ? unshifted : shifted) :
      unshifted;
  }
  if (lockKind == LockKindCapsLock && (modifiers & ModifierCapsLock) != 0) {
    return isShift ? unshifted : shifted;
  }
  return base;
}

uint32_t GetAttributes(uint16_t code) {
  uint32_t attributes =
    static_cast<uint16_t>(code - 0x20) < 0x5f ? AttributePrintable : 0;
  if (code != 0 && static_cast<uint16_t>(code - 0x370) < 0xff90) {
    attributes += AttributeNotCombining;
  }
  return attributes;
}

}

bool IsKeyCodeMapModeSupported(const KeyCodeMapStorage& storage,
  KeyCodeMapMode mode) {
  if (static_cast<uint32_t>(mode) >= KeyCodeMapModeCount) {
    nn::detail::UnexpectedDefaultImpl();
  }
  return (storage.supportedModes & (1u << mode)) != 0;
}

// Alt graph combinations use their own codes, the input modes their own
// columns when the map supports them.
void GetKeyCode(KeyCode* pOutCode, int usageId,
  util::BitFlagSet<32, hid::KeyboardModifier> modifierSet,
  const KeyCodeMapStorage& storage, KeyCodeMapMode mode) {
  *pOutCode = {};
  const int index = usageId - UsageIdBase;
  if (usageId < UsageIdBase || storage.entryCount <= index) {
    return;
  }
  const uint32_t modifiers = modifierSet._storage[0];
  const uint32_t mapFlags = storage.supportedModes;
  const uint16_t* pEntry = storage.entries +
    static_cast<uint32_t>(storage.entryStride * index);
  const uint16_t entryFlags = pEntry[0];
  const int kind = entryFlags >> 12;
  uint16_t code;
  const bool isAltGr =
    (~modifiers & (ModifierControl | ModifierLeftAlt)) == 0 ||
    (modifiers & ModifierRightAlt) != 0;
  if (kind == 1 && (mapFlags & MapHasAltGr) != 0 && isAltGr) {
    const uint16_t* pAltGr = pEntry + storage.extraOffset;
    const uint16_t unshifted = pAltGr[0];
    const uint16_t shifted =
      (mapFlags & MapHasShiftedAltGr) != 0 ? pAltGr[1] : 0;
    code = SelectCode(unshifted, shifted,
      (entryFlags & 2) != 0 ? LockKindCapsLock : 0,
      modifiers & (ModifierShift | ModifierCapsLock));
  }
  else if (mode == 5 && (mapFlags & 0x20) != 0 &&
    (modifiers & ModifierShift) == 0) {
    code = SelectCode(pEntry[3], pEntry[4],
      (entryFlags >> 6 & 1) != 0 ? kind : 0, modifiers);
  }
  else if (mode == 6 && (mapFlags & 0x40) != 0 &&
    (modifiers & ModifierShift) == 0) {
    code = SelectCode(pEntry[5], pEntry[6],
      (entryFlags >> 7 & 1) != 0 ? kind : 0, modifiers);
  }
  else if (mode == 8 && (mapFlags & 0x100) != 0) {
    code = SelectCode(pEntry[3], pEntry[4],
      (entryFlags & 1) != 0 ? kind : 0, modifiers);
  }
  else if (mode == 3 && (mapFlags & 0x8) != 0) {
    code = SelectCode(pEntry[3], pEntry[4],
      (entryFlags >> 4 & 1) != 0 ? kind : 0, modifiers);
  }
  else if (mode == 4 && (mapFlags & 0x10) != 0) {
    code = SelectCode(pEntry[3], pEntry[4],
      (entryFlags >> 5 & 1) != 0 ? kind : 0, modifiers);
  }
  else if (mode == 1 && (mapFlags & 0x2) != 0) {
    code = SelectCode(pEntry[3], pEntry[4],
      (entryFlags >> 2 & 1) != 0 ? kind : 0, modifiers);
  }
  else if (mode == 2 && (mapFlags & 0x4) != 0) {
    code = SelectCode(pEntry[5], pEntry[6],
      (entryFlags >> 3 & 1) != 0 ? kind : 0, modifiers);
  }
  else {
    code = SelectCode(pEntry[1], pEntry[2],
      (entryFlags & 1) != 0 ? kind : 0, modifiers);
  }
  pOutCode->code = code;
  pOutCode->attributes = GetAttributes(code);
}

}

}
